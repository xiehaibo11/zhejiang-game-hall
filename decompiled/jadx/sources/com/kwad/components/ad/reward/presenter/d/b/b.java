package com.kwad.components.ad.reward.presenter.d.b;

import android.view.View;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.b.e.e;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.utils.bj;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.components.ad.reward.presenter.a implements View.OnClickListener, c {
    private View vN;
    private boolean vO;
    private e gt = new e() { // from class: com.kwad.components.ad.reward.presenter.d.b.b.1
        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", b.this.qx.mAdTemplate).equals(str)) {
                b.b(b.this);
            }
        }
    };
    private final Runnable vP = new Runnable() { // from class: com.kwad.components.ad.reward.presenter.d.b.b.2
        @Override // java.lang.Runnable
        public final void run() {
            if (b.this.getActivity() == null || b.this.getActivity().isFinishing()) {
                return;
            }
            b.this.iK();
        }
    };

    static /* synthetic */ void b(b bVar) {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void iK() {
        com.kwad.sdk.core.e.c.d("RewardPlayEndCloseBtn", "showPageCloseBtn mPlayEndH5ShowSuccess: " + this.qx.pL + ", needHideCloseButton: " + this.vO);
        if (this.qx.pL && this.vO) {
            return;
        }
        this.vN.setVisibility(0);
        this.vN.setAlpha(0.0f);
        this.vN.animate().alpha(1.0f).setDuration(500L).start();
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.vO = com.kwad.sdk.core.response.b.b.dA(com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate));
        if (com.kwad.components.ad.reward.j.b(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.d.b.c
    public final void iJ() {
        if (this.qx.pu) {
            return;
        }
        long j = this.qx.pE;
        if (j == 0) {
            this.vP.run();
        } else {
            bj.runOnUiThreadDelay(this.vP, j);
        }
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        if (view == this.vN) {
            PlayableSource playableSourceFW = this.qx.fW();
            if (playableSourceFW == null || !(playableSourceFW.equals(PlayableSource.PENDANT_CLICK_NOT_AUTO) || playableSourceFW.equals(PlayableSource.PENDANT_CLICK_AUTO) || playableSourceFW.equals(PlayableSource.PENDANT_AUTO) || playableSourceFW.equals(PlayableSource.ACTIONBAR_CLICK))) {
                com.kwad.components.ad.reward.presenter.e.w(this.qx);
            } else {
                com.kwad.components.ad.reward.b.fp().fq();
            }
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        View viewFindViewById = findViewById(R.id.ksad_end_close_btn);
        this.vN = viewFindViewById;
        viewFindViewById.setOnClickListener(this);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.vN.setVisibility(8);
        bj.b(this.vP);
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
    }
}
