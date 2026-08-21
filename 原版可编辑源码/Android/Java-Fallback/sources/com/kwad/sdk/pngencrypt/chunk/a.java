package com.kwad.sdk.pngencrypt.chunk;

public final class a implements com.kwad.sdk.pngencrypt.g {
    boolean aFm;

    public a() {
            r1 = this;
            r0 = 1
            r1.<init>(r0)
            return
    }

    private a(boolean r1) {
            r0 = this;
            r0.<init>()
            r1 = 1
            r0.aFm = r1
            return
    }

    private static com.kwad.sdk.pngencrypt.chunk.PngChunk a(java.lang.String r1, com.kwad.sdk.pngencrypt.k r2) {
            java.lang.String r0 = "IDAT"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Le
            com.kwad.sdk.pngencrypt.chunk.g r1 = new com.kwad.sdk.pngencrypt.chunk.g
            r1.<init>(r2)
            return r1
        Le:
            java.lang.String r0 = "IHDR"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L1c
            com.kwad.sdk.pngencrypt.chunk.i r1 = new com.kwad.sdk.pngencrypt.chunk.i
            r1.<init>(r2)
            return r1
        L1c:
            java.lang.String r0 = "PLTE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2a
            com.kwad.sdk.pngencrypt.chunk.m r1 = new com.kwad.sdk.pngencrypt.chunk.m
            r1.<init>(r2)
            return r1
        L2a:
            java.lang.String r0 = "IEND"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L38
            com.kwad.sdk.pngencrypt.chunk.h r1 = new com.kwad.sdk.pngencrypt.chunk.h
            r1.<init>(r2)
            return r1
        L38:
            java.lang.String r0 = "tEXt"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L46
            com.kwad.sdk.pngencrypt.chunk.q r1 = new com.kwad.sdk.pngencrypt.chunk.q
            r1.<init>(r2)
            return r1
        L46:
            java.lang.String r0 = "iTXt"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L54
            com.kwad.sdk.pngencrypt.chunk.j r1 = new com.kwad.sdk.pngencrypt.chunk.j
            r1.<init>(r2)
            return r1
        L54:
            java.lang.String r0 = "zTXt"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L62
            com.kwad.sdk.pngencrypt.chunk.v r1 = new com.kwad.sdk.pngencrypt.chunk.v
            r1.<init>(r2)
            return r1
        L62:
            java.lang.String r0 = "tIME"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L70
            com.kwad.sdk.pngencrypt.chunk.r r1 = new com.kwad.sdk.pngencrypt.chunk.r
            r1.<init>(r2)
            return r1
        L70:
            java.lang.String r0 = "tRNS"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L7e
            com.kwad.sdk.pngencrypt.chunk.s r1 = new com.kwad.sdk.pngencrypt.chunk.s
            r1.<init>(r2)
            return r1
        L7e:
            java.lang.String r0 = "sPLT"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L8c
            com.kwad.sdk.pngencrypt.chunk.n r1 = new com.kwad.sdk.pngencrypt.chunk.n
            r1.<init>(r2)
            return r1
        L8c:
            r1 = 0
            return r1
    }

    private static com.kwad.sdk.pngencrypt.chunk.PngChunk b(java.lang.String r1, com.kwad.sdk.pngencrypt.k r2) {
            com.kwad.sdk.pngencrypt.chunk.u r0 = new com.kwad.sdk.pngencrypt.chunk.u
            r0.<init>(r1, r2)
            return r0
    }

    private static com.kwad.sdk.pngencrypt.chunk.PngChunk c(java.lang.String r1, com.kwad.sdk.pngencrypt.k r2) {
            java.lang.String r0 = "oFFs"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Le
            com.kwad.sdk.pngencrypt.chunk.l r1 = new com.kwad.sdk.pngencrypt.chunk.l
            r1.<init>(r2)
            return r1
        Le:
            java.lang.String r0 = "sTER"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L1c
            com.kwad.sdk.pngencrypt.chunk.o r1 = new com.kwad.sdk.pngencrypt.chunk.o
            r1.<init>(r2)
            return r1
        L1c:
            r1 = 0
            return r1
    }

    @Override
    public final com.kwad.sdk.pngencrypt.chunk.PngChunk a(com.kwad.sdk.pngencrypt.chunk.d r2, com.kwad.sdk.pngencrypt.k r3) {
            r1 = this;
            java.lang.String r0 = r2.adE
            com.kwad.sdk.pngencrypt.chunk.PngChunk r0 = a(r0, r3)
            if (r0 != 0) goto Le
            java.lang.String r0 = r2.adE
            com.kwad.sdk.pngencrypt.chunk.PngChunk r0 = c(r0, r3)
        Le:
            if (r0 != 0) goto L16
            java.lang.String r0 = r2.adE
            com.kwad.sdk.pngencrypt.chunk.PngChunk r0 = b(r0, r3)
        L16:
            r0.b(r2)
            boolean r3 = r1.aFm
            if (r3 == 0) goto L24
            byte[] r3 = r2.data
            if (r3 == 0) goto L24
            r0.a(r2)
        L24:
            return r0
    }
}
