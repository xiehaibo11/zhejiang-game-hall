package com.kwad.components.ad.reward.presenter.b;

import com.kwad.components.offline.api.core.adlive.listener.AdLiveHandleClickListener;

public final class a extends com.kwad.components.ad.reward.presenter.a {
    private AdLiveHandleClickListener tK = new AdLiveHandleClickListener() {
        @Override
        public final void handleAdLiveClick(int i) {
            if (i == 1) {
                a.this.qx.a(1, a.this.getContext(), 115, 1);
            } else if (i == 2) {
                a.this.qx.a(1, a.this.getContext(), 117, 1);
            }
        }
    };

    @Override
    public final void ah() {
        super.ah();
        if (this.qx.oW != null) {
            this.qx.oW.registerClickListener(this.tK);
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        if (this.qx.oW != null) {
            this.qx.oW.unRegisterClickListener(this.tK);
        }
    }
}
