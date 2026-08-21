package com.kwad.components.offline.tk;

public final class c implements com.kwad.components.offline.api.tk.ITkOfflineCompoInitConfig {


    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.String getSpKeyTkSoLoadTimes() {
            r1 = this;
            java.lang.String r0 = "tk_so_load_times"
            return r0
    }

    @Override
    public final java.lang.String getSpNameSoLoadTimes() {
            r1 = this;
            java.lang.String r0 = "ksadsdk_so_load_times"
            return r0
    }

    @Override
    public final java.lang.String getTkJsFileDir(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = com.kwad.sdk.utils.av.getTkJsFileDir(r1, r2)
            return r1
    }

    @Override
    public final java.lang.String getTkJsRootDir(android.content.Context r1) {
            r0 = this;
            java.lang.String r1 = com.kwad.sdk.utils.av.getTkJsRootDir(r1)
            return r1
    }

    @Override
    public final java.lang.String getTkVersion() {
            r1 = this;
            java.lang.String r0 = "5.0.3"
            return r0
    }

    @Override
    public final boolean isCanUseTk() {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.config.d.isCanUseTk()
            return r0
    }

    @Override
    public final boolean isLocalDebugEnable() {
            r1 = this;
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r0)
            r0 = 0
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.soloader.ISoLoader soLoader() {
            r1 = this;
            com.kwad.components.offline.tk.c$1 r0 = new com.kwad.components.offline.tk.c$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public final boolean useTkLite() {
            r1 = this;
            boolean r0 = com.kwad.components.offline.tk.b.a.useTkLite()
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.IOfflineCompoWrapper wrapper() {
            r2 = this;
            com.kwad.components.core.offline.init.a.i r0 = new com.kwad.components.core.offline.init.a.i
            java.lang.String r1 = "com.kwad.components.tachikoma"
            r0.<init>(r1)
            return r0
    }
}
