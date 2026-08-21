package com.kwad.components.offline.obiwan;

public final class c implements com.kwad.components.offline.api.obiwan.IObiwanOfflineCompoInitConfig {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.String getLogDirPath() {
            r1 = this;
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            java.io.File r0 = com.kwad.sdk.utils.av.cM(r0)
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    @Override
    public final java.lang.String getLogObiwanData() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.core.config.d.getLogObiwanData()
            return r0
    }

    @Override
    public final long getLogObiwanStorageQuota() {
            r2 = this;
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r0)
            com.kwad.sdk.core.config.item.m r0 = com.kwad.sdk.core.config.c.alT
            long r0 = com.kwad.sdk.core.config.d.a(r0)
            return r0
    }

    @Override
    public final boolean isLogObiwanEnableNow() {
            r1 = this;
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alR
            boolean r0 = com.kwad.sdk.core.config.d.a(r0)
            return r0
    }

    @Override
    public final boolean isLogObiwanRecordAll() {
            r1 = this;
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alS
            boolean r0 = com.kwad.sdk.core.config.d.a(r0)
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.IOfflineCompoWrapper wrapper() {
            r2 = this;
            com.kwad.components.core.offline.init.a.i r0 = new com.kwad.components.core.offline.init.a.i
            java.lang.String r1 = "com.kwad.components.obiwan"
            r0.<init>(r1)
            return r0
    }
}
