package com.kwad.components.offline.adLive;

public class AdLiveCompoImpl extends com.kwad.components.core.offline.init.DefaultOfflineCompo implements com.kwad.components.core.offline.api.a.a {
    private final com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo mOfflineCompo;

    public AdLiveCompoImpl(com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo r1) {
            r0 = this;
            r0.<init>(r1)
            r0.mOfflineCompo = r1
            return
    }

    @Override
    public com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest getAdLiveEndRequest(java.lang.String r2) {
            r1 = this;
            com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo r0 = r1.mOfflineCompo
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r2 = r0.getAdLiveEndRequest(r2)
            return r2
    }

    @Override
    public com.kwad.components.offline.api.core.adlive.IAdLivePlayModule getAdLivePlayModule(com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo r0 = r1.mOfflineCompo
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r2 = r0.getAdLivePlayModule(r2, r3, r4)
            return r2
    }

    @Override
    public java.lang.Class getComponentsType() {
            r1 = this;
            java.lang.Class<com.kwad.components.offline.adLive.AdLiveCompoImpl> r0 = com.kwad.components.offline.adLive.AdLiveCompoImpl.class
            return r0
    }

    public com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState getState() {
            r1 = this;
            com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo r0 = r1.mOfflineCompo
            com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState r0 = r0.getState()
            return r0
    }

    @Override
    public com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView getView(android.content.Context r2, int r3) {
            r1 = this;
            com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo r0 = r1.mOfflineCompo
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r2 = r0.getView(r2, r3)
            return r2
    }

    @Override
    public boolean hasLiveCompoReady() {
            r2 = this;
            com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo r0 = r2.mOfflineCompo
            com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState r0 = r0.getState()
            com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState r1 = com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState.READY
            if (r0 != r1) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public void onConfigRefresh(android.content.Context r2, org.json.JSONObject r3) {
            r1 = this;
            if (r3 == 0) goto L7
            com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo r0 = r1.mOfflineCompo
            r0.onConfigRefresh(r2, r3)
        L7:
            return
    }
}
