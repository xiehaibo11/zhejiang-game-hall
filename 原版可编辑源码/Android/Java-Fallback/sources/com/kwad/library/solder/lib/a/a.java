package com.kwad.library.solder.lib.a;

public abstract class a {
    protected java.io.File afP;
    protected java.lang.String afQ;
    protected java.lang.String afR;
    private boolean afS;
    private final byte[] afT;
    private final java.lang.String afU;
    protected com.kwad.library.solder.lib.c.b afV;
    protected com.kwad.library.solder.lib.ext.c afy;
    protected java.lang.String mVersion;

    public a(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            byte[] r1 = new byte[r0]
            r2.afT = r1
            r2.afS = r0
            r2.afU = r3
            r2.afQ = r3
            com.kwad.library.solder.lib.i r3 = com.kwad.library.solder.lib.i.wb()
            com.kwad.library.solder.lib.ext.c r3 = r3.wd()
            r2.afy = r3
            return
    }

    private void wl() {
            r2 = this;
            boolean r0 = r2.afS
            if (r0 == 0) goto L5
            return
        L5:
            byte[] r0 = r2.afT
            monitor-enter(r0)
            r1 = 1
            r2.afS = r1     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            return
        Ld:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r1
    }

    public final com.kwad.library.solder.lib.a.a a(com.kwad.library.solder.lib.c.b r1) {
            r0 = this;
            r0.afV = r1
            return r0
    }

    public final void bD(java.lang.String r1) {
            r0 = this;
            r0.mVersion = r1
            return
    }

    public final void bE(java.lang.String r1) {
            r0 = this;
            r0.afR = r1
            return
    }

    public final void bF(java.lang.String r1) {
            r0 = this;
            r0.afQ = r1
            return
    }

    protected abstract void f(android.content.Context r1, java.lang.String r2);

    public final java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.afR
            return r0
    }

    public final java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = r1.mVersion
            return r0
    }

    public final void i(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.f(r1, r2)
            r0.wl()
            return
    }

    public final boolean isLoaded() {
            r2 = this;
            boolean r0 = r2.afS
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            byte[] r0 = r2.afT
            monitor-enter(r0)
            boolean r1 = r2.afS     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            return r1
        Ld:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r1
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Plugin{, ApkPath = '"
            r0.<init>(r1)
            java.lang.String r1 = r2.afU
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final java.lang.String wm() {
            r1 = this;
            java.lang.String r0 = r1.afU
            return r0
    }

    public final java.lang.String wn() {
            r1 = this;
            com.kwad.library.solder.lib.c.b r0 = r1.afV
            if (r0 == 0) goto L7
            java.lang.String r0 = r0.agB
            return r0
        L7:
            r0 = 0
            return r0
    }
}
