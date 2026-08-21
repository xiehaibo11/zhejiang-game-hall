package com.mbridge.msdk.playercommon;

public class VideoNativePlayer implements com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener {
    public static final int INTERVAL_TIME_PLAY_TIME_CD_THREAD = 1000;
    public static final int INTERVAL_TIME_PLAY_TIME_PROGRESS = 100;
    public static final java.lang.String TAG = "VideoNativePlayer";
    private com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer exoPlayer;
    private int mBufferTime;
    private java.util.Timer mBufferTimeoutTimer;
    private long mCurrentPosition;
    private final android.os.Handler mHandler;
    private boolean mHasChaoDi;
    private boolean mHasPrepare;
    private com.mbridge.msdk.playercommon.VideoPlayerStatusListener mInnerVFPLisener;
    private boolean mIsAllowLoopPlay;
    private boolean mIsBuffering;
    private boolean mIsComplete;
    private boolean mIsFrontDesk;
    private boolean mIsNeedBufferingTimeout;
    private boolean mIsOpenSound;
    private boolean mIsPlaying;
    private boolean mIsStartPlay;
    private android.view.View mLoadingView;
    private java.lang.String mNetUrl;
    private com.mbridge.msdk.playercommon.VideoPlayerStatusListener mOutterVFListener;
    private java.lang.String mPlayUrl;
    private android.view.Surface mSurfaceHolder;
    private com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource mediaSource;
    private java.lang.Runnable playProgressMSRunnable;
    private java.lang.Runnable playProgressRunnable;















    public VideoNativePlayer() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mIsComplete = r0
            r2.mIsPlaying = r0
            r2.mHasPrepare = r0
            r1 = 1
            r2.mIsStartPlay = r1
            r2.mIsAllowLoopPlay = r1
            r2.mHasChaoDi = r0
            r2.mIsBuffering = r0
            r2.mIsNeedBufferingTimeout = r0
            r2.mIsFrontDesk = r1
            r0 = 5
            r2.mBufferTime = r0
            r2.mIsOpenSound = r1
            com.mbridge.msdk.playercommon.VideoNativePlayer$1 r0 = new com.mbridge.msdk.playercommon.VideoNativePlayer$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.mHandler = r0
            com.mbridge.msdk.playercommon.VideoNativePlayer$2 r0 = new com.mbridge.msdk.playercommon.VideoNativePlayer$2
            r0.<init>(r2)
            r2.playProgressRunnable = r0
            com.mbridge.msdk.playercommon.VideoNativePlayer$3 r0 = new com.mbridge.msdk.playercommon.VideoNativePlayer$3
            r0.<init>(r2)
            r2.playProgressMSRunnable = r0
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer access$000(com.mbridge.msdk.playercommon.VideoNativePlayer r0) {
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r0.exoPlayer
            return r0
    }

    static long access$100(com.mbridge.msdk.playercommon.VideoNativePlayer r2) {
            long r0 = r2.mCurrentPosition
            return r0
    }

    static boolean access$1000(com.mbridge.msdk.playercommon.VideoNativePlayer r0) {
            boolean r0 = r0.mHasPrepare
            return r0
    }

    static long access$102(com.mbridge.msdk.playercommon.VideoNativePlayer r0, long r1) {
            r0.mCurrentPosition = r1
            return r1
    }

    static void access$1100(com.mbridge.msdk.playercommon.VideoNativePlayer r0, java.lang.String r1) {
            r0.postOnBufferingStarOnMainThread(r1)
            return
    }

    static android.view.View access$1200(com.mbridge.msdk.playercommon.VideoNativePlayer r0) {
            android.view.View r0 = r0.mLoadingView
            return r0
    }

    static com.mbridge.msdk.playercommon.VideoPlayerStatusListener access$1300(com.mbridge.msdk.playercommon.VideoNativePlayer r0) {
            com.mbridge.msdk.playercommon.VideoPlayerStatusListener r0 = r0.mOutterVFListener
            return r0
    }

    static com.mbridge.msdk.playercommon.VideoPlayerStatusListener access$1400(com.mbridge.msdk.playercommon.VideoNativePlayer r0) {
            com.mbridge.msdk.playercommon.VideoPlayerStatusListener r0 = r0.mInnerVFPLisener
            return r0
    }

    static boolean access$200(com.mbridge.msdk.playercommon.VideoNativePlayer r0) {
            boolean r0 = r0.mIsStartPlay
            return r0
    }

    static boolean access$202(com.mbridge.msdk.playercommon.VideoNativePlayer r0, boolean r1) {
            r0.mIsStartPlay = r1
            return r1
    }

    static void access$300(com.mbridge.msdk.playercommon.VideoNativePlayer r0, int r1) {
            r0.postOnPlayStartOnMainThread(r1)
            return
    }

    static void access$400(com.mbridge.msdk.playercommon.VideoNativePlayer r0, int r1, int r2) {
            r0.postOnPlayProgressOnMainThread(r1, r2)
            return
    }

    static boolean access$502(com.mbridge.msdk.playercommon.VideoNativePlayer r0, boolean r1) {
            r0.mIsComplete = r1
            return r1
    }

    static boolean access$600(com.mbridge.msdk.playercommon.VideoNativePlayer r0) {
            boolean r0 = r0.mIsBuffering
            return r0
    }

    static void access$700(com.mbridge.msdk.playercommon.VideoNativePlayer r0) {
            r0.hideLoading()
            return
    }

    static android.os.Handler access$800(com.mbridge.msdk.playercommon.VideoNativePlayer r0) {
            android.os.Handler r0 = r0.mHandler
            return r0
    }

    static void access$900(com.mbridge.msdk.playercommon.VideoNativePlayer r0, long r1, long r3) {
            r0.postOnPlayProgressMSOnMainThread(r1, r3)
            return
    }

    private void cancelBufferTimeoutTimer() {
            r2 = this;
            java.util.Timer r0 = r2.mBufferTimeoutTimer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L14
            java.util.Timer r0 = r2.mBufferTimeoutTimer     // Catch: java.lang.Exception -> La
            r0.cancel()     // Catch: java.lang.Exception -> La
            goto L14
        La:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L14:
            return
    }

    private void cancelPlayProgressTimer() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            java.lang.Runnable r1 = r2.playProgressRunnable     // Catch: java.lang.Exception -> Lf
            r0.removeCallbacks(r1)     // Catch: java.lang.Exception -> Lf
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            java.lang.Runnable r1 = r2.playProgressMSRunnable     // Catch: java.lang.Exception -> Lf
            r0.removeCallbacks(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L19:
            return
    }

    private void hideLoading() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            if (r0 != 0) goto L5
            return
        L5:
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.playercommon.VideoNativePlayer$6 r1 = new com.mbridge.msdk.playercommon.VideoNativePlayer$6     // Catch: java.lang.Exception -> L10
            r1.<init>(r2)     // Catch: java.lang.Exception -> L10
            r0.post(r1)     // Catch: java.lang.Exception -> L10
            goto L1a
        L10:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1a:
            return
    }

    private void postOnBufferinEndOnMainThread() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoNativePlayer$10 r1 = new com.mbridge.msdk.playercommon.VideoNativePlayer$10     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L19:
            return
    }

    private void postOnBufferingStarOnMainThread(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoNativePlayer$9 r1 = new com.mbridge.msdk.playercommon.VideoNativePlayer$9     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L19:
            return
    }

    private void postOnPlayCompletedOnMainThread() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoNativePlayer$14 r1 = new com.mbridge.msdk.playercommon.VideoNativePlayer$14     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L19:
            return
    }

    private void postOnPlayErrorOnMainThread(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L16
            com.mbridge.msdk.playercommon.VideoNativePlayer$12 r1 = new com.mbridge.msdk.playercommon.VideoNativePlayer$12     // Catch: java.lang.Exception -> L16
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L16
            r0.post(r1)     // Catch: java.lang.Exception -> L16
        Le:
            r0 = 42
            java.lang.String r1 = r2.mPlayUrl     // Catch: java.lang.Exception -> L16
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r3)     // Catch: java.lang.Exception -> L16
            goto L20
        L16:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L20:
            return
    }

    private void postOnPlayProgressMSOnMainThread(long r9, long r11) {
            r8 = this;
            android.os.Handler r0 = r8.mHandler     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L1d
            android.os.Handler r0 = r8.mHandler     // Catch: java.lang.Exception -> L13
            com.mbridge.msdk.playercommon.VideoNativePlayer$8 r7 = new com.mbridge.msdk.playercommon.VideoNativePlayer$8     // Catch: java.lang.Exception -> L13
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r11
            r1.<init>(r2, r3, r5)     // Catch: java.lang.Exception -> L13
            r0.post(r7)     // Catch: java.lang.Exception -> L13
            goto L1d
        L13:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            java.lang.String r10 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r10, r9)
        L1d:
            return
    }

    private void postOnPlayProgressOnMainThread(int r3, int r4) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoNativePlayer$7 r1 = new com.mbridge.msdk.playercommon.VideoNativePlayer$7     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r4 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L19:
            return
    }

    private void postOnPlaySetDataSourceError2MainThread(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoNativePlayer$13 r1 = new com.mbridge.msdk.playercommon.VideoNativePlayer$13     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L19:
            return
    }

    private void postOnPlayStartOnMainThread(int r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoNativePlayer$11 r1 = new com.mbridge.msdk.playercommon.VideoNativePlayer$11     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L19:
            return
    }

    private void startBufferingTimer(java.lang.String r5) {
            r4 = this;
            boolean r0 = r4.mIsNeedBufferingTimeout
            if (r0 != 0) goto Lc
            java.lang.String r5 = "VideoNativePlayer"
            java.lang.String r0 = "不需要缓冲超时功能"
            com.mbridge.msdk.foundation.tools.z.d(r5, r0)
            return
        Lc:
            r4.cancelBufferTimeoutTimer()
            java.util.Timer r0 = new java.util.Timer
            r0.<init>()
            r4.mBufferTimeoutTimer = r0
            com.mbridge.msdk.playercommon.VideoNativePlayer$4 r1 = new com.mbridge.msdk.playercommon.VideoNativePlayer$4
            r1.<init>(r4, r5)
            int r5 = r4.mBufferTime
            int r5 = r5 * 1000
            long r2 = (long) r5
            r0.schedule(r1, r2)
            return
    }

    private void startPlayProgressTimer() {
            r2 = this;
            r2.cancelPlayProgressTimer()     // Catch: java.lang.Exception -> L12
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L12
            java.lang.Runnable r1 = r2.playProgressRunnable     // Catch: java.lang.Exception -> L12
            r0.post(r1)     // Catch: java.lang.Exception -> L12
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L12
            java.lang.Runnable r1 = r2.playProgressMSRunnable     // Catch: java.lang.Exception -> L12
            r0.post(r1)     // Catch: java.lang.Exception -> L12
            goto L1c
        L12:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1c:
            return
    }

    public void closeSound() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> Lc
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> Lc
            r1 = 0
            r0.setVolume(r1)     // Catch: java.lang.Exception -> Lc
            goto L16
        Lc:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L16:
            return
    }

    public boolean exoPlayerIsPlaying() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer
            int r0 = r0.getPlaybackState()
            r1 = 3
            if (r0 != r1) goto L13
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer
            boolean r0 = r0.getPlayWhenReady()
            if (r0 == 0) goto L13
            r0 = 1
            goto L14
        L13:
            r0 = 0
        L14:
            return r0
    }

    public int getCurPosition() {
            r2 = this;
            long r0 = r2.mCurrentPosition
            int r0 = (int) r0
            return r0
    }

    public boolean hasPrepare() {
            r1 = this;
            boolean r0 = r1.mHasPrepare
            return r0
    }

    public void initBufferIngParam(int r2) {
            r1 = this;
            if (r2 <= 0) goto L4
            r1.mBufferTime = r2
        L4:
            r2 = 1
            r1.mIsNeedBufferingTimeout = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "mIsNeedBufferingTimeout:"
            r2.append(r0)
            boolean r0 = r1.mIsNeedBufferingTimeout
            r2.append(r0)
            java.lang.String r0 = "  mMaxBufferTime:"
            r2.append(r0)
            int r0 = r1.mBufferTime
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)
            return
    }

    public boolean initParameter(java.lang.String r5, boolean r6, boolean r7, android.view.View r8, com.mbridge.msdk.playercommon.VideoPlayerStatusListener r9) {
            r4 = this;
            java.lang.String r0 = "VideoNativePlayer"
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = "MediaPlayer init error"
            if (r2 == 0) goto L14
            java.lang.String r5 = "netUrl为空 return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L2b
            r4.postOnPlayErrorOnMainThread(r3)     // Catch: java.lang.Throwable -> L2b
            return r1
        L14:
            if (r8 != 0) goto L1f
            java.lang.String r5 = "loadingView为空 return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L2b
            r4.postOnPlayErrorOnMainThread(r3)     // Catch: java.lang.Throwable -> L2b
            return r1
        L1f:
            r4.mIsOpenSound = r6     // Catch: java.lang.Throwable -> L2b
            r4.mIsAllowLoopPlay = r7     // Catch: java.lang.Throwable -> L2b
            r4.mLoadingView = r8     // Catch: java.lang.Throwable -> L2b
            r4.mNetUrl = r5     // Catch: java.lang.Throwable -> L2b
            r4.mOutterVFListener = r9     // Catch: java.lang.Throwable -> L2b
            r1 = 1
            goto L3a
        L2b:
            r5 = move-exception
            java.lang.String r6 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
            java.lang.String r5 = r5.toString()
            r4.postOnPlayErrorOnMainThread(r5)
        L3a:
            return r1
    }

    public boolean isComplete() {
            r1 = this;
            boolean r0 = r1.mIsComplete
            return r0
    }

    public boolean isPlayIng() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> Lc
            if (r0 == 0) goto L16
            boolean r0 = r2.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> Lc
            if (r0 == 0) goto L16
            r0 = 1
            return r0
        Lc:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L16:
            r0 = 0
            return r0
    }

    public boolean isPlaying() {
            r1 = this;
            boolean r0 = r1.exoPlayerIsPlaying()
            return r0
    }

    public boolean loadingViewIsVisible() {
            r2 = this;
            android.view.View r0 = r2.mLoadingView     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto L18
            android.view.View r0 = r2.mLoadingView     // Catch: java.lang.Throwable -> Le
            int r0 = r0.getVisibility()     // Catch: java.lang.Throwable -> Le
            if (r0 != 0) goto L18
            r0 = 1
            return r0
        Le:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L18:
            r0 = 0
            return r0
    }

    public void onCompletion() {
            r3 = this;
            java.lang.String r0 = "VideoNativePlayer"
            r1 = 1
            r3.mIsComplete = r1     // Catch: java.lang.Exception -> L18
            r1 = 0
            r3.mIsPlaying = r1     // Catch: java.lang.Exception -> L18
            r1 = 0
            r3.mCurrentPosition = r1     // Catch: java.lang.Exception -> L18
            r3.hideLoading()     // Catch: java.lang.Exception -> L18
            r3.postOnPlayCompletedOnMainThread()     // Catch: java.lang.Exception -> L18
            java.lang.String r1 = "======onCompletion"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L18
            goto L20
        L18:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L20:
            return
    }

    public boolean onError(int r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "VideoNativePlayer"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2a
            r1.<init>()     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "onError what:"
            r1.append(r2)     // Catch: java.lang.Exception -> L2a
            r1.append(r4)     // Catch: java.lang.Exception -> L2a
            java.lang.String r4 = " extra:"
            r1.append(r4)     // Catch: java.lang.Exception -> L2a
            r1.append(r5)     // Catch: java.lang.Exception -> L2a
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L2a
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Exception -> L2a
            r3.hideLoading()     // Catch: java.lang.Exception -> L2a
            r4 = 0
            r3.mHasPrepare = r4     // Catch: java.lang.Exception -> L2a
            r3.mIsPlaying = r4     // Catch: java.lang.Exception -> L2a
            r3.postOnPlayErrorOnMainThread(r5)     // Catch: java.lang.Exception -> L2a
            goto L32
        L2a:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L32:
            r4 = 1
            return r4
    }

    @Override
    public void onLoadingChanged(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public void onPlaybackParametersChanged(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onPlaybackParametersChanged : "
            r0.append(r1)
            float r3 = r3.speed
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            return
    }

    @Override
    public void onPlayerError(com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r4) {
            r3 = this;
            if (r4 == 0) goto L16
            int r0 = r4.type
            if (r0 == 0) goto L13
            r1 = 1
            if (r0 == r1) goto L10
            r1 = 2
            if (r0 == r1) goto Ld
            goto L16
        Ld:
            java.lang.String r0 = "Play error, because have a UnexpectedException."
            goto L18
        L10:
            java.lang.String r0 = "Play error, because have a RendererException."
            goto L18
        L13:
            java.lang.String r0 = "Play error, because have a SourceException."
            goto L18
        L16:
            java.lang.String r0 = "Play error and ExoPlayer have not message."
        L18:
            java.lang.Throwable r1 = r4.getCause()
            if (r1 == 0) goto L34
            java.lang.Throwable r1 = r4.getCause()
            java.lang.String r1 = r1.getMessage()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L34
            java.lang.Throwable r0 = r4.getCause()
            java.lang.String r0 = r0.getMessage()
        L34:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onPlayerError : "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
            int r4 = r4.type
            r3.onError(r4, r0)
            return
    }

    @Override
    public void onPlayerStateChanged(boolean r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "onPlaybackStateChanged : "
            r3.append(r0)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            r3 = 1
            if (r4 == r3) goto L57
            r1 = 2
            if (r4 == r1) goto L47
            r3 = 3
            r1 = 0
            if (r4 == r3) goto L36
            r3 = 4
            if (r4 == r3) goto L24
            goto L5c
        L24:
            java.lang.String r3 = "onPlaybackStateChanged : Ended : PLAY ENDED"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            r2.cancelPlayProgressTimer()
            r2.onCompletion()
            boolean r3 = r2.mIsAllowLoopPlay
            if (r3 != 0) goto L5c
            r2.mHasPrepare = r1
            goto L5c
        L36:
            java.lang.String r3 = "onPlaybackStateChanged : READY"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            r2.mIsBuffering = r1
            r2.hideLoading()
            r2.postOnBufferinEndOnMainThread()
            r2.onPrepared()
            goto L5c
        L47:
            java.lang.String r4 = "onPlaybackStateChanged : Buffering"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
            r2.mIsBuffering = r3
            r2.showLoading()
            java.lang.String r3 = "play buffering tiemout"
            r2.startBufferingTimer(r3)
            goto L5c
        L57:
            java.lang.String r3 = "onPlaybackStateChanged : IDLE"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L5c:
            return
    }

    @Override
    public void onPositionDiscontinuity(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onPositionDiscontinuity : "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            if (r3 != 0) goto L1b
            r2.onCompletion()
        L1b:
            return
    }

    public void onPrepared() {
            r4 = this;
            java.lang.String r0 = "VideoNativePlayer"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L52
            r1.<init>()     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "onPrepared:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L52
            boolean r2 = r4.mHasPrepare     // Catch: java.lang.Throwable -> L52
            r1.append(r2)     // Catch: java.lang.Throwable -> L52
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L52
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L52
            boolean r1 = r4.mIsFrontDesk     // Catch: java.lang.Throwable -> L52
            if (r1 == 0) goto L4c
            r1 = 1
            r4.mHasPrepare = r1     // Catch: java.lang.Throwable -> L52
            r4.postOnBufferinEndOnMainThread()     // Catch: java.lang.Throwable -> L52
            r4.startPlayProgressTimer()     // Catch: java.lang.Throwable -> L52
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r4.exoPlayer     // Catch: java.lang.Throwable -> L52
            if (r2 == 0) goto L2b
            r4.mIsPlaying = r1     // Catch: java.lang.Throwable -> L52
        L2b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L52
            r1.<init>()     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "onprepare mCurrentPosition:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L52
            long r2 = r4.mCurrentPosition     // Catch: java.lang.Throwable -> L52
            r1.append(r2)     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = " mHasPrepare："
            r1.append(r2)     // Catch: java.lang.Throwable -> L52
            boolean r2 = r4.mHasPrepare     // Catch: java.lang.Throwable -> L52
            r1.append(r2)     // Catch: java.lang.Throwable -> L52
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L52
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L52
            goto L5a
        L4c:
            java.lang.String r1 = "At background, Do not process"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L52
            goto L5a
        L52:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L5a:
            return
    }

    @Override
    public void onRepeatModeChanged(int r1) {
            r0 = this;
            return
    }

    @Override
    public void onSeekProcessed() {
            r0 = this;
            return
    }

    @Override
    public void onShuffleModeEnabledChanged(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public void onTimelineChanged(com.mbridge.msdk.playercommon.exoplayer2.Timeline r1, java.lang.Object r2, int r3) {
            r0 = this;
            return
    }

    @Override
    public void onTracksChanged(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r2) {
            r0 = this;
            return
    }

    public void openSound() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> Ld
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> Ld
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.setVolume(r1)     // Catch: java.lang.Exception -> Ld
            goto L17
        Ld:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L17:
            return
    }

    public void pause() {
            r3 = this;
            java.lang.String r0 = "VideoNativePlayer"
            java.lang.String r1 = "player pause"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L3d
            boolean r1 = r3.mHasPrepare     // Catch: java.lang.Exception -> L3d
            if (r1 != 0) goto L11
            java.lang.String r1 = "pause !mHasPrepare retrun"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L3d
            return
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Exception -> L3d
            if (r1 == 0) goto L45
            boolean r1 = r3.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L3d
            if (r1 == 0) goto L45
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3d
            r1.<init>()     // Catch: java.lang.Exception -> L3d
            java.lang.String r2 = "pause "
            r1.append(r2)     // Catch: java.lang.Exception -> L3d
            boolean r2 = r3.mIsPlaying     // Catch: java.lang.Exception -> L3d
            r1.append(r2)     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L3d
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L3d
            r3.hideLoading()     // Catch: java.lang.Exception -> L3d
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Exception -> L3d
            r2 = 0
            r1.setPlayWhenReady(r2)     // Catch: java.lang.Exception -> L3d
            r3.mIsPlaying = r2     // Catch: java.lang.Exception -> L3d
            goto L45
        L3d:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L45:
            return
    }

    public void play() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> Lc
            r1 = 1
            r0.setPlayWhenReady(r1)     // Catch: java.lang.Exception -> Lc
            r2.startPlayProgressTimer()     // Catch: java.lang.Exception -> Lc
            r2.mIsPlaying = r1     // Catch: java.lang.Exception -> Lc
            goto L16
        Lc:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L16:
            return
    }

    public void play(android.content.Context r5, java.lang.String r6, int r7) {
            r4 = this;
            java.lang.String r0 = "VideoNativePlayer"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4c
            r1.<init>()     // Catch: java.lang.Exception -> L4c
            java.lang.String r2 = "进来播放 currentionPosition:"
            r1.append(r2)     // Catch: java.lang.Exception -> L4c
            long r2 = r4.mCurrentPosition     // Catch: java.lang.Exception -> L4c
            r1.append(r2)     // Catch: java.lang.Exception -> L4c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L4c
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L4c
            long r1 = (long) r7     // Catch: java.lang.Exception -> L4c
            r4.mCurrentPosition = r1     // Catch: java.lang.Exception -> L4c
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L4c
            if (r7 == 0) goto L27
            java.lang.String r5 = "play url is null"
            r4.postOnPlayErrorOnMainThread(r5)     // Catch: java.lang.Exception -> L4c
            return
        L27:
            r4.showLoading()     // Catch: java.lang.Exception -> L4c
            r4.mPlayUrl = r6     // Catch: java.lang.Exception -> L4c
            r6 = 0
            r4.mHasPrepare = r6     // Catch: java.lang.Exception -> L4c
            r6 = 1
            r4.mIsFrontDesk = r6     // Catch: java.lang.Exception -> L4c
            r4.setDataSource(r5)     // Catch: java.lang.Exception -> L4c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4c
            r5.<init>()     // Catch: java.lang.Exception -> L4c
            java.lang.String r6 = "mPlayUrl:"
            r5.append(r6)     // Catch: java.lang.Exception -> L4c
            java.lang.String r6 = r4.mPlayUrl     // Catch: java.lang.Exception -> L4c
            r5.append(r6)     // Catch: java.lang.Exception -> L4c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L4c
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Exception -> L4c
            goto L5f
        L4c:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            r4.releasePlayer()
            r4.hideLoading()
            java.lang.String r5 = "mediaplayer cannot play"
            r4.postOnPlayErrorOnMainThread(r5)
        L5f:
            return
    }

    public void play(android.content.Context r3, java.lang.String r4, android.view.Surface r5) {
            r2 = this;
            java.lang.String r0 = "VideoNativePlayer"
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L35
            if (r1 == 0) goto Le
            java.lang.String r3 = "play url is null"
            r2.postOnPlayErrorOnMainThread(r3)     // Catch: java.lang.Exception -> L35
            return
        Le:
            r2.showLoading()     // Catch: java.lang.Exception -> L35
            r2.mPlayUrl = r4     // Catch: java.lang.Exception -> L35
            r4 = 0
            r2.mHasPrepare = r4     // Catch: java.lang.Exception -> L35
            r4 = 1
            r2.mIsFrontDesk = r4     // Catch: java.lang.Exception -> L35
            r2.mSurfaceHolder = r5     // Catch: java.lang.Exception -> L35
            r2.setDataSource(r3)     // Catch: java.lang.Exception -> L35
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L35
            r3.<init>()     // Catch: java.lang.Exception -> L35
            java.lang.String r4 = "mPlayUrl:"
            r3.append(r4)     // Catch: java.lang.Exception -> L35
            java.lang.String r4 = r2.mPlayUrl     // Catch: java.lang.Exception -> L35
            r3.append(r4)     // Catch: java.lang.Exception -> L35
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L35
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)     // Catch: java.lang.Exception -> L35
            goto L48
        L35:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            r2.releasePlayer()
            r2.hideLoading()
            java.lang.String r3 = "mediaplayer cannot play"
            r2.postOnPlayErrorOnMainThread(r3)
        L48:
            return
    }

    public void releasePlayer() {
            r3 = this;
            java.lang.String r0 = "VideoNativePlayer"
            java.lang.String r1 = "releasePlayer"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L25
            r3.cancelPlayProgressTimer()     // Catch: java.lang.Throwable -> L25
            r3.cancelBufferTimeoutTimer()     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L2d
            r3.stop()     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Throwable -> L25
            r1.removeListener(r3)     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Throwable -> L25
            r1.release()     // Catch: java.lang.Throwable -> L25
            r1 = 0
            r3.exoPlayer = r1     // Catch: java.lang.Throwable -> L25
            r1 = 0
            r3.mIsPlaying = r1     // Catch: java.lang.Throwable -> L25
            goto L2d
        L25:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
        L2d:
            r3.hideLoading()
            return
    }

    public void replaySameSource(android.content.Context r3, java.lang.String r4, android.view.Surface r5) {
            r2 = this;
            r2.showLoading()     // Catch: java.lang.Exception -> L22
            r0 = 0
            r2.mHasPrepare = r0     // Catch: java.lang.Exception -> L22
            r0 = 1
            r2.mIsFrontDesk = r0     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r2.exoPlayer     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L1e
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1 = r2.mediaSource     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L1e
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r3 = r2.exoPlayer     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r4 = r2.mediaSource     // Catch: java.lang.Exception -> L22
            r3.prepare(r4)     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r3 = r2.exoPlayer     // Catch: java.lang.Exception -> L22
            r3.setPlayWhenReady(r0)     // Catch: java.lang.Exception -> L22
            goto L37
        L1e:
            r2.play(r3, r4, r5)     // Catch: java.lang.Exception -> L22
            goto L37
        L22:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r4 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
            r2.releasePlayer()
            r2.hideLoading()
            java.lang.String r3 = "mediaplayer cannot play"
            r2.postOnPlayErrorOnMainThread(r3)
        L37:
            return
    }

    public void setDataSource(android.content.Context r7) {
            r6 = this;
            java.lang.String r0 = "VideoNativePlayer"
            r1 = 1
            java.lang.String r2 = "setDataSource begin"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r6.exoPlayer     // Catch: java.lang.Exception -> Lba
            if (r2 == 0) goto L25
            boolean r2 = r6.exoPlayerIsPlaying()     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L17
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r6.exoPlayer     // Catch: java.lang.Throwable -> L1d
            r2.stop()     // Catch: java.lang.Throwable -> L1d
        L17:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r6.exoPlayer     // Catch: java.lang.Throwable -> L1d
            r2.release()     // Catch: java.lang.Throwable -> L1d
            goto L25
        L1d:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Exception -> Lba
        L25:
            boolean r2 = r6.mIsOpenSound     // Catch: java.lang.Exception -> Lba
            if (r2 != 0) goto L2c
            r6.closeSound()     // Catch: java.lang.Exception -> Lba
        L2c:
            java.lang.String r2 = r6.mPlayUrl     // Catch: java.lang.Exception -> Lba
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lba
            if (r2 != 0) goto La4
            com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory r2 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory     // Catch: java.lang.Exception -> Lba
            r2.<init>(r7)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector r3 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector     // Catch: java.lang.Exception -> Lba
            r3.<init>()     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl r4 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl     // Catch: java.lang.Exception -> Lba
            r4.<init>()     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerFactory.newSimpleInstance(r2, r3, r4)     // Catch: java.lang.Exception -> Lba
            r6.exoPlayer = r2     // Catch: java.lang.Exception -> Lba
            java.lang.String r2 = r6.mPlayUrl     // Catch: java.lang.Exception -> Lba
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> Lba
            java.lang.String r3 = r6.mPlayUrl     // Catch: java.lang.Exception -> Lba
            java.lang.String r4 = "http"
            boolean r3 = r3.startsWith(r4)     // Catch: java.lang.Exception -> Lba
            java.lang.String r4 = "MBridge_ExoPlayer"
            if (r3 != 0) goto L77
            java.lang.String r3 = r6.mPlayUrl     // Catch: java.lang.Exception -> Lba
            java.lang.String r5 = "https"
            boolean r3 = r3.startsWith(r5)     // Catch: java.lang.Exception -> Lba
            if (r3 == 0) goto L66
            goto L77
        L66:
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$Factory r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$Factory     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultDataSourceFactory r5 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultDataSourceFactory     // Catch: java.lang.Exception -> Lba
            r5.<init>(r7, r4)     // Catch: java.lang.Exception -> Lba
            r3.<init>(r5)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource r2 = r3.createMediaSource(r2)     // Catch: java.lang.Exception -> Lba
            r6.mediaSource = r2     // Catch: java.lang.Exception -> Lba
            goto L87
        L77:
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$Factory r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$Factory     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSourceFactory r5 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSourceFactory     // Catch: java.lang.Exception -> Lba
            r5.<init>(r4)     // Catch: java.lang.Exception -> Lba
            r3.<init>(r5)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource r2 = r3.createMediaSource(r2)     // Catch: java.lang.Exception -> Lba
            r6.mediaSource = r2     // Catch: java.lang.Exception -> Lba
        L87:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r6.exoPlayer     // Catch: java.lang.Exception -> Lba
            boolean r3 = r6.mIsAllowLoopPlay     // Catch: java.lang.Exception -> Lba
            if (r3 == 0) goto L8f
            r3 = 2
            goto L90
        L8f:
            r3 = 0
        L90:
            r2.setRepeatMode(r3)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r6.exoPlayer     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3 = r6.mediaSource     // Catch: java.lang.Exception -> Lba
            r2.prepare(r3)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r6.exoPlayer     // Catch: java.lang.Exception -> Lba
            r2.setPlayWhenReady(r1)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r6.exoPlayer     // Catch: java.lang.Exception -> Lba
            r2.addListener(r6)     // Catch: java.lang.Exception -> Lba
        La4:
            android.view.Surface r2 = r6.mSurfaceHolder     // Catch: java.lang.Exception -> Lba
            if (r2 == 0) goto Laf
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r6.exoPlayer     // Catch: java.lang.Exception -> Lba
            android.view.Surface r3 = r6.mSurfaceHolder     // Catch: java.lang.Exception -> Lba
            r2.setVideoSurface(r3)     // Catch: java.lang.Exception -> Lba
        Laf:
            java.lang.String r2 = "mediaplayer prepare timeout"
            r6.startBufferingTimer(r2)     // Catch: java.lang.Exception -> Lba
            java.lang.String r2 = "setDataSource done"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Exception -> Lba
            goto L123
        Lba:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            r6.hideLoading()
            java.lang.String r2 = r6.mPlayUrl
            boolean r2 = android.webkit.URLUtil.isNetworkUrl(r2)
            java.lang.String r3 = "set data source error"
            java.lang.String r4 = "mediaplayer cannot play"
            if (r2 == 0) goto Lee
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "setDataSource error : Is Online source : "
            r7.append(r1)
            java.lang.String r1 = r6.mNetUrl
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r7)
            r6.postOnPlayErrorOnMainThread(r4)
            r6.postOnPlaySetDataSourceError2MainThread(r3)
            goto L120
        Lee:
            java.lang.String r2 = r6.mNetUrl
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L11d
            boolean r2 = r6.mHasChaoDi
            if (r2 != 0) goto L11d
            r6.mHasChaoDi = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "setDataSource error : Will play online source : "
            r1.append(r2)
            java.lang.String r2 = r6.mNetUrl
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.lang.String r0 = r6.mNetUrl
            r6.mPlayUrl = r0
            r6.showLoading()
            r6.setDataSource(r7)
            goto L120
        L11d:
            r6.postOnPlayErrorOnMainThread(r4)
        L120:
            r6.postOnPlaySetDataSourceError2MainThread(r3)
        L123:
            return
    }

    public void setIsComplete(boolean r1) {
            r0 = this;
            r0.mIsComplete = r1
            return
    }

    public void setIsFrontDesk(boolean r4) {
            r3 = this;
            java.lang.String r0 = "VideoNativePlayer"
            r3.mIsFrontDesk = r4     // Catch: java.lang.Exception -> L20
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L20
            r1.<init>()     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = "isFrontDesk: "
            r1.append(r2)     // Catch: java.lang.Exception -> L20
            if (r4 == 0) goto L13
            java.lang.String r4 = "frontStage"
            goto L15
        L13:
            java.lang.String r4 = "backStage"
        L15:
            r1.append(r4)     // Catch: java.lang.Exception -> L20
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L20
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Exception -> L20
            goto L28
        L20:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L28:
            return
    }

    public void setSelfVideoFeedsPlayerListener(com.mbridge.msdk.playercommon.VideoPlayerStatusListener r1) {
            r0 = this;
            r0.mInnerVFPLisener = r1
            return
    }

    public void setVideoFeedsPlayerListener(com.mbridge.msdk.playercommon.VideoPlayerStatusListener r1) {
            r0 = this;
            r0.mOutterVFListener = r1
            return
    }

    public void showLoading() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            if (r0 != 0) goto L5
            return
        L5:
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.playercommon.VideoNativePlayer$5 r1 = new com.mbridge.msdk.playercommon.VideoNativePlayer$5     // Catch: java.lang.Exception -> L10
            r1.<init>(r2)     // Catch: java.lang.Exception -> L10
            r0.post(r1)     // Catch: java.lang.Exception -> L10
            goto L1a
        L10:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoNativePlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1a:
            return
    }

    public void start() {
            r1 = this;
            r0 = 0
            r1.start(r0)
            return
    }

    public void start(int r5) {
            r4 = this;
            java.lang.String r0 = "VideoNativePlayer"
            boolean r1 = r4.mHasPrepare     // Catch: java.lang.Exception -> L28
            if (r1 != 0) goto Lc
            java.lang.String r5 = "start mHasprepare is false return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Exception -> L28
            return
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r4.exoPlayer     // Catch: java.lang.Exception -> L28
            if (r1 == 0) goto L30
            boolean r1 = r4.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L28
            if (r1 != 0) goto L30
            if (r5 <= 0) goto L1e
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r4.exoPlayer     // Catch: java.lang.Exception -> L28
            long r2 = (long) r5     // Catch: java.lang.Exception -> L28
            r1.seekTo(r2)     // Catch: java.lang.Exception -> L28
        L1e:
            r4.play()     // Catch: java.lang.Exception -> L28
            r4.startPlayProgressTimer()     // Catch: java.lang.Exception -> L28
            r5 = 1
            r4.mIsPlaying = r5     // Catch: java.lang.Exception -> L28
            goto L30
        L28:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
        L30:
            return
    }

    public void start(android.view.Surface r4) {
            r3 = this;
            java.lang.String r0 = "VideoNativePlayer"
            boolean r1 = r3.mHasPrepare     // Catch: java.lang.Exception -> L47
            if (r1 != 0) goto Lc
            java.lang.String r4 = "start !mHasPrepare retrun"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Exception -> L47
            return
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Exception -> L47
            r2 = 1
            if (r1 == 0) goto L2c
            boolean r1 = r3.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L47
            if (r1 != 0) goto L2c
            r3.showLoading()     // Catch: java.lang.Exception -> L47
            if (r4 == 0) goto L23
            r3.mSurfaceHolder = r4     // Catch: java.lang.Exception -> L47
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Exception -> L47
            r1.setVideoSurface(r4)     // Catch: java.lang.Exception -> L47
        L23:
            r3.play()     // Catch: java.lang.Exception -> L47
            r3.startPlayProgressTimer()     // Catch: java.lang.Exception -> L47
            r3.mIsPlaying = r2     // Catch: java.lang.Exception -> L47
            goto L4f
        L2c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L47
            r4.<init>()     // Catch: java.lang.Exception -> L47
            java.lang.String r1 = "exoplayer is null : "
            r4.append(r1)     // Catch: java.lang.Exception -> L47
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Exception -> L47
            if (r1 != 0) goto L3b
            goto L3c
        L3b:
            r2 = 0
        L3c:
            r4.append(r2)     // Catch: java.lang.Exception -> L47
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L47
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Exception -> L47
            goto L4f
        L47:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L4f:
            return
    }

    public void stop() {
            r2 = this;
            java.lang.String r0 = "VideoNativePlayer"
            boolean r1 = r2.mHasPrepare     // Catch: java.lang.Exception -> L25
            if (r1 != 0) goto Lc
            java.lang.String r1 = "stop !mHasPrepare retrun"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L25
            return
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r2.exoPlayer     // Catch: java.lang.Exception -> L25
            if (r1 == 0) goto L2d
            boolean r1 = r2.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L25
            if (r1 == 0) goto L2d
            r2.hideLoading()     // Catch: java.lang.Exception -> L25
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r2.exoPlayer     // Catch: java.lang.Exception -> L25
            r1.stop()     // Catch: java.lang.Exception -> L25
            r2.cancelPlayProgressTimer()     // Catch: java.lang.Exception -> L25
            r1 = 0
            r2.mIsPlaying = r1     // Catch: java.lang.Exception -> L25
            goto L2d
        L25:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L2d:
            return
    }
}
