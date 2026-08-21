package com.kwad.components.ad.fullscreen.c.c;

import android.os.Vibrator;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.components.ad.reward.e.f;
import com.kwad.components.ad.reward.e.h;
import com.kwad.components.ad.reward.e.l;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.jshandler.ao;
import com.kwad.sdk.R;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.g.d;
import com.kwad.sdk.core.imageloader.ImageLoaderProxy;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.bj;

public final class b extends com.kwad.components.ad.reward.presenter.f.a {
    private d dO;
    private Vibrator dP;
    private FrameLayout hk;
    private ImageView hl;
    private h hm = new h() {
        @Override
        public final void a(PlayableSource playableSource, l lVar) {
        }

        @Override
        public final void bS() {
            b.this.hk.setVisibility(0);
        }

        @Override
        public final void bT() {
            b.this.hk.setVisibility(4);
        }
    };
    private f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() {
        @Override
        public final void bD() {
            if (b.this.dO != null) {
                b.this.dO.bh(b.this.getContext());
            }
            if (b.this.hl != null) {
                b.this.hl.setVisibility(0);
            }
            if (com.kwad.sdk.core.response.b.a.am(com.kwad.sdk.core.response.b.d.cg(b.this.qx.mAdTemplate))) {
                b.this.hk.setVisibility(4);
            }
        }
    };

    private void bs() {
        if (this.dO != null) {
            return;
        }
        float fDs = com.kwad.sdk.core.response.b.b.ds(com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate));
        d dVar = new d(fDs);
        this.dO = dVar;
        dVar.a(new com.kwad.sdk.core.g.b() {
            @Override
            public final void a(double d) {
                if (com.kwad.components.core.e.c.b.mZ() || !b.this.iS()) {
                    bj.a(new Runnable() {
                        @Override
                        public final void run() {
                            b.this.dO.CG();
                        }
                    }, null, 500L);
                    return;
                }
                if (b.this.qx != null) {
                    j jVar = new j();
                    jVar.i(d);
                    b.this.qx.a(1, b.this.getContext(), 157, 1, 0L, false, jVar);
                }
                bj.a(new Runnable() {
                    @Override
                    public final void run() {
                        c.d("TKFullScreenVideoPresenter", "onShakeEvent openGate2");
                        b.this.dO.CG();
                    }
                }, null, 500L);
                bj.a(b.this.getContext(), b.this.dP);
            }

            @Override
            public final void aT() {
            }
        });
        this.dO.e(fDs);
        this.dO.bg(getContext());
        if (getContext() != null) {
            this.dP = (Vibrator) getContext().getSystemService("vibrator");
        }
    }

    private void ce() {
        final String strI = com.kwad.sdk.core.response.b.a.I(com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate));
        bj.runOnUiThreadDelay(new Runnable() {
            @Override
            public final void run() {
                ImageLoaderProxy.INSTANCE.load(b.this.hl, strI);
            }
        }, 1000L);
    }

    @Override
    public final void a(com.kwad.sdk.components.l lVar, com.kwad.sdk.core.webview.b bVar) {
        super.a(lVar, bVar);
        lVar.c(new ao(new ao.a() {
            @Override
            public final void bA() {
                b.this.bs();
            }
        }));
    }

    @Override
    public final void ah() {
        ImageView imageView;
        ImageView.ScaleType scaleType;
        super.ah();
        this.qx.pk = true;
        com.kwad.components.ad.reward.b.fp().a(this.hm);
        this.qx.b(this.mPlayEndPageListener);
        getContext();
        if (ai.IN()) {
            imageView = this.hl;
            scaleType = ImageView.ScaleType.FIT_XY;
        } else {
            imageView = this.hl;
            scaleType = ImageView.ScaleType.FIT_CENTER;
        }
        imageView.setScaleType(scaleType);
        ce();
    }

    @Override
    public final void cc() {
        super.cc();
        this.hk.setVisibility(8);
        this.hl.setVisibility(8);
        this.qx.pk = false;
    }

    @Override
    public final FrameLayout getTKContainer() {
        return this.hk;
    }

    @Override
    public final String getTkTemplateId() {
        return com.kwad.components.core.webview.b.j.b("ksad-fullscreen-video-card", this.qx.mAdTemplate);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.hk = (FrameLayout) findViewById(R.id.ksad_js_full_card);
        this.hl = (ImageView) findViewById(R.id.ksad_tk_bg_view);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.ad.reward.b.fp().b(this.hm);
    }
}
