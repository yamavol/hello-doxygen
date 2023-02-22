# PDF出力 {#man-tex}

Doxygenはlatex形式の文書を出力できる。TeXを導入していれば、pdf文書に変換できる。

Doxygenが出力するmakefileは pdflatex, dvips, ps2pdf コマンドを使うが、これらのコマンド日本語をうまく扱えない。日本語圏でスタンダードな uplatex, dvipdfmx を使うように改造する。

### 設定

Doxyfileを設定する。

```
GENERATE_LATEX = YES
LATEX_CMD_NAME = uplatex
USE_PDFLATEX   = NO
```

LaTeXのスタイルシートを指定する。

```
LATEX_EXTRA_STYLESHEET = xxx.sty
```

お好みで以下の設定も可。

```
LATEX_HEADER = header.sty
LATEX_FOOTER = footer.sty
LATEX_EXTRA_FILES = xxx.cls
```

Doxygenコマンド実行後、latexフォルダに.texファイルが生成される。

```
doxygen Doxyfile
```

makeコマンドを実行し、`refman.dvi`, `refman.idx`(目次データ)を生成する。
```
make
dvipdfmx refman.dvi
```

v1.9.6現在、refman.texの下記箇所がwarningを吐いて処理が中断される。都度R(=run)を押すか、該当部を手動で消すか、LATEX_BATCHMODE=YESを指定する(エラーを無視する設定)とよい。

```
\usepackage{newunicodechar}
\newunicodechar{⁻}{${}^{-}$}% Superscript minus
\newunicodechar{²}{${}^{2}$}% Superscript two
\newunicodechar{³}{${}^{3}$}% Superscript three
```

### LaTeX 設定例

hyperrefのドライバにdvipdfmxを指定する

```
\RequirePackage[dvipdfmx,unicode]{hyperref}
```

pxjahyperを使う

```
\usepackage{pxjahyper}
```



### 手順




### 

### USE_LATEX_CMD



