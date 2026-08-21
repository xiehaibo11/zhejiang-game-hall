package com.kwad.components.ad.splashscreen.c.a;

public final class b extends com.kwad.components.ad.splashscreen.c.e implements android.view.View.OnClickListener {
    private android.widget.TextView Ee;
    private android.widget.TextView Ef;
    private android.widget.TextView Eg;
    private android.widget.TextView Eh;
    private com.kwad.sdk.core.response.model.AdInfo.DownloadSafeInfo Ei;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private void initView() {
            r1 = this;
            int r0 = com.kwad.sdk.R.id.ksad_ad_endcard_appversion
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Ee = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_permission_text
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Ef = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_privacy_text
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Eg = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_developer_text
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Eh = r0
            return
    }

    private void lv() {
            r5 = this;
            com.kwad.components.ad.splashscreen.h r0 = r5.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.aH(r0)
            if (r0 != 0) goto Lf
            return
        Lf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r5.Ei
            java.lang.String r1 = r1.appVersion
            boolean r2 = com.kwad.sdk.utils.bc.fI(r1)
            if (r2 == 0) goto L2b
            java.lang.String r2 = "版本号："
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = "  |  "
            r0.append(r1)
        L2b:
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r5.Ei
            long r1 = r1.packageSize
            r3 = 0
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 <= 0) goto L42
            java.lang.String r3 = "应用大小："
            r0.append(r3)
            r3 = 1
            java.lang.String r1 = com.kwad.components.core.t.e.a(r1, r3)
            r0.append(r1)
        L42:
            java.lang.String r1 = r0.toString()
            boolean r1 = com.kwad.sdk.utils.bc.fI(r1)
            if (r1 == 0) goto L51
            android.widget.TextView r1 = r5.Ee
            r1.setText(r0)
        L51:
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r5.Ei
            java.lang.String r0 = r0.appPermissionInfoUrl
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r5.Ei
            java.lang.String r1 = r1.appPrivacyUrl
            boolean r2 = com.kwad.sdk.utils.bc.fI(r0)
            if (r2 == 0) goto L6b
            android.widget.TextView r2 = r5.Ef
            java.lang.String r3 = "权限信息"
            r2.setText(r3)
            android.widget.TextView r2 = r5.Ef
            r2.setOnClickListener(r5)
        L6b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            boolean r0 = com.kwad.sdk.utils.bc.fI(r0)
            if (r0 == 0) goto L7b
            java.lang.String r0 = " | "
            r2.append(r0)
        L7b:
            boolean r0 = com.kwad.sdk.utils.bc.fI(r1)
            if (r0 == 0) goto L90
            java.lang.String r0 = "隐私政策"
            r2.append(r0)
            android.widget.TextView r0 = r5.Eg
            r0.setText(r2)
            android.widget.TextView r0 = r5.Eg
            r0.setOnClickListener(r5)
        L90:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r5.Ei
            java.lang.String r1 = r1.appName
            boolean r2 = com.kwad.sdk.utils.bc.fI(r1)
            if (r2 == 0) goto Lac
            java.lang.String r2 = "应用名："
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = "；"
            r0.append(r1)
        Lac:
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r5.Ei
            java.lang.String r1 = r1.corporationName
            boolean r2 = com.kwad.sdk.utils.bc.fI(r1)
            if (r2 == 0) goto Lbe
            java.lang.String r2 = "开发者："
            r0.append(r2)
            r0.append(r1)
        Lbe:
            java.lang.String r1 = r0.toString()
            boolean r1 = com.kwad.sdk.utils.bc.fI(r1)
            if (r1 == 0) goto Lcd
            android.widget.TextView r1 = r5.Eh
            r1.setText(r0)
        Lcd:
            return
    }

    @Override
    public final void ah() {
            r1 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r0.downloadSafeInfo
            r1.Ei = r0
            r1.lv()
            return
    }

    @Override
    public final void onClick(android.view.View r3) {
            r2 = this;
            android.widget.TextView r0 = r2.Eg
            r1 = 1
            if (r3 != r0) goto L30
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = new com.kwad.components.core.page.AdWebViewActivityProxy$a$a
            r3.<init>()
            java.lang.String r0 = "隐私政策"
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = r3.aq(r0)
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r2.Ei
            java.lang.String r0 = r0.appPrivacyUrl
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = r3.ar(r0)
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = r3.ay(r1)
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = r3.S(r0)
            com.kwad.components.core.page.AdWebViewActivityProxy$a r3 = r3.oA()
            android.content.Context r0 = r2.getContext()
            com.kwad.components.core.page.AdWebViewActivityProxy.launch(r0, r3)
            return
        L30:
            android.widget.TextView r0 = r2.Ef
            if (r3 != r0) goto L5e
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = new com.kwad.components.core.page.AdWebViewActivityProxy$a$a
            r3.<init>()
            java.lang.String r0 = "权限信息"
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = r3.aq(r0)
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = r3.ay(r1)
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r2.Ei
            java.lang.String r0 = r0.appPermissionInfoUrl
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = r3.ar(r0)
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = r3.S(r0)
            com.kwad.components.core.page.AdWebViewActivityProxy$a r3 = r3.oA()
            android.content.Context r0 = r2.getContext()
            com.kwad.components.core.page.AdWebViewActivityProxy.launch(r0, r3)
        L5e:
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
            r0 = this;
            super.onUnbind()
            return
    }
}
