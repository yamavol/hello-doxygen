\page writing Doxygenの文法

[TOC]

## @コマンド

ソースコードのコメント部分に `@param` と書いて、説明を添えます。色々な書き方の流儀があるので、Doxygen用のスタイルガイドを作るのもおすすめです。

参考例: http://micro-os-plus.github.io/develop/doxygen-style-guide/

### 構造を表す

|  コマンド  |  用途  |
|----------- | -------|
| \@fn       | 関数名 |
| \@struct   | 構造体 |
| \@class    | クラス |
| \@enum     | 列挙体 |

### 振る舞いを説明する


|  コマンド  |  説明  |
|------------|--------|
| \@brief    | 簡単な説明 (summary) |
| \@details  | 詳細な説明 |
| \@param    | 引数   |
| \@return   | 返り値 |
| \@retval   | 具体的な返り値 |
| \@tparam   | テンプレートパラメータ |
| \@code     | 使用例(開始) |
| \@endcode  | 使用例(終了) |
| \@par      | 段落   |


### 注釈を与える

|  コマンド   |  備考  |
|-------------|------|
| \@note       | 特になし 
| \@todo       | todo listに登録される
| \@bug        | bug listに登録される。 |
| \@deprecated | depcrecated listに登録される。 | 
| \@attention |  | 
| \@warning |  | 

### ファイル情報を記す

|  コマンド  |  説明  |
|------------|--------|
| \@file      | ファイル名 |
| \@brief     | 簡単な説明 (summary) |

### 必要に応じて使う

|  コマンド  |  説明 |
|------------|-------|
| \@author   | 作者  |
| \@date     | 日付  | 
| \@version  | バージョン情報 | 


## GraphVizとの連携

dotコマンド(GraphViz)が使える場合、Doxygenはクラスの依存関係や関数のコールグラフを出力できます。Doxyfileで少なくとも以下のオプションを有効にしてください。

```
CALL_GRAPH = YES
CALLER_GRAPH = YES
DOT_MULTI_TARGETS = YES
```

## PlantUMLとの連携

Javaが使える環境でplantuml.jarを用意すれば、 `startuml` コマンドでテキスト中にUML図を記述することができます。簡単な図を挿入したい場合は便利かもしれません。

```
PLANTUML_JAR_PATH = plantuml.jar
```

## TOC

文書が長い場合、\[TOC\]と書けば目次を表示できます。

## Markdown文法

DoxygenのパーサはDoxygenコマンドを優先するため、Markdownの変換には少し癖があります。手元のエディタでは正常でも、Doxygenを通すと意図した出力にならない事があるので、編集時は注意してください。

Doxygenコマンドを文中に記述する場合は、MarkdownのCodeタグで囲ってもDoxygenコマンドとして処理されてしまいます。Doxygenコマンドでエスケープしてください。Doxygenコマンドを意図せず使ってしまう可能性にも注意が必要です。
```
NG Use `\startuml`
OK Use \c \\startuml for something


```
Markdown記法を日本語の文中で使う場合は両端にスペースを入れてください。

```
NG あいうえお**太字**あいうえお
OK あいうえお **太字** あいうえお
```

```
NG あいうえお`code`あいうえお
OK あいうえお `code` あいうえお
```