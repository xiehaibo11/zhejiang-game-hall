package com.kwad.components.core.r;

public class a {
    private static volatile com.kwad.components.core.r.a QG;
    private int No;
    private int QH;
    private boolean QI;
    private boolean QJ;
    private int QK;
    private boolean QL;

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.core.r.a pS() {
            com.kwad.components.core.r.a r0 = com.kwad.components.core.r.a.QG
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.core.r.a> r0 = com.kwad.components.core.r.a.class
            monitor-enter(r0)
            com.kwad.components.core.r.a r1 = com.kwad.components.core.r.a.QG     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.core.r.a r1 = new com.kwad.components.core.r.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.core.r.a.QG = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.core.r.a r0 = com.kwad.components.core.r.a.QG
            return r0
    }

    public final void aE(int r1) {
            r0 = this;
            r0.QH = r1
            return
    }

    public final void aF(int r1) {
            r0 = this;
            r0.QK = r1
            return
    }

    public final void aG(int r1) {
            r0 = this;
            r0.No = r1
            return
    }

    public final void aG(boolean r1) {
            r0 = this;
            r1 = 1
            r0.QI = r1
            return
    }

    public final void aH(boolean r1) {
            r0 = this;
            r0.QJ = r1
            return
    }

    public final void aI(boolean r1) {
            r0 = this;
            r0.QL = r1
            return
    }

    public final void clear() {
            r2 = this;
            r0 = 0
            r2.QJ = r0
            r2.QI = r0
            r2.QK = r0
            r2.QL = r0
            r1 = -1
            r2.QH = r1
            r2.No = r0
            return
    }

    public final int pT() {
            r1 = this;
            int r0 = r1.QH
            return r0
    }

    public final boolean pU() {
            r1 = this;
            boolean r0 = r1.QI
            return r0
    }

    public final boolean pV() {
            r1 = this;
            boolean r0 = r1.QJ
            return r0
    }

    public final boolean pW() {
            r3 = this;
            int r0 = r3.QK
            r1 = 1
            if (r0 == r1) goto Lb
            r2 = 3
            if (r0 != r2) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            return r1
    }

    public final int pX() {
            r1 = this;
            int r0 = r1.QK
            return r0
    }

    public final boolean pY() {
            r1 = this;
            boolean r0 = r1.QL
            return r0
    }

    public final int pZ() {
            r1 = this;
            int r0 = r1.No
            return r0
    }
}
