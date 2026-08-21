package com.kwad.sdk.pngencrypt;

public abstract class ChunkReader implements com.kwad.sdk.pngencrypt.f {
    public final com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode aDl;
    private final com.kwad.sdk.pngencrypt.chunk.d aDm;
    protected int aDn;
    private int aDo;
    private boolean aDp;
    protected com.kwad.sdk.pngencrypt.ErrorBehaviour aDq;

    public enum ChunkReaderMode extends java.lang.Enum<com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode> {
        private static final com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode[] $VALUES = null;
        public static final com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode BUFFER = null;
        public static final com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode PROCESS = null;
        public static final com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode SKIP = null;

        static {
                com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r0 = new com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode
                r1 = 0
                java.lang.String r2 = "BUFFER"
                r0.<init>(r2, r1)
                com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.BUFFER = r0
                com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r0 = new com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode
                r2 = 1
                java.lang.String r3 = "PROCESS"
                r0.<init>(r3, r2)
                com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.PROCESS = r0
                com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r0 = new com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode
                r3 = 2
                java.lang.String r4 = "SKIP"
                r0.<init>(r4, r3)
                com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.SKIP = r0
                r4 = 3
                com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode[] r4 = new com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode[r4]
                com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r5 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.BUFFER
                r4[r1] = r5
                com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r1 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.PROCESS
                r4[r2] = r1
                r4[r3] = r0
                com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.$VALUES = r4
                return
        }

        ChunkReaderMode(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode> r0 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r1 = (com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode) r1
                return r1
        }

        public static com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode[] values() {
                com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode[] r0 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode[] r0 = (com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode[]) r0
                return r0
        }
    }

    public ChunkReader(int r5, java.lang.String r6, long r7, com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode r9) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.aDn = r0
            r4.aDo = r0
            com.kwad.sdk.pngencrypt.ErrorBehaviour r1 = com.kwad.sdk.pngencrypt.ErrorBehaviour.STRICT
            r4.aDq = r1
            if (r9 == 0) goto L17
            int r1 = r6.length()
            r2 = 4
            if (r1 != r2) goto L17
            if (r5 >= 0) goto L2d
        L17:
            com.kwad.sdk.pngencrypt.PngjException r1 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Bad chunk paramenters: "
            r2.<init>(r3)
            r2.append(r9)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L2d:
            r4.aDl = r9
            com.kwad.sdk.pngencrypt.chunk.d r1 = new com.kwad.sdk.pngencrypt.chunk.d
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r2 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.BUFFER
            r3 = 1
            if (r9 != r2) goto L38
            r2 = r3
            goto L39
        L38:
            r2 = r0
        L39:
            r1.<init>(r5, r6, r2)
            r4.aDm = r1
            r1.ar(r7)
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r5 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.SKIP
            if (r9 != r5) goto L46
            goto L47
        L46:
            r0 = r3
        L47:
            r4.aDp = r0
            return
    }

    public final com.kwad.sdk.pngencrypt.chunk.d Gm() {
            r1 = this;
            com.kwad.sdk.pngencrypt.chunk.d r0 = r1.aDm
            return r0
    }

    protected abstract void Gn();

    protected abstract void a(int r1, byte[] r2, int r3, int r4);

    @Override
    public final int b(byte[] r6, int r7, int r8) {
            r5 = this;
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            if (r8 >= 0) goto L10
            com.kwad.sdk.pngencrypt.PngjException r1 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r2 = "negative length??"
            r1.<init>(r2)
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L10:
            int r1 = r5.aDn
            r2 = 4
            if (r1 != 0) goto L24
            int r1 = r5.aDo
            if (r1 != 0) goto L24
            boolean r1 = r5.aDp
            if (r1 == 0) goto L24
            com.kwad.sdk.pngencrypt.chunk.d r1 = r5.aDm
            byte[] r3 = r1.aFt
            r1.f(r3, r0, r2)
        L24:
            com.kwad.sdk.pngencrypt.chunk.d r1 = r5.aDm
            int r1 = r1.len
            int r3 = r5.aDn
            int r1 = r1 - r3
            if (r1 <= r8) goto L2e
            r1 = r8
        L2e:
            if (r1 > 0) goto L34
            int r3 = r5.aDo
            if (r3 != 0) goto L6f
        L34:
            boolean r3 = r5.aDp
            if (r3 == 0) goto L45
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r3 = r5.aDl
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r4 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.BUFFER
            if (r3 == r4) goto L45
            if (r1 <= 0) goto L45
            com.kwad.sdk.pngencrypt.chunk.d r3 = r5.aDm
            r3.f(r6, r7, r1)
        L45:
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r3 = r5.aDl
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r4 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.BUFFER
            if (r3 != r4) goto L5d
            com.kwad.sdk.pngencrypt.chunk.d r3 = r5.aDm
            byte[] r3 = r3.data
            if (r3 == r6) goto L68
            if (r1 <= 0) goto L68
            com.kwad.sdk.pngencrypt.chunk.d r3 = r5.aDm
            byte[] r3 = r3.data
            int r4 = r5.aDn
            java.lang.System.arraycopy(r6, r7, r3, r4, r1)
            goto L68
        L5d:
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r3 = r5.aDl
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r4 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.PROCESS
            if (r3 != r4) goto L68
            int r3 = r5.aDn
            r5.a(r3, r6, r7, r1)
        L68:
            int r3 = r5.aDn
            int r3 = r3 + r1
            r5.aDn = r3
            int r7 = r7 + r1
            int r8 = r8 - r1
        L6f:
            int r3 = r5.aDn
            com.kwad.sdk.pngencrypt.chunk.d r4 = r5.aDm
            int r4 = r4.len
            if (r3 != r4) goto Lc3
            int r3 = r5.aDo
            int r3 = 4 - r3
            if (r3 <= r8) goto L7e
            goto L7f
        L7e:
            r8 = r3
        L7f:
            if (r8 <= 0) goto Lc2
            com.kwad.sdk.pngencrypt.chunk.d r3 = r5.aDm
            byte[] r3 = r3.aFv
            if (r6 == r3) goto L90
            com.kwad.sdk.pngencrypt.chunk.d r3 = r5.aDm
            byte[] r3 = r3.aFv
            int r4 = r5.aDo
            java.lang.System.arraycopy(r6, r7, r3, r4, r8)
        L90:
            int r6 = r5.aDo
            int r6 = r6 + r8
            r5.aDo = r6
            if (r6 != r2) goto Lc2
            boolean r6 = r5.aDp
            if (r6 == 0) goto Lb8
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r6 = r5.aDl
            com.kwad.sdk.pngencrypt.ChunkReader$ChunkReaderMode r7 = com.kwad.sdk.pngencrypt.ChunkReader.ChunkReaderMode.BUFFER
            if (r6 != r7) goto Lac
            com.kwad.sdk.pngencrypt.chunk.d r6 = r5.aDm
            byte[] r7 = r6.data
            com.kwad.sdk.pngencrypt.chunk.d r2 = r5.aDm
            int r2 = r2.len
            r6.f(r7, r0, r2)
        Lac:
            com.kwad.sdk.pngencrypt.chunk.d r6 = r5.aDm
            com.kwad.sdk.pngencrypt.ErrorBehaviour r7 = r5.aDq
            com.kwad.sdk.pngencrypt.ErrorBehaviour r2 = com.kwad.sdk.pngencrypt.ErrorBehaviour.STRICT
            if (r7 != r2) goto Lb5
            r0 = 1
        Lb5:
            r6.bw(r0)
        Lb8:
            java.lang.String r6 = "PNG_ENCRYPT"
            java.lang.String r7 = "Chunk done"
            com.kwad.sdk.core.e.c.d(r6, r7)
            r5.Gn()
        Lc2:
            r0 = r8
        Lc3:
            if (r1 > 0) goto Lca
            if (r0 <= 0) goto Lc8
            goto Lca
        Lc8:
            r6 = -1
            return r6
        Lca:
            int r1 = r1 + r0
            return r1
    }

    public final void bu(boolean r1) {
            r0 = this;
            r1 = 0
            r0.aDp = r1
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
            com.kwad.sdk.pngencrypt.ChunkReader r5 = (com.kwad.sdk.pngencrypt.ChunkReader) r5
            com.kwad.sdk.pngencrypt.chunk.d r2 = r4.aDm
            com.kwad.sdk.pngencrypt.chunk.d r5 = r5.aDm
            if (r2 != 0) goto L1e
            if (r5 == 0) goto L25
            return r1
        L1e:
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L25
            return r1
        L25:
            return r0
    }

    public int hashCode() {
            r1 = this;
            com.kwad.sdk.pngencrypt.chunk.d r0 = r1.aDm
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            int r0 = r0.hashCode()
        La:
            int r0 = r0 + 31
            return r0
    }

    @Override
    public final boolean isDone() {
            r2 = this;
            int r0 = r2.aDo
            r1 = 4
            if (r0 != r1) goto L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            com.kwad.sdk.pngencrypt.chunk.d r0 = r1.aDm
            java.lang.String r0 = r0.toString()
            return r0
    }
}
