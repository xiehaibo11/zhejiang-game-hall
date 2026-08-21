package com.kwad.components.ad.splashscreen.c;

import android.os.SystemClock;
import android.text.TextUtils;
import android.view.ViewStub;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.splashscreen.h;
import com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

public final class n extends e {
    private com.kwad.components.ad.splashscreen.f.a CY;
    private double DA;
    private AdMatrixInfo.SplashSlideInfo Du;
    private TextView Dv;
    private ImageView Dw;
    private com.kwad.components.ad.splashscreen.widget.c Dx;
    private KsSplashSlidePathView Dy;
    private com.kwad.components.core.e.d.c Dz;
    private TextView gQ;
    private AdInfo mAdInfo;
    private AdBaseFrameLayout mRootContainer;
    private long mStartTime;

    /* JADX WARN: Removed duplicated region for block: B:17:0x0067  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0071  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void initView() {
        TextView textView;
        String str;
        this.Du = this.mAdInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.slideInfo;
        this.DA = r0.convertDistance;
        int i = this.Du.style;
        com.kwad.components.ad.splashscreen.widget.c cVar = new com.kwad.components.ad.splashscreen.widget.c(getContext(), i);
        this.Dx = cVar;
        this.Dw.setImageDrawable(cVar);
        this.Dw.post(new Runnable() {
            @Override
            public final void run() {
                n.this.lo();
                if (n.this.Dx != null) {
                    n.this.Dx.start();
                }
            }
        });
        if (!TextUtils.isEmpty(this.Du.title)) {
            textView = this.gQ;
            str = this.Du.title;
        } else if (i == 0) {
            textView = this.gQ;
            str = "向上滑动";
        } else {
            if (i != 1) {
                if (i == 2) {
                    textView = this.gQ;
                    str = "向右滑动";
                }
                if (TextUtils.isEmpty(this.Du.subtitle)) {
                    this.Dv.setText(this.Du.subtitle);
                    return;
                } else if (!com.kwad.sdk.core.response.b.a.ax(this.mAdInfo)) {
                    this.Dv.setText("跳转详情页或者第三方应用");
                    return;
                } else {
                    this.Dv.setText(com.kwad.components.ad.splashscreen.d.a(this.CM.mAdTemplate, this.mAdInfo, this.Dz.nw()));
                    return;
                }
            }
            textView = this.gQ;
            str = "向左滑动";
        }
        textView.setText(str);
        if (TextUtils.isEmpty(this.Du.subtitle)) {
        }
    }

    private void ln() {
        com.kwad.components.ad.splashscreen.f.a aVar = this.CY;
        if (aVar != null) {
            aVar.setAdTemplate(this.CM.mAdTemplate);
            return;
        }
        com.kwad.components.ad.splashscreen.f.a aVar2 = new com.kwad.components.ad.splashscreen.f.a(getContext(), this.CM.mAdTemplate) {
            @Override
            public final void aa(String str) {
                n.this.Dv.setText(str);
            }
        };
        this.CY = aVar2;
        this.Dz.b(aVar2);
    }

    private void lo() {
        if (this.Du != null) {
            z.b bVar = new z.b();
            bVar.cu(this.Du.style);
            com.kwad.sdk.core.report.a.a(this.CM.mAdTemplate, 190, bVar, (JSONObject) null);
            com.kwad.components.core.webview.b.d.a.sb().aR(190);
        }
    }

    @Override
    public final void ah() {
        super.ah();
        if (this.CM == null) {
            return;
        }
        bj.postOnUiThread(new Runnable() {
            @Override
            public final void run() {
                n.this.CM.Cr = SystemClock.elapsedRealtime() - n.this.mStartTime;
            }
        });
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate);
        this.Dz = this.CM.mApkDownloadHelper;
        initView();
        if (com.kwad.sdk.core.response.b.a.ax(this.mAdInfo)) {
            ln();
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.mStartTime = SystemClock.elapsedRealtime();
        ((ViewStub) findViewById(R.id.ksad_slide_layout)).inflate();
        this.gQ = (TextView) findViewById(R.id.ksad_splash_slide_title);
        this.Dv = (TextView) findViewById(R.id.ksad_splash_slide_actiontext);
        this.Dw = (ImageView) findViewById(R.id.ksad_splash_slideView);
        this.mRootContainer = (AdBaseFrameLayout) findViewById(R.id.ksad_splash_root_container);
        KsSplashSlidePathView ksSplashSlidePathView = (KsSplashSlidePathView) ((ViewStub) findViewById(R.id.ksad_splash_slideTouchView)).inflate();
        this.Dy = ksSplashSlidePathView;
        ksSplashSlidePathView.setOnSlideTouchListener(new KsSplashSlidePathView.a() {
            @Override
            public final void a(float f, float f2, float f3, float f4) {
                final float fB = com.kwad.sdk.d.a.a.b(n.this.getContext(), (float) Math.sqrt(Math.pow(f3 - f, 2.0d) + Math.pow(f4 - f2, 2.0d)));
                if (fB < n.this.DA || n.this.CM == null) {
                    return;
                }
                n.this.CM.a(1, n.this.getContext(), 153, 2, new h.a() {
                    @Override
                    public final void b(com.kwad.sdk.core.report.j jVar) {
                        jVar.cn(n.this.Du.style);
                        jVar.co((int) fB);
                    }
                });
            }

            @Override
            public final void lp() {
                if (!com.kwad.components.ad.splashscreen.h.m(n.this.mAdInfo) || n.this.CM == null) {
                    return;
                }
                n.this.CM.c(1, n.this.getContext(), 53, 2);
            }
        });
    }
}
