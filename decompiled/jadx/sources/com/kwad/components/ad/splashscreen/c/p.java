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
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.ao;
import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.components.core.webview.jshandler.r;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.sdk.R;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
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
    private final Runnable DN = new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.p.1
        @Override // java.lang.Runnable
        public final void run() {
            p.a(p.this, true);
            com.kwad.components.ad.splashscreen.monitor.b.a(com.kwad.sdk.core.response.b.b.aT(p.this.mAdTemplate), SystemClock.elapsedRealtime() - p.this.DJ, 1, "");
            p.this.ls();
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public Vibrator F(Context context) {
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
        aVar.a(new ah(new ah.b() { // from class: com.kwad.components.ad.splashscreen.c.p.7
            @Override // com.kwad.components.core.webview.jshandler.ah.b
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
                if (com.kwad.sdk.core.response.b.b.m20do(p.this.mAdInfo)) {
                    p.this.lr();
                }
            }
        }, str));
        aVar.a(new ao(new ao.a() { // from class: com.kwad.components.ad.splashscreen.c.p.8
            @Override // com.kwad.components.core.webview.jshandler.ao.a
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
        ksAdWebView.setClientConfig(ksAdWebView.getClientConfig().cy(this.CM.mAdTemplate).b(new com.kwad.sdk.core.webview.f() { // from class: com.kwad.components.ad.splashscreen.c.p.6
            @Override // com.kwad.sdk.core.webview.f, com.kwad.sdk.core.webview.KsAdWebView.d
            public final void onPageFinished() {
                super.onPageFinished();
                com.kwad.components.ad.splashscreen.monitor.b.d(str, SystemClock.elapsedRealtime() - p.this.DJ);
            }

            @Override // com.kwad.sdk.core.webview.f, com.kwad.sdk.core.webview.KsAdWebView.d
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

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0051  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(boolean r9, int r10, com.kwad.sdk.core.report.z.b r11, int r12) {
        /*
            r8 = this;
            com.kwad.components.ad.splashscreen.h r0 = r8.CM
            r0.kE()
            r0 = 0
            r1 = 1
            if (r11 == 0) goto Lb
            r2 = r1
            goto Lc
        Lb:
            r2 = r0
        Lc:
            if (r10 != r1) goto L10
            r3 = r1
            goto L11
        L10:
            r3 = r0
        L11:
            if (r2 != 0) goto L51
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            com.kwad.components.ad.splashscreen.h r5 = r8.CM     // Catch: org.json.JSONException -> L4b
            if (r5 == 0) goto L51
            com.kwad.components.ad.splashscreen.h r5 = r8.CM     // Catch: org.json.JSONException -> L4b
            com.kwad.components.ad.splashscreen.e.a r5 = r5.Cd     // Catch: org.json.JSONException -> L4b
            if (r5 == 0) goto L2f
            java.lang.String r5 = "duration"
            com.kwad.components.ad.splashscreen.h r6 = r8.CM     // Catch: org.json.JSONException -> L4b
            com.kwad.components.ad.splashscreen.e.a r6 = r6.Cd     // Catch: org.json.JSONException -> L4b
            long r6 = r6.getCurrentPosition()     // Catch: org.json.JSONException -> L4b
            r4.put(r5, r6)     // Catch: org.json.JSONException -> L4b
        L2f:
            if (r9 == 0) goto L34
            r0 = 153(0x99, float:2.14E-43)
            goto L38
        L34:
            if (r3 == 0) goto L38
            r0 = 132(0x84, float:1.85E-43)
        L38:
            com.kwad.sdk.core.report.j r9 = new com.kwad.sdk.core.report.j     // Catch: org.json.JSONException -> L49
            r9.<init>()     // Catch: org.json.JSONException -> L49
            com.kwad.sdk.core.report.j r9 = r9.cg(r0)     // Catch: org.json.JSONException -> L49
            com.kwad.components.ad.splashscreen.h r5 = r8.CM     // Catch: org.json.JSONException -> L49
            com.kwad.sdk.core.response.model.AdTemplate r5 = r5.mAdTemplate     // Catch: org.json.JSONException -> L49
            com.kwad.sdk.core.report.a.a(r5, r9, r4)     // Catch: org.json.JSONException -> L49
            goto L52
        L49:
            r9 = move-exception
            goto L4d
        L4b:
            r9 = move-exception
            r0 = r12
        L4d:
            com.kwad.sdk.core.e.c.printStackTrace(r9)
            goto L52
        L51:
            r0 = r12
        L52:
            com.kwad.components.core.e.d.a$a r9 = new com.kwad.components.core.e.d.a$a
            com.kwad.components.ad.splashscreen.h r4 = r8.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r4 = r4.mRootContainer
            android.content.Context r4 = r4.getContext()
            r9.<init>(r4)
            com.kwad.components.ad.splashscreen.h r4 = r8.CM
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            com.kwad.components.core.e.d.a$a r9 = r9.P(r4)
            com.kwad.components.ad.splashscreen.h r4 = r8.CM
            com.kwad.components.core.e.d.c r4 = r4.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r9 = r9.b(r4)
            com.kwad.components.core.e.d.a$a r9 = r9.am(r3)
            com.kwad.components.core.e.d.a$a r9 = r9.ao(r10)
            com.kwad.components.core.e.d.a$a r9 = r9.a(r11)
            if (r2 == 0) goto L7e
            goto L7f
        L7e:
            r12 = r0
        L7f:
            com.kwad.components.core.e.d.a$a r9 = r9.an(r12)
            com.kwad.components.core.e.d.a$a r9 = r9.am(r1)
            com.kwad.components.core.e.d.a$a r9 = r9.ao(r2)
            com.kwad.components.ad.splashscreen.c.p$5 r10 = new com.kwad.components.ad.splashscreen.c.p$5
            r10.<init>()
            com.kwad.components.core.e.d.a$a r9 = r9.a(r10)
            com.kwad.components.core.e.d.a.a(r9)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.ad.splashscreen.c.p.a(boolean, int, com.kwad.sdk.core.report.z$b, int):void");
    }

    static /* synthetic */ boolean a(p pVar, boolean z) {
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

    /* JADX INFO: Access modifiers changed from: private */
    public void bs() {
        if (this.dO != null || this.DI) {
            return;
        }
        com.kwad.sdk.core.g.d dVar = new com.kwad.sdk.core.g.d(com.kwad.sdk.core.response.b.b.bD(this.CM.mAdTemplate));
        this.dO = dVar;
        dVar.a(new com.kwad.sdk.core.g.b() { // from class: com.kwad.components.ad.splashscreen.c.p.9
            @Override // com.kwad.sdk.core.g.b
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

            @Override // com.kwad.sdk.core.g.b
            public final void aT() {
            }
        });
        this.dO.bg(getContext());
    }

    private com.kwad.components.core.webview.jshandler.o ds() {
        return new com.kwad.components.core.webview.jshandler.o(this.cE, this.CM.mApkDownloadHelper, new com.kwad.sdk.core.webview.d.a.a() { // from class: com.kwad.components.ad.splashscreen.c.p.3
            @Override // com.kwad.sdk.core.webview.d.a.a
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

    private r dt() {
        return new r(this.cE, this.CM.mApkDownloadHelper, new com.kwad.sdk.core.webview.d.a.a() { // from class: com.kwad.components.ad.splashscreen.c.p.4
            @Override // com.kwad.sdk.core.webview.d.a.a
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
                if (aVar.UX || !com.kwad.components.ad.splashscreen.h.m(p.this.mAdInfo)) {
                    p.this.a(false, aVar.UX ? 1 : 3, null, aVar.jG);
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void h(final double d) {
        if (this.CM != null) {
            this.CM.a(1, getContext(), 157, 2, new h.a() { // from class: com.kwad.components.ad.splashscreen.c.p.11
                @Override // com.kwad.components.ad.splashscreen.h.a
                public final void b(com.kwad.sdk.core.report.j jVar) {
                    jVar.i(d);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void lq() {
        bj.a(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.p.10
            @Override // java.lang.Runnable
            public final void run() {
                p.this.dO.CG();
            }
        }, null, 500L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void ls() {
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
            runnable = new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.p.12
                @Override // java.lang.Runnable
                public final void run() {
                    p.this.a((Presenter) new m(), true);
                }
            };
        } else if (com.kwad.sdk.core.response.b.b.di(this.mAdInfo)) {
            runnable = new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.p.13
                @Override // java.lang.Runnable
                public final void run() {
                    p.this.a((Presenter) new l(), true);
                }
            };
        } else {
            if (!com.kwad.sdk.core.response.b.b.dl(this.mAdInfo)) {
                lt();
                return;
            }
            runnable = new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.p.2
                @Override // java.lang.Runnable
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

    @Override // com.kwad.components.ad.splashscreen.g
    public final void X(int i) {
    }

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
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

    @Override // com.kwad.components.ad.splashscreen.e
    public final void f(boolean z, boolean z2) {
        com.kwad.sdk.core.e.c.d("SplashWebViewPresenter", "isClick: " + z + ", isActionBar: " + z2);
        a(!z, z2 ? 1 : 2, null, 132);
    }

    @Override // com.kwad.components.ad.splashscreen.g
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

    @Override // com.kwad.sdk.mvp.Presenter
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
