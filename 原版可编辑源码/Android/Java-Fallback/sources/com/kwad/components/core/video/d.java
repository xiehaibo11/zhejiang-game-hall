package com.kwad.components.core.video;

public final class d {
    private boolean SG;
    private boolean SH;
    private boolean SI;
    private boolean SJ;
    private boolean SK;
    private int SL;

    public d() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.SG = r0
            r1.SH = r0
            r1.SI = r0
            r1.SJ = r0
            r1.SK = r0
            r0 = -1
            r1.SL = r0
            return
    }

    public final void aL(int r1) {
            r0 = this;
            r0.SL = r1
            return
    }

    public final void aL(boolean r1) {
            r0 = this;
            r0.SI = r1
            return
    }

    public final boolean qL() {
            r1 = this;
            int r0 = r1.SL
            if (r0 <= 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public final int qM() {
            r1 = this;
            int r0 = r1.SL
            return r0
    }

    public final boolean qN() {
            r1 = this;
            boolean r0 = r1.SG
            return r0
    }

    public final boolean qO() {
            r1 = this;
            boolean r0 = r1.SH
            return r0
    }

    public final boolean qP() {
            r1 = this;
            boolean r0 = r1.SI
            return r0
    }

    public final boolean qQ() {
            r1 = this;
            boolean r0 = r1.SJ
            return r0
    }

    public final boolean qR() {
            r1 = this;
            boolean r0 = r1.SK
            return r0
    }

    public final void setAd(boolean r1) {
            r0 = this;
            r0.SH = r1
            return
    }

    public final void setFillXY(boolean r1) {
            r0 = this;
            r0.SK = r1
            return
    }

    public final void setForce(boolean r1) {
            r0 = this;
            r0.SG = r1
            return
    }

    public final void setHorizontalVideo(boolean r1) {
            r0 = this;
            r0.SJ = r1
            return
    }
}
