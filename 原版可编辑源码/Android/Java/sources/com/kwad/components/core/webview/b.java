package com.kwad.components.core.webview;

import android.text.TextUtils;
import android.view.ViewGroup;
import android.webkit.WebView;
import com.kwad.components.core.e.c.b;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.components.core.webview.b.a.f;
import com.kwad.components.core.webview.b.a.j;
import com.kwad.components.core.webview.b.a.k;
import com.kwad.components.core.webview.b.a.l;
import com.kwad.components.core.webview.b.a.s;
import com.kwad.components.core.webview.b.b.g;
import com.kwad.components.core.webview.b.b.n;
import com.kwad.components.core.webview.jshandler.aa;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.ag;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.aj;
import com.kwad.components.core.webview.jshandler.al;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.components.core.webview.jshandler.at;
import com.kwad.components.core.webview.jshandler.h;
import com.kwad.components.core.webview.jshandler.o;
import com.kwad.components.core.webview.jshandler.p;
import com.kwad.components.core.webview.jshandler.r;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.components.core.webview.jshandler.x;
import com.kwad.components.core.webview.jshandler.y;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.core.download.e;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.utils.v;

public final class b {
    private KsAdWebView GQ;
    private KsAdWebView.c MY;
    private c Nz;
    private ViewGroup Tg;
    private com.kwad.components.core.webview.a.a Th;
    private al Ti;
    private e Tj;
    private ah.b Tk = new ah.b() {
        @Override
        public final void a(ah.a aVar) {
            if (b.this.Nz != null) {
                b.this.Nz.a(aVar);
            }
        }
    };
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private AdTemplate mAdTemplate;
    private String mPageUrl;

    public static class a {
        private KsAdWebView GQ;
        private KsAdWebView.c MY;
        private c Nz;
        private ViewGroup Tg;
        private AdTemplate mAdTemplate;
        private String mPageUrl;

        public final a X(AdTemplate adTemplate) {
            this.mAdTemplate = adTemplate;
            return this;
        }

        public final a a(c cVar) {
            this.Nz = cVar;
            return this;
        }

        public final a aD(String str) {
            this.mPageUrl = str;
            return this;
        }

        public final a b(KsAdWebView.c cVar) {
            this.MY = cVar;
            return this;
        }

        public final a d(KsAdWebView ksAdWebView) {
            this.GQ = ksAdWebView;
            return this;
        }

        public final AdTemplate getAdTemplate() {
            return this.mAdTemplate;
        }

        public final a k(ViewGroup viewGroup) {
            this.Tg = viewGroup;
            return this;
        }

        public final KsAdWebView.c oR() {
            return this.MY;
        }

        public final String ox() {
            return this.mPageUrl;
        }

        public final ViewGroup rq() {
            return this.Tg;
        }

        public final KsAdWebView rr() {
            return this.GQ;
        }

        public final c rs() {
            return this.Nz;
        }
    }

    private static void a(c cVar, WebView webView) {
        if (cVar == null || !cVar.oX()) {
            return;
        }
        webView.getSettings().setAllowFileAccess(true);
    }

    private void av() {
        com.kwad.sdk.core.webview.b bVar = new com.kwad.sdk.core.webview.b();
        this.cE = bVar;
        bVar.setAdTemplate(this.mAdTemplate);
        this.cE.mScreenOrientation = 0;
        this.cE.Ms = this.GQ;
        this.cE.MT = this.Tg;
    }

    private void ay() {
        com.kwad.components.core.webview.a aVar = this.cD;
        if (aVar != null) {
            aVar.destroy();
            this.cD = null;
        }
        com.kwad.components.core.webview.a.a aVar2 = this.Th;
        if (aVar2 != null) {
            aVar2.destroy();
            this.Th = null;
        }
    }

    private void b(com.kwad.components.core.webview.a aVar, com.kwad.sdk.core.webview.b bVar) {
        am amVar = new am();
        aVar.a(amVar);
        c(amVar);
        aVar.a(new ab(bVar));
        aVar.a(new u(bVar));
        aVar.a(new f());
        com.kwad.components.core.e.d.c cVar = new com.kwad.components.core.e.d.c(this.mAdTemplate);
        aVar.a(new r(this.cE, cVar, getClickListener(), rj(), false));
        aVar.a(new o(this.cE, cVar, getClickListener(), rj(), 0, rk()));
        aVar.a(new ap(this.cE, cVar));
        aVar.a(new aj(this.cE));
        aVar.a(new ag(this.cE.Ms.getContext(), this.mAdTemplate));
        aVar.a(new at(new at.a() {
            @Override
            public final void rp() {
                if (com.kwad.sdk.core.response.b.b.bH(b.this.mAdTemplate)) {
                    com.kwad.components.core.e.c.b.a(b.this.cE.Ms.getContext(), new b.a().O(b.this.mAdTemplate).ak(com.kwad.sdk.core.response.b.b.bG(b.this.mAdTemplate)).nc());
                }
            }
        }));
        aVar.a(new y(this.cE));
        aVar.a(new ah(this.Tk, this.mPageUrl));
        al alVar = new al();
        this.Ti = alVar;
        aVar.a(alVar);
        aVar.a(new p(new com.kwad.sdk.core.webview.d.a.b() {
            @Override
            public final void a(WebCloseStatus webCloseStatus) {
                if (b.this.Nz != null) {
                    b.this.Nz.b(webCloseStatus);
                }
            }
        }));
        s sVar = new s();
        sVar.a(new s.a() {
            @Override
            public final void a(com.kwad.components.core.webview.b.b.s sVar2) {
                if (TextUtils.isEmpty(sVar2.message)) {
                    return;
                }
                v.d(b.this.cE.Ms.getContext(), sVar2.message, 0L);
            }
        });
        aVar.a(sVar);
        aVar.a(new k());
        aVar.a(new x(bVar));
        if (com.kwad.sdk.core.response.b.a.ax(d.cg(this.mAdTemplate))) {
            final l lVar = new l();
            aVar.a(lVar);
            this.Tj = new e(this.mAdTemplate) {
                @Override
                public final void a(String str, int i, com.kwad.sdk.core.download.f fVar) {
                    super.a(str, i, fVar);
                    com.kwad.components.core.webview.b.b.b bVar2 = new com.kwad.components.core.webview.b.b.b();
                    bVar2.WR = 1;
                    lVar.a(bVar2);
                }
            };
            com.kwad.sdk.core.download.c.Aw().a(this.Tj, this.mAdTemplate);
        }
        aVar.a(new com.kwad.components.core.webview.b.a.d() {
            @Override
            public final void a(g gVar) {
                super.a(gVar);
                com.kwad.components.core.o.a.pA().a(gVar.UO, b.this.mAdTemplate, gVar.UP);
            }
        });
        aVar.a(new j() {
            @Override
            public final void a(n nVar) {
                super.a(nVar);
                AdWebViewActivityProxy.launch(b.this.cE.Ms.getContext(), new AdWebViewActivityProxy.a.a().aq(nVar.title).ar(nVar.url).ay(true).S(b.this.mAdTemplate).oA());
            }
        });
        aVar.a(new com.kwad.components.core.webview.jshandler.b());
        aVar.a(new com.kwad.components.core.webview.jshandler.d());
        aVar.a(new com.kwad.components.core.webview.jshandler.g());
        aVar.a(new com.kwad.components.core.webview.jshandler.a());
        aVar.a(new t(this.cE));
        aVar.a(new h(this.cE.Ms.getContext(), this.mAdTemplate));
        aVar.a(new aa(this.cE, new aa.b() {
            @Override
            public final void a(aa.a aVar2) {
            }
        }));
        aVar.a(new com.kwad.components.core.webview.jshandler.f());
        aVar.a(new com.kwad.components.core.webview.jshandler.l());
        aVar.a(new com.kwad.components.core.webview.jshandler.k());
        aVar.a(new com.kwad.components.core.webview.jshandler.j());
    }

    private void b(KsAdWebView ksAdWebView) {
        ay();
        com.kwad.components.core.webview.a aVar = new com.kwad.components.core.webview.a(ksAdWebView);
        this.cD = aVar;
        b(aVar, this.cE);
        c cVar = this.Nz;
        if (cVar != null) {
            cVar.a(this.cD, this.cE);
        }
        ksAdWebView.addJavascriptInterface(this.cD, "KwaiAd");
    }

    private void c(am amVar) {
        c cVar = this.Nz;
        if (cVar == null) {
            return;
        }
        cVar.c(amVar);
    }

    private void c(KsAdWebView ksAdWebView) {
        ay();
        com.kwad.components.core.webview.a.a aVar = new com.kwad.components.core.webview.a.a(ksAdWebView, this.cE);
        this.Th = aVar;
        ksAdWebView.addJavascriptInterface(aVar, "KwaiAdForThird");
    }

    private void eK() {
        this.GQ.setClientConfig(this.GQ.getClientConfig().cy(this.mAdTemplate).b(rm()).b(rn()).a(rl()).c(this.MY));
    }

    private com.kwad.sdk.core.webview.d.a.a getClickListener() {
        return new com.kwad.sdk.core.webview.d.a.a() {
            @Override
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
            }
        };
    }

    private boolean rj() {
        c cVar = this.Nz;
        if (cVar == null) {
            return false;
        }
        return cVar.oY();
    }

    private boolean rk() {
        c cVar = this.Nz;
        return false;
    }

    private KsAdWebView.b rl() {
        return new KsAdWebView.b() {
            @Override
            public final void onFailed() {
                if (b.this.Ti != null) {
                    b.this.Ti.onFailed();
                }
            }

            @Override
            public final void onSuccess() {
                if (b.this.Ti != null) {
                    b.this.Ti.onSuccess();
                }
            }
        };
    }

    private z.b rm() {
        z.b bVar = new z.b();
        bVar.ati = 0;
        bVar.atu = ro();
        return bVar;
    }

    private KsAdWebView.d rn() {
        return new KsAdWebView.d() {
            @Override
            public final void onPageFinished() {
                if (b.this.Nz != null) {
                    b.this.Nz.onPageFinished();
                }
            }

            @Override
            public final void onPageStart() {
            }

            @Override
            public final void onReceivedHttpError(int i, String str, String str2) {
                if (b.this.Nz != null) {
                    b.this.Nz.oZ();
                }
            }
        };
    }

    private int ro() {
        return com.kwad.sdk.core.response.b.a.N(d.cg(this.mAdTemplate)) ? 5 : 1;
    }

    public final void a(a aVar) {
        this.mPageUrl = aVar.ox();
        this.mAdTemplate = aVar.getAdTemplate();
        this.Tg = aVar.rq();
        this.GQ = aVar.rr();
        this.Nz = aVar.rs();
        this.MY = aVar.oR();
        eK();
        a(this.Nz, this.GQ);
        av();
        if (com.kwad.sdk.core.response.b.a.J(d.cg(this.mAdTemplate))) {
            c(this.GQ);
        } else if (com.kwad.sdk.core.response.b.b.dD(this.mPageUrl)) {
            b(this.GQ);
        }
    }

    public final void jv() {
        ay();
        if (this.Tj != null) {
            com.kwad.sdk.core.download.c.Aw().a(this.Tj);
        }
    }
}
