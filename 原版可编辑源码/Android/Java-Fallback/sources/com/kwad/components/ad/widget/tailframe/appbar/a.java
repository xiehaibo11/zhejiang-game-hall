package com.kwad.components.ad.widget.tailframe.appbar;

public abstract class a extends android.widget.LinearLayout {
    protected com.kwad.components.ad.widget.AppScoreView Bd;
    protected com.kwad.components.core.page.widget.TextProgressBar Bt;
    protected android.view.View GA;
    protected android.widget.TextView HJ;
    protected android.widget.TextView dx;
    protected android.animation.ValueAnimator iI;
    protected android.widget.ImageView lh;
    protected android.widget.TextView li;
    protected com.kwad.components.ad.i.a yA;
    private java.lang.Runnable yB;
    protected android.view.View yp;
    protected android.widget.Button yq;
    protected android.widget.Button yr;
    protected com.kwad.components.ad.widget.KsAppTagsView yx;



    public a(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public a(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public a(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.m.l.wrapContextIfNeed(r1)
            r0.<init>(r1, r2, r3)
            r0.initView()
            return
    }

    private void initView() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            int r1 = r3.getLayoutId()
            android.view.View r0 = com.kwad.sdk.m.l.inflate(r0, r1, r3)
            r3.GA = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_icon
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.lh = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_name
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.li = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_score
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.ad.widget.AppScoreView r0 = (com.kwad.components.ad.widget.AppScoreView) r0
            r3.Bd = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_download_count
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.dx = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_introduce
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.HJ = r0
            int r0 = com.kwad.sdk.R.id.ksad_download_bar
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.core.page.widget.TextProgressBar r0 = (com.kwad.components.core.page.widget.TextProgressBar) r0
            r3.Bt = r0
            android.content.Context r1 = r3.getContext()
            r2 = 1098907648(0x41800000, float:16.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            float r1 = (float) r1
            r0.setTextDimen(r1)
            com.kwad.components.core.page.widget.TextProgressBar r0 = r3.Bt
            r1 = -1
            r0.setTextColor(r1)
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_tags
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.ad.widget.KsAppTagsView r0 = (com.kwad.components.ad.widget.KsAppTagsView) r0
            r3.yx = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_action
            android.view.View r0 = r3.findViewById(r0)
            android.widget.Button r0 = (android.widget.Button) r0
            r3.yq = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_start
            android.view.View r0 = r3.findViewById(r0)
            android.widget.Button r0 = (android.widget.Button) r0
            r3.yr = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_container
            android.view.View r0 = r3.findViewById(r0)
            r3.yp = r0
            com.kwad.components.ad.i.a r0 = new com.kwad.components.ad.i.a
            android.view.View r1 = r3.GA
            r0.<init>(r1)
            r3.yA = r0
            return
    }

    private void mc() {
            r3 = this;
            android.animation.ValueAnimator r0 = r3.iI
            if (r0 == 0) goto Lb
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto Lb
            return
        Lb:
            r0 = 3
            float[] r0 = new float[r0]
            r0 = {x0038: FILL_ARRAY_DATA , data: [1065353216, 1067030938, 1065353216} // fill-array
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            r3.iI = r0
            r1 = 1200(0x4b0, double:5.93E-321)
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r3.iI
            r1 = -1
            r0.setRepeatCount(r1)
            android.animation.ValueAnimator r0 = r3.iI
            r1 = 1
            r0.setRepeatMode(r1)
            android.animation.ValueAnimator r0 = r3.iI
            com.kwad.components.ad.widget.tailframe.appbar.a$2 r1 = new com.kwad.components.ad.widget.tailframe.appbar.a$2
            r1.<init>(r3)
            r0.addUpdateListener(r1)
            android.animation.ValueAnimator r0 = r3.iI
            r0.start()
            return
    }

    public void b(com.kwad.sdk.core.response.model.AdTemplate r8) {
            r7 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r8)
            boolean r1 = com.kwad.sdk.core.response.b.d.s(r8)
            r2 = 12
            if (r1 == 0) goto L13
            android.widget.ImageView r1 = r7.lh
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.ct(r0)
            goto L19
        L13:
            android.widget.ImageView r1 = r7.lh
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.bQ(r0)
        L19:
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r1, r3, r8, r2)
            android.widget.TextView r1 = r7.li
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.bO(r0)
            r1.setText(r2)
            boolean r1 = com.kwad.sdk.core.response.b.d.s(r8)
            r2 = 1
            r3 = 8
            r4 = 0
            if (r1 != 0) goto L68
            float r1 = com.kwad.sdk.core.response.b.a.as(r0)
            r5 = 1077936128(0x40400000, float:3.0)
            int r5 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r5 < 0) goto L3b
            r5 = r2
            goto L3c
        L3b:
            r5 = r4
        L3c:
            if (r5 == 0) goto L49
            com.kwad.components.ad.widget.AppScoreView r5 = r7.Bd
            r5.setScore(r1)
            com.kwad.components.ad.widget.AppScoreView r1 = r7.Bd
            r1.setVisibility(r4)
            goto L4e
        L49:
            com.kwad.components.ad.widget.AppScoreView r1 = r7.Bd
            r1.setVisibility(r3)
        L4e:
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.ar(r0)
            boolean r5 = android.text.TextUtils.isEmpty(r1)
            if (r5 != 0) goto L63
            android.widget.TextView r5 = r7.dx
            r5.setText(r1)
            android.widget.TextView r1 = r7.dx
            r1.setVisibility(r4)
            goto L68
        L63:
            android.widget.TextView r1 = r7.dx
            r1.setVisibility(r3)
        L68:
            android.widget.TextView r1 = r7.HJ
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.an(r0)
            r1.setText(r0)
            boolean r0 = com.kwad.sdk.core.response.b.d.s(r8)
            if (r0 == 0) goto Lc0
            com.kwad.components.core.page.widget.TextProgressBar r0 = r7.Bt
            r0.setVisibility(r3)
            android.view.View r0 = r7.yp
            r0.setVisibility(r4)
            android.widget.Button r0 = r7.yr
            java.lang.String r1 = "查看详情"
            r0.setText(r1)
            android.widget.Button r0 = r7.yq
            java.lang.Object[] r1 = new java.lang.Object[r2]
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r5 = com.kwad.sdk.core.config.d.zC()
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            r1[r4] = r2
            java.lang.String r2 = "浏览详情页%s秒，领取奖励"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.setText(r1)
            boolean r0 = r8.mRewardVerifyCalled
            if (r0 != 0) goto Ldd
            java.lang.Runnable r0 = r7.yB
            if (r0 != 0) goto Lb6
            com.kwad.components.ad.widget.tailframe.appbar.a$1 r0 = new com.kwad.components.ad.widget.tailframe.appbar.a$1
            r0.<init>(r7)
            r7.yB = r0
        Lb6:
            android.view.View r0 = r7.yp
            java.lang.Runnable r1 = r7.yB
            r5 = 1600(0x640, double:7.905E-321)
            r0.postDelayed(r1, r5)
            goto Ldd
        Lc0:
            com.kwad.components.core.page.widget.TextProgressBar r0 = r7.Bt
            r0.setVisibility(r4)
            android.view.View r0 = r7.yp
            r0.setVisibility(r3)
            java.lang.Runnable r0 = r7.yB
            if (r0 == 0) goto Ld6
            android.view.View r1 = r7.yp
            r1.removeCallbacks(r0)
            r0 = 0
            r7.yB = r0
        Ld6:
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r8)
            r7.z(r0)
        Ldd:
            boolean r0 = com.kwad.sdk.core.response.b.d.s(r8)
            if (r0 == 0) goto Lfd
            java.util.List r8 = com.kwad.sdk.core.response.b.c.bX(r8)
            int r0 = r8.size()
            if (r0 <= 0) goto Lf3
            com.kwad.components.ad.widget.KsAppTagsView r0 = r7.yx
            r0.setVisibility(r4)
            goto Lf8
        Lf3:
            com.kwad.components.ad.widget.KsAppTagsView r0 = r7.yx
            r0.setVisibility(r3)
        Lf8:
            com.kwad.components.ad.widget.KsAppTagsView r0 = r7.yx
            r0.setAppTags(r8)
        Lfd:
            return
    }

    public android.view.View getBtnInstallContainer() {
            r1 = this;
            android.view.View r0 = r1.yp
            return r0
    }

    public abstract int getLayoutId();

    public com.kwad.components.core.page.widget.TextProgressBar getTextProgressBar() {
            r1 = this;
            com.kwad.components.core.page.widget.TextProgressBar r0 = r1.Bt
            return r0
    }

    public final void kq() {
            r2 = this;
            android.animation.ValueAnimator r0 = r2.iI
            if (r0 == 0) goto L14
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L14
            android.animation.ValueAnimator r0 = r2.iI
            r0.cancel()
            android.animation.ValueAnimator r0 = r2.iI
            r0.end()
        L14:
            java.lang.Runnable r0 = r2.yB
            if (r0 == 0) goto L20
            android.view.View r1 = r2.yp
            r1.removeCallbacks(r0)
            r0 = 0
            r2.yB = r0
        L20:
            com.kwad.components.ad.i.a r0 = r2.yA
            r0.lN()
            return
    }

    public final void z(com.kwad.sdk.core.response.model.AdInfo r2) {
            r1 = this;
            int r2 = r2.status
            r0 = 1
            if (r2 == r0) goto Lf
            r0 = 2
            if (r2 == r0) goto Lf
            r0 = 3
            if (r2 == r0) goto Lf
            r1.mc()
            return
        Lf:
            r1.kq()
            return
    }
}
