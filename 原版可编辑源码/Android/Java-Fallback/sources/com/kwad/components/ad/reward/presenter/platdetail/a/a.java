package com.kwad.components.ad.reward.presenter.platdetail.a;

public final class a extends com.kwad.components.ad.reward.presenter.a implements android.view.View.OnClickListener, com.kwad.sdk.utils.bn.a {
    private static final java.lang.String[] vg = null;
    private com.kwad.components.core.webview.b.e.e gt;
    private android.widget.TextView gv;
    private com.kwad.sdk.utils.bn gx;
    private boolean gy;
    private long gz;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener;
    private final com.kwad.components.core.video.l mVideoPlayStateListener;
    private android.widget.TextView vc;
    private android.widget.ImageView vd;
    private android.view.View ve;
    private boolean vf;
    private boolean vh;







    static {
            java.lang.String r0 = "%ss后获得奖励1"
            java.lang.String r1 = "已获得奖励1/2"
            java.lang.String r2 = "已获得全部奖励"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            com.kwad.components.ad.reward.presenter.platdetail.a.a.vg = r0
            return
    }

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.vf = r0
            r1.vh = r0
            com.kwad.components.ad.reward.presenter.platdetail.a.a$1 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.a$1
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.reward.presenter.platdetail.a.a$2 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.a$2
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            com.kwad.components.ad.reward.presenter.platdetail.a.a$3 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.a$3
            r0.<init>(r1)
            r1.mRewardVerifyListener = r0
            return
    }

    static long a(com.kwad.components.ad.reward.presenter.platdetail.a.a r0, long r1) {
            r0.gz = r1
            return r1
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.platdetail.a.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void a(long r3, long r5, long r7) {
            r2 = this;
            r0 = 800(0x320, double:3.953E-321)
            long r0 = r5 - r0
            long r0 = r0 - r7
            int r7 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r7 >= 0) goto L23
            long r5 = r5 - r3
            float r3 = (float) r5
            r4 = 1148846080(0x447a0000, float:1000.0)
            float r3 = r3 / r4
            r4 = 1056964608(0x3f000000, float:0.5)
            float r3 = r3 + r4
            int r3 = (int) r3
            r2.w(r3)
            com.kwad.components.ad.reward.j r4 = r2.qx
            com.kwad.components.ad.reward.m.p r4 = r4.pt
            if (r4 == 0) goto L22
            com.kwad.components.ad.reward.j r4 = r2.qx
            com.kwad.components.ad.reward.m.p r4 = r4.pt
            r4.U(r3)
        L22:
            return
        L23:
            com.kwad.components.ad.reward.j r3 = r2.qx
            r4 = 1
            r3.pp = r4
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            boolean r3 = com.kwad.components.ad.reward.j.t(r3)
            if (r3 == 0) goto L80
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            boolean r3 = com.kwad.components.ad.reward.j.r(r3)
            if (r3 == 0) goto L50
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.k.b.a r3 = r3.pA
            if (r3 == 0) goto L50
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.k.b.a r3 = r3.pA
            boolean r3 = r3.jH()
            if (r3 != 0) goto L6f
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.k.b.a r3 = r3.pA
            r3.jG()
            goto L6f
        L50:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            boolean r3 = com.kwad.components.ad.reward.j.s(r3)
            if (r3 == 0) goto L6f
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.k.a.a r3 = r3.pB
            if (r3 == 0) goto L6f
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.k.a.a r3 = r3.pB
            boolean r3 = r3.jH()
            if (r3 != 0) goto L6f
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.k.a.a r3 = r3.pB
            r3.jG()
        L6f:
            boolean r3 = r2.vh
            if (r3 != 0) goto L94
            android.widget.TextView r3 = r2.vc
            java.lang.String[] r5 = com.kwad.components.ad.reward.presenter.platdetail.a.a.vg
            r4 = r5[r4]
            r3.setText(r4)
            r2.is()
            return
        L80:
            r2.notifyRewardVerify()
            r2.ir()
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.m.p r3 = r3.pt
            if (r3 == 0) goto L94
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.m.p r3 = r3.pt
            r4 = 0
            r3.U(r4)
        L94:
            return
    }

    static boolean a(com.kwad.components.ad.reward.presenter.platdetail.a.a r0, boolean r1) {
            r1 = 1
            r0.vh = r1
            return r1
    }

    static void b(com.kwad.components.ad.reward.presenter.platdetail.a.a r0) {
            r0.bU()
            return
    }

    private void bU() {
            r7 = this;
            com.kwad.components.ad.reward.j r0 = r7.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r7.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r7.mAdInfo = r0
            com.kwad.components.ad.reward.j r0 = r7.qx
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r7.mApkDownloadHelper = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = r7.mAdInfo
            long r0 = com.kwad.sdk.core.response.b.a.H(r0)
            com.kwad.sdk.core.response.model.AdInfo r2 = r7.mAdInfo
            long r0 = com.kwad.components.ad.reward.j.a(r0, r2)
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            com.kwad.sdk.core.response.model.AdTemplate r2 = r7.mAdTemplate
            boolean r2 = com.kwad.components.ad.reward.j.t(r2)
            r3 = 8
            r4 = 0
            if (r2 == 0) goto L52
            android.view.View r2 = r7.ve
            r2.setVisibility(r4)
            android.view.View r2 = r7.ve
            r2.setOnClickListener(r7)
            android.widget.TextView r2 = r7.vc
            java.lang.String[] r5 = com.kwad.components.ad.reward.presenter.platdetail.a.a.vg
            r5 = r5[r4]
            r6 = 1
            java.lang.Object[] r6 = new java.lang.Object[r6]
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r6[r4] = r0
            java.lang.String r0 = java.lang.String.format(r5, r6)
            r2.setText(r0)
            android.widget.TextView r0 = r7.gv
            r0.setVisibility(r3)
            goto L6c
        L52:
            android.view.View r2 = r7.ve
            r2.setVisibility(r3)
            android.widget.TextView r2 = r7.gv
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.setText(r0)
            android.widget.TextView r0 = r7.gv
            r0.setVisibility(r4)
            android.widget.TextView r0 = r7.gv
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.setAlpha(r1)
        L6c:
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r7.mRewardVerifyListener
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r7.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r7.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo c(com.kwad.components.ad.reward.presenter.platdetail.a.a r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static boolean d(com.kwad.components.ad.reward.presenter.platdetail.a.a r0) {
            boolean r0 = r0.gy
            return r0
    }

    static com.kwad.sdk.utils.bn e(com.kwad.components.ad.reward.presenter.platdetail.a.a r0) {
            com.kwad.sdk.utils.bn r0 = r0.gx
            return r0
    }

    static android.widget.TextView f(com.kwad.components.ad.reward.presenter.platdetail.a.a r0) {
            android.widget.TextView r0 = r0.vc
            return r0
    }

    static android.widget.TextView g(com.kwad.components.ad.reward.presenter.platdetail.a.a r0) {
            android.widget.TextView r0 = r0.gv
            return r0
    }

    static android.widget.ImageView h(com.kwad.components.ad.reward.presenter.platdetail.a.a r0) {
            android.widget.ImageView r0 = r0.vd
            return r0
    }

    static void i(com.kwad.components.ad.reward.presenter.platdetail.a.a r0) {
            r0.notifyAdClick()
            return
    }

    private void ir() {
            r2 = this;
            boolean r0 = r2.vf
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.vf = r0
            android.widget.ImageView r0 = r2.vd
            r1 = 0
            r0.setAlpha(r1)
            android.widget.ImageView r0 = r2.vd
            r1 = 0
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r2.vd
            r0.setOnClickListener(r2)
            r0 = 2
            float[] r0 = new float[r0]
            r0 = {x0038: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            com.kwad.components.ad.reward.presenter.platdetail.a.a$4 r1 = new com.kwad.components.ad.reward.presenter.platdetail.a.a$4
            r1.<init>(r2)
            r0.addListener(r1)
            com.kwad.components.ad.reward.presenter.platdetail.a.a$5 r1 = new com.kwad.components.ad.reward.presenter.platdetail.a.a$5
            r1.<init>(r2)
            r0.addUpdateListener(r1)
            r0.start()
            return
    }

    private void is() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.ad.reward.e.d r0 = r0.mAdRewardStepListener
            if (r0 == 0) goto Ld
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.ad.reward.e.d r0 = r0.mAdRewardStepListener
            r0.fy()
        Ld:
            return
    }

    static java.lang.String[] it() {
            java.lang.String[] r0 = com.kwad.components.ad.reward.presenter.platdetail.a.a.vg
            return r0
    }

    private void notifyAdClick() {
            r5 = this;
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            com.kwad.sdk.core.report.j r0 = r0.c(r1)
            r1 = 41
            com.kwad.sdk.core.report.j r0 = r0.cg(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.components.ad.reward.j r2 = r5.qx
            org.json.JSONObject r2 = r2.mReportExtData
            java.lang.String r3 = "native_id"
            java.lang.String r4 = "playTopBar-style1"
            com.kwad.components.ad.reward.i.b.a(r1, r3, r4, r0, r2)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.bE()
            return
    }

    private void notifyRewardVerify() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.onRewardVerify()
            return
    }

    private void w(int r5) {
            r4 = this;
            com.kwad.components.ad.reward.j r0 = r4.qx
            r0.pC = r5
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            boolean r0 = com.kwad.components.ad.reward.j.t(r0)
            if (r0 == 0) goto L28
            boolean r0 = r4.vh
            if (r0 != 0) goto L31
            android.widget.TextView r0 = r4.vc
            java.lang.String[] r1 = com.kwad.components.ad.reward.presenter.platdetail.a.a.vg
            r2 = 0
            r1 = r1[r2]
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r3[r2] = r5
            java.lang.String r5 = java.lang.String.format(r1, r3)
            r0.setText(r5)
            return
        L28:
            android.widget.TextView r0 = r4.gv
            java.lang.String r5 = java.lang.String.valueOf(r5)
            r0.setText(r5)
        L31:
            return
    }

    public final void a(long r11, long r13) {
            r10 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r10.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.aG(r0)
            r1 = 0
            if (r0 == 0) goto L15
            com.kwad.components.core.r.a r0 = com.kwad.components.core.r.a.pS()
            int r0 = r0.pT()
            if (r0 != 0) goto L15
            r0 = 1
            goto L16
        L15:
            r0 = r1
        L16:
            if (r0 == 0) goto L1f
            com.kwad.sdk.core.response.model.AdInfo r0 = r10.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.aE(r0)
            goto L25
        L1f:
            com.kwad.sdk.core.response.model.AdInfo r0 = r10.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.aC(r0)
        L25:
            com.kwad.components.ad.reward.j r2 = r10.qx
            boolean r2 = r2.pm
            if (r2 == 0) goto L2d
            r1 = 1000(0x3e8, float:1.401E-42)
        L2d:
            int r0 = r0 * r1
            long r8 = (long) r0
            com.kwad.components.ad.reward.j r1 = r10.qx
            r2 = r13
            r4 = r11
            r6 = r8
            com.kwad.components.ad.reward.n.a(r1, r2, r4, r6)
            r1 = r10
            r1.a(r2, r4, r6)
            return
    }

    @Override
    public final void a(android.os.Message r8) {
            r7 = this;
            int r8 = r8.what
            r0 = 1
            if (r8 != r0) goto L33
            com.kwad.components.ad.reward.j r8 = r7.qx
            boolean r8 = r8.gb()
            r1 = 500(0x1f4, double:2.47E-321)
            if (r8 != 0) goto L2e
            com.kwad.components.ad.reward.j r8 = r7.qx
            boolean r8 = r8.ga()
            if (r8 == 0) goto L18
            goto L2e
        L18:
            long r3 = r7.gz
            long r3 = r3 + r1
            r7.gz = r3
            com.kwad.sdk.core.response.model.AdInfo r8 = r7.mAdInfo
            long r3 = com.kwad.sdk.core.response.b.a.Y(r8)
            long r5 = r7.gz
            r7.a(r3, r5)
            com.kwad.sdk.utils.bn r8 = r7.gx
            r8.sendEmptyMessageDelayed(r0, r1)
            goto L33
        L2e:
            com.kwad.sdk.utils.bn r8 = r7.gx
            r8.sendEmptyMessageDelayed(r0, r1)
        L33:
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
            boolean r0 = com.kwad.components.ad.reward.j.b(r0)
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
            if (r0 == 0) goto L37
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            long r0 = com.kwad.sdk.core.response.b.a.Y(r0)
            float r0 = (float) r0
            r1 = 1148846080(0x447a0000, float:1000.0)
            float r0 = r0 / r1
            int r0 = (int) r0
            r2.w(r0)
        L37:
            return
    }

    @Override
    public final void onClick(android.view.View r3) {
            r2 = this;
            android.widget.ImageView r0 = r2.vd
            if (r3 == r0) goto L8
            android.view.View r0 = r2.ve
            if (r3 != r0) goto L3a
        L8:
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            android.content.Context r3 = r3.getContext()
            r0.<init>(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            com.kwad.components.core.e.d.a$a r3 = r0.P(r3)
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r3 = r3.b(r0)
            r0 = 2
            com.kwad.components.core.e.d.a$a r3 = r3.ao(r0)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            long r0 = r0.getPlayDuration()
            com.kwad.components.core.e.d.a$a r3 = r3.s(r0)
            com.kwad.components.ad.reward.presenter.platdetail.a.a$6 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.a$6
            r0.<init>(r2)
            com.kwad.components.core.e.d.a$a r3 = r3.a(r0)
            com.kwad.components.core.e.d.a.a(r3)
        L3a:
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
            int r0 = com.kwad.sdk.R.id.ksad_detail_reward_icon
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.vd = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_deep_task_count_down
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.vc = r0
            int r0 = com.kwad.sdk.R.id.ksad_detail_reward_deep_task_view
            android.view.View r0 = r1.findViewById(r0)
            r1.ve = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r2.mRewardVerifyListener
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            android.widget.ImageView r0 = r2.vd
            r1 = 8
            r0.setVisibility(r1)
            android.view.View r0 = r2.ve
            r0.setVisibility(r1)
            r0 = 0
            r2.vf = r0
            r2.vh = r0
            r2.gy = r0
            return
    }
}
