# 下書き {#draft}


## cmakeとの統合

doxygenをcmakeと統合することで、ドキュメントのリリース作業をビルドパイプラインに組み込み、ドキュメント生成の負担を減らします。

- cmakeのビルドコマンドで、ライブラリとドキュメントの両方をビルドする
- cmake変数をDoxyfile内で使う
- cmakeのオプションで、ドキュメントのビルド設定を変更する
- ドキュメントのout-of-sourceビルドを行う

デメリットは以下の通り

- cmakeがないとドキュメントがビルドできない場合がある。
- cmakeのコマンドが初心者には難しい
- 簡単に呼び出せるのが売りのDoxygenの強みが薄まる

個人的には、ビルドシステムはDoxygen単体で完結している方が簡単で安全だと思うので、Doxyfileにcmake変数の利用は推奨しません。

(cmake --build build --target docの話)

(exclude_from_dirsの話)

## doxygen vs sphinx

- doxygenは c/c++のapi仕様書を作れる。C#/Java/Python/VHDL/Fortranにも対応
- html/rtf/latex/chm形式で出力できる。
- doxygenをドキュメンテーションツールとして使う事例が少なく、トラブルと面倒
- markdownに標準対応
- 拡張性は低い
- デザインが古く、ドキュメンテーションとしては読み辛いが、cssで改造できる。

## 

- mainpage
- page
- subpage
- ref
- 色々な文法
- image

### ページの並び替え問題

subpage等で定義した順に並ぶ(と思われる。

レイアウトファイルを更新しなくていいのはメリット。順序


ファイル名とページ名が分かれているので、ファイル名を変更してもドキュメントが壊れない

markdownの画像が使えない問題

ビルドが遅い

DOT, graphviz

