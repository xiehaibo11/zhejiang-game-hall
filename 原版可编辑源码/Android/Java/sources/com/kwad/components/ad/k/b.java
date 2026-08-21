package com.kwad.components.ad.k;

import android.text.TextUtils;
import android.view.View;
import android.widget.FrameLayout;
import com.kwad.components.core.e.d.c;
import com.kwad.components.core.webview.b.a.f;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.ad;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.components.core.webview.jshandler.ar;
import com.kwad.components.core.webview.jshandler.o;
import com.kwad.components.core.webview.jshandler.p;
import com.kwad.components.core.webview.jshandler.r;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.components.core.webview.jshandler.x;
import com.kwad.components.core.webview.jshandler.z;
import com.kwad.sdk.R;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.bm;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

public class b {
    protected View Hc;
    private String He;
    private a Hf;
    private b Hg;
    protected KsAdWebView cB;
    private com.kwad.components.core.webview.a cD;
    protected com.kwad.sdk.core.webview.b cE;
    protected am cG;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private FrameLayout cQ;
    private AdBaseFrameLayout dr;
    protected AdTemplate mAdTemplate;
    private JSONObject mReportExtData;
    private int mScreenOrientation;
    private ar yI;
    private List<AdTemplate> Ha = new ArrayList();
    private List<c> Hb = new ArrayList();
    private int cF = -1;
    protected boolean Hd = false;
    private z.b cJ = new z.b() {
        @Override
        public final void a(z.a aVar) {
            b.this.lV();
        }
    };
    private ah.b cK = new ah.b() {
        @Override
        public final void a(ah.a aVar) {
            b.this.cF = aVar.status;
            com.kwad.sdk.core.e.c.i("PlayEndWebCard", b.this.getName() + "updatePageStatus mPageState: " + aVar + "，targetUrl: " + b.this.He);
            if (aVar.isSuccess() && b.this.Hg != null) {
                b.this.Hg.hR();
            }
        }
    };

    public interface a {
        void iG();
    }

    public interface b {
        void hR();
    }

    public b() {
    }

    public b(JSONObject jSONObject, String str) {
        this.mReportExtData = jSONObject;
        this.He = str;
    }

    private void aF() {
        int i = this.cF;
        com.kwad.sdk.core.e.c.w("PlayEndWebCard", "show webCard fail, reason: " + (i == -1 ? "timeout" : i != 1 ? "h5error" : "others"));
    }

    private void av() {
        com.kwad.sdk.core.webview.b bVar = new com.kwad.sdk.core.webview.b();
        this.cE = bVar;
        bVar.setAdTemplate(this.mAdTemplate);
        this.cE.mScreenOrientation = this.mScreenOrientation;
        this.cE.aye = this.dr;
        this.cE.MT = this.cQ;
        this.cE.Ms = this.cB;
        this.cE.mReportExtData = this.mReportExtData;
        b(this.cE);
    }

    private void ax() {
        ay();
        this.cB.getSettings().setAllowFileAccess(true);
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

    private static int getLayoutId() {
        return R.layout.ksad_ad_web_card_layout;
    }

    private KsAdWebView.d getWebListener() {
        return new KsAdWebView.d() {
            @Override
            public final void onPageFinished() {
                b.this.Hd = true;
                b.this.fF();
            }

            @Override
            public final void onPageStart() {
            }

            @Override
            public final void onReceivedHttpError(int i, String str, String str2) {
                b.this.Hd = false;
            }
        };
    }

    public final void a(FrameLayout frameLayout, AdBaseFrameLayout adBaseFrameLayout, AdTemplate adTemplate, c cVar) {
        a(frameLayout, adBaseFrameLayout, adTemplate, cVar, 0);
    }

    @Deprecated
    public void a(FrameLayout frameLayout, AdBaseFrameLayout adBaseFrameLayout, AdTemplate adTemplate, c cVar, int i) {
        this.Hb.add(cVar);
        this.dr = adBaseFrameLayout;
        this.cQ = frameLayout;
        this.mScreenOrientation = i;
        this.mAdTemplate = adTemplate;
        fA();
        av();
    }

    public final void a(FrameLayout frameLayout, AdBaseFrameLayout adBaseFrameLayout, List<AdTemplate> list, List<c> list2, int i) {
        this.Hb = list2;
        this.dr = adBaseFrameLayout;
        this.cQ = frameLayout;
        this.mScreenOrientation = i;
        if (list != null && list.size() > 0) {
            this.Ha = list;
            this.mAdTemplate = list.get(0);
        }
        fA();
        av();
    }

    public final void a(a aVar) {
        this.Hf = aVar;
    }

    public final void a(b bVar) {
        this.Hg = bVar;
        this.cQ.setVisibility(4);
        this.cF = -1;
        String strO = o(this.mAdTemplate);
        com.kwad.sdk.core.e.c.d("PlayEndWebCard", "startPreloadWebView url : " + strO);
        if (TextUtils.isEmpty(strO) || this.cB == null) {
            return;
        }
        ax();
        fE();
        this.cB.loadUrl(strO);
    }

    protected void a(com.kwad.components.core.webview.a aVar) {
        if (this.Hb.size() <= 1 || this.Ha.size() <= 1) {
            c cVar = this.Hb.get(0);
            aVar.a(new r(this.cE, cVar, this.cH));
            aVar.a(new o(this.cE, cVar, this.cH));
            aVar.a(new ap(this.cE, cVar));
        } else {
            aVar.a(new r(this.cE, this.Hb.get(0), this.cH));
            aVar.a(new o(this.cE, this.Hb, this.cH));
            aVar.a(new ad(this.Ha, this.Hb));
        }
        ar arVar = new ar();
        this.yI = arVar;
        aVar.a(arVar);
        aVar.a(new u(this.cE));
        aVar.a(new f());
        aVar.a(new x(this.cE));
        aVar.a(new t(this.cE));
        aVar.a(new ah(this.cK, o(this.mAdTemplate)));
        am amVar = new am();
        this.cG = amVar;
        aVar.a(amVar);
        aVar.a(new z(this.cJ));
        aVar.a(new ab(this.cE));
        aVar.a(new p(new com.kwad.sdk.core.webview.d.a.b() {
            @Override
            public final void a(WebCloseStatus webCloseStatus) {
                bj.runOnUiThread(new Runnable() {
                    @Override
                    public final void run() {
                        if (b.this.Hf != null) {
                            b.this.Hf.iG();
                        }
                    }
                });
            }
        }));
    }

    public final void a(com.kwad.sdk.core.webview.d.a.a aVar) {
        this.cH = aVar;
    }

    public final void ai(boolean z) {
        this.yI.ai(true);
    }

    public final boolean ap() {
        if (!bv()) {
            FrameLayout frameLayout = this.cQ;
            if (frameLayout != null) {
                frameLayout.setVisibility(4);
            }
            aF();
            return false;
        }
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rz();
        }
        FrameLayout frameLayout2 = this.cQ;
        if (frameLayout2 != null) {
            frameLayout2.setVisibility(0);
        }
        if (this.cG == null || !fB()) {
            return true;
        }
        this.cG.rA();
        return true;
    }

    protected void b(com.kwad.sdk.core.webview.b bVar) {
        bVar.setAdTemplate(this.mAdTemplate);
    }

    protected boolean bv() {
        return this.cF == 1;
    }

    protected void fA() {
        this.cQ.removeAllViews();
        this.cQ.setVisibility(4);
        this.Hc = l.inflate(this.cQ.getContext(), getLayoutId(), this.cQ);
        KsAdWebView ksAdWebView = (KsAdWebView) this.cQ.findViewById(R.id.ksad_web_card_webView);
        this.cB = ksAdWebView;
        if (ksAdWebView != null) {
            ksAdWebView.setBackgroundColor(0);
            this.cB.getBackground().setAlpha(0);
            this.cB.setClientConfig(this.cB.getClientConfig().cy(this.mAdTemplate).b(getWebListener()));
            fD();
        }
    }

    protected boolean fB() {
        return true;
    }

    protected void fD() {
    }

    protected void fE() {
    }

    protected void fF() {
    }

    public final long getLoadTime() {
        KsAdWebView ksAdWebView = this.cB;
        if (ksAdWebView != null) {
            return ksAdWebView.getLoadTime();
        }
        return -1L;
    }

    protected String getName() {
        return "PlayEndWebCard";
    }

    public final void lI() {
        ay();
    }

    public final void lV() {
        if (bm.a(this.cB, 50, false)) {
            am amVar = this.cG;
            if (amVar != null) {
                amVar.rB();
            }
            this.cQ.setVisibility(4);
            am amVar2 = this.cG;
            if (amVar2 != null) {
                amVar2.rC();
            }
        }
    }

    protected String o(AdTemplate adTemplate) {
        String str = this.He;
        return str == null ? com.kwad.sdk.core.response.b.b.bj(this.mAdTemplate) : str;
    }

    public final void release() {
        ay();
        this.Hg = null;
    }
}
