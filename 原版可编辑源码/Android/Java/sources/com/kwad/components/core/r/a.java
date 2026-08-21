package com.kwad.components.core.r;

public class a {
    private static volatile a QG;
    private int No;
    private int QH;
    private boolean QI;
    private boolean QJ;
    private int QK;
    private boolean QL;

    private a() {
    }

    public static a pS() {
        if (QG == null) {
            synchronized (a.class) {
                if (QG == null) {
                    QG = new a();
                }
            }
        }
        return QG;
    }

    public final void aE(int i) {
        this.QH = i;
    }

    public final void aF(int i) {
        this.QK = i;
    }

    public final void aG(int i) {
        this.No = i;
    }

    public final void aG(boolean z) {
        this.QI = true;
    }

    public final void aH(boolean z) {
        this.QJ = z;
    }

    public final void aI(boolean z) {
        this.QL = z;
    }

    public final void clear() {
        this.QJ = false;
        this.QI = false;
        this.QK = 0;
        this.QL = false;
        this.QH = -1;
        this.No = 0;
    }

    public final int pT() {
        return this.QH;
    }

    public final boolean pU() {
        return this.QI;
    }

    public final boolean pV() {
        return this.QJ;
    }

    public final boolean pW() {
        int i = this.QK;
        return i == 1 || i == 3;
    }

    public final int pX() {
        return this.QK;
    }

    public final boolean pY() {
        return this.QL;
    }

    public final int pZ() {
        return this.No;
    }
}
