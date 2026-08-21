package com.kwad.components.core.offline.init;

public abstract class a {
    private long Db;



    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.content.Context r3, java.lang.ClassLoader r4) {
            r2 = this;
            boolean r4 = r2.b(r3, r4)     // Catch: java.lang.Throwable -> L5
            goto La
        L5:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
            r4 = 0
        La:
            java.lang.String r0 = r2.oh()
            java.lang.String r1 = r2.oi()
            com.kwad.sdk.utils.y.b(r3, r0, r1, r4)
            return
    }

    static void a(com.kwad.components.core.offline.init.a r0, android.content.Context r1) {
            r0.af(r1)
            return
    }

    static void a(com.kwad.components.core.offline.init.a r0, android.content.Context r1, java.lang.ClassLoader r2) {
            r0.a(r1, r2)
            return
    }

    private void af(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = r3.getTag()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "initReal disableOfflineComponents: "
            r1.<init>(r2)
            java.lang.Boolean r2 = com.kwad.components.core.a.HM
            r1.append(r2)
            java.lang.String r2 = " , isDevelopEnable: "
            r1.append(r2)
            java.lang.Boolean r2 = com.kwad.components.core.a.ml
            r1.append(r2)
            java.lang.String r2 = " , DEBUG: false"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.d(r0, r1)
            java.lang.Boolean r0 = com.kwad.components.core.a.HM
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L3a
            java.lang.Class r0 = r3.getClass()
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r3.a(r4, r0)
            goto L3d
        L3a:
            r3.ag(r4)
        L3d:
            java.lang.String r4 = r3.getTag()
            java.lang.String r0 = "initReal end"
            com.kwad.sdk.core.e.c.d(r4, r0)
            return
    }

    private void ag(android.content.Context r5) {
            r4 = this;
            com.kwad.library.solder.lib.c.b r0 = r4.og()
            java.lang.String r1 = r4.getTag()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "loadComponents pluginInfo: "
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.kwad.sdk.core.e.c.d(r1, r2)
            com.kwad.components.core.offline.init.a$2 r1 = new com.kwad.components.core.offline.init.a$2
            r1.<init>(r4, r5)
            com.kwad.library.solder.a.a.a(r5, r0, r1)
            return
    }

    private com.kwad.library.solder.lib.c.b og() {
            r4 = this;
            com.kwad.library.solder.lib.c.b r0 = new com.kwad.library.solder.lib.c.b
            r0.<init>()
            java.lang.String r1 = r4.oh()
            r0.agy = r1
            r1 = 1
            r0.IH = r1
            r2 = 0
            r0.agC = r2
            com.kwad.sdk.core.network.idc.a r2 = com.kwad.sdk.core.network.idc.a.Bo()
            java.lang.String r3 = r4.oj()
            java.lang.String r2 = r2.dc(r3)
            r0.agz = r2
            java.lang.String r2 = r4.oi()
            r0.version = r2
            java.lang.String r2 = r4.ok()
            r0.agB = r2
            java.lang.Boolean r2 = com.kwad.components.core.a.HP
            boolean r2 = r2.booleanValue()
            if (r2 == 0) goto L3b
            java.lang.String r2 = r4.ol()
            r0.agf = r2
            r0.agg = r1
        L3b:
            return r0
    }

    public final <T extends com.kwad.components.offline.api.IOfflineCompo> T a(java.lang.ClassLoader r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = r3.getTag()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "onOfflineComponentsLoaded classLoader:"
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.d(r0, r1)
            java.lang.Class r4 = r4.loadClass(r5)     // Catch: java.lang.Throwable -> L20
            java.lang.Object r4 = r4.newInstance()     // Catch: java.lang.Throwable -> L20
            com.kwad.components.offline.api.IOfflineCompo r4 = (com.kwad.components.offline.api.IOfflineCompo) r4     // Catch: java.lang.Throwable -> L20
            goto L37
        L20:
            r4 = move-exception
            java.lang.String r0 = r3.getTag()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "loadClass or instance failed: "
            r1.<init>(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.kwad.sdk.core.e.c.e(r0, r5, r4)
            r4 = 0
        L37:
            java.lang.String r5 = r3.getTag()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onOfflineComponentsLoaded components: "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.d(r5, r0)
            return r4
    }

    protected abstract boolean b(android.content.Context r1, java.lang.ClassLoader r2);

    protected abstract java.lang.String getTag();

    public final void init(android.content.Context r5) {
            r4 = this;
            boolean r0 = r4.isEnabled()
            if (r0 != 0) goto L10
            java.lang.String r5 = r4.getTag()
            java.lang.String r0 = "initReal disable"
            com.kwad.sdk.core.e.c.d(r5, r0)
            return
        L10:
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.Db = r0
            int r0 = r4.oe()
            com.kwad.components.core.offline.a.as(r0)
            java.lang.String r0 = r4.oh()
            java.lang.String r1 = r4.oi()
            boolean r0 = com.kwad.sdk.utils.y.h(r5, r0, r1)
            java.lang.String r1 = r4.getTag()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "init isSuccessLoaded: getCompoName()"
            r2.<init>(r3)
            java.lang.String r3 = r4.oh()
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.kwad.sdk.core.e.c.d(r1, r2)
            com.kwad.components.core.offline.init.a$1 r1 = new com.kwad.components.core.offline.init.a$1
            r1.<init>(r4, r0, r5)
            com.kwad.components.core.p.f.a(r1)
            return
    }

    public abstract boolean isEnabled();

    public abstract int oe();

    protected boolean of() {
            r1 = this;
            r0 = 1
            return r0
    }

    protected abstract java.lang.String oh();

    protected abstract java.lang.String oi();

    protected abstract java.lang.String oj();

    protected abstract java.lang.String ok();

    protected abstract java.lang.String ol();

    public final void om() {
            r5 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r5.Db
            long r0 = r0 - r2
            java.lang.String r2 = r5.getTag()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "init success cost: "
            r3.<init>(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.kwad.sdk.core.e.c.d(r2, r3)
            int r2 = r5.oe()
            com.kwad.components.core.offline.a.b(r2, r0)
            return
    }
}
