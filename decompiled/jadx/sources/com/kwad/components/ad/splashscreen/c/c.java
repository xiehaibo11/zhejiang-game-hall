package com.kwad.components.ad.splashscreen.c;

import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.kwad.components.ad.splashscreen.local.SplashSkipViewModel;
import com.kwad.components.ad.splashscreen.widget.SkipView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.utils.bc;
import com.tkay.expressad.foundation.d.r;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends e implements com.kwad.sdk.core.h.c {
    private TextView CE;
    private com.kwad.components.ad.splashscreen.widget.a CF;
    private AdInfo.AdPreloadInfo CG;
    private boolean CH = false;
    private View CI;
    private AdInfo rZ;

    private void a(ViewGroup viewGroup, AdInfo adInfo) {
        this.CE = (TextView) viewGroup.findViewById(R.id.ksad_splash_preload_tips);
        this.CG = adInfo.adPreloadInfo;
        this.CE.setVisibility(8);
        AdInfo.AdPreloadInfo adPreloadInfo = this.CG;
        if (adPreloadInfo == null || bc.isNullString(adPreloadInfo.preloadTips)) {
            this.CE.setVisibility(8);
        } else {
            this.CE.setVisibility(0);
            this.CE.setText(this.CG.preloadTips);
        }
    }

    private SplashSkipViewModel kQ() {
        SplashSkipViewModel splashSkipViewModel = new SplashSkipViewModel();
        int i = this.rZ.adSplashInfo.imageDisplaySecond <= 0 ? 5 : this.rZ.adSplashInfo.imageDisplaySecond;
        int iMin = Math.min(this.rZ.adSplashInfo.videoDisplaySecond, com.kwad.sdk.core.response.b.a.G(this.rZ));
        if (com.kwad.sdk.core.response.b.a.aU(this.rZ)) {
            i = iMin;
        }
        splashSkipViewModel.skipSecond = i;
        return splashSkipViewModel;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void kR() {
        this.CM.kI();
        JSONObject jSONObject = new JSONObject();
        if (this.CM.Cd != null) {
            try {
                jSONObject.put(r.ag, this.CM.Cd.getCurrentPosition());
            } catch (JSONException e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        z.a aVar = new z.a();
        if (this.CM.mTimerHelper != null) {
            aVar.duration = this.CM.mTimerHelper.getTime();
        }
        com.kwad.sdk.core.report.a.b(this.CM.mAdTemplate, new com.kwad.sdk.core.report.j().ch(1).cm(22).a(aVar), jSONObject);
    }

    private synchronized void kT() {
        if (!this.CH && this.CF != null) {
            if (com.kwad.sdk.core.response.b.a.ci(this.rZ) && com.kwad.sdk.core.response.b.a.cj(this.rZ)) {
                com.kwad.sdk.core.report.a.b(this.CM.mAdTemplate, com.tkay.expressad.video.module.a.a.O, (JSONObject) null);
                this.CH = true;
            }
        }
    }

    private static boolean r(AdInfo adInfo) {
        return !com.kwad.sdk.core.response.b.a.cg(adInfo);
    }

    private void s(AdInfo adInfo) {
        this.CI = this.CM.mRootContainer.findViewById(R.id.ksad_skip_view_area);
        if (!com.kwad.sdk.core.response.b.a.ch(adInfo) || adInfo.adSplashInfo.skipButtonPosition != 0) {
            this.CI.setVisibility(8);
            return;
        }
        this.CI.setVisibility(0);
        this.CI.setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.ad.splashscreen.c.c.2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                c.this.kR();
            }
        });
        this.CI.post(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.c.3
            @Override // java.lang.Runnable
            public final void run() {
                ((View) c.this.CF).post(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.c.3.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        int iAc = c.this.CF.ac(35);
                        ViewGroup.LayoutParams layoutParams = c.this.CI.getLayoutParams();
                        layoutParams.width = iAc + com.kwad.sdk.d.a.a.a(c.this.CM.mRootContainer.getContext(), 66.0f);
                        c.this.CI.setLayoutParams(layoutParams);
                    }
                });
            }
        });
    }

    @Override // com.kwad.sdk.core.h.c
    public final void aK() {
        com.kwad.sdk.core.e.c.d("SkipAdPresenter", "onPageVisible");
        this.CF.x(this.rZ);
        kT();
    }

    @Override // com.kwad.sdk.core.h.c
    public final void aL() {
        com.kwad.sdk.core.e.c.d("SkipAdPresenter", "onPageInvisible");
        this.CF.w(this.rZ);
    }

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        com.kwad.sdk.core.e.c.d("SkipAdPresenter", "onBind");
        this.rZ = com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate);
        ViewGroup viewGroupP = this.CM.p(this.rZ);
        a(viewGroupP, this.rZ);
        this.CF = (com.kwad.components.ad.splashscreen.widget.a) viewGroupP.findViewById(r(this.rZ) ? R.id.ksad_splash_skip_view : R.id.ksad_splash_circle_skip_view);
        this.CF.a(kQ(), this.rZ);
        this.CF.setOnViewListener(new SkipView.a() { // from class: com.kwad.components.ad.splashscreen.c.c.1
            @Override // com.kwad.components.ad.splashscreen.widget.SkipView.a
            public final void Z(int i) {
                c.this.CM.Y(i);
            }

            @Override // com.kwad.components.ad.splashscreen.widget.SkipView.a
            public final void kU() {
                c.this.kR();
            }

            @Override // com.kwad.components.ad.splashscreen.widget.SkipView.a
            public final void kV() {
                c.this.kS();
            }
        });
        s(this.rZ);
        this.CM.Ce.a(this);
    }

    public final void kS() {
        this.CM.mRootContainer.post(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.c.4
            @Override // java.lang.Runnable
            public final void run() {
                if (com.kwad.components.core.e.c.b.mZ()) {
                    c.this.CM.mRootContainer.postDelayed(this, 1000L);
                } else {
                    c.this.CM.kG();
                }
            }
        });
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.CM.Ce.b(this);
        this.CF.bd();
    }
}
