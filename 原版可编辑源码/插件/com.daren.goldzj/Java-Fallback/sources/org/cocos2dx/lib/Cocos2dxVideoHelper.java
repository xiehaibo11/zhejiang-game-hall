package org.cocos2dx.lib;

import android.graphics.Rect;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.util.SparseArray;
import android.widget.FrameLayout;
import java.lang.ref.WeakReference;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.FutureTask;
import org.cocos2dx.lib.Cocos2dxVideoView;

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
    static VideoHandler mVideoHandler;
    private static Handler sHandler;
    private static SparseArray<Cocos2dxVideoView> sVideoViews;
    private static int videoTag;
    private Cocos2dxActivity mActivity;
    private FrameLayout mLayout;
    Cocos2dxVideoView.OnVideoEventListener videoEventListener;

    private class VideoEventRunnable implements Runnable {
        private int mVideoEvent;
        private int mVideoTag;
        final Cocos2dxVideoHelper this$0;

        public VideoEventRunnable(Cocos2dxVideoHelper r1, int r2, int r3) {
            this.this$0 = r1;
            this.mVideoTag = r2;
            this.mVideoEvent = r3;
        }

        @Override
        public void run() {
            Cocos2dxVideoHelper.nativeExecuteVideoCallback(this.mVideoTag, this.mVideoEvent);
        }
    }

    static class VideoHandler extends Handler {
        WeakReference<Cocos2dxVideoHelper> mReference;

        VideoHandler(Cocos2dxVideoHelper r2) {
            this.mReference = new WeakReference(r2);
        }

        @Override
        public void handleMessage(Message r8) {
            Cocos2dxVideoHelper r1 = this.mReference.get();
            int r0 = r8.what;
            if (r0 != 0) goto L5;
            Cocos2dxVideoHelper.access$000(r1, r8.arg1);
        L46:
            super.handleMessage(r8);
            return;
        L5:
            if (r0 != 1) goto L7;
            Cocos2dxVideoHelper.access$100(r1, r8.arg1);
            goto L46
        L7:
            if (r0 != 2) goto L9;
            Cocos2dxVideoHelper.access$200(r1, r8.arg1, r8.arg2, (String) r8.obj);
            goto L46
        L9:
            if (r0 != 3) goto L11;
            Rect r02 = (Rect) r8.obj;
            Cocos2dxVideoHelper.access$400(r1, r8.arg1, r02.left, r02.top, r02.right, r02.bottom);
            goto L46
        L11:
            if (r0 != 4) goto L13;
            Cocos2dxVideoHelper.access$300(r1, r8.arg1);
            goto L46
        L13:
            if (r0 != 5) goto L15;
            Cocos2dxVideoHelper.access$600(r1, r8.arg1);
            goto L46
        L15:
            if (r0 != 7) goto L17;
            Cocos2dxVideoHelper.access$700(r1, r8.arg1);
            goto L46
        L17:
            if (r0 != 8) goto L19;
            Cocos2dxVideoHelper.access$800(r1, r8.arg1, r8.arg2);
            goto L46
        L19:
            if (r0 == 9) goto L35;
            if (r0 == 1000) goto L33;
            switch(r0) {
                case 11: goto L30;
                case 12: goto L26;
                case 13: goto L24;
                default: goto L46;
            };
        L24:
            Cocos2dxVideoHelper.access$1200(r1, r8.arg1, r8.arg2 / 10.0f);
            goto L46
        L26:
            if (r8.arg2 != 1) goto L28;
            Cocos2dxVideoHelper.access$500(r1, r8.arg1, true);
            goto L46
        L28:
            Cocos2dxVideoHelper.access$500(r1, r8.arg1, false);
            goto L46
        L30:
            if (r8.arg2 != 1) goto L32;
            Cocos2dxVideoHelper.access$1000(r1, r8.arg1, true);
            goto L46
        L32:
            Cocos2dxVideoHelper.access$1000(r1, r8.arg1, false);
            goto L46
        L33:
            Cocos2dxVideoHelper.access$1100(r1);
            goto L46
        L35:
            if (r8.arg2 != 1) goto L37;
            Cocos2dxVideoHelper.access$900(r1, r8.arg1, true);
            goto L46
        L37:
            Cocos2dxVideoHelper.access$900(r1, r8.arg1, false);
            goto L46
        }
    }

    static {
    }

    public static native void nativeExecuteVideoCallback(int r0, int r1);

    static void access$000(Cocos2dxVideoHelper r0, int r1) {
        r0._createVideoView(r1);
    }

    static void access$100(Cocos2dxVideoHelper r0, int r1) {
        r0._removeVideoView(r1);
    }

    static void access$1000(Cocos2dxVideoHelper r0, int r1, boolean r2) {
        r0._setVideoKeepRatio(r1, r2);
    }

    static void access$1100(Cocos2dxVideoHelper r0) {
        r0.onBackKeyEvent();
    }

    static void access$1200(Cocos2dxVideoHelper r0, int r1, float r2) {
        r0._setVolume(r1, r2);
    }

    static Cocos2dxActivity access$1300(Cocos2dxVideoHelper r0) {
        return r0.mActivity;
    }

    static SparseArray access$1400() {
        return sVideoViews;
    }

    static void access$200(Cocos2dxVideoHelper r0, int r1, int r2, String r3) {
        r0._setVideoURL(r1, r2, r3);
    }

    static void access$300(Cocos2dxVideoHelper r0, int r1) {
        r0._startVideo(r1);
    }

    static void access$400(Cocos2dxVideoHelper r0, int r1, int r2, int r3, int r4, int r5) {
        r0._setVideoRect(r1, r2, r3, r4, r5);
    }

    static void access$500(Cocos2dxVideoHelper r0, int r1, boolean r2) {
        r0._setFullScreenEnabled(r1, r2);
    }

    static void access$600(Cocos2dxVideoHelper r0, int r1) {
        r0._pauseVideo(r1);
    }

    static void access$700(Cocos2dxVideoHelper r0, int r1) {
        r0._stopVideo(r1);
    }

    static void access$800(Cocos2dxVideoHelper r0, int r1, int r2) {
        r0._seekVideoTo(r1, r2);
    }

    static void access$900(Cocos2dxVideoHelper r0, int r1, boolean r2) {
        r0._setVideoVisible(r1, r2);
    }

    Cocos2dxVideoHelper(Cocos2dxActivity r2, FrameLayout r3) {
        this.mLayout = null;
        this.mActivity = null;
        this.videoEventListener = new 1(this);
        this.mActivity = r2;
        this.mLayout = r3;
        mVideoHandler = new VideoHandler(this);
        sVideoViews = new SparseArray();
        sHandler = new Handler(Looper.myLooper());
    }

    public static int createVideoWidget() {
        Message r0 = new Message();
        r0.what = 0;
        r0.arg1 = videoTag;
        mVideoHandler.sendMessage(r0);
        int r02 = videoTag;
        videoTag = r02 + 1;
        return r02;
    }

    private void _createVideoView(int r3) {
        Cocos2dxVideoView r0 = new Cocos2dxVideoView(this.mActivity, r3);
        sVideoViews.put(r3, r0);
        FrameLayout.LayoutParams r32 = new FrameLayout.LayoutParams(-2, -2);
        this.mLayout.addView(r0, r32);
        r0.setZOrderOnTop(true);
        r0.setVideoViewEventListener(this.videoEventListener);
    }

    public static void removeVideoWidget(int r2) {
        Message r0 = new Message();
        r0.what = 1;
        r0.arg1 = r2;
        mVideoHandler.sendMessage(r0);
    }

    private void _removeVideoView(int r3) {
        Cocos2dxVideoView r0 = sVideoViews.get(r3);
        if (r0 == null) goto L6;
        r0.stopPlayback();
        sVideoViews.remove(r3);
        this.mLayout.removeView(r0);
        return;
    }

    public static void setVideoUrl(int r2, int r3, String r4) {
        Message r0 = new Message();
        r0.what = 2;
        r0.arg1 = r2;
        r0.arg2 = r3;
        r0.obj = r4;
        mVideoHandler.sendMessage(r0);
    }

    private void _setVideoURL(int r2, int r3, String r4) {
        Cocos2dxVideoView r22 = sVideoViews.get(r2);
        if (r22 == null) goto L11;
        if (r3 != 0) goto L6;
        r22.setVideoFileName(r4);
        return;
    L6:
        if (r3 != 1) goto L13;
        r22.setVideoURL(r4);
        return;
    L13:
        return;
    }

    public static void setVideoRect(int r2, int r3, int r4, int r5, int r6) {
        Message r0 = new Message();
        r0.what = 3;
        r0.arg1 = r2;
        r0.obj = new Rect(r3, r4, r5, r6);
        mVideoHandler.sendMessage(r0);
    }

    private void _setVideoRect(int r2, int r3, int r4, int r5, int r6) {
        Cocos2dxVideoView r22 = sVideoViews.get(r2);
        if (r22 == null) goto L6;
        r22.setVideoRect(r3, r4, r5, r6);
        return;
    }

    public static void setFullScreenEnabled(int r2, boolean r3) {
        Message r0 = new Message();
        r0.what = 12;
        r0.arg1 = r2;
        if (r3 == false) goto L5;
        r0.arg2 = 1;
    L6:
        mVideoHandler.sendMessage(r0);
        return;
    L5:
        r0.arg2 = 0;
        goto L6
    }

    private void _setFullScreenEnabled(int r2, boolean r3) {
        Cocos2dxVideoView r22 = sVideoViews.get(r2);
        if (r22 == null) goto L6;
        r22.setFullScreenEnabled(r3);
        return;
    }

    private void onBackKeyEvent() {
        int r0 = sVideoViews.size();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L8;
        int r3 = sVideoViews.keyAt(r2);
        Cocos2dxVideoView r4 = sVideoViews.get(r3);
        if (r4 == null) goto L7;
        r4.setFullScreenEnabled(false);
        this.mActivity.runOnGLThread(new VideoEventRunnable(this, r3, 1000));
    L7:
        r2 = r2 + 1;
        goto L3
    }

    public static void startVideo(int r2) {
        Message r0 = new Message();
        r0.what = 4;
        r0.arg1 = r2;
        mVideoHandler.sendMessage(r0);
    }

    private void _startVideo(int r2) {
        Cocos2dxVideoView r22 = sVideoViews.get(r2);
        if (r22 == null) goto L6;
        r22.start();
        return;
    }

    public static void pauseVideo(int r2) {
        Message r0 = new Message();
        r0.what = 5;
        r0.arg1 = r2;
        mVideoHandler.sendMessage(r0);
    }

    private void _pauseVideo(int r2) {
        Cocos2dxVideoView r22 = sVideoViews.get(r2);
        if (r22 == null) goto L6;
        r22.pause();
        return;
    }

    public static void stopVideo(int r2) {
        Message r0 = new Message();
        r0.what = 7;
        r0.arg1 = r2;
        mVideoHandler.sendMessage(r0);
    }

    private void _stopVideo(int r2) {
        Cocos2dxVideoView r22 = sVideoViews.get(r2);
        if (r22 == null) goto L6;
        r22.stop();
        return;
    }

    public static void seekVideoTo(int r2, int r3) {
        Message r0 = new Message();
        r0.what = 8;
        r0.arg1 = r2;
        r0.arg2 = r3;
        mVideoHandler.sendMessage(r0);
    }

    private void _seekVideoTo(int r2, int r3) {
        Cocos2dxVideoView r22 = sVideoViews.get(r2);
        if (r22 == null) goto L6;
        r22.seekTo(r3);
        return;
    }

    public static <T> T callInMainThread(Callable<T> r1) throws ExecutionException, InterruptedException {
        FutureTask r0 = new FutureTask(r1);
        sHandler.post(r0);
        return (T) r0.get();
    }

    public static float getCurrentTime(final int r1) {
        return ((Float) callInMainThread(new 2(r1))).floatValue();
    L8:
        return -1.0f;
    }

    public static float getDuration(final int r1) {
        return ((Float) callInMainThread(new 3(r1))).floatValue();
    L8:
        return -1.0f;
    }

    public static void setVideoVisible(int r2, boolean r3) {
        Message r0 = new Message();
        r0.what = 9;
        r0.arg1 = r2;
        if (r3 == false) goto L5;
        r0.arg2 = 1;
    L6:
        mVideoHandler.sendMessage(r0);
        return;
    L5:
        r0.arg2 = 0;
        goto L6
    }

    private void _setVideoVisible(int r2, boolean r3) {
        Cocos2dxVideoView r22 = sVideoViews.get(r2);
        if (r22 == null) goto L8;
        if (r3 == false) goto L6;
        r22.fixSize();
        r22.setVisibility(0);
        return;
    L6:
        r22.setVisibility(4);
        return;
    }

    public static void setVideoKeepRatioEnabled(int r2, boolean r3) {
        Message r0 = new Message();
        r0.what = 11;
        r0.arg1 = r2;
        if (r3 == false) goto L5;
        r0.arg2 = 1;
    L6:
        mVideoHandler.sendMessage(r0);
        return;
    L5:
        r0.arg2 = 0;
        goto L6
    }

    private void _setVideoKeepRatio(int r2, boolean r3) {
        Cocos2dxVideoView r22 = sVideoViews.get(r2);
        if (r22 == null) goto L6;
        r22.setKeepRatio(r3);
        return;
    }

    private void _setVolume(int r2, float r3) {
        Cocos2dxVideoView r22 = sVideoViews.get(r2);
        if (r22 == null) goto L6;
        r22.setVolume(r3);
        return;
    }

    public static void setVolume(int r2, float r3) {
        Message r0 = new Message();
        r0.what = 13;
        r0.arg1 = r2;
        r0.arg2 = (int) (r3 * 10.0f);
        mVideoHandler.sendMessage(r0);
    }
}
