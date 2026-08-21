package com.kwad.components.ad.interstitial.d.a;

import android.app.Activity;
import android.app.Dialog;
import android.os.Vibrator;
import android.widget.FrameLayout;
import com.kwad.components.ad.g.a.a.b;
import com.kwad.components.ad.interstitial.d.c;
import com.kwad.components.ad.interstitial.d.h;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.components.core.webview.b.a.g;
import com.kwad.components.core.webview.b.a.n;
import com.kwad.components.core.webview.b.a.q;
import com.kwad.components.core.webview.b.b;
import com.kwad.components.core.webview.b.b.k;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.b.x;
import com.kwad.components.core.webview.b.f;
import com.kwad.components.core.webview.b.j;
import com.kwad.components.core.webview.jshandler.af;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.ao;
import com.kwad.components.core.webview.jshandler.av;
import com.kwad.components.core.webview.jshandler.m;
import com.kwad.components.core.webview.jshandler.o;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.components.core.webview.jshandler.z;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsInterstitialAd;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.l;
import com.kwad.sdk.core.g.d;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.be;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.bm;
import java.io.File;

public final class b extends a {
    private static long jM = 400;
    private d dO;
    private Vibrator dP;
    private am fn;
    private com.kwad.components.ad.g.a.a.b jY;
    private FrameLayout lr;
    private boolean lt;
    private f lu;
    private boolean ls = false;
    private final c.a jl = new c.a() {
        @Override
        public final void ck() {
            if (b.this.lu != null) {
                com.kwad.components.core.webview.b.b.a aVar = new com.kwad.components.core.webview.b.b.a();
                aVar.WQ = b.this.jf.ji ? 1 : 0;
                b.this.lu.b(aVar);
            }
        }
    };
    private h ka = new h() {
        @Override
        public final void du() {
            b.this.cV.aK();
        }

        @Override
        public final void dv() {
            b.this.cV.aL();
        }
    };
    private com.kwad.sdk.core.h.c cV = new com.kwad.sdk.core.h.d() {
        @Override
        public final void aK() {
            if (b.this.fn != null && !b.this.ls) {
                b.a(b.this, true);
                b.this.fn.rz();
                b.this.fn.rA();
            }
            if (b.this.fn != null) {
                b.this.fn.rD();
            }
            if (b.this.jY != null) {
                b.this.jY.eZ();
            }
            if (!b.this.lt) {
                b.this.jf.hG.getTimerHelper().startTiming();
            }
            if (b.this.lt || b.this.jf.jk || b.this.jf.hz == null) {
                return;
            }
            b.this.jf.hz.onAdShow();
            com.kwad.components.ad.interstitial.monitor.b.cL();
            com.kwad.components.ad.interstitial.monitor.b.b(b.this.jf.mAdTemplate, 3);
            b.b(b.this, true);
        }

        @Override
        public final void aL() {
            if (b.this.fn != null) {
                b.this.fn.rE();
            }
            if (b.this.jY != null) {
                b.this.jY.eY();
            }
        }
    };

    private o a(com.kwad.sdk.core.webview.b bVar) {
        return new o(bVar, this.jf.mApkDownloadHelper, new com.kwad.sdk.core.webview.d.a.a() {
            @Override
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
                if (aVar != null) {
                    if (!b.this.jf.jk && b.this.jf.hz != null) {
                        b.this.jf.hz.onAdClicked();
                    }
                    b.this.jf.ji = true;
                    if (!b.this.jf.jk) {
                        b.this.jf.ck();
                    }
                    if (b.this.jf.hG == null || !com.kwad.components.ad.interstitial.a.b.cG()) {
                        return;
                    }
                    b.this.jf.a(false, -1, b.this.jf.ex);
                    b.this.jf.hG.dismiss();
                }
            }
        });
    }

    private static boolean a(Dialog dialog) {
        Activity ownerActivity = dialog.getOwnerActivity();
        return (ownerActivity == null || ownerActivity.isFinishing()) ? false : true;
    }

    static boolean a(b bVar, boolean z) {
        bVar.ls = true;
        return true;
    }

    static boolean b(b bVar, boolean z) {
        bVar.lt = true;
        return true;
    }

    private void bs() {
        if (getContext() != null) {
            this.dP = (Vibrator) getContext().getSystemService("vibrator");
        }
        float fBz = com.kwad.sdk.core.response.b.b.bz(this.jf.mAdTemplate);
        if (this.dO == null) {
            d dVar = new d(fBz);
            this.dO = dVar;
            dVar.a(new com.kwad.sdk.core.g.b() {
                @Override
                public final void a(double d) {
                    if (bm.o(b.this.getTKContainer(), 100)) {
                        b.this.d(d);
                    }
                    bj.a(new Runnable() {
                        @Override
                        public final void run() {
                            b.this.dO.CG();
                        }
                    }, null, 500L);
                }

                @Override
                public final void aT() {
                }
            });
        }
        this.dO.e(fBz);
        this.dO.bg(getContext());
    }

    private void d(double d) {
        this.jf.a(new c.b(getContext()).l(true).c(d).y(2).a(this.jf.jo.getTouchCoords()).z(157));
        bj.vibrate(getContext(), this.dP, jM);
    }

    private g df() {
        k kVar = new k();
        kVar.WX = this.jf.ju;
        return new g(kVar);
    }

    private com.kwad.components.ad.g.a.a.a di() {
        final com.kwad.components.ad.g.a.a.a aVar = new com.kwad.components.ad.g.a.a.a();
        this.jf.jq.add(new c.c() {
            @Override
            public final void da() {
                aVar.eW();
            }
        });
        return aVar;
    }

    private av do() {
        av avVar = new av(getContext(), this.jf.mAdTemplate);
        avVar.a(new av.a() {
            @Override
            public final boolean dw() {
                com.kwad.components.core.page.a.launch(b.this.getContext(), b.this.jf.mAdTemplate);
                b.this.jf.a(true, -1, (com.kwad.sdk.core.video.videoview.a) null);
                bj.runOnUiThreadDelay(new Runnable() {
                    @Override
                    public final void run() {
                        b.this.dr();
                    }
                }, 0L);
                return false;
            }
        });
        return avVar;
    }

    private z dp() {
        return new z(new z.b() {
            @Override
            public final void a(final z.a aVar) {
                if (b.this.jf.hG != null) {
                    b.this.jf.jo.post(new Runnable() {
                        @Override
                        public final void run() {
                            if (aVar.type == 0 && !b.this.jf.ji && !b.this.jf.jj && com.kwad.components.ad.interstitial.e.a.c(b.this.jf)) {
                                b.this.jf.jj = true;
                                com.kwad.components.ad.interstitial.b.b.K(b.this.getContext());
                            } else {
                                b.this.en();
                                b.this.jf.a(aVar.type == 3, aVar.UJ, (com.kwad.sdk.core.video.videoview.a) null);
                                b.this.dr();
                            }
                        }
                    });
                }
            }
        });
    }

    private void dr() {
        if (this.jf == null) {
            return;
        }
        if (this.jf.hG != null && a(this.jf.hG)) {
            this.jf.hG.dismiss();
        }
        try {
            KsInterstitialAd.AdInteractionListener adInteractionListener = this.jf.hz;
            if (adInteractionListener != null) {
                adInteractionListener.onAdClosed();
            }
        } catch (Throwable th) {
            com.kwad.components.core.d.a.b(th);
        }
    }

    private com.kwad.components.core.webview.b.c ei() {
        return new com.kwad.components.core.webview.b.c() {
            @Override
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                com.kwad.components.core.webview.b.b.c cVar2 = new com.kwad.components.core.webview.b.b.c();
                cVar2.WS = com.kwad.components.ad.interstitial.c.a.cK();
                cVar.a(cVar2);
            }
        };
    }

    private f ej() {
        return new f() {
            @Override
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                com.kwad.components.core.webview.b.b.a aVar = new com.kwad.components.core.webview.b.b.a();
                aVar.WQ = b.this.jf.ji ? 1 : 0;
                cVar.a(aVar);
            }
        };
    }

    private n ek() {
        return new n() {
            @Override
            public final void a(String str, final com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                bj.runOnUiThreadDelay(new Runnable() {
                    @Override
                    public final void run() {
                        com.kwad.components.core.webview.b.b.d dVar = new com.kwad.components.core.webview.b.b.d();
                        dVar.WT = ag.isWifiConnected(b.this.getContext()) || b.this.jf.dJ.isDataFlowAutoStart() || b.k(b.this.jf.mAdTemplate);
                        cVar.a(dVar);
                    }
                }, 0L);
            }
        };
    }

    private m el() {
        return new m() {
            @Override
            public final void a(x xVar) {
                super.a(xVar);
                if (b.this.jf.jk || b.this.jf.hz == null) {
                    return;
                }
                b.this.jf.hz.onVideoPlayStart();
            }

            @Override
            public final void b(x xVar) {
                super.b(xVar);
                b.this.jf.mAdTemplate.setmCurPlayTime(xVar.nM);
            }

            @Override
            public final void c(x xVar) {
                super.c(xVar);
                if (b.this.jf.jk || b.this.jf.hz == null) {
                    return;
                }
                b.this.jf.hz.onVideoPlayEnd();
            }
        };
    }

    private void en() {
        am amVar = this.fn;
        if (amVar != null) {
            amVar.rB();
            this.fn.rC();
        }
        com.kwad.components.ad.g.a.a.b bVar = this.jY;
        if (bVar != null) {
            bVar.eY();
        }
    }

    private af.a getOpenNewPageListener() {
        return new af.a() {
            @Override
            public final void a(com.kwad.components.core.webview.a.b bVar) {
                AdWebViewActivityProxy.launch(b.this.getContext(), new AdWebViewActivityProxy.a.a().aq(bVar.title).ar(bVar.url).ay(true).S(b.this.jf.mAdTemplate).oA());
            }
        };
    }

    public static boolean k(AdTemplate adTemplate) {
        File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(com.kwad.sdk.core.response.b.a.F(com.kwad.sdk.core.response.b.d.cg(adTemplate)));
        return fileBR != null && fileBR.exists();
    }

    @Override
    public final void a(t tVar) {
        super.a(tVar);
        if (this.jf.hz != null) {
            this.jf.hz.onSkippedAd();
        }
    }

    @Override
    public final void a(am amVar) {
        super.a(amVar);
        this.fn = amVar;
    }

    @Override
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
        super.a(lVar, bVar);
        com.kwad.components.ad.g.a.a.b bVarM = com.kwad.components.ad.g.a.a.b.m(this.jf.mAdTemplate);
        this.jY = bVarM;
        if (bVarM != null) {
            bVarM.a(new b.b() {
                @Override
                public final void C(int i) {
                    if (i == com.kwad.components.ad.g.a.a.b.nC) {
                        b.this.jf.b(b.this.getContext(), b.this.jf.mAdTemplate);
                        b bVar2 = b.this;
                        bVar2.b(bVar2.jf.mAdTemplate, true);
                    }
                    b.this.dr();
                }
            });
            lVar.c(this.jY);
            this.jY.eX();
        }
        lVar.c(dp());
        lVar.c(new af(getOpenNewPageListener()));
        if (com.kwad.sdk.core.response.b.b.cX(com.kwad.sdk.core.response.b.d.cg(this.jf.mAdTemplate))) {
            lVar.c(new ao(new ao.a() {
                @Override
                public final void bA() {
                    b.this.bs();
                }
            }));
        }
        lVar.c(ek());
        lVar.c(do());
        lVar.c(df());
        lVar.c(a(bVar));
        lVar.c(el());
        lVar.c(di());
        lVar.c(new q() {
            @Override
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                com.kwad.components.core.t.h.f(b.this.getContext(), b.this.jf.mAdTemplate);
            }
        });
        this.lu = ej();
        this.jf.a(this.jl);
        lVar.c(this.lu);
        lVar.c(new com.kwad.components.core.webview.b.b(new b.a() {
            @Override
            public final void eo() {
                com.kwad.components.ad.interstitial.c.a.L(b.this.getContext());
            }
        }));
        lVar.c(ei());
    }

    @Override
    public final void ah() {
        super.ah();
        this.jf.a(this.ka);
    }

    @Override
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        aVar.width = (int) ((be.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((be.getScreenHeight(getContext()) / fAH) + 0.5f);
    }

    @Override
    public final void b(WebCloseStatus webCloseStatus) {
        b(this.jf.mAdTemplate, true);
        dr();
    }

    public final void b(AdTemplate adTemplate, boolean z) {
        com.kwad.sdk.core.report.a.a(adTemplate, 14, -1L, -1, this.jf.hG.getTimerHelper().getTime(), null);
    }

    @Override
    public final void cc() {
        this.lr.setVisibility(8);
        if (this.jf.gt != null) {
            this.jf.gt.q(getTkTemplateId());
        }
    }

    @Override
    public final void eh() {
        if (this.fn != null && this.jf.hx.ep()) {
            this.ls = true;
            this.fn.rz();
            this.fn.rA();
        }
        this.jf.hx.a(this.cV);
    }

    @Override
    public final void em() {
    }

    @Override
    public final FrameLayout getTKContainer() {
        return this.lr;
    }

    @Override
    public final String getTkTemplateId() {
        return j.b("ksad-interstitial-card", this.jf.mAdTemplate);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        FrameLayout frameLayout = (FrameLayout) findViewById(R.id.ksad_tk_view);
        this.lr = frameLayout;
        frameLayout.setVisibility(0);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.ls = false;
        this.lt = false;
        bj.b(getContext(), this.dP);
        d dVar = this.dO;
        if (dVar != null) {
            dVar.bh(getContext());
        }
        if (this.jf.hx != null) {
            this.jf.hx.b(this.cV);
        }
        this.jf.b(this.jl);
        this.jf.b(this.ka);
    }
}
