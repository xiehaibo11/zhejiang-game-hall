package com.kwad.components.ad.reward.m;

public final class c extends com.kwad.sdk.core.download.a.a implements com.kwad.sdk.widget.c {
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.ad.i.a yA;
    private java.lang.Runnable yB;
    private android.view.View yo;
    private android.view.View yp;
    private android.widget.Button yq;
    private android.widget.Button yr;
    private android.widget.TextView ys;
    private android.widget.ImageView yt;
    private android.widget.TextView yu;
    private android.widget.TextView yv;
    private com.kwad.sdk.widget.KSRatingBar yw;
    private com.kwad.components.ad.widget.KsAppTagsView yx;
    private com.kwad.components.ad.reward.m.c.a yy;
    private volatile boolean yz;


    public interface a {
        void c(boolean r1, int r2);
    }

    static class b {
        private java.lang.String appName;
        private java.lang.String ql;
        private java.lang.String qm;
        private float yD;
        private java.util.List<java.lang.String> yE;
        private int yF;
        private java.lang.String yG;

        b() {
                r1 = this;
                r1.<init>()
                r0 = 15
                r1.yF = r0
                return
        }

        public static com.kwad.components.ad.reward.m.c.b A(com.kwad.sdk.core.response.model.AdTemplate r3) {
                if (r3 != 0) goto L4
                r3 = 0
                return r3
            L4:
                com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
                com.kwad.components.ad.reward.m.c$b r1 = new com.kwad.components.ad.reward.m.c$b
                r1.<init>()
                boolean r2 = com.kwad.sdk.core.response.b.d.s(r3)
                if (r2 == 0) goto L18
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.ap(r0)
                goto L1c
            L18:
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.ao(r0)
            L1c:
                r1.appName = r2
                float r2 = com.kwad.sdk.core.response.b.a.au(r0)
                r1.yD = r2
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.an(r0)
                r1.qm = r2
                boolean r2 = com.kwad.sdk.core.response.b.d.s(r3)
                if (r2 == 0) goto L35
                java.lang.String r0 = com.kwad.sdk.core.response.b.a.ct(r0)
                goto L39
            L35:
                java.lang.String r0 = com.kwad.sdk.core.response.b.a.bQ(r0)
            L39:
                r1.ql = r0
                com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
                boolean r0 = com.kwad.components.ad.reward.a.b.k(r0)
                boolean r0 = com.kwad.sdk.core.response.b.d.f(r3, r0)
                if (r0 == 0) goto L52
                int r0 = com.kwad.components.ad.reward.a.b.gE()
                r1.yF = r0
                java.lang.String r0 = "安装并体验%s秒  可领取奖励"
                goto L5a
            L52:
                int r0 = com.kwad.sdk.core.config.d.zC()
                r1.yF = r0
                java.lang.String r0 = "浏览详情页%s秒，领取奖励"
            L5a:
                r1.yG = r0
                java.util.List r3 = com.kwad.sdk.core.response.b.c.bX(r3)
                r1.yE = r3
                return r1
        }

        static java.lang.String a(com.kwad.components.ad.reward.m.c.b r0) {
                java.lang.String r0 = r0.ql
                return r0
        }

        static java.lang.String b(com.kwad.components.ad.reward.m.c.b r0) {
                java.lang.String r0 = r0.appName
                return r0
        }

        static java.lang.String c(com.kwad.components.ad.reward.m.c.b r0) {
                java.lang.String r0 = r0.qm
                return r0
        }

        static float d(com.kwad.components.ad.reward.m.c.b r0) {
                float r0 = r0.yD
                return r0
        }

        static java.util.List e(com.kwad.components.ad.reward.m.c.b r0) {
                java.util.List<java.lang.String> r0 = r0.yE
                return r0
        }

        public final java.lang.String jW() {
                r4 = this;
                java.lang.String r0 = r4.yG
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]
                int r2 = r4.yF
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r3 = 0
                r1[r3] = r2
                java.lang.String r0 = java.lang.String.format(r0, r1)
                return r0
        }
    }

    public c(android.view.View r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.yz = r0
            r1.yo = r2
            r1.initView()
            com.kwad.components.ad.i.a r0 = new com.kwad.components.ad.i.a
            r0.<init>(r2)
            r1.yA = r0
            return
    }

    static android.view.View a(com.kwad.components.ad.reward.m.c r0) {
            android.view.View r0 = r0.yp
            return r0
    }

    static boolean b(com.kwad.components.ad.reward.m.c r0) {
            boolean r0 = r0.yz
            return r0
    }

    static com.kwad.components.ad.i.a c(com.kwad.components.ad.reward.m.c r0) {
            com.kwad.components.ad.i.a r0 = r0.yA
            return r0
    }

    private void c(android.view.View r2, boolean r3) {
            r1 = this;
            int r2 = r2.getId()
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_container
            if (r2 == r0) goto L10
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_action
            if (r2 == r0) goto L10
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_start
            if (r2 != r0) goto L21
        L10:
            java.lang.String r2 = "ApkInfoCardViewHelper"
            java.lang.String r0 = "onClick install"
            com.kwad.sdk.core.e.c.d(r2, r0)
            r2 = 1
            r1.yz = r2
            com.kwad.components.ad.reward.m.c$a r0 = r1.yy
            if (r0 == 0) goto L21
            r0.c(r3, r2)
        L21:
            return
    }

    private void initView() {
            r2 = this;
            android.view.View r0 = r2.yo
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_action
            android.view.View r0 = r0.findViewById(r1)
            android.widget.Button r0 = (android.widget.Button) r0
            r2.yq = r0
            android.view.View r0 = r2.yo
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_start
            android.view.View r0 = r0.findViewById(r1)
            android.widget.Button r0 = (android.widget.Button) r0
            r2.yr = r0
            android.view.View r0 = r2.yo
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_container
            android.view.View r0 = r0.findViewById(r1)
            r2.yp = r0
            android.view.View r0 = r2.yo
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_icon
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.yt = r0
            android.view.View r0 = r2.yo
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_name
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.ys = r0
            android.view.View r0 = r2.yo
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_desc
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.yu = r0
            android.view.View r0 = r2.yo
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_score
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.widget.KSRatingBar r0 = (com.kwad.sdk.widget.KSRatingBar) r0
            r2.yw = r0
            android.view.View r0 = r2.yo
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_tags
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.widget.KsAppTagsView r0 = (com.kwad.components.ad.widget.KsAppTagsView) r0
            r2.yx = r0
            return
    }

    @Override
    public final void a(android.view.View r2) {
            r1 = this;
            r0 = 1
            r1.c(r2, r0)
            return
    }

    public final void a(com.kwad.components.ad.reward.m.c.a r1) {
            r0 = this;
            r0.yy = r1
            return
    }

    public final void a(com.kwad.components.core.e.d.c r1) {
            r0 = this;
            r0.mApkDownloadHelper = r1
            if (r1 == 0) goto L7
            r1.b(r0)
        L7:
            return
    }

    @Override
    public final void b(android.view.View r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            if (r0 == 0) goto Lc
            r0 = 0
            r1.c(r2, r0)
        Lc:
            return
    }

    public final void c(com.kwad.sdk.core.response.model.AdTemplate r5, boolean r6) {
            r4 = this;
            r4.mAdTemplate = r5
            com.kwad.components.ad.reward.m.c$b r0 = com.kwad.components.ad.reward.m.c.b.A(r5)
            if (r0 != 0) goto L9
            return
        L9:
            android.widget.ImageView r1 = r4.yt
            java.lang.String r2 = com.kwad.components.ad.reward.m.c.b.a(r0)
            r3 = 12
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r1, r2, r5, r3)
            android.widget.TextView r1 = r4.ys
            java.lang.String r2 = com.kwad.components.ad.reward.m.c.b.b(r0)
            r1.setText(r2)
            android.widget.TextView r1 = r4.yu
            java.lang.String r2 = com.kwad.components.ad.reward.m.c.b.c(r0)
            r1.setText(r2)
            com.kwad.sdk.widget.KSRatingBar r1 = r4.yw
            float r2 = com.kwad.components.ad.reward.m.c.b.d(r0)
            r1.setStar(r2)
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r5)
            boolean r1 = com.kwad.components.ad.reward.a.b.k(r1)
            boolean r1 = com.kwad.sdk.core.response.b.d.f(r5, r1)
            r2 = 0
            r3 = 8
            if (r1 == 0) goto L53
            android.widget.Button r1 = r4.yr
            com.kwad.sdk.core.response.model.AdInfo r5 = com.kwad.sdk.core.response.b.d.cg(r5)
            java.lang.String r5 = com.kwad.sdk.core.response.b.a.aw(r5)
            r1.setText(r5)
            com.kwad.sdk.widget.KSRatingBar r5 = r4.yw
            r5.setVisibility(r2)
            goto L5f
        L53:
            android.widget.Button r5 = r4.yr
            java.lang.String r1 = "查看详情"
            r5.setText(r1)
            com.kwad.sdk.widget.KSRatingBar r5 = r4.yw
            r5.setVisibility(r3)
        L5f:
            android.widget.Button r5 = r4.yq
            java.lang.String r1 = r0.jW()
            r5.setText(r1)
            android.widget.Button r5 = r4.yq
            r1 = 1
            r5.setClickable(r1)
            android.widget.Button r5 = r4.yr
            r5.setClickable(r1)
            android.view.View r5 = r4.yp
            r5.setClickable(r1)
            com.kwad.sdk.widget.f r5 = new com.kwad.sdk.widget.f
            android.widget.Button r1 = r4.yq
            r5.<init>(r1, r4)
            com.kwad.sdk.widget.f r5 = new com.kwad.sdk.widget.f
            android.widget.Button r1 = r4.yr
            r5.<init>(r1, r4)
            com.kwad.sdk.widget.f r5 = new com.kwad.sdk.widget.f
            android.view.View r1 = r4.yp
            r5.<init>(r1, r4)
            java.util.List r5 = com.kwad.components.ad.reward.m.c.b.e(r0)
            if (r6 == 0) goto Lb6
            int r6 = r5.size()
            if (r6 != 0) goto Lb6
            android.widget.TextView r6 = r4.yu
            r6.setVisibility(r3)
            android.view.View r6 = r4.yo
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_desc_2
            android.view.View r6 = r6.findViewById(r1)
            android.widget.TextView r6 = (android.widget.TextView) r6
            r4.yv = r6
            r6.setVisibility(r2)
            android.widget.TextView r6 = r4.yv
            java.lang.String r0 = com.kwad.components.ad.reward.m.c.b.c(r0)
            r6.setText(r0)
        Lb6:
            int r6 = r5.size()
            if (r6 != 0) goto Lc1
            com.kwad.components.ad.widget.KsAppTagsView r6 = r4.yx
            r6.setVisibility(r3)
        Lc1:
            com.kwad.components.ad.widget.KsAppTagsView r6 = r4.yx
            r6.setAppTags(r5)
            java.lang.Runnable r5 = r4.yB
            if (r5 != 0) goto Ld1
            com.kwad.components.ad.reward.m.c$1 r5 = new com.kwad.components.ad.reward.m.c$1
            r5.<init>(r4)
            r4.yB = r5
        Ld1:
            android.view.View r5 = r4.yp
            java.lang.Runnable r6 = r4.yB
            r0 = 1600(0x640, double:7.905E-321)
            r5.postDelayed(r6, r0)
            return
    }

    public final void i(java.lang.String r2, int r3) {
            r1 = this;
            android.widget.Button r0 = r1.yr
            if (r0 == 0) goto Lb
            if (r2 == 0) goto Lb
            if (r3 == 0) goto Lb
            r0.setText(r2)
        Lb:
            return
    }

    public final void jU() {
            r2 = this;
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            if (r0 == 0) goto L7
            r0.c(r2)
        L7:
            com.kwad.components.ad.i.a r0 = r2.yA
            if (r0 == 0) goto Le
            r0.jU()
        Le:
            android.view.View r0 = r2.yp
            if (r0 == 0) goto L1c
            java.lang.Runnable r1 = r2.yB
            if (r1 == 0) goto L1c
            r0.removeCallbacks(r1)
            r0 = 0
            r2.yB = r0
        L1c:
            return
    }

    public final void jV() {
            r1 = this;
            com.kwad.components.ad.i.a r0 = r1.yA
            r0.lO()
            return
    }

    @Override
    public final void onDownloadFailed() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aw(r0)
            goto Lf
        Ld:
            java.lang.String r0 = "立即下载"
        Lf:
            android.widget.Button r1 = r2.yr
            r1.setText(r0)
            return
    }

    @Override
    public final void onDownloadFinished() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 != 0) goto L7
            java.lang.String r0 = ""
            goto Lb
        L7:
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aM(r0)
        Lb:
            android.widget.Button r1 = r2.yr
            r1.setText(r0)
            return
    }

    @Override
    public final void onDownloadStarted() {
            r0 = this;
            return
    }

    @Override
    public final void onIdle() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aw(r0)
            goto Lf
        Ld:
            java.lang.String r0 = "立即下载"
        Lf:
            android.widget.Button r1 = r2.yr
            r1.setText(r0)
            return
    }

    @Override
    public final void onInstalled() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.U(r0)
            goto Lf
        Ld:
            java.lang.String r0 = "立即打开"
        Lf:
            android.widget.Button r1 = r2.yr
            r1.setText(r0)
            return
    }

    @Override
    public final void onPaused(int r2) {
            r1 = this;
            super.onPaused(r2)
            if (r2 == 0) goto L13
            com.kwad.components.ad.i.a r0 = r1.yA
            r0.lO()
            android.widget.Button r0 = r1.yr
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.cw(r2)
            r0.setText(r2)
        L13:
            return
    }

    @Override
    public final void onProgressUpdate(int r2) {
            r1 = this;
            if (r2 == 0) goto L10
            com.kwad.components.ad.i.a r0 = r1.yA
            r0.lO()
            android.widget.Button r0 = r1.yr
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.cv(r2)
            r0.setText(r2)
        L10:
            return
    }
}
