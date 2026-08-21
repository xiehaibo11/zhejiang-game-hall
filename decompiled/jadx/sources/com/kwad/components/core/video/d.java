package com.kwad.components.core.video;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    private boolean SG = false;
    private boolean SH = false;
    private boolean SI = false;
    private boolean SJ = false;
    private boolean SK = false;
    private int SL = -1;

    public final void aL(int i) {
        this.SL = i;
    }

    public final void aL(boolean z) {
        this.SI = z;
    }

    public final boolean qL() {
        return this.SL > 0;
    }

    public final int qM() {
        return this.SL;
    }

    public final boolean qN() {
        return this.SG;
    }

    public final boolean qO() {
        return this.SH;
    }

    public final boolean qP() {
        return this.SI;
    }

    public final boolean qQ() {
        return this.SJ;
    }

    public final boolean qR() {
        return this.SK;
    }

    public final void setAd(boolean z) {
        this.SH = z;
    }

    public final void setFillXY(boolean z) {
        this.SK = z;
    }

    public final void setForce(boolean z) {
        this.SG = z;
    }

    public final void setHorizontalVideo(boolean z) {
        this.SJ = z;
    }
}
