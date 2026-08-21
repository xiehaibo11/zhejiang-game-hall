package com.kwad.components.core.page.b;

public final class e extends com.kwad.components.core.page.b.c {
    private com.kwad.components.core.page.c.a mPlayModule;
    private com.kwad.components.core.video.k mVideoPlayStateListener;


    public e() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.page.b.e$1 r0 = new com.kwad.components.core.page.b.e$1
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.core.page.b.d r0 = r2.MQ
            com.kwad.components.core.page.c.a r0 = r0.mPlayModule
            r2.mPlayModule = r0
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.page.c.a r0 = r2.mPlayModule
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            return
    }
}
