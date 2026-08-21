package com.kwad.library.solder.lib.a;

import com.kwad.library.solder.lib.a.a;

public abstract class f<P extends com.kwad.library.solder.lib.a.a> {
    protected com.kwad.library.solder.lib.a.e afO;
    protected java.lang.String afR;
    private final byte[] afT;
    protected int afW;
    protected int afX;
    protected java.lang.StringBuffer afY;
    protected java.lang.String afZ;
    protected java.lang.String aga;
    protected boolean agb;
    protected P agc;
    protected com.kwad.library.solder.lib.ext.b agd;
    protected java.lang.Throwable age;
    protected java.lang.String agf;
    protected boolean agg;
    protected long agh;
    protected java.lang.String agi;
    protected java.util.List<com.kwad.library.solder.lib.c.a> agj;
    protected com.kwad.library.solder.lib.c.b agk;
    protected java.lang.String mDownloadUrl;
    protected int mState;
    protected java.lang.String mVersion;

    public f() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.mState = r0
            r1 = 0
            r2.afW = r1
            byte[] r1 = new byte[r1]
            r2.afT = r1
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.<init>(r0)
            r2.afY = r1
            return
    }

    public f(com.kwad.library.solder.lib.c.b r2) {
            r1 = this;
            r1.<init>()
            r1.agk = r2
            java.lang.String r0 = r2.agy
            r1.afR = r0
            java.lang.String r0 = r2.version
            r1.mVersion = r0
            boolean r0 = r2.agg
            r1.agg = r0
            java.lang.String r2 = r2.agf
            r1.agf = r2
            return
    }

    private java.util.List<com.kwad.library.solder.lib.c.a> A(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L75
            boolean r1 = android.text.TextUtils.isEmpty(r8)
            if (r1 == 0) goto L12
            goto L75
        L12:
            com.kwad.library.solder.lib.a.e r1 = r6.afO
            com.kwad.library.solder.lib.a.c r1 = r1.wg()
            java.lang.String r1 = r1.bA(r7)
            java.io.File r2 = new java.io.File
            r2.<init>(r1)
            boolean r1 = r2.exists()
            if (r1 != 0) goto L28
            return r0
        L28:
            java.lang.String[] r1 = r2.list()
            if (r1 == 0) goto L75
            int r2 = r1.length
            if (r2 != 0) goto L32
            goto L75
        L32:
            int r2 = r1.length
            r3 = 0
        L34:
            if (r3 >= r2) goto L72
            r4 = r1[r3]
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L66
            boolean r5 = android.text.TextUtils.isEmpty(r8)
            if (r5 != 0) goto L66
            boolean r5 = r8.equals(r4)
            if (r5 == 0) goto L66
            com.kwad.library.solder.lib.a.e r5 = r6.afO
            com.kwad.library.solder.lib.a.c r5 = r5.wg()
            boolean r5 = r5.z(r7, r4)
            if (r5 == 0) goto L66
            com.kwad.library.solder.lib.c.a r5 = new com.kwad.library.solder.lib.c.a
            r5.<init>()
            r5.agy = r7
            r5.version = r4
            r4 = 1
            r5.qB = r4
            r0.add(r5)
            goto L6f
        L66:
            com.kwad.library.solder.lib.a.e r5 = r6.afO
            com.kwad.library.solder.lib.a.c r5 = r5.wg()
            r5.u(r7, r4)
        L6f:
            int r3 = r3 + 1
            goto L34
        L72:
            java.util.Collections.sort(r0)
        L75:
            return r0
    }

    @java.lang.Deprecated
    public final void P(long r1) {
            r0 = this;
            r0.agh = r1
            return
    }

    public final com.kwad.library.solder.lib.a.f a(com.kwad.library.solder.lib.a.e r1) {
            r0 = this;
            r0.afO = r1
            return r0
    }

    public final void a(com.kwad.library.solder.lib.ext.b r1) {
            r0 = this;
            r0.agd = r1
            return
    }

    public final void b(com.kwad.library.solder.lib.c.b r1) {
            r0 = this;
            r0.agk = r1
            return
    }

    public final void bD(java.lang.String r1) {
            r0 = this;
            r0.mVersion = r1
            return
    }

    public final com.kwad.library.solder.lib.a.f bG(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L10
            java.lang.StringBuffer r0 = r2.afY
            java.lang.String r1 = " --> "
            r0.append(r1)
            r0.append(r3)
        L10:
            return r2
    }

    public final void bH(java.lang.String r1) {
            r0 = this;
            r0.afZ = r1
            return
    }

    public final com.kwad.library.solder.lib.a.f bI(int r2) {
            r1 = this;
            byte[] r0 = r1.afT
            monitor-enter(r0)
            r1.mState = r2     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            java.lang.String r2 = java.lang.String.valueOf(r2)
            com.kwad.library.solder.lib.a.f r2 = r1.bG(r2)
            return r2
        Lf:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            throw r2
    }

    public final void bI(java.lang.String r1) {
            r0 = this;
            r0.aga = r1
            return
    }

    public final void bJ(int r1) {
            r0 = this;
            if (r1 <= 0) goto L4
            r0.afX = r1
        L4:
            return
    }

    public final void bJ(java.lang.String r1) {
            r0 = this;
            r0.agi = r1
            return
    }

    public final void bK(java.lang.String r1) {
            r0 = this;
            r0.mDownloadUrl = r1
            return
    }

    public abstract P bL(java.lang.String r1);

    public final void c(P r1) {
            r0 = this;
            r0.agc = r1
            return
    }

    public final void cancel() {
            r2 = this;
            byte[] r0 = r2.afT
            monitor-enter(r0)
            r1 = -7
            r2.bI(r1)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            throw r1
    }

    public final java.lang.String getDownloadUrl() {
            r1 = this;
            java.lang.String r0 = r1.mDownloadUrl
            return r0
    }

    public final java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.afR
            return r0
    }

    public final int getState() {
            r2 = this;
            byte[] r0 = r2.afT
            monitor-enter(r0)
            int r1 = r2.mState     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public final java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = r1.mVersion
            return r0
    }

    public final boolean isCanceled() {
            r2 = this;
            int r0 = r2.mState
            r1 = -7
            if (r0 != r1) goto L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    public final com.kwad.library.solder.lib.a.f j(java.lang.Throwable r1) {
            r0 = this;
            r0.age = r1
            java.lang.String r1 = r1.getLocalizedMessage()
            com.kwad.library.solder.lib.a.f r1 = r0.bG(r1)
            return r1
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "PluginRequest{mId='"
            r0.<init>(r1)
            java.lang.String r1 = r2.afR
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final java.lang.String wA() {
            r1 = this;
            java.lang.String r0 = r1.agi
            return r0
    }

    public final java.util.List<com.kwad.library.solder.lib.c.a> wB() {
            r1 = this;
            java.util.List<com.kwad.library.solder.lib.c.a> r0 = r1.agj
            return r0
    }

    public final com.kwad.library.solder.lib.c.b wC() {
            r1 = this;
            com.kwad.library.solder.lib.c.b r0 = r1.agk
            return r0
    }

    public final void wD() {
            r2 = this;
            java.lang.String r0 = r2.getId()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L18
            java.util.List<com.kwad.library.solder.lib.c.a> r1 = r2.agj
            if (r1 != 0) goto L18
            java.lang.String r1 = r2.getVersion()
            java.util.List r0 = r2.A(r0, r1)
            r2.agj = r0
        L18:
            return
    }

    public final void wE() {
            r1 = this;
            r0 = -3
            r1.bI(r0)
            return
    }

    public final com.kwad.library.solder.lib.a.e wp() {
            r1 = this;
            com.kwad.library.solder.lib.a.e r0 = r1.afO
            return r0
    }

    public final java.lang.String wq() {
            r1 = this;
            java.lang.StringBuffer r0 = r1.afY
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final java.lang.Throwable wr() {
            r1 = this;
            java.lang.Throwable r0 = r1.age
            return r0
    }

    public final boolean ws() {
            r3 = this;
            r0 = -1
            r3.bI(r0)
            r0 = 0
            r3.agj = r0
            int r0 = r3.afW
            r1 = 1
            int r0 = r0 + r1
            r3.afW = r0
            int r2 = r3.afX
            if (r0 > r2) goto L12
            return r1
        L12:
            r0 = 0
            return r0
    }

    public final boolean wt() {
            r1 = this;
            boolean r0 = r1.agb
            return r0
    }

    public final int wu() {
            r1 = this;
            int r0 = r1.afW
            return r0
    }

    public final java.lang.String wv() {
            r1 = this;
            java.lang.String r0 = r1.afZ
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.afZ
            return r0
        Lb:
            java.lang.String r0 = r1.aga
            return r0
    }

    public final P ww() {
            r1 = this;
            P extends com.kwad.library.solder.lib.a.a r0 = r1.agc
            return r0
    }

    public final com.kwad.library.solder.lib.ext.b wx() {
            r1 = this;
            com.kwad.library.solder.lib.ext.b r0 = r1.agd
            return r0
    }

    public final boolean wy() {
            r1 = this;
            boolean r0 = r1.agg
            return r0
    }

    public final java.lang.String wz() {
            r1 = this;
            java.lang.String r0 = r1.agf
            return r0
    }
}
