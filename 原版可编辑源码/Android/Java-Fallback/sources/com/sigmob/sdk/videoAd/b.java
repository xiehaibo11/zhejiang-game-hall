package com.sigmob.sdk.videoAd;

public class b extends android.widget.VideoView {
    private static final int b = 1;
    private static final int c = Integer.MIN_VALUE;
    protected final android.media.MediaMetadataRetriever a;
    private int d;
    private int e;

    public b(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2, r0)
            android.media.MediaMetadataRetriever r2 = new android.media.MediaMetadataRetriever
            r2.<init>()
            r1.a = r2
            return
    }

    private void a(android.media.MediaPlayer r10, android.content.Context r11) {
            r9 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L77
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 >= r1) goto L77
            java.lang.String r0 = "android.media.MediaTimeProvider"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = "android.media.SubtitleController"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L71
            java.lang.String r2 = "android.media.SubtitleController$Anchor"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L71
            java.lang.String r3 = "android.media.SubtitleController$Listener"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L71
            r4 = 3
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L71
            java.lang.Class<android.content.Context> r6 = android.content.Context.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Throwable -> L71
            r6 = 1
            r5[r6] = r0     // Catch: java.lang.Throwable -> L71
            r0 = 2
            r5[r0] = r3     // Catch: java.lang.Throwable -> L71
            java.lang.reflect.Constructor r3 = r1.getConstructor(r5)     // Catch: java.lang.Throwable -> L71
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L71
            r4[r7] = r11     // Catch: java.lang.Throwable -> L71
            r11 = 0
            r4[r6] = r11     // Catch: java.lang.Throwable -> L71
            r4[r0] = r11     // Catch: java.lang.Throwable -> L71
            java.lang.Object r3 = r3.newInstance(r4)     // Catch: java.lang.Throwable -> L71
            java.lang.String r4 = "mHandler"
            java.lang.reflect.Field r4 = r1.getDeclaredField(r4)     // Catch: java.lang.Throwable -> L71
            r4.setAccessible(r6)     // Catch: java.lang.Throwable -> L71
            android.os.Handler r5 = new android.os.Handler     // Catch: java.lang.Throwable -> L71
            r5.<init>()     // Catch: java.lang.Throwable -> L71
            r4.set(r3, r5)     // Catch: java.lang.Throwable -> L71
            r4.setAccessible(r7)     // Catch: java.lang.Throwable -> L71
            java.lang.Class r4 = r10.getClass()     // Catch: java.lang.Throwable -> L71
            java.lang.String r5 = "setSubtitleAnchor"
            java.lang.Class[] r8 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L71
            r8[r7] = r1     // Catch: java.lang.Throwable -> L71
            r8[r6] = r2     // Catch: java.lang.Throwable -> L71
            java.lang.reflect.Method r1 = r4.getMethod(r5, r8)     // Catch: java.lang.Throwable -> L71
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L71
            r0[r7] = r3     // Catch: java.lang.Throwable -> L71
            r0[r6] = r11     // Catch: java.lang.Throwable -> L71
            r1.invoke(r10, r0)     // Catch: java.lang.Throwable -> L71
            goto L77
        L71:
            r10 = move-exception
            java.lang.String r11 = "setSubtitleController error: "
            com.czhj.sdk.logger.SigmobLog.e(r11, r10)
        L77:
            return
    }

    private void b() {
            r3 = this;
            r0 = 0
            r3.setOnClickListener(r0)     // Catch: java.lang.Throwable -> L1f
            r3.setOnCompletionListener(r0)     // Catch: java.lang.Throwable -> L1f
            r3.setOnErrorListener(r0)     // Catch: java.lang.Throwable -> L1f
            r3.setOnPreparedListener(r0)     // Catch: java.lang.Throwable -> L1f
            java.lang.Class<android.view.View> r1 = android.view.View.class
            java.lang.String r2 = "mContext"
            java.lang.reflect.Field r1 = r1.getDeclaredField(r2)     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L27
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L1f
            r1.set(r3, r0)     // Catch: java.lang.Throwable -> L1f
            goto L27
        L1f:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L27:
            return
    }

    public void a() {
            r1 = this;
            java.lang.String r0 = "BaseVideoView onDestroy() called"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r1.suspend()
            r1.stopPlayback()
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r1)
            r1.b()
            super.destroyDrawingCache()
            return
    }

    public void a(int r1, int r2) {
            r0 = this;
            r0.d = r1
            r0.e = r2
            return
    }

    @Override
    protected void onMeasure(int r5, int r6) {
            r4 = this;
            r0 = 0
            int r1 = getDefaultSize(r0, r5)
            int r0 = getDefaultSize(r0, r6)
            int r2 = r4.e
            int r3 = r4.d
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
            int r2 = r4.e
            int r3 = r4.d
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

    public void setVolume(float r3) {
            r2 = this;
            java.lang.String r0 = "android.widget.VideoView"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L1c
            java.lang.String r1 = "mMediaPlayer"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L24
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Throwable -> L1c
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L1c
            android.media.MediaPlayer r0 = (android.media.MediaPlayer) r0     // Catch: java.lang.Throwable -> L1c
            r0.setVolume(r3, r3)     // Catch: java.lang.Throwable -> L1c
            goto L24
        L1c:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r3)
        L24:
            return
    }
}
