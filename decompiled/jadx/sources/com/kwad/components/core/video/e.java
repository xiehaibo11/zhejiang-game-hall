package com.kwad.components.core.video;

import android.content.Context;
import android.os.Message;
import android.view.View;
import com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.bm;
import com.kwad.sdk.utils.bn;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public final class e extends a implements bn.a {
    private View SM;
    private final AtomicBoolean SN;
    private boolean SO;
    private boolean SP;
    private final KsAdVideoPlayConfig dJ;
    private final bn gx;

    public e(Context context, AdTemplate adTemplate, com.kwad.sdk.core.video.videoview.c cVar, KsAdVideoPlayConfig ksAdVideoPlayConfig) {
        super(context, adTemplate, cVar);
        this.gx = new bn(this);
        this.SN = new AtomicBoolean(true);
        this.SP = true;
        this.SM = this;
        this.dJ = ksAdVideoPlayConfig;
    }

    private void aa() {
        if (this.SN.getAndSet(false)) {
            com.kwad.sdk.core.e.c.i("FeedVideoPlayerController", "onViewAttached");
            this.gx.sendEmptyMessage(1);
        }
    }

    private boolean qT() {
        KsAdVideoPlayConfig ksAdVideoPlayConfig = this.dJ;
        if (ksAdVideoPlayConfig instanceof KSAdVideoPlayConfigImpl) {
            KSAdVideoPlayConfigImpl kSAdVideoPlayConfigImpl = (KSAdVideoPlayConfigImpl) ksAdVideoPlayConfig;
            if (kSAdVideoPlayConfigImpl.getVideoAutoPlayType() == 1) {
                return ag.isNetworkConnected(this.mContext);
            }
            if (kSAdVideoPlayConfigImpl.getVideoAutoPlayType() == 2) {
                return ag.isWifiConnected(this.mContext);
            }
            if (kSAdVideoPlayConfigImpl.getVideoAutoPlayType() == 3) {
                return false;
            }
            if (kSAdVideoPlayConfigImpl.getDataFlowAutoStartValue() != 0) {
                return kSAdVideoPlayConfigImpl.isDataFlowAutoStart() ? ag.isNetworkConnected(this.mContext) : ag.isWifiConnected(this.mContext);
            }
        }
        if (com.kwad.sdk.core.response.b.a.bI(this.mAdInfo)) {
            return ag.isNetworkConnected(this.mContext);
        }
        if (com.kwad.sdk.core.response.b.a.bJ(this.mAdInfo)) {
            return ag.isWifiConnected(this.mContext);
        }
        return false;
    }

    @Override // com.kwad.sdk.utils.bn.a
    public final void a(Message message) {
        if (!this.RD && message.what == 1) {
            if (!bm.o(this.SM, 30)) {
                qA();
            } else if (!this.SO) {
                qy();
            }
            this.gx.sendEmptyMessageDelayed(1, 500L);
        }
    }

    public final void ab() {
        if (this.SN.getAndSet(true)) {
            return;
        }
        com.kwad.sdk.core.e.c.i("FeedVideoPlayerController", "onViewDetached");
        this.gx.removeCallbacksAndMessages(null);
        if (this.SP) {
            release();
        } else {
            this.awf.pause();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected final void onAttachedToWindow() {
        super.onAttachedToWindow();
        com.kwad.sdk.core.e.c.i("FeedVideoPlayerController", "onAttachedToWindow");
        aa();
    }

    @Override // android.view.ViewGroup, android.view.View
    protected final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        com.kwad.sdk.core.e.c.i("FeedVideoPlayerController", "onDetachedFromWindow");
        ab();
    }

    @Override // android.view.View
    public final void onFinishTemporaryDetach() {
        super.onFinishTemporaryDetach();
        com.kwad.sdk.core.e.c.i("FeedVideoPlayerController", "onFinishTemporaryDetach");
        aa();
    }

    @Override // android.view.View
    public final void onStartTemporaryDetach() {
        super.onStartTemporaryDetach();
        com.kwad.sdk.core.e.c.i("FeedVideoPlayerController", "onStartTemporaryDetach");
        ab();
    }

    @Override // android.view.View
    public final void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
    }

    @Override // android.view.View
    protected final void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
    }

    public final void qS() {
        this.gx.removeCallbacksAndMessages(null);
        if (this.SP) {
            release();
        } else {
            this.awf.pause();
        }
    }

    public final void qU() {
        this.awf.pause();
        this.SO = true;
    }

    public final void qV() {
        qy();
        this.SO = false;
    }

    public final void qW() {
        this.SO = false;
    }

    @Override // com.kwad.components.core.video.a
    protected final void qy() {
        if (!this.awf.isIdle()) {
            if (this.awf.isPaused() || this.awf.Dw()) {
                qz();
                this.awf.restart();
                return;
            }
            return;
        }
        if (!ag.isNetworkConnected(this.mContext)) {
            qu();
            return;
        }
        qv();
        if (!this.RD && !qT() && !this.RB) {
            qw();
        } else {
            qz();
            this.awf.start();
        }
    }

    public final void setAutoRelease(boolean z) {
        this.SP = z;
    }
}
