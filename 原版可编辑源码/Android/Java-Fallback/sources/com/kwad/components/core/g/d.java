package com.kwad.components.core.g;

public final class d implements com.kwad.components.offline.api.core.imageplayer.IImagePlayer {
    private com.kwad.components.core.g.c KE;

    public d() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.g.c r0 = new com.kwad.components.core.g.c
            r0.<init>()
            r1.KE = r0
            return
    }

    @Override
    public final void destroy() {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            r0.destroy()
            return
    }

    @Override
    public final android.widget.FrameLayout getImagePlayerView(android.content.Context r2) {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            android.widget.FrameLayout r2 = r0.getImagePlayerView(r2)
            return r2
    }

    @Override
    public final void pause() {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            r0.pause()
            return
    }

    @Override
    public final void play() {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            r0.play()
            return
    }

    @Override
    public final void prepareToPlay() {
            r0 = this;
            return
    }

    @Override
    public final void registerMediaPlayStateListener(com.kwad.components.offline.api.core.video.listener.OfflineMediaPlayStateListener r2) {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            com.kwad.components.core.video.h r2 = com.kwad.components.core.offline.init.c.d.a(r2)
            r0.c(r2)
            return
    }

    @Override
    public final void resume() {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            r0.resume()
            return
    }

    @Override
    public final void setDuration(long r4) {
            r3 = this;
            com.kwad.components.core.g.c r0 = r3.KE
            r1 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 * r1
            r0.v(r4)
            return
    }

    @Override
    public final void setEnableCache(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public final void setHorizontalGravity(int r2) {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            r0.setHorizontalGravity(r2)
            return
    }

    @Override
    public final void setImageResize(int r2) {
            r1 = this;
            if (r2 == 0) goto L21
            r0 = 1
            if (r2 == r0) goto L1c
            r0 = 2
            if (r2 == r0) goto L14
            r0 = 3
            if (r2 == r0) goto Lc
            goto L13
        Lc:
            com.kwad.components.core.g.c r2 = r1.KE
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.CENTER
            r2.setImageScaleType(r0)
        L13:
            return
        L14:
            com.kwad.components.core.g.c r2 = r1.KE
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_XY
        L18:
            r2.setImageScaleType(r0)
            return
        L1c:
            com.kwad.components.core.g.c r2 = r1.KE
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.CENTER_CROP
            goto L18
        L21:
            com.kwad.components.core.g.c r2 = r1.KE
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_CENTER
            goto L18
    }

    @Override
    public final void setRadius(float r2, float r3, float r4, float r5) {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            r0.setRadius(r2, r3, r4, r5)
            return
    }

    @Override
    public final void setURLs(java.util.List<java.lang.String> r2) {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            r0.setURLs(r2)
            return
    }

    @Override
    public final void setVerticalGravity(int r2) {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            r0.setVerticalGravity(r2)
            return
    }

    @Override
    public final void stop() {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            r0.stop()
            return
    }

    @Override
    public final void unregisterMediaPlayStateListener(com.kwad.components.offline.api.core.video.listener.OfflineMediaPlayStateListener r2) {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.KE
            com.kwad.components.core.video.h r2 = com.kwad.components.core.offline.init.c.d.a(r2)
            r0.d(r2)
            return
    }
}
