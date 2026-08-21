package org.cocos2dx.lib;

public class Cocos2dxVideoHelper {
    static final int KeyEventBack = 1000;
    private static final int VideoTaskCreate = 0;
    private static final int VideoTaskFullScreen = 12;
    private static final int VideoTaskKeepRatio = 11;
    private static final int VideoTaskPause = 5;
    private static final int VideoTaskRemove = 1;
    private static final int VideoTaskRestart = 10;
    private static final int VideoTaskResume = 6;
    private static final int VideoTaskSeek = 8;
    private static final int VideoTaskSetRect = 3;
    private static final int VideoTaskSetSource = 2;
    private static final int VideoTaskSetVisible = 9;
    private static final int VideoTaskSetVolume = 13;
    private static final int VideoTaskStart = 4;
    private static final int VideoTaskStop = 7;
    static org.cocos2dx.lib.Cocos2dxVideoHelper.VideoHandler mVideoHandler;
    private static android.os.Handler sHandler;
    private static android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> sVideoViews;
    private static int videoTag;
    private org.cocos2dx.lib.Cocos2dxActivity mActivity;
    private android.widget.FrameLayout mLayout;
    org.cocos2dx.lib.Cocos2dxVideoView.OnVideoEventListener videoEventListener;




    private class VideoEventRunnable implements java.lang.Runnable {
        private int mVideoEvent;
        private int mVideoTag;
        final org.cocos2dx.lib.Cocos2dxVideoHelper this$0;

        public VideoEventRunnable(org.cocos2dx.lib.Cocos2dxVideoHelper r1, int r2, int r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.mVideoTag = r2
                r0.mVideoEvent = r3
                return
        }

        @Override
        public void run() {
                r2 = this;
                int r0 = r2.mVideoTag
                int r1 = r2.mVideoEvent
                org.cocos2dx.lib.Cocos2dxVideoHelper.nativeExecuteVideoCallback(r0, r1)
                return
        }
    }

    static class VideoHandler extends android.os.Handler {
        java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> mReference;

        VideoHandler(org.cocos2dx.lib.Cocos2dxVideoHelper r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.mReference = r0
                return
        }

        @Override
        public void handleMessage(android.os.Message r8) {
                r7 = this;
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                r1 = r0
                org.cocos2dx.lib.Cocos2dxVideoHelper r1 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r1
                int r0 = r8.what
                if (r0 == 0) goto Lb2
                r2 = 1
                if (r0 == r2) goto Lac
                r3 = 2
                if (r0 == r3) goto La0
                r3 = 3
                if (r0 == r3) goto L8e
                r3 = 4
                if (r0 == r3) goto L88
                r3 = 5
                if (r0 == r3) goto L82
                r3 = 7
                if (r0 == r3) goto L7c
                r3 = 8
                if (r0 == r3) goto L74
                r3 = 9
                r4 = 0
                if (r0 == r3) goto L64
                r3 = 1000(0x3e8, float:1.401E-42)
                if (r0 == r3) goto L60
                switch(r0) {
                    case 11: goto L50;
                    case 12: goto L3e;
                    case 13: goto L31;
                    default: goto L2f;
                }
            L2f:
                goto Lb7
            L31:
                int r0 = r8.arg2
                float r0 = (float) r0
                r2 = 1092616192(0x41200000, float:10.0)
                float r0 = r0 / r2
                int r2 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1200(r1, r2, r0)
                goto Lb7
            L3e:
                int r0 = r8.arg2
                if (r0 != r2) goto L49
                int r0 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$500(r1, r0, r2)
                goto Lb7
            L49:
                int r0 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$500(r1, r0, r4)
                goto Lb7
            L50:
                int r0 = r8.arg2
                if (r0 != r2) goto L5a
                int r0 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1000(r1, r0, r2)
                goto Lb7
            L5a:
                int r0 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1000(r1, r0, r4)
                goto Lb7
            L60:
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1100(r1)
                goto Lb7
            L64:
                int r0 = r8.arg2
                if (r0 != r2) goto L6e
                int r0 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$900(r1, r0, r2)
                goto Lb7
            L6e:
                int r0 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$900(r1, r0, r4)
                goto Lb7
            L74:
                int r0 = r8.arg1
                int r2 = r8.arg2
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$800(r1, r0, r2)
                goto Lb7
            L7c:
                int r0 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$700(r1, r0)
                goto Lb7
            L82:
                int r0 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$600(r1, r0)
                goto Lb7
            L88:
                int r0 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$300(r1, r0)
                goto Lb7
            L8e:
                java.lang.Object r0 = r8.obj
                android.graphics.Rect r0 = (android.graphics.Rect) r0
                int r2 = r8.arg1
                int r3 = r0.left
                int r4 = r0.top
                int r5 = r0.right
                int r6 = r0.bottom
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$400(r1, r2, r3, r4, r5, r6)
                goto Lb7
            La0:
                int r0 = r8.arg1
                int r2 = r8.arg2
                java.lang.Object r3 = r8.obj
                java.lang.String r3 = (java.lang.String) r3
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$200(r1, r0, r2, r3)
                goto Lb7
            Lac:
                int r0 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$100(r1, r0)
                goto Lb7
            Lb2:
                int r0 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$000(r1, r0)
            Lb7:
                super.handleMessage(r8)
                return
        }
    }

    static {
            return
    }

    Cocos2dxVideoHelper(org.cocos2dx.lib.Cocos2dxActivity r2, android.widget.FrameLayout r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mLayout = r0
            r1.mActivity = r0
            org.cocos2dx.lib.Cocos2dxVideoHelper$1 r0 = new org.cocos2dx.lib.Cocos2dxVideoHelper$1
            r0.<init>(r1)
            r1.videoEventListener = r0
            r1.mActivity = r2
            r1.mLayout = r3
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = new org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler
            r2.<init>(r1)
            org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler = r2
            android.util.SparseArray r2 = new android.util.SparseArray
            r2.<init>()
            org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews = r2
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r3 = android.os.Looper.myLooper()
            r2.<init>(r3)
            org.cocos2dx.lib.Cocos2dxVideoHelper.sHandler = r2
            return
    }

    private void _createVideoView(int r3) {
            r2 = this;
            org.cocos2dx.lib.Cocos2dxVideoView r0 = new org.cocos2dx.lib.Cocos2dxVideoView
            org.cocos2dx.lib.Cocos2dxActivity r1 = r2.mActivity
            r0.<init>(r1, r3)
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r1 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            r1.put(r3, r0)
            android.widget.FrameLayout$LayoutParams r3 = new android.widget.FrameLayout$LayoutParams
            r1 = -2
            r3.<init>(r1, r1)
            android.widget.FrameLayout r1 = r2.mLayout
            r1.addView(r0, r3)
            r3 = 1
            r0.setZOrderOnTop(r3)
            org.cocos2dx.lib.Cocos2dxVideoView$OnVideoEventListener r3 = r2.videoEventListener
            r0.setVideoViewEventListener(r3)
            return
    }

    private void _pauseVideo(int r2) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.pause()
        Ld:
            return
    }

    private void _removeVideoView(int r3) {
            r2 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r0 = r0.get(r3)
            org.cocos2dx.lib.Cocos2dxVideoView r0 = (org.cocos2dx.lib.Cocos2dxVideoView) r0
            if (r0 == 0) goto L17
            r0.stopPlayback()
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r1 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            r1.remove(r3)
            android.widget.FrameLayout r3 = r2.mLayout
            r3.removeView(r0)
        L17:
            return
    }

    private void _seekVideoTo(int r2, int r3) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.seekTo(r3)
        Ld:
            return
    }

    private void _setFullScreenEnabled(int r2, boolean r3) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.setFullScreenEnabled(r3)
        Ld:
            return
    }

    private void _setVideoKeepRatio(int r2, boolean r3) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.setKeepRatio(r3)
        Ld:
            return
    }

    private void _setVideoRect(int r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.setVideoRect(r3, r4, r5, r6)
        Ld:
            return
    }

    private void _setVideoURL(int r2, int r3, java.lang.String r4) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto L17
            if (r3 == 0) goto L14
            r0 = 1
            if (r3 == r0) goto L10
            goto L17
        L10:
            r2.setVideoURL(r4)
            goto L17
        L14:
            r2.setVideoFileName(r4)
        L17:
            return
    }

    private void _setVideoVisible(int r2, boolean r3) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto L18
            if (r3 == 0) goto L14
            r2.fixSize()
            r3 = 0
            r2.setVisibility(r3)
            goto L18
        L14:
            r3 = 4
            r2.setVisibility(r3)
        L18:
            return
    }

    private void _setVolume(int r2, float r3) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.setVolume(r3)
        Ld:
            return
    }

    private void _startVideo(int r2) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.start()
        Ld:
            return
    }

    private void _stopVideo(int r2) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.stop()
        Ld:
            return
    }

    static void access$000(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1) {
            r0._createVideoView(r1)
            return
    }

    static void access$100(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1) {
            r0._removeVideoView(r1)
            return
    }

    static void access$1000(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, boolean r2) {
            r0._setVideoKeepRatio(r1, r2)
            return
    }

    static void access$1100(org.cocos2dx.lib.Cocos2dxVideoHelper r0) {
            r0.onBackKeyEvent()
            return
    }

    static void access$1200(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, float r2) {
            r0._setVolume(r1, r2)
            return
    }

    static org.cocos2dx.lib.Cocos2dxActivity access$1300(org.cocos2dx.lib.Cocos2dxVideoHelper r0) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = r0.mActivity
            return r0
    }

    static android.util.SparseArray access$1400() {
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            return r0
    }

    static void access$200(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, int r2, java.lang.String r3) {
            r0._setVideoURL(r1, r2, r3)
            return
    }

    static void access$300(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1) {
            r0._startVideo(r1)
            return
    }

    static void access$400(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, int r2, int r3, int r4, int r5) {
            r0._setVideoRect(r1, r2, r3, r4, r5)
            return
    }

    static void access$500(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, boolean r2) {
            r0._setFullScreenEnabled(r1, r2)
            return
    }

    static void access$600(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1) {
            r0._pauseVideo(r1)
            return
    }

    static void access$700(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1) {
            r0._stopVideo(r1)
            return
    }

    static void access$800(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, int r2) {
            r0._seekVideoTo(r1, r2)
            return
    }

    static void access$900(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, boolean r2) {
            r0._setVideoVisible(r1, r2)
            return
    }

    public static <T> T callInMainThread(java.util.concurrent.Callable<T> r1) throws java.util.concurrent.ExecutionException, java.lang.InterruptedException {
            java.util.concurrent.FutureTask r0 = new java.util.concurrent.FutureTask
            r0.<init>(r1)
            android.os.Handler r1 = org.cocos2dx.lib.Cocos2dxVideoHelper.sHandler
            r1.post(r0)
            java.lang.Object r1 = r0.get()
            return r1
    }

    public static int createVideoWidget() {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 0
            r0.what = r1
            int r1 = org.cocos2dx.lib.Cocos2dxVideoHelper.videoTag
            r0.arg1 = r1
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r1 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r1.sendMessage(r0)
            int r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.videoTag
            int r1 = r0 + 1
            org.cocos2dx.lib.Cocos2dxVideoHelper.videoTag = r1
            return r0
    }

    public static float getCurrentTime(int r1) {
            org.cocos2dx.lib.Cocos2dxVideoHelper$2 r0 = new org.cocos2dx.lib.Cocos2dxVideoHelper$2
            r0.<init>(r1)
            r1 = -1082130432(0xffffffffbf800000, float:-1.0)
            java.lang.Object r0 = callInMainThread(r0)     // Catch: java.lang.Throwable -> L11
            java.lang.Float r0 = (java.lang.Float) r0     // Catch: java.lang.Throwable -> L11
            float r1 = r0.floatValue()     // Catch: java.lang.Throwable -> L11
        L11:
            return r1
    }

    public static float getDuration(int r1) {
            org.cocos2dx.lib.Cocos2dxVideoHelper$3 r0 = new org.cocos2dx.lib.Cocos2dxVideoHelper$3
            r0.<init>(r1)
            r1 = -1082130432(0xffffffffbf800000, float:-1.0)
            java.lang.Object r0 = callInMainThread(r0)     // Catch: java.lang.Throwable -> L11
            java.lang.Float r0 = (java.lang.Float) r0     // Catch: java.lang.Throwable -> L11
            float r1 = r0.floatValue()     // Catch: java.lang.Throwable -> L11
        L11:
            return r1
    }

    public static native void nativeExecuteVideoCallback(int r0, int r1);

    private void onBackKeyEvent() {
            r7 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            int r0 = r0.size()
            r1 = 0
            r2 = 0
        L8:
            if (r2 >= r0) goto L2c
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r3 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            int r3 = r3.keyAt(r2)
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r4 = org.cocos2dx.lib.Cocos2dxVideoHelper.sVideoViews
            java.lang.Object r4 = r4.get(r3)
            org.cocos2dx.lib.Cocos2dxVideoView r4 = (org.cocos2dx.lib.Cocos2dxVideoView) r4
            if (r4 == 0) goto L29
            r4.setFullScreenEnabled(r1)
            org.cocos2dx.lib.Cocos2dxActivity r4 = r7.mActivity
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoEventRunnable r5 = new org.cocos2dx.lib.Cocos2dxVideoHelper$VideoEventRunnable
            r6 = 1000(0x3e8, float:1.401E-42)
            r5.<init>(r7, r3, r6)
            r4.runOnGLThread(r5)
        L29:
            int r2 = r2 + 1
            goto L8
        L2c:
            return
    }

    public static void pauseVideo(int r2) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 5
            r0.what = r1
            r0.arg1 = r2
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void removeVideoWidget(int r2) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 1
            r0.what = r1
            r0.arg1 = r2
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void seekVideoTo(int r2, int r3) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 8
            r0.what = r1
            r0.arg1 = r2
            r0.arg2 = r3
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void setFullScreenEnabled(int r2, boolean r3) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 12
            r0.what = r1
            r0.arg1 = r2
            if (r3 == 0) goto L11
            r2 = 1
            r0.arg2 = r2
            goto L14
        L11:
            r2 = 0
            r0.arg2 = r2
        L14:
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void setVideoKeepRatioEnabled(int r2, boolean r3) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 11
            r0.what = r1
            r0.arg1 = r2
            if (r3 == 0) goto L11
            r2 = 1
            r0.arg2 = r2
            goto L14
        L11:
            r2 = 0
            r0.arg2 = r2
        L14:
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void setVideoRect(int r2, int r3, int r4, int r5, int r6) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 3
            r0.what = r1
            r0.arg1 = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>(r3, r4, r5, r6)
            r0.obj = r2
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void setVideoUrl(int r2, int r3, java.lang.String r4) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 2
            r0.what = r1
            r0.arg1 = r2
            r0.arg2 = r3
            r0.obj = r4
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void setVideoVisible(int r2, boolean r3) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 9
            r0.what = r1
            r0.arg1 = r2
            if (r3 == 0) goto L11
            r2 = 1
            r0.arg2 = r2
            goto L14
        L11:
            r2 = 0
            r0.arg2 = r2
        L14:
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void setVolume(int r2, float r3) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 13
            r0.what = r1
            r0.arg1 = r2
            r2 = 1092616192(0x41200000, float:10.0)
            float r3 = r3 * r2
            int r2 = (int) r3
            r0.arg2 = r2
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void startVideo(int r2) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 4
            r0.what = r1
            r0.arg1 = r2
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void stopVideo(int r2) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 7
            r0.what = r1
            r0.arg1 = r2
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }
}
