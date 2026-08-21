package com.kwad.sdk.pngencrypt.chunk;

public final class d {
    public final byte[] aFt;
    private long aFu;
    public byte[] aFv;
    private java.util.zip.CRC32 aFw;
    public final java.lang.String adE;
    public byte[] data;
    public final int len;

    public d(int r5, java.lang.String r6, boolean r7) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.data = r0
            r0 = 0
            r4.aFu = r0
            r0 = 4
            byte[] r1 = new byte[r0]
            r4.aFv = r1
            r4.len = r5
            r4.adE = r6
            byte[] r5 = com.kwad.sdk.pngencrypt.chunk.b.fg(r6)
            r4.aFt = r5
            r5 = 0
        L1a:
            if (r5 >= r0) goto L4f
            byte[] r1 = r4.aFt
            r2 = r1[r5]
            r3 = 65
            if (r2 < r3) goto L36
            r2 = r1[r5]
            r3 = 122(0x7a, float:1.71E-43)
            if (r2 > r3) goto L36
            r2 = r1[r5]
            r3 = 90
            if (r2 <= r3) goto L4c
            r1 = r1[r5]
            r2 = 97
            if (r1 >= r2) goto L4c
        L36:
            com.kwad.sdk.pngencrypt.PngjException r1 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Bad id chunk: must be ascii letters "
            r2.<init>(r3)
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L4c:
            int r5 = r5 + 1
            goto L1a
        L4f:
            if (r7 == 0) goto L54
            r4.GX()
        L54:
            return
    }

    private void GX() {
            r2 = this;
            byte[] r0 = r2.data
            if (r0 == 0) goto L9
            int r0 = r0.length
            int r1 = r2.len
            if (r0 >= r1) goto Lf
        L9:
            int r0 = r2.len
            byte[] r0 = new byte[r0]
            r2.data = r0
        Lf:
            return
    }

    final java.io.ByteArrayInputStream GY() {
            r2 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r1 = r2.data
            r0.<init>(r1)
            return r0
    }

    public final long GZ() {
            r2 = this;
            long r0 = r2.aFu
            return r0
    }

    public final void ar(long r1) {
            r0 = this;
            r0.aFu = r1
            return
    }

    public final void bw(boolean r7) {
            r6 = this;
            java.util.zip.CRC32 r0 = r6.aFw
            long r0 = r0.getValue()
            int r0 = (int) r0
            byte[] r1 = r6.aFv
            r2 = 0
            int r1 = com.kwad.sdk.pngencrypt.n.g(r1, r2)
            if (r0 == r1) goto L44
            r3 = 4
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r4 = r6.adE
            r3[r2] = r4
            r2 = 1
            long r4 = r6.aFu
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r3[r2] = r4
            r2 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r3[r2] = r1
            r1 = 3
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r3[r1] = r0
            java.lang.String r0 = "Bad CRC in chunk: %s (offset:%d). Expected:%x Got:%x"
            java.lang.String r0 = java.lang.String.format(r0, r3)
            if (r7 == 0) goto L3f
            com.kwad.sdk.pngencrypt.PngjException r7 = new com.kwad.sdk.pngencrypt.PngjException
            r7.<init>(r0)
            com.kwad.sdk.core.e.c.printStackTrace(r7)
            return
        L3f:
            java.lang.String r7 = "PNG_ENCRYPT"
            com.kwad.sdk.core.e.c.d(r7, r0)
        L44:
            return
    }

    public final boolean equals(java.lang.Object r7) {
            r6 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            r1 = 0
            if (r7 != 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = r6.getClass()
            java.lang.Class r3 = r7.getClass()
            if (r2 == r3) goto L13
            return r1
        L13:
            com.kwad.sdk.pngencrypt.chunk.d r7 = (com.kwad.sdk.pngencrypt.chunk.d) r7
            java.lang.String r2 = r6.adE
            if (r2 != 0) goto L1e
            java.lang.String r2 = r7.adE
            if (r2 == 0) goto L27
            return r1
        L1e:
            java.lang.String r3 = r7.adE
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L27
            return r1
        L27:
            long r2 = r6.aFu
            long r4 = r7.aFu
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 == 0) goto L30
            return r1
        L30:
            return r0
    }

    public final void f(byte[] r2, int r3, int r4) {
            r1 = this;
            java.util.zip.CRC32 r0 = r1.aFw
            if (r0 != 0) goto Lb
            java.util.zip.CRC32 r0 = new java.util.zip.CRC32
            r0.<init>()
            r1.aFw = r0
        Lb:
            java.util.zip.CRC32 r0 = r1.aFw
            r0.update(r2, r3, r4)
            return
    }

    public final int hashCode() {
            r5 = this;
            java.lang.String r0 = r5.adE
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            int r0 = r0.hashCode()
        La:
            int r0 = r0 + 31
            int r0 = r0 * 31
            long r1 = r5.aFu
            r3 = 32
            long r3 = r1 >>> r3
            long r1 = r1 ^ r3
            int r1 = (int) r1
            int r0 = r0 + r1
            return r0
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "chunkid="
            r0.<init>(r1)
            byte[] r1 = r2.aFt
            java.lang.String r1 = com.kwad.sdk.pngencrypt.chunk.b.i(r1)
            r0.append(r1)
            java.lang.String r1 = " len="
            r0.append(r1)
            int r1 = r2.len
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
