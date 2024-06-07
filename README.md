# Matrix-Multiplication
A matrix is a rectangular array or table of numbers, symbols, or expressions, arranged in rows and columns in mathematics.

Matrix multiplication is a binary operation that takes two matrices as input and produces another matrix as output. It is a way to combine the elements of two matrices to produce a new matrix.

If A is an m × n matrix and B is an n × p matrix

</math></div><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/9196c0c24ad20c3b18582bc78785fa405d91c7c3" class="mwe-math-fallback-image-display mw-invert skin-invert" aria-hidden="true" style="vertical-align: -6.838ex; width:63.467ex; height:14.843ex;" alt="{\displaystyle \mathbf {A} ={\begin{pmatrix}a_{11}&amp;a_{12}&amp;\cdots &amp;a_{1n}\\a_{21}&amp;a_{22}&amp;\cdots &amp;a_{2n}\\\vdots &amp;\vdots &amp;\ddots &amp;\vdots \\a_{m1}&amp;a_{m2}&amp;\cdots &amp;a_{mn}\\\end{pmatrix}},\quad \mathbf {B} ={\begin{pmatrix}b_{11}&amp;b_{12}&amp;\cdots &amp;b_{1p}\\b_{21}&amp;b_{22}&amp;\cdots &amp;b_{2p}\\\vdots &amp;\vdots &amp;\ddots &amp;\vdots \\b_{n1}&amp;b_{n2}&amp;\cdots &amp;b_{np}\\\end{pmatrix}}}"></div>

the matrix product C = AB (denoted without multiplication signs or dots) is defined to be the m × p matrix

<img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/7d3ce5d06e84e1a8575ce6f1d47a90d006baf628" class="mwe-math-fallback-image-display mw-invert skin-invert" aria-hidden="true" style="vertical-align: -6.838ex; width:30.311ex; height:14.843ex;" alt="{\displaystyle \mathbf {C} ={\begin{pmatrix}c_{11}&amp;c_{12}&amp;\cdots &amp;c_{1p}\\c_{21}&amp;c_{22}&amp;\cdots &amp;c_{2p}\\\vdots &amp;\vdots &amp;\ddots &amp;\vdots \\c_{m1}&amp;c_{m2}&amp;\cdots &amp;c_{mp}\\\end{pmatrix}}}">

such that

<img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/ee372c649dea0a05bf1ace77c9d6faf051d9cc8d" class="mwe-math-fallback-image-display mw-invert skin-invert" aria-hidden="true" style="vertical-align: -3.005ex; width:47.035ex; height:6.843ex;" alt="{\displaystyle c_{ij}=a_{i1}b_{1j}+a_{i2}b_{2j}+\cdots +a_{in}b_{nj}=\sum _{k=1}^{n}a_{ik}b_{kj},}">

for i = 1, ..., m and j = 1, ..., p.

That is, the entry 
𝑐𝑖𝑗 of the product is obtained by multiplying term-by-term the entries of the ith row of A and the jth column of B, and summing these n products. In other words, 𝑐𝑖𝑗 is the dot product of the ith row of A and the jth column of B.

Therefore, AB can also be written as

<img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/17584944fc26dc38354b452ffcc64aa158cf8349" class="mwe-math-fallback-image-display mw-invert skin-invert" aria-hidden="true" style="vertical-align: -6.838ex; width:85.605ex; height:14.843ex;" alt="{\displaystyle \mathbf {C} ={\begin{pmatrix}a_{11}b_{11}+\cdots +a_{1n}b_{n1}&amp;a_{11}b_{12}+\cdots +a_{1n}b_{n2}&amp;\cdots &amp;a_{11}b_{1p}+\cdots +a_{1n}b_{np}\\a_{21}b_{11}+\cdots +a_{2n}b_{n1}&amp;a_{21}b_{12}+\cdots +a_{2n}b_{n2}&amp;\cdots &amp;a_{21}b_{1p}+\cdots +a_{2n}b_{np}\\\vdots &amp;\vdots &amp;\ddots &amp;\vdots \\a_{m1}b_{11}+\cdots +a_{mn}b_{n1}&amp;a_{m1}b_{12}+\cdots +a_{mn}b_{n2}&amp;\cdots &amp;a_{m1}b_{1p}+\cdots +a_{mn}b_{np}\\\end{pmatrix}}}">

Thus the product AB is defined if and only if the number of columns in A equals the number of rows in B, in this case n.

In most scenarios, the entries are numbers, but they may be any kind of mathematical objects for which an addition and a multiplication are defined, that are associative, and such that the addition is commutative, and the multiplication is distributive with respect to the addition. In particular, the entries may be matrices themselves.

Author: Dev
Project: May 2020
