# Matrix-Multiplication
A matrix is a rectangular array or table of numbers, symbols, or expressions, arranged in rows and columns in mathematics.

Matrix multiplication is a binary operation that takes two matrices as input and produces another matrix as output. It is a way to combine the elements of two matrices to produce a new matrix.

If A is an m × n matrix and B is an n × p matrix

  <semantics>
    <mrow class="MJX-TeXAtom-ORD">
      <mstyle displaystyle="true" scriptlevel="0">
        <mrow class="MJX-TeXAtom-ORD">
          <mi mathvariant="bold">A</mi>
        </mrow>
        <mo>=</mo>
        <mrow class="MJX-TeXAtom-ORD">
          <mrow>
            <mo>(</mo>
            <mtable rowspacing="4pt" columnspacing="1em">
              <mtr>
                <mtd>
                  <msub>
                    <mi>a</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>11</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <msub>
                    <mi>a</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>12</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <mo>⋯<!-- ⋯ --></mo>
                </mtd>
                <mtd>
                  <msub>
                    <mi>a</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>1</mn>
                      <mi>n</mi>
                    </mrow>
                  </msub>
                </mtd>
              </mtr>
              <mtr>
                <mtd>
                  <msub>
                    <mi>a</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>21</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <msub>
                    <mi>a</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>22</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <mo>⋯<!-- ⋯ --></mo>
                </mtd>
                <mtd>
                  <msub>
                    <mi>a</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>2</mn>
                      <mi>n</mi>
                    </mrow>
                  </msub>
                </mtd>
              </mtr>
              <mtr>
                <mtd>
                  <mo>⋮<!-- ⋮ --></mo>
                </mtd>
                <mtd>
                  <mo>⋮<!-- ⋮ --></mo>
                </mtd>
                <mtd>
                  <mo>⋱<!-- ⋱ --></mo>
                </mtd>
                <mtd>
                  <mo>⋮<!-- ⋮ --></mo>
                </mtd>
              </mtr>
              <mtr>
                <mtd>
                  <msub>
                    <mi>a</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mi>m</mi>
                      <mn>1</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <msub>
                    <mi>a</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mi>m</mi>
                      <mn>2</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <mo>⋯<!-- ⋯ --></mo>
                </mtd>
                <mtd>
                  <msub>
                    <mi>a</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mi>m</mi>
                      <mi>n</mi>
                    </mrow>
                  </msub>
                </mtd>
              </mtr>
            </mtable>
            <mo>)</mo>
          </mrow>
        </mrow>
        <mo>,</mo>
        <mspace width="1em"></mspace>
        <mrow class="MJX-TeXAtom-ORD">
          <mi mathvariant="bold">B</mi>
        </mrow>
        <mo>=</mo>
        <mrow class="MJX-TeXAtom-ORD">
          <mrow>
            <mo>(</mo>
            <mtable rowspacing="4pt" columnspacing="1em">
              <mtr>
                <mtd>
                  <msub>
                    <mi>b</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>11</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <msub>
                    <mi>b</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>12</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <mo>⋯<!-- ⋯ --></mo>
                </mtd>
                <mtd>
                  <msub>
                    <mi>b</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>1</mn>
                      <mi>p</mi>
                    </mrow>
                  </msub>
                </mtd>
              </mtr>
              <mtr>
                <mtd>
                  <msub>
                    <mi>b</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>21</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <msub>
                    <mi>b</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>22</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <mo>⋯<!-- ⋯ --></mo>
                </mtd>
                <mtd>
                  <msub>
                    <mi>b</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mn>2</mn>
                      <mi>p</mi>
                    </mrow>
                  </msub>
                </mtd>
              </mtr>
              <mtr>
                <mtd>
                  <mo>⋮<!-- ⋮ --></mo>
                </mtd>
                <mtd>
                  <mo>⋮<!-- ⋮ --></mo>
                </mtd>
                <mtd>
                  <mo>⋱<!-- ⋱ --></mo>
                </mtd>
                <mtd>
                  <mo>⋮<!-- ⋮ --></mo>
                </mtd>
              </mtr>
              <mtr>
                <mtd>
                  <msub>
                    <mi>b</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mi>n</mi>
                      <mn>1</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <msub>
                    <mi>b</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mi>n</mi>
                      <mn>2</mn>
                    </mrow>
                  </msub>
                </mtd>
                <mtd>
                  <mo>⋯<!-- ⋯ --></mo>
                </mtd>
                <mtd>
                  <msub>
                    <mi>b</mi>
                    <mrow class="MJX-TeXAtom-ORD">
                      <mi>n</mi>
                      <mi>p</mi>
                    </mrow>
                  </msub>
                </mtd>
              </mtr>
            </mtable>
            <mo>)</mo>
          </mrow>
        </mrow>
      </mstyle>
    </mrow>
    <annotation encoding="application/x-tex">{\displaystyle \mathbf {A} ={\begin{pmatrix}a_{11}&amp;a_{12}&amp;\cdots &amp;a_{1n}\\a_{21}&amp;a_{22}&amp;\cdots &amp;a_{2n}\\\vdots &amp;\vdots &amp;\ddots &amp;\vdots \\a_{m1}&amp;a_{m2}&amp;\cdots &amp;a_{mn}\\\end{pmatrix}},\quad \mathbf {B} ={\begin{pmatrix}b_{11}&amp;b_{12}&amp;\cdots &amp;b_{1p}\\b_{21}&amp;b_{22}&amp;\cdots &amp;b_{2p}\\\vdots &amp;\vdots &amp;\ddots &amp;\vdots \\b_{n1}&amp;b_{n2}&amp;\cdots &amp;b_{np}\\\end{pmatrix}}}</annotation>
  </semantics>
</math></div><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/9196c0c24ad20c3b18582bc78785fa405d91c7c3" class="mwe-math-fallback-image-display mw-invert skin-invert" aria-hidden="true" style="vertical-align: -6.838ex; width:63.467ex; height:14.843ex;" alt="{\displaystyle \mathbf {A} ={\begin{pmatrix}a_{11}&amp;a_{12}&amp;\cdots &amp;a_{1n}\\a_{21}&amp;a_{22}&amp;\cdots &amp;a_{2n}\\\vdots &amp;\vdots &amp;\ddots &amp;\vdots \\a_{m1}&amp;a_{m2}&amp;\cdots &amp;a_{mn}\\\end{pmatrix}},\quad \mathbf {B} ={\begin{pmatrix}b_{11}&amp;b_{12}&amp;\cdots &amp;b_{1p}\\b_{21}&amp;b_{22}&amp;\cdots &amp;b_{2p}\\\vdots &amp;\vdots &amp;\ddots &amp;\vdots \\b_{n1}&amp;b_{n2}&amp;\cdots &amp;b_{np}\\\end{pmatrix}}}"></div>
