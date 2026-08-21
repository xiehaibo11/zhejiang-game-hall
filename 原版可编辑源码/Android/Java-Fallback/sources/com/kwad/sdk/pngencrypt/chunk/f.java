package com.kwad.sdk.pngencrypt.chunk;

public final class f extends com.kwad.sdk.pngencrypt.chunk.e {
    private final java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> aFB;

    @Override
    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ChunkList: written: "
            r0.<init>(r1)
            java.util.List r1 = r2.Ha()
            int r1 = r1.size()
            r0.append(r1)
            java.lang.String r1 = " queue: "
            r0.append(r1)
            java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> r1 = r2.aFB
            int r1 = r1.size()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
