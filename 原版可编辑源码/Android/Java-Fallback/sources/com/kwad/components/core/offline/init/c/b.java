package com.kwad.components.core.offline.init.c;

final class b extends com.kwad.components.offline.api.core.video.BaseKsMediaPlayerView {
    private com.kwad.components.core.video.DetailVideoView LZ;


    public b(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public final com.kwad.components.core.offline.init.c.b a(com.kwad.components.core.video.DetailVideoView r1) {
            r0 = this;
            com.kwad.sdk.utils.ao.checkNotNull(r1)
            r0.addView(r1)
            r0.LZ = r1
            return r0
    }

    @Override
    public final void adaptVideoSize(int r2, int r3) {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.LZ
            r0.adaptVideoSize(r2, r3)
            return
    }

    @Override
    public final void fixWidth(boolean r2) {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.LZ
            r0.fixWidth(r2)
            return
    }

    @Override
    public final int getTextureViewGravity() {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.LZ
            int r0 = r0.getTextureViewGravity()
            return r0
    }

    public final com.kwad.components.core.video.DetailVideoView oq() {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.LZ
            return r0
    }

    @Override
    public final void setAd(boolean r2) {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.LZ
            r0.setAd(r2)
            return
    }

    @Override
    public final void setClickListener(com.kwad.components.offline.api.core.video.IKsMediaPlayerView.VideoViewClickListener r3) {
            r2 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r2.LZ
            if (r3 != 0) goto L6
            r3 = 0
            goto Lc
        L6:
            com.kwad.components.core.offline.init.c.b$1 r1 = new com.kwad.components.core.offline.init.c.b$1
            r1.<init>(r2, r3)
            r3 = r1
        Lc:
            r0.setClickListener(r3)
            return
    }

    @Override
    public final void setForce(boolean r2) {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.LZ
            r0.setForce(r2)
            return
    }

    @Override
    public final void setHorizontalVideo(boolean r2) {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.LZ
            r0.setHorizontalVideo(r2)
            return
    }

    @Override
    public final void setMediaPlayer(com.kwad.components.offline.api.core.video.IKsMediaPlayer r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.kwad.components.core.offline.init.c.a
            if (r0 == 0) goto L10
            com.kwad.components.core.video.DetailVideoView r0 = r1.LZ
            com.kwad.components.core.offline.init.c.a r2 = (com.kwad.components.core.offline.init.c.a) r2
            com.kwad.components.core.video.b r2 = r2.oo()
            r0.setMediaPlayer(r2)
            return
        L10:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "mediaPlayer not instanceof KsMediaPlayer"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public final void setRadius(float r2) {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.LZ
            r0.setRadius(r2)
            return
    }

    @Override
    public final void updateTextureViewGravity(int r2) {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.LZ
            r0.updateTextureViewGravity(r2)
            return
    }
}
