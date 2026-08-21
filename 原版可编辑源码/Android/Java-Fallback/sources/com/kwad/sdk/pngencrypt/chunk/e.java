package com.kwad.sdk.pngencrypt.chunk;

public class e {
    final com.kwad.sdk.pngencrypt.k aDE;
    java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> aFx;
    boolean aFy;



    public e(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.aFx = r0
            r0 = 0
            r1.aFy = r0
            r1.aDE = r2
            return
    }

    private static java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> a(java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> r1, java.lang.String r2, java.lang.String r3) {
            if (r3 != 0) goto Lc
            com.kwad.sdk.pngencrypt.chunk.e$1 r3 = new com.kwad.sdk.pngencrypt.chunk.e$1
            r3.<init>(r2)
            java.util.List r1 = com.kwad.sdk.pngencrypt.chunk.b.a(r1, r3)
            return r1
        Lc:
            com.kwad.sdk.pngencrypt.chunk.e$2 r0 = new com.kwad.sdk.pngencrypt.chunk.e$2
            r0.<init>(r2, r3)
            java.util.List r1 = com.kwad.sdk.pngencrypt.chunk.b.a(r1, r0)
            return r1
    }

    public final java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> Ha() {
            r1 = this;
            java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> r0 = r1.aFx
            return r0
    }

    public final void a(com.kwad.sdk.pngencrypt.chunk.PngChunk r1, int r2) {
            r0 = this;
            r1.cR(r2)
            java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> r2 = r0.aFx
            r2.add(r1)
            java.lang.String r1 = r1.adE
            java.lang.String r2 = "PLTE"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L15
            r1 = 1
            r0.aFy = r1
        L15:
            return
    }

    public final java.util.List<? extends com.kwad.sdk.pngencrypt.chunk.PngChunk> aj(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> r0 = r1.aFx
            java.util.List r2 = a(r0, r2, r3)
            return r2
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ChunkList: read: "
            r0.<init>(r1)
            java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> r1 = r2.aFx
            int r1 = r1.size()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
