package com.kwad.components.ad.reward.presenter;

import com.kwad.components.offline.api.core.adlive.listener.AdLiveCallerContextListener;

public final class j extends a {
    private final AdLiveCallerContextListener sj = new AdLiveCallerContextListener() {
        @Override
        public final boolean isCloseDialogShowing() {
            return com.kwad.components.ad.reward.j.e(j.this.qx);
        }
    };
    private final com.kwad.components.core.l.a.a sk = new com.kwad.components.core.l.a.b() {
        @Override
        public final void c(com.kwad.components.core.n.c cVar) {
            super.c(cVar);
            if (j.this.qx.oV.jR()) {
                j.this.qx.oV.jS().onResume();
                if (com.kwad.components.core.t.a.al(j.this.qx.mContext).qh()) {
                    j.this.qx.c(false, false);
                }
            }
        }

        @Override
        public final void d(com.kwad.components.core.n.c cVar) {
            super.d(cVar);
            if (j.this.qx.oV.jR()) {
                j.this.qx.oV.jS().onPause();
            }
        }
    };

    @Override
    public final void ah() {
        super.ah();
        if (this.qx.oV.jR()) {
            this.qx.oV.jS().registerAdLiveCallerContextListener(this.sj);
            this.qx.Lg.add(this.sk);
        }
    }

    @Override
    public final void onDestroy() {
        super.onDestroy();
        if (this.qx.oV.jR()) {
            this.qx.oV.jS().unRegisterAdLiveCallerContextListener(this.sj);
            this.qx.Lg.remove(this.sk);
        }
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
    }
}
