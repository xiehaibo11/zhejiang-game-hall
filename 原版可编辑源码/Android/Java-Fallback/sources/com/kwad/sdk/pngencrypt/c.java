package com.kwad.sdk.pngencrypt;

public final class c extends com.kwad.sdk.pngencrypt.b {
    protected com.kwad.sdk.pngencrypt.k aDE;
    protected com.kwad.sdk.pngencrypt.k aDF;
    protected com.kwad.sdk.pngencrypt.e aDG;
    protected int aDH;
    protected com.kwad.sdk.pngencrypt.chunk.e aDI;
    protected final boolean aDJ;
    private long aDK;
    private boolean aDL;
    private boolean aDM;
    private java.util.Set<java.lang.String> aDN;
    private long aDO;
    private long aDP;
    private long aDQ;
    private com.kwad.sdk.pngencrypt.g aDR;
    private com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour aDS;

    static class 1 {
        static final int[] aDT = null;

        static {
                com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour[] r0 = com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.kwad.sdk.pngencrypt.c.1.aDT = r0
                com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r1 = com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.LOAD_CHUNK_IF_SAFE     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.kwad.sdk.pngencrypt.c.1.aDT     // Catch: java.lang.NoSuchFieldError -> L1d
                com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r1 = com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.LOAD_CHUNK_NEVER     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

    public c(boolean r4) {
            r3 = this;
            r3.<init>()
            r4 = -1
            r3.aDH = r4
            r4 = 0
            r3.aDI = r4
            r0 = 0
            r3.aDK = r0
            r4 = 1
            r3.aDL = r4
            r4 = 0
            r3.aDM = r4
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            r3.aDN = r2
            r3.aDO = r0
            r3.aDP = r0
            r3.aDQ = r0
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r0 = com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.LOAD_CHUNK_ALWAYS
            r3.aDS = r0
            r3.aDJ = r4
            com.kwad.sdk.pngencrypt.chunk.a r4 = new com.kwad.sdk.pngencrypt.chunk.a
            r4.<init>()
            r3.aDR = r4
            return
    }

    private int Gt() {
            r1 = this;
            int r0 = r1.aDH
            return r0
    }

    private com.kwad.sdk.pngencrypt.k Gy() {
            r1 = this;
            com.kwad.sdk.pngencrypt.k r0 = r1.aDF
            return r0
    }

    private void fd(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "IHDR"
            boolean r0 = r5.equals(r0)
            java.lang.String r1 = "unexpected chunk "
            if (r0 == 0) goto L27
            int r0 = r4.aDH
            if (r0 >= 0) goto L12
            r5 = 0
            r4.aDH = r5
            return
        L12:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
        L27:
            java.lang.String r0 = "PLTE"
            boolean r0 = r5.equals(r0)
            r2 = 1
            if (r0 == 0) goto L52
            int r0 = r4.aDH
            if (r0 == 0) goto L4e
            if (r0 != r2) goto L37
            goto L4e
        L37:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "unexpected chunk here "
            r1.<init>(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
        L4e:
            r5 = 2
            r4.aDH = r5
            return
        L52:
            java.lang.String r0 = "IDAT"
            boolean r0 = r5.equals(r0)
            r3 = 4
            if (r0 == 0) goto L79
            int r0 = r4.aDH
            if (r0 < 0) goto L64
            if (r0 > r3) goto L64
            r4.aDH = r3
            return
        L64:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
        L79:
            java.lang.String r0 = "IEND"
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L9e
            int r0 = r4.aDH
            if (r0 < r3) goto L89
            r5 = 6
            r4.aDH = r5
            return
        L89:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
        L9e:
            int r5 = r4.aDH
            if (r5 > r2) goto La5
            r4.aDH = r2
            return
        La5:
            r0 = 3
            if (r5 > r0) goto Lab
            r4.aDH = r0
            return
        Lab:
            r5 = 5
            r4.aDH = r5
            return
    }

    private static boolean fe(java.lang.String r0) {
            boolean r0 = com.kwad.sdk.pngencrypt.chunk.b.fh(r0)
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    @Override
    protected final boolean Go() {
            r1 = this;
            boolean r0 = r1.aDL
            return r0
    }

    public final boolean Gu() {
            r2 = this;
            int r0 = r2.Gt()
            r1 = 4
            if (r0 >= r1) goto L9
            r0 = 1
            return r0
        L9:
            r0 = 0
            return r0
    }

    public final com.kwad.sdk.pngencrypt.j Gv() {
            r2 = this;
            com.kwad.sdk.pngencrypt.DeflatedChunksSet r0 = r2.Gq()
            boolean r1 = r0 instanceof com.kwad.sdk.pngencrypt.j
            if (r1 == 0) goto Lb
            com.kwad.sdk.pngencrypt.j r0 = (com.kwad.sdk.pngencrypt.j) r0
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public final com.kwad.sdk.pngencrypt.k Gw() {
            r1 = this;
            com.kwad.sdk.pngencrypt.k r0 = r1.aDE
            return r0
    }

    public final com.kwad.sdk.pngencrypt.e Gx() {
            r1 = this;
            com.kwad.sdk.pngencrypt.e r0 = r1.aDG
            return r0
    }

    @Override
    protected final void a(com.kwad.sdk.pngencrypt.ChunkReader r5) {
            r4 = this;
            super.a(r5)
            com.kwad.sdk.pngencrypt.chunk.d r0 = r5.Gm()
            java.lang.String r0 = r0.adE
            java.lang.String r1 = "IHDR"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3e
            com.kwad.sdk.pngencrypt.chunk.i r0 = new com.kwad.sdk.pngencrypt.chunk.i
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.pngencrypt.chunk.d r1 = r5.Gm()
            r0.a(r1)
            com.kwad.sdk.pngencrypt.k r1 = r0.Hh()
            r4.aDE = r1
            r4.aDF = r1
            boolean r0 = r0.Hf()
            if (r0 == 0) goto L35
            com.kwad.sdk.pngencrypt.e r0 = new com.kwad.sdk.pngencrypt.e
            com.kwad.sdk.pngencrypt.k r1 = r4.aDF
            r0.<init>(r1)
            r4.aDG = r0
        L35:
            com.kwad.sdk.pngencrypt.chunk.e r0 = new com.kwad.sdk.pngencrypt.chunk.e
            com.kwad.sdk.pngencrypt.k r1 = r4.aDE
            r0.<init>(r1)
            r4.aDI = r0
        L3e:
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r0 = r5.aDl
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r1 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.BUFFER
            if (r0 != r1) goto L5c
            com.kwad.sdk.pngencrypt.chunk.d r0 = r5.Gm()
            java.lang.String r0 = r0.adE
            boolean r0 = fe(r0)
            if (r0 == 0) goto L5c
            long r0 = r4.aDK
            com.kwad.sdk.pngencrypt.chunk.d r2 = r5.Gm()
            int r2 = r2.len
            long r2 = (long) r2
            long r0 = r0 + r2
            r4.aDK = r0
        L5c:
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r0 = r5.aDl
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r1 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.BUFFER
            if (r0 == r1) goto L68
            boolean r0 = r4.aDM
            if (r0 == 0) goto L67
            goto L68
        L67:
            return
        L68:
            com.kwad.sdk.pngencrypt.g r0 = r4.aDR     // Catch: com.kwad.sdk.pngencrypt.PngjException -> L7e
            com.kwad.sdk.pngencrypt.chunk.d r5 = r5.Gm()     // Catch: com.kwad.sdk.pngencrypt.PngjException -> L7e
            com.kwad.sdk.pngencrypt.k r1 = r4.Gw()     // Catch: com.kwad.sdk.pngencrypt.PngjException -> L7e
            com.kwad.sdk.pngencrypt.chunk.PngChunk r5 = r0.a(r5, r1)     // Catch: com.kwad.sdk.pngencrypt.PngjException -> L7e
            com.kwad.sdk.pngencrypt.chunk.e r0 = r4.aDI     // Catch: com.kwad.sdk.pngencrypt.PngjException -> L7e
            int r1 = r4.aDH     // Catch: com.kwad.sdk.pngencrypt.PngjException -> L7e
            r0.a(r5, r1)     // Catch: com.kwad.sdk.pngencrypt.PngjException -> L7e
            return
        L7e:
            r5 = move-exception
            throw r5
    }

    public final void ao(long r1) {
            r0 = this;
            r0.aDO = r1
            return
    }

    public final void ap(long r1) {
            r0 = this;
            r0.aDP = r1
            return
    }

    public final void aq(long r1) {
            r0 = this;
            r0.aDQ = r1
            return
    }

    @Override
    public final int b(byte[] r1, int r2, int r3) {
            r0 = this;
            int r1 = super.b(r1, r2, r3)
            return r1
    }

    public final void bv(boolean r1) {
            r0 = this;
            r1 = 0
            r0.aDL = r1
            return
    }

    @Override
    protected final void c(int r1, java.lang.String r2, long r3) {
            r0 = this;
            r0.fd(r2)
            super.c(r1, r2, r3)
            return
    }

    @Override
    public final void close() {
            r2 = this;
            int r0 = r2.aDH
            r1 = 6
            if (r0 == r1) goto L7
            r2.aDH = r1
        L7:
            super.close()
            return
    }

    @Override
    protected final com.kwad.sdk.pngencrypt.DeflatedChunksSet fb(java.lang.String r5) {
            r4 = this;
            com.kwad.sdk.pngencrypt.j r0 = new com.kwad.sdk.pngencrypt.j
            boolean r1 = r4.aDJ
            com.kwad.sdk.pngencrypt.k r2 = r4.Gy()
            com.kwad.sdk.pngencrypt.e r3 = r4.aDG
            r0.<init>(r5, r1, r2, r3)
            return r0
    }

    @Override
    protected final boolean fc(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "IDAT"
            boolean r2 = r2.equals(r0)
            return r2
    }

    @Override
    public final boolean o(int r11, java.lang.String r12) {
            r10 = this;
            boolean r0 = super.o(r11, r12)
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            long r2 = r10.aDO
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L48
            long r2 = (long) r11
            long r6 = r10.Gp()
            long r2 = r2 + r6
            long r6 = r10.aDO
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 <= 0) goto L48
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Maximum total bytes to read exceeeded: "
            r2.<init>(r3)
            long r6 = r10.aDO
            r2.append(r6)
            java.lang.String r3 = " offset:"
            r2.append(r3)
            long r6 = r10.Gp()
            r2.append(r6)
            java.lang.String r3 = " len="
            r2.append(r3)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L48:
            java.util.Set<java.lang.String> r0 = r10.aDN
            boolean r0 = r0.contains(r12)
            if (r0 == 0) goto L51
            return r1
        L51:
            boolean r0 = com.kwad.sdk.pngencrypt.chunk.b.fh(r12)
            r2 = 0
            if (r0 == 0) goto L59
            return r2
        L59:
            long r6 = r10.aDP
            int r0 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r0 <= 0) goto L65
            long r8 = (long) r11
            int r0 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            if (r0 <= 0) goto L65
            return r1
        L65:
            long r6 = r10.aDQ
            int r0 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r0 <= 0) goto L74
            long r3 = (long) r11
            long r8 = r10.aDK
            long r6 = r6 - r8
            int r11 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r11 <= 0) goto L74
            return r1
        L74:
            int[] r11 = com.kwad.sdk.pngencrypt.c.1.aDT
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r0 = r10.aDS
            int r0 = r0.ordinal()
            r11 = r11[r0]
            if (r11 == r1) goto L85
            r12 = 2
            if (r11 == r12) goto L84
            goto L8c
        L84:
            return r1
        L85:
            boolean r11 = com.kwad.sdk.pngencrypt.chunk.b.fj(r12)
            if (r11 != 0) goto L8c
            return r1
        L8c:
            return r2
    }
}
