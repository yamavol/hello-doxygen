# Hello Doxygen

カスタムデザインを組み込んだDoxygenをcmakeと連携したプロジェクトです。

Doxygen v1.9.6 で動作確認しています。

## 使い方

ドキュメントはdocフォルダにあります。

cmakeの `add_custom_target`を使ってターゲット`doc`を追加しています。以下のコマンドを実行してもドキュメントを生成できます。

```
cmake -B build
cmake --build build --target doc
```

設定方法はCMakeLists.txtを確認してください。

## サンプル

https://yamavol.github.io/hello-doxygen

## Customization

ソースコードはsrcフォルダに、ドキュメントはdoc/src以下に置いています。doc/stylesはデザインやフレームワークに関するファイルです。

Generate layout file

`doxygen -l`

Generate html header,footer and stylesheet

`doxygen -w html header.html footer.html style.css`

## Requirements

- Graphviz [https://graphviz.org/download/](https://graphviz.org/download/)