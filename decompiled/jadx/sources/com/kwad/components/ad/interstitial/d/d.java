package com.kwad.components.ad.interstitial.d;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.graphics.Outline;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Vibrator;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewOutlineProvider;
import android.view.ViewParent;
import android.widget.ImageView;
import com.kwad.components.ad.g.a.a.b;
import com.kwad.components.ad.interstitial.d.c;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.components.core.video.a;
import com.kwad.components.core.webview.b.a.o;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.a.u;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.y;
import com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler;
import com.kwad.components.core.webview.jshandler.aa;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.af;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.ao;
import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.components.core.webview.jshandler.av;
import com.kwad.components.core.webview.jshandler.r;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.components.core.webview.jshandler.x;
import com.kwad.components.core.webview.jshandler.z;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.api.KsInterstitialAd;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.core.webview.a.c;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.bm;
import com.kwad.sdk.widget.KSFrameLayout;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends b {
    private static long jM = 400;
    private static float jN = 0.8f;
    private static float jO = 1.0f;
    private static float jP = 0.749f;
    private com.kwad.components.core.widget.a.b bG;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private KsAdVideoPlayConfig dJ;
    private com.kwad.sdk.core.g.d dO;
    private Vibrator dP;
    private ImageView ew;
    private com.kwad.sdk.core.video.videoview.a ex;
    private am fn;
    private boolean fr;
    private ao jL;
    private KSFrameLayout jQ;
    private KSFrameLayout jR;
    private Dialog jS;
    private KsAdWebView jT;
    private ImageView jU;
    private a.c jV;
    private p jW;
    private c.a jX;
    private com.kwad.components.ad.g.a.a.b jY;
    private c jf;
    protected AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    protected Context mContext;
    private Handler mHandler = new Handler(Looper.getMainLooper());
    private int cF = -1;
    private boolean jZ = false;
    private h ka = new h() { // from class: com.kwad.components.ad.interstitial.d.d.1
        @Override // com.kwad.components.ad.interstitial.d.h
        public final void du() {
            d.this.cV.aK();
        }

        @Override // com.kwad.components.ad.interstitial.d.h
        public final void dv() {
            d.this.cV.aL();
        }
    };
    private com.kwad.sdk.core.h.c cV = new com.kwad.sdk.core.h.d() { // from class: com.kwad.components.ad.interstitial.d.d.12
        @Override // com.kwad.sdk.core.h.d, com.kwad.sdk.core.h.c
        public final void aK() {
            com.kwad.sdk.core.e.c.d("InterstitialWebViewPresenter", "onPageVisible");
            if (d.this.fn != null) {
                d.this.fn.rz();
                d.this.fn.rA();
            }
        }

        @Override // com.kwad.sdk.core.h.d, com.kwad.sdk.core.h.c
        public final void aL() {
            com.kwad.sdk.core.e.c.d("InterstitialWebViewPresenter", "onPageInvisible");
            if (d.this.fn != null) {
                d.this.fn.rB();
                d.this.fn.rC();
            }
        }
    };
    private final Runnable kb = new Runnable() { // from class: com.kwad.components.ad.interstitial.d.d.20
        @Override // java.lang.Runnable
        public final void run() {
            com.kwad.sdk.core.e.c.d("InterstitialWebViewPresenter", "rollBackRunnable run");
            d.this.s("4");
        }
    };
    private ab.a kc = new ab.a() { // from class: com.kwad.components.ad.interstitial.d.d.25
        @Override // com.kwad.components.core.webview.jshandler.ab.a
        public final void onAdShow() {
            if (d.this.mAdTemplate.mPvReported || d.this.jf.jk || d.this.jf.hz == null) {
                return;
            }
            d.this.jf.hz.onAdShow();
            d.this.jf.hG.getTimerHelper().startTiming();
            com.kwad.components.ad.interstitial.monitor.b.cL();
            com.kwad.components.ad.interstitial.monitor.b.b(d.this.mAdTemplate, 2);
        }
    };
    private ah.b cK = new ah.b() { // from class: com.kwad.components.ad.interstitial.d.d.18
        @Override // com.kwad.components.core.webview.jshandler.ah.b
        public final void a(ah.a aVar) {
            if (d.this.fr || d.this.jZ) {
                return;
            }
            d.this.cF = aVar.status;
            if (d.this.cF != 1) {
                d.this.s("3");
                return;
            }
            d.this.jT.setVisibility(0);
            com.kwad.components.core.o.a.pA().U(d.this.mAdTemplate);
            d.this.mHandler.removeCallbacksAndMessages(null);
            bj.b(d.this.kb);
            if (d.this.jY != null) {
                d.this.jY.eX();
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public static ViewGroup.LayoutParams A(int i) {
        int i2 = (int) (i * jP);
        return new ViewGroup.LayoutParams((int) (i2 / 0.749f), i2);
    }

    private static float a(boolean z, boolean z2) {
        return (z && z2) ? 1.7777778f : 0.749f;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static ViewGroup.LayoutParams a(int i, boolean z) {
        int i2 = (int) (i * (z ? jN : jO));
        return new ViewGroup.LayoutParams(i2, (int) (i2 * (z ? 1.7777778f : 0.749f)));
    }

    private static ViewGroup.MarginLayoutParams a(WebCardVideoPositionHandler.VideoPosition videoPosition, ViewGroup.MarginLayoutParams marginLayoutParams) {
        marginLayoutParams.topMargin = videoPosition.topMargin;
        marginLayoutParams.leftMargin = videoPosition.leftMargin;
        marginLayoutParams.width = videoPosition.width;
        marginLayoutParams.height = videoPosition.height;
        return marginLayoutParams;
    }

    private static void a(ViewGroup.MarginLayoutParams marginLayoutParams, ViewGroup.MarginLayoutParams marginLayoutParams2) {
        marginLayoutParams2.leftMargin = marginLayoutParams.leftMargin;
        marginLayoutParams2.rightMargin = marginLayoutParams.rightMargin;
        marginLayoutParams2.topMargin = marginLayoutParams.topMargin;
        marginLayoutParams2.bottomMargin = marginLayoutParams.bottomMargin;
        marginLayoutParams2.width = marginLayoutParams.width;
        marginLayoutParams2.height = marginLayoutParams.height;
    }

    private void a(com.kwad.components.core.webview.a aVar, String str) {
        aVar.a(dt());
        aVar.a(ds());
        aVar.a(new com.kwad.components.core.webview.b.a.f());
        aVar.a(dl());
        aVar.a(new u(this.cE));
        aVar.a(dk());
        aVar.a(dj());
        aVar.a(dp());
        am amVar = new am();
        this.fn = amVar;
        aVar.a(amVar);
        this.jf.a(dm());
        aVar.a(dq());
        aVar.a(dn());
        aVar.a(new x(this.cE));
        aVar.a(dg());
        aVar.a(new ah(this.cK, str));
        aVar.a(de());
        ab abVar = new ab(this.cE);
        abVar.a(this.kc);
        aVar.a(abVar);
        aVar.a(m16do());
        aVar.a(new af(getOpenNewPageListener()));
        if (com.kwad.sdk.core.response.b.b.cX(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate))) {
            aVar.a(dd());
        }
        if (dh() != null) {
            aVar.a(this.jY);
        }
        aVar.a(df());
        aVar.a(di());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(AdInfo adInfo, WebCardVideoPositionHandler.VideoPosition videoPosition, KSFrameLayout kSFrameLayout, boolean z) {
        kSFrameLayout.setWidthBasedRatio(!z);
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) kSFrameLayout.getLayoutParams();
        com.kwad.sdk.core.e.c.d("InterstitialWebViewPresenter", "updateVideoContainerSize before size: " + marginLayoutParams.width + ", " + marginLayoutParams.height);
        a(videoPosition, marginLayoutParams);
        ViewGroup.MarginLayoutParams marginLayoutParams2 = new ViewGroup.MarginLayoutParams(marginLayoutParams);
        float fAP = com.kwad.sdk.core.response.b.a.aP(adInfo);
        com.kwad.sdk.core.e.c.d("InterstitialWebViewPresenter", "updateVideoContainerSize materialRatio: " + fAP);
        if (!z || fAP <= 0.0f) {
            kSFrameLayout.setRatio(0.0f);
        } else {
            int i = marginLayoutParams.width;
            int i2 = (int) (marginLayoutParams.height / fAP);
            marginLayoutParams.width = i2;
            marginLayoutParams.leftMargin += (i - i2) / 2;
            if (marginLayoutParams.width != 0) {
                float f = marginLayoutParams.height / marginLayoutParams.width;
                com.kwad.sdk.core.e.c.d("InterstitialWebViewPresenter", "cardParams ratio: " + f);
                kSFrameLayout.setRatio(f);
            }
        }
        com.kwad.sdk.core.e.c.d("InterstitialWebViewPresenter", "cardParams width: " + marginLayoutParams.width + ", height: " + marginLayoutParams.height);
        kSFrameLayout.setLayoutParams(marginLayoutParams);
        float dimension = getContext().getResources().getDimension(R.dimen.ksad_interstitial_card_radius);
        if (videoPosition.cornerRadius != null) {
            kSFrameLayout.setRadius((float) videoPosition.cornerRadius.topLeft, (float) videoPosition.cornerRadius.topRight, (float) videoPosition.cornerRadius.bottomRight, (float) videoPosition.cornerRadius.bottomLeft);
        } else if (marginLayoutParams.width > marginLayoutParams.height) {
            kSFrameLayout.setRadius(dimension, dimension, 0.0f, 0.0f);
        } else {
            kSFrameLayout.setRadius(dimension, dimension, dimension, dimension);
        }
        if (z) {
            this.jU.setVisibility(0);
            ViewGroup.MarginLayoutParams marginLayoutParams3 = (ViewGroup.MarginLayoutParams) this.jU.getLayoutParams();
            a(marginLayoutParams2, marginLayoutParams3);
            this.jU.setLayoutParams(marginLayoutParams3);
            this.jf.a(this.mContext, adInfo, this.mAdTemplate, this.jU);
        } else {
            this.jU.setVisibility(8);
        }
        if (Build.VERSION.SDK_INT >= 21) {
            kSFrameLayout.setOutlineProvider(new ViewOutlineProvider() { // from class: com.kwad.components.ad.interstitial.d.d.17
                @Override // android.view.ViewOutlineProvider
                public final void getOutline(View view, Outline outline) {
                    outline.setRect(0, 0, view.getWidth(), view.getHeight());
                }
            });
            kSFrameLayout.setClipToOutline(true);
        }
    }

    static /* synthetic */ boolean a(d dVar, boolean z) {
        dVar.jZ = true;
        return true;
    }

    private void av() {
        com.kwad.sdk.core.webview.b bVar = new com.kwad.sdk.core.webview.b();
        this.cE = bVar;
        bVar.setAdTemplate(this.jf.mAdTemplate);
        this.cE.mScreenOrientation = !ai.IN() ? 1 : 0;
        this.cE.aye = this.jQ;
        this.cE.MT = this.jQ;
        this.cE.Ms = this.jT;
        this.cE.mReportExtData = null;
    }

    private void aw() {
        String strBC = com.kwad.sdk.core.response.b.b.bC(this.mAdTemplate);
        if (TextUtils.isEmpty(strBC) || this.jT == null) {
            s("1");
        } else {
            r(strBC);
        }
    }

    private void ay() {
        com.kwad.components.core.webview.a aVar = this.cD;
        if (aVar != null) {
            aVar.destroy();
            this.cD = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bs() {
        float fBz = com.kwad.sdk.core.response.b.b.bz(this.mAdTemplate);
        if (this.dO == null) {
            com.kwad.sdk.core.g.d dVar = new com.kwad.sdk.core.g.d(fBz);
            this.dO = dVar;
            dVar.a(new com.kwad.sdk.core.g.b() { // from class: com.kwad.components.ad.interstitial.d.d.19
                @Override // com.kwad.sdk.core.g.b
                public final void a(double d) {
                    if (bm.o(d.this.jQ, 100)) {
                        d.this.d(d);
                    }
                    bj.a(new Runnable() { // from class: com.kwad.components.ad.interstitial.d.d.19.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            com.kwad.sdk.core.e.c.d("InterstitialWebViewPresenter", "onShakeEvent openGate2");
                            d.this.dO.CG();
                        }
                    }, null, 500L);
                }

                @Override // com.kwad.sdk.core.g.b
                public final void aT() {
                }
            });
        }
        this.dO.e(fBz);
        this.dO.bg(getContext());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d(double d) {
        this.jf.a(new c.b(getContext()).l(true).c(d).y(2).a(this.jQ.getTouchCoords()).z(157));
        bj.a(getContext(), this.dP);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void dc() {
        final boolean zAO = com.kwad.sdk.core.response.b.a.aO(this.mAdInfo);
        final boolean zIN = ai.IN();
        float fA = a(zIN, zAO);
        com.kwad.sdk.core.e.c.d("InterstitialWebViewPresenter", "replaceNativeView cardRatio: " + fA);
        this.jf.jg.setRatio(fA);
        final ViewGroup viewGroup = (ViewGroup) this.jQ.findViewById(R.id.ksad_interstitial_native);
        viewGroup.setVisibility(0);
        viewGroup.post(new Runnable() { // from class: com.kwad.components.ad.interstitial.d.d.24
            @Override // java.lang.Runnable
            public final void run() {
                ViewGroup.LayoutParams layoutParamsA = zIN ? d.a(d.this.jQ.getWidth(), zAO) : d.A(d.this.jQ.getHeight());
                if (d.this.jT != null) {
                    d.this.jT.setVisibility(8);
                }
                d.this.jR.setVisibility(8);
                ViewParent parent = d.this.jf.jg.getParent();
                if (parent instanceof ViewGroup) {
                    ((ViewGroup) parent).removeView(d.this.jf.jg);
                }
                viewGroup.addView(d.this.jf.jg);
                d.this.jf.jg.f(layoutParamsA.width, layoutParamsA.height);
                d.this.ex.requestLayout();
                d.a(d.this, true);
            }
        });
    }

    private ao dd() {
        ao aoVar = new ao(new ao.a() { // from class: com.kwad.components.ad.interstitial.d.d.26
            @Override // com.kwad.components.core.webview.jshandler.ao.a
            public final void bA() {
                d.this.bs();
            }
        });
        this.jL = aoVar;
        return aoVar;
    }

    private ap de() {
        return new ap(this.cE, this.mApkDownloadHelper);
    }

    private com.kwad.components.core.webview.b.a.g df() {
        com.kwad.components.core.webview.b.b.k kVar = new com.kwad.components.core.webview.b.b.k();
        kVar.WX = this.jf.ju;
        return new com.kwad.components.core.webview.b.a.g(kVar);
    }

    private t dg() {
        t tVar = new t(this.cE);
        tVar.a(new t.b() { // from class: com.kwad.components.ad.interstitial.d.d.2
            @Override // com.kwad.components.core.webview.jshandler.t.b
            public final void a(t.a aVar) {
                aVar.height = com.kwad.sdk.d.a.a.getScreenHeight(d.this.mContext);
                aVar.width = com.kwad.sdk.d.a.a.getScreenHeight(d.this.mContext);
            }
        });
        return tVar;
    }

    private com.kwad.components.ad.g.a.a.b dh() {
        com.kwad.components.ad.g.a.a.b bVarM = com.kwad.components.ad.g.a.a.b.m(this.mAdTemplate);
        this.jY = bVarM;
        if (bVarM != null) {
            bVarM.a(new b.InterfaceC0103b() { // from class: com.kwad.components.ad.interstitial.d.d.3
                @Override // com.kwad.components.ad.g.a.a.b.InterfaceC0103b
                public final void C(int i) {
                    if (i == com.kwad.components.ad.g.a.a.b.nC) {
                        d.this.jf.b(d.this.getContext(), d.this.mAdTemplate);
                        d.this.jf.a(true, -1, d.this.jf.ex);
                    }
                    d.this.dr();
                }
            });
        }
        return this.jY;
    }

    private com.kwad.components.ad.g.a.a.a di() {
        final com.kwad.components.ad.g.a.a.a aVar = new com.kwad.components.ad.g.a.a.a();
        this.jf.jq.add(new c.InterfaceC0110c() { // from class: com.kwad.components.ad.interstitial.d.d.4
            @Override // com.kwad.components.ad.interstitial.d.c.InterfaceC0110c
            public final void da() {
                aVar.eW();
            }
        });
        return aVar;
    }

    private com.kwad.components.core.webview.b.a.u dj() {
        com.kwad.components.core.webview.b.a.u uVar = new com.kwad.components.core.webview.b.a.u();
        uVar.a(new u.a() { // from class: com.kwad.components.ad.interstitial.d.d.5
            @Override // com.kwad.components.core.webview.b.a.u.a
            public final void a(m mVar) {
                d.this.ex.setVideoSoundEnable(!mVar.Xa);
            }
        });
        return uVar;
    }

    private o dk() {
        return new o() { // from class: com.kwad.components.ad.interstitial.d.d.6
            @Override // com.kwad.components.core.webview.b.a.o, com.kwad.components.core.webview.b.a.v, com.kwad.sdk.core.webview.c.a
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                m mVar = new m();
                mVar.Xa = !d.this.dJ.isVideoSoundEnable();
                cVar.a(mVar);
            }
        };
    }

    private aa dl() {
        return new aa(this.cE, new aa.b() { // from class: com.kwad.components.ad.interstitial.d.d.7
            @Override // com.kwad.components.core.webview.jshandler.aa.b
            public final void a(aa.a aVar) {
            }
        });
    }

    private a.c dm() {
        final y yVar = new y();
        a.c cVar = new a.c() { // from class: com.kwad.components.ad.interstitial.d.d.8
            @Override // com.kwad.components.core.video.a.c
            public final void bj() {
                if (d.this.ew.getVisibility() == 0) {
                    d.this.ew.setVisibility(8);
                }
                yVar.Xk = false;
                yVar.Xg = false;
                yVar.nM = (int) Math.ceil(d.this.ex.getCurrentPosition() / 1000.0f);
                d.this.jW.a(yVar);
            }

            @Override // com.kwad.components.core.video.a.c
            public final void bk() {
                yVar.Xk = false;
                yVar.Xg = true;
                yVar.nM = com.kwad.sdk.core.response.b.a.G(com.kwad.sdk.core.response.b.d.cg(d.this.cE.getAdTemplate()));
                d.this.jW.a(yVar);
            }

            @Override // com.kwad.components.core.video.a.c
            public final void d(long j) {
                yVar.Xk = false;
                yVar.Xg = false;
                yVar.nM = (int) Math.ceil(j / 1000.0f);
                d.this.jW.a(yVar);
            }

            @Override // com.kwad.components.core.video.a.c
            public final void onVideoPlayStart() {
                yVar.Xk = false;
                yVar.Xg = false;
                yVar.nM = 0;
                d.this.jW.a(yVar);
            }
        };
        this.jV = cVar;
        return cVar;
    }

    private WebCardVideoPositionHandler dn() {
        return new WebCardVideoPositionHandler(new WebCardVideoPositionHandler.a() { // from class: com.kwad.components.ad.interstitial.d.d.9
            @Override // com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.a
            public final void a(WebCardVideoPositionHandler.VideoPosition videoPosition) {
                com.kwad.sdk.core.e.c.d("InterstitialWebViewPresenter", "onVideoSetPosition hadRollBackToNative: " + d.this.jZ);
                if (d.this.jZ || d.this.mAdInfo == null || !com.kwad.sdk.core.response.b.a.aU(d.this.mAdInfo)) {
                    return;
                }
                c unused = d.this.jf;
                boolean zA = c.a(d.this.mContext, d.this.mAdInfo);
                d dVar = d.this;
                dVar.a(dVar.mAdInfo, videoPosition, d.this.jR, zA);
                d.this.jR.setVisibility(0);
                d.this.jT.setVisibility(0);
            }
        });
    }

    /* JADX INFO: renamed from: do, reason: not valid java name */
    private av m16do() {
        av avVar = new av(getContext(), this.mAdTemplate);
        avVar.a(new av.a() { // from class: com.kwad.components.ad.interstitial.d.d.10
            @Override // com.kwad.components.core.webview.jshandler.av.a
            public final boolean dw() {
                if (d.this.jW != null) {
                    d.this.jW.aO(false);
                }
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.interstitial.d.d.10.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        d.this.dr();
                    }
                });
                boolean z = !d.this.jf.js;
                if (z) {
                    d.this.jf.a(true, -1, d.this.jf.ex);
                }
                return z;
            }
        });
        return avVar;
    }

    private z dp() {
        return new z(new z.b() { // from class: com.kwad.components.ad.interstitial.d.d.13
            @Override // com.kwad.components.core.webview.jshandler.z.b
            public final void a(final z.a aVar) {
                if (d.this.jS != null) {
                    d.this.mHandler.post(new Runnable() { // from class: com.kwad.components.ad.interstitial.d.d.13.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            if (d.this.jf.jk || aVar.type != 0 || d.this.jf.ji || d.this.jf.jj || !com.kwad.components.ad.interstitial.e.a.c(d.this.jf)) {
                                d.this.jf.a(aVar.type == 3, -1, d.this.ex);
                                d.this.dr();
                            } else {
                                d.this.jf.jj = true;
                                com.kwad.components.ad.interstitial.b.b.K(d.this.mContext);
                            }
                        }
                    });
                }
            }
        });
    }

    private p dq() {
        p pVar = new p() { // from class: com.kwad.components.ad.interstitial.d.d.14
            @Override // com.kwad.components.core.webview.b.a.p, com.kwad.components.core.webview.b.a.v, com.kwad.sdk.core.webview.c.a
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                if (d.this.ex.isIdle()) {
                    y yVar = new y();
                    yVar.Xk = false;
                    yVar.Xg = false;
                    yVar.nM = 0;
                    cVar.a(yVar);
                }
                if (d.this.ex.isCompleted()) {
                    y yVar2 = new y();
                    yVar2.Xk = false;
                    yVar2.Xg = true;
                    yVar2.nM = com.kwad.sdk.core.response.b.a.G(com.kwad.sdk.core.response.b.d.cg(d.this.cE.getAdTemplate()));
                    cVar.a(yVar2);
                }
            }
        };
        this.jW = pVar;
        return pVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void dr() {
        Activity ownerActivity;
        KsInterstitialAd.AdInteractionListener adInteractionListener;
        Dialog dialog = this.jS;
        if (dialog == null || (ownerActivity = dialog.getOwnerActivity()) == null || ownerActivity.isFinishing()) {
            return;
        }
        this.jS.dismiss();
        if (!this.jf.jk && (adInteractionListener = this.jf.hz) != null) {
            adInteractionListener.onAdClosed();
        }
        if (this.jf.ex != null) {
            this.jf.ex.release();
        }
    }

    private com.kwad.components.core.webview.jshandler.o ds() {
        return new com.kwad.components.core.webview.jshandler.o(this.cE, this.mApkDownloadHelper, new com.kwad.sdk.core.webview.d.a.a() { // from class: com.kwad.components.ad.interstitial.d.d.15
            @Override // com.kwad.sdk.core.webview.d.a.a
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
                if (aVar != null) {
                    if (!d.this.jf.jk && d.this.jf.hz != null) {
                        d.this.jf.hz.onAdClicked();
                    }
                    d.this.jf.ji = true;
                    if (!d.this.jf.jk) {
                        d.this.jf.ck();
                    }
                    if (d.this.jf.hG == null || !com.kwad.components.ad.interstitial.a.b.cG()) {
                        return;
                    }
                    d.this.jf.a(false, -1, d.this.jf.ex);
                    d.this.jf.hG.dismiss();
                }
            }
        });
    }

    private r dt() {
        return new r(this.cE, this.mApkDownloadHelper, new com.kwad.sdk.core.webview.d.a.a() { // from class: com.kwad.components.ad.interstitial.d.d.16
            @Override // com.kwad.sdk.core.webview.d.a.a
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
                if (aVar != null) {
                    if (!d.this.jf.jk && d.this.jf.hz != null) {
                        d.this.jf.hz.onAdClicked();
                    }
                    d.this.jf.ji = true;
                    if (!d.this.jf.jk) {
                        d.this.jf.ck();
                    }
                    if (d.this.jf.hG == null || !com.kwad.components.ad.interstitial.a.b.cG()) {
                        return;
                    }
                    d.this.jf.a(false, -1, d.this.jf.ex);
                    d.this.jf.hG.dismiss();
                }
            }
        });
    }

    private af.a getOpenNewPageListener() {
        return new af.a() { // from class: com.kwad.components.ad.interstitial.d.d.11
            @Override // com.kwad.components.core.webview.jshandler.af.a
            public final void a(com.kwad.components.core.webview.a.b bVar) {
                AdWebViewActivityProxy.launch(d.this.mContext, new AdWebViewActivityProxy.a.C0160a().aq(bVar.title).ar(bVar.url).ay(true).S(d.this.mAdTemplate).oA());
            }
        };
    }

    private KsAdWebView.d getWebListener() {
        return new KsAdWebView.d() { // from class: com.kwad.components.ad.interstitial.d.d.22
            @Override // com.kwad.sdk.core.webview.KsAdWebView.d
            public final void onPageFinished() {
            }

            @Override // com.kwad.sdk.core.webview.KsAdWebView.d
            public final void onPageStart() {
            }

            @Override // com.kwad.sdk.core.webview.KsAdWebView.d
            public final void onReceivedHttpError(int i, String str, String str2) {
                d.this.s("1");
            }
        };
    }

    private void r(String str) {
        ay();
        c.a aVarB = this.jT.getClientConfig().cy(this.mAdTemplate).b(getWebListener());
        this.jX = aVarB;
        this.jT.setClientConfig(aVarB);
        com.kwad.components.core.webview.a aVar = new com.kwad.components.core.webview.a(this.jT);
        this.cD = aVar;
        a(aVar, str);
        this.jT.addJavascriptInterface(this.cD, "KwaiAd");
        this.jT.setBackgroundColor(0);
        this.jT.setVisibility(4);
        this.jT.loadUrl(str);
        bj.a(this.kb, null, 3000L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void s(String str) {
        com.kwad.sdk.core.e.c.d("InterstitialWebViewPresenter", "handleWebViewError " + str);
        com.kwad.sdk.core.g.d dVar = this.dO;
        if (dVar != null) {
            dVar.bh(getContext());
        }
        this.mHandler.removeCallbacksAndMessages(null);
        if (this.fr) {
            return;
        }
        this.fr = true;
        com.kwad.components.core.o.a aVarPA = com.kwad.components.core.o.a.pA();
        AdTemplate adTemplate = this.mAdTemplate;
        aVarPA.b(adTemplate, com.kwad.sdk.core.response.b.b.bC(adTemplate), str);
        this.mHandler.post(new Runnable() { // from class: com.kwad.components.ad.interstitial.d.d.23
            @Override // java.lang.Runnable
            public final void run() {
                d.this.dc();
                d.this.jf.cP();
            }
        });
        c.a aVar = this.jX;
        if (aVar != null) {
            aVar.b((KsAdWebView.d) null);
        }
    }

    @Override // com.kwad.components.ad.interstitial.d.b, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        c cVar = (c) Gk();
        this.jf = cVar;
        this.jZ = false;
        this.jS = cVar.hG;
        this.dJ = this.jf.dJ;
        this.mApkDownloadHelper = this.jf.mApkDownloadHelper;
        AdTemplate adTemplate = this.jf.mAdTemplate;
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.ex = this.jf.ex;
        this.bG.sy();
        this.bG.a(this.cV);
        this.jf.a(this.ka);
        if (com.kwad.sdk.core.response.b.b.bA(this.mAdTemplate)) {
            this.mHandler.post(new Runnable() { // from class: com.kwad.components.ad.interstitial.d.d.21
                @Override // java.lang.Runnable
                public final void run() {
                    d.this.dc();
                    d.this.jf.cP();
                }
            });
        } else {
            av();
            aw();
        }
    }

    @Override // com.kwad.components.ad.interstitial.d.b
    public final void cN() {
        super.cN();
        com.kwad.components.ad.g.a.a.b bVar = this.jY;
        if (bVar != null) {
            bVar.eZ();
        }
    }

    @Override // com.kwad.components.ad.interstitial.d.b
    public final void cO() {
        super.cO();
        com.kwad.components.ad.g.a.a.b bVar = this.jY;
        if (bVar != null) {
            bVar.eY();
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.jT = (KsAdWebView) getRootView().findViewById(R.id.ksad_web_card_webView);
        this.bG = new com.kwad.components.core.widget.a.b(getRootView(), 100);
        this.jQ = (KSFrameLayout) getRootView().findViewById(R.id.ksad_container);
        this.jR = (KSFrameLayout) getRootView().findViewById(R.id.ksad_video_container);
        this.ew = (ImageView) getRootView().findViewById(R.id.ksad_video_first_frame_container);
        this.jU = (ImageView) getRootView().findViewById(R.id.ksad_interstitial_video_blur);
        Context context = getContext();
        this.mContext = context;
        if (context != null) {
            this.dP = (Vibrator) context.getSystemService("vibrator");
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onDestroy() {
        super.onDestroy();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.mHandler.removeCallbacksAndMessages(null);
        this.bG.b(this.cV);
        this.bG.sz();
        com.kwad.sdk.core.g.d dVar = this.dO;
        if (dVar != null) {
            dVar.bh(getContext());
        }
        c.a aVar = this.jX;
        if (aVar != null) {
            aVar.b((KsAdWebView.d) null);
        }
        this.jf.b(this.ka);
    }
}
