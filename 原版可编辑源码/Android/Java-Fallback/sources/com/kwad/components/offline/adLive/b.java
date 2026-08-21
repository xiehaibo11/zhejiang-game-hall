package com.kwad.components.offline.adLive;

public final class b implements com.kwad.components.offline.api.adLive.IAdLiveOfflineCompoInitConfig {



    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final com.kwad.components.offline.api.core.adlive.listener.AdLiveHttpRequestListenerDelegate getAdLiveHttpRequestListenerDelegate() {
            r1 = this;
            com.kwad.components.offline.adLive.b$2 r0 = new com.kwad.components.offline.adLive.b$2
            r0.<init>(r1)
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.soloader.ISoLoader soLoader() {
            r1 = this;
            com.kwad.components.offline.adLive.b$1 r0 = new com.kwad.components.offline.adLive.b$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.IOfflineCompoWrapper wrapper() {
            r2 = this;
            com.kwad.components.core.offline.init.a.i r0 = new com.kwad.components.core.offline.init.a.i
            java.lang.String r1 = "com.kwad.components.adLive"
            r0.<init>(r1)
            return r0
    }
}
