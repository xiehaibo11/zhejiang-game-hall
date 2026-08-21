package com.kwad.sdk.pngencrypt;

public abstract class d extends com.kwad.sdk.pngencrypt.ChunkReader {
    protected final com.kwad.sdk.pngencrypt.DeflatedChunksSet aDU;
    protected boolean aDV;
    protected boolean aDW;
    protected byte[] aDX;
    protected int aDY;

    public d(int r7, java.lang.String r8, long r9, com.kwad.sdk.pngencrypt.DeflatedChunksSet r11) {
            r6 = this;
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r5 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.PROCESS
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r5)
            r7 = 0
            r6.aDV = r7
            r6.aDW = r7
            r7 = -1
            r6.aDY = r7
            r6.aDU = r11
            r11.a(r6)
            return
    }

    @Override
    protected void Gn() {
            r4 = this;
            boolean r0 = r4.aDW
            if (r0 == 0) goto L33
            int r0 = r4.aDY
            if (r0 < 0) goto L33
            byte[] r0 = r4.aDX
            r1 = 0
            int r0 = com.kwad.sdk.pngencrypt.n.g(r0, r1)
            int r1 = r4.aDY
            if (r0 == r1) goto L33
            com.kwad.sdk.pngencrypt.PngjException r1 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "bad chunk sequence for fDAT chunk "
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r0 = " expected "
            r2.append(r0)
            int r0 = r4.aDY
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L33:
            return
    }

    @Override
    protected final void a(int r4, byte[] r5, int r6, int r7) {
            r3 = this;
            boolean r0 = r3.aDW
            if (r0 == 0) goto L18
            r0 = 4
            if (r4 >= r0) goto L18
        L7:
            if (r4 >= r0) goto L18
            if (r7 <= 0) goto L18
            byte[] r1 = r3.aDX
            r2 = r5[r6]
            r1[r4] = r2
            int r4 = r4 + 1
            int r6 = r6 + 1
            int r7 = r7 + (-1)
            goto L7
        L18:
            if (r7 <= 0) goto L2e
            com.kwad.sdk.pngencrypt.DeflatedChunksSet r4 = r3.aDU
            r4.c(r5, r6, r7)
            boolean r4 = r3.aDV
            if (r4 == 0) goto L2e
            com.kwad.sdk.pngencrypt.chunk.d r4 = r3.Gm()
            byte[] r4 = r4.data
            int r0 = r3.aDn
            java.lang.System.arraycopy(r5, r6, r4, r0, r7)
        L2e:
            return
    }

    public final void cG(int r1) {
            r0 = this;
            r0.aDY = r1
            return
    }
}
