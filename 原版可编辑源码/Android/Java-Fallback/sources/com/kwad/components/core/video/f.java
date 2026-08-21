package com.kwad.components.core.video;

public final class f extends com.kwad.components.core.video.a implements com.kwad.sdk.utils.bn.a {
    private boolean DV;
    private android.view.View SM;
    private final java.util.concurrent.atomic.AtomicBoolean SN;
    private boolean SQ;
    private final com.kwad.sdk.utils.bn gx;

    public interface a extends com.kwad.components.core.video.a.c {
        void onVideoPlayError(int r1, int r2);
    }

    public f(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.video.videoview.c r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.utils.bn r1 = new com.kwad.sdk.utils.bn
            r1.<init>(r0)
            r0.gx = r1
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r2 = 1
            r1.<init>(r2)
            r0.SN = r1
            r1 = 0
            r0.DV = r1
            r0.SQ = r1
            r0.SM = r0
            return
    }

    private void aa() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.SN
            r1 = 0
            boolean r0 = r0.getAndSet(r1)
            if (r0 == 0) goto L16
            java.lang.String r0 = "InterstitialVideoPlayerController"
            java.lang.String r1 = "onViewAttached"
            com.kwad.sdk.core.e.c.i(r0, r1)
            com.kwad.sdk.utils.bn r0 = r2.gx
            r1 = 1
            r0.sendEmptyMessage(r1)
        L16:
            return
    }

    private void ab() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.SN
            r1 = 1
            boolean r0 = r0.getAndSet(r1)
            if (r0 != 0) goto L19
            java.lang.String r0 = "InterstitialVideoPlayerController"
            java.lang.String r1 = "onViewDetached"
            com.kwad.sdk.core.e.c.i(r0, r1)
            com.kwad.sdk.utils.bn r0 = r2.gx
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            r2.release()
        L19:
            return
    }

    private void qX() {
            r1 = this;
            r0 = 0
            r1.DV = r0
            return
    }

    @Override
    public final void a(android.os.Message r4) {
            r3 = this;
            boolean r0 = r3.DV
            if (r0 == 0) goto L5
            return
        L5:
            int r4 = r4.what
            r0 = 1
            if (r4 != r0) goto L22
            android.view.View r4 = r3.SM
            r1 = 70
            boolean r4 = com.kwad.sdk.utils.bm.o(r4, r1)
            if (r4 == 0) goto L18
            r3.qy()
            goto L1b
        L18:
            r3.qA()
        L1b:
            com.kwad.sdk.utils.bn r4 = r3.gx
            r1 = 500(0x1f4, double:2.47E-321)
            r4.sendEmptyMessageDelayed(r0, r1)
        L22:
            return
    }

    @Override
    protected final void eP() {
            r1 = this;
            boolean r0 = r1.SQ
            if (r0 == 0) goto L7
            super.eP()
        L7:
            return
    }

    @Override
    protected final void onAttachedToWindow() {
            r2 = this;
            super.onAttachedToWindow()
            java.lang.String r0 = "InterstitialVideoPlayerController"
            java.lang.String r1 = "onAttachedToWindow"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r2.qX()
            r2.aa()
            return
    }

    @Override
    protected final void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            java.lang.String r0 = "InterstitialVideoPlayerController"
            java.lang.String r1 = "onDetachedFromWindow"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r2.ab()
            return
    }

    @Override
    public final void onFinishTemporaryDetach() {
            r2 = this;
            super.onFinishTemporaryDetach()
            java.lang.String r0 = "InterstitialVideoPlayerController"
            java.lang.String r1 = "onFinishTemporaryDetach"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r2.aa()
            return
    }

    @Override
    public final void onStartTemporaryDetach() {
            r2 = this;
            super.onStartTemporaryDetach()
            java.lang.String r0 = "InterstitialVideoPlayerController"
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

    @Override
    public final void qA() {
            r0 = this;
            super.qA()
            return
    }

    @Override
    protected final void qs() {
            r2 = this;
            super.qs()
            android.widget.ImageView r0 = r2.na
            if (r0 == 0) goto Le
            android.widget.ImageView r0 = r2.na
            int r1 = com.kwad.sdk.R.drawable.ksad_interstitial_video_play
            r0.setImageResource(r1)
        Le:
            android.widget.TextView r0 = r2.nb
            if (r0 == 0) goto L19
            android.widget.TextView r0 = r2.nb
            r1 = 8
            r0.setVisibility(r1)
        L19:
            return
    }

    @Override
    public final void qy() {
            r0 = this;
            super.qy()
            return
    }

    @Override
    public final void release() {
            r1 = this;
            super.release()
            r0 = 1
            r1.DV = r0
            return
    }
}
