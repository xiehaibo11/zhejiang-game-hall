package com.kwad.components.ad.splashscreen.c.a;

public final class d extends com.kwad.components.ad.splashscreen.c.e implements com.kwad.sdk.core.h.c {
    private com.kwad.components.ad.splashscreen.widget.CloseCountDownView Ej;
    private android.widget.ImageView Em;
    private android.widget.TextView En;
    private android.widget.TextView Eo;
    private android.view.ViewGroup Er;
    private android.widget.ImageView Es;
    private com.kwad.components.core.widget.KsLogoView Et;
    private android.widget.TextView Eu;
    private android.widget.TextView Ev;



    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(android.widget.ImageView r2, java.lang.String r3, com.kwad.sdk.core.response.model.AdTemplate r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            r1 = 20
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.setBlurRadius(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0 = r0.build()
            com.kwad.components.ad.splashscreen.c.a.d$2 r1 = new com.kwad.components.ad.splashscreen.c.a.d$2
            r1.<init>()
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r2, r3, r4, r0, r1)
            return
    }

    static void a(com.kwad.components.ad.splashscreen.c.a.d r0, java.lang.String r1) {
            r0.ac(r1)
            return
    }

    private void ac(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.Eu
            r0.setText(r2)
            return
    }

    private void initView() {
            r1 = this;
            int r0 = com.kwad.sdk.R.id.ksad_splash_endcard_view_stub
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            if (r0 == 0) goto Lf
            android.view.View r0 = r0.inflate()
            goto L15
        Lf:
            int r0 = com.kwad.sdk.R.id.ksad_splash_end_card_native_root
            android.view.View r0 = r1.findViewById(r0)
        L15:
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.Er = r0
            int r0 = com.kwad.sdk.R.id.ksad_splash_end_card_native_bg
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.Es = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_endcard_icon
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.Em = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_endcard_appname
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.En = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_endcard_appdesc
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Eo = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_endcard_logo
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r1.Et = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_btn_title
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Eu = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_btn_sub_title
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Ev = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_endcard_close_root
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView r0 = (com.kwad.components.ad.splashscreen.widget.CloseCountDownView) r0
            r1.Ej = r0
            return
    }

    private void lw() {
            r3 = this;
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 != 0) goto Lf
            return
        Lf:
            com.kwad.components.ad.splashscreen.c.a.d$1 r0 = new com.kwad.components.ad.splashscreen.c.a.d$1
            android.content.Context r1 = r3.getContext()
            com.kwad.components.ad.splashscreen.h r2 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            r0.<init>(r3, r1, r2)
            com.kwad.components.ad.splashscreen.h r1 = r3.CM
            com.kwad.components.core.e.d.c r1 = r1.mApkDownloadHelper
            if (r1 == 0) goto L29
            com.kwad.components.ad.splashscreen.h r1 = r3.CM
            com.kwad.components.core.e.d.c r1 = r1.mApkDownloadHelper
            r1.b(r0)
        L29:
            return
    }

    private void lx() {
            r6 = this;
            android.view.ViewGroup r0 = r6.Er
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.splashscreen.h r0 = r6.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            android.widget.ImageView r2 = r6.Es
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r3 = com.kwad.sdk.core.response.b.a.aM(r0)
            java.lang.String r3 = r3.materialUrl
            com.kwad.components.ad.splashscreen.h r4 = r6.CM
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            a(r2, r3, r4)
            android.widget.ImageView r2 = r6.Em
            int r3 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            r2.setImageResource(r3)
            android.widget.ImageView r2 = r6.Em
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.bQ(r0)
            com.kwad.components.ad.splashscreen.h r4 = r6.CM
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            r5 = 24
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r2, r3, r4, r5)
            android.widget.TextView r2 = r6.En
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.bO(r0)
            r2.setText(r3)
            android.widget.TextView r2 = r6.Eo
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.an(r0)
            r2.setText(r3)
            com.kwad.components.core.widget.KsLogoView r2 = r6.Et
            com.kwad.components.ad.splashscreen.h r3 = r6.CM
            com.kwad.sdk.core.response.model.AdTemplate r3 = r3.mAdTemplate
            r2.aa(r3)
            boolean r2 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r2 != 0) goto L68
            android.widget.TextView r2 = r6.Eu
            java.lang.String r3 = "点击查看"
            r2.setText(r3)
            android.widget.TextView r2 = r6.Ev
            r2.setVisibility(r1)
            android.widget.TextView r1 = r6.Ev
            java.lang.String r2 = "跳转详情页/第三方应用"
            r1.setText(r2)
            goto L6b
        L68:
            r6.u(r0)
        L6b:
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView r1 = r6.Ej
            r1.a(r0)
            return
    }

    private void u(com.kwad.sdk.core.response.model.AdInfo r4) {
            r3 = this;
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            if (r0 != 0) goto L7
            return
        L7:
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            int r0 = r0.nw()
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = com.kwad.sdk.core.response.b.b.cV(r4)
            r2 = 8
            if (r0 == r2) goto L21
            r2 = 12
            if (r0 == r2) goto L1e
            java.lang.String r0 = r1.adActionDescription
            goto L23
        L1e:
            java.lang.String r0 = r1.openAppLabel
            goto L23
        L21:
            java.lang.String r0 = r1.installAppLabel
        L23:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2f
            android.widget.TextView r4 = r3.Eu
            r4.setText(r0)
            return
        L2f:
            android.widget.TextView r0 = r3.Eu
            java.lang.String r4 = com.kwad.sdk.core.response.b.a.aw(r4)
            r0.setText(r4)
            return
    }

    @Override
    public final void aK() {
            r1 = this;
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView r0 = r1.Ej
            r0.aK()
            return
    }

    @Override
    public final void aL() {
            r1 = this;
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView r0 = r1.Ej
            r0.aL()
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.a(r3)
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r1 = 87
            r2 = 0
            com.kwad.sdk.core.report.a.b(r0, r1, r2)
            r3.lw()
            r3.lx()
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            r0.initView()
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView r0 = r1.Ej
            r0.bd()
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.b(r1)
            return
    }
}
