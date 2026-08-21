package com.kwad.components.offline.adLive;

public final class a extends com.kwad.components.core.offline.init.a {



    static final class a {
        private static final com.kwad.components.offline.adLive.a Zk = null;

        static {
                com.kwad.components.offline.adLive.a r0 = new com.kwad.components.offline.adLive.a
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.offline.adLive.a.a.Zk = r0
                return
        }

        static com.kwad.components.offline.adLive.a sH() {
                com.kwad.components.offline.adLive.a r0 = com.kwad.components.offline.adLive.a.a.Zk
                return r0
        }
    }

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

    static void a(com.kwad.components.offline.adLive.a r0) {
            r0.om()
            return
    }

    public static void am(android.content.Context r1) {
            com.kwad.components.offline.adLive.a r0 = sG()
            r0.init(r1)
            return
    }

    private static com.kwad.components.offline.adLive.a sG() {
            com.kwad.components.offline.adLive.a r0 = com.kwad.components.offline.adLive.a.a.sH()
            return r0
    }

    @Override
    public final boolean b(android.content.Context r5, java.lang.ClassLoader r6) {
            r4 = this;
            java.lang.String r0 = "com.kwad.sdk.AdLiveOfflineCompoImpl"
            com.kwad.components.offline.api.IOfflineCompo r6 = r4.a(r6, r0)
            com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo r6 = (com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo) r6
            if (r6 != 0) goto L13
            java.lang.String r5 = "AdLiveInitModule"
            java.lang.String r6 = "onPluginLoaded components is null"
            com.kwad.sdk.core.e.c.d(r5, r6)
            r5 = 0
            return r5
        L13:
            java.lang.String r0 = r4.getTag()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "offlineComponent load components classLoader: "
            r1.<init>(r2)
            java.lang.Class r2 = r6.getClass()
            java.lang.ClassLoader r2 = r2.getClassLoader()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.offline.adLive.AdLiveCompoImpl r0 = new com.kwad.components.offline.adLive.AdLiveCompoImpl
            r0.<init>(r6)
            java.lang.Class<com.kwad.components.core.offline.api.a.a> r1 = com.kwad.components.core.offline.api.a.a.class
            com.kwad.sdk.components.c.a(r1, r0)
            java.lang.String r1 = r4.getTag()
            java.lang.String r2 = "offlineComponent load success"
            com.kwad.sdk.core.e.c.i(r1, r2)
            com.kwad.sdk.api.SdkConfig r1 = com.kwad.sdk.service.ServiceProvider.HE()
            com.kwad.components.offline.adLive.b r2 = new com.kwad.components.offline.adLive.b
            r2.<init>()
            com.kwad.components.offline.adLive.a$1 r3 = new com.kwad.components.offline.adLive.a$1
            r3.<init>(r4)
            r6.initReal(r5, r1, r2, r3)
            com.kwad.sdk.core.response.model.SdkConfigData r6 = com.kwad.sdk.core.config.d.zw()
            if (r6 == 0) goto L61
            org.json.JSONObject r1 = r6.toJson()
            r0.onConfigRefresh(r5, r1)
        L61:
            com.kwad.components.offline.adLive.a$2 r1 = new com.kwad.components.offline.adLive.a$2
            r1.<init>(r4, r6, r0, r5)
            com.kwad.components.core.p.f.a(r1)
            r5 = 1
            return r5
    }

    @Override
    public final java.lang.String getTag() {
            r1 = this;
            java.lang.String r0 = "AdLiveInitModule"
            return r0
    }

    @Override
    public final boolean isEnabled() {
            r1 = this;
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alq
            java.lang.Object r0 = com.kwad.sdk.core.config.d.b(r0)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
    }

    @Override
    public final int oe() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    public final java.lang.String oh() {
            r1 = this;
            java.lang.String r0 = "com.kwad.components.adLive"
            return r0
    }

    @Override
    public final java.lang.String oi() {
            r1 = this;
            java.lang.String r0 = "3.3.40"
            return r0
    }

    @Override
    public final java.lang.String oj() {
            r1 = this;
            java.lang.String r0 = "https://p1-lm.adkwai.com/udata/pkg/KS-Android-KSAdSDk/offline_components/adLive/ks_so-adLiveNoSoRelease-3.3.40-c04ae50398-274.zip"
            return r0
    }

    @Override
    public final java.lang.String ok() {
            r1 = this;
            java.lang.String r0 = "c858e8b68e0fddffe563602161bb8f8d"
            return r0
    }

    @Override
    public final java.lang.String ol() {
            r1 = this;
            java.lang.String r0 = "ks_live_ed677b1b2"
            return r0
    }
}
