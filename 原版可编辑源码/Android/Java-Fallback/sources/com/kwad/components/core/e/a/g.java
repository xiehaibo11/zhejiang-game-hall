package com.kwad.components.core.e.a;

public final class g extends com.kwad.sdk.widget.KSFrameLayout {
    private final com.kwad.components.core.e.a.d IU;
    private com.kwad.components.core.e.a.a Jd;
    private final com.kwad.components.core.e.a.d Jf;
    private final com.kwad.components.core.widget.a.b bG;
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.sdk.mvp.Presenter mPresenter;
    private boolean oh;


    public g(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.core.e.a.d r3) {
            r0 = this;
            r0.<init>(r1)
            com.kwad.components.core.e.a.g$1 r1 = new com.kwad.components.core.e.a.g$1
            r1.<init>(r0)
            r0.Jf = r1
            r0.mAdTemplate = r2
            r0.IU = r3
            com.kwad.components.core.widget.a.b r1 = new com.kwad.components.core.widget.a.b
            r2 = 70
            r1.<init>(r0, r2)
            r0.bG = r1
            r0.initMVP()
            return
    }

    static void a(com.kwad.components.core.e.a.g r0) {
            r0.en()
            return
    }

    private void en() {
            r1 = this;
            boolean r0 = r1.oh
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.oh = r0
            com.kwad.components.core.e.a.d r0 = r1.IU
            r0.mM()
            return
    }

    private void initMVP() {
            r2 = this;
            com.kwad.components.core.e.a.a r0 = r2.mT()
            r2.Jd = r0
            com.kwad.sdk.mvp.Presenter r0 = onCreatePresenter()
            r2.mPresenter = r0
            r0.F(r2)
            com.kwad.sdk.mvp.Presenter r0 = r2.mPresenter
            com.kwad.components.core.e.a.a r1 = r2.Jd
            r0.k(r1)
            return
    }

    private com.kwad.components.core.e.a.a mT() {
            r2 = this;
            com.kwad.components.core.e.a.a r0 = new com.kwad.components.core.e.a.a
            r0.<init>()
            r0.IS = r2
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.mAdTemplate = r1
            com.kwad.components.core.widget.a.b r1 = r2.bG
            r0.IT = r1
            com.kwad.components.core.e.a.d r1 = r2.Jf
            r0.IU = r1
            return r0
    }

    private static com.kwad.sdk.mvp.Presenter onCreatePresenter() {
            com.kwad.sdk.mvp.Presenter r0 = new com.kwad.sdk.mvp.Presenter
            r0.<init>()
            com.kwad.components.core.e.a.f r1 = new com.kwad.components.core.e.a.f
            r1.<init>()
            r0.a(r1)
            return r0
    }

    @Override
    public final void aa() {
            r2 = this;
            super.aa()
            java.lang.String r0 = "InstalledActivateView"
            java.lang.String r1 = "onViewAttached"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.core.widget.a.b r0 = r2.bG
            r0.sy()
            return
    }

    @Override
    public final void ab() {
            r2 = this;
            super.ab()
            java.lang.String r0 = "InstalledActivateView"
            java.lang.String r1 = "onViewDetached"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.core.widget.a.b r0 = r2.bG
            r0.release()
            com.kwad.sdk.mvp.Presenter r0 = r2.mPresenter
            r0.destroy()
            com.kwad.components.core.e.a.a r0 = r2.Jd
            r0.release()
            r2.en()
            return
    }
}
