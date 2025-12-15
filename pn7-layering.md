# Layering

[--- layer k ---] <- a functional component
- provide a well-defined service for layer above/below
- airline ticketing example: they hide many details and only ways to interface with.
- separation of concerns: to do the job well
- we can improve each layer independently.
- programming language: hiding the detail (depending on languages)
- compiler hides: lexical analysis, parsing, codegen, and optimization
- and you can switch compilers without breaking other layers.
- if C code is hardware independent, it is contained in its layer. But sometimes we do architecture-specific thing -> this breaks the layering.
- That means you have to write a "separated layer" for each architecture. Sometimes you have to do it (when really really have to)
- Many problems come from people breaking the layering while assuming the validity of interface.