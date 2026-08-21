package com.kwad.components.core.page.b;

public final class a extends com.kwad.sdk.mvp.Presenter {
    private int ML;
    private com.kwad.components.core.widget.FeedVideoView MM;




    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    static int a(com.kwad.components.core.page.b.a r0, int r1) {
            r0.ML = r1
            return r1
    }

    static com.kwad.components.core.widget.FeedVideoView a(com.kwad.components.core.page.b.a r0) {
            com.kwad.components.core.widget.FeedVideoView r0 = r0.MM
            return r0
    }

    static int b(com.kwad.components.core.page.b.a r0) {
            int r0 = r0.ML
            return r0
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            java.lang.Object r0 = r4.Gk()
            com.kwad.components.core.page.recycle.e r0 = (com.kwad.components.core.page.recycle.e) r0
            com.kwad.sdk.api.KsAdVideoPlayConfig$Builder r1 = new com.kwad.sdk.api.KsAdVideoPlayConfig$Builder
            r1.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r0.adTemplate
            boolean r2 = r2.mIsAudioEnable
            com.kwad.sdk.api.KsAdVideoPlayConfig$Builder r1 = r1.videoSoundEnable(r2)
            com.kwad.sdk.api.KsAdVideoPlayConfig r1 = r1.build()
            android.view.View r2 = r4.getRootView()
            com.kwad.components.core.widget.FeedVideoView r2 = (com.kwad.components.core.widget.FeedVideoView) r2
            r4.MM = r2
            com.kwad.sdk.core.response.model.AdTemplate r3 = r0.adTemplate
            r2.b(r3)
            com.kwad.components.core.widget.FeedVideoView r2 = r4.MM
            com.kwad.components.core.e.d.c r3 = r0.JG
            r2.a(r1, r3)
            com.kwad.components.core.widget.FeedVideoView r1 = r4.MM
            r2 = 0
            r1.setVisibility(r2)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r0.adTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            com.kwad.components.core.widget.FeedVideoView r2 = r4.MM
            com.kwad.components.core.page.b.a$1 r3 = new com.kwad.components.core.page.b.a$1
            r3.<init>(r4, r1, r0)
            r2.setOnEndBtnClickListener(r3)
            boolean r2 = com.kwad.sdk.core.response.b.a.ai(r1)
            if (r2 == 0) goto L54
            com.kwad.components.core.widget.FeedVideoView r2 = r4.MM
            com.kwad.components.core.page.b.a$2 r3 = new com.kwad.components.core.page.b.a$2
            r3.<init>(r4, r1, r0)
            r2.setOnClickListener(r3)
        L54:
            com.kwad.components.core.widget.FeedVideoView r1 = r4.MM
            com.kwad.components.core.page.b.a$3 r2 = new com.kwad.components.core.page.b.a$3
            r2.<init>(r4, r0)
            r1.setWindowFullScreenListener(r2)
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.core.widget.FeedVideoView r0 = r1.MM
            r0.release()
            return
    }
}
