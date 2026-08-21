package com.kwad.components.ad.reward.presenter.platdetail.actionbar;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.ValueAnimator;
import android.os.SystemClock;
import android.view.animation.DecelerateInterpolator;
import com.kwad.components.ad.reward.j.q;
import com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.t.m;
import com.kwad.components.core.webview.b.j;
import com.kwad.components.core.webview.jshandler.aa;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.components.core.webview.jshandler.r;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.components.core.webview.jshandler.x;
import com.kwad.components.core.webview.jshandler.z;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.utils.ai;

/* JADX INFO: loaded from: classes2.dex */
public final class f extends com.kwad.components.ad.reward.presenter.a {
    private KsAdWebView cB;
    private aa.a cC;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private am cG;
    private ValueAnimator cL;
    private ValueAnimator cM;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private String mUrl;
    private RewardActionBarControl oY;
    private KsLogoView so;
    private boolean uZ;
    private long va;
    private int cF = -1;
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.f.1
        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            if (j.b("ksad-video-bottom-card-v2", f.this.qx.mAdTemplate).equals(str)) {
                f.this.bU();
            }
        }
    };
    private RewardActionBarControl.e uF = new RewardActionBarControl.e() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.f.3
        @Override // com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.e
        public final boolean g(a aVar) {
            f fVar = f.this;
            fVar.uZ = fVar.g(aVar);
            return f.this.uZ;
        }
    };
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.f.4
        @Override // com.kwad.components.ad.reward.e.f
        public final void bD() {
            f.this.release();
        }
    };
    private com.kwad.sdk.core.webview.d.a.a cH = new com.kwad.sdk.core.webview.d.a.a() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.f.5
        @Override // com.kwad.sdk.core.webview.d.a.a
        public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
            f.this.qx.mAdOpenInteractionListener.bE();
        }
    };
    private aa.b cI = new aa.b() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.f.7
        @Override // com.kwad.components.core.webview.jshandler.aa.b
        public final void a(aa.a aVar) {
            f.this.cC = aVar;
            f.this.cB.setTranslationY(aVar.height + aVar.bottomMargin);
        }
    };
    private z.b cJ = new z.b() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.f.8
        @Override // com.kwad.components.core.webview.jshandler.z.b
        public final void a(z.a aVar) {
            f.this.uZ = false;
            f.this.aC();
        }
    };
    private ah.b cK = new ah.b() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.f.9
        @Override // com.kwad.components.core.webview.jshandler.ah.b
        public final void a(ah.a aVar) {
            f.this.cF = aVar.status;
            long jElapsedRealtime = SystemClock.elapsedRealtime() - f.this.va;
            com.kwad.sdk.core.e.c.i("RewardActionBarWeb", "load time:" + jElapsedRealtime + ", pageStatus: " + f.this.cF);
            if (f.this.cF == 1) {
                com.kwad.components.core.o.a.pA().g(f.this.qx.mAdTemplate, jElapsedRealtime);
            } else {
                com.kwad.components.ad.reward.monitor.a.a(f.this.qx.pj, "play_card", com.kwad.sdk.core.response.b.b.aV(f.this.qx.mAdTemplate), System.currentTimeMillis() - f.this.cB.getLoadTime(), 3);
            }
            if (f.this.qx.fT()) {
                return;
            }
            f.this.oY.im();
        }
    };

    private void a(com.kwad.components.core.webview.a aVar) {
        aVar.a(new r(this.cE, this.mApkDownloadHelper, this.cH));
        aVar.a(new com.kwad.components.core.webview.b.a.f());
        aVar.a(new q(this.cE, this.mApkDownloadHelper, this.qx, -1L, this.cH, null));
        aVar.a(new u(this.cE));
        aVar.a(new x(this.cE));
        aVar.a(new t(this.cE));
        aVar.a(new aa(this.cE, this.cI));
        aVar.a(new ah(this.cK, com.kwad.sdk.core.response.b.b.aV(this.qx.mAdTemplate)));
        am amVar = new am();
        this.cG = amVar;
        aVar.a(amVar);
        aVar.a(new ap(this.cE, this.mApkDownloadHelper));
        aVar.a(new z(this.cJ));
        aVar.a(new ab(this.cE));
        aVar.a(new com.kwad.components.ad.reward.h.b(getContext(), this.qx.mAdTemplate, PlayableSource.ACTIONBAR_CLICK));
    }

    private void aB() {
        z(this.qx.mAdTemplate);
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rz();
        }
        this.cB.setVisibility(0);
        am amVar2 = this.cG;
        if (amVar2 != null) {
            amVar2.rA();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void aC() {
        if (this.cB.getVisibility() != 0) {
            return;
        }
        if (this.cC == null) {
            aD();
            return;
        }
        aE();
        ValueAnimator valueAnimatorC = m.c(this.cB, 0, this.cC.height + this.cC.bottomMargin);
        this.cM = valueAnimatorC;
        valueAnimatorC.setInterpolator(new DecelerateInterpolator(2.0f));
        this.cM.setDuration(300L);
        this.cM.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.f.2
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                f.this.cB.setVisibility(4);
                if (f.this.cG != null) {
                    f.this.cG.rC();
                }
            }

            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationStart(Animator animator) {
                super.onAnimationStart(animator);
                if (f.this.cG != null) {
                    f.this.cG.rB();
                }
            }
        });
        this.cM.start();
    }

    private void aD() {
        if (this.cB.getVisibility() != 0) {
            return;
        }
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rB();
        }
        this.cB.setVisibility(4);
        am amVar2 = this.cG;
        if (amVar2 != null) {
            amVar2.rC();
        }
    }

    private void aE() {
        ValueAnimator valueAnimator = this.cL;
        if (valueAnimator != null) {
            valueAnimator.removeAllListeners();
            this.cL.cancel();
        }
        ValueAnimator valueAnimator2 = this.cM;
        if (valueAnimator2 != null) {
            valueAnimator2.removeAllListeners();
            this.cM.cancel();
        }
    }

    private void aF() {
        int i = this.cF;
        com.kwad.sdk.core.e.c.w("RewardActionBarWeb", "show webCard fail, reason: " + (i == -1 ? "timeout" : i != 1 ? "h5error" : "others"));
    }

    private void av() {
        com.kwad.sdk.core.webview.b bVar = new com.kwad.sdk.core.webview.b();
        this.cE = bVar;
        bVar.setAdTemplate(this.qx.mAdTemplate);
        this.cE.mScreenOrientation = this.qx.mScreenOrientation;
        this.cE.aye = this.qx.mRootContainer;
        this.cE.MT = this.qx.mRootContainer;
        this.cE.Ms = this.cB;
    }

    private void aw() {
        this.cF = -1;
        ax();
        this.cB.setBackgroundColor(0);
        this.cB.getBackground().setAlpha(0);
        this.cB.setVisibility(4);
        this.cB.setClientConfig(this.cB.getClientConfig().cy(this.qx.mAdTemplate).b(getWebListener()));
        this.va = SystemClock.elapsedRealtime();
        this.mUrl = com.kwad.sdk.core.response.b.b.aV(this.qx.mAdTemplate);
        com.kwad.sdk.core.e.c.d("RewardActionBarWeb", "startPreloadWebView url: " + this.mUrl);
        com.kwad.components.ad.reward.monitor.a.a(this.qx.pj, "play_card", this.mUrl);
        this.cB.loadUrl(this.mUrl);
    }

    private void ax() {
        ay();
        com.kwad.components.core.webview.a aVar = new com.kwad.components.core.webview.a(this.cB);
        this.cD = aVar;
        a(aVar);
        this.cB.addJavascriptInterface(this.cD, "KwaiAd");
    }

    private void ay() {
        com.kwad.components.core.webview.a aVar = this.cD;
        if (aVar != null) {
            aVar.destroy();
            this.cD = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bU() {
        if (this.cB == null || !com.kwad.sdk.core.response.b.b.aX(this.qx.mAdTemplate)) {
            return;
        }
        this.mApkDownloadHelper = this.qx.mApkDownloadHelper;
        av();
        aw();
        this.qx.b(this.mPlayEndPageListener);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean g(a aVar) {
        KsAdWebView ksAdWebView = this.cB;
        if (ksAdWebView == null) {
            return false;
        }
        if (ksAdWebView.getVisibility() == 0) {
            return true;
        }
        if (this.cF == 1) {
            h(aVar);
            return true;
        }
        aF();
        return false;
    }

    private KsAdWebView.d getWebListener() {
        return new KsAdWebView.d() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.f.6
            @Override // com.kwad.sdk.core.webview.KsAdWebView.d
            public final void onPageFinished() {
                com.kwad.components.ad.reward.monitor.a.a(f.this.qx.pj, "play_card", f.this.mUrl, System.currentTimeMillis() - f.this.cB.getLoadTime());
            }

            @Override // com.kwad.sdk.core.webview.KsAdWebView.d
            public final void onPageStart() {
            }

            @Override // com.kwad.sdk.core.webview.KsAdWebView.d
            public final void onReceivedHttpError(int i, String str, String str2) {
                com.kwad.components.ad.reward.monitor.a.a(f.this.qx.pj, "play_card", com.kwad.sdk.core.response.b.b.aV(f.this.qx.mAdTemplate), System.currentTimeMillis() - f.this.cB.getLoadTime(), 2);
            }
        };
    }

    private void h(final a aVar) {
        if (this.cC == null) {
            aB();
            return;
        }
        z(this.qx.mAdTemplate);
        aE();
        this.cB.setVisibility(0);
        ValueAnimator valueAnimatorC = m.c(this.cB, this.cC.height + this.cC.bottomMargin, 0);
        this.cL = valueAnimatorC;
        valueAnimatorC.setInterpolator(new DecelerateInterpolator(2.0f));
        this.cL.setDuration(500L);
        this.cL.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.f.10
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                if (f.this.cG != null) {
                    f.this.cG.rA();
                }
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.a(RewardActionBarControl.ShowActionBarResult.SHOW_H5_SUCCESS, f.this.cB);
                }
            }

            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationStart(Animator animator) {
                super.onAnimationStart(animator);
                if (f.this.cG != null) {
                    f.this.cG.rz();
                }
            }
        });
        this.cL.start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void release() {
        this.cF = -1;
        KsAdWebView ksAdWebView = this.cB;
        if (ksAdWebView != null) {
            ksAdWebView.setVisibility(8);
        }
        ay();
    }

    private void z(AdTemplate adTemplate) {
        KsLogoView ksLogoView;
        if (!com.kwad.sdk.core.response.b.a.cq(com.kwad.sdk.core.response.b.d.cg(adTemplate)) || ai.IO() || (ksLogoView = this.so) == null) {
            return;
        }
        ksLogoView.setVisibility(0);
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        com.kwad.components.ad.reward.monitor.a.a(this.qx.pj, "play_card");
        RewardActionBarControl rewardActionBarControl = this.qx.oY;
        this.oY = rewardActionBarControl;
        rewardActionBarControl.a(this.uF);
        if (com.kwad.components.ad.reward.j.d(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        } else {
            bU();
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.cB = (KsAdWebView) findViewById(R.id.ksad_play_web_card_webView);
        this.so = (KsLogoView) findViewById(R.id.ksad_ad_label_play_bar);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        RewardActionBarControl rewardActionBarControl = this.oY;
        if (rewardActionBarControl != null) {
            rewardActionBarControl.a((RewardActionBarControl.e) null);
        }
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.qx.c(this.mPlayEndPageListener);
        aE();
        release();
    }
}
