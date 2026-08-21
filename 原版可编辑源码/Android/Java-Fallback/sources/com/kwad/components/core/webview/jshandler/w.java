package com.kwad.components.core.webview.jshandler;

public final class w implements com.kwad.sdk.core.webview.c.a {

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String Uh;
        public int Ui;
        public java.lang.String Uj;
        public int Uk;
        public int Ul;
        public java.lang.String Um;
        public java.lang.String Un;
        public java.lang.String Uo;
        public int Up;
        public java.lang.String Uq;
        public int Ur;
        public java.lang.String Us;
        public java.lang.String Ut;
        public int Uu;
        public int Uv;
        public int Uw;
        public int Ux;
        public java.lang.String appId;
        public java.lang.String appName;
        public java.lang.String appVersion;
        public java.lang.String model;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.kwad.components.core.webview.jshandler.w.a rv() {
                com.kwad.components.core.webview.jshandler.w$a r0 = new com.kwad.components.core.webview.jshandler.w$a
                r0.<init>()
                java.lang.String r1 = "3.3.42"
                r0.Uh = r1
                r1 = 3034200(0x2e4c58, float:4.25182E-39)
                r0.Ui = r1
                java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
                java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
                com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
                java.lang.String r1 = r1.getApiVersion()
                r0.Uj = r1
                java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
                java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
                com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
                int r1 = r1.getApiVersionCode()
                r0.Uk = r1
                r1 = 1
                r0.Ul = r1
                java.lang.Class<com.kwad.sdk.service.a.e> r2 = com.kwad.sdk.service.a.e.class
                java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)
                com.kwad.sdk.service.a.e r2 = (com.kwad.sdk.service.a.e) r2
                android.content.Context r2 = r2.getContext()
                java.lang.String r3 = com.kwad.sdk.utils.k.bQ(r2)
                r0.appVersion = r3
                java.lang.Class<com.kwad.sdk.service.a.e> r3 = com.kwad.sdk.service.a.e.class
                java.lang.Object r3 = com.kwad.sdk.service.ServiceProvider.get(r3)
                com.kwad.sdk.service.a.e r3 = (com.kwad.sdk.service.a.e) r3
                java.lang.String r3 = r3.getAppName()
                r0.appName = r3
                java.lang.Class<com.kwad.sdk.service.a.e> r3 = com.kwad.sdk.service.a.e.class
                java.lang.Object r3 = com.kwad.sdk.service.ServiceProvider.get(r3)
                com.kwad.sdk.service.a.e r3 = (com.kwad.sdk.service.a.e) r3
                java.lang.String r3 = r3.getAppId()
                r0.appId = r3
                int r3 = com.kwad.sdk.utils.ag.cj(r2)
                java.lang.String r3 = java.lang.String.valueOf(r3)
                r0.Um = r3
                java.lang.String r3 = com.kwad.sdk.utils.be.JS()
                r0.Un = r3
                java.lang.String r3 = com.kwad.sdk.utils.be.JJ()
                r0.model = r3
                java.lang.String r3 = com.kwad.sdk.utils.be.JL()
                r0.Uo = r3
                r0.Up = r1
                java.lang.String r1 = com.kwad.sdk.utils.be.getOsVersion()
                r0.Uq = r1
                int r1 = com.kwad.sdk.utils.be.JV()
                r0.Ur = r1
                java.lang.String r1 = com.kwad.sdk.utils.be.getLanguage()
                r0.Us = r1
                java.lang.String r1 = com.kwad.sdk.utils.be.getLocale()
                r0.Ut = r1
                int r1 = com.kwad.sdk.utils.be.getScreenWidth(r2)
                r0.Uu = r1
                int r1 = com.kwad.sdk.utils.be.getScreenHeight(r2)
                r0.Uv = r1
                int r1 = com.kwad.sdk.d.a.a.getStatusBarHeight(r2)
                r0.Uw = r1
                r1 = 1112014848(0x42480000, float:50.0)
                int r1 = com.kwad.sdk.d.a.a.a(r2, r1)
                r0.Ux = r1
                return r0
        }
    }

    public w() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.w$a r1 = com.kwad.components.core.webview.jshandler.w.a.rv()
            r2.a(r1)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getKsPlayableDeviceInfo"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
