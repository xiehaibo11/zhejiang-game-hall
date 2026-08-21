package com.kwad.components.ad.splashscreen;

import android.content.Context;
import android.os.SystemClock;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStub;
import com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo;
import com.kwad.components.core.e.d.a;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsSplashScreenAd;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bi;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.tkay.expressad.foundation.d.r;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class h extends com.kwad.sdk.mvp.a {
    private KsSplashScreenAd.SplashScreenAdInteractionListener BR;
    public com.kwad.components.ad.splashscreen.e.a Cd;
    public com.kwad.sdk.core.h.a Ce;
    public int Ck;
    public int Cl;
    public long Cm;
    public long Cn;
    public long Co;
    public long Cp;
    public long Cq;
    public long Cr;
    public long Cs;
    public SceneImpl mAdScene;
    public com.kwad.components.core.e.d.c mApkDownloadHelper;
    public AdBaseFrameLayout mRootContainer;
    public bi mTimerHelper;
    public KsVideoPlayConfig mVideoPlayConfig;
    private List<g> Cf = new CopyOnWriteArrayList();
    private List<f> Cg = new CopyOnWriteArrayList();
    private boolean Ch = false;
    public boolean Ci = false;
    public boolean Cj = false;
    public boolean isWebTimeout = false;

    public interface a {
        void b(j jVar);
    }

    private void kJ() {
        kK();
        Iterator<g> it = this.Cf.iterator();
        while (it.hasNext()) {
            it.next().kD();
        }
    }

    private void kK() {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        SplashMonitorInfo elementTypes = new SplashMonitorInfo(this.mAdTemplate.posId).setStatus(8).setElementTypes(com.kwad.components.core.webview.b.d.a.sb().sc());
        bi biVar = this.mTimerHelper;
        KSLoggerReporter.p(elementTypes.setShowEndTime(biVar != null ? biVar.getTime() : -1L).setRotateComposeTimeout(this.Cj).setTkDefaultTimeout(com.kwad.sdk.core.response.b.b.cT(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate))).setSoSource(this.Ck).setSoLoadTime(this.Cm).setOfflineSource(this.Cl).setOfflineLoadTime(this.Cn).setTkFileLoadTime(this.Co).setTkInitTime(this.Cp).setTkRenderTime(this.Cq).setNativeLoadTime(this.Cr).setWebTimeout(this.isWebTimeout).setWebLoadTime(this.Cs).setInteractiveStyle(com.kwad.sdk.core.response.b.b.de(adInfoCg)).setInteractivityDefaultStyle(com.kwad.sdk.core.response.b.b.df(adInfoCg)).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).toJson());
        com.kwad.components.core.webview.b.d.a.sb().sd();
    }

    private void kL() {
        Iterator<f> it = this.Cg.iterator();
        while (it.hasNext()) {
            it.next().kz();
        }
    }

    public static boolean m(AdInfo adInfo) {
        return adInfo.adSplashInfo.fullScreenClickSwitch == 1;
    }

    public static boolean o(AdInfo adInfo) {
        return com.kwad.sdk.core.response.b.b.cK(adInfo) && com.kwad.sdk.core.response.b.a.aV(adInfo);
    }

    public final void S(Context context) {
        if (this.mAdTemplate.mPvReported) {
            return;
        }
        com.kwad.components.ad.splashscreen.local.a.T(context);
        com.kwad.components.core.t.b.qj().a(this.mAdTemplate, null, null);
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_SPLASH, "adShowSuccess").report();
        kF();
    }

    public final void Y(int i) {
        Iterator<g> it = this.Cf.iterator();
        while (it.hasNext()) {
            it.next().X(i);
        }
    }

    public final void a(int i, Context context, final int i2, int i3, final a aVar) {
        com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        com.kwad.components.core.e.d.a.a(new a.C0150a(context).P(this.mAdTemplate).b(this.mApkDownloadHelper).ao(i3).am(false).an(i2).am(i).a(new a.b() { // from class: com.kwad.components.ad.splashscreen.h.1
            @Override // com.kwad.components.core.e.d.a.b
            public final void onAdClicked() {
                if (h.this.BR != null) {
                    h.this.BR.onAdClicked();
                }
                JSONObject jSONObject = new JSONObject();
                try {
                    if (h.this.Cd != null) {
                        jSONObject.put(r.ag, h.this.Cd.getCurrentPosition());
                    }
                } catch (JSONException e) {
                    com.kwad.sdk.core.e.c.printStackTrace(e);
                }
                j jVarC = new j().cg(i2).c(h.this.mRootContainer.getTouchCoords());
                com.kwad.sdk.core.report.a.a(h.this.mAdTemplate, jVarC, jSONObject);
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.b(jVarC);
                }
            }
        }));
    }

    public final void a(f fVar) {
        if (fVar == null) {
            return;
        }
        this.Cg.add(fVar);
    }

    public final void a(g gVar) {
        this.Cf.add(gVar);
    }

    public final void b(f fVar) {
        if (fVar == null) {
            return;
        }
        this.Cg.remove(fVar);
    }

    public final void b(g gVar) {
        this.Cf.remove(gVar);
    }

    public final void c(int i, Context context, int i2, int i3) {
        a(i, context, i2, i3, null);
    }

    public final void g(int i, String str) {
        KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener = this.BR;
        if (splashScreenAdInteractionListener != null) {
            splashScreenAdInteractionListener.onAdShowError(0, str);
        }
        com.kwad.components.ad.splashscreen.monitor.a.kN();
        com.kwad.components.ad.splashscreen.monitor.a.b(this.mAdTemplate, 0, String.valueOf(str));
        kJ();
    }

    public final void kE() {
        KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener = this.BR;
        if (splashScreenAdInteractionListener != null) {
            splashScreenAdInteractionListener.onAdClicked();
        }
    }

    public final void kF() {
        com.kwad.components.ad.splashscreen.monitor.a.kN();
        com.kwad.components.ad.splashscreen.monitor.a.e(this.mAdTemplate, SystemClock.elapsedRealtime() - this.mAdTemplate.showStartTime);
        com.kwad.components.ad.splashscreen.monitor.b.kO();
        com.kwad.sdk.a.a.c.yb().bc(true);
        bi biVar = this.mTimerHelper;
        if (biVar != null) {
            biVar.startTiming();
        }
        KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener = this.BR;
        if (splashScreenAdInteractionListener != null) {
            splashScreenAdInteractionListener.onAdShowStart();
        }
    }

    public final void kG() {
        if (this.Ch) {
            return;
        }
        this.Ch = true;
        if (!o(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)) || this.mAdTemplate.converted) {
            z.a aVar = new z.a();
            bi biVar = this.mTimerHelper;
            if (biVar != null) {
                aVar.duration = biVar.getTime();
            }
            com.kwad.sdk.core.report.a.b(this.mAdTemplate, new j().ch(14).cm(22).a(aVar), (JSONObject) null);
            KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener = this.BR;
            if (splashScreenAdInteractionListener != null) {
                splashScreenAdInteractionListener.onAdShowEnd();
            }
        } else {
            kL();
        }
        kJ();
    }

    public final void kH() {
        KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener = this.BR;
        if (splashScreenAdInteractionListener != null) {
            splashScreenAdInteractionListener.onAdShowEnd();
        }
    }

    public final void kI() {
        KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener = this.BR;
        if (splashScreenAdInteractionListener != null) {
            splashScreenAdInteractionListener.onSkippedAd();
        }
        kJ();
    }

    public final void kM() {
        this.mRootContainer.post(new Runnable() { // from class: com.kwad.components.ad.splashscreen.h.2
            @Override // java.lang.Runnable
            public final void run() {
                if (com.kwad.components.core.e.c.b.mZ()) {
                    h.this.mRootContainer.postDelayed(this, 1000L);
                } else {
                    h.this.kH();
                }
            }
        });
    }

    public final ViewGroup p(AdInfo adInfo) {
        View viewFindViewById;
        if (!com.kwad.sdk.core.config.d.a(com.kwad.components.ad.splashscreen.b.a.Cz)) {
            return this.mRootContainer;
        }
        ViewStub viewStub = (ViewStub) this.mRootContainer.findViewById(com.kwad.components.ad.splashscreen.f.c.v(adInfo) ? R.id.ksad_splash_right_top_view_stub : R.id.ksad_splash_left_top_view_stub);
        if (viewStub != null) {
            viewFindViewById = viewStub.inflate();
        } else {
            viewFindViewById = this.mRootContainer.findViewById(com.kwad.components.ad.splashscreen.f.c.v(adInfo) ? R.id.ksad_splash_right_top_root : R.id.ksad_splash_left_top_root);
        }
        ViewGroup viewGroup = (ViewGroup) viewFindViewById;
        viewGroup.setVisibility(0);
        return viewGroup;
    }

    @Override // com.kwad.sdk.mvp.a
    public final void release() {
        com.kwad.components.ad.splashscreen.e.a aVar = this.Cd;
        if (aVar != null) {
            aVar.release();
        }
        com.kwad.sdk.core.h.a aVar2 = this.Ce;
        if (aVar2 != null) {
            aVar2.release();
        }
    }

    public final void setSplashScreenAdListener(KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener) {
        this.BR = splashScreenAdInteractionListener;
    }
}
