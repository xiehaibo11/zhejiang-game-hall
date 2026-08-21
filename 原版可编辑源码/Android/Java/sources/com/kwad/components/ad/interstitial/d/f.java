package com.kwad.components.ad.interstitial.d;

import android.text.TextUtils;
import android.view.ViewGroup;
import com.kwad.components.ad.interstitial.d.c;
import com.kwad.components.core.video.a;
import com.kwad.components.core.widget.KsAutoCloseView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.widget.KSFrameLayout;
import org.json.JSONObject;

public final class f extends b {
    private com.kwad.components.core.widget.a.b bG;
    private com.kwad.sdk.core.video.videoview.a ex;
    private KsAutoCloseView jc;
    private c jf;
    private boolean kJ;
    private KSFrameLayout kK;
    private com.kwad.sdk.core.h.d kL = new com.kwad.sdk.core.h.d() {
        @Override
        public final void aK() {
            if (!f.this.mAdTemplate.mPvReported && !f.this.jf.jk && f.this.jf.hz != null) {
                f.this.jf.hz.onAdShow();
                f.this.jf.hG.getTimerHelper().startTiming();
                com.kwad.components.ad.interstitial.monitor.b.cL();
                com.kwad.components.ad.interstitial.monitor.b.b(f.this.jf.mAdTemplate, 1);
            }
            com.kwad.components.core.t.b.qj().a(f.this.mAdTemplate, null, new com.kwad.sdk.core.report.j().cp(f.this.jf.ju));
            f.this.jc.setCountDownPaused(false);
        }

        @Override
        public final void aL() {
            f.this.jc.setCountDownPaused(true);
        }
    };
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;

    private static boolean c(AdInfo adInfo) {
        return adInfo.adInsertScreenInfo.autoCloseTime > 0 && !com.kwad.sdk.core.response.b.a.bv(adInfo);
    }

    private void dG() {
        final com.kwad.components.ad.interstitial.f.f fVar = this.jf.jg;
        fVar.setAdTemplate(this.mAdTemplate);
        if (com.kwad.sdk.core.response.b.a.aV(this.mAdInfo)) {
            fVar.a(com.kwad.sdk.core.response.b.a.aM(this.mAdInfo).materialUrl, this.mAdTemplate);
            fVar.b(true, true);
            fVar.t(false);
        } else {
            fVar.t(true);
            String url = com.kwad.sdk.core.response.b.a.bi(this.mAdInfo).getUrl();
            if (TextUtils.isEmpty(url)) {
                fVar.b(false, false);
            } else {
                fVar.a(url, this.mAdTemplate);
                fVar.b(true, false);
            }
            com.kwad.sdk.core.video.videoview.a aVar = this.jf.ex;
            this.ex = aVar;
            if (aVar.getParent() != null) {
                ((ViewGroup) this.ex.getParent()).removeView(this.ex);
            }
            if (com.kwad.sdk.core.response.b.a.aU(this.mAdInfo)) {
                fVar.a(com.kwad.sdk.core.response.b.a.aN(this.mAdInfo).height / com.kwad.sdk.core.response.b.a.aN(this.mAdInfo).width, this.ex);
            }
            fVar.u(this.jf.dJ.isVideoSoundEnable());
            final int iG = com.kwad.sdk.core.response.b.a.G(this.mAdInfo);
            this.jf.a(new a.c() {
                @Override
                public final void bj() {
                    fVar.b(false, false);
                }

                @Override
                public final void bk() {
                    f.this.ex.setVisibility(8);
                    if (f.this.jf.M(f.this.getContext())) {
                        return;
                    }
                    fVar.ey();
                }

                @Override
                public final void d(long j) {
                    int i = iG - ((int) (j / 1000));
                    com.kwad.components.ad.interstitial.f.f fVar2 = fVar;
                    if (i >= 0) {
                        fVar2.y(String.valueOf(i));
                    } else {
                        fVar2.ew();
                    }
                }

                @Override
                public final void onVideoPlayStart() {
                    fVar.t(true);
                }
            });
            fVar.a(this.mAdTemplate, this.mAdInfo);
            fVar.t(true);
            this.jf.jq.add(new c.c() {
                @Override
                public final void da() {
                    fVar.ez();
                    f.this.ex.setVisibility(0);
                }
            });
        }
        this.jf.a(getContext(), this.mAdInfo, this.mAdTemplate, fVar.getBlurBgView());
        String strI = com.kwad.sdk.core.response.b.a.I(this.mAdInfo);
        if (TextUtils.isEmpty(strI)) {
            strI = com.kwad.sdk.core.response.b.a.P(this.mAdInfo);
        }
        KSImageLoader.loadImage(fVar.getTailFrameView(), strI, this.mAdTemplate);
        if (!c(this.mAdInfo)) {
            this.jc.aR(false);
        } else {
            this.jc.aR(true);
            dH();
        }
    }

    private void dH() {
        int iMin = this.mAdInfo.adInsertScreenInfo.autoCloseTime;
        if (com.kwad.sdk.core.response.b.a.aU(this.mAdInfo)) {
            iMin = Math.min(iMin, com.kwad.sdk.core.response.b.a.G(this.mAdInfo));
            this.jf.jg.ew();
            this.jf.jg.ex();
        }
        this.jc.V(iMin);
        com.kwad.sdk.core.report.a.b(this.mAdTemplate, 165, (JSONObject) null);
    }

    private void e(int i, int i2) {
        this.jf.a(new c.b(getContext()).k(this.kJ).a(this.kK.getTouchCoords()).y(i).z(i2));
        if (!com.kwad.components.ad.interstitial.a.b.cG() || this.jf.hG == null) {
            return;
        }
        c cVar = this.jf;
        cVar.a(false, -1, cVar.ex);
        this.jf.hG.dismiss();
    }

    private void n(boolean z) {
        if (!this.jf.jk && !z && !this.jf.ji && !this.jf.jj && com.kwad.components.ad.interstitial.e.a.c(this.jf)) {
            this.jf.jj = true;
            com.kwad.components.ad.interstitial.b.b.K(getContext());
            return;
        }
        this.jf.a(z, -1, this.ex);
        this.jf.hG.dismiss();
        com.kwad.sdk.core.video.videoview.a aVar = this.ex;
        if (aVar != null) {
            aVar.release();
        }
        if (this.jf.jk || this.jf.hz == null) {
            return;
        }
        this.jf.hz.onAdClosed();
    }

    @Override
    public final void ah() {
        super.ah();
        c cVar = (c) Gk();
        this.jf = cVar;
        this.mAdTemplate = cVar.mAdTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(this.jf.mAdTemplate);
        this.jf.jg.l(this.mAdTemplate);
        this.jf.a(new c.e() {
            @Override
            public final void onError() {
                f.this.dG();
            }
        });
        this.jf.jg.setViewListener(new com.kwad.components.ad.interstitial.f.g() {
            @Override
            public final void a(KSFrameLayout kSFrameLayout) {
                f.this.kK = kSFrameLayout;
            }

            @Override
            public final void dJ() {
                f.this.n(false);
            }

            @Override
            public final void dK() {
                f.this.e(3, f.this.jf.jg.eA() ? 53 : 85);
            }

            @Override
            public final void dL() {
                f.this.e(1, 39);
            }

            @Override
            public final void dM() {
                f.this.e(1, 29);
            }

            @Override
            public final void dN() {
                f.this.e(3, 85);
            }

            @Override
            public final void dO() {
                f.this.e(3, 85);
            }

            @Override
            public final void dP() {
                f.this.e(2, 53);
            }

            @Override
            public final void dQ() {
                f.this.e(2, 30);
            }

            @Override
            public final void dR() {
                f.this.e(2, 31);
            }

            @Override
            public final void dS() {
                f.this.e(2, 32);
            }

            @Override
            public final void dT() {
                f.this.e(2, 15);
            }

            @Override
            public final void dU() {
                f.this.e(2, 16);
            }

            @Override
            public final void dV() {
                f.this.e(2, 17);
            }

            @Override
            public final void dW() {
                f.this.e(2, 35);
            }

            @Override
            public final void o(boolean z) {
                if (f.this.ex != null) {
                    f.this.ex.setVideoSoundEnable(z);
                }
            }

            @Override
            public final void p(boolean z) {
                f.this.kJ = z;
            }
        });
        com.kwad.components.core.widget.a.b bVar = new com.kwad.components.core.widget.a.b(this.jf.jg, 100);
        this.bG = bVar;
        bVar.a(this.kL);
        this.bG.sy();
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        KsAutoCloseView ksAutoCloseView = (KsAutoCloseView) findViewById(R.id.ksad_interstitial_auto_close);
        this.jc = ksAutoCloseView;
        ksAutoCloseView.setViewListener(new KsAutoCloseView.a() {
            @Override
            public final void dI() {
                f.this.n(true);
            }

            @Override
            public final void dJ() {
                f.this.n(false);
            }
        });
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.bG.b(this.kL);
        this.bG.sz();
    }
}
