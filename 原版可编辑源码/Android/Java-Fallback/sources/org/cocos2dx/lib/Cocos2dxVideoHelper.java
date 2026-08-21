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
    private static final int VideoTaskSetLooping = 13;
    private static final int VideoTaskSetRect = 3;
    private static final int VideoTaskSetSource = 2;
    private static final int VideoTaskSetUserInputEnabled = 14;
    private static final int VideoTaskSetVisible = 9;
    private static final int VideoTaskStart = 4;
    private static final int VideoTaskStop = 7;
    static org.cocos2dx.lib.Cocos2dxVideoHelper.VideoHandler mVideoHandler;
    private static int videoTag;
    private org.cocos2dx.lib.Cocos2dxActivity mActivity;
    private android.widget.FrameLayout mLayout;
    private android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> sVideoViews;
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
                int r0 = r8.what
                r1 = 1000(0x3e8, float:1.401E-42)
                if (r0 == r1) goto L134
                r1 = 0
                r2 = 1
                switch(r0) {
                    case 0: goto L126;
                    case 1: goto L118;
                    case 2: goto L104;
                    case 3: goto Le9;
                    case 4: goto Ldb;
                    case 5: goto Lcd;
                    case 6: goto Lbe;
                    case 7: goto Laf;
                    case 8: goto L9e;
                    case 9: goto L84;
                    case 10: goto L75;
                    case 11: goto L5b;
                    case 12: goto L35;
                    case 13: goto L21;
                    case 14: goto Ld;
                    default: goto Lb;
                }
            Lb:
                goto L13f
            Ld:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r3 = r8.arg1
                int r4 = r8.arg2
                if (r4 == 0) goto L1c
                r1 = 1
            L1c:
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1400(r0, r3, r1)
                goto L13f
            L21:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r3 = r8.arg1
                int r4 = r8.arg2
                if (r4 == 0) goto L30
                r1 = 1
            L30:
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1300(r0, r3, r1)
                goto L13f
            L35:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                java.lang.Object r3 = r8.obj
                android.graphics.Rect r3 = (android.graphics.Rect) r3
                int r4 = r8.arg2
                if (r4 != r2) goto L50
                int r1 = r8.arg1
                int r4 = r3.right
                int r3 = r3.bottom
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$500(r0, r1, r2, r4, r3)
                goto L13f
            L50:
                int r2 = r8.arg1
                int r4 = r3.right
                int r3 = r3.bottom
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$500(r0, r2, r1, r4, r3)
                goto L13f
            L5b:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r3 = r8.arg2
                if (r3 != r2) goto L6e
                int r1 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1200(r0, r1, r2)
                goto L13f
            L6e:
                int r2 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1200(r0, r2, r1)
                goto L13f
            L75:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r1 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1100(r0, r1)
                goto L13f
            L84:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r3 = r8.arg2
                if (r3 != r2) goto L97
                int r1 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1000(r0, r1, r2)
                goto L13f
            L97:
                int r2 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1000(r0, r2, r1)
                goto L13f
            L9e:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r1 = r8.arg1
                int r2 = r8.arg2
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$900(r0, r1, r2)
                goto L13f
            Laf:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r1 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$800(r0, r1)
                goto L13f
            Lbe:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r1 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$700(r0, r1)
                goto L13f
            Lcd:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r1 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$600(r0, r1)
                goto L13f
            Ldb:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r1 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$300(r0, r1)
                goto L13f
            Le9:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                r1 = r0
                org.cocos2dx.lib.Cocos2dxVideoHelper r1 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r1
                java.lang.Object r0 = r8.obj
                android.graphics.Rect r0 = (android.graphics.Rect) r0
                int r2 = r8.arg1
                int r3 = r0.left
                int r4 = r0.top
                int r5 = r0.right
                int r6 = r0.bottom
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$400(r1, r2, r3, r4, r5, r6)
                goto L13f
            L104:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r1 = r8.arg1
                int r2 = r8.arg2
                java.lang.Object r3 = r8.obj
                java.lang.String r3 = (java.lang.String) r3
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$200(r0, r1, r2, r3)
                goto L13f
            L118:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r1 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$100(r0, r1)
                goto L13f
            L126:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                int r1 = r8.arg1
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$000(r0, r1)
                goto L13f
            L134:
                java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxVideoHelper> r0 = r7.mReference
                java.lang.Object r0 = r0.get()
                org.cocos2dx.lib.Cocos2dxVideoHelper r0 = (org.cocos2dx.lib.Cocos2dxVideoHelper) r0
                org.cocos2dx.lib.Cocos2dxVideoHelper.access$1500(r0)
            L13f:
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
            r1.sVideoViews = r0
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
            r1.sVideoViews = r2
            return
    }

    private void _createVideoView(int r3) {
            r2 = this;
            org.cocos2dx.lib.Cocos2dxVideoView r0 = new org.cocos2dx.lib.Cocos2dxVideoView
            org.cocos2dx.lib.Cocos2dxActivity r1 = r2.mActivity
            r0.<init>(r1, r3)
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r1 = r2.sVideoViews
            r1.put(r3, r0)
            android.widget.FrameLayout$LayoutParams r3 = new android.widget.FrameLayout$LayoutParams
            r1 = -2
            r3.<init>(r1, r1)
            android.widget.FrameLayout r1 = r2.mLayout
            r1.addView(r0, r3)
            r3 = 1
            r0.setZOrderOnTop(r3)
            org.cocos2dx.lib.Cocos2dxVideoView$OnVideoEventListener r3 = r2.videoEventListener
            r0.setOnCompletionListener(r3)
            return
    }

    private void _pauseVideo(int r2) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.pause()
        Ld:
            return
    }

    private void _removeVideoView(int r3) {
            r2 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r2.sVideoViews
            java.lang.Object r0 = r0.get(r3)
            org.cocos2dx.lib.Cocos2dxVideoView r0 = (org.cocos2dx.lib.Cocos2dxVideoView) r0
            if (r0 == 0) goto L17
            r0.stopPlayback()
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r1 = r2.sVideoViews
            r1.remove(r3)
            android.widget.FrameLayout r3 = r2.mLayout
            r3.removeView(r0)
        L17:
            return
    }

    private void _restartVideo(int r2) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.restart()
        Ld:
            return
    }

    private void _resumeVideo(int r2) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.resume()
        Ld:
            return
    }

    private void _seekVideoTo(int r2, int r3) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.seekTo(r3)
        Ld:
            return
    }

    private void _setFullScreenEnabled(int r2, boolean r3, int r4, int r5) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.setFullScreenEnabled(r3, r4, r5)
        Ld:
            return
    }

    private void _setLooping(int r2, boolean r3) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.setLooping(r3)
        Ld:
            return
    }

    private void _setUserInputEnabled(int r2, boolean r3) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.setUserInputEnabled(r3)
        Ld:
            return
    }

    private void _setVideoKeepRatio(int r2, boolean r3) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.setKeepRatio(r3)
        Ld:
            return
    }

    private void _setVideoRect(int r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.setVideoRect(r3, r4, r5, r6)
        Ld:
            return
    }

    private void _setVideoURL(int r2, int r3, java.lang.String r4) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
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
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
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

    private void _startVideo(int r2) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.Cocos2dxVideoView r2 = (org.cocos2dx.lib.Cocos2dxVideoView) r2
            if (r2 == 0) goto Ld
            r2.start()
        Ld:
            return
    }

    private void _stopVideo(int r2) {
            r1 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r1.sVideoViews
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
            r0._setVideoVisible(r1, r2)
            return
    }

    static void access$1100(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1) {
            r0._restartVideo(r1)
            return
    }

    static void access$1200(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, boolean r2) {
            r0._setVideoKeepRatio(r1, r2)
            return
    }

    static void access$1300(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, boolean r2) {
            r0._setLooping(r1, r2)
            return
    }

    static void access$1400(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, boolean r2) {
            r0._setUserInputEnabled(r1, r2)
            return
    }

    static void access$1500(org.cocos2dx.lib.Cocos2dxVideoHelper r0) {
            r0.onBackKeyEvent()
            return
    }

    static org.cocos2dx.lib.Cocos2dxActivity access$1600(org.cocos2dx.lib.Cocos2dxVideoHelper r0) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = r0.mActivity
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

    static void access$500(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, boolean r2, int r3, int r4) {
            r0._setFullScreenEnabled(r1, r2, r3, r4)
            return
    }

    static void access$600(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1) {
            r0._pauseVideo(r1)
            return
    }

    static void access$700(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1) {
            r0._resumeVideo(r1)
            return
    }

    static void access$800(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1) {
            r0._stopVideo(r1)
            return
    }

    static void access$900(org.cocos2dx.lib.Cocos2dxVideoHelper r0, int r1, int r2) {
            r0._seekVideoTo(r1, r2)
            return
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

    public static native void nativeExecuteVideoCallback(int r0, int r1);

    private void onBackKeyEvent() {
            r7 = this;
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r0 = r7.sVideoViews
            int r0 = r0.size()
            r1 = 0
            r2 = 0
        L8:
            if (r2 >= r0) goto L2c
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r3 = r7.sVideoViews
            int r3 = r3.keyAt(r2)
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxVideoView> r4 = r7.sVideoViews
            java.lang.Object r4 = r4.get(r3)
            org.cocos2dx.lib.Cocos2dxVideoView r4 = (org.cocos2dx.lib.Cocos2dxVideoView) r4
            if (r4 == 0) goto L29
            r4.setFullScreenEnabled(r1, r1, r1)
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

    public static void restartVideo(int r2) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 10
            r0.what = r1
            r0.arg1 = r2
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void resumeVideo(int r2) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 6
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

    public static void setFullScreenEnabled(int r2, boolean r3, int r4, int r5) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 12
            r0.what = r1
            r0.arg1 = r2
            r2 = 0
            if (r3 == 0) goto L12
            r3 = 1
            r0.arg2 = r3
            goto L14
        L12:
            r0.arg2 = r2
        L14:
            android.graphics.Rect r3 = new android.graphics.Rect
            r3.<init>(r2, r2, r4, r5)
            r0.obj = r3
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void setLooping(int r2, boolean r3) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 13
            r0.what = r1
            r0.arg1 = r2
            r0.arg2 = r3
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r2 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r2.sendMessage(r0)
            return
    }

    public static void setUserInputEnabled(int r2, boolean r3) {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 14
            r0.what = r1
            r0.arg1 = r2
            r0.arg2 = r3
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
