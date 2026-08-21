package com.kwad.components.ad.splashscreen.c.a;

import android.view.View;
import android.widget.TextView;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.utils.bc;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.components.ad.splashscreen.c.e implements View.OnClickListener {
    private TextView Ee;
    private TextView Ef;
    private TextView Eg;
    private TextView Eh;
    private AdInfo.DownloadSafeInfo Ei;

    private void initView() {
        this.Ee = (TextView) findViewById(R.id.ksad_ad_endcard_appversion);
        this.Ef = (TextView) findViewById(R.id.ksad_ad_permission_text);
        this.Eg = (TextView) findViewById(R.id.ksad_ad_privacy_text);
        this.Eh = (TextView) findViewById(R.id.ksad_ad_developer_text);
    }

    private void lv() {
        if (com.kwad.sdk.core.response.b.a.aH(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate))) {
            StringBuilder sb = new StringBuilder();
            String str = this.Ei.appVersion;
            if (bc.fI(str)) {
                sb.append("版本号：");
                sb.append(str);
                sb.append("  |  ");
            }
            long j = this.Ei.packageSize;
            if (j > 0) {
                sb.append("应用大小：");
                sb.append(com.kwad.components.core.t.e.a(j, true));
            }
            if (bc.fI(sb.toString())) {
                this.Ee.setText(sb);
            }
            String str2 = this.Ei.appPermissionInfoUrl;
            String str3 = this.Ei.appPrivacyUrl;
            if (bc.fI(str2)) {
                this.Ef.setText("权限信息");
                this.Ef.setOnClickListener(this);
            }
            StringBuilder sb2 = new StringBuilder();
            if (bc.fI(str2)) {
                sb2.append(" | ");
            }
            if (bc.fI(str3)) {
                sb2.append("隐私政策");
                this.Eg.setText(sb2);
                this.Eg.setOnClickListener(this);
            }
            StringBuilder sb3 = new StringBuilder();
            String str4 = this.Ei.appName;
            if (bc.fI(str4)) {
                sb3.append("应用名：");
                sb3.append(str4);
                sb3.append("；");
            }
            String str5 = this.Ei.corporationName;
            if (bc.fI(str5)) {
                sb3.append("开发者：");
                sb3.append(str5);
            }
            if (bc.fI(sb3.toString())) {
                this.Eh.setText(sb3);
            }
        }
    }

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.Ei = com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate).downloadSafeInfo;
        lv();
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        if (view == this.Eg) {
            AdWebViewActivityProxy.launch(getContext(), new AdWebViewActivityProxy.a.C0160a().aq("隐私政策").ar(this.Ei.appPrivacyUrl).ay(true).S(this.CM.mAdTemplate).oA());
        } else if (view == this.Ef) {
            AdWebViewActivityProxy.launch(getContext(), new AdWebViewActivityProxy.a.C0160a().aq("权限信息").ay(true).ar(this.Ei.appPermissionInfoUrl).S(this.CM.mAdTemplate).oA());
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        initView();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
    }
}
