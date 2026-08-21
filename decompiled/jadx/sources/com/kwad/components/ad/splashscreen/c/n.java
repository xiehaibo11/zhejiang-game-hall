package com.kwad.components.ad.splashscreen.c;

import android.os.SystemClock;
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

/* JADX INFO: loaded from: classes2.dex */
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
        To view partially-correct add '--show-bad-code' argument
    */
    private void initView() {
        /*
            r3 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = r0.slideInfo
            r3.Du = r0
            int r0 = r0.convertDistance
            double r0 = (double) r0
            r3.DA = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = r3.Du
            int r0 = r0.style
            com.kwad.components.ad.splashscreen.widget.c r1 = new com.kwad.components.ad.splashscreen.widget.c
            android.content.Context r2 = r3.getContext()
            r1.<init>(r2, r0)
            r3.Dx = r1
            android.widget.ImageView r2 = r3.Dw
            r2.setImageDrawable(r1)
            android.widget.ImageView r1 = r3.Dw
            com.kwad.components.ad.splashscreen.c.n$3 r2 = new com.kwad.components.ad.splashscreen.c.n$3
            r2.<init>()
            r1.post(r2)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r1 = r3.Du
            java.lang.String r1 = r1.title
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L45
            android.widget.TextView r0 = r3.gQ
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r1 = r3.Du
            java.lang.String r1 = r1.title
        L41:
            r0.setText(r1)
            goto L5d
        L45:
            if (r0 == 0) goto L58
            r1 = 1
            if (r0 == r1) goto L53
            r1 = 2
            if (r0 == r1) goto L4e
            goto L5d
        L4e:
            android.widget.TextView r0 = r3.gQ
            java.lang.String r1 = "向右滑动"
            goto L41
        L53:
            android.widget.TextView r0 = r3.gQ
            java.lang.String r1 = "向左滑动"
            goto L41
        L58:
            android.widget.TextView r0 = r3.gQ
            java.lang.String r1 = "向上滑动"
            goto L41
        L5d:
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = r3.Du
            java.lang.String r0 = r0.subtitle
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L71
            android.widget.TextView r0 = r3.Dv
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r1 = r3.Du
            java.lang.String r1 = r1.subtitle
            r0.setText(r1)
            return
        L71:
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L8f
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            com.kwad.components.core.e.d.c r2 = r3.Dz
            int r2 = r2.nw()
            java.lang.String r0 = com.kwad.components.ad.splashscreen.d.a(r0, r1, r2)
            android.widget.TextView r1 = r3.Dv
            r1.setText(r0)
            return
        L8f:
            android.widget.TextView r0 = r3.Dv
            java.lang.String r1 = "跳转详情页或者第三方应用"
            r0.setText(r1)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.ad.splashscreen.c.n.initView():void");
    }

    private void ln() {
        com.kwad.components.ad.splashscreen.f.a aVar = this.CY;
        if (aVar != null) {
            aVar.setAdTemplate(this.CM.mAdTemplate);
            return;
        }
        com.kwad.components.ad.splashscreen.f.a aVar2 = new com.kwad.components.ad.splashscreen.f.a(getContext(), this.CM.mAdTemplate) { // from class: com.kwad.components.ad.splashscreen.c.n.4
            @Override // com.kwad.components.ad.splashscreen.f.a
            public final void aa(String str) {
                n.this.Dv.setText(str);
            }
        };
        this.CY = aVar2;
        this.Dz.b(aVar2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void lo() {
        if (this.Du != null) {
            z.b bVar = new z.b();
            bVar.cu(this.Du.style);
            com.kwad.sdk.core.report.a.a(this.CM.mAdTemplate, 190, bVar, (JSONObject) null);
            com.kwad.components.core.webview.b.d.a.sb().aR(190);
        }
    }

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (this.CM == null) {
            return;
        }
        bj.postOnUiThread(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.n.2
            @Override // java.lang.Runnable
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

    @Override // com.kwad.sdk.mvp.Presenter
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
        ksSplashSlidePathView.setOnSlideTouchListener(new KsSplashSlidePathView.a() { // from class: com.kwad.components.ad.splashscreen.c.n.1
            @Override // com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView.a
            public final void a(float f, float f2, float f3, float f4) {
                final float fB = com.kwad.sdk.d.a.a.b(n.this.getContext(), (float) Math.sqrt(Math.pow(f3 - f, 2.0d) + Math.pow(f4 - f2, 2.0d)));
                if (fB < n.this.DA || n.this.CM == null) {
                    return;
                }
                n.this.CM.a(1, n.this.getContext(), 153, 2, new h.a() { // from class: com.kwad.components.ad.splashscreen.c.n.1.1
                    @Override // com.kwad.components.ad.splashscreen.h.a
                    public final void b(com.kwad.sdk.core.report.j jVar) {
                        jVar.cn(n.this.Du.style);
                        jVar.co((int) fB);
                    }
                });
            }

            @Override // com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView.a
            public final void lp() {
                if (!com.kwad.components.ad.splashscreen.h.m(n.this.mAdInfo) || n.this.CM == null) {
                    return;
                }
                n.this.CM.c(1, n.this.getContext(), 53, 2);
            }
        });
    }
}
