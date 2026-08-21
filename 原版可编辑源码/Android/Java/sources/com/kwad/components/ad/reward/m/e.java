package com.kwad.components.ad.reward.m;

import android.view.View;
import android.view.ViewGroup;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.jshandler.aa;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.components.core.webview.jshandler.ar;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.components.core.webview.jshandler.x;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.utils.bc;

public class e extends com.kwad.sdk.core.download.a.a implements aa.b, ah.b {
    private KsAdWebView cB;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener = new com.kwad.components.ad.reward.e.j() {
        @Override
        public final void onRewardVerify() {
            if (e.this.yI != null) {
                e.this.yI.ai(true);
            }
        }
    };
    private View yH;
    private ar yI;
    private f yJ;

    public e(KsAdWebView ksAdWebView, View view, com.kwad.components.core.e.d.c cVar, com.kwad.sdk.core.webview.d.a.a aVar) {
        this.yH = view;
        this.cB = ksAdWebView;
        this.mApkDownloadHelper = cVar;
        this.cH = aVar;
    }

    private void a(com.kwad.components.core.webview.a aVar, String str) {
        aVar.a(new com.kwad.components.core.webview.jshandler.o(this.cE, this.mApkDownloadHelper, this.cH));
        aVar.a(new u(this.cE));
        aVar.a(new t(this.cE));
        aVar.a(new ah(this, str));
        ar arVar = new ar();
        this.yI = arVar;
        aVar.a(arVar);
        aVar.a(new ab(this.cE));
        aVar.a(new x(this.cE));
        aVar.a(new com.kwad.components.core.webview.b.a.f());
        aVar.a(new aa(this.cE, this));
        aVar.a(new ap(this.cE, this.mApkDownloadHelper));
        aVar.a(new com.kwad.components.ad.reward.h.b(this.cB.getContext(), this.mAdTemplate, PlayableSource.ACTIONBAR_CLICK));
    }

    private void ae(boolean z) {
        com.kwad.sdk.core.e.c.d("BottomCardWebViewHelper", "switchWebView: " + z);
        KsAdWebView ksAdWebView = this.cB;
        if (ksAdWebView == null) {
            return;
        }
        ksAdWebView.setVisibility(z ? 0 : 8);
    }

    private void ay() {
        com.kwad.components.core.webview.a aVar = this.cD;
        if (aVar != null) {
            aVar.destroy();
            this.cD = null;
        }
    }

    private void b(AdTemplate adTemplate, ViewGroup viewGroup) {
        com.kwad.sdk.core.webview.b bVar = new com.kwad.sdk.core.webview.b();
        this.cE = bVar;
        bVar.setAdTemplate(adTemplate);
        this.cE.mScreenOrientation = 0;
        this.cE.aye = null;
        this.cE.MT = viewGroup;
        this.cE.Ms = this.cB;
        this.cE.mReportExtData = null;
        this.cE.ayg = true;
    }

    private KsAdWebView.d getWebErrorListener() {
        return new KsAdWebView.d() {
            @Override
            public final void onPageFinished() {
            }

            @Override
            public final void onPageStart() {
            }

            @Override
            public final void onReceivedHttpError(int i, String str, String str2) {
                com.kwad.sdk.core.e.c.d("BottomCardWebViewHelper", "onReceivedHttpError: " + i + ", " + str);
                e.this.jY();
            }
        };
    }

    private void j(String str, int i) {
        f fVar = this.yJ;
        if (fVar != null) {
            fVar.h(str, i);
        }
    }

    private void jY() {
        View view = this.yH;
        if (view != null) {
            view.setVisibility(0);
        }
        ae(false);
    }

    private void r(String str) {
        if (bc.isNullString(str)) {
            jY();
            return;
        }
        ay();
        this.cB.setClientConfig(this.cB.getClientConfig().cy(this.mAdTemplate).b(getWebErrorListener()));
        com.kwad.components.core.webview.a aVar = new com.kwad.components.core.webview.a(this.cB);
        this.cD = aVar;
        a(aVar, str);
        this.cB.addJavascriptInterface(this.cD, "KwaiAd");
        this.cB.loadUrl(str);
    }

    public final void a(f fVar) {
        this.yJ = fVar;
    }

    @Override
    public final void a(aa.a aVar) {
        com.kwad.sdk.core.e.c.d("BottomCardWebViewHelper", "onAdFrameValid : " + aVar.toJson());
    }

    @Override
    public final void a(ah.a aVar) {
        com.kwad.sdk.core.e.c.d("BottomCardWebViewHelper", getClass().getName() + " updatePageStatus: " + aVar);
        if (aVar.status == 1) {
            ae(true);
        } else {
            jY();
        }
    }

    public final void a(AdTemplate adTemplate, ViewGroup viewGroup) {
        KsAdWebView ksAdWebView = this.cB;
        if (ksAdWebView != null) {
            ksAdWebView.setBackgroundColor(0);
            if (this.cB.getBackground() != null) {
                this.cB.getBackground().setAlpha(0);
            }
        }
        com.kwad.components.ad.reward.c.ft().a(this.mRewardVerifyListener);
        this.mAdTemplate = adTemplate;
        b(adTemplate, viewGroup);
        r(com.kwad.sdk.core.response.b.b.aV(this.mAdTemplate));
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar != null) {
            cVar.b(this);
        }
    }

    public final void jX() {
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar != null) {
            cVar.c(this);
        }
        com.kwad.components.ad.reward.c.ft().b(this.mRewardVerifyListener);
    }

    @Override
    public void onDownloadFailed() {
        AdTemplate adTemplate = this.mAdTemplate;
        j(adTemplate != null ? com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(adTemplate)) : "立即下载", 100);
    }

    @Override
    public void onDownloadFinished() {
        AdTemplate adTemplate = this.mAdTemplate;
        j(adTemplate == null ? "" : com.kwad.sdk.core.response.b.a.aM(adTemplate), 100);
    }

    @Override
    public void onIdle() {
        AdTemplate adTemplate = this.mAdTemplate;
        j(adTemplate != null ? com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(adTemplate)) : "立即下载", 100);
    }

    @Override
    public void onInstalled() {
        AdTemplate adTemplate = this.mAdTemplate;
        j(adTemplate != null ? com.kwad.sdk.core.response.b.a.U(com.kwad.sdk.core.response.b.d.cg(adTemplate)) : "立即打开", 100);
    }

    @Override
    public final void onPaused(int i) {
        j(com.kwad.sdk.core.response.b.a.cw(i), i);
    }

    @Override
    public void onProgressUpdate(int i) {
        if (i != 0) {
            j(com.kwad.sdk.core.response.b.a.cv(i), i);
        }
    }
}
