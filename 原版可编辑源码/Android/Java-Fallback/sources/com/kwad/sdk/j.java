package com.kwad.sdk;

public final class j {









    static class a implements com.kwad.sdk.service.a.a {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void g(android.content.Context r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
                r1 = this;
                com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
                r0.<init>(r2)
                com.kwad.components.core.e.d.a$a r2 = r0.P(r3)
                r3 = 1
                com.kwad.components.core.e.d.a$a r2 = r2.ao(r3)
                com.kwad.components.core.e.d.a.a(r2)
                return
        }

        @Override
        public final int j(android.content.Context r1, java.lang.String r2) {
                r0 = this;
                int r1 = com.kwad.components.core.e.d.d.j(r1, r2)
                return r1
        }
    }

    static class b implements com.kwad.sdk.core.download.b {
        private b() {
                r0 = this;
                r0.<init>()
                return
        }

        b(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void b(int r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
                r1 = this;
                r0 = 1
                if (r2 == r0) goto L4
                goto L8
            L4:
                r2 = 0
                com.kwad.sdk.core.report.a.e(r3, r2)
            L8:
                return
        }
    }

    static class c implements com.kwad.sdk.service.a.e {
        private c() {
                r0 = this;
                r0.<init>()
                return
        }

        c(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final boolean ac(com.kwad.sdk.core.response.model.AdTemplate r1) {
                r0 = this;
                java.lang.Class<com.kwad.components.a.a.a> r1 = com.kwad.components.a.a.a.class
                com.kwad.sdk.components.a r1 = com.kwad.sdk.components.c.f(r1)
                com.kwad.components.a.a.a r1 = (com.kwad.components.a.a.a) r1
                if (r1 == 0) goto L12
                boolean r1 = r1.sE()
                if (r1 == 0) goto L12
                r1 = 1
                return r1
            L12:
                r1 = 0
                return r1
        }

        @Override
        public final java.lang.String getApiVersion() {
                r1 = this;
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
                java.lang.String r0 = r0.getApiVersion()
                return r0
        }

        @Override
        public final int getApiVersionCode() {
                r1 = this;
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
                int r0 = r0.getApiVersionCode()
                return r0
        }

        @Override
        public final java.lang.String getAppId() {
                r1 = this;
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
                java.lang.String r0 = r0.getAppId()
                return r0
        }

        @Override
        public final java.lang.String getAppName() {
                r1 = this;
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
                java.lang.String r0 = r0.getAppName()
                return r0
        }

        @Override
        public final android.content.Context getContext() {
                r1 = this;
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
                android.content.Context r0 = r0.getContext()
                return r0
        }

        @Override
        public final boolean getIsExternal() {
                r1 = this;
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
                boolean r0 = r0.getIsExternal()
                return r0
        }

        @Override
        public final java.lang.String getSDKVersion() {
                r1 = this;
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
                java.lang.String r0 = r0.getSDKVersion()
                return r0
        }

        @Override
        public final boolean hasInitFinish() {
                r1 = this;
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
                boolean r0 = r0.hasInitFinish()
                return r0
        }

        @Override
        public final boolean hasLiveCompoReady() {
                r1 = this;
                java.lang.Class<com.kwad.components.core.offline.api.a.a> r0 = com.kwad.components.core.offline.api.a.a.class
                com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
                com.kwad.components.core.offline.api.a.a r0 = (com.kwad.components.core.offline.api.a.a) r0
                if (r0 == 0) goto Lf
                boolean r0 = r0.hasLiveCompoReady()
                return r0
            Lf:
                r0 = 0
                return r0
        }

        @Override
        public final boolean isPersonalRecommend() {
                r1 = this;
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
                boolean r0 = r0.isPersonalRecommend()
                return r0
        }

        @Override
        public final boolean isProgrammaticRecommend() {
                r1 = this;
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
                boolean r0 = r0.isProgrammaticRecommend()
                return r0
        }

        @Override
        public final com.kwad.sdk.core.response.b.e sF() {
                r1 = this;
                java.lang.Class<com.kwad.components.a.a.a> r0 = com.kwad.components.a.a.a.class
                com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
                com.kwad.components.a.a.a r0 = (com.kwad.components.a.a.a) r0
                if (r0 == 0) goto Lf
                com.kwad.sdk.core.response.b.e r0 = r0.sF()
                return r0
            Lf:
                r0 = 0
                return r0
        }
    }

    static class d implements com.kwad.sdk.service.a.f {
        private d() {
                r0 = this;
                r0.<init>()
                return
        }

        d(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final boolean R(long r1) {
                r0 = this;
                boolean r1 = com.kwad.sdk.core.config.d.R(r1)
                return r1
        }

        @Override
        public final int av(android.content.Context r1) {
                r0 = this;
                int r1 = com.kwad.sdk.core.config.item.c.aR(r1)
                return r1
        }

        @Override
        public final boolean bS(java.lang.String r1) {
                r0 = this;
                boolean r1 = com.kwad.sdk.core.config.a.bS(r1)
                return r1
        }

        @Override
        public final <T> T getAppConfigData(T r2, com.kwad.sdk.g.b<org.json.JSONObject, T> r3) {
                r1 = this;
                com.kwad.sdk.core.response.model.SdkConfigData r2 = com.kwad.sdk.core.config.d.zw()
                r0 = 0
                java.lang.Object r2 = r2.getAppConfigData(r0, r3)
                return r2
        }

        @Override
        public final java.lang.String getAppId() {
                r1 = this;
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
                java.lang.String r0 = r0.getAppId()
                return r0
        }

        @Override
        public final java.lang.String getUserAgent() {
                r1 = this;
                java.lang.String r0 = com.kwad.sdk.core.config.d.getUserAgent()
                return r0
        }

        @Override
        public final boolean vK() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.vK()
                return r0
        }

        @Override
        public final java.util.List<java.lang.String> xA() {
                r1 = this;
                java.util.List r0 = com.kwad.sdk.core.config.d.xA()
                return r0
        }

        @Override
        public final boolean xB() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.xB()
                return r0
        }

        @Override
        public final boolean xC() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.xC()
                return r0
        }

        @Override
        public final boolean xD() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.zB()
                return r0
        }

        @Override
        public final boolean xE() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.xE()
                return r0
        }

        @Override
        public final boolean xF() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.xF()
                return r0
        }

        @Override
        public final int xG() {
                r1 = this;
                int r0 = com.kwad.sdk.core.config.d.xG()
                return r0
        }

        @Override
        public final int xH() {
                r1 = this;
                int r0 = com.kwad.sdk.core.config.d.xH()
                return r0
        }

        @Override
        public final double xI() {
                r2 = this;
                double r0 = com.kwad.sdk.core.config.d.xI()
                return r0
        }

        @Override
        public final boolean xJ() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.xJ()
                return r0
        }

        @Override
        public final boolean xK() {
                r1 = this;
                com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.amv
                boolean r0 = com.kwad.sdk.core.config.d.a(r0)
                return r0
        }

        @Override
        public final boolean xL() {
                r1 = this;
                com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.amw
                boolean r0 = com.kwad.sdk.core.config.d.a(r0)
                return r0
        }

        @Override
        public final boolean xM() {
                r1 = this;
                com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.amx
                boolean r0 = com.kwad.sdk.core.config.d.a(r0)
                return r0
        }

        @Override
        public final boolean xN() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.xN()
                return r0
        }

        @Override
        public final boolean xu() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.xu()
                return r0
        }

        @Override
        public final boolean xv() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.xv()
                return r0
        }

        @Override
        public final boolean xw() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.xw()
                return r0
        }

        @Override
        public final boolean xx() {
                r1 = this;
                boolean r0 = com.kwad.sdk.core.config.d.xx()
                return r0
        }

        @Override
        public final java.lang.String xy() {
                r1 = this;
                java.lang.String r0 = com.kwad.sdk.core.config.d.xy()
                return r0
        }

        @Override
        public final java.lang.String xz() {
                r1 = this;
                java.lang.String r0 = com.kwad.sdk.core.config.d.xz()
                return r0
        }
    }

    public static void xo() {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            com.kwad.sdk.j$c r1 = new com.kwad.sdk.j$c
            r2 = 0
            r1.<init>(r2)
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            com.kwad.sdk.j$d r1 = new com.kwad.sdk.j$d
            r1.<init>(r2)
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.service.a.d> r0 = com.kwad.sdk.service.a.d.class
            com.kwad.sdk.j$1 r1 = new com.kwad.sdk.j$1
            r1.<init>()
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.service.a.c> r0 = com.kwad.sdk.service.a.c.class
            com.kwad.sdk.j$2 r1 = new com.kwad.sdk.j$2
            r1.<init>()
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.service.a.h> r0 = com.kwad.sdk.service.a.h.class
            com.kwad.sdk.j$3 r1 = new com.kwad.sdk.j$3
            r1.<init>()
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.core.network.l> r0 = com.kwad.sdk.core.network.l.class
            com.kwad.sdk.j$4 r1 = new com.kwad.sdk.j$4
            r1.<init>()
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.service.a.g> r0 = com.kwad.sdk.service.a.g.class
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r1 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.service.a.b> r0 = com.kwad.sdk.service.a.b.class
            com.kwad.sdk.j$5 r1 = new com.kwad.sdk.j$5
            r1.<init>()
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.core.report.w> r0 = com.kwad.sdk.core.report.w.class
            com.kwad.sdk.j$6 r1 = new com.kwad.sdk.j$6
            r1.<init>()
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.core.download.b> r0 = com.kwad.sdk.core.download.b.class
            com.kwad.sdk.j$b r1 = new com.kwad.sdk.j$b
            r1.<init>(r2)
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.core.video.a.f> r0 = com.kwad.sdk.core.video.a.f.class
            com.kwad.sdk.j$7 r1 = new com.kwad.sdk.j$7
            r1.<init>()
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.utils.b.b> r0 = com.kwad.sdk.utils.b.b.class
            com.kwad.sdk.j$8 r1 = new com.kwad.sdk.j$8
            r1.<init>()
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            java.lang.Class<com.kwad.sdk.service.a.a> r0 = com.kwad.sdk.service.a.a.class
            com.kwad.sdk.j$a r1 = new com.kwad.sdk.j$a
            r1.<init>(r2)
            com.kwad.sdk.service.ServiceProvider.put(r0, r1)
            return
    }
}
