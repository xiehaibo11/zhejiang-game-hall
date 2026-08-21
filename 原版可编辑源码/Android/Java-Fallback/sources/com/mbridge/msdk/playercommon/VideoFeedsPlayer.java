package com.mbridge.msdk.playercommon;

public class VideoFeedsPlayer implements com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener {
    public static final int INTERVAL_TIME_PLAY_TIME_CD_THREAD = 1000;
    public static final java.lang.String TAG = "VideoFeedsPlayer";
    private com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer exoPlayer;
    private boolean isStart;
    private int mBufferTime;
    private java.util.Timer mBufferTimeoutTimer;
    private long mCurrentPosition;
    private android.view.View mFullScreenLoadingView;
    private final android.os.Handler mHandler;
    private boolean mHasPrepare;
    private volatile com.mbridge.msdk.playercommon.VideoPlayerStatusListener mInnerVFPLisener;
    private boolean mIsBuffering;
    private boolean mIsComplete;
    private boolean mIsFrontDesk;
    private boolean mIsNeedBufferingTimeout;
    private boolean mIsPlaying;
    private boolean mIsSilent;
    private java.lang.ref.WeakReference<android.view.View> mLoadingView;
    private java.lang.Object mLock;
    private volatile com.mbridge.msdk.playercommon.VideoPlayerStatusListener mOutterVFListener;
    private java.lang.String mPlayUrl;
    private android.view.SurfaceHolder mSurfaceHolder;
    private com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource mediaSource;
    private java.lang.Runnable playProgressRunnable;













    public VideoFeedsPlayer() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mIsComplete = r0
            r2.mIsPlaying = r0
            r2.mHasPrepare = r0
            r2.mIsBuffering = r0
            r2.mIsNeedBufferingTimeout = r0
            r1 = 1
            r2.mIsFrontDesk = r1
            r1 = 5
            r2.mBufferTime = r1
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r2.mLock = r1
            r2.isStart = r0
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$1 r0 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.mHandler = r0
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$2 r0 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$2
            r0.<init>(r2)
            r2.playProgressRunnable = r0
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer access$000(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0) {
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r0.exoPlayer
            return r0
    }

    static long access$100(com.mbridge.msdk.playercommon.VideoFeedsPlayer r2) {
            long r0 = r2.mCurrentPosition
            return r0
    }

    static java.lang.ref.WeakReference access$1000(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0) {
            java.lang.ref.WeakReference<android.view.View> r0 = r0.mLoadingView
            return r0
    }

    static long access$102(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0, long r1) {
            r0.mCurrentPosition = r1
            return r1
    }

    static com.mbridge.msdk.playercommon.VideoPlayerStatusListener access$1100(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0) {
            com.mbridge.msdk.playercommon.VideoPlayerStatusListener r0 = r0.mOutterVFListener
            return r0
    }

    static com.mbridge.msdk.playercommon.VideoPlayerStatusListener access$1200(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0) {
            com.mbridge.msdk.playercommon.VideoPlayerStatusListener r0 = r0.mInnerVFPLisener
            return r0
    }

    static void access$200(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0, int r1, int r2) {
            r0.postOnPlayProgressOnMainThread(r1, r2)
            return
    }

    static boolean access$302(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0, boolean r1) {
            r0.mIsComplete = r1
            return r1
    }

    static boolean access$400(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0) {
            boolean r0 = r0.mIsBuffering
            return r0
    }

    static void access$500(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0) {
            r0.hideLoading()
            return
    }

    static android.os.Handler access$600(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0) {
            android.os.Handler r0 = r0.mHandler
            return r0
    }

    static boolean access$700(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0) {
            boolean r0 = r0.mHasPrepare
            return r0
    }

    static void access$800(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0, java.lang.String r1) {
            r0.postOnBufferingStarOnMainThread(r1)
            return
    }

    static android.view.View access$900(com.mbridge.msdk.playercommon.VideoFeedsPlayer r0) {
            android.view.View r0 = r0.mFullScreenLoadingView
            return r0
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
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L14:
            return
    }

    private void cancelPlayProgressTimer() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L8
            java.lang.Runnable r1 = r2.playProgressRunnable     // Catch: java.lang.Exception -> L8
            r0.removeCallbacks(r1)     // Catch: java.lang.Exception -> L8
            goto L12
        L8:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L12:
            return
    }

    private void hideLoading() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            if (r0 != 0) goto L5
            return
        L5:
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$5 r1 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$5     // Catch: java.lang.Exception -> L10
            r1.<init>(r2)     // Catch: java.lang.Exception -> L10
            r0.post(r1)     // Catch: java.lang.Exception -> L10
            goto L1a
        L10:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1a:
            return
    }

    private void postOnBufferinEndOnMainThread() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$8 r1 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$8     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L19:
            return
    }

    private void postOnBufferingStarOnMainThread(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$7 r1 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$7     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L19:
            return
    }

    private void postOnPlayCompletedOnMainThread() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$12 r1 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$12     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L19:
            return
    }

    private void postOnPlayErrorOnMainThread(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L16
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$10 r1 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$10     // Catch: java.lang.Exception -> L16
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L16
            r0.post(r1)     // Catch: java.lang.Exception -> L16
        Le:
            r0 = 94
            java.lang.String r1 = r2.mPlayUrl     // Catch: java.lang.Exception -> L16
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r3)     // Catch: java.lang.Exception -> L16
            goto L20
        L16:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L20:
            return
    }

    private void postOnPlayProgressOnMainThread(int r3, int r4) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$6 r1 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$6     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r4 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L19:
            return
    }

    private void postOnPlaySetDataSourceError2MainThread(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$11 r1 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$11     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L19:
            return
    }

    private void postOnPlayStartOnMainThread(long r3) {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L19
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$9 r1 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$9     // Catch: java.lang.Exception -> Lf
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lf
            r0.post(r1)     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r4 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L19:
            return
    }

    private void startBufferIngTimer(java.lang.String r5) {
            r4 = this;
            boolean r0 = r4.mIsNeedBufferingTimeout
            if (r0 != 0) goto Lc
            java.lang.String r5 = "VideoFeedsPlayer"
            java.lang.String r0 = "不需要缓冲超时功能"
            com.mbridge.msdk.foundation.tools.z.d(r5, r0)
            return
        Lc:
            r4.cancelBufferTimeoutTimer()
            java.util.Timer r0 = new java.util.Timer
            r0.<init>()
            r4.mBufferTimeoutTimer = r0
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$3 r1 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$3
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
            goto L15
        Lb:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L15:
            return
    }

    public void closeSound() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> Lf
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> Lf
            r1 = 0
            r0.setVolume(r1)     // Catch: java.lang.Exception -> Lf
            r0 = 1
            r2.mIsSilent = r0     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L19:
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

    public boolean fullScreenLoadingViewisVisible() {
            r2 = this;
            android.view.View r0 = r2.mFullScreenLoadingView     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto L18
            android.view.View r0 = r2.mFullScreenLoadingView     // Catch: java.lang.Throwable -> Le
            int r0 = r0.getVisibility()     // Catch: java.lang.Throwable -> Le
            if (r0 != 0) goto L18
            r0 = 1
            return r0
        Le:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L18:
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
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r1.exoPlayer
            if (r0 == 0) goto L7
            r0.getDuration()
        L7:
            r0 = 0
            return r0
    }

    public boolean halfLoadingViewisVisible() {
            r2 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r2.mLoadingView     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L26
            java.lang.ref.WeakReference<android.view.View> r0 = r2.mLoadingView     // Catch: java.lang.Throwable -> L1c
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L26
            java.lang.ref.WeakReference<android.view.View> r0 = r2.mLoadingView     // Catch: java.lang.Throwable -> L1c
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Throwable -> L1c
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> L1c
            int r0 = r0.getVisibility()     // Catch: java.lang.Throwable -> L1c
            if (r0 != 0) goto L26
            r0 = 1
            return r0
        L1c:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L26:
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
            java.lang.String r0 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)
            return
    }

    public boolean initPlayer(android.content.Context r4, android.view.View r5, java.lang.String r6, com.mbridge.msdk.playercommon.VideoPlayerStatusListener r7) {
            r3 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
            r1 = 0
            if (r5 != 0) goto L10
            java.lang.String r4 = "loadingView is NULL"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L57
            java.lang.String r4 = "MediaPlayer init error"
            r3.postOnPlayErrorOnMainThread(r4)     // Catch: java.lang.Throwable -> L57
            return r1
        L10:
            r3.mOutterVFListener = r7     // Catch: java.lang.Throwable -> L57
            java.lang.ref.WeakReference r7 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L57
            r7.<init>(r5)     // Catch: java.lang.Throwable -> L57
            r3.mLoadingView = r7     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory r5 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory     // Catch: java.lang.Throwable -> L57
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector r7 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector     // Catch: java.lang.Throwable -> L57
            r7.<init>()     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl r2 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl     // Catch: java.lang.Throwable -> L57
            r2.<init>()     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r5 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerFactory.newSimpleInstance(r5, r7, r2)     // Catch: java.lang.Throwable -> L57
            r3.exoPlayer = r5     // Catch: java.lang.Throwable -> L57
            android.net.Uri r5 = android.net.Uri.parse(r6)     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$Factory r6 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$Factory     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultDataSourceFactory r7 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultDataSourceFactory     // Catch: java.lang.Throwable -> L57
            java.lang.String r2 = "MBridge_ExoPlayer"
            r7.<init>(r4, r2)     // Catch: java.lang.Throwable -> L57
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource r4 = r6.createMediaSource(r5)     // Catch: java.lang.Throwable -> L57
            r3.mediaSource = r4     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r4 = r3.exoPlayer     // Catch: java.lang.Throwable -> L57
            r4.setRepeatMode(r1)     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r4 = r3.exoPlayer     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r5 = r3.mediaSource     // Catch: java.lang.Throwable -> L57
            r4.prepare(r5)     // Catch: java.lang.Throwable -> L57
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r4 = r3.exoPlayer     // Catch: java.lang.Throwable -> L57
            r4.addListener(r3)     // Catch: java.lang.Throwable -> L57
            r4 = 1
            return r4
        L57:
            r4 = move-exception
            java.lang.String r5 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            java.lang.String r4 = r4.toString()
            r3.postOnPlayErrorOnMainThread(r4)
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
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L16:
            r0 = 0
            return r0
    }

    public boolean isSilent() {
            r1 = this;
            boolean r0 = r1.mIsSilent
            return r0
    }

    public void justSeekTo(int r4) {
            r3 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
            long r1 = (long) r4
            r3.mCurrentPosition = r1     // Catch: java.lang.Exception -> Lf
            boolean r4 = r3.mHasPrepare     // Catch: java.lang.Exception -> Lf
            if (r4 != 0) goto L17
            java.lang.String r4 = "seekTo return mHasPrepare false"
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)     // Catch: java.lang.Exception -> Lf
            return
        Lf:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L17:
            return
    }

    public void onBufferingUpdate(int r1) {
            r0 = this;
            return
    }

    public void onCompletion() {
            r3 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
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

    public boolean onError(int r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
            r1 = 1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L46
            r2.<init>()     // Catch: java.lang.Exception -> L46
            java.lang.String r3 = "onError what: "
            r2.append(r3)     // Catch: java.lang.Exception -> L46
            r2.append(r5)     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = " extra: "
            r2.append(r5)     // Catch: java.lang.Exception -> L46
            r2.append(r6)     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Exception -> L46
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Exception -> L46
            r4.hideLoading()     // Catch: java.lang.Exception -> L46
            boolean r5 = r4.mIsFrontDesk     // Catch: java.lang.Exception -> L46
            if (r5 != 0) goto L3f
            java.lang.String r5 = "MIX 3"
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.x()     // Catch: java.lang.Exception -> L46
            boolean r5 = r5.equalsIgnoreCase(r2)     // Catch: java.lang.Exception -> L46
            if (r5 == 0) goto L3f
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.z()     // Catch: java.lang.Exception -> L46
            java.lang.String r2 = "Xiaomi"
            boolean r5 = r5.equalsIgnoreCase(r2)     // Catch: java.lang.Exception -> L46
            if (r5 == 0) goto L3f
            return r1
        L3f:
            r5 = 0
            r4.mHasPrepare = r5     // Catch: java.lang.Exception -> L46
            r4.postOnPlayErrorOnMainThread(r6)     // Catch: java.lang.Exception -> L46
            goto L4e
        L46:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
        L4e:
            return r1
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
            java.lang.String r0 = "VideoFeedsPlayer"
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
            java.lang.String r2 = "VideoFeedsPlayer"
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
            java.lang.String r0 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            r3 = 1
            if (r4 == r3) goto L51
            r1 = 2
            if (r4 == r1) goto L41
            r3 = 3
            if (r4 == r3) goto L2f
            r3 = 4
            if (r4 == r3) goto L23
            goto L56
        L23:
            java.lang.String r3 = "onPlaybackStateChanged : Ended : PLAY ENDED"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            r2.cancelPlayProgressTimer()
            r2.onCompletion()
            goto L56
        L2f:
            java.lang.String r3 = "onPlaybackStateChanged : READY"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            r3 = 0
            r2.mIsBuffering = r3
            r2.hideLoading()
            r2.postOnBufferinEndOnMainThread()
            r2.onPrepared()
            goto L56
        L41:
            java.lang.String r4 = "onPlaybackStateChanged : Buffering"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
            r2.mIsBuffering = r3
            r2.showLoading()
            java.lang.String r3 = "play buffering tiemout"
            r2.startBufferIngTimer(r3)
            goto L56
        L51:
            java.lang.String r3 = "onPlaybackStateChanged : IDLE"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L56:
            return
    }

    @Override
    public void onPositionDiscontinuity(int r1) {
            r0 = this;
            return
    }

    public void onPrepared() {
            r6 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8c
            r1.<init>()     // Catch: java.lang.Throwable -> L8c
            java.lang.String r2 = "onPrepared:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L8c
            boolean r2 = r6.mHasPrepare     // Catch: java.lang.Throwable -> L8c
            r1.append(r2)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L8c
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L8c
            r1 = 1
            r6.mHasPrepare = r1     // Catch: java.lang.Throwable -> L8c
            boolean r2 = r6.mIsFrontDesk     // Catch: java.lang.Throwable -> L8c
            if (r2 == 0) goto L7f
            boolean r2 = r6.mIsFrontDesk     // Catch: java.lang.Throwable -> L8c
            if (r2 == 0) goto L94
            r6.hideLoading()     // Catch: java.lang.Throwable -> L8c
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r6.exoPlayer     // Catch: java.lang.Throwable -> L8c
            if (r2 == 0) goto L58
            r6.mIsPlaying = r1     // Catch: java.lang.Throwable -> L8c
            boolean r2 = r6.isStart     // Catch: java.lang.Throwable -> L8c
            if (r2 != 0) goto L58
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r6.exoPlayer     // Catch: java.lang.Throwable -> L8c
            long r2 = r2.getDuration()     // Catch: java.lang.Throwable -> L8c
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            r6.postOnPlayStartOnMainThread(r2)     // Catch: java.lang.Throwable -> L8c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8c
            r2.<init>()     // Catch: java.lang.Throwable -> L8c
            java.lang.String r3 = "onPlayStarted()，getCurrentPosition:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L8c
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r3 = r6.exoPlayer     // Catch: java.lang.Throwable -> L8c
            long r3 = r3.getCurrentPosition()     // Catch: java.lang.Throwable -> L8c
            r2.append(r3)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8c
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L8c
            r6.isStart = r1     // Catch: java.lang.Throwable -> L8c
        L58:
            r6.postOnBufferinEndOnMainThread()     // Catch: java.lang.Throwable -> L8c
            r6.startPlayProgressTimer()     // Catch: java.lang.Throwable -> L8c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8c
            r1.<init>()     // Catch: java.lang.Throwable -> L8c
            java.lang.String r2 = "onPrepare mCurrentPosition:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L8c
            long r2 = r6.mCurrentPosition     // Catch: java.lang.Throwable -> L8c
            r1.append(r2)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r2 = " onPrepare mHasPrepare："
            r1.append(r2)     // Catch: java.lang.Throwable -> L8c
            boolean r2 = r6.mHasPrepare     // Catch: java.lang.Throwable -> L8c
            r1.append(r2)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L8c
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L8c
            goto L94
        L7f:
            java.lang.String r1 = "At background, Do not process"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L8c
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r6.exoPlayer     // Catch: java.lang.Throwable -> L8c
            if (r1 == 0) goto L94
            r6.pause()     // Catch: java.lang.Throwable -> L8c
            goto L94
        L8c:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L94:
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
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L10
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L10
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.setVolume(r1)     // Catch: java.lang.Exception -> L10
            r0 = 0
            r2.mIsSilent = r0     // Catch: java.lang.Exception -> L10
            goto L1a
        L10:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1a:
            return
    }

    public void pause() {
            r3 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
            boolean r1 = r3.mHasPrepare     // Catch: java.lang.Exception -> L3f
            if (r1 != 0) goto L7
            return
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Exception -> L3f
            if (r1 == 0) goto L47
            boolean r1 = r3.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L3f
            if (r1 == 0) goto L47
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3f
            r1.<init>()     // Catch: java.lang.Exception -> L3f
            java.lang.String r2 = "pause isPalying:"
            r1.append(r2)     // Catch: java.lang.Exception -> L3f
            boolean r2 = r3.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L3f
            r1.append(r2)     // Catch: java.lang.Exception -> L3f
            java.lang.String r2 = " mIsPlaying:"
            r1.append(r2)     // Catch: java.lang.Exception -> L3f
            boolean r2 = r3.mIsPlaying     // Catch: java.lang.Exception -> L3f
            r1.append(r2)     // Catch: java.lang.Exception -> L3f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L3f
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L3f
            r3.hideLoading()     // Catch: java.lang.Exception -> L3f
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Exception -> L3f
            r2 = 0
            r1.setPlayWhenReady(r2)     // Catch: java.lang.Exception -> L3f
            r3.mIsPlaying = r2     // Catch: java.lang.Exception -> L3f
            goto L47
        L3f:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L47:
            return
    }

    public void play() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer
            r1 = 1
            r0.setPlayWhenReady(r1)
            return
    }

    public void play(java.lang.String r6, int r7) {
            r5 = this;
            java.lang.Object r0 = r5.mLock     // Catch: java.lang.Exception -> L58
            monitor-enter(r0)     // Catch: java.lang.Exception -> L58
            java.lang.String r1 = "VideoFeedsPlayer"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L55
            r2.<init>()     // Catch: java.lang.Throwable -> L55
            java.lang.String r3 = "Start Play currentionPosition:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L55
            long r3 = r5.mCurrentPosition     // Catch: java.lang.Throwable -> L55
            r2.append(r3)     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L55
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Throwable -> L55
            if (r7 <= 0) goto L20
            long r1 = (long) r7     // Catch: java.lang.Throwable -> L55
            r5.mCurrentPosition = r1     // Catch: java.lang.Throwable -> L55
        L20:
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L55
            if (r7 == 0) goto L2d
            java.lang.String r6 = "play url is null"
            r5.postOnPlayErrorOnMainThread(r6)     // Catch: java.lang.Throwable -> L55
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L55
            return
        L2d:
            r5.mPlayUrl = r6     // Catch: java.lang.Throwable -> L55
            r6 = 0
            r5.mHasPrepare = r6     // Catch: java.lang.Throwable -> L55
            r6 = 1
            r5.mIsFrontDesk = r6     // Catch: java.lang.Throwable -> L55
            r5.showLoading()     // Catch: java.lang.Throwable -> L55
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L55
            r5.setDataSource()     // Catch: java.lang.Exception -> L58
            java.lang.String r6 = "VideoFeedsPlayer"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L58
            r7.<init>()     // Catch: java.lang.Exception -> L58
            java.lang.String r0 = "mPlayUrl:"
            r7.append(r0)     // Catch: java.lang.Exception -> L58
            java.lang.String r0 = r5.mPlayUrl     // Catch: java.lang.Exception -> L58
            r7.append(r0)     // Catch: java.lang.Exception -> L58
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L58
            com.mbridge.msdk.foundation.tools.z.b(r6, r7)     // Catch: java.lang.Exception -> L58
            goto L6d
        L55:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L55
            throw r6     // Catch: java.lang.Exception -> L58
        L58:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            java.lang.String r7 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r7, r6)
            r5.releasePlayer()
            r5.hideLoading()
            java.lang.String r6 = "mediaplayer cannot play"
            r5.postOnPlayErrorOnMainThread(r6)
        L6d:
            return
    }

    public void play(java.lang.String r3, android.view.SurfaceHolder r4) {
            r2 = this;
            java.lang.Object r0 = r2.mLock     // Catch: java.lang.Exception -> L3d
            monitor-enter(r0)     // Catch: java.lang.Exception -> L3d
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L3a
            if (r1 == 0) goto L10
            java.lang.String r3 = "play url is null"
            r2.postOnPlayErrorOnMainThread(r3)     // Catch: java.lang.Throwable -> L3a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3a
            return
        L10:
            r2.mPlayUrl = r3     // Catch: java.lang.Throwable -> L3a
            r3 = 0
            r2.mHasPrepare = r3     // Catch: java.lang.Throwable -> L3a
            r3 = 1
            r2.mIsFrontDesk = r3     // Catch: java.lang.Throwable -> L3a
            r2.mSurfaceHolder = r4     // Catch: java.lang.Throwable -> L3a
            r2.showLoading()     // Catch: java.lang.Throwable -> L3a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3a
            r2.setDataSource()     // Catch: java.lang.Exception -> L3d
            java.lang.String r3 = "VideoFeedsPlayer"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3d
            r4.<init>()     // Catch: java.lang.Exception -> L3d
            java.lang.String r0 = "mPlayUrl:"
            r4.append(r0)     // Catch: java.lang.Exception -> L3d
            java.lang.String r0 = r2.mPlayUrl     // Catch: java.lang.Exception -> L3d
            r4.append(r0)     // Catch: java.lang.Exception -> L3d
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L3d
            com.mbridge.msdk.foundation.tools.z.b(r3, r4)     // Catch: java.lang.Exception -> L3d
            goto L52
        L3a:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3a
            throw r3     // Catch: java.lang.Exception -> L3d
        L3d:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r4 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
            r2.releasePlayer()
            r2.hideLoading()
            java.lang.String r3 = "mediaplayer cannot play"
            r2.postOnPlayErrorOnMainThread(r3)
        L52:
            return
    }

    public void prepare() {
            r2 = this;
            boolean r0 = r2.mHasPrepare     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L5
            return
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L21
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L17
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1 = r2.mediaSource     // Catch: java.lang.Exception -> L17
            r0.prepare(r1)     // Catch: java.lang.Exception -> L17
            r0 = 1
            r2.mHasPrepare = r0     // Catch: java.lang.Exception -> L17
            r0 = 0
            r2.mIsPlaying = r0     // Catch: java.lang.Exception -> L17
            goto L21
        L17:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L21:
            return
    }

    public void releasePlayer() {
            r2 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
            java.lang.String r1 = "release"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L27
            r2.cancelPlayProgressTimer()     // Catch: java.lang.Throwable -> L27
            r2.cancelBufferTimeoutTimer()     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r2.exoPlayer     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L23
            r2.stop()     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r2.exoPlayer     // Catch: java.lang.Throwable -> L27
            r1.removeListener(r2)     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r2.exoPlayer     // Catch: java.lang.Throwable -> L27
            r1.release()     // Catch: java.lang.Throwable -> L27
            r1 = 0
            r2.mInnerVFPLisener = r1     // Catch: java.lang.Throwable -> L27
            r2.mOutterVFListener = r1     // Catch: java.lang.Throwable -> L27
        L23:
            r2.hideLoading()     // Catch: java.lang.Throwable -> L27
            goto L2f
        L27:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L2f:
            return
    }

    public void seekTo(int r4) {
            r3 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
            long r1 = (long) r4
            r3.mCurrentPosition = r1     // Catch: java.lang.Exception -> L19
            boolean r4 = r3.mHasPrepare     // Catch: java.lang.Exception -> L19
            if (r4 != 0) goto Lf
            java.lang.String r4 = "seekTo return mHasPrepare false"
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)     // Catch: java.lang.Exception -> L19
            return
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r4 = r3.exoPlayer     // Catch: java.lang.Exception -> L19
            if (r4 == 0) goto L21
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r4 = r3.exoPlayer     // Catch: java.lang.Exception -> L19
            r4.seekTo(r1)     // Catch: java.lang.Exception -> L19
            goto L21
        L19:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L21:
            return
    }

    public void setDataSource() {
            r3 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
            java.lang.String r1 = "setDataSource"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L2a
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Exception -> L2a
            if (r1 == 0) goto L3d
            android.view.SurfaceHolder r1 = r3.mSurfaceHolder     // Catch: java.lang.Exception -> L2a
            if (r1 == 0) goto L14
            android.view.SurfaceHolder r1 = r3.mSurfaceHolder     // Catch: java.lang.Exception -> L2a
            r3.setDisplay(r1)     // Catch: java.lang.Exception -> L2a
        L14:
            r1 = 0
            r3.mHasPrepare = r1     // Catch: java.lang.Exception -> L2a
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Exception -> L2a
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2 = r3.mediaSource     // Catch: java.lang.Exception -> L2a
            r1.prepare(r2)     // Catch: java.lang.Exception -> L2a
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r3.exoPlayer     // Catch: java.lang.Exception -> L2a
            r2 = 1
            r1.setPlayWhenReady(r2)     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = "mediaplayer prepare timeout"
            r3.startBufferIngTimer(r1)     // Catch: java.lang.Exception -> L2a
            goto L3d
        L2a:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            r3.hideLoading()
            java.lang.String r0 = "illegal video address"
            r3.postOnPlayErrorOnMainThread(r0)
            r3.postOnPlaySetDataSourceError2MainThread(r0)
        L3d:
            return
    }

    public void setDisplay(android.view.SurfaceHolder r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Throwable -> La
            com.mbridge.msdk.playercommon.exoplayer2.Player$VideoComponent r0 = r0.getVideoComponent()     // Catch: java.lang.Throwable -> La
            r0.setVideoSurfaceHolder(r3)     // Catch: java.lang.Throwable -> La
            goto L1b
        La:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            java.lang.String r3 = r3.toString()
            r2.postOnPlayErrorOnMainThread(r3)
        L1b:
            return
    }

    public void setFullScreenLoadingView(android.view.View r2) {
            r1 = this;
            if (r2 == 0) goto Lf
            r1.mFullScreenLoadingView = r2     // Catch: java.lang.Exception -> L5
            goto Lf
        L5:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        Lf:
            return
    }

    public void setIsComplete(boolean r1) {
            r0 = this;
            r0.mIsComplete = r1
            return
    }

    public void setIsFrontDesk(boolean r4) {
            r3 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
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

    public void setPlaybackParams(float r2) {
            r1 = this;
            boolean r0 = r1.exoPlayerIsPlaying()     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L11
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters     // Catch: java.lang.Throwable -> L21
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L21
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r1.exoPlayer     // Catch: java.lang.Throwable -> L21
            r2.setPlaybackParameters(r0)     // Catch: java.lang.Throwable -> L21
            goto L2b
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters     // Catch: java.lang.Throwable -> L21
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L21
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r1.exoPlayer     // Catch: java.lang.Throwable -> L21
            r2.setPlaybackParameters(r0)     // Catch: java.lang.Throwable -> L21
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r1.exoPlayer     // Catch: java.lang.Throwable -> L21
            r2.stop()     // Catch: java.lang.Throwable -> L21
            goto L2b
        L21:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L2b:
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

    public void setVolume(float r1, float r2) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r0.exoPlayer     // Catch: java.lang.Throwable -> La
            if (r1 == 0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r0.exoPlayer     // Catch: java.lang.Throwable -> La
            r1.setVolume(r2)     // Catch: java.lang.Throwable -> La
            goto L14
        La:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L14:
            return
    }

    public void showLoading() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            if (r0 != 0) goto L5
            return
        L5:
            android.os.Handler r0 = r2.mHandler     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.playercommon.VideoFeedsPlayer$4 r1 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer$4     // Catch: java.lang.Exception -> L10
            r1.<init>(r2)     // Catch: java.lang.Exception -> L10
            r0.post(r1)     // Catch: java.lang.Exception -> L10
            goto L1a
        L10:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1a:
            return
    }

    public void start(int r5) {
            r4 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
            boolean r1 = r4.mHasPrepare     // Catch: java.lang.Exception -> L29
            if (r1 != 0) goto L7
            return
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r4.exoPlayer     // Catch: java.lang.Exception -> L29
            if (r1 == 0) goto L31
            boolean r1 = r4.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L29
            if (r1 != 0) goto L31
            if (r5 <= 0) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r4.exoPlayer     // Catch: java.lang.Exception -> L29
            long r2 = (long) r5     // Catch: java.lang.Exception -> L29
            r1.seekTo(r2)     // Catch: java.lang.Exception -> L29
            r4.play()     // Catch: java.lang.Exception -> L29
            goto L31
        L1d:
            r4.play()     // Catch: java.lang.Exception -> L29
            r5 = 1
            r4.mIsPlaying = r5     // Catch: java.lang.Exception -> L29
            java.lang.String r5 = "=========start 指定进度"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Exception -> L29
            goto L31
        L29:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
        L31:
            return
    }

    public void start(boolean r3) {
            r2 = this;
            java.lang.String r0 = "VideoFeedsPlayer"
            boolean r1 = r2.mHasPrepare     // Catch: java.lang.Exception -> L2a
            if (r1 != 0) goto Lc
            java.lang.String r3 = "!mHasPrepare"
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)     // Catch: java.lang.Exception -> L2a
            return
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = r2.exoPlayer     // Catch: java.lang.Exception -> L2a
            if (r1 == 0) goto L32
            boolean r1 = r2.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L2a
            if (r1 != 0) goto L32
            r2.showLoading()     // Catch: java.lang.Exception -> L2a
            r2.play()     // Catch: java.lang.Exception -> L2a
            r1 = 1
            r2.mIsPlaying = r1     // Catch: java.lang.Exception -> L2a
            if (r3 == 0) goto L24
            r2.startPlayProgressTimer()     // Catch: java.lang.Exception -> L2a
        L24:
            java.lang.String r3 = "start"
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)     // Catch: java.lang.Exception -> L2a
            goto L32
        L2a:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L32:
            return
    }

    public void stop() {
            r2 = this;
            boolean r0 = r2.mHasPrepare     // Catch: java.lang.Exception -> L20
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L20
            if (r0 == 0) goto L2a
            boolean r0 = r2.exoPlayerIsPlaying()     // Catch: java.lang.Exception -> L20
            if (r0 == 0) goto L2a
            r2.hideLoading()     // Catch: java.lang.Exception -> L20
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.exoPlayer     // Catch: java.lang.Exception -> L20
            r0.stop()     // Catch: java.lang.Exception -> L20
            r0 = 0
            r2.mHasPrepare = r0     // Catch: java.lang.Exception -> L20
            r2.mIsPlaying = r0     // Catch: java.lang.Exception -> L20
            r0 = 1
            r2.mIsComplete = r0     // Catch: java.lang.Exception -> L20
            goto L2a
        L20:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "VideoFeedsPlayer"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L2a:
            return
    }
}
