package com.kwad.sdk.m;

public final class l {
    private static android.app.Application aMP;

    public static android.app.Application KT() {
            checkInit()
            android.app.Application r0 = KU()
            boolean r1 = com.kwad.sdk.m.i.KR()
            if (r1 == 0) goto L15
            android.content.Context r0 = com.kwad.sdk.m.i.wrapContextIfNeed(r0)
            android.app.Application r0 = (android.app.Application) r0
            com.kwad.sdk.m.l.aMP = r0
        L15:
            android.app.Application r0 = com.kwad.sdk.m.l.aMP
            return r0
    }

    private static android.app.Application KU() {
            android.app.Application r0 = com.kwad.sdk.m.l.aMP
            if (r0 == 0) goto L5
            return r0
        L5:
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()
            android.content.Context r0 = r0.getApplicationContext()
            boolean r1 = r0 instanceof android.app.Application
            if (r1 == 0) goto L16
            android.app.Application r0 = (android.app.Application) r0
        L13:
            com.kwad.sdk.m.l.aMP = r0
            return r0
        L16:
            boolean r1 = au(r0)
            if (r1 == 0) goto L21
            android.content.Context r0 = com.kwad.sdk.m.i.do(r0)
            goto L34
        L21:
            boolean r1 = com.kwad.sdk.m.j.au(r0)
            if (r1 == 0) goto L2c
            android.content.Context r0 = com.kwad.sdk.m.j.do(r0)
            goto L34
        L2c:
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()
            android.content.Context r0 = r0.getApplicationContext()
        L34:
            boolean r1 = r0 instanceof android.app.Application
            if (r1 == 0) goto L3e
            r1 = r0
            android.app.Application r1 = (android.app.Application) r1
        L3b:
            com.kwad.sdk.m.l.aMP = r1
            goto L61
        L3e:
            com.kwad.sdk.core.c.b r1 = com.kwad.sdk.core.c.b.AU()
            android.app.Application r1 = r1.getApplication()
            if (r1 == 0) goto L49
            goto L3b
        L49:
            boolean r1 = r0 instanceof android.content.ContextWrapper
            if (r1 == 0) goto L61
            r1 = r0
            android.content.ContextWrapper r1 = (android.content.ContextWrapper) r1
            android.content.Context r1 = r1.getBaseContext()
            if (r1 == 0) goto L5a
            android.content.Context r1 = r1.getApplicationContext()
        L5a:
            boolean r2 = r1 instanceof android.app.Application
            if (r2 == 0) goto L61
            android.app.Application r1 = (android.app.Application) r1
            goto L3b
        L61:
            android.app.Application r1 = com.kwad.sdk.m.l.aMP
            if (r1 != 0) goto L6b
            android.app.Application r1 = KV()
            com.kwad.sdk.m.l.aMP = r1
        L6b:
            android.app.Application r0 = dv(r0)
            goto L13
    }

    private static android.app.Application KV() {
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "android.app.ActivityThread"
            java.lang.String r3 = "currentApplication"
            java.lang.Object r1 = com.kwad.sdk.utils.s.a(r2, r3, r1)
            android.app.Application r1 = (android.app.Application) r1
            if (r1 == 0) goto L10
            return r1
        L10:
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "android.app.AppGlobals"
            java.lang.String r2 = "getInitialApplication"
            java.lang.Object r0 = com.kwad.sdk.utils.s.a(r1, r2, r0)
            android.app.Application r0 = (android.app.Application) r0
            return r0
    }

    public static android.view.View a(android.content.Context r0, int r1, android.view.ViewGroup r2, boolean r3) {
            android.view.LayoutInflater r0 = dy(r0)
            r3 = 0
            android.view.View r0 = r0.inflate(r1, r2, r3)
            return r0
    }

    public static void a(android.app.Application r1) {
            android.app.Application r0 = com.kwad.sdk.m.l.aMP
            if (r0 != 0) goto L6
            com.kwad.sdk.m.l.aMP = r1
        L6:
            return
    }

    private static void a(android.view.LayoutInflater r2) {
            r0 = 0
            java.lang.String r1 = "mFactory"
            com.kwad.sdk.utils.s.a(r2, r1, r0)
            java.lang.String r1 = "mFactory2"
            com.kwad.sdk.utils.s.a(r2, r1, r0)
            return
    }

    private static boolean au(android.content.Context r0) {
            boolean r0 = r0 instanceof com.kwad.sdk.m.a
            return r0
    }

    public static android.view.LayoutInflater b(android.content.Context r0, android.content.Context r1) {
            android.content.Context r0 = dz(r0)
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.view.LayoutInflater r0 = r0.cloneInContext(r1)
            a(r0)
            return r0
    }

    private static void checkInit() {
            com.kwad.sdk.m.e r0 = com.kwad.sdk.m.e.KO()
            boolean r0 = r0.Jr()
            if (r0 != 0) goto L14
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "please init KSPlugin"
            r0.<init>(r1)
            com.kwad.sdk.service.ServiceProvider.b(r0)
        L14:
            return
    }

    public static int dq(android.content.Context r3) {
            boolean r0 = r3 instanceof android.view.ContextThemeWrapper
            r1 = 0
            if (r0 == 0) goto L17
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r2 = "getThemeResId"
            java.lang.Object r3 = com.kwad.sdk.utils.s.f(r3, r2, r0)
            if (r3 == 0) goto L16
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            return r3
        L16:
            return r1
        L17:
            boolean r0 = r3 instanceof android.support.v7.view.ContextThemeWrapper
            if (r0 == 0) goto L22
            android.support.v7.view.ContextThemeWrapper r3 = (android.support.v7.view.ContextThemeWrapper) r3
            int r3 = r3.getThemeResId()
            return r3
        L22:
            return r1
    }

    public static android.app.Activity dr(android.content.Context r1) {
            boolean r0 = r1 instanceof android.app.Activity
            if (r0 == 0) goto L7
            android.app.Activity r1 = (android.app.Activity) r1
            return r1
        L7:
            android.content.Context r1 = dt(r1)
            boolean r0 = r1 instanceof android.app.Activity
            if (r0 == 0) goto L12
            android.app.Activity r1 = (android.app.Activity) r1
            return r1
        L12:
            com.kwad.sdk.core.c.b.AU()
            android.app.Activity r1 = com.kwad.sdk.core.c.b.getCurrentActivity()
            return r1
    }

    private static android.content.Context ds(android.content.Context r5) {
            boolean r0 = com.kwad.sdk.m.i.KR()
            java.lang.String r1 = "--initFinish:"
            if (r0 == 0) goto L3f
            boolean r0 = au(r5)
            if (r0 != 0) goto L3f
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.hasInitFinish()
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "expect KSContext in external --context:"
            r3.<init>(r4)
            java.lang.Class r4 = r5.getClass()
            java.lang.String r4 = r4.getName()
            r3.append(r4)
            r3.append(r1)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
        L3b:
            com.kwad.sdk.service.ServiceProvider.b(r2)
            goto L79
        L3f:
            boolean r0 = com.kwad.sdk.m.i.KR()
            if (r0 != 0) goto L79
            boolean r0 = com.kwad.sdk.m.j.au(r5)
            if (r0 != 0) goto L79
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.hasInitFinish()
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "expect ResContext in external --context:"
            r3.<init>(r4)
            java.lang.Class r4 = r5.getClass()
            java.lang.String r4 = r4.getName()
            r3.append(r4)
            r3.append(r1)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            goto L3b
        L79:
            return r5
    }

    public static android.content.Context dt(android.content.Context r1) {
            checkInit()
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.getIsExternal()
            if (r0 != 0) goto L12
            return r1
        L12:
            boolean r0 = dw(r1)
            if (r0 == 0) goto L19
            return r1
        L19:
            boolean r0 = au(r1)
            if (r0 == 0) goto L24
            android.content.Context r1 = com.kwad.sdk.m.i.dn(r1)
            goto L28
        L24:
            android.content.Context r1 = com.kwad.sdk.m.j.unwrapContextIfNeed(r1)
        L28:
            android.content.Context r1 = du(r1)
            return r1
    }

    private static android.content.Context du(android.content.Context r4) {
            boolean r0 = com.kwad.sdk.m.j.au(r4)
            if (r0 != 0) goto La
            boolean r0 = r4 instanceof com.kwad.sdk.m.a
            if (r0 == 0) goto L3c
        La:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.hasInitFinish()
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "expect normalContext --context:"
            r2.<init>(r3)
            java.lang.Class r3 = r4.getClass()
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            java.lang.String r3 = "--initFinish:"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            com.kwad.sdk.service.ServiceProvider.b(r1)
        L3c:
            return r4
    }

    private static android.app.Application dv(android.content.Context r4) {
            boolean r0 = r4 instanceof android.app.Application
            if (r0 == 0) goto L7
            android.app.Application r4 = (android.app.Application) r4
            return r4
        L7:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.hasInitFinish()
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "expect normalContext --context:"
            r2.<init>(r3)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r2.append(r4)
            java.lang.String r4 = "--initFinish:"
            r2.append(r4)
            r2.append(r0)
            java.lang.String r4 = "--isExternal:"
            r2.append(r4)
            java.lang.Class<com.kwad.sdk.service.a.e> r4 = com.kwad.sdk.service.a.e.class
            java.lang.Object r4 = com.kwad.sdk.service.ServiceProvider.get(r4)
            com.kwad.sdk.service.a.e r4 = (com.kwad.sdk.service.a.e) r4
            boolean r4 = r4.getIsExternal()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4)
            com.kwad.sdk.service.ServiceProvider.b(r1)
            r4 = 0
            return r4
    }

    public static boolean dw(android.content.Context r1) {
            boolean r0 = au(r1)
            if (r0 != 0) goto Le
            boolean r1 = com.kwad.sdk.m.j.au(r1)
            if (r1 != 0) goto Le
            r1 = 1
            return r1
        Le:
            r1 = 0
            return r1
    }

    public static android.content.Context dx(android.content.Context r2) {
            boolean r0 = com.kwad.sdk.m.j.au(r2)
            if (r0 == 0) goto La
            android.content.Context r2 = com.kwad.sdk.m.j.at(r2)
        La:
            boolean r0 = r2 instanceof com.kwad.sdk.m.a
            if (r0 == 0) goto L14
            com.kwad.sdk.m.a r2 = (com.kwad.sdk.m.a) r2
            android.content.Context r2 = r2.getDelegatedContext()
        L14:
            boolean r0 = dw(r2)
            if (r0 == 0) goto L1b
            return r2
        L1b:
            r0 = 0
        L1c:
            r1 = 5
            if (r0 >= r1) goto L3d
            boolean r1 = com.kwad.sdk.m.j.au(r2)
            if (r1 == 0) goto L29
            android.content.Context r2 = com.kwad.sdk.m.j.at(r2)
        L29:
            boolean r1 = r2 instanceof com.kwad.sdk.m.a
            if (r1 == 0) goto L33
            com.kwad.sdk.m.a r2 = (com.kwad.sdk.m.a) r2
            android.content.Context r2 = r2.getDelegatedContext()
        L33:
            boolean r1 = dw(r2)
            if (r1 == 0) goto L3a
            return r2
        L3a:
            int r0 = r0 + 1
            goto L1c
        L3d:
            return r2
    }

    public static android.view.LayoutInflater dy(android.content.Context r1) {
            android.content.Context r1 = wrapContextIfNeed(r1)
            boolean r0 = com.kwad.sdk.m.j.au(r1)
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            if (r0 == 0) goto L11
            a(r1)
        L11:
            return r1
    }

    private static android.content.Context dz(android.content.Context r1) {
            boolean r0 = r1 instanceof android.content.ContextWrapper
            if (r0 == 0) goto La
            android.content.ContextWrapper r1 = (android.content.ContextWrapper) r1
            android.content.Context r1 = r1.getBaseContext()
        La:
            return r1
    }

    public static void h(android.app.Activity r0) {
            com.kwad.sdk.m.j.onDestroy(r0)
            return
    }

    public static android.view.View inflate(android.content.Context r0, int r1, android.view.ViewGroup r2) {
            android.view.LayoutInflater r0 = dy(r0)
            android.view.View r0 = r0.inflate(r1, r2)
            return r0
    }

    public static android.content.Context wrapContextIfNeed(android.content.Context r1) {
            checkInit()
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.getIsExternal()
            if (r0 != 0) goto L12
            return r1
        L12:
            boolean r0 = com.kwad.sdk.m.i.KR()
            if (r0 == 0) goto L1d
            android.content.Context r1 = com.kwad.sdk.m.i.wrapContextIfNeed(r1)
            goto L21
        L1d:
            android.content.Context r1 = com.kwad.sdk.m.j.wrapContextIfNeed(r1)
        L21:
            android.content.Context r1 = ds(r1)
            return r1
    }

    public static void x(android.content.Context r2, boolean r3) {
            java.lang.String r0 = "kssdk_api_pref"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)     // Catch: java.lang.Throwable -> L15
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = "useContextClassLoader"
            android.content.SharedPreferences$Editor r2 = r2.putBoolean(r0, r3)     // Catch: java.lang.Throwable -> L15
            r2.apply()     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            return
    }
}
