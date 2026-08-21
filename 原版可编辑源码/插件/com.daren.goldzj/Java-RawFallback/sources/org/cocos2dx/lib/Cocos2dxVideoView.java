package org.cocos2dx.lib;

public class Cocos2dxVideoView extends android.view.SurfaceView {
    private static final java.lang.String AssetResourceRoot = "@assets/";
    private static final int EVENT_CLICKED = 5;
    private static final int EVENT_COMPLETED = 3;
    private static final int EVENT_META_LOADED = 4;
    private static final int EVENT_PAUSED = 1;
    private static final int EVENT_PLAYING = 0;
    private static final int EVENT_READY_TO_PLAY = 6;
    private static final int EVENT_STOPPED = 2;
    private java.lang.String TAG;
    protected org.cocos2dx.lib.Cocos2dxActivity mCocos2dxActivity;
    private android.media.MediaPlayer.OnCompletionListener mCompletionListener;
    private org.cocos2dx.lib.Cocos2dxVideoView.State mCurrentState;
    private int mDuration;
    private android.media.MediaPlayer.OnErrorListener mErrorListener;
    protected boolean mFullScreenEnabled;
    protected int mFullScreenHeight;
    protected int mFullScreenWidth;
    private boolean mIsAssetRouse;
    private boolean mKeepRatio;
    private android.media.MediaPlayer mMediaPlayer;
    private boolean mMetaUpdated;
    private org.cocos2dx.lib.Cocos2dxVideoView.OnVideoEventListener mOnVideoEventListener;
    private int mPositionBeforeRelease;
    android.media.MediaPlayer.OnPreparedListener mPreparedListener;
    android.view.SurfaceHolder.Callback mSHCallback;
    private int mSeekWhenPrepared;
    private android.view.SurfaceHolder mSurfaceHolder;
    private java.lang.String mVideoFilePath;
    private int mVideoHeight;
    private android.net.Uri mVideoUri;
    private int mVideoWidth;
    protected int mViewHeight;
    protected int mViewLeft;
    private int mViewTag;
    protected int mViewTop;
    protected int mViewWidth;
    protected int mVisibleHeight;
    protected int mVisibleLeft;
    protected int mVisibleTop;
    protected int mVisibleWidth;





    public interface OnVideoEventListener {
        void onVideoEvent(int r1, int r2);
    }

    private enum State extends java.lang.Enum<org.cocos2dx.lib.Cocos2dxVideoView.State> {
        private static final org.cocos2dx.lib.Cocos2dxVideoView.State[] $VALUES = null;
        public static final org.cocos2dx.lib.Cocos2dxVideoView.State ERROR = null;
        public static final org.cocos2dx.lib.Cocos2dxVideoView.State IDLE = null;
        public static final org.cocos2dx.lib.Cocos2dxVideoView.State INITIALIZED = null;
        public static final org.cocos2dx.lib.Cocos2dxVideoView.State PAUSED = null;
        public static final org.cocos2dx.lib.Cocos2dxVideoView.State PLAYBACK_COMPLETED = null;
        public static final org.cocos2dx.lib.Cocos2dxVideoView.State PREPARED = null;
        public static final org.cocos2dx.lib.Cocos2dxVideoView.State PREPARING = null;
        public static final org.cocos2dx.lib.Cocos2dxVideoView.State STARTED = null;
        public static final org.cocos2dx.lib.Cocos2dxVideoView.State STOPPED = null;

        static {
                org.cocos2dx.lib.Cocos2dxVideoView$State r0 = new org.cocos2dx.lib.Cocos2dxVideoView$State
                r1 = 0
                java.lang.String r2 = "IDLE"
                r0.<init>(r2, r1)
                org.cocos2dx.lib.Cocos2dxVideoView.State.IDLE = r0
                org.cocos2dx.lib.Cocos2dxVideoView$State r0 = new org.cocos2dx.lib.Cocos2dxVideoView$State
                r2 = 1
                java.lang.String r3 = "ERROR"
                r0.<init>(r3, r2)
                org.cocos2dx.lib.Cocos2dxVideoView.State.ERROR = r0
                org.cocos2dx.lib.Cocos2dxVideoView$State r0 = new org.cocos2dx.lib.Cocos2dxVideoView$State
                r3 = 2
                java.lang.String r4 = "INITIALIZED"
                r0.<init>(r4, r3)
                org.cocos2dx.lib.Cocos2dxVideoView.State.INITIALIZED = r0
                org.cocos2dx.lib.Cocos2dxVideoView$State r0 = new org.cocos2dx.lib.Cocos2dxVideoView$State
                r4 = 3
                java.lang.String r5 = "PREPARING"
                r0.<init>(r5, r4)
                org.cocos2dx.lib.Cocos2dxVideoView.State.PREPARING = r0
                org.cocos2dx.lib.Cocos2dxVideoView$State r0 = new org.cocos2dx.lib.Cocos2dxVideoView$State
                r5 = 4
                java.lang.String r6 = "PREPARED"
                r0.<init>(r6, r5)
                org.cocos2dx.lib.Cocos2dxVideoView.State.PREPARED = r0
                org.cocos2dx.lib.Cocos2dxVideoView$State r0 = new org.cocos2dx.lib.Cocos2dxVideoView$State
                r6 = 5
                java.lang.String r7 = "STARTED"
                r0.<init>(r7, r6)
                org.cocos2dx.lib.Cocos2dxVideoView.State.STARTED = r0
                org.cocos2dx.lib.Cocos2dxVideoView$State r0 = new org.cocos2dx.lib.Cocos2dxVideoView$State
                r7 = 6
                java.lang.String r8 = "PAUSED"
                r0.<init>(r8, r7)
                org.cocos2dx.lib.Cocos2dxVideoView.State.PAUSED = r0
                org.cocos2dx.lib.Cocos2dxVideoView$State r0 = new org.cocos2dx.lib.Cocos2dxVideoView$State
                r8 = 7
                java.lang.String r9 = "STOPPED"
                r0.<init>(r9, r8)
                org.cocos2dx.lib.Cocos2dxVideoView.State.STOPPED = r0
                org.cocos2dx.lib.Cocos2dxVideoView$State r0 = new org.cocos2dx.lib.Cocos2dxVideoView$State
                r9 = 8
                java.lang.String r10 = "PLAYBACK_COMPLETED"
                r0.<init>(r10, r9)
                org.cocos2dx.lib.Cocos2dxVideoView.State.PLAYBACK_COMPLETED = r0
                r0 = 9
                org.cocos2dx.lib.Cocos2dxVideoView$State[] r0 = new org.cocos2dx.lib.Cocos2dxVideoView.State[r0]
                org.cocos2dx.lib.Cocos2dxVideoView$State r10 = org.cocos2dx.lib.Cocos2dxVideoView.State.IDLE
                r0[r1] = r10
                org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.ERROR
                r0[r2] = r1
                org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.INITIALIZED
                r0[r3] = r1
                org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.PREPARING
                r0[r4] = r1
                org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.PREPARED
                r0[r5] = r1
                org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.STARTED
                r0[r6] = r1
                org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.PAUSED
                r0[r7] = r1
                org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.STOPPED
                r0[r8] = r1
                org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.PLAYBACK_COMPLETED
                r0[r9] = r1
                org.cocos2dx.lib.Cocos2dxVideoView.State.$VALUES = r0
                return
        }

        State(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static org.cocos2dx.lib.Cocos2dxVideoView.State valueOf(java.lang.String r1) {
                java.lang.Class<org.cocos2dx.lib.Cocos2dxVideoView$State> r0 = org.cocos2dx.lib.Cocos2dxVideoView.State.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                org.cocos2dx.lib.Cocos2dxVideoView$State r1 = (org.cocos2dx.lib.Cocos2dxVideoView.State) r1
                return r1
        }

        public static org.cocos2dx.lib.Cocos2dxVideoView.State[] values() {
                org.cocos2dx.lib.Cocos2dxVideoView$State[] r0 = org.cocos2dx.lib.Cocos2dxVideoView.State.$VALUES
                java.lang.Object r0 = r0.clone()
                org.cocos2dx.lib.Cocos2dxVideoView$State[] r0 = (org.cocos2dx.lib.Cocos2dxVideoView.State[]) r0
                return r0
        }
    }

    public Cocos2dxVideoView(org.cocos2dx.lib.Cocos2dxActivity r3, int r4) {
            r2 = this;
            r2.<init>(r3)
            java.lang.String r0 = "Cocos2dxVideoView"
            r2.TAG = r0
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = org.cocos2dx.lib.Cocos2dxVideoView.State.IDLE
            r2.mCurrentState = r0
            r0 = 0
            r2.mSurfaceHolder = r0
            r2.mMediaPlayer = r0
            r1 = 0
            r2.mVideoWidth = r1
            r2.mVideoHeight = r1
            r2.mSeekWhenPrepared = r1
            r2.mCocos2dxActivity = r0
            r2.mViewLeft = r1
            r2.mViewTop = r1
            r2.mViewWidth = r1
            r2.mViewHeight = r1
            r2.mVisibleLeft = r1
            r2.mVisibleTop = r1
            r2.mVisibleWidth = r1
            r2.mVisibleHeight = r1
            r2.mFullScreenEnabled = r1
            r2.mFullScreenWidth = r1
            r2.mFullScreenHeight = r1
            r2.mIsAssetRouse = r1
            r2.mVideoFilePath = r0
            r2.mViewTag = r1
            r2.mKeepRatio = r1
            r2.mMetaUpdated = r1
            r2.mPositionBeforeRelease = r1
            org.cocos2dx.lib.Cocos2dxVideoView$1 r0 = new org.cocos2dx.lib.Cocos2dxVideoView$1
            r0.<init>(r2)
            r2.mPreparedListener = r0
            org.cocos2dx.lib.Cocos2dxVideoView$2 r0 = new org.cocos2dx.lib.Cocos2dxVideoView$2
            r0.<init>(r2)
            r2.mCompletionListener = r0
            org.cocos2dx.lib.Cocos2dxVideoView$3 r0 = new org.cocos2dx.lib.Cocos2dxVideoView$3
            r0.<init>(r2)
            r2.mErrorListener = r0
            org.cocos2dx.lib.Cocos2dxVideoView$4 r0 = new org.cocos2dx.lib.Cocos2dxVideoView$4
            r0.<init>(r2)
            r2.mSHCallback = r0
            r2.mViewTag = r4
            r2.mCocos2dxActivity = r3
            r2.initVideoView()
            return
    }

    static int access$000(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            int r0 = r0.mVideoWidth
            return r0
    }

    static int access$002(org.cocos2dx.lib.Cocos2dxVideoView r0, int r1) {
            r0.mVideoWidth = r1
            return r1
    }

    static int access$100(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            int r0 = r0.mVideoHeight
            return r0
    }

    static void access$1000(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            r0.release()
            return
    }

    static int access$102(org.cocos2dx.lib.Cocos2dxVideoView r0, int r1) {
            r0.mVideoHeight = r1
            return r1
    }

    static boolean access$200(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            boolean r0 = r0.mMetaUpdated
            return r0
    }

    static boolean access$202(org.cocos2dx.lib.Cocos2dxVideoView r0, boolean r1) {
            r0.mMetaUpdated = r1
            return r1
    }

    static void access$300(org.cocos2dx.lib.Cocos2dxVideoView r0, int r1) {
            r0.sendEvent(r1)
            return
    }

    static org.cocos2dx.lib.Cocos2dxVideoView.State access$402(org.cocos2dx.lib.Cocos2dxVideoView r0, org.cocos2dx.lib.Cocos2dxVideoView.State r1) {
            r0.mCurrentState = r1
            return r1
    }

    static java.lang.String access$500(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            java.lang.String r0 = r0.TAG
            return r0
    }

    static android.view.SurfaceHolder access$602(org.cocos2dx.lib.Cocos2dxVideoView r0, android.view.SurfaceHolder r1) {
            r0.mSurfaceHolder = r1
            return r1
    }

    static void access$700(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            r0.openVideo()
            return
    }

    static int access$800(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            int r0 = r0.mPositionBeforeRelease
            return r0
    }

    static int access$802(org.cocos2dx.lib.Cocos2dxVideoView r0, int r1) {
            r0.mPositionBeforeRelease = r1
            return r1
    }

    static android.media.MediaPlayer access$900(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            android.media.MediaPlayer r0 = r0.mMediaPlayer
            return r0
    }

    private void initVideoView() {
            r2 = this;
            r0 = 0
            r2.mVideoWidth = r0
            r2.mVideoHeight = r0
            android.view.SurfaceHolder r0 = r2.getHolder()
            android.view.SurfaceHolder$Callback r1 = r2.mSHCallback
            r0.addCallback(r1)
            android.view.SurfaceHolder r0 = r2.getHolder()
            r1 = 3
            r0.setType(r1)
            r0 = 1
            r2.setFocusable(r0)
            r2.setFocusableInTouchMode(r0)
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = org.cocos2dx.lib.Cocos2dxVideoView.State.IDLE
            r2.mCurrentState = r0
            return
    }

    private void openVideo() {
            r10 = this;
            java.lang.String r0 = "Unable to open content: "
            android.view.SurfaceHolder r1 = r10.mSurfaceHolder
            if (r1 != 0) goto L7
            return
        L7:
            boolean r1 = r10.mIsAssetRouse
            if (r1 == 0) goto L10
            java.lang.String r1 = r10.mVideoFilePath
            if (r1 != 0) goto L15
            return
        L10:
            android.net.Uri r1 = r10.mVideoUri
            if (r1 != 0) goto L15
            return
        L15:
            r10.pausePlaybackService()
            r1 = 0
            r2 = 1
            android.media.MediaPlayer r3 = new android.media.MediaPlayer     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r3.<init>()     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r10.mMediaPlayer = r3     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.media.MediaPlayer r3 = r10.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.media.MediaPlayer$OnPreparedListener r4 = r10.mPreparedListener     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r3.setOnPreparedListener(r4)     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.media.MediaPlayer r3 = r10.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.media.MediaPlayer$OnCompletionListener r4 = r10.mCompletionListener     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r3.setOnCompletionListener(r4)     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.media.MediaPlayer r3 = r10.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.media.MediaPlayer$OnErrorListener r4 = r10.mErrorListener     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r3.setOnErrorListener(r4)     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.media.MediaPlayer r3 = r10.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.view.SurfaceHolder r4 = r10.mSurfaceHolder     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r3.setDisplay(r4)     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.media.MediaPlayer r3 = r10.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r4 = 3
            r3.setAudioStreamType(r4)     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.media.MediaPlayer r3 = r10.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r3.setScreenOnWhilePlaying(r2)     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            boolean r3 = r10.mIsAssetRouse     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            if (r3 == 0) goto L6a
            org.cocos2dx.lib.Cocos2dxActivity r3 = r10.mCocos2dxActivity     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.content.res.AssetManager r3 = r3.getAssets()     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            java.lang.String r4 = r10.mVideoFilePath     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.content.res.AssetFileDescriptor r3 = r3.openFd(r4)     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.media.MediaPlayer r4 = r10.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            java.io.FileDescriptor r5 = r3.getFileDescriptor()     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            long r6 = r3.getStartOffset()     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            long r8 = r3.getLength()     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r4.setDataSource(r5, r6, r8)     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            goto L75
        L6a:
            android.media.MediaPlayer r3 = r10.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.net.Uri r4 = r10.mVideoUri     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            java.lang.String r4 = r4.toString()     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r3.setDataSource(r4)     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
        L75:
            org.cocos2dx.lib.Cocos2dxVideoView$State r3 = org.cocos2dx.lib.Cocos2dxVideoView.State.INITIALIZED     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r10.mCurrentState = r3     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            android.media.MediaPlayer r3 = r10.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r3.prepare()     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            r10.showFirstFrame()     // Catch: java.lang.IllegalArgumentException -> L82 java.io.IOException -> La5
            return
        L82:
            r3 = move-exception
            java.lang.String r4 = r10.TAG
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r0)
            android.net.Uri r0 = r10.mVideoUri
            r5.append(r0)
            java.lang.String r0 = r5.toString()
            android.util.Log.w(r4, r0, r3)
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = org.cocos2dx.lib.Cocos2dxVideoView.State.ERROR
            r10.mCurrentState = r0
            android.media.MediaPlayer$OnErrorListener r0 = r10.mErrorListener
            android.media.MediaPlayer r3 = r10.mMediaPlayer
            r0.onError(r3, r2, r1)
            return
        La5:
            r3 = move-exception
            java.lang.String r4 = r10.TAG
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r0)
            android.net.Uri r0 = r10.mVideoUri
            r5.append(r0)
            java.lang.String r0 = r5.toString()
            android.util.Log.w(r4, r0, r3)
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = org.cocos2dx.lib.Cocos2dxVideoView.State.ERROR
            r10.mCurrentState = r0
            android.media.MediaPlayer$OnErrorListener r0 = r10.mErrorListener
            android.media.MediaPlayer r3 = r10.mMediaPlayer
            r0.onError(r3, r2, r1)
            return
    }

    private void pausePlaybackService() {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.android.music.musicservicecommand"
            r0.<init>(r1)
            java.lang.String r1 = "command"
            java.lang.String r2 = "pause"
            r0.putExtra(r1, r2)
            org.cocos2dx.lib.Cocos2dxActivity r1 = r3.mCocos2dxActivity
            r1.sendBroadcast(r0)
            return
    }

    private void release() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            if (r0 == 0) goto La
            r0.release()
            r0 = 0
            r1.mMediaPlayer = r0
        La:
            return
    }

    private void sendEvent(int r3) {
            r2 = this;
            org.cocos2dx.lib.Cocos2dxVideoView$OnVideoEventListener r0 = r2.mOnVideoEventListener
            if (r0 == 0) goto L9
            int r1 = r2.mViewTag
            r0.onVideoEvent(r1, r3)
        L9:
            return
    }

    private void setVideoURI(android.net.Uri r1, java.util.Map<java.lang.String, java.lang.String> r2) {
            r0 = this;
            r0.mVideoUri = r1
            r1 = 0
            r0.mVideoWidth = r1
            r0.mVideoHeight = r1
            return
    }

    private void showFirstFrame() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.mMediaPlayer
            r1 = 1
            r0.seekTo(r1)
            return
    }

    public void fixSize() {
            r4 = this;
            boolean r0 = r4.mFullScreenEnabled
            if (r0 == 0) goto L25
            org.cocos2dx.lib.Cocos2dxActivity r0 = r4.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r0.getGLSurfaceView()
            int r0 = r0.getWidth()
            r4.mFullScreenWidth = r0
            org.cocos2dx.lib.Cocos2dxActivity r0 = r4.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r0.getGLSurfaceView()
            int r0 = r0.getHeight()
            r4.mFullScreenHeight = r0
            int r0 = r4.mFullScreenWidth
            int r1 = r4.mFullScreenHeight
            r2 = 0
            r4.fixSize(r2, r2, r0, r1)
            goto L30
        L25:
            int r0 = r4.mViewLeft
            int r1 = r4.mViewTop
            int r2 = r4.mViewWidth
            int r3 = r4.mViewHeight
            r4.fixSize(r0, r1, r2, r3)
        L30:
            return
    }

    public void fixSize(int r5, int r6, int r7, int r8) {
            r4 = this;
            int r0 = r4.mVideoWidth
            if (r0 == 0) goto L57
            int r1 = r4.mVideoHeight
            if (r1 != 0) goto L9
            goto L57
        L9:
            if (r7 == 0) goto L4a
            if (r8 == 0) goto L4a
            boolean r2 = r4.mKeepRatio
            if (r2 == 0) goto L41
            boolean r2 = r4.mFullScreenEnabled
            if (r2 != 0) goto L41
            int r2 = r0 * r8
            int r3 = r7 * r1
            if (r2 <= r3) goto L23
            r4.mVisibleWidth = r7
            int r1 = r1 * r7
            int r1 = r1 / r0
            r4.mVisibleHeight = r1
            goto L30
        L23:
            int r2 = r0 * r8
            int r3 = r7 * r1
            if (r2 >= r3) goto L30
            int r0 = r0 * r8
            int r0 = r0 / r1
            r4.mVisibleWidth = r0
            r4.mVisibleHeight = r8
        L30:
            int r0 = r4.mVisibleWidth
            int r7 = r7 - r0
            int r7 = r7 / 2
            int r5 = r5 + r7
            r4.mVisibleLeft = r5
            int r5 = r4.mVisibleHeight
            int r8 = r8 - r5
            int r8 = r8 / 2
            int r6 = r6 + r8
            r4.mVisibleTop = r6
            goto L5f
        L41:
            r4.mVisibleLeft = r5
            r4.mVisibleTop = r6
            r4.mVisibleWidth = r7
            r4.mVisibleHeight = r8
            goto L5f
        L4a:
            r4.mVisibleLeft = r5
            r4.mVisibleTop = r6
            int r5 = r4.mVideoWidth
            r4.mVisibleWidth = r5
            int r5 = r4.mVideoHeight
            r4.mVisibleHeight = r5
            goto L5f
        L57:
            r4.mVisibleLeft = r5
            r4.mVisibleTop = r6
            r4.mVisibleWidth = r7
            r4.mVisibleHeight = r8
        L5f:
            android.view.SurfaceHolder r5 = r4.getHolder()
            int r6 = r4.mVisibleWidth
            int r7 = r4.mVisibleHeight
            r5.setFixedSize(r6, r7)
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams
            r6 = -1
            r5.<init>(r6, r6)
            int r6 = r4.mVisibleLeft
            r5.leftMargin = r6
            int r6 = r4.mVisibleTop
            r5.topMargin = r6
            r4.setLayoutParams(r5)
            return
    }

    public int getCurrentPosition() {
            r4 = this;
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r4.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.ERROR
            r2 = 1
            r3 = 0
            if (r0 != r1) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            android.media.MediaPlayer r1 = r4.mMediaPlayer
            if (r1 != 0) goto L10
            goto L11
        L10:
            r2 = 0
        L11:
            r0 = r0 | r2
            if (r0 != 0) goto L1b
            android.media.MediaPlayer r0 = r4.mMediaPlayer
            int r0 = r0.getCurrentPosition()
            return r0
        L1b:
            r0 = -1
            return r0
    }

    public int getDuration() {
            r2 = this;
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.IDLE
            if (r0 == r1) goto L1c
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.ERROR
            if (r0 == r1) goto L1c
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.INITIALIZED
            if (r0 == r1) goto L1c
            android.media.MediaPlayer r0 = r2.mMediaPlayer
            if (r0 == 0) goto L1c
            int r0 = r0.getDuration()
            r2.mDuration = r0
        L1c:
            int r0 = r2.mDuration
            return r0
    }

    @Override
    protected void onMeasure(int r1, int r2) {
            r0 = this;
            super.onMeasure(r1, r2)
            int r1 = r0.mVisibleWidth
            int r2 = r0.mVisibleHeight
            r0.setMeasuredDimension(r1, r2)
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            int r2 = r2.getAction()
            r2 = r2 & 255(0xff, float:3.57E-43)
            r0 = 1
            if (r2 != r0) goto Ld
            r2 = 5
            r1.sendEvent(r2)
        Ld:
            return r0
    }

    public void pause() {
            r2 = this;
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.STARTED
            if (r0 == r1) goto Lc
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.PLAYBACK_COMPLETED
            if (r0 != r1) goto L1d
        Lc:
            android.media.MediaPlayer r0 = r2.mMediaPlayer
            if (r0 == 0) goto L1d
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = org.cocos2dx.lib.Cocos2dxVideoView.State.PAUSED
            r2.mCurrentState = r0
            android.media.MediaPlayer r0 = r2.mMediaPlayer
            r0.pause()
            r0 = 1
            r2.sendEvent(r0)
        L1d:
            return
    }

    public int resolveAdjustedSize(int r3, int r4) {
            r2 = this;
            int r0 = android.view.View.MeasureSpec.getMode(r4)
            int r4 = android.view.View.MeasureSpec.getSize(r4)
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 == r1) goto L15
            if (r0 == 0) goto L19
            r1 = 1073741824(0x40000000, float:2.0)
            if (r0 == r1) goto L13
            goto L19
        L13:
            r3 = r4
            goto L19
        L15:
            int r3 = java.lang.Math.min(r3, r4)
        L19:
            return r3
    }

    public void seekTo(int r3) {
            r2 = this;
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.IDLE
            if (r0 == r1) goto L20
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.INITIALIZED
            if (r0 == r1) goto L20
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.STOPPED
            if (r0 == r1) goto L20
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.ERROR
            if (r0 == r1) goto L20
            android.media.MediaPlayer r0 = r2.mMediaPlayer
            if (r0 != 0) goto L1d
            goto L20
        L1d:
            r0.seekTo(r3)
        L20:
            return
    }

    public void setFullScreenEnabled(boolean r2) {
            r1 = this;
            boolean r0 = r1.mFullScreenEnabled
            if (r0 == r2) goto L9
            r1.mFullScreenEnabled = r2
            r1.fixSize()
        L9:
            return
    }

    public void setKeepRatio(boolean r1) {
            r0 = this;
            r0.mKeepRatio = r1
            r0.fixSize()
            return
    }

    public void setVideoFileName(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "@assets/"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto Le
            r0 = 8
            java.lang.String r3 = r3.substring(r0)
        Le:
            java.lang.String r0 = "/"
            boolean r0 = r3.startsWith(r0)
            r1 = 0
            if (r0 == 0) goto L22
            r0 = 0
            r2.mIsAssetRouse = r0
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r2.setVideoURI(r3, r1)
            goto L2e
        L22:
            r2.mVideoFilePath = r3
            r0 = 1
            r2.mIsAssetRouse = r0
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r2.setVideoURI(r3, r1)
        L2e:
            return
    }

    public void setVideoRect(int r2, int r3, int r4, int r5) {
            r1 = this;
            int r0 = r1.mViewLeft
            if (r0 != r2) goto L11
            int r0 = r1.mViewTop
            if (r0 != r3) goto L11
            int r0 = r1.mViewWidth
            if (r0 != r4) goto L11
            int r0 = r1.mViewHeight
            if (r0 != r5) goto L11
            return
        L11:
            r1.mViewLeft = r2
            r1.mViewTop = r3
            r1.mViewWidth = r4
            r1.mViewHeight = r5
            int r2 = r1.mViewLeft
            int r3 = r1.mViewTop
            int r4 = r1.mViewWidth
            int r5 = r1.mViewHeight
            r1.fixSize(r2, r3, r4, r5)
            return
    }

    public void setVideoURL(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.mIsAssetRouse = r0
            android.net.Uri r2 = android.net.Uri.parse(r2)
            r0 = 0
            r1.setVideoURI(r2, r0)
            return
    }

    public void setVideoViewEventListener(org.cocos2dx.lib.Cocos2dxVideoView.OnVideoEventListener r1) {
            r0 = this;
            r0.mOnVideoEventListener = r1
            return
    }

    @Override
    public void setVisibility(int r1) {
            r0 = this;
            super.setVisibility(r1)
            return
    }

    public void setVolume(float r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            if (r0 == 0) goto L7
            r0.setVolume(r2, r2)
        L7:
            return
    }

    public void start() {
            r2 = this;
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.PREPARED
            if (r0 == r1) goto L12
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.PAUSED
            if (r0 == r1) goto L12
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.PLAYBACK_COMPLETED
            if (r0 != r1) goto L23
        L12:
            android.media.MediaPlayer r0 = r2.mMediaPlayer
            if (r0 == 0) goto L23
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = org.cocos2dx.lib.Cocos2dxVideoView.State.STARTED
            r2.mCurrentState = r0
            android.media.MediaPlayer r0 = r2.mMediaPlayer
            r0.start()
            r0 = 0
            r2.sendEvent(r0)
        L23:
            return
    }

    public void stop() {
            r2 = this;
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.IDLE
            if (r0 == r1) goto L31
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.INITIALIZED
            if (r0 == r1) goto L31
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.ERROR
            if (r0 == r1) goto L31
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = r2.mCurrentState
            org.cocos2dx.lib.Cocos2dxVideoView$State r1 = org.cocos2dx.lib.Cocos2dxVideoView.State.STOPPED
            if (r0 == r1) goto L31
            android.media.MediaPlayer r0 = r2.mMediaPlayer
            if (r0 == 0) goto L31
            org.cocos2dx.lib.Cocos2dxVideoView$State r0 = org.cocos2dx.lib.Cocos2dxVideoView.State.STOPPED
            r2.mCurrentState = r0
            android.media.MediaPlayer r0 = r2.mMediaPlayer
            r0.stop()
            r0 = 2
            r2.sendEvent(r0)
            android.media.MediaPlayer r0 = r2.mMediaPlayer     // Catch: java.lang.Exception -> L31
            r0.prepare()     // Catch: java.lang.Exception -> L31
            r2.showFirstFrame()     // Catch: java.lang.Exception -> L31
        L31:
            return
    }

    public void stopPlayback() {
            r0 = this;
            r0.release()
            return
    }
}
