package com.kwad.components.core.offline.init.c;

final class c implements com.kwad.components.offline.api.core.video.IMediaPlayer {
    private com.kwad.sdk.core.video.a.c Mc;

    c() {
            r0 = this;
            r0.<init>()
            return
    }

    public final com.kwad.components.core.offline.init.c.c b(com.kwad.sdk.core.video.a.c r1) {
            r0 = this;
            com.kwad.sdk.utils.ao.checkNotNull(r1)
            r0.Mc = r1
            return r0
    }

    @Override
    public final int getAudioSessionId() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            int r0 = r0.getAudioSessionId()
            return r0
    }

    @Override
    public final java.lang.String getCurrentPlayingUrl() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            java.lang.String r0 = r0.getCurrentPlayingUrl()
            return r0
    }

    @Override
    public final long getCurrentPosition() {
            r2 = this;
            com.kwad.sdk.core.video.a.c r0 = r2.Mc
            long r0 = r0.getCurrentPosition()
            return r0
    }

    @Override
    public final java.lang.String getDataSource() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            java.lang.String r0 = r0.getDataSource()
            return r0
    }

    @Override
    public final long getDuration() {
            r2 = this;
            com.kwad.sdk.core.video.a.c r0 = r2.Mc
            long r0 = r0.getDuration()
            return r0
    }

    @Override
    public final int getMediaPlayerType() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            int r0 = r0.getMediaPlayerType()
            return r0
    }

    @Override
    public final int getVideoHeight() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            int r0 = r0.getVideoHeight()
            return r0
    }

    @Override
    public final int getVideoWidth() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            int r0 = r0.getVideoWidth()
            return r0
    }

    @Override
    public final boolean isLooping() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            boolean r0 = r0.isLooping()
            return r0
    }

    @Override
    public final boolean isPlaying() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            boolean r0 = r0.isPlaying()
            return r0
    }

    public final com.kwad.sdk.core.video.a.c or() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            return r0
    }

    @Override
    public final void pause() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.pause()
            return
    }

    @Override
    public final boolean prepareAsync() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            boolean r0 = r0.prepareAsync()
            return r0
    }

    @Override
    public final void release() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.release()
            return
    }

    @Override
    public final void reset() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.reset()
            return
    }

    @Override
    public final void seekTo(long r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.seekTo(r2)
            return
    }

    @Override
    public final void setAudioStreamType(int r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.setAudioStreamType(r2)
            return
    }

    @Override
    public final void setDataSource(android.content.Context r2, android.net.Uri r3) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.setDataSource(r2, r3)
            return
    }

    @Override
    public final void setDataSource(android.content.Context r2, android.net.Uri r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.setDataSource(r2, r3, r4)
            return
    }

    @Override
    public final void setDataSource(com.kwad.components.offline.api.core.video.mdoel.PlayVideoInfo r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            com.kwad.sdk.contentalliance.a.a.b r2 = com.kwad.components.core.offline.init.c.d.a(r2)
            r0.a(r2)
            return
    }

    @Override
    public final void setDataSource(java.io.FileDescriptor r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.setDataSource(r2)
            return
    }

    @Override
    public final void setDataSource(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.setDataSource(r2)
            return
    }

    @Override
    public final void setDisplay(android.view.SurfaceHolder r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.setDisplay(r2)
            return
    }

    @Override
    public final void setLooping(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.setLooping(r2)
            return
    }

    @Override
    public final void setOnBufferingUpdateListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnBufferingUpdateListener r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            com.kwad.sdk.core.video.a.c$a r2 = com.kwad.components.core.offline.init.c.d.a(r1, r2)
            r0.a(r2)
            return
    }

    @Override
    public final void setOnCompletionListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnCompletionListener r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            com.kwad.sdk.core.video.a.c$b r2 = com.kwad.components.core.offline.init.c.d.a(r1, r2)
            r0.a(r2)
            return
    }

    @Override
    public final void setOnErrorListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnErrorListener r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            com.kwad.sdk.core.video.a.c$c r2 = com.kwad.components.core.offline.init.c.d.a(r1, r2)
            r0.a(r2)
            return
    }

    @Override
    public final void setOnInfoListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnInfoListener r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            com.kwad.sdk.core.video.a.c$d r2 = com.kwad.components.core.offline.init.c.d.a(r1, r2)
            r0.c(r2)
            return
    }

    @Override
    public final void setOnPreparedListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnPreparedListener r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            com.kwad.sdk.core.video.a.c$e r2 = com.kwad.components.core.offline.init.c.d.a(r1, r2)
            r0.b(r2)
            return
    }

    @Override
    public final void setOnSeekCompleteListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnSeekCompleteListener r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            com.kwad.sdk.core.video.a.c$f r2 = com.kwad.components.core.offline.init.c.d.a(r1, r2)
            r0.a(r2)
            return
    }

    @Override
    public final void setOnTimedTextListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnTimedTextListener r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            com.kwad.sdk.core.video.a.c$g r2 = com.kwad.components.core.offline.init.c.d.a(r1, r2)
            r0.a(r2)
            return
    }

    @Override
    public final void setOnVideoSizeChangedListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnVideoSizeChangedListener r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            com.kwad.sdk.core.video.a.c$h r2 = com.kwad.components.core.offline.init.c.d.a(r1, r2)
            r0.a(r2)
            return
    }

    @Override
    public final void setScreenOnWhilePlaying(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.setScreenOnWhilePlaying(r2)
            return
    }

    @Override
    public final void setSpeed(float r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.setSpeed(r2)
            return
    }

    @Override
    public final void setSurface(android.view.Surface r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.setSurface(r2)
            return
    }

    @Override
    public final void setVolume(float r2, float r3) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.setVolume(r2, r3)
            return
    }

    @Override
    public final void start() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.start()
            return
    }

    @Override
    public final void stop() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.Mc
            r0.stop()
            return
    }
}
