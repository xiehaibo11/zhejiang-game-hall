package com.kwad.components.ad.splashscreen.c.a;

import android.graphics.BitmapFactory;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStub;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.splashscreen.widget.CloseCountDownView;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener;
import com.kwad.sdk.core.imageloader.utils.BlurUtils;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.io.InputStream;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends com.kwad.components.ad.splashscreen.c.e implements com.kwad.sdk.core.h.c {
    private CloseCountDownView Ej;
    private ImageView Em;
    private TextView En;
    private TextView Eo;
    private ViewGroup Er;
    private ImageView Es;
    private KsLogoView Et;
    private TextView Eu;
    private TextView Ev;

    private static void a(ImageView imageView, String str, AdTemplate adTemplate) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        KSImageLoader.loadImage(imageView, str, adTemplate, new DisplayImageOptionsCompat.Builder().setBlurRadius(20).build(), new SimpleImageLoadingListener() { // from class: com.kwad.components.ad.splashscreen.c.a.d.2
            @Override // com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
            public final boolean onDecode(String str2, InputStream inputStream, DecodedResult decodedResult) {
                decodedResult.mBitmap = BlurUtils.stackBlur(BitmapFactory.decodeStream(inputStream), 20, false);
                return true;
            }

            @Override // com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
            public final void onLoadingComplete(String str2, View view, DecodedResult decodedResult) {
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void ac(String str) {
        this.Eu.setText(str);
    }

    private void initView() {
        ViewStub viewStub = (ViewStub) findViewById(R.id.ksad_splash_endcard_view_stub);
        this.Er = (ViewGroup) (viewStub != null ? viewStub.inflate() : findViewById(R.id.ksad_splash_end_card_native_root));
        this.Es = (ImageView) findViewById(R.id.ksad_splash_end_card_native_bg);
        this.Em = (ImageView) findViewById(R.id.ksad_ad_endcard_icon);
        this.En = (TextView) findViewById(R.id.ksad_ad_endcard_appname);
        this.Eo = (TextView) findViewById(R.id.ksad_ad_endcard_appdesc);
        this.Et = (KsLogoView) findViewById(R.id.ksad_ad_endcard_logo);
        this.Eu = (TextView) findViewById(R.id.ksad_ad_btn_title);
        this.Ev = (TextView) findViewById(R.id.ksad_ad_btn_sub_title);
        this.Ej = (CloseCountDownView) findViewById(R.id.ksad_ad_endcard_close_root);
    }

    private void lw() {
        if (com.kwad.sdk.core.response.b.a.ax(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate))) {
            com.kwad.components.ad.splashscreen.f.a aVar = new com.kwad.components.ad.splashscreen.f.a(getContext(), this.CM.mAdTemplate) { // from class: com.kwad.components.ad.splashscreen.c.a.d.1
                @Override // com.kwad.components.ad.splashscreen.f.a
                public final void aa(String str) {
                    d.this.ac(str);
                }
            };
            if (this.CM.mApkDownloadHelper != null) {
                this.CM.mApkDownloadHelper.b(aVar);
            }
        }
    }

    private void lx() {
        this.Er.setVisibility(0);
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate);
        a(this.Es, com.kwad.sdk.core.response.b.a.aM(adInfoCg).materialUrl, this.CM.mAdTemplate);
        this.Em.setImageResource(R.drawable.ksad_default_app_icon);
        KSImageLoader.loadAppIcon(this.Em, com.kwad.sdk.core.response.b.a.bQ(adInfoCg), this.CM.mAdTemplate, 24);
        this.En.setText(com.kwad.sdk.core.response.b.a.bO(adInfoCg));
        this.Eo.setText(com.kwad.sdk.core.response.b.a.an(adInfoCg));
        this.Et.aa(this.CM.mAdTemplate);
        if (com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
            u(adInfoCg);
        } else {
            this.Eu.setText("点击查看");
            this.Ev.setVisibility(0);
            this.Ev.setText("跳转详情页/第三方应用");
        }
        this.Ej.a(adInfoCg);
    }

    private void u(AdInfo adInfo) {
        if (this.CM.mApkDownloadHelper == null) {
            return;
        }
        int iNw = this.CM.mApkDownloadHelper.nw();
        AdMatrixInfo.DownloadTexts downloadTextsCV = com.kwad.sdk.core.response.b.b.cV(adInfo);
        String str = iNw != 8 ? iNw != 12 ? downloadTextsCV.adActionDescription : downloadTextsCV.openAppLabel : downloadTextsCV.installAppLabel;
        if (TextUtils.isEmpty(str)) {
            this.Eu.setText(com.kwad.sdk.core.response.b.a.aw(adInfo));
        } else {
            this.Eu.setText(str);
        }
    }

    @Override // com.kwad.sdk.core.h.c
    public final void aK() {
        this.Ej.aK();
    }

    @Override // com.kwad.sdk.core.h.c
    public final void aL() {
        this.Ej.aL();
    }

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.CM.Ce.a(this);
        com.kwad.sdk.core.report.a.b(this.CM.mAdTemplate, 87, (JSONObject) null);
        lw();
        lx();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        initView();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.Ej.bd();
        this.CM.Ce.b(this);
    }
}
