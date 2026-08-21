package com.kwad.components.ad.reward.presenter.b;

public final class a extends com.kwad.components.ad.reward.presenter.a {
    private com.kwad.components.offline.api.core.adlive.listener.AdLiveHandleClickListener tK;


    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.b.a$1 r0 = new com.kwad.components.ad.reward.presenter.b.a$1
            r0.<init>(r1)
            r1.tK = r0
            return
    }

    static android.content.Context a(com.kwad.components.ad.reward.presenter.b.a r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.reward.presenter.b.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.content.Context c(com.kwad.components.ad.reward.presenter.b.a r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j d(com.kwad.components.ad.reward.presenter.b.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r0.oW
            if (r0 == 0) goto L12
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r0.oW
            com.kwad.components.offline.api.core.adlive.listener.AdLiveHandleClickListener r1 = r2.tK
            r0.registerClickListener(r1)
        L12:
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r0.oW
            if (r0 == 0) goto L12
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r0.oW
            com.kwad.components.offline.api.core.adlive.listener.AdLiveHandleClickListener r1 = r2.tK
            r0.unRegisterClickListener(r1)
        L12:
            return
    }
}
