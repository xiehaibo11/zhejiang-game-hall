package com.kwad.components.ad.fullscreen.c.a;

public final class a extends com.kwad.components.ad.reward.presenter.a implements com.kwad.sdk.utils.bn.a {
    private com.kwad.components.core.webview.b.e.e gt;
    private android.widget.TextView gv;
    private android.view.View gw;
    private com.kwad.sdk.utils.bn gx;
    private boolean gy;
    private long gz;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.components.core.video.l mVideoPlayStateListener;



    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.fullscreen.c.a.a$1 r0 = new com.kwad.components.ad.fullscreen.c.a.a$1
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.fullscreen.c.a.a$2 r0 = new com.kwad.components.ad.fullscreen.c.a.a$2
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static long a(com.kwad.components.ad.fullscreen.c.a.a r0, long r1) {
            r0.gz = r1
            return r1
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.fullscreen.c.a.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void a(long r1, long r3) {
            r0 = this;
            long r1 = r1 - r3
            float r1 = (float) r1
            r2 = 1148846080(0x447a0000, float:1000.0)
            float r1 = r1 / r2
            r2 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r2
            int r1 = (int) r1
            r2 = 0
            int r1 = java.lang.Math.max(r1, r2)
            r0.w(r1)
            return
    }

    static void a(com.kwad.components.ad.fullscreen.c.a.a r0, long r1, long r3) {
            r0.a(r1, r3)
            return
    }

    static boolean a(com.kwad.components.ad.fullscreen.c.a.a r0, boolean r1) {
            r1 = 1
            r0.gy = r1
            return r1
    }

    static void b(com.kwad.components.ad.fullscreen.c.a.a r0) {
            r0.bU()
            return
    }

    private void bU() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r2.mAdInfo = r0
            android.widget.TextView r1 = r2.gv
            int r0 = com.kwad.sdk.core.response.b.a.G(r0)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.setText(r0)
            android.widget.TextView r0 = r2.gv
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    static boolean c(com.kwad.components.ad.fullscreen.c.a.a r0) {
            boolean r0 = r0.gy
            return r0
    }

    static com.kwad.sdk.utils.bn d(com.kwad.components.ad.fullscreen.c.a.a r0) {
            com.kwad.sdk.utils.bn r0 = r0.gx
            return r0
    }

    static com.kwad.components.ad.reward.j e(com.kwad.components.ad.fullscreen.c.a.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static long f(com.kwad.components.ad.fullscreen.c.a.a r2) {
            long r0 = r2.gz
            return r0
    }

    static android.widget.TextView g(com.kwad.components.ad.fullscreen.c.a.a r0) {
            android.widget.TextView r0 = r0.gv
            return r0
    }

    static android.view.View h(com.kwad.components.ad.fullscreen.c.a.a r0) {
            android.view.View r0 = r0.gw
            return r0
    }

    static android.content.Context i(com.kwad.components.ad.fullscreen.c.a.a r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void w(int r2) {
            r1 = this;
            android.widget.TextView r0 = r1.gv
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.setText(r2)
            return
    }

    @Override
    public final void a(android.os.Message r8) {
            r7 = this;
            int r8 = r8.what
            r0 = 1
            if (r8 != r0) goto L51
            com.kwad.components.ad.reward.j r8 = r7.qx
            boolean r8 = r8.gb()
            r1 = 500(0x1f4, double:2.47E-321)
            if (r8 != 0) goto L4c
            com.kwad.components.ad.reward.j r8 = r7.qx
            boolean r8 = r8.ga()
            if (r8 == 0) goto L18
            goto L4c
        L18:
            long r3 = r7.gz
            long r3 = r3 + r1
            r7.gz = r3
            r5 = 30000(0x7530, double:1.4822E-319)
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 <= 0) goto L43
            android.widget.TextView r8 = r7.gv
            r0 = 8
            r8.setVisibility(r0)
            android.view.View r8 = r7.gw
            android.view.ViewGroup$LayoutParams r8 = r8.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r8 = (android.view.ViewGroup.MarginLayoutParams) r8
            android.content.Context r0 = r7.getContext()
            r1 = 0
            int r0 = com.kwad.sdk.d.a.a.a(r0, r1)
            r8.leftMargin = r0
            android.view.View r0 = r7.gw
            r0.setLayoutParams(r8)
            return
        L43:
            r7.a(r5, r3)
            com.kwad.sdk.utils.bn r8 = r7.gx
            r8.sendEmptyMessageDelayed(r0, r1)
            goto L51
        L4c:
            com.kwad.sdk.utils.bn r8 = r7.gx
            r8.sendEmptyMessageDelayed(r0, r1)
        L51:
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.sdk.utils.bn r0 = new com.kwad.sdk.utils.bn
            r0.<init>(r2)
            r2.gx = r0
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.c(r0)
            if (r0 == 0) goto L1c
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            return
        L1c:
            r2.bU()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 == 0) goto L2e
            r0 = 30
            r2.w(r0)
        L2e:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_count_down
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.gv = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_sound_switch
            android.view.View r0 = r1.findViewById(r0)
            r1.gw = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            r0 = 0
            r2.gy = r0
            com.kwad.sdk.utils.bn r0 = r2.gx
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            return
    }
}
