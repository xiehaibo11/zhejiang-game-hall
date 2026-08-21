package com.kwad.components.ad.reward.presenter;

import android.view.View;
import com.kwad.components.ad.reward.widget.KsToastView;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.sdk.R;
import com.kwad.sdk.utils.bj;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import org.json.JSONObject;

public final class p extends a {
    private q sB;
    private KsToastView sI;
    private Runnable sL;
    private float sz;
    private boolean sJ = false;
    private boolean sK = false;
    private boolean sM = false;
    private boolean sC = false;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() {
        @Override
        public final void bD() {
            p.this.sI.setVisibility(8);
        }
    };

    public p(q qVar) {
        this.sB = qVar;
    }

    static boolean a(p pVar, boolean z) {
        pVar.sM = true;
        return true;
    }

    private synchronized void hF() {
        if (this.sC) {
            return;
        }
        com.kwad.sdk.core.report.a.d(this.qx.mAdTemplate, (JSONObject) null, new com.kwad.sdk.core.report.j().ci(PsExtractor.AUDIO_STREAM).af(this.qx.oV.getPlayDuration()));
        this.sC = true;
    }

    private void hK() {
        this.sL = new Runnable() {
            @Override
            public final void run() {
                if (p.this.sM) {
                    return;
                }
                if (p.this.sI != null) {
                    p.this.sI.setVisibility(8);
                }
                com.kwad.components.ad.reward.b.fp().a(PlayableSource.PENDANT_AUTO);
            }
        };
    }

    private void hL() {
        bj.b(this.sL);
        this.sL = null;
    }

    @Override
    public final void ah() {
        super.ah();
        this.qx.b(this.mPlayEndPageListener);
    }

    public final void hI() {
        if (this.sK) {
            return;
        }
        hF();
        this.sK = true;
        this.sI.setVisibility(0);
        this.sI.V(3);
        hK();
        bj.a(this.sL, null, 3000L);
    }

    public final void hJ() {
        this.sK = false;
        this.sI.setVisibility(8);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        KsToastView ksToastView = (KsToastView) findViewById(R.id.ksad_toast_view);
        this.sI = ksToastView;
        ksToastView.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                p.a(p.this, true);
                p.this.sI.setVisibility(8);
                com.kwad.components.ad.reward.b.fp().a(PlayableSource.PENDANT_CLICK_AUTO);
            }
        });
        this.sz = com.kwad.components.ad.reward.a.b.gI();
        this.sJ = com.kwad.components.ad.reward.a.b.gJ() && com.kwad.components.ad.reward.a.b.gK();
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        hL();
        this.qx.c(this.mPlayEndPageListener);
    }
}
