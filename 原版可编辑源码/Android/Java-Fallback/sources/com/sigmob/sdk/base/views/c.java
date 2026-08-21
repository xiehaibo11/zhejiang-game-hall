package com.sigmob.sdk.base.views;

public class c extends android.widget.RelativeLayout implements android.media.MediaPlayer.OnBufferingUpdateListener, android.view.SurfaceHolder.Callback {
    android.view.SurfaceView a;
    private android.media.MediaPlayer b;
    private android.view.SurfaceHolder c;
    private java.lang.String d;
    private int e;
    private int f;
    private int g;

    public c(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 0
            r2.b = r0
            java.lang.String r0 = ""
            r2.d = r0
            android.view.SurfaceView r0 = new android.view.SurfaceView
            r0.<init>(r3)
            r2.a = r0
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams
            r1 = -1
            r3.<init>(r1, r1)
            r2.addView(r0, r3)
            android.view.SurfaceView r3 = r2.a
            android.view.SurfaceHolder r3 = r3.getHolder()
            r2.c = r3
            r3.addCallback(r2)
            android.media.MediaPlayer r3 = new android.media.MediaPlayer
            r3.<init>()
            r2.b = r3
            r0 = 1
            r3.setLooping(r0)
            android.media.MediaPlayer r3 = r2.b
            r3.setOnBufferingUpdateListener(r2)
            return
    }

    private void g() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.b     // Catch: java.io.IOException -> L12
            r0.reset()     // Catch: java.io.IOException -> L12
            android.media.MediaPlayer r0 = r2.b     // Catch: java.io.IOException -> L12
            java.lang.String r1 = r2.d     // Catch: java.io.IOException -> L12
            r0.setDataSource(r1)     // Catch: java.io.IOException -> L12
            android.media.MediaPlayer r0 = r2.b     // Catch: java.io.IOException -> L12
            r0.prepareAsync()     // Catch: java.io.IOException -> L12
            goto L1a
        L12:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L1a:
            return
    }

    public void a() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.b
            if (r0 == 0) goto L17
            boolean r0 = r0.isPlaying()
            if (r0 == 0) goto L17
            android.media.MediaPlayer r0 = r1.b
            r0.pause()
            android.media.MediaPlayer r0 = r1.b
            int r0 = r0.getCurrentPosition()
            r1.g = r0
        L17:
            return
    }

    public void a(int r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.b
            if (r0 == 0) goto L7
            r0.seekTo(r2)
        L7:
            return
    }

    public void a(int r1, int r2) {
            r0 = this;
            r0.e = r1
            r0.f = r2
            return
    }

    public void a(boolean r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.b
            if (r0 == 0) goto La
            r2 = r2 ^ 1
            float r2 = (float) r2
            r0.setVolume(r2, r2)
        La:
            return
    }

    public void b() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.b
            if (r0 == 0) goto Le
            int r1 = r2.g
            r0.seekTo(r1)
            android.media.MediaPlayer r0 = r2.b
            r0.start()
        Le:
            return
    }

    public void c() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.b
            if (r0 == 0) goto L14
            r0.stop()
            android.media.MediaPlayer r0 = r1.b
            r0.reset()
            android.media.MediaPlayer r0 = r1.b
            r0.release()
            r0 = 0
            r1.b = r0
        L14:
            return
    }

    public void d() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.b
            if (r0 == 0) goto L7
            r0.start()
        L7:
            return
    }

    public void e() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.b
            if (r0 == 0) goto L7
            r0.stop()
        L7:
            return
    }

    public void f() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.b
            if (r0 == 0) goto L7
            r0.pause()
        L7:
            return
    }

    @Override
    public void onBufferingUpdate(android.media.MediaPlayer r1, int r2) {
            r0 = this;
            return
    }

    @Override
    protected void onMeasure(int r5, int r6) {
            r4 = this;
            r0 = 0
            int r1 = getDefaultSize(r0, r5)
            int r0 = getDefaultSize(r0, r6)
            int r2 = r4.f
            int r3 = r4.e
            if (r0 <= r1) goto L19
            if (r2 <= r3) goto L12
            goto L21
        L12:
            float r0 = (float) r2
            float r2 = (float) r3
            float r0 = r0 / r2
            float r2 = (float) r1
            float r2 = r2 * r0
            int r0 = (int) r2
            goto L21
        L19:
            if (r2 <= r3) goto L21
            float r1 = (float) r3
            float r2 = (float) r2
            float r1 = r1 / r2
            float r2 = (float) r0
            float r2 = r2 * r1
            int r1 = (int) r2
        L21:
            int r2 = r4.f
            int r3 = r4.e
            if (r2 != r3) goto L3a
            r0 = -1
            if (r2 != r0) goto L36
            int r5 = android.view.View.MeasureSpec.getSize(r5)
            int r6 = android.view.View.MeasureSpec.getSize(r6)
            r4.setMeasuredDimension(r5, r6)
            goto L3d
        L36:
            super.onMeasure(r5, r6)
            goto L3d
        L3a:
            r4.setMeasuredDimension(r1, r0)
        L3d:
            return
    }

    public void setOnPreparedListener(android.media.MediaPlayer.OnPreparedListener r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.b
            r0.setOnPreparedListener(r2)
            return
    }

    public void setOnSeekCompleteListener(android.media.MediaPlayer.OnSeekCompleteListener r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.b
            r0.setOnSeekCompleteListener(r2)
            return
    }

    public void setVideoPath(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            r0.g()
            return
    }

    @Override
    public void surfaceChanged(android.view.SurfaceHolder r1, int r2, int r3, int r4) {
            r0 = this;
            return
    }

    @Override
    public void surfaceCreated(android.view.SurfaceHolder r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.b
            r0.setDisplay(r2)
            return
    }

    @Override
    public void surfaceDestroyed(android.view.SurfaceHolder r1) {
            r0 = this;
            android.media.MediaPlayer r1 = r0.b
            if (r1 == 0) goto L14
            boolean r1 = r1.isPlaying()
            if (r1 == 0) goto L14
            android.media.MediaPlayer r1 = r0.b
            r1.stop()
            android.media.MediaPlayer r1 = r0.b
            r1.release()
        L14:
            return
    }
}
