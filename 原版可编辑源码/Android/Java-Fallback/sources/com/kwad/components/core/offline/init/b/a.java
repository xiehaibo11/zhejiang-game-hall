package com.kwad.components.core.offline.init.b;

public final class a implements com.kwad.components.offline.api.core.adlive.ILive {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final com.kwad.components.offline.api.core.adlive.IAdLivePlayModule getAdLivePlayModule(com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.lang.Class<com.kwad.components.core.offline.api.a.a> r0 = com.kwad.components.core.offline.api.a.a.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.core.offline.api.a.a r0 = (com.kwad.components.core.offline.api.a.a) r0
            if (r0 == 0) goto L15
            boolean r1 = r0.hasLiveCompoReady()
            if (r1 == 0) goto L15
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r3 = r0.getAdLivePlayModule(r3, r4, r5)
            goto L16
        L15:
            r3 = 0
        L16:
            return r3
    }

    @Override
    public final com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView getIAdLiveOfflineView(android.content.Context r3, int r4) {
            r2 = this;
            java.lang.Class<com.kwad.components.core.offline.api.a.a> r0 = com.kwad.components.core.offline.api.a.a.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.core.offline.api.a.a r0 = (com.kwad.components.core.offline.api.a.a) r0
            if (r0 == 0) goto L15
            boolean r1 = r0.hasLiveCompoReady()
            if (r1 == 0) goto L15
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r3 = r0.getView(r3, r4)
            goto L16
        L15:
            r3 = 0
        L16:
            return r3
    }

    @Override
    public final com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest mIAdLiveEndRequest(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1b
            java.lang.Class<com.kwad.components.core.offline.api.a.a> r0 = com.kwad.components.core.offline.api.a.a.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.core.offline.api.a.a r0 = (com.kwad.components.core.offline.api.a.a) r0
            if (r0 == 0) goto L1b
            boolean r1 = r0.hasLiveCompoReady()
            if (r1 == 0) goto L1b
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r3 = r0.getAdLiveEndRequest(r3)
            goto L1c
        L1b:
            r3 = 0
        L1c:
            return r3
    }
}
