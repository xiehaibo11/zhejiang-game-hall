package com.tkay.expressad.playercommon;

public class VideoFeedsPlayer implements com.tkay.expressad.exoplayer.w.c {
    public static final int INTERVAL_TIME_PLAY_TIME_CD_THREAD = 1000;
    public static final java.lang.String TAG = "VideoFeedsPlayer";
    private com.tkay.expressad.exoplayer.ad exoPlayer;
    private boolean isStart;
    private int mBufferTime;
    private java.util.Timer mBufferTimeoutTimer;
    private android.content.Context mContext;
    private long mCurrentPosition;
    private android.view.View mFullScreenLoadingView;
    private final android.os.Handler mHandler;
    private boolean mHasPrepare;
    private volatile com.tkay.expressad.playercommon.VideoPlayerStatusListener mInnerVFPLisener;
    private boolean mIsBuffering;
    private boolean mIsComplete;
    private boolean mIsFrontDesk;
    private boolean mIsNeedBufferingTimeout;
    private boolean mIsPlaying;
    private boolean mIsSilent;
    private java.lang.ref.WeakReference<android.view.View> mLoadingView;
    private java.lang.Object mLock;
    private java.lang.String mMediaSourceUrl;
    private java.lang.String mNetVideoUrl;
    private volatile com.tkay.expressad.playercommon.VideoPlayerStatusListener mOutterVFListener;
    java.lang.String mPlayLocalVideoFileErrorStr;
    private java.lang.String mPlayUrl;
    private android.view.SurfaceHolder mSurfaceHolder;
    private int mVideoReadyRate;
    private com.tkay.expressad.exoplayer.h.s mediaSource;
    private boolean needPrepareVideoPlayAgain;
    private java.lang.Runnable playProgressRunnable;













    public VideoFeedsPlayer() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.mIsComplete = r0
            r3.mIsPlaying = r0
            r3.mHasPrepare = r0
            r3.mIsBuffering = r0
            r3.mIsNeedBufferingTimeout = r0
            r1 = 1
            r3.mIsFrontDesk = r1
            r1 = 5
            r3.mBufferTime = r1
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r3.mLock = r1
            r3.isStart = r0
            com.tkay.expressad.playercommon.VideoFeedsPlayer$1 r1 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$1
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r3, r2)
            r3.mHandler = r1
            r3.needPrepareVideoPlayAgain = r0
            java.lang.String r0 = ""
            r3.mNetVideoUrl = r0
            r3.mMediaSourceUrl = r0
            com.tkay.expressad.playercommon.VideoFeedsPlayer$2 r0 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$2
            r0.<init>(r3)
            r3.playProgressRunnable = r0
            return
    }

    static com.tkay.expressad.exoplayer.ad access$000(com.tkay.expressad.playercommon.VideoFeedsPlayer r0) {
            com.tkay.expressad.exoplayer.ad r0 = r0.exoPlayer
            return r0
    }

    static long access$100(com.tkay.expressad.playercommon.VideoFeedsPlayer r2) {
            long r0 = r2.mCurrentPosition
            return r0
    }

    static java.lang.ref.WeakReference access$1000(com.tkay.expressad.playercommon.VideoFeedsPlayer r0) {
            java.lang.ref.WeakReference<android.view.View> r0 = r0.mLoadingView
            return r0
    }

    static long access$102(com.tkay.expressad.playercommon.VideoFeedsPlayer r0, long r1) {
            r0.mCurrentPosition = r1
            return r1
    }

    static com.tkay.expressad.playercommon.VideoPlayerStatusListener access$1100(com.tkay.expressad.playercommon.VideoFeedsPlayer r0) {
            com.tkay.expressad.playercommon.VideoPlayerStatusListener r0 = r0.mOutterVFListener
            return r0
    }

    static com.tkay.expressad.playercommon.VideoPlayerStatusListener access$1200(com.tkay.expressad.playercommon.VideoFeedsPlayer r0) {
            com.tkay.expressad.playercommon.VideoPlayerStatusListener r0 = r0.mInnerVFPLisener
            return r0
    }

    static void access$200(com.tkay.expressad.playercommon.VideoFeedsPlayer r0, int r1, int r2) {
            r0.postOnPlayProgressOnMainThread(r1, r2)
            return
    }

    static boolean access$302(com.tkay.expressad.playercommon.VideoFeedsPlayer r0, boolean r1) {
            r0.mIsComplete = r1
            return r1
    }

    static boolean access$400(com.tkay.expressad.playercommon.VideoFeedsPlayer r0) {
            boolean r0 = r0.mIsBuffering
            return r0
    }

    static void access$500(com.tkay.expressad.playercommon.VideoFeedsPlayer r0) {
            r0.hideLoading()
            return
    }

    static android.os.Handler access$600(com.tkay.expressad.playercommon.VideoFeedsPlayer r0) {
            android.os.Handler r0 = r0.mHandler
            return r0
    }

    static boolean access$700(com.tkay.expressad.playercommon.VideoFeedsPlayer r0) {
            boolean r0 = r0.mHasPrepare
            return r0
    }

    static void access$800(com.tkay.expressad.playercommon.VideoFeedsPlayer r0, java.lang.String r1) {
            r0.postOnBufferingStarOnMainThread(r1)
            return
    }

    static android.view.View access$900(com.tkay.expressad.playercommon.VideoFeedsPlayer r0) {
            android.view.View r0 = r0.mFullScreenLoadingView
            return r0
    }

    private void cancelBufferTimeoutTimer() {
            r1 = this;
            java.util.Timer r0 = r1.mBufferTimeoutTimer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L9
            java.util.Timer r0 = r1.mBufferTimeoutTimer     // Catch: java.lang.Exception -> La
            r0.cancel()     // Catch: java.lang.Exception -> La
        L9:
            return
        La:
            r0 = move-exception
            r0.getMessage()
            return
    }

    private void cancelPlayProgressTimer() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L8
            java.lang.Runnable r1 = r2.playProgressRunnable     // Catch: java.lang.Exception -> L8
            r0.removeCallbacks(r1)     // Catch: java.lang.Exception -> L8
            return
        L8:
            r0 = move-exception
            r0.getMessage()
            return
    }

    private void hideLoading() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            if (r0 != 0) goto L5
            return
        L5:
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            com.tkay.expressad.playercommon.VideoFeedsPlayer$5 r1 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$5     // Catch: java.lang.Exception -> L10
            r1.<init>(r2)     // Catch: java.lang.Exception -> L10
            r0.post(r1)     // Catch: java.lang.Exception -> L10
            return
        L10:
            r0 = move-exception
            r0.getMessage()
            return
    }

    private void postOnBufferinEndOnMainThread() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.tkay.expressad.playercommon.VideoFeedsPlayer$8 r1 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$8     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
        Le:
            return
        Lf:
            r0 = move-exception
            r0.getMessage()
            return
    }

    private void postOnBufferingStarOnMainThread(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.tkay.expressad.playercommon.VideoFeedsPlayer$7 r1 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$7     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
        Le:
            return
        Lf:
            r3 = move-exception
            r3.getMessage()
            return
    }

    private void postOnPlayCompletedOnMainThread() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.tkay.expressad.playercommon.VideoFeedsPlayer$12 r1 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$12     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
        Le:
            return
        Lf:
            r0 = move-exception
            r0.getMessage()
            return
    }

    private void postOnPlayErrorOnMainThread(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.tkay.expressad.playercommon.VideoFeedsPlayer$10 r1 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$10     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
        Le:
            return
        Lf:
            r3 = move-exception
            r3.getMessage()
            return
    }

    private void postOnPlayProgressOnMainThread(int r3, int r4) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.tkay.expressad.playercommon.VideoFeedsPlayer$6 r1 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$6     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
        Le:
            return
        Lf:
            r3 = move-exception
            r3.getMessage()
            return
    }

    private void postOnPlaySetDataSourceError2MainThread(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.tkay.expressad.playercommon.VideoFeedsPlayer$11 r1 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$11     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
        Le:
            return
        Lf:
            r3 = move-exception
            r3.getMessage()
            return
    }

    private void postOnPlayStartOnMainThread(long r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.tkay.expressad.playercommon.VideoFeedsPlayer$9 r1 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$9     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
        Le:
            return
        Lf:
            r3 = move-exception
            r3.getMessage()
            return
    }

    private void rePrepareVideoSourceAgain() {
            r2 = this;
            com.tkay.expressad.playercommon.VideoPlayerStatusListener r0 = r2.mOutterVFListener
            if (r0 == 0) goto L9
            com.tkay.expressad.playercommon.VideoPlayerStatusListener r0 = r2.mOutterVFListener
            r0.onVideoDownloadResume()
        L9:
            com.tkay.expressad.exoplayer.h.s r0 = r2.mediaSource
            if (r0 == 0) goto L12
            com.tkay.expressad.exoplayer.ad r1 = r2.exoPlayer
            r1.a(r0)
        L12:
            return
    }

    private void startBufferIngTimer(java.lang.String r5) {
            r4 = this;
            boolean r0 = r4.mIsNeedBufferingTimeout
            if (r0 != 0) goto L5
            return
        L5:
            r4.cancelBufferTimeoutTimer()
            java.util.Timer r0 = new java.util.Timer
            r0.<init>()
            r4.mBufferTimeoutTimer = r0
            com.tkay.expressad.playercommon.VideoFeedsPlayer$3 r1 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$3
            r1.<init>(r4, r5)
            int r5 = r4.mBufferTime
            int r5 = r5 * 1000
            long r2 = (long) r5
            r0.schedule(r1, r2)
            return
    }

    private void startPlayProgressTimer() {
            r2 = this;
            r2.cancelPlayProgressTimer()     // Catch: java.lang.Exception -> Lb
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lb
            java.lang.Runnable r1 = r2.playProgressRunnable     // Catch: java.lang.Exception -> Lb
            r0.post(r1)     // Catch: java.lang.Exception -> Lb
            return
        Lb:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void closeSound() {
            r2 = this;
            com.tkay.expressad.exoplayer.ad r0 = r2.exoPlayer     // Catch: java.lang.Exception -> Lf
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.exoplayer.ad r0 = r2.exoPlayer     // Catch: java.lang.Exception -> Lf
            r1 = 0
            r0.a(r1)     // Catch: java.lang.Exception -> Lf
            r0 = 1
            r2.mIsSilent = r0     // Catch: java.lang.Exception -> Lf
            return
        Lf:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public boolean exoPlayerIsPlaying() {
            r2 = this;
            com.tkay.expressad.exoplayer.ad r0 = r2.exoPlayer
            int r0 = r0.d()
            r1 = 3
            if (r0 != r1) goto L13
            com.tkay.expressad.exoplayer.ad r0 = r2.exoPlayer
            boolean r0 = r0.f()
            if (r0 == 0) goto L13
            r0 = 1
            return r0
        L13:
            r0 = 0
            return r0
    }

    public boolean fullScreenLoadingViewisVisible() {
            r1 = this;
            android.view.View r0 = r1.mFullScreenLoadingView     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto L12
            android.view.View r0 = r1.mFullScreenLoadingView     // Catch: java.lang.Throwable -> Le
            int r0 = r0.getVisibility()     // Catch: java.lang.Throwable -> Le
            if (r0 != 0) goto L12
            r0 = 1
            return r0
        Le:
            r0 = move-exception
            r0.getMessage()
        L12:
            r0 = 0
            return r0
    }

    public int getCurPosition() {
            r2 = this;
            long r0 = r2.mCurrentPosition
            int r0 = (int) r0
            return r0
    }

    public int getDuration() {
            r1 = this;
            com.tkay.expressad.exoplayer.ad r0 = r1.exoPlayer
            if (r0 == 0) goto L7
            r0.s()
        L7:
            r0 = 0
            return r0
    }

    public boolean halfLoadingViewisVisible() {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mLoadingView     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L20
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mLoadingView     // Catch: java.lang.Throwable -> L1c
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L20
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mLoadingView     // Catch: java.lang.Throwable -> L1c
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Throwable -> L1c
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> L1c
            int r0 = r0.getVisibility()     // Catch: java.lang.Throwable -> L1c
            if (r0 != 0) goto L20
            r0 = 1
            return r0
        L1c:
            r0 = move-exception
            r0.getMessage()
        L20:
            r0 = 0
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
            java.lang.String r0 = "mIsNeedBufferingTimeout:"
            r2.<init>(r0)
            boolean r0 = r1.mIsNeedBufferingTimeout
            r2.append(r0)
            java.lang.String r0 = "  mMaxBufferTime:"
            r2.append(r0)
            int r0 = r1.mBufferTime
            r2.append(r0)
            return
    }

    public boolean initPlayer(android.content.Context r4, android.view.View r5, java.lang.String r6, java.lang.String r7, int r8, com.tkay.expressad.playercommon.VideoPlayerStatusListener r9) {
            r3 = this;
            r0 = 0
            if (r5 != 0) goto L9
            java.lang.String r4 = "MediaPlayer init error"
            r3.postOnPlayErrorOnMainThread(r4)     // Catch: java.lang.Throwable -> L63
            return r0
        L9:
            boolean r1 = android.text.TextUtils.equals(r6, r7)     // Catch: java.lang.Throwable -> L63
            r2 = 1
            if (r1 != 0) goto L12
            r1 = r2
            goto L13
        L12:
            r1 = r0
        L13:
            r3.needPrepareVideoPlayAgain = r1     // Catch: java.lang.Throwable -> L63
            r3.mMediaSourceUrl = r6     // Catch: java.lang.Throwable -> L63
            r3.mNetVideoUrl = r7     // Catch: java.lang.Throwable -> L63
            r3.mVideoReadyRate = r8     // Catch: java.lang.Throwable -> L63
            r3.mContext = r4     // Catch: java.lang.Throwable -> L63
            r3.mOutterVFListener = r9     // Catch: java.lang.Throwable -> L63
            java.lang.ref.WeakReference r7 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L63
            r7.<init>(r5)     // Catch: java.lang.Throwable -> L63
            r3.mLoadingView = r7     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.exoplayer.f r5 = new com.tkay.expressad.exoplayer.f     // Catch: java.lang.Throwable -> L63
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.exoplayer.i.c r7 = new com.tkay.expressad.exoplayer.i.c     // Catch: java.lang.Throwable -> L63
            r7.<init>()     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.exoplayer.d r8 = new com.tkay.expressad.exoplayer.d     // Catch: java.lang.Throwable -> L63
            r8.<init>()     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.exoplayer.ad r5 = com.tkay.expressad.exoplayer.i.a(r5, r7, r8)     // Catch: java.lang.Throwable -> L63
            r3.exoPlayer = r5     // Catch: java.lang.Throwable -> L63
            android.net.Uri r5 = android.net.Uri.parse(r6)     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.exoplayer.h.o$c r6 = new com.tkay.expressad.exoplayer.h.o$c     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.exoplayer.j.o r7 = new com.tkay.expressad.exoplayer.j.o     // Catch: java.lang.Throwable -> L63
            java.lang.String r8 = "TY_ExoPlayer"
            r7.<init>(r4, r8)     // Catch: java.lang.Throwable -> L63
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.exoplayer.h.o r4 = r6.a(r5)     // Catch: java.lang.Throwable -> L63
            r3.mediaSource = r4     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.exoplayer.ad r4 = r3.exoPlayer     // Catch: java.lang.Throwable -> L63
            r4.a(r0)     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.exoplayer.ad r4 = r3.exoPlayer     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.exoplayer.h.s r5 = r3.mediaSource     // Catch: java.lang.Throwable -> L63
            r4.a(r5)     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.exoplayer.ad r4 = r3.exoPlayer     // Catch: java.lang.Throwable -> L63
            r4.a(r3)     // Catch: java.lang.Throwable -> L63
            return r2
        L63:
            r4 = move-exception
            r4.getMessage()
            java.lang.String r4 = r4.toString()
            r3.postOnPlayErrorOnMainThread(r4)
            return r0
    }

    public boolean isComplete() {
            r1 = this;
            boolean r0 = r1.mIsComplete
            return r0
    }

    public boolean isPlayIng() {
            r1 = this;
            com.tkay.expressad.exoplayer.ad r0 = r1.exoPlayer     // Catch: java.lang.Exception -> Lc
            if (r0 == 0) goto L10
            boolean r0 = r1.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> Lc
            if (r0 == 0) goto L10
            r0 = 1
            return r0
        Lc:
            r0 = move-exception
            r0.getMessage()
        L10:
            r0 = 0
            return r0
    }

    public boolean isSilent() {
            r1 = this;
            boolean r0 = r1.mIsSilent
            return r0
    }

    public void justSeekTo(int r3) {
            r2 = this;
            long r0 = (long) r3
            r2.mCurrentPosition = r0     // Catch: java.lang.Exception -> L8
            boolean r3 = r2.mHasPrepare     // Catch: java.lang.Exception -> L8
            if (r3 != 0) goto L7
        L7:
            return
        L8:
            r3 = move-exception
            r3.getMessage()
            return
    }

    public void onBufferingUpdate(int r1) {
            r0 = this;
            return
    }

    public void onCompletion() {
            r2 = this;
            r0 = 1
            r2.mIsComplete = r0     // Catch: java.lang.Exception -> L11
            r0 = 0
            r2.mIsPlaying = r0     // Catch: java.lang.Exception -> L11
            r0 = 0
            r2.mCurrentPosition = r0     // Catch: java.lang.Exception -> L11
            r2.hideLoading()     // Catch: java.lang.Exception -> L11
            r2.postOnPlayCompletedOnMainThread()     // Catch: java.lang.Exception -> L11
            return
        L11:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public boolean onError(int r4, java.lang.String r5) {
            r3 = this;
            r0 = 1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = "onError what: "
            r1.<init>(r2)     // Catch: java.lang.Exception -> L3a
            r1.append(r4)     // Catch: java.lang.Exception -> L3a
            java.lang.String r4 = " extra: "
            r1.append(r4)     // Catch: java.lang.Exception -> L3a
            r1.append(r5)     // Catch: java.lang.Exception -> L3a
            r3.hideLoading()     // Catch: java.lang.Exception -> L3a
            boolean r4 = r3.mIsFrontDesk     // Catch: java.lang.Exception -> L3a
            if (r4 != 0) goto L33
            java.lang.String r4 = "MIX 3"
            java.lang.String r1 = com.tkay.core.common.l.d.a()     // Catch: java.lang.Exception -> L3a
            boolean r4 = r4.equalsIgnoreCase(r1)     // Catch: java.lang.Exception -> L3a
            if (r4 == 0) goto L33
            java.lang.String r4 = com.tkay.core.common.l.d.b()     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = "Xiaomi"
            boolean r4 = r4.equalsIgnoreCase(r1)     // Catch: java.lang.Exception -> L3a
            if (r4 == 0) goto L33
            return r0
        L33:
            r4 = 0
            r3.mHasPrepare = r4     // Catch: java.lang.Exception -> L3a
            r3.postOnPlayErrorOnMainThread(r5)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r4 = move-exception
            r4.getMessage()
        L3e:
            return r0
    }

    @Override
    public void onLoadingChanged(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public void onPlaybackParametersChanged(com.tkay.expressad.exoplayer.v r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onPlaybackParametersChanged : "
            r0.<init>(r1)
            float r3 = r3.b
            r0.append(r3)
            return
    }

    @Override
    public void onPlayerError(com.tkay.expressad.exoplayer.g r6) {
            r5 = this;
            r0 = 0
            java.lang.String r1 = "Play error and ExoPlayer have not message."
            if (r6 == 0) goto L36
            int r2 = r6.d
            r3 = 1
            if (r2 == 0) goto L17
            if (r2 == r3) goto L14
            r3 = 2
            if (r2 == r3) goto L11
        Lf:
            r3 = r0
            goto L19
        L11:
            java.lang.String r1 = "Play error, because have a UnexpectedException."
            goto Lf
        L14:
            java.lang.String r1 = "Play error, because have a RendererException."
            goto Lf
        L17:
            java.lang.String r1 = "Play error, because have a SourceException."
        L19:
            java.lang.Throwable r2 = r6.getCause()
            if (r2 == 0) goto L37
            java.lang.Throwable r2 = r6.getCause()
            java.lang.String r2 = r2.getMessage()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L37
            java.lang.Throwable r1 = r6.getCause()
            java.lang.String r1 = r1.getMessage()
            goto L37
        L36:
            r3 = r0
        L37:
            boolean r2 = r5.needPrepareVideoPlayAgain
            if (r2 == 0) goto L45
            if (r3 == 0) goto L45
            r5.mPlayLocalVideoFileErrorStr = r1
            r5.needPrepareVideoPlayAgain = r0
            r5.rePrepareVideoSourceAgain()
            return
        L45:
            r2 = 0
            com.tkay.expressad.exoplayer.ad r0 = r5.exoPlayer     // Catch: java.lang.Throwable -> L4d
            long r2 = r0.t()     // Catch: java.lang.Throwable -> L4d
        L4d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r4 = "videoUrl"
            r0.<init>(r4)
            java.lang.String r4 = r5.mNetVideoUrl
            r0.append(r4)
            java.lang.String r4 = ",readyRate:"
            r0.append(r4)
            int r4 = r5.mVideoReadyRate
            r0.append(r4)
            java.lang.String r4 = ",cdRate:0,play process:"
            r0.append(r4)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = r5.mPlayLocalVideoFileErrorStr
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r3 = ",localFileErrorMsg:"
            if (r2 == 0) goto L8c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r3)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            goto La8
        L8c:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r3)
            java.lang.String r0 = r5.mPlayLocalVideoFileErrorStr
            r2.append(r0)
            java.lang.String r0 = ",errorMsg:"
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
        La8:
            int r6 = r6.d
            r5.onError(r6, r0)
            return
    }

    @Override
    public void onPlayerStateChanged(boolean r1, int r2) {
            r0 = this;
            r1 = 2
            if (r2 == r1) goto L1e
            r1 = 3
            if (r2 == r1) goto L11
            r1 = 4
            if (r2 == r1) goto La
            goto L10
        La:
            r0.cancelPlayProgressTimer()
            r0.onCompletion()
        L10:
            return
        L11:
            r1 = 0
            r0.mIsBuffering = r1
            r0.hideLoading()
            r0.postOnBufferinEndOnMainThread()
            r0.onPrepared()
            return
        L1e:
            r1 = 1
            r0.mIsBuffering = r1
            r0.showLoading()
            java.lang.String r1 = "play buffering tiemout"
            r0.startBufferIngTimer(r1)
            return
    }

    @Override
    public void onPositionDiscontinuity(int r1) {
            r0 = this;
            return
    }

    public void onPrepared() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6c
            java.lang.String r1 = "onPrepared:"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L6c
            boolean r1 = r5.mHasPrepare     // Catch: java.lang.Throwable -> L6c
            r0.append(r1)     // Catch: java.lang.Throwable -> L6c
            r0 = 1
            r5.mHasPrepare = r0     // Catch: java.lang.Throwable -> L6c
            boolean r1 = r5.mIsFrontDesk     // Catch: java.lang.Throwable -> L6c
            if (r1 != 0) goto L1a
            com.tkay.expressad.exoplayer.ad r1 = r5.exoPlayer     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L1a
            r5.pause()     // Catch: java.lang.Throwable -> L6c
        L1a:
            boolean r1 = r5.mIsFrontDesk     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L6b
            boolean r1 = r5.mIsFrontDesk     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L6b
            r5.hideLoading()     // Catch: java.lang.Throwable -> L6c
            r5.mHasPrepare = r0     // Catch: java.lang.Throwable -> L6c
            com.tkay.expressad.exoplayer.ad r1 = r5.exoPlayer     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L4f
            r5.mIsPlaying = r0     // Catch: java.lang.Throwable -> L6c
            boolean r1 = r5.isStart     // Catch: java.lang.Throwable -> L6c
            if (r1 != 0) goto L4f
            com.tkay.expressad.exoplayer.ad r1 = r5.exoPlayer     // Catch: java.lang.Throwable -> L6c
            long r1 = r1.s()     // Catch: java.lang.Throwable -> L6c
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            r5.postOnPlayStartOnMainThread(r1)     // Catch: java.lang.Throwable -> L6c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6c
            java.lang.String r2 = "onPlayStarted()，getCurrentPosition:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L6c
            com.tkay.expressad.exoplayer.ad r2 = r5.exoPlayer     // Catch: java.lang.Throwable -> L6c
            long r2 = r2.t()     // Catch: java.lang.Throwable -> L6c
            r1.append(r2)     // Catch: java.lang.Throwable -> L6c
            r5.isStart = r0     // Catch: java.lang.Throwable -> L6c
        L4f:
            r5.postOnBufferinEndOnMainThread()     // Catch: java.lang.Throwable -> L6c
            r5.startPlayProgressTimer()     // Catch: java.lang.Throwable -> L6c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6c
            java.lang.String r1 = "onPrepare mCurrentPosition:"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L6c
            long r1 = r5.mCurrentPosition     // Catch: java.lang.Throwable -> L6c
            r0.append(r1)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r1 = " onPrepare mHasPrepare:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L6c
            boolean r1 = r5.mHasPrepare     // Catch: java.lang.Throwable -> L6c
            r0.append(r1)     // Catch: java.lang.Throwable -> L6c
        L6b:
            return
        L6c:
            r0 = move-exception
            r0.getMessage()
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
    public void onTimelineChanged(com.tkay.expressad.exoplayer.ae r1, java.lang.Object r2, int r3) {
            r0 = this;
            return
    }

    @Override
    public void onTracksChanged(com.tkay.expressad.exoplayer.h.af r1, com.tkay.expressad.exoplayer.i.g r2) {
            r0 = this;
            return
    }

    public void openSound() {
            r2 = this;
            com.tkay.expressad.exoplayer.ad r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L10
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.exoplayer.ad r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L10
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.a(r1)     // Catch: java.lang.Exception -> L10
            r0 = 0
            r2.mIsSilent = r0     // Catch: java.lang.Exception -> L10
            return
        L10:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void pause() {
            r2 = this;
            boolean r0 = r2.mHasPrepare     // Catch: java.lang.Exception -> L33
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.exoplayer.ad r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L33
            if (r0 == 0) goto L32
            boolean r0 = r2.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L33
            if (r0 == 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L33
            java.lang.String r1 = "pause isPalying:"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L33
            boolean r1 = r2.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L33
            r0.append(r1)     // Catch: java.lang.Exception -> L33
            java.lang.String r1 = " mIsPlaying:"
            r0.append(r1)     // Catch: java.lang.Exception -> L33
            boolean r1 = r2.mIsPlaying     // Catch: java.lang.Exception -> L33
            r0.append(r1)     // Catch: java.lang.Exception -> L33
            r2.hideLoading()     // Catch: java.lang.Exception -> L33
            com.tkay.expressad.exoplayer.ad r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L33
            r1 = 0
            r0.a(r1)     // Catch: java.lang.Exception -> L33
            r2.mIsPlaying = r1     // Catch: java.lang.Exception -> L33
        L32:
            return
        L33:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void play() {
            r2 = this;
            com.tkay.expressad.exoplayer.ad r0 = r2.exoPlayer
            r1 = 1
            r0.a(r1)
            return
    }

    public void play(java.lang.String r5, int r6) {
            r4 = this;
            java.lang.Object r0 = r4.mLock     // Catch: java.lang.Exception -> L40
            monitor-enter(r0)     // Catch: java.lang.Exception -> L40
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = "Start Play currentionPosition:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3d
            long r2 = r4.mCurrentPosition     // Catch: java.lang.Throwable -> L3d
            r1.append(r2)     // Catch: java.lang.Throwable -> L3d
            if (r6 <= 0) goto L14
            long r1 = (long) r6     // Catch: java.lang.Throwable -> L3d
            r4.mCurrentPosition = r1     // Catch: java.lang.Throwable -> L3d
        L14:
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L3d
            if (r6 == 0) goto L21
            java.lang.String r5 = "play url is null"
            r4.postOnPlayErrorOnMainThread(r5)     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            return
        L21:
            r4.mPlayUrl = r5     // Catch: java.lang.Throwable -> L3d
            r5 = 0
            r4.mHasPrepare = r5     // Catch: java.lang.Throwable -> L3d
            r5 = 1
            r4.mIsFrontDesk = r5     // Catch: java.lang.Throwable -> L3d
            r4.showLoading()     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            r4.setDataSource()     // Catch: java.lang.Exception -> L40
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L40
            java.lang.String r6 = "mPlayUrl:"
            r5.<init>(r6)     // Catch: java.lang.Exception -> L40
            java.lang.String r6 = r4.mPlayUrl     // Catch: java.lang.Exception -> L40
            r5.append(r6)     // Catch: java.lang.Exception -> L40
            return
        L3d:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Exception -> L40
            throw r5     // Catch: java.lang.Exception -> L40
        L40:
            r5 = move-exception
            r5.getMessage()
            r4.releasePlayer()
            r4.hideLoading()
            java.lang.String r5 = "mediaplayer cannot play"
            r4.postOnPlayErrorOnMainThread(r5)
            return
    }

    public void play(java.lang.String r3, android.view.SurfaceHolder r4) {
            r2 = this;
            java.lang.Object r0 = r2.mLock     // Catch: java.lang.Exception -> L31
            monitor-enter(r0)     // Catch: java.lang.Exception -> L31
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L10
            java.lang.String r3 = "play url is null"
            r2.postOnPlayErrorOnMainThread(r3)     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return
        L10:
            r2.mPlayUrl = r3     // Catch: java.lang.Throwable -> L2e
            r3 = 0
            r2.mHasPrepare = r3     // Catch: java.lang.Throwable -> L2e
            r3 = 1
            r2.mIsFrontDesk = r3     // Catch: java.lang.Throwable -> L2e
            r2.mSurfaceHolder = r4     // Catch: java.lang.Throwable -> L2e
            r2.showLoading()     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            r2.setDataSource()     // Catch: java.lang.Exception -> L31
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L31
            java.lang.String r4 = "mPlayUrl:"
            r3.<init>(r4)     // Catch: java.lang.Exception -> L31
            java.lang.String r4 = r2.mPlayUrl     // Catch: java.lang.Exception -> L31
            r3.append(r4)     // Catch: java.lang.Exception -> L31
            return
        L2e:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Exception -> L31
            throw r3     // Catch: java.lang.Exception -> L31
        L31:
            r3 = move-exception
            r3.getMessage()
            r2.releasePlayer()
            r2.hideLoading()
            java.lang.String r3 = "mediaplayer cannot play"
            r2.postOnPlayErrorOnMainThread(r3)
            return
    }

    public void prepare() {
            r2 = this;
            boolean r0 = r2.mHasPrepare     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L5
            return
        L5:
            com.tkay.expressad.exoplayer.ad r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L16
            com.tkay.expressad.exoplayer.ad r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L17
            com.tkay.expressad.exoplayer.h.s r1 = r2.mediaSource     // Catch: java.lang.Exception -> L17
            r0.a(r1)     // Catch: java.lang.Exception -> L17
            r0 = 1
            r2.mHasPrepare = r0     // Catch: java.lang.Exception -> L17
            r0 = 0
            r2.mIsPlaying = r0     // Catch: java.lang.Exception -> L17
        L16:
            return
        L17:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void releasePlayer() {
            r1 = this;
            r1.cancelPlayProgressTimer()     // Catch: java.lang.Throwable -> L20
            r1.cancelBufferTimeoutTimer()     // Catch: java.lang.Throwable -> L20
            com.tkay.expressad.exoplayer.ad r0 = r1.exoPlayer     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L1c
            r1.stop()     // Catch: java.lang.Throwable -> L20
            com.tkay.expressad.exoplayer.ad r0 = r1.exoPlayer     // Catch: java.lang.Throwable -> L20
            r0.b(r1)     // Catch: java.lang.Throwable -> L20
            com.tkay.expressad.exoplayer.ad r0 = r1.exoPlayer     // Catch: java.lang.Throwable -> L20
            r0.n()     // Catch: java.lang.Throwable -> L20
            r0 = 0
            r1.mInnerVFPLisener = r0     // Catch: java.lang.Throwable -> L20
            r1.mOutterVFListener = r0     // Catch: java.lang.Throwable -> L20
        L1c:
            r1.hideLoading()     // Catch: java.lang.Throwable -> L20
            return
        L20:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void seekTo(int r3) {
            r2 = this;
            long r0 = (long) r3
            r2.mCurrentPosition = r0     // Catch: java.lang.Exception -> L12
            boolean r3 = r2.mHasPrepare     // Catch: java.lang.Exception -> L12
            if (r3 != 0) goto L8
            return
        L8:
            com.tkay.expressad.exoplayer.ad r3 = r2.exoPlayer     // Catch: java.lang.Exception -> L12
            if (r3 == 0) goto L11
            com.tkay.expressad.exoplayer.ad r3 = r2.exoPlayer     // Catch: java.lang.Exception -> L12
            r3.a(r0)     // Catch: java.lang.Exception -> L12
        L11:
            return
        L12:
            r3 = move-exception
            r3.getMessage()
            return
    }

    public void setDataSource() {
            r5 = this;
            com.tkay.expressad.exoplayer.ad r0 = r5.exoPlayer     // Catch: java.lang.Exception -> Lb9
            if (r0 == 0) goto Lb8
            android.view.SurfaceHolder r0 = r5.mSurfaceHolder     // Catch: java.lang.Exception -> Lb9
            if (r0 == 0) goto Ld
            android.view.SurfaceHolder r0 = r5.mSurfaceHolder     // Catch: java.lang.Exception -> Lb9
            r5.setDisplay(r0)     // Catch: java.lang.Exception -> Lb9
        Ld:
            r0 = 0
            r5.mHasPrepare = r0     // Catch: java.lang.Exception -> Lb9
            java.lang.String r1 = r5.mMediaSourceUrl     // Catch: java.lang.Exception -> Lb9
            java.lang.String r2 = r5.mNetVideoUrl     // Catch: java.lang.Exception -> Lb9
            boolean r1 = android.text.TextUtils.equals(r1, r2)     // Catch: java.lang.Exception -> Lb9
            if (r1 != 0) goto L45
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = r5.mMediaSourceUrl     // Catch: java.lang.Throwable -> L25
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L25
            boolean r0 = r1.exists()     // Catch: java.lang.Throwable -> L25
        L25:
            if (r0 != 0) goto L45
            java.lang.String r0 = r5.mNetVideoUrl     // Catch: java.lang.Exception -> Lb9
            android.net.Uri r0 = android.net.Uri.parse(r0)     // Catch: java.lang.Exception -> Lb9
            com.tkay.expressad.exoplayer.h.o$c r1 = new com.tkay.expressad.exoplayer.h.o$c     // Catch: java.lang.Exception -> Lb9
            com.tkay.expressad.exoplayer.j.o r2 = new com.tkay.expressad.exoplayer.j.o     // Catch: java.lang.Exception -> Lb9
            android.content.Context r3 = r5.mContext     // Catch: java.lang.Exception -> Lb9
            java.lang.String r4 = "TY_ExoPlayer"
            r2.<init>(r3, r4)     // Catch: java.lang.Exception -> Lb9
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lb9
            com.tkay.expressad.exoplayer.h.o r0 = r1.a(r0)     // Catch: java.lang.Exception -> Lb9
            r5.mediaSource = r0     // Catch: java.lang.Exception -> Lb9
            java.lang.String r0 = r5.mNetVideoUrl     // Catch: java.lang.Exception -> Lb9
            r5.mMediaSourceUrl = r0     // Catch: java.lang.Exception -> Lb9
        L45:
            java.lang.String r0 = r5.mMediaSourceUrl     // Catch: java.lang.Exception -> Lb9
            java.lang.String r1 = r5.mNetVideoUrl     // Catch: java.lang.Exception -> Lb9
            boolean r0 = android.text.TextUtils.equals(r0, r1)     // Catch: java.lang.Exception -> Lb9
            if (r0 == 0) goto L9a
            int r0 = r5.mVideoReadyRate     // Catch: java.lang.Exception -> Lb9
            if (r0 <= 0) goto L9a
            java.lang.String r0 = "Video Play Fail:Play Network Url"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb9
            java.lang.String r2 = "AdxExpress videoUrl:"
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r2 = r5.mPlayUrl     // Catch: java.lang.Exception -> Lb9
            r1.append(r2)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r2 = ",readyRate:"
            r1.append(r2)     // Catch: java.lang.Exception -> Lb9
            int r2 = r5.mVideoReadyRate     // Catch: java.lang.Exception -> Lb9
            r1.append(r2)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r2 = ",maxVideoCacheSize:"
            r1.append(r2)     // Catch: java.lang.Exception -> Lb9
            com.tkay.core.common.a.j r2 = com.tkay.core.common.a.j.a()     // Catch: java.lang.Exception -> Lb9
            long r2 = r2.c()     // Catch: java.lang.Exception -> Lb9
            r1.append(r2)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r2 = ",lastRecycleCheckDownloadedFileSize:"
            r1.append(r2)     // Catch: java.lang.Exception -> Lb9
            com.tkay.core.common.a.j r2 = com.tkay.core.common.a.j.a()     // Catch: java.lang.Exception -> Lb9
            long r2 = r2.d()     // Catch: java.lang.Exception -> Lb9
            r1.append(r2)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lb9
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lb9
            java.lang.String r2 = r2.q()     // Catch: java.lang.Exception -> Lb9
            com.tkay.core.common.k.c.a(r0, r1, r2)     // Catch: java.lang.Exception -> Lb9
        L9a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb9
            java.lang.String r1 = "Real Play Url:"
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r1 = r5.mMediaSourceUrl     // Catch: java.lang.Exception -> Lb9
            r0.append(r1)     // Catch: java.lang.Exception -> Lb9
            com.tkay.expressad.exoplayer.ad r0 = r5.exoPlayer     // Catch: java.lang.Exception -> Lb9
            com.tkay.expressad.exoplayer.h.s r1 = r5.mediaSource     // Catch: java.lang.Exception -> Lb9
            r0.a(r1)     // Catch: java.lang.Exception -> Lb9
            com.tkay.expressad.exoplayer.ad r0 = r5.exoPlayer     // Catch: java.lang.Exception -> Lb9
            r1 = 1
            r0.a(r1)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r0 = "mediaplayer prepare timeout"
            r5.startBufferIngTimer(r0)     // Catch: java.lang.Exception -> Lb9
        Lb8:
            return
        Lb9:
            r0 = move-exception
            r0.getMessage()
            r5.hideLoading()
            java.lang.String r0 = "illegal video address"
            r5.postOnPlayErrorOnMainThread(r0)
            r5.postOnPlaySetDataSourceError2MainThread(r0)
            return
    }

    public void setDisplay(android.view.SurfaceHolder r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.ad r0 = r1.exoPlayer     // Catch: java.lang.Throwable -> L6
            r0.a(r2)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r2 = move-exception
            r2.getMessage()
            java.lang.String r2 = r2.toString()
            r1.postOnPlayErrorOnMainThread(r2)
            return
    }

    public void setFullScreenLoadingView(android.view.View r1) {
            r0 = this;
            if (r1 == 0) goto L9
            r0.mFullScreenLoadingView = r1     // Catch: java.lang.Exception -> L5
            goto L9
        L5:
            r1 = move-exception
            r1.getMessage()
        L9:
            return
    }

    public void setIsComplete(boolean r1) {
            r0 = this;
            r0.mIsComplete = r1
            return
    }

    public void setIsFrontDesk(boolean r3) {
            r2 = this;
            r2.mIsFrontDesk = r3     // Catch: java.lang.Exception -> L14
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L14
            java.lang.String r1 = "isFrontDesk: "
            r0.<init>(r1)     // Catch: java.lang.Exception -> L14
            if (r3 == 0) goto Le
            java.lang.String r3 = "frontStage"
            goto L10
        Le:
            java.lang.String r3 = "backStage"
        L10:
            r0.append(r3)     // Catch: java.lang.Exception -> L14
            return
        L14:
            r3 = move-exception
            r3.getMessage()
            return
    }

    public void setPlaybackParams(float r2) {
            r1 = this;
            boolean r0 = r1.exoPlayerIsPlaying()     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L11
            com.tkay.expressad.exoplayer.v r0 = new com.tkay.expressad.exoplayer.v     // Catch: java.lang.Throwable -> L21
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L21
            com.tkay.expressad.exoplayer.ad r2 = r1.exoPlayer     // Catch: java.lang.Throwable -> L21
            r2.a(r0)     // Catch: java.lang.Throwable -> L21
            return
        L11:
            com.tkay.expressad.exoplayer.v r0 = new com.tkay.expressad.exoplayer.v     // Catch: java.lang.Throwable -> L21
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L21
            com.tkay.expressad.exoplayer.ad r2 = r1.exoPlayer     // Catch: java.lang.Throwable -> L21
            r2.a(r0)     // Catch: java.lang.Throwable -> L21
            com.tkay.expressad.exoplayer.ad r2 = r1.exoPlayer     // Catch: java.lang.Throwable -> L21
            r2.m()     // Catch: java.lang.Throwable -> L21
            return
        L21:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public void setSelfVideoFeedsPlayerListener(com.tkay.expressad.playercommon.VideoPlayerStatusListener r1) {
            r0 = this;
            r0.mInnerVFPLisener = r1
            return
    }

    public void setVideoFeedsPlayerListener(com.tkay.expressad.playercommon.VideoPlayerStatusListener r1) {
            r0 = this;
            r0.mOutterVFListener = r1
            return
    }

    public void setVolume(float r1, float r2) {
            r0 = this;
            com.tkay.expressad.exoplayer.ad r1 = r0.exoPlayer     // Catch: java.lang.Throwable -> La
            if (r1 == 0) goto L9
            com.tkay.expressad.exoplayer.ad r1 = r0.exoPlayer     // Catch: java.lang.Throwable -> La
            r1.a(r2)     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r1 = move-exception
            r1.getMessage()
            return
    }

    public void showLoading() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            if (r0 != 0) goto L5
            return
        L5:
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            com.tkay.expressad.playercommon.VideoFeedsPlayer$4 r1 = new com.tkay.expressad.playercommon.VideoFeedsPlayer$4     // Catch: java.lang.Exception -> L10
            r1.<init>(r2)     // Catch: java.lang.Exception -> L10
            r0.post(r1)     // Catch: java.lang.Exception -> L10
            return
        L10:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void start(int r4) {
            r3 = this;
            boolean r0 = r3.mHasPrepare     // Catch: java.lang.Exception -> L22
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.exoplayer.ad r0 = r3.exoPlayer     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto L21
            boolean r0 = r3.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L22
            if (r0 != 0) goto L21
            if (r4 <= 0) goto L1b
            com.tkay.expressad.exoplayer.ad r0 = r3.exoPlayer     // Catch: java.lang.Exception -> L22
            long r1 = (long) r4     // Catch: java.lang.Exception -> L22
            r0.a(r1)     // Catch: java.lang.Exception -> L22
            r3.play()     // Catch: java.lang.Exception -> L22
            return
        L1b:
            r3.play()     // Catch: java.lang.Exception -> L22
            r4 = 1
            r3.mIsPlaying = r4     // Catch: java.lang.Exception -> L22
        L21:
            return
        L22:
            r4 = move-exception
            r4.getMessage()
            return
    }

    public void start(boolean r2) {
            r1 = this;
            boolean r0 = r1.mHasPrepare     // Catch: java.lang.Exception -> L1e
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.exoplayer.ad r0 = r1.exoPlayer     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto L1d
            boolean r0 = r1.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L1e
            if (r0 != 0) goto L1d
            r1.showLoading()     // Catch: java.lang.Exception -> L1e
            r1.play()     // Catch: java.lang.Exception -> L1e
            r0 = 1
            r1.mIsPlaying = r0     // Catch: java.lang.Exception -> L1e
            if (r2 == 0) goto L1d
            r1.startPlayProgressTimer()     // Catch: java.lang.Exception -> L1e
        L1d:
            return
        L1e:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public void stop() {
            r1 = this;
            boolean r0 = r1.mHasPrepare     // Catch: java.lang.Exception -> L20
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.exoplayer.ad r0 = r1.exoPlayer     // Catch: java.lang.Exception -> L20
            if (r0 == 0) goto L1f
            boolean r0 = r1.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L20
            if (r0 == 0) goto L1f
            r1.hideLoading()     // Catch: java.lang.Exception -> L20
            com.tkay.expressad.exoplayer.ad r0 = r1.exoPlayer     // Catch: java.lang.Exception -> L20
            r0.m()     // Catch: java.lang.Exception -> L20
            r0 = 0
            r1.mHasPrepare = r0     // Catch: java.lang.Exception -> L20
            r1.mIsPlaying = r0     // Catch: java.lang.Exception -> L20
            r0 = 1
            r1.mIsComplete = r0     // Catch: java.lang.Exception -> L20
        L1f:
            return
        L20:
            r0 = move-exception
            r0.getMessage()
            return
    }
}
