package com.kwad.components.ad.reward.presenter.e;

import android.widget.FrameLayout;
import com.kwad.components.ad.reward.e.f;
import com.kwad.components.ad.reward.page.BackPressHandleResult;
import com.kwad.components.ad.reward.presenter.f.d;
import com.kwad.components.core.webview.b.j;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.b.b;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.utils.be;
import com.kwad.sdk.widget.KSFrameLayout;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends d implements com.kwad.components.ad.reward.j.a {
    private KSFrameLayout vX;
    private AdMatrixInfo.PreLandingPageTKInfo vY;
    private am vZ;
    private boolean of = false;
    private f wa = new com.kwad.components.ad.reward.e.a() { // from class: com.kwad.components.ad.reward.presenter.e.a.1
        @Override // com.kwad.components.ad.reward.e.f
        public final void bD() {
            a.this.iN();
        }
    };

    private void U(final boolean z) {
        this.vX.post(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.e.a.2
            @Override // java.lang.Runnable
            public final void run() {
                a.this.vX.setVisibility(z ? 0 : 4);
                a.this.vX.setClickable(z);
                if (a.this.vZ != null) {
                    if (z) {
                        a.this.vZ.rz();
                        a.this.vZ.rA();
                    } else {
                        a.this.vZ.rB();
                        a.this.vZ.rC();
                    }
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void iN() {
        AdMatrixInfo.PreLandingPageTKInfo preLandingPageTKInfo;
        if (this.of && (preLandingPageTKInfo = this.vY) != null && preLandingPageTKInfo.isPlayEndShow()) {
            U(true);
        }
    }

    private void iO() {
        AdMatrixInfo.PreLandingPageTKInfo preLandingPageTKInfo;
        if (this.of && (preLandingPageTKInfo = this.vY) != null && preLandingPageTKInfo.isSkipShow()) {
            U(true);
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void a(am amVar) {
        super.a(amVar);
        this.vZ = amVar;
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.vY = b.bP(this.qx.mAdTemplate);
        this.qx.b(this.wa);
        this.qx.a((com.kwad.components.ad.reward.j.a) this);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        aVar.width = (int) ((be.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((be.getScreenHeight(getContext()) / fAH) + 0.5f);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void cc() {
        super.cc();
        this.of = false;
        U(false);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d
    public final boolean cd() {
        return true;
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void eh() {
        super.eh();
        this.of = true;
    }

    public final BackPressHandleResult gA() {
        KSFrameLayout kSFrameLayout;
        return (this.wk == null || (kSFrameLayout = this.vX) == null) ? BackPressHandleResult.NOT_HANDLED : kSFrameLayout.getVisibility() == 0 ? this.wk.gA() : BackPressHandleResult.NOT_HANDLED;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final FrameLayout getTKContainer() {
        return this.vX;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final String getTkTemplateId() {
        return j.b("ksad-pre-landingpage-card", this.qx.mAdTemplate);
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void iP() {
        iN();
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void iQ() {
        iO();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.vX = (KSFrameLayout) findViewById(R.id.ksad_pre_form_card);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.qx.c(this.wa);
        this.qx.b((com.kwad.components.ad.reward.j.a) this);
    }
}
