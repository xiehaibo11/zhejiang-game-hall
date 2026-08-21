package com.kwad.components.ad.draw.b.b;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.ValueAnimator;
import android.view.ViewGroup;
import android.view.animation.DecelerateInterpolator;
import com.kwad.components.ad.draw.b.b.a;
import com.kwad.components.core.t.m;
import com.kwad.components.core.video.k;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.jshandler.aa;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.components.core.webview.jshandler.o;
import com.kwad.components.core.webview.jshandler.r;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.components.core.webview.jshandler.x;
import com.kwad.components.core.webview.jshandler.z;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends com.kwad.components.ad.draw.a.a {
    private KsAdWebView cB;
    private aa.a cC;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private am cG;
    private ValueAnimator cL;
    private ValueAnimator cM;
    private ViewGroup ce;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private int cF = -1;
    private k mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.draw.b.b.c.1
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayCompleted() {
            super.onMediaPlayCompleted();
            c.this.release();
        }
    };
    private a.b cw = new a.b() { // from class: com.kwad.components.ad.draw.b.b.c.2
        @Override // com.kwad.components.ad.draw.b.b.a.b
        public final boolean ap() {
            return c.this.az();
        }
    };
    private com.kwad.sdk.core.webview.d.a.a cH = new com.kwad.sdk.core.webview.d.a.a() { // from class: com.kwad.components.ad.draw.b.b.c.3
        @Override // com.kwad.sdk.core.webview.d.a.a
        public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
            if (c.this.bE.bD != null) {
                c.this.bE.bD.onAdClicked();
            }
        }
    };
    private aa.b cI = new aa.b() { // from class: com.kwad.components.ad.draw.b.b.c.4
        @Override // com.kwad.components.core.webview.jshandler.aa.b
        public final void a(aa.a aVar) {
            c.this.cC = aVar;
            c.this.cB.setTranslationY(aVar.height + aVar.bottomMargin);
        }
    };
    private z.b cJ = new z.b() { // from class: com.kwad.components.ad.draw.b.b.c.5
        @Override // com.kwad.components.core.webview.jshandler.z.b
        public final void a(z.a aVar) {
            c.this.aC();
        }
    };
    private ah.b cK = new ah.b() { // from class: com.kwad.components.ad.draw.b.b.c.6
        @Override // com.kwad.components.core.webview.jshandler.ah.b
        public final void a(ah.a aVar) {
            c.this.cF = aVar.status;
            com.kwad.sdk.core.e.c.i("DrawPlayWebCard", "updatePageStatus mPageState: " + aVar);
        }
    };

    private void a(com.kwad.components.core.webview.a aVar) {
        aVar.a(new r(this.cE, this.mApkDownloadHelper, this.cH));
        aVar.a(new o(this.cE, this.mApkDownloadHelper, this.cH));
        aVar.a(new u(this.cE));
        aVar.a(new x(this.cE));
        aVar.a(new t(this.cE));
        aVar.a(new aa(this.cE, this.cI));
        aVar.a(new ah(this.cK, com.kwad.sdk.core.response.b.b.aV(this.mAdTemplate)));
        am amVar = new am();
        this.cG = amVar;
        aVar.a(amVar);
        aVar.a(new ap(this.cE, this.mApkDownloadHelper));
        aVar.a(new z(this.cJ));
        aVar.a(new ab(this.cE));
    }

    private void aA() {
        if (this.cC == null) {
            aB();
            return;
        }
        aE();
        this.ce.setVisibility(8);
        this.cB.setVisibility(0);
        ValueAnimator valueAnimatorC = m.c(this.cB, this.cC.height + this.cC.bottomMargin, 0);
        this.cL = valueAnimatorC;
        valueAnimatorC.setInterpolator(new DecelerateInterpolator(2.0f));
        this.cL.setDuration(300L);
        this.cL.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.draw.b.b.c.7
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                if (c.this.cG != null) {
                    c.this.cG.rA();
                }
            }

            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationStart(Animator animator) {
                super.onAnimationStart(animator);
                if (c.this.cG != null) {
                    c.this.cG.rz();
                }
            }
        });
        this.cL.start();
    }

    private void aB() {
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rz();
        }
        this.ce.setVisibility(8);
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
        this.cM.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.draw.b.b.c.8
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                c.this.cB.setVisibility(4);
                c.this.ce.setVisibility(0);
                if (c.this.cG != null) {
                    c.this.cG.rC();
                }
            }

            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationStart(Animator animator) {
                super.onAnimationStart(animator);
                if (c.this.cG != null) {
                    c.this.cG.rB();
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
        this.ce.setVisibility(0);
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
        com.kwad.sdk.core.e.c.w("DrawPlayWebCard", "show webCard fail, reason: " + (i == -1 ? "timeout" : i != 1 ? "h5error" : "others"));
    }

    private void av() {
        com.kwad.sdk.core.webview.b bVar = new com.kwad.sdk.core.webview.b();
        this.cE = bVar;
        bVar.setAdTemplate(this.bE.mAdTemplate);
        this.cE.mScreenOrientation = 0;
        this.cE.aye = this.bE.mRootContainer;
        this.cE.MT = this.bE.mRootContainer;
        this.cE.Ms = this.cB;
    }

    private void aw() {
        this.cF = -1;
        ax();
        this.cB.setBackgroundColor(0);
        this.cB.getBackground().setAlpha(0);
        this.cB.setVisibility(4);
        this.cB.loadUrl(com.kwad.sdk.core.response.b.b.aV(this.mAdTemplate));
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
    public boolean az() {
        if (this.cF == 1) {
            aA();
            return true;
        }
        aF();
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void release() {
        this.cF = -1;
        this.cB.setVisibility(8);
        ay();
    }

    @Override // com.kwad.components.ad.draw.a.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.mAdTemplate = this.bE.mAdTemplate;
        this.bE.bX.a(this.cw);
        this.mApkDownloadHelper = this.bE.mApkDownloadHelper;
        this.bE.bF.b(this.mVideoPlayStateListener);
        av();
        aw();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.ce = (ViewGroup) findViewById(R.id.ksad_ad_normal_container);
        this.cB = (KsAdWebView) findViewById(R.id.ksad_play_web_card_webView);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.bE.bX.a((a.b) null);
        this.bE.bF.a(this.mVideoPlayStateListener);
        aE();
        release();
    }
}
