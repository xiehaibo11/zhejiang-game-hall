package com.kwad.sdk.pngencrypt;

public abstract class b implements com.kwad.sdk.pngencrypt.f, java.io.Closeable {
    static final boolean $assertionsDisabled = false;
    private com.kwad.sdk.pngencrypt.ChunkReader aDA;
    private long aDB;
    private com.kwad.sdk.pngencrypt.ErrorBehaviour aDC;
    private final byte[] aDr;
    private final int aDs;
    private byte[] aDt;
    private int aDu;
    protected boolean aDv;
    protected boolean aDw;
    private int aDx;
    private long aDy;
    private com.kwad.sdk.pngencrypt.DeflatedChunksSet aDz;
    protected boolean closed;



    static {
            return
    }

    public b() {
            r1 = this;
            byte[] r0 = com.kwad.sdk.pngencrypt.n.GQ()
            r1.<init>(r0)
            return
    }

    private b(byte[] r4) {
            r3 = this;
            r3.<init>()
            r0 = 8
            byte[] r0 = new byte[r0]
            r3.aDt = r0
            r0 = 0
            r3.aDu = r0
            r3.aDv = r0
            r3.aDw = r0
            r3.closed = r0
            r3.aDx = r0
            r1 = 0
            r3.aDy = r1
            com.kwad.sdk.pngencrypt.ErrorBehaviour r1 = com.kwad.sdk.pngencrypt.ErrorBehaviour.STRICT
            r3.aDC = r1
            r3.aDr = r4
            if (r4 != 0) goto L22
            r4 = r0
            goto L23
        L22:
            int r4 = r4.length
        L23:
            r3.aDs = r4
            if (r4 > 0) goto L28
            r0 = 1
        L28:
            r3.aDv = r0
            return
    }

    private static java.lang.String Gr() {
            java.lang.String r0 = "IHDR"
            return r0
    }

    private static java.lang.String Gs() {
            java.lang.String r0 = "IEND"
            return r0
    }

    private com.kwad.sdk.pngencrypt.ChunkReader a(java.lang.String r9, int r10, long r11, boolean r13) {
            r8 = this;
            com.kwad.sdk.pngencrypt.b$2 r7 = new com.kwad.sdk.pngencrypt.b$2
            if (r13 == 0) goto L7
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r13 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.SKIP
            goto L9
        L7:
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r13 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.BUFFER
        L9:
            r6 = r13
            r0 = r7
            r1 = r8
            r2 = r10
            r3 = r9
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r6)
            return r7
    }

    private static void h(byte[] r3) {
            byte[] r0 = com.kwad.sdk.pngencrypt.n.GQ()
            boolean r0 = java.util.Arrays.equals(r3, r0)
            if (r0 != 0) goto L24
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Bad signature:"
            r1.<init>(r2)
            java.lang.String r3 = java.util.Arrays.toString(r3)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L24:
            return
    }

    protected boolean Go() {
            r1 = this;
            r0 = 1
            return r0
    }

    public final long Gp() {
            r2 = this;
            long r0 = r2.aDy
            return r0
    }

    public final com.kwad.sdk.pngencrypt.DeflatedChunksSet Gq() {
            r1 = this;
            com.kwad.sdk.pngencrypt.DeflatedChunksSet r0 = r1.aDz
            return r0
    }

    protected void a(com.kwad.sdk.pngencrypt.ChunkReader r5) {
            r4 = this;
            int r0 = r4.aDx
            r1 = 1
            if (r0 != r1) goto L4d
            java.lang.String r0 = Gr()
            com.kwad.sdk.pngencrypt.chunk.d r2 = r5.Gm()
            java.lang.String r2 = r2.adE
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L4d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "Bad first chunk: "
            r0.<init>(r2)
            com.kwad.sdk.pngencrypt.chunk.d r2 = r5.Gm()
            java.lang.String r2 = r2.adE
            r0.append(r2)
            java.lang.String r2 = " expected: "
            r0.append(r2)
            java.lang.String r2 = Gr()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.pngencrypt.ErrorBehaviour r2 = r4.aDC
            int r2 = r2.c
            com.kwad.sdk.pngencrypt.ErrorBehaviour r3 = com.kwad.sdk.pngencrypt.ErrorBehaviour.SUPER_LENIENT
            int r3 = r3.c
            if (r2 >= r3) goto L48
            com.kwad.sdk.pngencrypt.PngjException r2 = new com.kwad.sdk.pngencrypt.PngjException
            r2.<init>(r0)
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            goto L4d
        L48:
            java.lang.String r2 = "PNG_ENCRYPT"
            com.kwad.sdk.core.e.c.d(r2, r0)
        L4d:
            Gs()
            com.kwad.sdk.pngencrypt.chunk.d r5 = r5.Gm()
            java.lang.String r5 = r5.adE
            java.lang.String r0 = Gs()
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L65
            r4.aDw = r1
            r4.close()
        L65:
            return
    }

    @Override
    public int b(byte[] r9, int r10, int r11) {
            r8 = this;
            boolean r0 = r8.closed
            r1 = -1
            if (r0 == 0) goto L6
            return r1
        L6:
            r0 = 0
            if (r11 != 0) goto La
            return r0
        La:
            if (r11 >= 0) goto L22
            com.kwad.sdk.pngencrypt.PngjException r2 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "This should not happen. Bad length: "
            r3.<init>(r4)
            r3.append(r11)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            com.kwad.sdk.core.e.c.printStackTrace(r2)
        L22:
            boolean r2 = r8.aDv
            r3 = 1
            if (r2 == 0) goto L7e
            com.kwad.sdk.pngencrypt.ChunkReader r2 = r8.aDA
            if (r2 == 0) goto L41
            boolean r2 = r2.isDone()
            if (r2 == 0) goto L32
            goto L41
        L32:
            com.kwad.sdk.pngencrypt.ChunkReader r0 = r8.aDA
            int r9 = r0.b(r9, r10, r11)
            if (r9 >= 0) goto L3b
            return r1
        L3b:
            int r10 = r9 + 0
            long r0 = r8.aDy
            long r2 = (long) r9
            goto La5
        L41:
            int r1 = r8.aDu
            r2 = 8
            int r1 = 8 - r1
            if (r1 <= r11) goto L4a
            goto L4b
        L4a:
            r11 = r1
        L4b:
            byte[] r1 = r8.aDt
            int r4 = r8.aDu
            java.lang.System.arraycopy(r9, r10, r1, r4, r11)
            int r9 = r8.aDu
            int r9 = r9 + r11
            r8.aDu = r9
            int r10 = r11 + 0
            long r4 = r8.aDy
            long r6 = (long) r11
            long r4 = r4 + r6
            r8.aDy = r4
            if (r9 != r2) goto La8
            int r9 = r8.aDx
            int r9 = r9 + r3
            r8.aDx = r9
            byte[] r9 = r8.aDt
            int r9 = com.kwad.sdk.pngencrypt.n.g(r9, r0)
            byte[] r11 = r8.aDt
            r1 = 4
            java.lang.String r11 = com.kwad.sdk.pngencrypt.chunk.b.i(r11, r1)
            long r1 = r8.aDy
            r3 = 8
            long r1 = r1 - r3
            r8.c(r9, r11, r1)
            r8.aDu = r0
            goto La8
        L7e:
            int r1 = r8.aDs
            int r2 = r8.aDu
            int r1 = r1 - r2
            if (r1 <= r11) goto L86
            goto L87
        L86:
            r11 = r1
        L87:
            byte[] r1 = r8.aDt
            int r2 = r8.aDu
            java.lang.System.arraycopy(r9, r10, r1, r2, r11)
            int r9 = r8.aDu
            int r9 = r9 + r11
            r8.aDu = r9
            int r10 = r8.aDs
            if (r9 != r10) goto La0
            byte[] r9 = r8.aDt
            h(r9)
            r8.aDu = r0
            r8.aDv = r3
        La0:
            int r10 = r11 + 0
            long r0 = r8.aDy
            long r2 = (long) r11
        La5:
            long r0 = r0 + r2
            r8.aDy = r0
        La8:
            return r10
    }

    protected void c(int r12, java.lang.String r13, long r14) {
            r11 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "New chunk: "
            r0.<init>(r1)
            r0.append(r13)
            java.lang.String r1 = " "
            r0.append(r1)
            r0.append(r12)
            java.lang.String r1 = " off:"
            r0.append(r1)
            r0.append(r14)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PNG_ENCRYPT"
            com.kwad.sdk.core.e.c.d(r1, r0)
            int r0 = r13.length()
            r1 = 4
            if (r0 != r1) goto L36
            java.util.regex.Pattern r0 = com.kwad.sdk.pngencrypt.chunk.b.aFs
            java.util.regex.Matcher r0 = r0.matcher(r13)
            boolean r0 = r0.matches()
            if (r0 != 0) goto L4c
        L36:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Bad chunk id: "
            r1.<init>(r2)
            r1.append(r13)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L4c:
            if (r12 >= 0) goto L64
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Bad chunk len: "
            r1.<init>(r2)
            r1.append(r12)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L64:
            java.lang.String r0 = "IDAT"
            boolean r0 = r13.equals(r0)
            if (r0 == 0) goto L72
            long r0 = r11.aDB
            long r2 = (long) r12
            long r0 = r0 + r2
            r11.aDB = r0
        L72:
            boolean r0 = r11.Go()
            boolean r6 = r11.o(r12, r13)
            boolean r1 = r11.fc(r13)
            com.kwad.sdk.pngencrypt.DeflatedChunksSet r2 = r11.aDz
            r10 = 0
            if (r2 == 0) goto L90
            boolean r2 = r2.isClosed()
            if (r2 != 0) goto L90
            com.kwad.sdk.pngencrypt.DeflatedChunksSet r2 = r11.aDz
            boolean r2 = r2.ff(r13)
            goto L91
        L90:
            r2 = r10
        L91:
            if (r1 == 0) goto Lc1
            if (r6 != 0) goto Lc1
            if (r2 != 0) goto Lb1
            com.kwad.sdk.pngencrypt.DeflatedChunksSet r1 = r11.aDz
            if (r1 == 0) goto Lab
            boolean r1 = r1.isDone()
            if (r1 != 0) goto Lab
            com.kwad.sdk.pngencrypt.PngjException r1 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r2 = "new IDAT-like chunk when previous was not done"
            r1.<init>(r2)
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        Lab:
            com.kwad.sdk.pngencrypt.DeflatedChunksSet r1 = r11.fb(r13)
            r11.aDz = r1
        Lb1:
            com.kwad.sdk.pngencrypt.b$1 r1 = new com.kwad.sdk.pngencrypt.b$1
            com.kwad.sdk.pngencrypt.DeflatedChunksSet r9 = r11.aDz
            r2 = r1
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r0
            r7 = r14
            r2.<init>(r3, r4, r5, r6, r7, r9)
            r11.aDA = r1
            goto Lcb
        Lc1:
            r1 = r11
            r2 = r13
            r3 = r12
            r4 = r14
            com.kwad.sdk.pngencrypt.ChunkReader r12 = r1.a(r2, r3, r4, r6)
            r11.aDA = r12
        Lcb:
            com.kwad.sdk.pngencrypt.ChunkReader r12 = r11.aDA
            if (r12 == 0) goto Ld4
            if (r0 != 0) goto Ld4
            r12.bu(r10)
        Ld4:
            return
    }

    @Override
    public void close() {
            r1 = this;
            com.kwad.sdk.pngencrypt.DeflatedChunksSet r0 = r1.aDz
            if (r0 == 0) goto L7
            r0.close()
        L7:
            r0 = 1
            r1.closed = r0
            return
    }

    protected abstract com.kwad.sdk.pngencrypt.DeflatedChunksSet fb(java.lang.String r1);

    protected boolean fc(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public final boolean isDone() {
            r1 = this;
            boolean r0 = r1.aDw
            return r0
    }

    protected boolean o(int r1, java.lang.String r2) {
            r0 = this;
            r1 = 0
            return r1
    }
}
