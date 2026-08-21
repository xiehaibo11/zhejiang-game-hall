package com.kwad.sdk.utils;

public final class au {
    public static java.lang.String aJe = "";


    static {
            return
    }

    public static com.kwad.sdk.k.a.b Hl() {
            com.kwad.sdk.k.a.b r0 = com.kwad.sdk.k.a.b.Hl()
            return r0
    }

    public static com.kwad.sdk.k.a.f Hm() {
            com.kwad.sdk.k.a.f r0 = com.kwad.sdk.k.a.f.Hm()
            return r0
    }

    private static java.lang.String Jk() {
            com.kwad.sdk.k.a.f r0 = com.kwad.sdk.k.a.f.Hm()
            if (r0 == 0) goto L9
            int r0 = r0.aGx
            goto La
        L9:
            r0 = -1
        La:
            r1 = 0
            if (r0 < 0) goto L16
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r0 = com.kwad.sdk.f.b.a(r1, r0, r1)
            return r0
        L16:
            java.lang.Class<com.kwad.sdk.service.a.f> r2 = com.kwad.sdk.service.a.f.class
            java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)
            com.kwad.sdk.service.a.f r2 = (com.kwad.sdk.service.a.f) r2
            boolean r2 = r2.xu()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            if (r2 != 0) goto L2e
            r2 = 1
            java.lang.String r0 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r0
        L2e:
            r2 = 2
            java.lang.String r0 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r0
    }

    private static java.lang.String Jl() {
            com.kwad.sdk.k.a.b r0 = com.kwad.sdk.k.a.b.Hl()
            r1 = 0
            if (r0 == 0) goto L10
            org.json.JSONObject r0 = r0.toJson()
            java.lang.String r0 = com.kwad.sdk.f.b.a(r1, r0, r1)
            return r0
        L10:
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            boolean r0 = r0.xw()
            java.lang.String r2 = ""
            if (r0 != 0) goto L26
            r0 = 1
            java.lang.String r0 = com.kwad.sdk.f.b.a(r1, r2, r0)
            return r0
        L26:
            r0 = 2
            java.lang.String r0 = com.kwad.sdk.f.b.a(r1, r2, r0)
            return r0
    }

    public static java.util.List<com.kwad.sdk.k.a.e> Jm() {
            java.util.List r0 = com.kwad.sdk.utils.ax.Jm()
            return r0
    }

    private static java.lang.String Jn() {
            r0 = 0
            java.lang.String r1 = "1"
            java.lang.String r0 = com.kwad.sdk.f.b.a(r0, r1, r0)
            return r0
    }

    private static java.lang.String Jo() {
            java.lang.String r0 = getSdkVersion()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1 = 0
            java.lang.String r0 = com.kwad.sdk.f.b.a(r1, r0, r1)
            return r0
    }

    private static java.lang.String Jp() {
            java.lang.String r0 = getAppId()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1 = 0
            java.lang.String r0 = com.kwad.sdk.f.b.a(r1, r0, r1)
            return r0
    }

    private static java.lang.String bF(boolean r5) {
            java.lang.String r0 = com.kwad.sdk.utils.be.bQ(r5)
            if (r5 != 0) goto L10
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 == 0) goto Lf
            java.lang.String r5 = ""
            return r5
        Lf:
            return r0
        L10:
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            r1 = 1
            r2 = 0
            if (r5 != 0) goto L2f
            boolean r5 = com.kwad.sdk.utils.at.Je()
            if (r5 == 0) goto L29
            java.lang.String r5 = com.kwad.sdk.utils.at.Jf()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L29
            goto L2a
        L29:
            r1 = r2
        L2a:
            java.lang.String r5 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r5
        L2f:
            boolean r5 = com.kwad.sdk.utils.at.Je()
            if (r5 != 0) goto L4c
            java.lang.Class<com.kwad.sdk.service.a.f> r5 = com.kwad.sdk.service.a.f.class
            java.lang.Object r5 = com.kwad.sdk.service.ServiceProvider.get(r5)
            com.kwad.sdk.service.a.f r5 = (com.kwad.sdk.service.a.f) r5
            r3 = 2048(0x800, double:1.012E-320)
            boolean r5 = r5.R(r3)
            if (r5 == 0) goto L46
            goto L4c
        L46:
            r5 = 5
            java.lang.String r5 = com.kwad.sdk.f.b.a(r2, r0, r5)
            return r5
        L4c:
            java.lang.String r5 = com.kwad.sdk.f.b.a(r2, r0, r1)
            return r5
    }

    private static java.lang.String bG(boolean r3) {
            java.lang.Boolean r0 = com.kwad.framework.a.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L17
            java.lang.String r0 = com.kwad.sdk.utils.bf.getDeviceId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            java.lang.String r3 = com.kwad.sdk.utils.bf.getDeviceId()
            return r3
        L17:
            java.lang.String r0 = com.kwad.sdk.utils.be.getDeviceId()
            if (r3 != 0) goto L27
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto L26
            java.lang.String r3 = ""
            return r3
        L26:
            return r0
        L27:
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            r1 = 1
            r2 = 0
            if (r3 != 0) goto L46
            boolean r3 = com.kwad.sdk.utils.at.IY()
            if (r3 == 0) goto L40
            java.lang.String r3 = com.kwad.sdk.utils.at.Jb()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L40
            goto L41
        L40:
            r1 = r2
        L41:
            java.lang.String r3 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r3
        L46:
            boolean r3 = com.kwad.sdk.utils.at.IY()
            if (r3 != 0) goto L59
            boolean r3 = com.kwad.sdk.utils.o.HX()
            if (r3 != 0) goto L53
            goto L59
        L53:
            r3 = 5
            java.lang.String r3 = com.kwad.sdk.f.b.a(r2, r0, r3)
            return r3
        L59:
            java.lang.String r3 = com.kwad.sdk.f.b.a(r2, r0, r1)
            return r3
    }

    private static java.lang.String bH(boolean r4) {
            java.lang.String r0 = com.kwad.sdk.utils.be.JW()
            if (r4 != 0) goto L10
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            if (r4 == 0) goto Lf
            java.lang.String r4 = ""
            return r4
        Lf:
            return r0
        L10:
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r4 != 0) goto L20
            boolean r4 = com.kwad.sdk.utils.at.Jg()
            java.lang.String r4 = com.kwad.sdk.f.b.a(r4, r0, r1)
            return r4
        L20:
            boolean r4 = com.kwad.sdk.utils.at.Jg()
            if (r4 != 0) goto L3d
            java.lang.Class<com.kwad.sdk.service.a.f> r4 = com.kwad.sdk.service.a.f.class
            java.lang.Object r4 = com.kwad.sdk.service.ServiceProvider.get(r4)
            com.kwad.sdk.service.a.f r4 = (com.kwad.sdk.service.a.f) r4
            r2 = 8
            boolean r4 = r4.R(r2)
            if (r4 == 0) goto L37
            goto L3d
        L37:
            r4 = 2
            java.lang.String r4 = com.kwad.sdk.f.b.a(r1, r0, r4)
            return r4
        L3d:
            r4 = 1
            java.lang.String r4 = com.kwad.sdk.f.b.a(r1, r0, r4)
            return r4
    }

    static java.lang.String bI(boolean r0) {
            r0 = 1
            java.lang.String r0 = bF(r0)
            return r0
    }

    static java.lang.String bJ(boolean r0) {
            java.lang.String r0 = Jk()
            return r0
    }

    static java.lang.String bK(boolean r0) {
            java.lang.String r0 = Jl()
            return r0
    }

    static java.lang.String bL(boolean r0) {
            r0 = 1
            java.lang.String r0 = bG(r0)
            return r0
    }

    static java.lang.String bM(boolean r0) {
            r0 = 1
            java.lang.String r0 = bH(r0)
            return r0
    }

    static java.lang.String bN(boolean r0) {
            java.lang.String r0 = Jn()
            return r0
    }

    static java.lang.String bO(boolean r0) {
            java.lang.String r0 = Jo()
            return r0
    }

    static java.lang.String bP(boolean r0) {
            java.lang.String r0 = Jp()
            return r0
    }

    public static android.location.Location bU(android.content.Context r0) {
            android.location.Location r0 = com.kwad.sdk.utils.r.bU(r0)
            return r0
    }

    private static java.lang.String c(android.content.Context r4, boolean r5) {
            java.lang.String r0 = com.kwad.sdk.utils.be.u(r4, r5)
            if (r5 != 0) goto L10
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            if (r4 == 0) goto Lf
            java.lang.String r4 = ""
            return r4
        Lf:
            return r0
        L10:
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            r1 = 1
            r2 = 0
            if (r5 != 0) goto L2f
            boolean r4 = com.kwad.sdk.utils.at.IY()
            if (r4 == 0) goto L29
            java.lang.String r4 = com.kwad.sdk.utils.at.IZ()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L29
            goto L2a
        L29:
            r1 = r2
        L2a:
            java.lang.String r4 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r4
        L2f:
            int r5 = android.os.Build.VERSION.SDK_INT
            r3 = 29
            if (r5 < r3) goto L3b
            r4 = 4
            java.lang.String r4 = com.kwad.sdk.f.b.a(r2, r0, r4)
            return r4
        L3b:
            boolean r5 = com.kwad.sdk.utils.at.IY()
            if (r5 != 0) goto L54
            boolean r5 = com.kwad.sdk.utils.o.Ic()
            if (r5 != 0) goto L48
            goto L54
        L48:
            boolean r4 = com.kwad.sdk.utils.SystemUtil.cX(r4)
            if (r4 == 0) goto L4f
            r1 = 3
        L4f:
            java.lang.String r4 = com.kwad.sdk.f.b.a(r2, r0, r1)
            return r4
        L54:
            java.lang.String r4 = com.kwad.sdk.f.b.a(r2, r0, r1)
            return r4
    }

    public static java.lang.String cA(android.content.Context r1) {
            r0 = 0
            java.lang.String r1 = i(r1, r0)
            return r1
    }

    public static int cB(android.content.Context r0) {
            int r0 = com.kwad.sdk.utils.be.de(r0)
            return r0
    }

    private static java.lang.String cC(android.content.Context r3) {
            int r3 = com.kwad.sdk.utils.be.de(r3)
            r0 = 0
            if (r3 <= 0) goto L10
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r3 = com.kwad.sdk.f.b.a(r0, r3, r0)
            return r3
        L10:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            java.lang.String r3 = java.lang.String.valueOf(r3)
            if (r1 >= r2) goto L20
            r1 = 1
            java.lang.String r3 = com.kwad.sdk.f.b.a(r0, r3, r1)
            return r3
        L20:
            r1 = 3
            java.lang.String r3 = com.kwad.sdk.f.b.a(r0, r3, r1)
            return r3
    }

    public static int cD(android.content.Context r0) {
            int r0 = com.kwad.sdk.utils.be.df(r0)
            return r0
    }

    private static java.lang.String cE(android.content.Context r6) {
            r0 = 15
            java.util.List r0 = m(r6, r0)
            r1 = 0
            if (r0 == 0) goto L1c
            int r2 = r0.size()
            if (r2 <= 0) goto L1c
            boolean r6 = com.kwad.sdk.utils.at.Jg()
            org.json.JSONArray r0 = com.kwad.sdk.utils.t.I(r0)
            java.lang.String r6 = com.kwad.sdk.f.b.a(r6, r0, r1)
            return r6
        L1c:
            boolean r0 = com.kwad.sdk.utils.at.Jg()
            r2 = 1
            java.lang.String r3 = ""
            if (r0 != 0) goto L43
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r4 = 32
            boolean r0 = r0.R(r4)
            if (r0 == 0) goto L36
            goto L43
        L36:
            boolean r6 = com.kwad.sdk.utils.bq.dm(r6)
            if (r6 == 0) goto L3d
            goto L3e
        L3d:
            r2 = 3
        L3e:
            java.lang.String r6 = com.kwad.sdk.f.b.a(r1, r3, r2)
            return r6
        L43:
            java.lang.String r6 = com.kwad.sdk.f.b.a(r1, r3, r2)
            return r6
    }

    private static java.lang.String cF(android.content.Context r4) {
            java.util.Map r0 = com.kwad.sdk.utils.InstalledAppInfoManager.bV(r4)
            int r1 = r0.size()
            r2 = 1
            r3 = 0
            if (r1 <= 0) goto L23
            boolean r4 = com.kwad.sdk.utils.at.Ji()
            if (r4 == 0) goto L19
            java.util.List r4 = com.kwad.sdk.utils.at.Jj()
            if (r4 == 0) goto L19
            goto L1a
        L19:
            r2 = r3
        L1a:
            org.json.JSONArray r4 = com.kwad.sdk.utils.InstalledAppInfoManager.f(r0)
            java.lang.String r4 = com.kwad.sdk.f.b.a(r2, r4, r3)
            return r4
        L23:
            boolean r0 = com.kwad.sdk.utils.at.Ji()
            java.lang.String r1 = ""
            if (r0 != 0) goto L3e
            boolean r0 = com.kwad.sdk.utils.o.Ia()
            if (r0 != 0) goto L32
            goto L3e
        L32:
            boolean r4 = com.kwad.sdk.utils.be.dl(r4)
            if (r4 == 0) goto L39
            r2 = 3
        L39:
            java.lang.String r4 = com.kwad.sdk.f.b.a(r3, r1, r2)
            return r4
        L3e:
            java.lang.String r4 = com.kwad.sdk.f.b.a(r3, r1, r2)
            return r4
    }

    private static java.lang.String cG(android.content.Context r6) {
            android.location.Location r0 = com.kwad.sdk.utils.r.bU(r6)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L3e
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
            double r3 = r0.getLatitude()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r4 = "latitude"
            r6.put(r4, r3)
            double r3 = r0.getLongitude()
            java.lang.String r0 = java.lang.String.valueOf(r3)
            java.lang.String r3 = "longitude"
            r6.put(r3, r0)
            boolean r0 = com.kwad.sdk.utils.at.IW()
            if (r0 == 0) goto L34
            android.location.Location r0 = com.kwad.sdk.utils.at.IX()
            if (r0 == 0) goto L34
            goto L35
        L34:
            r1 = r2
        L35:
            org.json.JSONObject r6 = com.kwad.sdk.utils.t.parseMap2JSON(r6)
            java.lang.String r6 = com.kwad.sdk.f.b.a(r1, r6, r2)
            return r6
        L3e:
            boolean r0 = com.kwad.sdk.utils.at.IW()
            java.lang.String r3 = ""
            if (r0 != 0) goto L6a
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r4 = 64
            boolean r0 = r0.R(r4)
            if (r0 == 0) goto L57
            goto L6a
        L57:
            java.lang.String r0 = "android.permission.ACCESS_FINE_LOCATION"
            int r6 = android.support.v4.content.ContextCompat.checkSelfPermission(r6, r0)
            if (r6 != 0) goto L61
            r6 = r1
            goto L62
        L61:
            r6 = r2
        L62:
            if (r6 == 0) goto L65
            r1 = 3
        L65:
            java.lang.String r6 = com.kwad.sdk.f.b.a(r2, r3, r1)
            return r6
        L6a:
            java.lang.String r6 = com.kwad.sdk.f.b.a(r2, r3, r1)
            return r6
    }

    private static com.kwad.sdk.f.c cH(android.content.Context r1) {
            com.kwad.sdk.utils.au$1 r0 = new com.kwad.sdk.utils.au$1
            r0.<init>(r1)
            return r0
    }

    public static java.lang.String cu(android.content.Context r1) {
            r0 = 0
            java.lang.String r1 = c(r1, r0)
            return r1
    }

    public static java.lang.String cv(android.content.Context r1) {
            r0 = 0
            java.lang.String r1 = d(r1, r0)
            return r1
    }

    public static java.lang.String cw(android.content.Context r1) {
            r0 = 0
            java.lang.String r1 = e(r1, r0)
            return r1
    }

    public static java.lang.String cx(android.content.Context r1) {
            r0 = 0
            java.lang.String r1 = f(r1, r0)
            return r1
    }

    public static java.lang.String cy(android.content.Context r1) {
            r0 = 0
            java.lang.String r1 = g(r1, r0)
            return r1
    }

    public static java.lang.String cz(android.content.Context r1) {
            r0 = 0
            java.lang.String r1 = h(r1, r0)
            return r1
    }

    private static java.lang.String d(android.content.Context r2, boolean r3) {
            java.lang.String r2 = com.kwad.sdk.utils.be.cv(r2)
            if (r3 != 0) goto Lf
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto Le
            java.lang.String r2 = ""
        Le:
            return r2
        Lf:
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r0 = 1
            r1 = 0
            if (r3 != 0) goto L2e
            boolean r3 = com.kwad.sdk.utils.at.IY()
            if (r3 == 0) goto L28
            java.lang.String r3 = com.kwad.sdk.utils.at.Jb()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L28
            goto L29
        L28:
            r0 = r1
        L29:
            java.lang.String r2 = com.kwad.sdk.f.b.a(r0, r2, r1)
            return r2
        L2e:
            boolean r3 = com.kwad.sdk.utils.at.IY()
            if (r3 != 0) goto L41
            boolean r3 = com.kwad.sdk.utils.o.HX()
            if (r3 != 0) goto L3b
            goto L41
        L3b:
            r3 = 5
            java.lang.String r2 = com.kwad.sdk.f.b.a(r1, r2, r3)
            return r2
        L41:
            java.lang.String r2 = com.kwad.sdk.f.b.a(r1, r2, r0)
            return r2
    }

    private static java.lang.String e(android.content.Context r3, boolean r4) {
            java.lang.String r0 = com.kwad.sdk.utils.be.dj(r3)
            if (r4 != 0) goto L10
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto Lf
            java.lang.String r3 = ""
            return r3
        Lf:
            return r0
        L10:
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            r1 = 1
            r2 = 0
            if (r4 != 0) goto L33
            boolean r3 = com.kwad.sdk.utils.at.Jc()
            if (r3 == 0) goto L29
            java.lang.String r3 = com.kwad.sdk.utils.at.Jd()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L29
            goto L2a
        L29:
            r1 = r2
        L2a:
            java.lang.String r3 = r0.toLowerCase()
            java.lang.String r3 = com.kwad.sdk.f.b.a(r1, r3, r2)
            return r3
        L33:
            boolean r4 = com.kwad.sdk.utils.at.Jc()
            if (r4 != 0) goto L4e
            boolean r4 = com.kwad.sdk.utils.o.HY()
            if (r4 != 0) goto L40
            goto L4e
        L40:
            java.lang.String r4 = "android.permission.ACCESS_WIFI_STATE"
            int r3 = com.kwad.sdk.utils.al.ao(r3, r4)
            if (r3 != 0) goto L49
            r1 = 3
        L49:
            java.lang.String r3 = com.kwad.sdk.f.b.a(r2, r0, r1)
            return r3
        L4e:
            java.lang.String r3 = com.kwad.sdk.f.b.a(r2, r0, r2)
            return r3
    }

    private static java.lang.String f(android.content.Context r4, boolean r5) {
            java.lang.String[] r0 = com.kwad.sdk.utils.be.dd(r4)
            r1 = 0
            if (r0 == 0) goto Ld
            int r2 = r0.length
            if (r2 <= 0) goto Ld
            r0 = r0[r1]
            goto Le
        Ld:
            r0 = 0
        Le:
            if (r5 != 0) goto L1a
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            if (r4 == 0) goto L19
            java.lang.String r4 = ""
            return r4
        L19:
            return r0
        L1a:
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            r2 = 1
            if (r5 != 0) goto L38
            boolean r4 = com.kwad.sdk.utils.at.IY()
            if (r4 == 0) goto L32
            java.lang.String r4 = com.kwad.sdk.utils.at.IZ()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L32
            goto L33
        L32:
            r2 = r1
        L33:
            java.lang.String r4 = com.kwad.sdk.f.b.a(r2, r0, r1)
            return r4
        L38:
            int r5 = android.os.Build.VERSION.SDK_INT
            r3 = 29
            if (r5 < r3) goto L44
            r4 = 4
            java.lang.String r4 = com.kwad.sdk.f.b.a(r1, r0, r4)
            return r4
        L44:
            boolean r5 = com.kwad.sdk.utils.at.IY()
            if (r5 != 0) goto L5d
            boolean r5 = com.kwad.sdk.utils.o.Ic()
            if (r5 != 0) goto L51
            goto L5d
        L51:
            boolean r4 = com.kwad.sdk.utils.SystemUtil.cX(r4)
            if (r4 == 0) goto L58
            r2 = 3
        L58:
            java.lang.String r4 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r4
        L5d:
            java.lang.String r4 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r4
    }

    private static java.lang.String g(android.content.Context r4, boolean r5) {
            java.lang.String[] r0 = com.kwad.sdk.utils.be.dd(r4)
            r1 = 1
            if (r0 == 0) goto Ld
            int r2 = r0.length
            if (r2 <= r1) goto Ld
            r0 = r0[r1]
            goto Le
        Ld:
            r0 = 0
        Le:
            if (r5 != 0) goto L1a
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            if (r4 == 0) goto L19
            java.lang.String r4 = ""
            return r4
        L19:
            return r0
        L1a:
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r5 != 0) goto L38
            boolean r4 = com.kwad.sdk.utils.at.IY()
            if (r4 == 0) goto L32
            java.lang.String r4 = com.kwad.sdk.utils.at.IZ()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L32
            goto L33
        L32:
            r1 = r2
        L33:
            java.lang.String r4 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r4
        L38:
            int r5 = android.os.Build.VERSION.SDK_INT
            r3 = 29
            if (r5 < r3) goto L44
            r4 = 4
            java.lang.String r4 = com.kwad.sdk.f.b.a(r2, r0, r4)
            return r4
        L44:
            boolean r5 = com.kwad.sdk.utils.at.IY()
            if (r5 != 0) goto L5d
            boolean r5 = com.kwad.sdk.utils.o.Ic()
            if (r5 != 0) goto L51
            goto L5d
        L51:
            boolean r4 = com.kwad.sdk.utils.SystemUtil.cX(r4)
            if (r4 == 0) goto L58
            r1 = 3
        L58:
            java.lang.String r4 = com.kwad.sdk.f.b.a(r2, r0, r1)
            return r4
        L5d:
            java.lang.String r4 = com.kwad.sdk.f.b.a(r2, r0, r1)
            return r4
    }

    private static java.lang.String getAppId() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            java.lang.String r0 = r0.getAppId()
            return r0
    }

    public static java.lang.String getDeviceId() {
            r0 = 0
            java.lang.String r0 = bG(r0)
            return r0
    }

    public static java.lang.String getOaid() {
            r0 = 0
            java.lang.String r0 = bF(r0)
            return r0
    }

    private static java.lang.String getSdkVersion() {
            java.lang.String r0 = "3.3.42"
            return r0
    }

    private static java.lang.String h(android.content.Context r3, boolean r4) {
            java.lang.String r0 = com.kwad.sdk.utils.be.cz(r3)
            if (r4 != 0) goto L10
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto Lf
            java.lang.String r3 = ""
            return r3
        Lf:
            return r0
        L10:
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r4 != 0) goto L20
            boolean r3 = com.kwad.sdk.utils.at.IY()
            java.lang.String r3 = com.kwad.sdk.f.b.a(r3, r0, r1)
            return r3
        L20:
            int r4 = android.os.Build.VERSION.SDK_INT
            r2 = 29
            if (r4 < r2) goto L2c
            r3 = 4
            java.lang.String r3 = com.kwad.sdk.f.b.a(r1, r0, r3)
            return r3
        L2c:
            boolean r4 = com.kwad.sdk.utils.at.IY()
            r2 = 1
            if (r4 != 0) goto L46
            boolean r4 = com.kwad.sdk.utils.o.Id()
            if (r4 != 0) goto L3a
            goto L46
        L3a:
            boolean r3 = com.kwad.sdk.utils.SystemUtil.cX(r3)
            if (r3 == 0) goto L41
            r2 = 3
        L41:
            java.lang.String r3 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r3
        L46:
            java.lang.String r3 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r3
    }

    private static java.lang.String i(android.content.Context r3, boolean r4) {
            java.lang.String r0 = com.kwad.sdk.utils.be.dg(r3)
            if (r4 != 0) goto L10
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto Lf
            java.lang.String r3 = ""
            return r3
        Lf:
            return r0
        L10:
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r4 != 0) goto L20
            boolean r3 = com.kwad.sdk.utils.at.IY()
            java.lang.String r3 = com.kwad.sdk.f.b.a(r3, r0, r1)
            return r3
        L20:
            boolean r4 = com.kwad.sdk.utils.at.IY()
            r2 = 1
            if (r4 != 0) goto L3a
            boolean r4 = com.kwad.sdk.utils.o.Ie()
            if (r4 != 0) goto L2e
            goto L3a
        L2e:
            boolean r3 = com.kwad.sdk.utils.SystemUtil.cX(r3)
            if (r3 == 0) goto L35
            r2 = 3
        L35:
            java.lang.String r3 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r3
        L3a:
            java.lang.String r3 = com.kwad.sdk.f.b.a(r1, r0, r2)
            return r3
    }

    public static void init(android.content.Context r0) {
            com.kwad.sdk.f.c r0 = cH(r0)
            com.kwad.sdk.f.b.a(r0)
            return
    }

    static java.lang.String j(android.content.Context r0, boolean r1) {
            r1 = 1
            java.lang.String r0 = c(r0, r1)
            return r0
    }

    static java.lang.String k(android.content.Context r0, boolean r1) {
            r1 = 1
            java.lang.String r0 = d(r0, r1)
            return r0
    }

    static java.lang.String l(android.content.Context r0, boolean r1) {
            r1 = 1
            java.lang.String r0 = e(r0, r1)
            return r0
    }

    static java.lang.String m(android.content.Context r0, boolean r1) {
            r1 = 1
            java.lang.String r0 = f(r0, r1)
            return r0
    }

    public static java.util.List<com.kwad.sdk.utils.bq.a> m(android.content.Context r0, int r1) {
            r1 = 15
            java.util.List r0 = com.kwad.sdk.utils.bq.m(r0, r1)
            return r0
    }

    static java.lang.String n(android.content.Context r0, boolean r1) {
            r1 = 1
            java.lang.String r0 = g(r0, r1)
            return r0
    }

    static java.lang.String o(android.content.Context r0, boolean r1) {
            r1 = 1
            java.lang.String r0 = h(r0, r1)
            return r0
    }

    static java.lang.String p(android.content.Context r0, boolean r1) {
            r1 = 1
            java.lang.String r0 = i(r0, r1)
            return r0
    }

    static java.lang.String q(android.content.Context r0, boolean r1) {
            java.lang.String r0 = cC(r0)
            return r0
    }

    static java.lang.String r(android.content.Context r0, boolean r1) {
            java.lang.String r0 = cE(r0)
            return r0
    }

    static java.lang.String s(android.content.Context r0, boolean r1) {
            java.lang.String r0 = cG(r0)
            return r0
    }

    static java.lang.String t(android.content.Context r0, boolean r1) {
            java.lang.String r0 = cF(r0)
            return r0
    }
}
