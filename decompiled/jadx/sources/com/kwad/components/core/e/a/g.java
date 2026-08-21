package com.kwad.components.core.e.a;

import android.content.Context;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.widget.KSFrameLayout;

/* JADX INFO: loaded from: classes2.dex */
public final class g extends KSFrameLayout {
    private final d IU;
    private a Jd;
    private final d Jf;
    private final com.kwad.components.core.widget.a.b bG;
    private final AdTemplate mAdTemplate;
    private Presenter mPresenter;
    private boolean oh;

    public g(Context context, AdTemplate adTemplate, d dVar) {
        super(context);
        this.Jf = new d() { // from class: com.kwad.components.core.e.a.g.1
            @Override // com.kwad.components.core.e.a.d
            public final void mM() {
                g.this.en();
            }
        };
        this.mAdTemplate = adTemplate;
        this.IU = dVar;
        this.bG = new com.kwad.components.core.widget.a.b(this, 70);
        initMVP();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void en() {
        if (this.oh) {
            return;
        }
        this.oh = true;
        this.IU.mM();
    }

    private void initMVP() {
        this.Jd = mT();
        Presenter presenterOnCreatePresenter = onCreatePresenter();
        this.mPresenter = presenterOnCreatePresenter;
        presenterOnCreatePresenter.F(this);
        this.mPresenter.k(this.Jd);
    }

    private a mT() {
        a aVar = new a();
        aVar.IS = this;
        aVar.mAdTemplate = this.mAdTemplate;
        aVar.IT = this.bG;
        aVar.IU = this.Jf;
        return aVar;
    }

    private static Presenter onCreatePresenter() {
        Presenter presenter = new Presenter();
        presenter.a(new f());
        return presenter;
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public final void aa() {
        super.aa();
        com.kwad.sdk.core.e.c.d("InstalledActivateView", "onViewAttached");
        this.bG.sy();
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public final void ab() {
        super.ab();
        com.kwad.sdk.core.e.c.d("InstalledActivateView", "onViewDetached");
        this.bG.release();
        this.mPresenter.destroy();
        this.Jd.release();
        en();
    }
}
