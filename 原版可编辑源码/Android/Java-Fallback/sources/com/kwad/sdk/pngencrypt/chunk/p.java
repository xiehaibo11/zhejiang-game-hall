package com.kwad.sdk.pngencrypt.chunk;

public abstract class p extends com.kwad.sdk.pngencrypt.chunk.PngChunk {
    protected p(java.lang.String r1, com.kwad.sdk.pngencrypt.k r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 != 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L13
            return r1
        L13:
            com.kwad.sdk.pngencrypt.chunk.p r5 = (com.kwad.sdk.pngencrypt.chunk.p) r5
            java.lang.String r2 = r4.adE
            if (r2 != 0) goto L1e
            java.lang.String r5 = r5.adE
            if (r5 == 0) goto L29
            return r1
        L1e:
            java.lang.String r2 = r4.adE
            java.lang.String r5 = r5.adE
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L29
            return r1
        L29:
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.adE
            if (r0 != 0) goto L6
            r0 = 0
            goto Lc
        L6:
            java.lang.String r0 = r1.adE
            int r0 = r0.hashCode()
        Lc:
            int r0 = r0 + 31
            return r0
    }
}
