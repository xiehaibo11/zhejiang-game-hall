package com.kwad.sdk.pngencrypt.chunk;

public abstract class PngChunk {
    protected final com.kwad.sdk.pngencrypt.k aEC;
    public final boolean aFC;
    public final boolean aFD;
    public final boolean aFE;
    protected d aFF;
    private boolean aFG = false;
    protected int aFH = -1;
    public final String adE;

    public enum ChunkOrderingConstraint {
        NONE,
        BEFORE_PLTE_AND_IDAT,
        AFTER_PLTE_BEFORE_IDAT,
        AFTER_PLTE_BEFORE_IDAT_PLTE_REQUIRED,
        BEFORE_IDAT,
        AFTER_IDAT,
        NA;

        public final boolean isOk(int i, boolean z) {
            if (this == NONE) {
                return true;
            }
            return this == BEFORE_IDAT ? i < 4 : this == BEFORE_PLTE_AND_IDAT ? i < 2 : this == AFTER_PLTE_BEFORE_IDAT ? z ? i < 4 : i < 4 && i > 2 : this == AFTER_IDAT && i > 4;
        }

        public final boolean mustGoAfterIDAT() {
            return this == AFTER_IDAT;
        }

        public final boolean mustGoAfterPLTE() {
            return this == AFTER_PLTE_BEFORE_IDAT || this == AFTER_PLTE_BEFORE_IDAT_PLTE_REQUIRED;
        }

        public final boolean mustGoBeforeIDAT() {
            return this == BEFORE_IDAT || this == BEFORE_PLTE_AND_IDAT || this == AFTER_PLTE_BEFORE_IDAT;
        }

        public final boolean mustGoBeforePLTE() {
            return this == BEFORE_PLTE_AND_IDAT;
        }
    }

    public PngChunk(String str, com.kwad.sdk.pngencrypt.k kVar) {
        this.adE = str;
        this.aEC = kVar;
        this.aFC = b.fh(str);
        this.aFD = b.fi(str);
        this.aFE = b.fj(str);
    }

    private long GZ() {
        d dVar = this.aFF;
        if (dVar != null) {
            return dVar.GZ();
        }
        return -1L;
    }

    private int Hb() {
        d dVar = this.aFF;
        if (dVar != null) {
            return dVar.len;
        }
        return -1;
    }

    protected abstract void a(d dVar);

    final void b(d dVar) {
        this.aFF = dVar;
    }

    final void cR(int i) {
        this.aFH = i;
    }

    public String toString() {
        return "chunk id= " + this.adE + " (len=" + Hb() + " offset=" + GZ() + ")";
    }
}
