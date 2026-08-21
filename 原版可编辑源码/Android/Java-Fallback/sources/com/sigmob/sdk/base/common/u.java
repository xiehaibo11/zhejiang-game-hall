package com.sigmob.sdk.base.common;

public class u extends com.sigmob.sdk.base.common.i {
    com.sigmob.sdk.base.views.e f;
    private int g;
    private com.sigmob.sdk.base.models.BaseAdUnit h;
    private android.widget.RelativeLayout i;
    private android.widget.TextView j;
    private android.widget.ImageView k;
    private java.lang.String l;







    public u(android.app.Activity r1, com.sigmob.sdk.base.models.BaseAdUnit r2, android.os.Bundle r3, android.os.Bundle r4, java.lang.String r5, com.sigmob.sdk.base.common.j r6) {
            r0 = this;
            r0.<init>(r1, r5, r6)
            r0.h = r2
            if (r3 == 0) goto L15
            java.lang.String r1 = "land_page_url"
            java.io.Serializable r1 = r3.getSerializable(r1)
            boolean r2 = r1 instanceof com.sigmob.sdk.base.models.BaseAdUnit
            if (r2 == 0) goto L15
            com.sigmob.sdk.base.models.BaseAdUnit r1 = (com.sigmob.sdk.base.models.BaseAdUnit) r1
            r0.h = r1
        L15:
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r0.h
            if (r1 == 0) goto L5f
            com.sigmob.sdk.base.models.rtb.Ad r1 = r1.getAd()
            java.lang.Integer r1 = r1.display_orientation
            int r1 = r1.intValue()
            r2 = 1
            if (r1 == r2) goto L33
            r2 = 2
            if (r1 == r2) goto L31
            r1 = 3
            java.lang.String r2 = "REQUESTED_ORIENTATION"
            int r1 = r3.getInt(r2, r1)
            goto L34
        L31:
            r1 = 6
            goto L34
        L33:
            r1 = 7
        L34:
            r0.g = r1
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r0.h
            int r1 = r1.getAd_type()
            r2 = 5
            if (r1 == r2) goto L48
            com.sigmob.sdk.base.common.j r1 = r0.h()
            int r2 = r0.g
            r1.a(r2)
        L48:
            android.app.Activity r1 = r0.k()
            r2 = 8
            r1.requestWindowFeature(r2)
            android.app.Activity r1 = r0.k()
            android.view.Window r1 = r1.getWindow()
            r2 = 1024(0x400, float:1.435E-42)
            r1.addFlags(r2)
            goto L6b
        L5f:
            java.lang.String r1 = "com.sigmob.action.interstitial.fail"
            r0.a(r1)
            com.sigmob.sdk.base.common.j r1 = r0.h()
            r1.a()
        L6b:
            return
    }

    static com.sigmob.sdk.base.models.BaseAdUnit a(com.sigmob.sdk.base.common.u r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.h
            return r0
    }

    static java.lang.String a(com.sigmob.sdk.base.common.u r0, java.lang.String r1) {
            r0.l = r1
            return r1
    }

    private void a() {
            r4 = this;
            com.sigmob.sdk.base.views.e r0 = r4.f
            r1 = 0
            if (r0 != 0) goto L3c
            com.sigmob.sdk.base.views.e r0 = new com.sigmob.sdk.base.views.e     // Catch: java.lang.Throwable -> L2f
            android.app.Activity r2 = r4.k()     // Catch: java.lang.Throwable -> L2f
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L2f
            r4.f = r0     // Catch: java.lang.Throwable -> L2f
            r0.setScrollBarStyle(r1)     // Catch: java.lang.Throwable -> L2f
            com.sigmob.sdk.base.views.e r0 = r4.f     // Catch: java.lang.Throwable -> L2f
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.h     // Catch: java.lang.Throwable -> L2f
            r0.setAdUnit(r2)     // Catch: java.lang.Throwable -> L2f
            com.sigmob.sdk.base.views.e r0 = r4.f     // Catch: java.lang.Throwable -> L2f
            com.sigmob.sdk.base.common.u$1 r2 = new com.sigmob.sdk.base.common.u$1     // Catch: java.lang.Throwable -> L2f
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L2f
            r0.setWebViewClient(r2)     // Catch: java.lang.Throwable -> L2f
            com.sigmob.sdk.base.views.e r0 = r4.f     // Catch: java.lang.Throwable -> L2f
            com.sigmob.sdk.base.common.u$2 r2 = new com.sigmob.sdk.base.common.u$2     // Catch: java.lang.Throwable -> L2f
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L2f
            r0.setWebChromeClient(r2)     // Catch: java.lang.Throwable -> L2f
            goto L3c
        L2f:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            com.sigmob.sdk.base.common.j r0 = r4.d
            r0.a()
        L3c:
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            r2 = -1
            r0.<init>(r2, r2)
            android.widget.LinearLayout r2 = new android.widget.LinearLayout
            android.app.Activity r3 = r4.k()
            r2.<init>(r3)
            com.sigmob.sdk.base.views.e r3 = r4.f
            r2.addView(r3, r1, r0)
            com.sigmob.sdk.base.common.j r0 = r4.d
            r0.onSetContentView(r2)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.h
            com.sigmob.sdk.base.models.rtb.Ad r0 = r0.getAd()
            if (r0 == 0) goto L81
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.h
            com.sigmob.sdk.base.models.rtb.Ad r0 = r0.getAd()
            com.sigmob.sdk.base.models.rtb.AdSetting r0 = r0.ad_setting
            if (r0 == 0) goto L81
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.h
            com.sigmob.sdk.base.models.rtb.Ad r0 = r0.getAd()
            com.sigmob.sdk.base.models.rtb.AdSetting r0 = r0.ad_setting
            java.lang.Boolean r0 = r0.disable_download_listener
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto L81
            com.sigmob.sdk.base.views.e r0 = r4.f
            com.sigmob.sdk.base.common.u$3 r1 = new com.sigmob.sdk.base.common.u$3
            r1.<init>(r4)
            r0.setDownloadListener(r1)
        L81:
            com.sigmob.sdk.base.views.e r0 = r4.f
            com.sigmob.sdk.base.common.u$4 r1 = new com.sigmob.sdk.base.common.u$4
            r1.<init>(r4)
            r0.setOnTouchListener(r1)
            return
    }

    private void a(java.lang.String r2, java.lang.String r3, com.sigmob.sdk.base.models.BaseAdUnit r4, java.lang.String r5) {
            r1 = this;
            com.sigmob.sdk.base.common.u$5 r0 = new com.sigmob.sdk.base.common.u$5
            r0.<init>(r1, r5)
            com.sigmob.sdk.base.common.z.a(r3, r2, r4, r0)
            return
    }

    static java.lang.String b(com.sigmob.sdk.base.common.u r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static android.widget.TextView c(com.sigmob.sdk.base.common.u r0) {
            android.widget.TextView r0 = r0.j
            return r0
    }

    private void l() {
            r6 = this;
            android.widget.RelativeLayout r0 = r6.i
            if (r0 != 0) goto La4
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r2 = 13
            r0.addRule(r2)
            r3 = 1101004800(0x41a00000, float:20.0)
            android.content.Context r4 = r6.b
            int r3 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r4)
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r4.<init>(r3, r3)
            r5 = 15
            r4.addRule(r5)
            r5 = 9
            r4.addRule(r5)
            int r3 = r3 / 2
            r5 = 0
            r4.setMargins(r3, r3, r5, r5)
            android.widget.ImageView r3 = new android.widget.ImageView
            android.content.Context r5 = r6.b
            r3.<init>(r5)
            r6.k = r3
            com.sigmob.sdk.base.views.o r5 = com.sigmob.sdk.base.views.o.h
            android.graphics.Bitmap r5 = r5.a()
            r3.setImageBitmap(r5)
            android.widget.ImageView r3 = r6.k
            android.widget.ImageView$ScaleType r5 = android.widget.ImageView.ScaleType.CENTER_CROP
            r3.setScaleType(r5)
            android.widget.ImageView r3 = r6.k
            r5 = 1
            r3.setClickable(r5)
            android.widget.ImageView r3 = r6.k
            int r5 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r3.setId(r5)
            android.widget.ImageView r3 = r6.k
            com.sigmob.sdk.base.common.u$6 r5 = new com.sigmob.sdk.base.common.u$6
            r5.<init>(r6)
            r3.setOnClickListener(r5)
            android.widget.RelativeLayout r3 = new android.widget.RelativeLayout
            android.content.Context r5 = r6.i()
            r3.<init>(r5)
            r6.i = r3
            r3.setLayoutParams(r0)
            android.widget.RelativeLayout r0 = r6.i
            r0.setBackgroundColor(r1)
            android.widget.RelativeLayout r0 = r6.i
            android.widget.ImageView r1 = r6.k
            r0.addView(r1, r4)
            android.widget.TextView r0 = new android.widget.TextView
            android.content.Context r1 = r6.b
            r0.<init>(r1)
            r6.j = r0
            r1 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0.setTextColor(r1)
            android.widget.TextView r0 = r6.j
            r1 = 1099956224(0x41900000, float:18.0)
            r0.setTextSize(r1)
            android.widget.TextView r0 = r6.j
            r1 = 8
            r0.setVisibility(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r0.addRule(r2)
            android.widget.RelativeLayout r1 = r6.i
            android.widget.TextView r2 = r6.j
            r1.addView(r2, r0)
        La4:
            return
    }

    private void m() {
            r3 = this;
            android.app.ActionBar$LayoutParams r0 = new android.app.ActionBar$LayoutParams
            r1 = -1
            r2 = 17
            r0.<init>(r1, r1, r2)
            android.app.Activity r1 = r3.k()
            android.app.ActionBar r1 = r1.getActionBar()
            if (r1 == 0) goto L2a
            r3.l()
            android.widget.RelativeLayout r2 = r3.i
            r1.setCustomView(r2, r0)
            r0 = 16
            r1.setDisplayOptions(r0)
            r0 = 1
            r1.setDisplayShowCustomEnabled(r0)
            r0 = 0
            r1.setDisplayShowHomeEnabled(r0)
            r1.setDisplayShowTitleEnabled(r0)
        L2a:
            return
    }

    @Override
    public void a(android.content.res.Configuration r1) {
            r0 = this;
            return
    }

    @Override
    public void a(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @Override
    public void b() {
            r3 = this;
            int r0 = com.sigmob.sdk.base.d.c()
            if (r0 <= 0) goto L12
            android.app.Activity r1 = r3.k()
            android.content.res.Resources$Theme r1 = r1.getTheme()
            r2 = 1
            r1.applyStyle(r0, r2)
        L12:
            r3.m()
            r3.a()
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.h
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r0.getMaterial()
            java.lang.String r0 = r0.landing_page
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.h
            com.sigmob.sdk.base.models.SigMacroCommon r1 = r1.getMacroCommon()
            java.lang.String r0 = r1.macroProcess(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.h
            java.lang.String r1 = r1.getLandUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L42
            com.sigmob.sdk.base.views.e r0 = r3.f
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.h
            java.lang.String r1 = r1.getLandUrl()
            r0.loadUrl(r1)
            goto L47
        L42:
            com.sigmob.sdk.base.views.e r1 = r3.f
            r1.loadUrl(r0)
        L47:
            java.lang.String r0 = "com.sigmob.action.loadpage.show"
            r3.a(r0)
            return
    }

    @Override
    public void c() {
            r0 = this;
            return
    }

    @Override
    public void d() {
            r1 = this;
            com.sigmob.sdk.base.views.e r0 = r1.f
            if (r0 == 0) goto L7
            r0.resumeTimers()
        L7:
            return
    }

    @Override
    public void e() {
            r2 = this;
            java.lang.String r0 = "com.sigmob.action.loadpage.dismiss"
            r2.a(r0)
            android.widget.ImageView r0 = r2.k
            r1 = 0
            if (r0 == 0) goto Lf
            r0.setOnClickListener(r1)
            r2.k = r1
        Lf:
            com.sigmob.sdk.base.views.e r0 = r2.f
            if (r0 == 0) goto L18
            r0.destroy()
            r2.f = r1
        L18:
            super.e()
            return
    }

    @Override
    public void f() {
            r0 = this;
            return
    }

    @Override
    public boolean g() {
            r1 = this;
            com.sigmob.sdk.base.views.e r0 = r1.f
            boolean r0 = r0.canGoBack()
            if (r0 == 0) goto Lf
            com.sigmob.sdk.base.views.e r0 = r1.f
            r0.goBack()
            r0 = 0
            return r0
        Lf:
            r0 = 1
            return r0
    }
}
