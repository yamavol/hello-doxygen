# ドキュメントについて

このドキュメントはDoxygenで生成しています。ドキュメントにはソースコードに記述したコメント以外に、独立したMarkdown文書を含めることができます。

Markdown文書を作成する場合、以下のように書いて`page-key`を指定してください。サブページにしない場合は省略しても構いません。

```
# 解説文書 {#page-key}

この文書はxxxを解説します
...
```

```
\page page-key 解説文書

この文書はxxxを解説します。
...
```

`page-key`はDoxygenがこのページを識別するキーです。Doxygenの公式サイトでは`name`と呼ばれています。Doxygenはこのキーを使って文書間のリンクを張ります。キーは **全て小文字の英数字** にすることを推奨します。これを日本語にすると文書の中身が空になるので気を付けましょう。また、大文字・小文字の区別はファイルシステムの仕様に依存します。

http://www.doxygen.jp/commands.html#cmdpage

## サブページ(階層構造)

あるページから `\subpage`コマンドを使って別のページを参照すると、Doxygenは文書間に親子関係を設定します。この情報はサイドバーに表示されるツリービューに反映されるので、折り畳み機能を活用したい場合は`\subpage`を使ってください。

```
- \subpage      subpage-page1
- \subpage      subpage-page2
```

## メインページ

Doxygenのデフォルトのメインぺージ(`mainpage`)を差し替える場合は`\mainpage`コマンドを使ってください。


- \subpage  subpage-page1
- \subpage  subpage-page2


## 詳細

Doxygenの文書の書き方は以下のページにまとめています。

\subpage  writing


より詳しい解説が必要な場合は、公式サイトを参照してください。

https://doxygen.nl/manual/markdown.html