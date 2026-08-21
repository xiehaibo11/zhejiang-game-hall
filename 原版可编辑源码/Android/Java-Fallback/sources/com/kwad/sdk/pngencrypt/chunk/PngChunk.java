package com.kwad.sdk.pngencrypt.chunk;

public abstract class PngChunk {
    protected final com.kwad.sdk.pngencrypt.k aEC;
    public final boolean aFC;
    public final boolean aFD;
    public final boolean aFE;
    protected com.kwad.sdk.pngencrypt.chunk.d aFF;
    private boolean aFG;
    protected int aFH;
    public final java.lang.String adE;

    public enum ChunkOrderingConstraint extends java.lang.Enum<com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint> {
        private static final com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint[] $VALUES = null;
        public static final com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint AFTER_IDAT = null;
        public static final com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint AFTER_PLTE_BEFORE_IDAT = null;
        public static final com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint AFTER_PLTE_BEFORE_IDAT_PLTE_REQUIRED = null;
        public static final com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint BEFORE_IDAT = null;
        public static final com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint BEFORE_PLTE_AND_IDAT = null;
        public static final com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint NA = null;
        public static final com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint NONE = null;

        static {
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = new com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint
                r1 = 0
                java.lang.String r2 = "NONE"
                r0.<init>(r2, r1)
                com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.NONE = r0
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = new com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint
                r2 = 1
                java.lang.String r3 = "BEFORE_PLTE_AND_IDAT"
                r0.<init>(r3, r2)
                com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.BEFORE_PLTE_AND_IDAT = r0
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = new com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint
                r3 = 2
                java.lang.String r4 = "AFTER_PLTE_BEFORE_IDAT"
                r0.<init>(r4, r3)
                com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_PLTE_BEFORE_IDAT = r0
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = new com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint
                r4 = 3
                java.lang.String r5 = "AFTER_PLTE_BEFORE_IDAT_PLTE_REQUIRED"
                r0.<init>(r5, r4)
                com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_PLTE_BEFORE_IDAT_PLTE_REQUIRED = r0
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = new com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint
                r5 = 4
                java.lang.String r6 = "BEFORE_IDAT"
                r0.<init>(r6, r5)
                com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.BEFORE_IDAT = r0
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = new com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint
                r6 = 5
                java.lang.String r7 = "AFTER_IDAT"
                r0.<init>(r7, r6)
                com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_IDAT = r0
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = new com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint
                r7 = 6
                java.lang.String r8 = "NA"
                r0.<init>(r8, r7)
                com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.NA = r0
                r8 = 7
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint[] r8 = new com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint[r8]
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r9 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.NONE
                r8[r1] = r9
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r1 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.BEFORE_PLTE_AND_IDAT
                r8[r2] = r1
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r1 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_PLTE_BEFORE_IDAT
                r8[r3] = r1
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r1 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_PLTE_BEFORE_IDAT_PLTE_REQUIRED
                r8[r4] = r1
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r1 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.BEFORE_IDAT
                r8[r5] = r1
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r1 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_IDAT
                r8[r6] = r1
                r8[r7] = r0
                com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.$VALUES = r8
                return
        }

        ChunkOrderingConstraint(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint> r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r1 = (com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint) r1
                return r1
        }

        public static com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint[] values() {
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint[] r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint[] r0 = (com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint[]) r0
                return r0
        }

        public final boolean isOk(int r6, boolean r7) {
                r5 = this;
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.NONE
                r1 = 1
                if (r5 != r0) goto L6
                return r1
            L6:
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.BEFORE_IDAT
                r2 = 4
                r3 = 0
                if (r5 != r0) goto L10
                if (r6 >= r2) goto Lf
                return r1
            Lf:
                return r3
            L10:
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.BEFORE_PLTE_AND_IDAT
                r4 = 2
                if (r5 != r0) goto L19
                if (r6 >= r4) goto L18
                return r1
            L18:
                return r3
            L19:
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_PLTE_BEFORE_IDAT
                if (r5 != r0) goto L29
                if (r7 == 0) goto L23
                if (r6 >= r2) goto L22
                return r1
            L22:
                return r3
            L23:
                if (r6 >= r2) goto L28
                if (r6 <= r4) goto L28
                return r1
            L28:
                return r3
            L29:
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r7 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_IDAT
                if (r5 != r7) goto L30
                if (r6 <= r2) goto L30
                return r1
            L30:
                return r3
        }

        public final boolean mustGoAfterIDAT() {
                r1 = this;
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_IDAT
                if (r1 != r0) goto L6
                r0 = 1
                return r0
            L6:
                r0 = 0
                return r0
        }

        public final boolean mustGoAfterPLTE() {
                r1 = this;
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_PLTE_BEFORE_IDAT
                if (r1 == r0) goto Lb
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_PLTE_BEFORE_IDAT_PLTE_REQUIRED
                if (r1 != r0) goto L9
                goto Lb
            L9:
                r0 = 0
                return r0
            Lb:
                r0 = 1
                return r0
        }

        public final boolean mustGoBeforeIDAT() {
                r1 = this;
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.BEFORE_IDAT
                if (r1 == r0) goto Lf
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.BEFORE_PLTE_AND_IDAT
                if (r1 == r0) goto Lf
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.AFTER_PLTE_BEFORE_IDAT
                if (r1 != r0) goto Ld
                goto Lf
            Ld:
                r0 = 0
                return r0
            Lf:
                r0 = 1
                return r0
        }

        public final boolean mustGoBeforePLTE() {
                r1 = this;
                com.kwad.sdk.pngencrypt.chunk.PngChunk$ChunkOrderingConstraint r0 = com.kwad.sdk.pngencrypt.chunk.PngChunk.ChunkOrderingConstraint.BEFORE_PLTE_AND_IDAT
                if (r1 != r0) goto L6
                r0 = 1
                return r0
            L6:
                r0 = 0
                return r0
        }
    }

    public PngChunk(java.lang.String r2, com.kwad.sdk.pngencrypt.k r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.aFG = r0
            r0 = -1
            r1.aFH = r0
            r1.adE = r2
            r1.aEC = r3
            boolean r3 = com.kwad.sdk.pngencrypt.chunk.b.fh(r2)
            r1.aFC = r3
            boolean r3 = com.kwad.sdk.pngencrypt.chunk.b.fi(r2)
            r1.aFD = r3
            boolean r2 = com.kwad.sdk.pngencrypt.chunk.b.fj(r2)
            r1.aFE = r2
            return
    }

    private long GZ() {
            r2 = this;
            com.kwad.sdk.pngencrypt.chunk.d r0 = r2.aFF
            if (r0 == 0) goto L9
            long r0 = r0.GZ()
            return r0
        L9:
            r0 = -1
            return r0
    }

    private int Hb() {
            r1 = this;
            com.kwad.sdk.pngencrypt.chunk.d r0 = r1.aFF
            if (r0 == 0) goto L7
            int r0 = r0.len
            return r0
        L7:
            r0 = -1
            return r0
    }

    protected abstract void a(com.kwad.sdk.pngencrypt.chunk.d r1);

    final void b(com.kwad.sdk.pngencrypt.chunk.d r1) {
            r0 = this;
            r0.aFF = r1
            return
    }

    final void cR(int r1) {
            r0 = this;
            r0.aFH = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "chunk id= "
            r0.<init>(r1)
            java.lang.String r1 = r3.adE
            r0.append(r1)
            java.lang.String r1 = " (len="
            r0.append(r1)
            int r1 = r3.Hb()
            r0.append(r1)
            java.lang.String r1 = " offset="
            r0.append(r1)
            long r1 = r3.GZ()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
