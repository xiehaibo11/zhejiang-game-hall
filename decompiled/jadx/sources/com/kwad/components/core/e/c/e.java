package com.kwad.components.core.e.c;

import android.view.View;
import com.kwad.components.core.e.c.b;
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
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.utils.ak;
import com.kwad.sdk.utils.v;
import com.kwad.sdk.utils.w;

/* JADX INFO: loaded from: classes2.dex */
public final class e extends c implements View.OnClickListener {
    public b Jp;
    public b.C0149b Jq;
    private Runnable Jy;
    private KsAdWebView cB;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private am cG;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private boolean Jz = false;
    private com.kwad.sdk.core.webview.d.a.a cH = new com.kwad.sdk.core.webview.d.a.a() { // from class: com.kwad.components.core.e.c.e.1
        @Override // com.kwad.sdk.core.webview.d.a.a
        public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
            com.kwad.sdk.core.e.c.d("DownloadTipsDialogWebCardPresenter", "onAdClicked convertBridgeClicked: " + e.this.Jz);
            e.a(e.this, true);
        }
    };
    private aa.b cI = new aa.b() { // from class: com.kwad.components.core.e.c.e.4
        @Override // com.kwad.components.core.webview.jshandler.aa.b
        public final void a(aa.a aVar) {
            com.kwad.sdk.core.e.c.d("DownloadTipsDialogWebCardPresenter", "onAdFrameValid=" + aVar);
            e.this.cB.setTranslationY((float) (aVar.height + aVar.bottomMargin));
        }
    };
    private z.b cJ = new z.b() { // from class: com.kwad.components.core.e.c.e.5
        @Override // com.kwad.components.core.webview.jshandler.z.b
        public final void a(z.a aVar) {
            com.kwad.sdk.core.e.c.d("DownloadTipsDialogWebCardPresenter", "handleWebCardHide");
            e.this.aD();
        }
    };
    private ah.b cK = new ah.b() { // from class: com.kwad.components.core.e.c.e.6
        @Override // com.kwad.components.core.webview.jshandler.ah.b
        public final void a(ah.a aVar) {
            com.kwad.sdk.core.e.c.i("DownloadTipsDialogWebCardPresenter", "updatePageStatus mPageState: " + aVar);
            if (aVar.status == 1) {
                e.this.nf();
                return;
            }
            e.this.aD();
            if (e.this.getContext() != null) {
                v.L(e.this.getContext(), w.bX(e.this.getContext()));
            }
        }
    };

    private void a(com.kwad.components.core.webview.a aVar) {
        aVar.a(new r(this.cE, this.mApkDownloadHelper, this.cH, false, true));
        aVar.a(new o(this.cE, this.mApkDownloadHelper, this.cH, 1));
        aVar.a(new u(this.cE));
        aVar.a(new x(this.cE));
        aVar.a(new t(this.cE));
        aVar.a(new aa(this.cE, this.cI));
        aVar.a(new ah(this.cK, this.Jq.url));
        am amVar = new am();
        this.cG = amVar;
        aVar.a(amVar);
        aVar.a(new ap(this.cE, this.mApkDownloadHelper, new com.kwad.sdk.core.download.a.c() { // from class: com.kwad.components.core.e.c.e.3
            @Override // com.kwad.sdk.core.download.a.c, com.kwad.sdk.api.KsAppDownloadListener
            public final void onInstalled() {
                super.onInstalled();
                AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(e.this.mAdTemplate);
                String strAq = com.kwad.sdk.core.response.b.a.aq(adInfoCg);
                if (com.kwad.sdk.core.response.b.a.aG(adInfoCg) && com.kwad.sdk.core.response.b.a.ax(adInfoCg) && ak.ak(e.this.getContext(), strAq) && com.kwad.components.core.r.a.pS().pW() && com.kwad.sdk.core.response.b.a.aF(adInfoCg) == 1) {
                    e.this.Jp.dismiss();
                }
            }
        }));
        aVar.a(new z(this.cJ));
        aVar.a(new ab(this.cE));
    }

    static /* synthetic */ boolean a(e eVar, boolean z) {
        eVar.Jz = true;
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void aD() {
        com.kwad.sdk.core.e.c.d("DownloadTipsDialogWebCardPresenter", "hideWithOutAnimation  convertBridgeClicked: " + this.Jz);
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
        if (this.Jz) {
            com.kwad.sdk.core.report.a.aD(this.mAdTemplate);
        }
        b bVar = this.Jp;
        if (bVar == null || !bVar.isShowing()) {
            return;
        }
        this.Jp.al(this.Jz);
    }

    private void av() {
        com.kwad.sdk.core.webview.b bVar = new com.kwad.sdk.core.webview.b();
        this.cE = bVar;
        bVar.setAdTemplate(this.Jr.mAdTemplate);
        this.cE.aye = this.Jr.mRootContainer;
        this.cE.MT = this.Jr.mRootContainer;
        this.cE.Ms = this.cB;
    }

    private void ax() {
        com.kwad.sdk.core.e.c.d("DownloadTipsDialogWebCardPresenter", "setupJsBridge");
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

    private void nd() {
        ax();
        this.cB.loadUrl(this.Jq.url);
        this.cB.postDelayed(ne(), 1500L);
        this.cB.setBackgroundColor(0);
        this.cB.getBackground().setAlpha(0);
        this.cB.setVisibility(0);
    }

    private Runnable ne() {
        if (this.Jy == null) {
            this.Jy = new Runnable() { // from class: com.kwad.components.core.e.c.e.2
                @Override // java.lang.Runnable
                public final void run() {
                    e.this.aD();
                    if (e.this.getContext() != null) {
                        v.L(e.this.getContext(), w.bX(e.this.getContext()));
                    }
                }
            };
        }
        return this.Jy;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void nf() {
        Runnable runnable = this.Jy;
        if (runnable != null) {
            this.cB.removeCallbacks(runnable);
        }
    }

    private void release() {
        this.cB.setVisibility(8);
        this.cB.release();
        ay();
    }

    @Override // com.kwad.components.core.e.c.c, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.Jp = this.Jr.Jp;
        this.Jq = this.Jr.Jq;
        this.mAdTemplate = this.Jr.mAdTemplate;
        this.Jr.mRootContainer.setOnClickListener(this);
        this.mApkDownloadHelper = this.Jr.mApkDownloadHelper;
        av();
        nd();
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        com.kwad.sdk.core.report.a.aD(this.mAdTemplate);
        b bVar = this.Jp;
        if (bVar != null) {
            bVar.dismiss();
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.cB = (KsAdWebView) findViewById(R.id.ksad_download_tips_web_card_webView);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onDestroy() {
        super.onDestroy();
        release();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        nf();
    }
}
