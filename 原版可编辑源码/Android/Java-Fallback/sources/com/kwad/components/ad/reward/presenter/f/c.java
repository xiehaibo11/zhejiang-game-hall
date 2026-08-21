package com.kwad.components.ad.reward.presenter.f;

public final class c extends com.kwad.components.ad.reward.presenter.f.h {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r1 = "ksad-image-video-card"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_js_reward_image_card
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.wg = r0
            return
    }
}
