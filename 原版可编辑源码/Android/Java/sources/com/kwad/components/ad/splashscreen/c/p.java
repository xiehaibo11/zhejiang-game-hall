package com.kwad.components.ad.splashscreen.c;

import android.content.Context;
import android.os.SystemClock;
import android.os.Vibrator;
import android.text.TextUtils;
import android.view.ViewGroup;
import android.view.ViewStub;
import android.webkit.WebView;
import android.widget.FrameLayout;
import com.kwad.components.ad.splashscreen.h;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.ao;
import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.sdk.R;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.utils.bj;
import com.tkay.expressad.foundation.d.r;
import org.json.JSONException;
import org.json.JSONObject;

public final class p extends e implements com.kwad.components.ad.splashscreen.e, com.kwad.components.ad.splashscreen.g {
    private com.kwad.components.ad.splashscreen.f.b DG;
    private boolean DH;
    private long DJ;
    private am DK;
    private ViewGroup DM;
    private KsAdWebView cB;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private com.kwad.sdk.core.g.d dO;
    private Vibrator dP;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private long mStartTime;
    private boolean DI = false;
    private boolean DL = false;
    private final Runnable DN = new Runnable() {
        @Override
        public final void run() {
            p.a(p.this, true);
            com.kwad.components.ad.splashscreen.monitor.b.a(com.kwad.sdk.core.response.b.b.aT(p.this.mAdTemplate), SystemClock.elapsedRealtime() - p.this.DJ, 1, "");
            p.this.ls();
        }
    };

    private Vibrator F(Context context) {
        if (context != null) {
            return (Vibrator) getContext().getSystemService("vibrator");
        }
        return null;
    }

    private void a(WebView webView, String str) {
        ay();
        webView.getSettings().setAllowFileAccess(true);
        com.kwad.components.core.webview.a aVar = new com.kwad.components.core.webview.a(webView);
        this.cD = aVar;
        a(aVar, str);
        webView.addJavascriptInterface(this.cD, "KwaiAd");
    }

    private void a(com.kwad.components.core.webview.a aVar, final String str) {
        aVar.a(new ap(this.cE, this.CM.mApkDownloadHelper));
        aVar.a(dt());
        aVar.a(ds());
        aVar.a(new u(this.cE));
        aVar.a(new com.kwad.components.core.webview.b.a.f());
        aVar.a(new ah(new ah.b() {
            @Override
            public final void a(ah.a aVar2) {
                com.kwad.sdk.core.e.c.d("SplashWebViewPresenter", "updatePageStatus: " + aVar2);
                bj.b(p.this.DN);
                if (aVar2.status != 1) {
                    com.kwad.components.ad.splashscreen.monitor.b.a(str, SystemClock.elapsedRealtime() - p.this.DJ, 3, "");
                    p.this.ls();
                    return;
                }
                p.this.CM.Cs = SystemClock.elapsedRealtime() - p.this.mStartTime;
                if (p.this.DL) {
                    p.this.CM.isWebTimeout = true;
                } else if (p.this.DK != null) {
                    p.this.DK.rz();
                    p.this.DK.rA();
                }
                if (com.kwad.sdk.core.response.b.b.do(p.this.mAdInfo)) {
                    p.this.lr();
                }
            }
        }, str));
        aVar.a(new ao(new ao.a() {
            @Override
            public final void bA() {
                p.this.bs();
            }
        }));
        aVar.a(new ab(this.cE));
        am amVar = new am();
        this.DK = amVar;
        aVar.a(amVar);
    }

    private void a(KsAdWebView ksAdWebView, final String str) {
        ksAdWebView.setBackgroundColor(0);
        ksAdWebView.setVisibility(0);
        av();
        a((WebView) ksAdWebView, str);
        ksAdWebView.setClientConfig(ksAdWebView.getClientConfig().cy(this.CM.mAdTemplate).b(new com.kwad.sdk.core.webview.f() {
            @Override
            public final void onPageFinished() {
                super.onPageFinished();
                com.kwad.components.ad.splashscreen.monitor.b.d(str, SystemClock.elapsedRealtime() - p.this.DJ);
            }

            @Override
            public final void onReceivedHttpError(int i, String str2, String str3) {
                super.onReceivedHttpError(i, str2, str3);
                bj.b(p.this.DN);
                p.this.ls();
                com.kwad.components.ad.splashscreen.monitor.b.a(str, SystemClock.elapsedRealtime() - p.this.DJ, 2, str2);
            }
        }));
        com.kwad.components.ad.splashscreen.monitor.b.Y(str);
        if (!com.kwad.sdk.core.config.d.a(com.kwad.components.ad.splashscreen.b.a.Cz)) {
            ksAdWebView.loadUrl(str);
            return;
        }
        try {
            ksAdWebView.loadUrl(str);
        } catch (Throwable unused) {
            ls();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x0051  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(boolean z, int i, z.b bVar, int i2) {
        this.CM.kE();
        int i3 = 0;
        boolean z2 = bVar != null;
        boolean z3 = i == 1;
        if (!z2) {
            JSONObject jSONObject = new JSONObject();
            try {
                if (this.CM != null) {
                    if (this.CM.Cd != null) {
                        jSONObject.put(r.ag, this.CM.Cd.getCurrentPosition());
                    }
                    if (z) {
                        i3 = 153;
                    } else if (z3) {
                        i3 = 132;
                    }
                    try {
                        com.kwad.sdk.core.report.a.a(this.CM.mAdTemplate, new com.kwad.sdk.core.report.j().cg(i3), jSONObject);
                    } catch (JSONException e) {
                        e = e;
                        com.kwad.sdk.core.e.c.printStackTrace(e);
                    }
                } else {
                    i3 = i2;
                }
            } catch (JSONException e2) {
                e = e2;
                i3 = i2;
            }
        }
        a.a aVarA = new a.a(this.CM.mRootContainer.getContext()).P(this.CM.mAdTemplate).b(this.CM.mApkDownloadHelper).am(z3).ao(i).a(bVar);
        if (!z2) {
            i2 = i3;
        }
        com.kwad.components.core.e.d.a.a(aVarA.an(i2).am(1).ao(z2).a(new a.b() {
            @Override
            public final void onAdClicked() {
            }
        }));
    }

    static boolean a(p pVar, boolean z) {
        pVar.DL = true;
        return true;
    }

    private void av() {
        com.kwad.sdk.core.webview.b bVar = new com.kwad.sdk.core.webview.b();
        this.cE = bVar;
        bVar.setAdTemplate(this.mAdTemplate);
        this.cE.mScreenOrientation = 0;
        this.cE.aye = this.CM.mRootContainer;
        this.cE.MT = this.CM.mRootContainer;
        this.cE.Ms = this.cB;
        this.cE.mReportExtData = null;
        this.cE.ayg = false;
        this.cE.ayh = com.kwad.components.ad.splashscreen.h.m(this.mAdInfo);
    }

    private void ay() {
        com.kwad.components.core.webview.a aVar = this.cD;
        if (aVar != null) {
            aVar.destroy();
            this.cD = null;
        }
    }

    private void bs() {
        if (this.dO != null || this.DI) {
            return;
        }
        com.kwad.sdk.core.g.d dVar = new com.kwad.sdk.core.g.d(com.kwad.sdk.core.response.b.b.bD(this.CM.mAdTemplate));
        this.dO = dVar;
        dVar.a(new com.kwad.sdk.core.g.b() {
            @Override
            public final void a(double d) {
                boolean zMZ = com.kwad.components.core.e.c.b.mZ();
                if (!p.this.CM.Ce.sB() || zMZ) {
                    p.this.lq();
                    return;
                }
                p.this.h(d);
                p.this.lq();
                if (p.this.dP == null) {
                    p pVar = p.this;
                    pVar.dP = pVar.F(pVar.getContext());
                }
                bj.a(p.this.getContext(), p.this.dP);
            }

            @Override
            public final void aT() {
            }
        });
        this.dO.bg(getContext());
    }

    private com.kwad.components.core.webview.jshandler.o ds() {
        return new com.kwad.components.core.webview.jshandler.o(this.cE, this.CM.mApkDownloadHelper, new com.kwad.sdk.core.webview.d.a.a() {
            @Override
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
                if (com.kwad.sdk.d.a.a.yD()) {
                    return;
                }
                if (aVar.Ek() || com.kwad.components.ad.splashscreen.h.m(p.this.mAdInfo)) {
                    z.b bVar = new z.b();
                    bVar.UP = aVar.Va.UP;
                    p.this.a(false, aVar.UZ, bVar, aVar.jG);
                }
            }
        });
    }

    private com.kwad.components.core.webview.jshandler.r dt() {
        return new com.kwad.components.core.webview.jshandler.r(this.cE, this.CM.mApkDownloadHelper, new com.kwad.sdk.core.webview.d.a.a() {
            @Override
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
                if (aVar.UX || !com.kwad.components.ad.splashscreen.h.m(p.this.mAdInfo)) {
                    p.this.a(false, aVar.UX ? 1 : 3, null, aVar.jG);
                }
            }
        });
    }

    private void h(final double d) {
        if (this.CM != null) {
            this.CM.a(1, getContext(), 157, 2, new h.a() {
                @Override
                public final void b(com.kwad.sdk.core.report.j jVar) {
                    jVar.i(d);
                }
            });
        }
    }

    private void lq() {
        bj.a(new Runnable() {
            @Override
            public final void run() {
                p.this.dO.CG();
            }
        }, null, 500L);
    }

    private void ls() {
        Runnable runnable;
        this.DI = true;
        KsAdWebView ksAdWebView = this.cB;
        if (ksAdWebView != null) {
            ksAdWebView.setVisibility(8);
        }
        ViewGroup viewGroup = this.DM;
        if (viewGroup != null) {
            viewGroup.setVisibility(8);
        }
        if (com.kwad.sdk.core.response.b.b.dg(this.mAdInfo)) {
            runnable = new Runnable() {
                @Override
                public final void run() {
                    p.this.a((Presenter) new m(), true);
                }
            };
        } else if (com.kwad.sdk.core.response.b.b.di(this.mAdInfo)) {
            runnable = new Runnable() {
                @Override
                public final void run() {
                    p.this.a((Presenter) new l(), true);
                }
            };
        } else {
            if (!com.kwad.sdk.core.response.b.b.dl(this.mAdInfo)) {
                lt();
                return;
            }
            runnable = new Runnable() {
                @Override
                public final void run() {
                    p.this.a((Presenter) new n(), true);
                }
            };
        }
        bj.postOnUiThread(runnable);
    }

    private void lt() {
        lr();
        com.kwad.components.ad.splashscreen.f.b bVar = new com.kwad.components.ad.splashscreen.f.b((ViewGroup) getRootView(), (ViewStub) findViewById(R.id.ksad_splash_actionbar_native_stub), com.kwad.sdk.core.response.b.c.bV(this.mAdTemplate), this.CM.mApkDownloadHelper);
        this.DG = bVar;
        bVar.G(this.mAdTemplate);
        this.DG.a(this);
        this.DG.ls();
    }

    @Override
    public final void X(int i) {
    }

    @Override
    public final void ah() {
        super.ah();
        this.mStartTime = SystemClock.elapsedRealtime();
        if (com.kwad.sdk.core.config.d.a(com.kwad.components.ad.splashscreen.b.a.Cz)) {
            ViewGroup viewGroup = (ViewGroup) findViewById(R.id.ksad_splash_webview_container);
            this.DM = viewGroup;
            viewGroup.setVisibility(0);
            try {
                this.cB = new KsAdWebView(getContext());
                this.cB.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
                this.DM.addView(this.cB);
            } catch (Throwable unused) {
            }
        } else {
            this.cB = (KsAdWebView) findViewById(R.id.ksad_splash_web_card_webView);
        }
        AdTemplate adTemplate = this.CM.mAdTemplate;
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.DH = false;
        this.DI = false;
        String strAT = com.kwad.sdk.core.response.b.b.aT(this.mAdTemplate);
        if (this.cB == null || TextUtils.isEmpty(strAT) || this.CM.Ci) {
            ls();
        } else {
            this.DJ = SystemClock.elapsedRealtime();
            com.kwad.components.ad.splashscreen.monitor.b.kP();
            a(this.cB, strAT);
            bj.a(this.DN, null, com.kwad.sdk.core.response.b.b.dq(this.mAdInfo));
        }
        this.CM.a(this);
    }

    @Override
    public final void f(boolean z, boolean z2) {
        com.kwad.sdk.core.e.c.d("SplashWebViewPresenter", "isClick: " + z + ", isActionBar: " + z2);
        a(!z, z2 ? 1 : 2, null, 132);
    }

    @Override
    public final void kD() {
        com.kwad.sdk.core.g.d dVar = this.dO;
        if (dVar != null) {
            dVar.bh(getContext());
        }
    }

    public final void lr() {
        if (this.DH) {
            return;
        }
        this.DH = true;
        z.b bVar = new z.b();
        z.a aVar = new z.a();
        aVar.asJ = com.kwad.components.ad.splashscreen.local.b.q(this.mAdInfo);
        bVar.att = aVar;
        com.kwad.sdk.core.report.a.a(this.CM.mAdTemplate, com.tkay.expressad.video.module.a.a.N, bVar, (JSONObject) null);
        com.kwad.components.core.webview.b.d.a.sb().aR(com.tkay.expressad.video.module.a.a.N);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.ad.splashscreen.f.b bVar = this.DG;
        if (bVar != null) {
            bVar.onUnbind();
        }
        com.kwad.sdk.core.g.d dVar = this.dO;
        if (dVar != null) {
            dVar.bh(getContext());
        }
        am amVar = this.DK;
        if (amVar != null) {
            amVar.rB();
            this.DK.rC();
        }
        ay();
    }
}
