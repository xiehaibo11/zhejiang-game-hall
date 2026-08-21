package com.kwad.components.offline.obiwan;

public final class a extends com.kwad.components.core.offline.init.a {



    static final class a {
        private static final com.kwad.components.offline.obiwan.a Zw = null;

        static {
                com.kwad.components.offline.obiwan.a r0 = new com.kwad.components.offline.obiwan.a
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.offline.obiwan.a.a.Zw = r0
                return
        }

        static com.kwad.components.offline.obiwan.a sK() {
                com.kwad.components.offline.obiwan.a r0 = com.kwad.components.offline.obiwan.a.a.Zw
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

    static void a(com.kwad.components.offline.obiwan.a r0) {
            r0.om()
            return
    }

    public static void am(android.content.Context r1) {
            com.kwad.components.offline.obiwan.a r0 = sJ()
            r0.init(r1)
            return
    }

    private static com.kwad.components.offline.obiwan.a sJ() {
            com.kwad.components.offline.obiwan.a r0 = com.kwad.components.offline.obiwan.a.a.sK()
            return r0
    }

    @Override
    public final boolean b(android.content.Context r5, java.lang.ClassLoader r6) {
            r4 = this;
            java.lang.String r0 = "com.kwad.sdk.core.log.ObiwanOfflineCompoImpl"
            com.kwad.components.offline.api.IOfflineCompo r6 = r4.a(r6, r0)
            com.kwad.components.offline.api.obiwan.IObiwanOfflineCompo r6 = (com.kwad.components.offline.api.obiwan.IObiwanOfflineCompo) r6
            if (r6 != 0) goto Lc
            r5 = 0
            return r5
        Lc:
            com.kwad.components.offline.obiwan.ObiwanComponentsImpl r0 = new com.kwad.components.offline.obiwan.ObiwanComponentsImpl
            r0.<init>(r6)
            java.lang.Class<com.kwad.components.core.offline.api.obiwan.ObiwanComponents> r1 = com.kwad.components.core.offline.api.obiwan.ObiwanComponents.class
            com.kwad.sdk.components.c.a(r1, r0)
            java.lang.String r1 = r4.getTag()
            java.lang.String r2 = "offlineComponent load success"
            com.kwad.sdk.core.e.c.i(r1, r2)
            com.kwad.sdk.api.SdkConfig r1 = com.kwad.sdk.service.ServiceProvider.HE()
            com.kwad.components.offline.obiwan.c r2 = new com.kwad.components.offline.obiwan.c
            r2.<init>()
            com.kwad.components.offline.obiwan.a$1 r3 = new com.kwad.components.offline.obiwan.a$1
            r3.<init>(r4)
            r6.initReal(r5, r1, r2, r3)
            com.kwad.components.offline.obiwan.b r5 = new com.kwad.components.offline.obiwan.b
            com.kwad.components.offline.api.obiwan.IObiwanLogcat r6 = r0.getLog()
            r5.<init>(r6)
            com.kwad.sdk.core.e.c.a(r5)
            com.kwad.components.offline.obiwan.a$2 r5 = new com.kwad.components.offline.obiwan.a$2
            r5.<init>(r4, r0)
            com.kwad.components.core.p.f.a(r5)
            r5 = 1
            return r5
    }

    @Override
    public final java.lang.String getTag() {
            r1 = this;
            java.lang.String r0 = "ObiwanInitModule"
            return r0
    }

    @Override
    public final boolean isEnabled() {
            r1 = this;
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alR
            java.lang.Object r0 = com.kwad.sdk.core.config.d.b(r0)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
    }

    @Override
    public final int oe() {
            r1 = this;
            r0 = 3
            return r0
    }

    @Override
    public final java.lang.String oh() {
            r1 = this;
            java.lang.String r0 = "com.kwad.components.obiwan"
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
            java.lang.String r0 = "https://p1-lm.adkwai.com/udata/pkg/KS-Android-KSAdSDk/offline_components/obiwan/ks_so-obiwanNoSoRelease-3.3.40-c04ae50398-273.zip"
            return r0
    }

    @Override
    public final java.lang.String ok() {
            r1 = this;
            java.lang.String r0 = "68b663dbb3f66e09d06aa0753d724710"
            return r0
    }

    @Override
    public final java.lang.String ol() {
            r1 = this;
            java.lang.String r0 = "ks_obiwan_773cd6541"
            return r0
    }
}
