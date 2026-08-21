package com.kwad.sdk.core.request.model;

public class b extends com.kwad.sdk.core.response.a.a {
    private static boolean atK;
    private static org.json.JSONArray atL;
    public java.lang.String Qb;
    public java.lang.String Uo;
    public int Up;
    public int Ur;
    public java.lang.String Us;
    public int Uu;
    public int Uv;
    public java.lang.String amD;
    public java.lang.String amE;
    public java.lang.String atM;
    public java.lang.String atN;
    public java.lang.String atO;
    public java.lang.String atP;
    public java.lang.String atQ;
    public java.lang.String atR;
    public int atS;
    public int atT;
    public java.lang.String atU;
    public java.lang.String atV;
    public java.lang.String atW;
    public int atX;
    public java.lang.String atY;
    public java.lang.String atZ;
    public java.lang.String aua;
    public org.json.JSONArray aub;
    public java.lang.String auc;
    public int aud;
    public java.lang.String aue;
    public java.lang.String auf;
    public java.lang.String aug;
    public long auh;
    public java.lang.String aui;
    public java.lang.String auj;


    public b() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.aud = r0
            r0 = 0
            r2.auh = r0
            return
    }

    public static com.kwad.sdk.core.request.model.b Ct() {
            com.kwad.sdk.core.request.model.b r0 = new com.kwad.sdk.core.request.model.b
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.utils.au.getOaid()
            r0.amE = r1
            java.lang.String r1 = com.kwad.sdk.utils.au.getDeviceId()
            r0.atV = r1
            java.lang.String r1 = com.kwad.sdk.utils.be.JJ()
            r0.atY = r1
            r1 = 1
            r0.Up = r1
            int r1 = com.kwad.sdk.utils.be.JV()
            r0.Ur = r1
            java.lang.String r1 = com.kwad.sdk.utils.be.getOsVersion()
            r0.atR = r1
            java.lang.String r1 = com.kwad.sdk.utils.y.Iz()
            r0.aua = r1
            java.lang.Class<com.kwad.sdk.components.f> r1 = com.kwad.sdk.components.f.class
            com.kwad.sdk.components.a r1 = com.kwad.sdk.components.c.f(r1)
            com.kwad.sdk.components.f r1 = (com.kwad.sdk.components.f) r1
            if (r1 == 0) goto L3c
            java.lang.String r1 = r1.nQ()
            r0.atZ = r1
        L3c:
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            if (r1 == 0) goto L50
            android.content.Context r1 = r1.getContext()
            java.lang.String r1 = com.kwad.sdk.utils.au.cu(r1)
            r0.amD = r1
        L50:
            return r0
    }

    private static synchronized org.json.JSONArray bf(android.content.Context r2) {
            java.lang.Class<com.kwad.sdk.core.request.model.b> r0 = com.kwad.sdk.core.request.model.b.class
            monitor-enter(r0)
            boolean r1 = com.kwad.sdk.core.request.model.b.atK     // Catch: java.lang.Throwable -> L1d
            if (r1 != 0) goto L12
            r1 = 1
            com.kwad.sdk.core.request.model.b.atK = r1     // Catch: java.lang.Throwable -> L1d
            com.kwad.sdk.core.request.model.b$1 r1 = new com.kwad.sdk.core.request.model.b$1     // Catch: java.lang.Throwable -> L1d
            r1.<init>()     // Catch: java.lang.Throwable -> L1d
            com.kwad.sdk.utils.InstalledAppInfoManager.a(r2, r1)     // Catch: java.lang.Throwable -> L1d
        L12:
            org.json.JSONArray r2 = com.kwad.sdk.core.request.model.b.atL     // Catch: java.lang.Throwable -> L1d
            r1 = 0
            if (r2 == 0) goto L1b
            com.kwad.sdk.core.request.model.b.atL = r1     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r0)
            return r2
        L1b:
            monitor-exit(r0)
            return r1
        L1d:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    static org.json.JSONArray f(org.json.JSONArray r0) {
            com.kwad.sdk.core.request.model.b.atL = r0
            return r0
    }

    public static com.kwad.sdk.core.request.model.b g(boolean r5, int r6) {
            com.kwad.sdk.core.request.model.b r0 = new com.kwad.sdk.core.request.model.b
            r0.<init>()
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            android.content.Context r2 = r1.getContext()
            java.lang.String r3 = com.kwad.sdk.utils.au.cu(r2)
            r0.amD = r3
            java.lang.String r3 = com.kwad.sdk.utils.au.cx(r2)
            r0.atM = r3
            java.lang.String r3 = com.kwad.sdk.utils.au.cy(r2)
            r0.atN = r3
            java.lang.String r3 = com.kwad.sdk.utils.be.dc(r2)
            r0.atO = r3
            java.lang.String r3 = com.kwad.sdk.utils.au.getOaid()
            r0.amE = r3
            java.lang.String r3 = com.kwad.sdk.utils.be.JJ()
            r0.atY = r3
            java.lang.String r3 = com.kwad.sdk.utils.be.JL()
            r0.Uo = r3
            r3 = 1
            r0.Up = r3
            int r3 = com.kwad.sdk.utils.be.JV()
            r0.Ur = r3
            java.lang.String r3 = com.kwad.sdk.utils.be.getOsVersion()
            r0.atR = r3
            java.lang.String r3 = com.kwad.sdk.utils.k.getLanguage()
            r0.Us = r3
            int r3 = com.kwad.sdk.utils.k.getScreenHeight(r2)
            r0.Uv = r3
            int r3 = com.kwad.sdk.utils.k.getScreenWidth(r2)
            r0.Uu = r3
            int r3 = com.kwad.sdk.utils.k.bS(r2)
            r0.atS = r3
            int r3 = com.kwad.sdk.utils.k.bT(r2)
            r0.atT = r3
            java.lang.String r3 = com.kwad.sdk.utils.au.cv(r2)
            r0.atU = r3
            if (r5 == 0) goto L76
            org.json.JSONArray r5 = bf(r2)
            r0.aub = r5
        L76:
            java.lang.String r5 = com.kwad.sdk.utils.au.getDeviceId()
            r0.atV = r5
            long r3 = com.kwad.sdk.utils.be.JK()
            r0.auh = r3
            java.lang.String r5 = com.kwad.sdk.utils.be.JS()
            r0.atW = r5
            java.lang.String r5 = com.kwad.sdk.utils.y.Iz()
            r0.aua = r5
            java.lang.Class<com.kwad.sdk.components.f> r5 = com.kwad.sdk.components.f.class
            com.kwad.sdk.components.a r5 = com.kwad.sdk.components.c.f(r5)
            com.kwad.sdk.components.f r5 = (com.kwad.sdk.components.f) r5
            if (r5 == 0) goto L9e
            java.lang.String r5 = r5.nQ()
            r0.atZ = r5
        L9e:
            int r5 = com.kwad.sdk.utils.be.JT()
            r0.atX = r5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r3 = "DeviceInfo i="
            r5.<init>(r3)
            java.lang.String r3 = r1.getAppId()
            r5.append(r3)
            java.lang.String r3 = ",n="
            r5.append(r3)
            java.lang.String r3 = r1.getAppName()
            r5.append(r3)
            java.lang.String r3 = ",external:"
            r5.append(r3)
            boolean r3 = r1.getIsExternal()
            r5.append(r3)
            java.lang.String r3 = ",v1:"
            r5.append(r3)
            java.lang.String r1 = r1.getApiVersion()
            r5.append(r1)
            java.lang.String r1 = ",v2:3.3.42"
            r5.append(r1)
            java.lang.String r1 = ",d:"
            r5.append(r1)
            java.lang.String r1 = r0.atV
            r5.append(r1)
            java.lang.String r1 = ",dh:"
            r5.append(r1)
            java.lang.String r1 = r0.atV
            if (r1 == 0) goto Lf7
            int r1 = r1.hashCode()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            goto Lf9
        Lf7:
            java.lang.String r1 = ""
        Lf9:
            r5.append(r1)
            java.lang.String r1 = ",o:"
            r5.append(r1)
            java.lang.String r1 = r0.amE
            r5.append(r1)
            java.lang.String r1 = ",b:471"
            r5.append(r1)
            java.lang.String r1 = ",p:"
            r5.append(r1)
            boolean r1 = com.kwad.sdk.utils.ap.isInMainProcess(r2)
            r5.append(r1)
            java.lang.String r1 = ",dy:"
            r5.append(r1)
            java.lang.Boolean r1 = com.kwad.framework.a.a.aae
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            com.kwad.sdk.core.e.c.cW(r5)
            java.lang.String r5 = com.kwad.sdk.utils.be.JU()
            r0.auc = r5
            r0.aud = r6
            boolean r5 = xB()
            if (r5 == 0) goto L15a
            com.kwad.sdk.b.b r5 = com.kwad.sdk.b.b.yB()
            java.lang.String r6 = "com.smile.gifmaker"
            java.lang.String r5 = r5.getVersion(r2, r6)
            r0.aue = r5
            com.kwad.sdk.b.b r5 = com.kwad.sdk.b.b.yB()
            java.lang.String r6 = "com.kuaishou.nebula"
            java.lang.String r5 = r5.getVersion(r2, r6)
            r0.auf = r5
            com.kwad.sdk.b.b r5 = com.kwad.sdk.b.b.yB()
            java.lang.String r6 = "com.tencent.mm"
            java.lang.String r5 = r5.getVersion(r2, r6)
            r0.aug = r5
        L15a:
            java.lang.String r5 = com.kwad.sdk.utils.be.JQ()
            r0.Qb = r5
            java.lang.String r5 = com.kwad.sdk.utils.ae.ch(r2)
            r0.atQ = r5
            java.lang.String r5 = com.kwad.sdk.utils.be.JZ()
            r0.aui = r5
            java.lang.String r5 = "/data/data"
            java.lang.String r5 = com.kwad.sdk.utils.be.fP(r5)
            r0.auj = r5
            return r0
    }

    private static boolean xB() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            boolean r0 = r0.xB()
            return r0
    }
}
