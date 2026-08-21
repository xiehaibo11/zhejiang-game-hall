package com.kwad.components.core.video;

public final class e extends com.kwad.components.core.video.a implements com.kwad.sdk.utils.bn.a {
    private android.view.View SM;
    private final java.util.concurrent.atomic.AtomicBoolean SN;
    private boolean SO;
    private boolean SP;
    private final com.kwad.sdk.api.KsAdVideoPlayConfig dJ;
    private final com.kwad.sdk.utils.bn gx;

    public e(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.video.videoview.c r3, com.kwad.sdk.api.KsAdVideoPlayConfig r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.utils.bn r1 = new com.kwad.sdk.utils.bn
            r1.<init>(r0)
            r0.gx = r1
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r2 = 1
            r1.<init>(r2)
            r0.SN = r1
            r0.SP = r2
            r0.SM = r0
            r0.dJ = r4
            return
    }

    private void aa() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.SN
            r1 = 0
            boolean r0 = r0.getAndSet(r1)
            if (r0 == 0) goto L16
            java.lang.String r0 = "FeedVideoPlayerController"
            java.lang.String r1 = "onViewAttached"
            com.kwad.sdk.core.e.c.i(r0, r1)
            com.kwad.sdk.utils.bn r0 = r2.gx
            r1 = 1
            r0.sendEmptyMessage(r1)
        L16:
            return
    }

    private boolean qT() {
            r4 = this;
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r4.dJ
            boolean r1 = r0 instanceof com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl
            r2 = 0
            if (r1 == 0) goto L47
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r0 = (com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl) r0
            int r1 = r0.getVideoAutoPlayType()
            r3 = 1
            if (r1 != r3) goto L17
            android.content.Context r0 = r4.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            return r0
        L17:
            int r1 = r0.getVideoAutoPlayType()
            r3 = 2
            if (r1 != r3) goto L25
            android.content.Context r0 = r4.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isWifiConnected(r0)
            return r0
        L25:
            int r1 = r0.getVideoAutoPlayType()
            r3 = 3
            if (r1 != r3) goto L2d
            return r2
        L2d:
            int r1 = r0.getDataFlowAutoStartValue()
            if (r1 == 0) goto L47
            boolean r0 = r0.isDataFlowAutoStart()
            if (r0 == 0) goto L40
            android.content.Context r0 = r4.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            return r0
        L40:
            android.content.Context r0 = r4.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isWifiConnected(r0)
            return r0
        L47:
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.bI(r0)
            if (r0 == 0) goto L56
            android.content.Context r0 = r4.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            return r0
        L56:
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.bJ(r0)
            if (r0 == 0) goto L65
            android.content.Context r0 = r4.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isWifiConnected(r0)
            return r0
        L65:
            return r2
    }

    @Override
    public final void a(android.os.Message r4) {
            r3 = this;
            boolean r0 = r3.RD
            if (r0 == 0) goto L5
            return
        L5:
            int r4 = r4.what
            r0 = 1
            if (r4 != r0) goto L26
            android.view.View r4 = r3.SM
            r1 = 30
            boolean r4 = com.kwad.sdk.utils.bm.o(r4, r1)
            if (r4 == 0) goto L1c
            boolean r4 = r3.SO
            if (r4 != 0) goto L1f
            r3.qy()
            goto L1f
        L1c:
            r3.qA()
        L1f:
            com.kwad.sdk.utils.bn r4 = r3.gx
            r1 = 500(0x1f4, double:2.47E-321)
            r4.sendEmptyMessageDelayed(r0, r1)
        L26:
            return
    }

    public final void ab() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.SN
            r1 = 1
            boolean r0 = r0.getAndSet(r1)
            if (r0 != 0) goto L23
            java.lang.String r0 = "FeedVideoPlayerController"
            java.lang.String r1 = "onViewDetached"
            com.kwad.sdk.core.e.c.i(r0, r1)
            com.kwad.sdk.utils.bn r0 = r2.gx
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            boolean r0 = r2.SP
            if (r0 == 0) goto L1e
            r2.release()
            return
        L1e:
            com.kwad.sdk.core.video.videoview.c r0 = r2.awf
            r0.pause()
        L23:
            return
    }

    @Override
    protected final void onAttachedToWindow() {
            r2 = this;
            super.onAttachedToWindow()
            java.lang.String r0 = "FeedVideoPlayerController"
            java.lang.String r1 = "onAttachedToWindow"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r2.aa()
            return
    }

    @Override
    protected final void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            java.lang.String r0 = "FeedVideoPlayerController"
            java.lang.String r1 = "onDetachedFromWindow"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r2.ab()
            return
    }

    @Override
    public final void onFinishTemporaryDetach() {
            r2 = this;
            super.onFinishTemporaryDetach()
            java.lang.String r0 = "FeedVideoPlayerController"
            java.lang.String r1 = "onFinishTemporaryDetach"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r2.aa()
            return
    }

    @Override
    public final void onStartTemporaryDetach() {
            r2 = this;
            super.onStartTemporaryDetach()
            java.lang.String r0 = "FeedVideoPlayerController"
            java.lang.String r1 = "onStartTemporaryDetach"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r2.ab()
            return
    }

    @Override
    public final void onWindowFocusChanged(boolean r1) {
            r0 = this;
            super.onWindowFocusChanged(r1)
            return
    }

    @Override
    protected final void onWindowVisibilityChanged(int r1) {
            r0 = this;
            super.onWindowVisibilityChanged(r1)
            return
    }

    public final void qS() {
            r2 = this;
            com.kwad.sdk.utils.bn r0 = r2.gx
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            boolean r0 = r2.SP
            if (r0 == 0) goto Le
            r2.release()
            return
        Le:
            com.kwad.sdk.core.video.videoview.c r0 = r2.awf
            r0.pause()
            return
    }

    public final void qU() {
            r1 = this;
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            r0.pause()
            r0 = 1
            r1.SO = r0
            return
    }

    public final void qV() {
            r1 = this;
            r1.qy()
            r0 = 0
            r1.SO = r0
            return
    }

    public final void qW() {
            r1 = this;
            r0 = 0
            r1.SO = r0
            return
    }

    @Override
    protected final void qy() {
            r1 = this;
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            boolean r0 = r0.isIdle()
            if (r0 == 0) goto L34
            android.content.Context r0 = r1.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            if (r0 != 0) goto L14
            r1.qu()
            return
        L14:
            r1.qv()
            boolean r0 = r1.RD
            if (r0 == 0) goto L24
        L1b:
            r1.qz()
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            r0.start()
            return
        L24:
            boolean r0 = r1.qT()
            if (r0 == 0) goto L2b
            goto L1b
        L2b:
            boolean r0 = r1.RB
            if (r0 == 0) goto L30
            goto L1b
        L30:
            r1.qw()
            return
        L34:
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            boolean r0 = r0.isPaused()
            if (r0 != 0) goto L44
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            boolean r0 = r0.Dw()
            if (r0 == 0) goto L4c
        L44:
            r1.qz()
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            r0.restart()
        L4c:
            return
    }

    public final void setAutoRelease(boolean r1) {
            r0 = this;
            r0.SP = r1
            return
    }
}
