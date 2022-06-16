# Doxygen Style

Doxygenのカスタムスタイルを組み込んだDoxyfileと、CMakeの設定例です。

Doxygen v1.9.2 で動作確認しています。

## 使い方

cmakeの `add_custom_target`を使ってターゲット`doc`を追加しています。

```
cmake -B build
cmake --build build/doc
```

設定方法はCMakeLists.txtを確認してください。

## Customization

ソースコードはsrcフォルダに、ドキュメントはdoc/files以下に置いています。doc/stylesはデザインやフレームワークに関するファイルです。

Generate layout file

`doxygen -l`

Generate html header,footer and stylesheet

`doxygen -w html header.html footer.html style.css`

## Requirements

- Graphviz [https://graphviz.org/download/](https://graphviz.org/download/)