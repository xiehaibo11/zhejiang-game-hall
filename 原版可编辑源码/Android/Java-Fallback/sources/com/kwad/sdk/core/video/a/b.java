package com.kwad.sdk.core.video.a;

public final class b extends com.kwad.sdk.core.video.a.a {
    private final android.media.MediaPlayer avE;
    private final com.kwad.sdk.core.video.a.b.a avF;
    private java.lang.String avG;
    private android.media.MediaDataSource avH;
    private final java.lang.Object avI;
    private boolean avJ;

    static class a implements android.media.MediaPlayer.OnBufferingUpdateListener, android.media.MediaPlayer.OnCompletionListener, android.media.MediaPlayer.OnErrorListener, android.media.MediaPlayer.OnInfoListener, android.media.MediaPlayer.OnPreparedListener, android.media.MediaPlayer.OnSeekCompleteListener, android.media.MediaPlayer.OnTimedTextListener, android.media.MediaPlayer.OnVideoSizeChangedListener {
        final java.lang.ref.WeakReference<com.kwad.sdk.core.video.a.b> mWeakMediaPlayer;

        a(com.kwad.sdk.core.video.a.b r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.mWeakMediaPlayer = r0
                return
        }

        @Override
        public final void onBufferingUpdate(android.media.MediaPlayer r1, int r2) {
                r0 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.video.a.b> r1 = r0.mWeakMediaPlayer
                java.lang.Object r1 = r1.get()
                com.kwad.sdk.core.video.a.b r1 = (com.kwad.sdk.core.video.a.b) r1
                if (r1 == 0) goto Ld
                r1.notifyOnBufferingUpdate(r2)
            Ld:
                return
        }

        @Override
        public final void onCompletion(android.media.MediaPlayer r1) {
                r0 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.video.a.b> r1 = r0.mWeakMediaPlayer
                java.lang.Object r1 = r1.get()
                com.kwad.sdk.core.video.a.b r1 = (com.kwad.sdk.core.video.a.b) r1
                if (r1 == 0) goto Ld
                r1.notifyOnCompletion()
            Ld:
                return
        }

        @Override
        public final boolean onError(android.media.MediaPlayer r1, int r2, int r3) {
                r0 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.video.a.b> r1 = r0.mWeakMediaPlayer
                java.lang.Object r1 = r1.get()
                com.kwad.sdk.core.video.a.b r1 = (com.kwad.sdk.core.video.a.b) r1
                if (r1 == 0) goto L12
                boolean r1 = r1.notifyOnError(r2, r3)
                if (r1 == 0) goto L12
                r1 = 1
                return r1
            L12:
                r1 = 0
                return r1
        }

        @Override
        public final boolean onInfo(android.media.MediaPlayer r1, int r2, int r3) {
                r0 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.video.a.b> r1 = r0.mWeakMediaPlayer
                java.lang.Object r1 = r1.get()
                com.kwad.sdk.core.video.a.b r1 = (com.kwad.sdk.core.video.a.b) r1
                if (r1 == 0) goto L12
                boolean r1 = r1.notifyOnInfo(r2, r3)
                if (r1 == 0) goto L12
                r1 = 1
                return r1
            L12:
                r1 = 0
                return r1
        }

        @Override
        public final void onPrepared(android.media.MediaPlayer r1) {
                r0 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.video.a.b> r1 = r0.mWeakMediaPlayer
                java.lang.Object r1 = r1.get()
                com.kwad.sdk.core.video.a.b r1 = (com.kwad.sdk.core.video.a.b) r1
                if (r1 == 0) goto Ld
                r1.notifyOnPrepared()
            Ld:
                return
        }

        @Override
        public final void onSeekComplete(android.media.MediaPlayer r1) {
                r0 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.video.a.b> r1 = r0.mWeakMediaPlayer
                java.lang.Object r1 = r1.get()
                com.kwad.sdk.core.video.a.b r1 = (com.kwad.sdk.core.video.a.b) r1
                if (r1 == 0) goto Ld
                r1.notifyOnSeekComplete()
            Ld:
                return
        }

        @Override
        public final void onTimedText(android.media.MediaPlayer r1, android.media.TimedText r2) {
                r0 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.video.a.b> r1 = r0.mWeakMediaPlayer
                java.lang.Object r1 = r1.get()
                com.kwad.sdk.core.video.a.b r1 = (com.kwad.sdk.core.video.a.b) r1
                if (r1 == 0) goto Ld
                r1.b(r2)
            Ld:
                return
        }

        @Override
        public final void onVideoSizeChanged(android.media.MediaPlayer r1, int r2, int r3) {
                r0 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.video.a.b> r1 = r0.mWeakMediaPlayer
                java.lang.Object r1 = r1.get()
                com.kwad.sdk.core.video.a.b r1 = (com.kwad.sdk.core.video.a.b) r1
                if (r1 == 0) goto Ld
                r1.u(r2, r3)
            Ld:
                return
        }
    }

    public b() {
            r2 = this;
            r2.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.avI = r0
            monitor-enter(r0)
            android.media.MediaPlayer r1 = new android.media.MediaPlayer     // Catch: java.lang.Throwable -> L26
            r1.<init>()     // Catch: java.lang.Throwable -> L26
            r2.avE = r1     // Catch: java.lang.Throwable -> L26
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            r0 = 3
            r1.setAudioStreamType(r0)
            com.kwad.sdk.core.video.a.b$a r0 = new com.kwad.sdk.core.video.a.b$a
            r0.<init>(r2)
            r2.avF = r0
            r2.Dn()
            r0 = 0
            r2.setLooping(r0)
            return
        L26:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            throw r1
    }

    private void Dm() {
            r1 = this;
            android.media.MediaDataSource r0 = r1.avH
            if (r0 == 0) goto Lf
            r0.close()     // Catch: java.io.IOException -> L8
            goto Lc
        L8:
            r0 = move-exception
            r0.printStackTrace()
        Lc:
            r0 = 0
            r1.avH = r0
        Lf:
            return
    }

    private void Dn() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.avE
            com.kwad.sdk.core.video.a.b$a r1 = r2.avF
            r0.setOnPreparedListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            com.kwad.sdk.core.video.a.b$a r1 = r2.avF
            r0.setOnBufferingUpdateListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            com.kwad.sdk.core.video.a.b$a r1 = r2.avF
            r0.setOnCompletionListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            com.kwad.sdk.core.video.a.b$a r1 = r2.avF
            r0.setOnSeekCompleteListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            com.kwad.sdk.core.video.a.b$a r1 = r2.avF
            r0.setOnVideoSizeChangedListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            com.kwad.sdk.core.video.a.b$a r1 = r2.avF
            r0.setOnErrorListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            com.kwad.sdk.core.video.a.b$a r1 = r2.avF
            r0.setOnInfoListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            com.kwad.sdk.core.video.a.b$a r1 = r2.avF
            r0.setOnTimedTextListener(r1)
            return
    }

    private void Do() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.avE
            r1 = 0
            r0.setOnPreparedListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            r0.setOnBufferingUpdateListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            r0.setOnCompletionListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            r0.setOnSeekCompleteListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            r0.setOnVideoSizeChangedListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            r0.setOnErrorListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            r0.setOnInfoListener(r1)
            android.media.MediaPlayer r0 = r2.avE
            r0.setOnTimedTextListener(r1)
            return
    }

    @Override
    public final void a(com.kwad.sdk.contentalliance.a.a.b r4) {
            r3 = this;
            boolean r0 = r4.isNoCache
            if (r0 == 0) goto L3b
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "video/mp4"
            r0.put(r1, r2)
            java.lang.String r1 = "Accept-Ranges"
            java.lang.String r2 = "bytes"
            r0.put(r1, r2)
            java.lang.String r1 = "Status"
            java.lang.String r2 = "206"
            r0.put(r1, r2)
            java.lang.String r1 = "Cache-control"
            java.lang.String r2 = "no-cache"
            r0.put(r1, r2)
            java.lang.String r4 = r4.videoUrl
            android.net.Uri r4 = android.net.Uri.parse(r4)
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            android.content.Context r1 = r1.getContext()
            r3.setDataSource(r1, r4, r0)
            return
        L3b:
            java.lang.String r4 = r4.videoUrl
            r3.setDataSource(r4)
            return
    }

    @Override
    public final int getAudioSessionId() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            int r0 = r0.getAudioSessionId()
            return r0
    }

    @Override
    public final java.lang.String getCurrentPlayingUrl() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final long getCurrentPosition() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.avE     // Catch: java.lang.IllegalStateException -> L8
            int r0 = r0.getCurrentPosition()     // Catch: java.lang.IllegalStateException -> L8
            long r0 = (long) r0
            return r0
        L8:
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.String getDataSource() {
            r1 = this;
            java.lang.String r0 = r1.avG
            return r0
    }

    @Override
    public final long getDuration() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.avE     // Catch: java.lang.IllegalStateException -> L8
            int r0 = r0.getDuration()     // Catch: java.lang.IllegalStateException -> L8
            long r0 = (long) r0
            return r0
        L8:
            r0 = 0
            return r0
    }

    @Override
    public final int getMediaPlayerType() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final int getVideoHeight() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            int r0 = r0.getVideoHeight()
            return r0
    }

    @Override
    public final int getVideoWidth() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            int r0 = r0.getVideoWidth()
            return r0
    }

    @Override
    public final boolean isLooping() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            boolean r0 = r0.isLooping()
            return r0
    }

    @Override
    public final boolean isPlaying() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE     // Catch: java.lang.IllegalStateException -> L7
            boolean r0 = r0.isPlaying()     // Catch: java.lang.IllegalStateException -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    @Override
    public final void pause() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.pause()
            return
    }

    @Override
    public final boolean prepareAsync() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.prepareAsync()
            r0 = 1
            return r0
    }

    @Override
    public final void release() {
            r1 = this;
            r0 = 1
            r1.avJ = r0     // Catch: java.lang.Throwable -> L12
            android.media.MediaPlayer r0 = r1.avE     // Catch: java.lang.Throwable -> L12
            r0.release()     // Catch: java.lang.Throwable -> L12
            r1.Dm()     // Catch: java.lang.Throwable -> L12
            r1.resetListeners()     // Catch: java.lang.Throwable -> L12
            r1.Do()     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
    }

    @Override
    public final void reset() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE     // Catch: java.lang.IllegalStateException -> L5
            r0.reset()     // Catch: java.lang.IllegalStateException -> L5
        L5:
            r1.Dm()
            r1.resetListeners()
            r1.Dn()
            return
    }

    @Override
    public final void seekTo(long r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lf
            android.media.MediaPlayer r0 = r2.avE
            int r3 = (int) r3
            long r3 = (long) r3
            r1 = 3
            r0.seekTo(r3, r1)
            return
        Lf:
            android.media.MediaPlayer r0 = r2.avE
            int r3 = (int) r3
            r0.seekTo(r3)
            return
    }

    @Override
    public final void setAudioStreamType(int r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.setAudioStreamType(r2)
            return
    }

    @Override
    public final void setDataSource(android.content.Context r2, android.net.Uri r3) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.setDataSource(r2, r3)
            return
    }

    @Override
    public final void setDataSource(android.content.Context r2, android.net.Uri r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.setDataSource(r2, r3, r4)
            return
    }

    @Override
    public final void setDataSource(java.io.FileDescriptor r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.setDataSource(r2)
            return
    }

    @Override
    public final void setDataSource(java.lang.String r4) {
            r3 = this;
            r3.avG = r4
            android.net.Uri r0 = android.net.Uri.parse(r4)
            java.lang.String r1 = r0.getScheme()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L22
            java.lang.String r2 = "file"
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto L22
            android.media.MediaPlayer r4 = r3.avE
            java.lang.String r0 = r0.getPath()
            r4.setDataSource(r0)
            return
        L22:
            android.media.MediaPlayer r0 = r3.avE
            r0.setDataSource(r4)
            return
    }

    @Override
    public final void setDisplay(android.view.SurfaceHolder r3) {
            r2 = this;
            java.lang.Object r0 = r2.avI
            monitor-enter(r0)
            boolean r1 = r2.avJ     // Catch: java.lang.Throwable -> Le
            if (r1 != 0) goto Lc
            android.media.MediaPlayer r1 = r2.avE     // Catch: java.lang.Throwable -> Le
            r1.setDisplay(r3)     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r3
    }

    @Override
    public final void setLooping(boolean r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.setLooping(r2)
            return
    }

    @Override
    public final void setScreenOnWhilePlaying(boolean r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.setScreenOnWhilePlaying(r2)
            return
    }

    @Override
    public final void setSpeed(float r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L1b
            android.media.MediaPlayer r0 = r2.avE
            android.media.PlaybackParams r0 = r0.getPlaybackParams()
            if (r0 != 0) goto L13
            android.media.PlaybackParams r0 = new android.media.PlaybackParams
            r0.<init>()
        L13:
            r0.setSpeed(r3)
            android.media.MediaPlayer r3 = r2.avE
            r3.setPlaybackParams(r0)
        L1b:
            return
    }

    @Override
    public final void setSurface(android.view.Surface r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.setSurface(r2)
            return
    }

    @Override
    public final void setVolume(float r2, float r3) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.setVolume(r2, r3)
            f(r2)
            return
    }

    @Override
    public final void start() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.start()
            return
    }

    @Override
    public final void stop() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.avE
            r0.stop()
            return
    }
}
