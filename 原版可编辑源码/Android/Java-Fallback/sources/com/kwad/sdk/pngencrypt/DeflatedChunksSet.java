package com.kwad.sdk.pngencrypt;

public class DeflatedChunksSet {
    protected final boolean aDJ;
    protected byte[] aDZ;
    private int aEa;
    private int aEb;
    private int aEc;
    com.kwad.sdk.pngencrypt.DeflatedChunksSet.State aEd;
    private final boolean aEe;
    private com.kwad.sdk.pngencrypt.d aEf;
    private long aEg;
    private long aEh;
    int aEi;
    int aEj;
    public final java.lang.String aEk;
    private java.util.zip.Inflater inf;

    enum State extends java.lang.Enum<com.kwad.sdk.pngencrypt.DeflatedChunksSet.State> {
        private static final com.kwad.sdk.pngencrypt.DeflatedChunksSet.State[] $VALUES = null;
        public static final com.kwad.sdk.pngencrypt.DeflatedChunksSet.State CLOSED = null;
        public static final com.kwad.sdk.pngencrypt.DeflatedChunksSet.State DONE = null;
        public static final com.kwad.sdk.pngencrypt.DeflatedChunksSet.State ROW_READY = null;
        public static final com.kwad.sdk.pngencrypt.DeflatedChunksSet.State WAITING_FOR_INPUT = null;

        static {
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = new com.kwad.sdk.pngencrypt.DeflatedChunksSet$State
                r1 = 0
                java.lang.String r2 = "WAITING_FOR_INPUT"
                r0.<init>(r2, r1)
                com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.WAITING_FOR_INPUT = r0
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = new com.kwad.sdk.pngencrypt.DeflatedChunksSet$State
                r2 = 1
                java.lang.String r3 = "ROW_READY"
                r0.<init>(r3, r2)
                com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.ROW_READY = r0
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = new com.kwad.sdk.pngencrypt.DeflatedChunksSet$State
                r3 = 2
                java.lang.String r4 = "DONE"
                r0.<init>(r4, r3)
                com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.DONE = r0
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = new com.kwad.sdk.pngencrypt.DeflatedChunksSet$State
                r4 = 3
                java.lang.String r5 = "CLOSED"
                r0.<init>(r5, r4)
                com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.CLOSED = r0
                r5 = 4
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State[] r5 = new com.kwad.sdk.pngencrypt.DeflatedChunksSet.State[r5]
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r6 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.WAITING_FOR_INPUT
                r5[r1] = r6
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r1 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.ROW_READY
                r5[r2] = r1
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r1 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.DONE
                r5[r3] = r1
                r5[r4] = r0
                com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.$VALUES = r5
                return
        }

        State(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kwad.sdk.pngencrypt.DeflatedChunksSet.State valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.pngencrypt.DeflatedChunksSet$State> r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r1 = (com.kwad.sdk.pngencrypt.DeflatedChunksSet.State) r1
                return r1
        }

        public static com.kwad.sdk.pngencrypt.DeflatedChunksSet.State[] values() {
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State[] r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State[] r0 = (com.kwad.sdk.pngencrypt.DeflatedChunksSet.State[]) r0
                return r0
        }

        public final boolean isClosed() {
                r1 = this;
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.CLOSED
                if (r1 != r0) goto L6
                r0 = 1
                return r0
            L6:
                r0 = 0
                return r0
        }

        public final boolean isDone() {
                r1 = this;
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.DONE
                if (r1 == r0) goto Lb
                com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.CLOSED
                if (r1 != r0) goto L9
                goto Lb
            L9:
                r0 = 0
                return r0
            Lb:
                r0 = 1
                return r0
        }
    }

    public DeflatedChunksSet(java.lang.String r3, boolean r4, int r5, int r6, java.util.zip.Inflater r7, byte[] r8) {
            r2 = this;
            r2.<init>()
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.WAITING_FOR_INPUT
            r2.aEd = r0
            r0 = 0
            r2.aEg = r0
            r2.aEh = r0
            r0 = -1
            r2.aEi = r0
            r2.aEj = r0
            r2.aEk = r3
            r2.aDJ = r4
            r2.aEb = r5
            if (r5 <= 0) goto L45
            if (r6 < r5) goto L45
            if (r7 == 0) goto L22
            r2.inf = r7
            r3 = 0
            goto L2a
        L22:
            java.util.zip.Inflater r3 = new java.util.zip.Inflater
            r3.<init>()
            r2.inf = r3
            r3 = 1
        L2a:
            r2.aEe = r3
            if (r8 == 0) goto L32
            int r3 = r8.length
            if (r3 < r5) goto L32
            goto L34
        L32:
            byte[] r8 = new byte[r6]
        L34:
            r2.aDZ = r8
            r2.aEc = r0
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r3 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.WAITING_FOR_INPUT
            r2.aEd = r3
            r2.cH(r5)     // Catch: java.lang.RuntimeException -> L40
            return
        L40:
            r3 = move-exception
            r2.close()
            throw r3
        L45:
            com.kwad.sdk.pngencrypt.PngjException r3 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r6 = "bad inital row len "
            r4.<init>(r6)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }

    private boolean Gz() {
            r6 = this;
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = r6.aEd     // Catch: java.lang.RuntimeException -> L87
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r1 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.ROW_READY     // Catch: java.lang.RuntimeException -> L87
            if (r0 != r1) goto L10
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException     // Catch: java.lang.RuntimeException -> L87
            java.lang.String r1 = "invalid state"
            r0.<init>(r1)     // Catch: java.lang.RuntimeException -> L87
            com.kwad.sdk.core.e.c.printStackTrace(r0)     // Catch: java.lang.RuntimeException -> L87
        L10:
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = r6.aEd     // Catch: java.lang.RuntimeException -> L87
            boolean r0 = r0.isDone()     // Catch: java.lang.RuntimeException -> L87
            r1 = 0
            if (r0 == 0) goto L1a
            return r1
        L1a:
            byte[] r0 = r6.aDZ     // Catch: java.lang.RuntimeException -> L87
            if (r0 == 0) goto L25
            byte[] r0 = r6.aDZ     // Catch: java.lang.RuntimeException -> L87
            int r0 = r0.length     // Catch: java.lang.RuntimeException -> L87
            int r2 = r6.aEb     // Catch: java.lang.RuntimeException -> L87
            if (r0 >= r2) goto L2b
        L25:
            int r0 = r6.aEb     // Catch: java.lang.RuntimeException -> L87
            byte[] r0 = new byte[r0]     // Catch: java.lang.RuntimeException -> L87
            r6.aDZ = r0     // Catch: java.lang.RuntimeException -> L87
        L2b:
            int r0 = r6.aEa     // Catch: java.lang.RuntimeException -> L87
            int r2 = r6.aEb     // Catch: java.lang.RuntimeException -> L87
            if (r0 >= r2) goto L60
            java.util.zip.Inflater r0 = r6.inf     // Catch: java.lang.RuntimeException -> L87
            boolean r0 = r0.finished()     // Catch: java.lang.RuntimeException -> L87
            if (r0 != 0) goto L60
            java.util.zip.Inflater r0 = r6.inf     // Catch: java.util.zip.DataFormatException -> L49 java.lang.RuntimeException -> L87
            byte[] r2 = r6.aDZ     // Catch: java.util.zip.DataFormatException -> L49 java.lang.RuntimeException -> L87
            int r3 = r6.aEa     // Catch: java.util.zip.DataFormatException -> L49 java.lang.RuntimeException -> L87
            int r4 = r6.aEb     // Catch: java.util.zip.DataFormatException -> L49 java.lang.RuntimeException -> L87
            int r5 = r6.aEa     // Catch: java.util.zip.DataFormatException -> L49 java.lang.RuntimeException -> L87
            int r4 = r4 - r5
            int r0 = r0.inflate(r2, r3, r4)     // Catch: java.util.zip.DataFormatException -> L49 java.lang.RuntimeException -> L87
            goto L55
        L49:
            r0 = move-exception
            com.kwad.sdk.pngencrypt.PngjException r2 = new com.kwad.sdk.pngencrypt.PngjException     // Catch: java.lang.RuntimeException -> L87
            java.lang.String r3 = "error decompressing zlib stream "
            r2.<init>(r3, r0)     // Catch: java.lang.RuntimeException -> L87
            com.kwad.sdk.core.e.c.printStackTrace(r2)     // Catch: java.lang.RuntimeException -> L87
            r0 = r1
        L55:
            int r2 = r6.aEa     // Catch: java.lang.RuntimeException -> L87
            int r2 = r2 + r0
            r6.aEa = r2     // Catch: java.lang.RuntimeException -> L87
            long r2 = r6.aEh     // Catch: java.lang.RuntimeException -> L87
            long r4 = (long) r0     // Catch: java.lang.RuntimeException -> L87
            long r2 = r2 + r4
            r6.aEh = r2     // Catch: java.lang.RuntimeException -> L87
        L60:
            int r0 = r6.aEa     // Catch: java.lang.RuntimeException -> L87
            int r2 = r6.aEb     // Catch: java.lang.RuntimeException -> L87
            if (r0 != r2) goto L69
        L66:
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.ROW_READY     // Catch: java.lang.RuntimeException -> L87
            goto L7b
        L69:
            java.util.zip.Inflater r0 = r6.inf     // Catch: java.lang.RuntimeException -> L87
            boolean r0 = r0.finished()     // Catch: java.lang.RuntimeException -> L87
            if (r0 != 0) goto L74
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.WAITING_FOR_INPUT     // Catch: java.lang.RuntimeException -> L87
            goto L7b
        L74:
            int r0 = r6.aEa     // Catch: java.lang.RuntimeException -> L87
            if (r0 <= 0) goto L79
            goto L66
        L79:
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.DONE     // Catch: java.lang.RuntimeException -> L87
        L7b:
            r6.aEd = r0     // Catch: java.lang.RuntimeException -> L87
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r2 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.ROW_READY     // Catch: java.lang.RuntimeException -> L87
            if (r0 != r2) goto L86
            r6.GA()     // Catch: java.lang.RuntimeException -> L87
            r0 = 1
            return r0
        L86:
            return r1
        L87:
            r0 = move-exception
            r6.close()
            throw r0
    }

    protected void GA() {
            r0 = this;
            return
    }

    protected int GB() {
            r2 = this;
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r1 = "not implemented"
            r0.<init>(r1)
            throw r0
    }

    public final void GC() {
            r1 = this;
            boolean r0 = r1.isDone()
            if (r0 != 0) goto La
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.DONE
            r1.aEd = r0
        La:
            return
    }

    public final int GD() {
            r1 = this;
            int r0 = r1.aEc
            return r0
    }

    protected final void a(com.kwad.sdk.pngencrypt.d r4) {
            r3 = this;
            java.lang.String r0 = r3.aEk
            com.kwad.sdk.pngencrypt.chunk.d r1 = r4.Gm()
            java.lang.String r1 = r1.adE
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L34
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Bad chunk inside IdatSet, id:"
            r1.<init>(r2)
            com.kwad.sdk.pngencrypt.chunk.d r2 = r4.Gm()
            java.lang.String r2 = r2.adE
            r1.append(r2)
            java.lang.String r2 = ", expected:"
            r1.append(r2)
            java.lang.String r2 = r3.aEk
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L34:
            r3.aEf = r4
            int r0 = r3.aEi
            int r0 = r0 + 1
            r3.aEi = r0
            int r1 = r3.aEj
            if (r1 < 0) goto L44
            int r0 = r0 + r1
            r4.cG(r0)
        L44:
            return
    }

    protected final void c(byte[] r5, int r6, int r7) {
            r4 = this;
            long r0 = r4.aEg
            long r2 = (long) r7
            long r0 = r0 + r2
            r4.aEg = r0
            if (r7 <= 0) goto L57
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = r4.aEd
            boolean r0 = r0.isDone()
            if (r0 == 0) goto L11
            goto L57
        L11:
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = r4.aEd
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r1 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.ROW_READY
            if (r0 != r1) goto L21
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r1 = "this should only be called if waitingForMoreInput"
            r0.<init>(r1)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L21:
            java.util.zip.Inflater r0 = r4.inf
            boolean r0 = r0.needsDictionary()
            if (r0 != 0) goto L4f
            java.util.zip.Inflater r0 = r4.inf
            boolean r0 = r0.needsInput()
            if (r0 == 0) goto L4f
            java.util.zip.Inflater r0 = r4.inf
            r0.setInput(r5, r6, r7)
            boolean r5 = r4.aDJ
            if (r5 == 0) goto L4b
        L3a:
            boolean r5 = r4.Gz()
            if (r5 == 0) goto L4e
            int r5 = r4.GB()
            r4.cH(r5)
            r4.isDone()
            goto L3a
        L4b:
            r4.Gz()
        L4e:
            return
        L4f:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.String r6 = "should not happen"
            r5.<init>(r6)
            throw r5
        L57:
            return
    }

    public final void cH(int r3) {
            r2 = this;
            r0 = 0
            r2.aEa = r0
            int r1 = r2.aEc
            int r1 = r1 + 1
            r2.aEc = r1
            if (r3 > 0) goto L11
        Lb:
            r2.aEb = r0
            r2.GC()
            return
        L11:
            java.util.zip.Inflater r1 = r2.inf
            boolean r1 = r1.finished()
            if (r1 == 0) goto L1a
            goto Lb
        L1a:
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.WAITING_FOR_INPUT
            r2.aEd = r0
            r2.aEb = r3
            boolean r3 = r2.aDJ
            if (r3 != 0) goto L27
            r2.Gz()
        L27:
            return
    }

    public void close() {
            r1 = this;
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = r1.aEd     // Catch: java.lang.Exception -> L1c
            boolean r0 = r0.isClosed()     // Catch: java.lang.Exception -> L1c
            if (r0 != 0) goto Lc
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = com.kwad.sdk.pngencrypt.DeflatedChunksSet.State.CLOSED     // Catch: java.lang.Exception -> L1c
            r1.aEd = r0     // Catch: java.lang.Exception -> L1c
        Lc:
            boolean r0 = r1.aEe     // Catch: java.lang.Exception -> L1c
            if (r0 == 0) goto L1c
            java.util.zip.Inflater r0 = r1.inf     // Catch: java.lang.Exception -> L1c
            if (r0 == 0) goto L1c
            java.util.zip.Inflater r0 = r1.inf     // Catch: java.lang.Exception -> L1c
            r0.end()     // Catch: java.lang.Exception -> L1c
            r0 = 0
            r1.inf = r0     // Catch: java.lang.Exception -> L1c
        L1c:
            return
    }

    public final boolean ff(java.lang.String r4) {
            r3 = this;
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = r3.aEd
            boolean r0 = r0.isClosed()
            r1 = 0
            if (r0 == 0) goto La
            return r1
        La:
            java.lang.String r0 = r3.aEk
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L14
            r4 = 1
            return r4
        L14:
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = r3.aEd
            boolean r0 = r0.isDone()
            if (r0 == 0) goto L28
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r4 = r3.aEd
            boolean r4 = r4.isClosed()
            if (r4 != 0) goto L27
            r3.close()
        L27:
            return r1
        L28:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unexpected chunk "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = " while "
            r1.append(r4)
            java.lang.String r4 = r3.aEk
            r1.append(r4)
            java.lang.String r4 = " set is not done"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public final boolean isClosed() {
            r1 = this;
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = r1.aEd
            boolean r0 = r0.isClosed()
            return r0
    }

    public final boolean isDone() {
            r1 = this;
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r0 = r1.aEd
            boolean r0 = r0.isDone()
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "idatSet : "
            r1.<init>(r2)
            com.kwad.sdk.pngencrypt.d r2 = r4.aEf
            com.kwad.sdk.pngencrypt.chunk.d r2 = r2.Gm()
            java.lang.String r2 = r2.adE
            r1.append(r2)
            java.lang.String r2 = " state="
            r1.append(r2)
            com.kwad.sdk.pngencrypt.DeflatedChunksSet$State r2 = r4.aEd
            r1.append(r2)
            java.lang.String r2 = " rows="
            r1.append(r2)
            int r2 = r4.aEc
            r1.append(r2)
            java.lang.String r2 = " bytes="
            r1.append(r2)
            long r2 = r4.aEg
            r1.append(r2)
            java.lang.String r2 = "/"
            r1.append(r2)
            long r2 = r4.aEh
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
