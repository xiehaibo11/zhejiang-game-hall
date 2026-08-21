package com.kwad.components.core.p;

public class a extends com.kwad.sdk.core.network.d {
    private static boolean PC = true;
    com.kwad.components.core.p.a.b Lj;
    private int PB;

    static {
            return
    }

    public a(com.kwad.components.core.p.a.a r5) {
            r4 = this;
            com.kwad.components.core.p.a.b r0 = r5.Lj
            java.util.List<java.lang.String> r1 = r5.PJ
            boolean r2 = r5.PK
            com.kwad.components.core.p.a.d r3 = r5.PM
            r4.<init>(r0, r1, r2, r3)
            boolean r5 = r5.PL
            r4.PB = r5
            return
    }

    public a(com.kwad.components.core.p.a.b r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private a(com.kwad.components.core.p.a.b r2, com.kwad.components.core.p.a.d r3) {
            r1 = this;
            r3 = 0
            r0 = 0
            r1.<init>(r2, r3, r0, r3)
            return
    }

    public a(com.kwad.components.core.p.a.b r4, java.util.List<java.lang.String> r5, boolean r6, com.kwad.components.core.p.a.d r7) {
            r3 = this;
            int r0 = c(r4)
            com.kwad.sdk.internal.api.SceneImpl r1 = r4.PN
            r3.<init>(r0, r1)
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = "timestamp"
            r3.putBody(r2, r0)
            r3.Lj = r4
            com.kwad.sdk.internal.api.a r0 = r4.pJ()
            if (r0 == 0) goto L27
            boolean r1 = r0.FE()
            if (r1 != 0) goto L27
            org.json.JSONObject r1 = com.kwad.sdk.core.request.model.a.Cr()
            r3.a(r1, r0)
        L27:
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            org.json.JSONObject r2 = r4.toJson()
            com.kwad.sdk.utils.t.putValue(r1, r2)
            java.lang.String r2 = "impInfo"
            r3.putBody(r2, r1)
            java.lang.String r1 = "universePhotoInfo"
            r3.putBody(r1, r7)
            int r7 = r3.PB
            if (r7 <= 0) goto L46
            java.lang.String r1 = "calledUnionType"
            r3.putBody(r1, r7)
        L46:
            java.lang.String r7 = ""
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r1 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 == 0) goto L5f
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r7 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.a r7 = com.kwad.sdk.components.c.f(r7)
            com.kwad.sdk.components.DevelopMangerComponents r7 = (com.kwad.sdk.components.DevelopMangerComponents) r7
            java.lang.String r7 = r7.yP()
        L5f:
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L6a
            java.lang.String r1 = "universeDebugParam"
            r3.putBody(r1, r7)
        L6a:
            java.lang.String r4 = d(r4)
            boolean r7 = android.text.TextUtils.isEmpty(r4)
            if (r7 != 0) goto L79
            java.lang.String r7 = "sdkDebugReqInfo"
            r3.putBody(r7, r4)
        L79:
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r4 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r4)
            if (r5 == 0) goto L8f
            org.json.JSONArray r4 = new org.json.JSONArray
            r4.<init>(r5)
            java.lang.String r5 = "preloadIdList"
            r3.putBody(r5, r4)
            java.lang.String r4 = "preloadCheck"
            r3.putBody(r4, r6)
        L8f:
            java.lang.String r4 = com.kwad.sdk.utils.y.Iy()
            java.lang.String r5 = "appTag"
            r3.putBody(r5, r4)
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r4 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r4)
            com.kwad.components.core.p.a.b r4 = r3.Lj
            java.lang.String r5 = "thirdUserId"
            java.lang.String r4 = r4.av(r5)
            com.kwad.sdk.core.request.model.g r5 = com.kwad.sdk.core.request.model.g.Cy()
            if (r4 == 0) goto Lae
            r5.dC(r4)
        Lae:
            if (r0 == 0) goto Lb9
            boolean r4 = r0.FD()
            if (r4 != 0) goto Lb9
            a(r5, r0)
        Lb9:
            java.lang.String r4 = "userInfo"
            r3.putBody(r4, r5)
            return
    }

    private static void a(com.kwad.sdk.core.request.model.g r1, com.kwad.sdk.internal.api.a r2) {
            int r0 = r2.ajr
            if (r0 == 0) goto L8
            int r0 = r2.ajr
            r1.ajr = r0
        L8:
            int r0 = r2.ajs
            if (r0 == 0) goto L10
            int r0 = r2.ajs
            r1.ajs = r0
        L10:
            java.lang.String r0 = r2.ajt
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1c
            java.lang.String r2 = r2.ajt
            r1.ajt = r2
        L1c:
            return
    }

    private void a(org.json.JSONObject r4, com.kwad.sdk.internal.api.a r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r5.aju
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L14
            java.lang.String r1 = r5.aju
            java.lang.String r2 = "prevTitle"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
        L14:
            java.lang.String r1 = r5.ajv
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L23
            java.lang.String r1 = r5.ajv
            java.lang.String r2 = "postTitle"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
        L23:
            java.lang.String r1 = r5.ajw
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L32
            java.lang.String r1 = r5.ajw
            java.lang.String r2 = "historyTitle"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
        L32:
            java.lang.String r1 = r5.ajx
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L41
            java.lang.String r5 = r5.ajx
            java.lang.String r1 = "channel"
            com.kwad.sdk.utils.t.putValue(r0, r1, r5)
        L41:
            java.lang.String r5 = "content"
            com.kwad.sdk.utils.t.putValue(r4, r5, r0)
            java.lang.String r5 = "appInfo"
            r3.putBody(r5, r4)
            return
    }

    private static int c(com.kwad.components.core.p.a.b r0) {
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.PN     // Catch: java.lang.Throwable -> L7
            int r0 = r0.getScreenOrientation()     // Catch: java.lang.Throwable -> L7
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    private static java.lang.String d(com.kwad.components.core.p.a.b r8) {
            boolean r0 = com.kwad.components.core.p.a.PC
            java.lang.String r1 = ""
            if (r0 != 0) goto L7
            return r1
        L7:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            if (r0 == 0) goto L3d
            r2 = 0
            java.lang.String r3 = "com.kwad.devTools.PosConfigFetcher"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.Object r3 = r3.newInstance()     // Catch: java.lang.Exception -> L3b
            java.lang.String r4 = "getConfigParamByPosId"
            r5 = 2
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L3b
            com.kwad.sdk.internal.api.SceneImpl r8 = r8.PN     // Catch: java.lang.Exception -> L3b
            long r6 = r8.getPosId()     // Catch: java.lang.Exception -> L3b
            java.lang.Long r8 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Exception -> L3b
            r5[r2] = r8     // Catch: java.lang.Exception -> L3b
            r8 = 1
            android.content.Context r0 = r0.getContext()     // Catch: java.lang.Exception -> L3b
            r5[r8] = r0     // Catch: java.lang.Exception -> L3b
            java.lang.Object r8 = com.kwad.sdk.utils.s.h(r3, r4, r5)     // Catch: java.lang.Exception -> L3b
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Exception -> L3b
            return r8
        L3b:
            com.kwad.components.core.p.a.PC = r2
        L3d:
            return r1
    }

    public final void aC(int r1) {
            r0 = this;
            r0.PB = r1
            return
    }

    public final int getAdNum() {
            r1 = this;
            com.kwad.components.core.p.a.b r0 = r1.Lj
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.PN
            int r0 = r0.getAdNum()
            return r0
    }

    @Override
    public com.kwad.sdk.internal.api.SceneImpl getScene() {
            r1 = this;
            com.kwad.components.core.p.a.b r0 = r1.Lj
            if (r0 == 0) goto L7
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.PN
            return r0
        L7:
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.h.xa()
            return r0
    }

    @Override
    public boolean needAppList() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void onCreate() {
            r1 = this;
            r0 = 1
            com.kwad.sdk.utils.o.bE(r0)
            super.onCreate()
            return
    }
}
