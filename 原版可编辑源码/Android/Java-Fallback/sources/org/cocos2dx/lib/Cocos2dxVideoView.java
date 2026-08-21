package org.cocos2dx.lib;

public class Cocos2dxVideoView extends android.view.SurfaceView implements android.widget.MediaController.MediaPlayerControl {
    private static final java.lang.String AssetResourceRoot = "assets/";
    private static final int EVENT_COMPLETED = 3;
    private static final int EVENT_ERROR = 4;
    private static final int EVENT_PAUSED = 1;
    private static final int EVENT_PLAYING = 0;
    private static final int EVENT_STOPPED = 2;
    private static final int STATE_ERROR = -1;
    private static final int STATE_IDLE = 0;
    private static final int STATE_PAUSED = 4;
    private static final int STATE_PLAYBACK_COMPLETED = 5;
    private static final int STATE_PLAYING = 3;
    private static final int STATE_PREPARED = 2;
    private static final int STATE_PREPARING = 1;
    private java.lang.String TAG;
    private android.media.MediaPlayer.OnBufferingUpdateListener mBufferingUpdateListener;
    protected org.cocos2dx.lib.Cocos2dxActivity mCocos2dxActivity;
    private android.media.MediaPlayer.OnCompletionListener mCompletionListener;
    private int mCurrentBufferPercentage;
    private int mCurrentState;
    private int mDuration;
    private android.media.MediaPlayer.OnErrorListener mErrorListener;
    protected boolean mFullScreenEnabled;
    protected int mFullScreenHeight;
    protected int mFullScreenWidth;
    private boolean mIsAssetRouse;
    private boolean mKeepRatio;
    private boolean mLooping;
    private android.media.MediaPlayer mMediaPlayer;
    private boolean mNeedResume;
    private android.media.MediaPlayer.OnErrorListener mOnErrorListener;
    private android.media.MediaPlayer.OnPreparedListener mOnPreparedListener;
    private org.cocos2dx.lib.Cocos2dxVideoView.OnVideoEventListener mOnVideoEventListener;
    android.media.MediaPlayer.OnPreparedListener mPreparedListener;
    android.view.SurfaceHolder.Callback mSHCallback;
    private int mSeekWhenPrepared;
    protected android.media.MediaPlayer.OnVideoSizeChangedListener mSizeChangedListener;
    private android.view.SurfaceHolder mSurfaceHolder;
    private int mTargetState;
    private boolean mUserInputEnabled;
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

    public Cocos2dxVideoView(org.cocos2dx.lib.Cocos2dxActivity r4, int r5) {
            r3 = this;
            r3.<init>(r4)
            java.lang.String r0 = "Cocos2dxVideoView"
            r3.TAG = r0
            r0 = 0
            r3.mCurrentState = r0
            r3.mTargetState = r0
            r1 = 0
            r3.mSurfaceHolder = r1
            r3.mMediaPlayer = r1
            r3.mVideoWidth = r0
            r3.mVideoHeight = r0
            r3.mCocos2dxActivity = r1
            r3.mViewLeft = r0
            r3.mViewTop = r0
            r3.mViewWidth = r0
            r3.mViewHeight = r0
            r3.mVisibleLeft = r0
            r3.mVisibleTop = r0
            r3.mVisibleWidth = r0
            r3.mVisibleHeight = r0
            r3.mFullScreenEnabled = r0
            r3.mFullScreenWidth = r0
            r3.mFullScreenHeight = r0
            r3.mViewTag = r0
            r3.mNeedResume = r0
            r3.mIsAssetRouse = r0
            r3.mLooping = r0
            r2 = 1
            r3.mUserInputEnabled = r2
            r3.mVideoFilePath = r1
            r3.mKeepRatio = r0
            org.cocos2dx.lib.Cocos2dxVideoView$1 r0 = new org.cocos2dx.lib.Cocos2dxVideoView$1
            r0.<init>(r3)
            r3.mSizeChangedListener = r0
            org.cocos2dx.lib.Cocos2dxVideoView$2 r0 = new org.cocos2dx.lib.Cocos2dxVideoView$2
            r0.<init>(r3)
            r3.mPreparedListener = r0
            org.cocos2dx.lib.Cocos2dxVideoView$3 r0 = new org.cocos2dx.lib.Cocos2dxVideoView$3
            r0.<init>(r3)
            r3.mCompletionListener = r0
            org.cocos2dx.lib.Cocos2dxVideoView$4 r0 = new org.cocos2dx.lib.Cocos2dxVideoView$4
            r0.<init>(r3)
            r3.mErrorListener = r0
            org.cocos2dx.lib.Cocos2dxVideoView$5 r0 = new org.cocos2dx.lib.Cocos2dxVideoView$5
            r0.<init>(r3)
            r3.mBufferingUpdateListener = r0
            org.cocos2dx.lib.Cocos2dxVideoView$6 r0 = new org.cocos2dx.lib.Cocos2dxVideoView$6
            r0.<init>(r3)
            r3.mSHCallback = r0
            r3.mViewTag = r5
            r3.mCocos2dxActivity = r4
            r3.initVideoView()
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

    static int access$1000(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            int r0 = r0.mViewTag
            return r0
    }

    static int access$102(org.cocos2dx.lib.Cocos2dxVideoView r0, int r1) {
            r0.mVideoHeight = r1
            return r1
    }

    static java.lang.String access$1100(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            java.lang.String r0 = r0.TAG
            return r0
    }

    static android.media.MediaPlayer.OnErrorListener access$1200(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            android.media.MediaPlayer$OnErrorListener r0 = r0.mOnErrorListener
            return r0
    }

    static int access$1302(org.cocos2dx.lib.Cocos2dxVideoView r0, int r1) {
            r0.mCurrentBufferPercentage = r1
            return r1
    }

    static android.view.SurfaceHolder access$1402(org.cocos2dx.lib.Cocos2dxVideoView r0, android.view.SurfaceHolder r1) {
            r0.mSurfaceHolder = r1
            return r1
    }

    static void access$1500(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            r0.openVideo()
            return
    }

    static int access$202(org.cocos2dx.lib.Cocos2dxVideoView r0, int r1) {
            r0.mCurrentState = r1
            return r1
    }

    static android.media.MediaPlayer.OnPreparedListener access$300(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            android.media.MediaPlayer$OnPreparedListener r0 = r0.mOnPreparedListener
            return r0
    }

    static android.media.MediaPlayer access$400(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            android.media.MediaPlayer r0 = r0.mMediaPlayer
            return r0
    }

    static int access$500(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            int r0 = r0.mSeekWhenPrepared
            return r0
    }

    static int access$600(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            int r0 = r0.mTargetState
            return r0
    }

    static int access$602(org.cocos2dx.lib.Cocos2dxVideoView r0, int r1) {
            r0.mTargetState = r1
            return r1
    }

    static boolean access$700(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            boolean r0 = r0.mLooping
            return r0
    }

    static void access$800(org.cocos2dx.lib.Cocos2dxVideoView r0, boolean r1) {
            r0.release(r1)
            return
    }

    static org.cocos2dx.lib.Cocos2dxVideoView.OnVideoEventListener access$900(org.cocos2dx.lib.Cocos2dxVideoView r0) {
            org.cocos2dx.lib.Cocos2dxVideoView$OnVideoEventListener r0 = r0.mOnVideoEventListener
            return r0
    }

    private void initVideoView() {
            r3 = this;
            r0 = 0
            r3.mVideoWidth = r0
            r3.mVideoHeight = r0
            android.view.SurfaceHolder r1 = r3.getHolder()
            android.view.SurfaceHolder$Callback r2 = r3.mSHCallback
            r1.addCallback(r2)
            android.view.SurfaceHolder r1 = r3.getHolder()
            r2 = 3
            r1.setType(r2)
            r1 = 1
            r3.setFocusable(r1)
            r3.setFocusableInTouchMode(r1)
            r3.mCurrentState = r0
            r3.mTargetState = r0
            return
    }

    private void openVideo() {
            r11 = this;
            java.lang.String r0 = "Unable to open content: "
            android.view.SurfaceHolder r1 = r11.mSurfaceHolder
            if (r1 != 0) goto L7
            return
        L7:
            boolean r1 = r11.mIsAssetRouse
            if (r1 == 0) goto L10
            java.lang.String r1 = r11.mVideoFilePath
            if (r1 != 0) goto L15
            return
        L10:
            android.net.Uri r1 = r11.mVideoUri
            if (r1 != 0) goto L15
            return
        L15:
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "com.android.music.musicservicecommand"
            r1.<init>(r2)
            java.lang.String r2 = "command"
            java.lang.String r3 = "pause"
            r1.putExtra(r2, r3)
            org.cocos2dx.lib.Cocos2dxActivity r2 = r11.mCocos2dxActivity
            r2.sendBroadcast(r1)
            r1 = 0
            r11.release(r1)
            r2 = 1
            r3 = -1
            android.media.MediaPlayer r4 = new android.media.MediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r4.<init>()     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r11.mMediaPlayer = r4     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer r4 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer$OnPreparedListener r5 = r11.mPreparedListener     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r4.setOnPreparedListener(r5)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer r4 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer$OnVideoSizeChangedListener r5 = r11.mSizeChangedListener     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r4.setOnVideoSizeChangedListener(r5)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer r4 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer$OnCompletionListener r5 = r11.mCompletionListener     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r4.setOnCompletionListener(r5)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer r4 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer$OnErrorListener r5 = r11.mErrorListener     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r4.setOnErrorListener(r5)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer r4 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer$OnBufferingUpdateListener r5 = r11.mBufferingUpdateListener     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r4.setOnBufferingUpdateListener(r5)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer r4 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.view.SurfaceHolder r5 = r11.mSurfaceHolder     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r4.setDisplay(r5)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer r4 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r5 = 3
            r4.setAudioStreamType(r5)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer r4 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r4.setScreenOnWhilePlaying(r2)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.media.MediaPlayer r4 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            boolean r5 = r11.mLooping     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r4.setLooping(r5)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r11.mDuration = r3     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r11.mCurrentBufferPercentage = r1     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            boolean r4 = r11.mIsAssetRouse     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            if (r4 == 0) goto La9
            org.cocos2dx.lib.Cocos2dxActivity r4 = r11.mCocos2dxActivity     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.content.res.AssetManager r4 = r4.getAssets()     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            java.lang.String r5 = r11.mVideoFilePath     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.content.res.AssetFileDescriptor r4 = r4.openFd(r5)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            if (r4 != 0) goto L97
            com.android.vending.expansion.zipfile.ZipResourceFile r5 = org.cocos2dx.lib.Cocos2dxHelper.getObbFile()     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            if (r5 == 0) goto L97
            com.android.vending.expansion.zipfile.ZipResourceFile r4 = org.cocos2dx.lib.Cocos2dxHelper.getObbFile()     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            java.lang.String r5 = r11.mVideoFilePath     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.content.res.AssetFileDescriptor r4 = r4.getAssetFileDescriptor(r5)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
        L97:
            android.media.MediaPlayer r5 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            java.io.FileDescriptor r6 = r4.getFileDescriptor()     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            long r7 = r4.getStartOffset()     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            long r9 = r4.getLength()     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r5.setDataSource(r6, r7, r9)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            goto Lb2
        La9:
            android.media.MediaPlayer r4 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            org.cocos2dx.lib.Cocos2dxActivity r5 = r11.mCocos2dxActivity     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            android.net.Uri r6 = r11.mVideoUri     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r4.setDataSource(r5, r6)     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
        Lb2:
            android.media.MediaPlayer r4 = r11.mMediaPlayer     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r4.prepareAsync()     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            r11.mCurrentState = r2     // Catch: java.lang.IllegalArgumentException -> Lba java.io.IOException -> Ldd
            return
        Lba:
            r4 = move-exception
            java.lang.String r5 = r11.TAG
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            android.net.Uri r0 = r11.mVideoUri
            r6.append(r0)
            java.lang.String r0 = r6.toString()
            android.util.Log.w(r5, r0, r4)
            r11.mCurrentState = r3
            r11.mTargetState = r3
            android.media.MediaPlayer$OnErrorListener r0 = r11.mErrorListener
            android.media.MediaPlayer r3 = r11.mMediaPlayer
            r0.onError(r3, r2, r1)
            return
        Ldd:
            r4 = move-exception
            java.lang.String r5 = r11.TAG
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            android.net.Uri r0 = r11.mVideoUri
            r6.append(r0)
            java.lang.String r0 = r6.toString()
            android.util.Log.w(r5, r0, r4)
            r11.mCurrentState = r3
            r11.mTargetState = r3
            android.media.MediaPlayer$OnErrorListener r0 = r11.mErrorListener
            android.media.MediaPlayer r3 = r11.mMediaPlayer
            r0.onError(r3, r2, r1)
            return
    }

    private void release(boolean r2) {
            r1 = this;
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            if (r0 == 0) goto L16
            r0.reset()
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            r0.release()
            r0 = 0
            r1.mMediaPlayer = r0
            r0 = 0
            r1.mCurrentState = r0
            if (r2 == 0) goto L16
            r1.mTargetState = r0
        L16:
            return
    }

    private void setVideoURI(android.net.Uri r1, java.util.Map<java.lang.String, java.lang.String> r2) {
            r0 = this;
            r0.mVideoUri = r1
            r1 = 0
            r0.mSeekWhenPrepared = r1
            r0.mVideoWidth = r1
            r0.mVideoHeight = r1
            r0.openVideo()
            r0.requestLayout()
            r0.invalidate()
            return
    }

    @Override
    public boolean canPause() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public boolean canSeekBackward() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public boolean canSeekForward() {
            r1 = this;
            r0 = 1
            return r0
    }

    public void fixSize() {
            r4 = this;
            boolean r0 = r4.mFullScreenEnabled
            if (r0 == 0) goto Ld
            int r0 = r4.mFullScreenWidth
            int r1 = r4.mFullScreenHeight
            r2 = 0
            r4.fixSize(r2, r2, r0, r1)
            goto L18
        Ld:
            int r0 = r4.mViewLeft
            int r1 = r4.mViewTop
            int r2 = r4.mViewWidth
            int r3 = r4.mViewHeight
            r4.fixSize(r0, r1, r2, r3)
        L18:
            return
    }

    public void fixSize(int r5, int r6, int r7, int r8) {
            r4 = this;
            int r0 = r4.mVideoWidth
            if (r0 == 0) goto L53
            int r1 = r4.mVideoHeight
            if (r1 != 0) goto L9
            goto L53
        L9:
            if (r7 == 0) goto L46
            if (r8 == 0) goto L46
            boolean r2 = r4.mKeepRatio
            if (r2 == 0) goto L3d
            int r2 = r0 * r8
            int r3 = r7 * r1
            if (r2 <= r3) goto L1f
            r4.mVisibleWidth = r7
            int r1 = r1 * r7
            int r1 = r1 / r0
            r4.mVisibleHeight = r1
            goto L2c
        L1f:
            int r2 = r0 * r8
            int r3 = r7 * r1
            if (r2 >= r3) goto L2c
            int r0 = r0 * r8
            int r0 = r0 / r1
            r4.mVisibleWidth = r0
            r4.mVisibleHeight = r8
        L2c:
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
            goto L5b
        L3d:
            r4.mVisibleLeft = r5
            r4.mVisibleTop = r6
            r4.mVisibleWidth = r7
            r4.mVisibleHeight = r8
            goto L5b
        L46:
            r4.mVisibleLeft = r5
            r4.mVisibleTop = r6
            int r5 = r4.mVideoWidth
            r4.mVisibleWidth = r5
            int r5 = r4.mVideoHeight
            r4.mVisibleHeight = r5
            goto L5b
        L53:
            r4.mVisibleLeft = r5
            r4.mVisibleTop = r6
            r4.mVisibleWidth = r7
            r4.mVisibleHeight = r8
        L5b:
            android.view.SurfaceHolder r5 = r4.getHolder()
            int r6 = r4.mVisibleWidth
            int r7 = r4.mVisibleHeight
            r5.setFixedSize(r6, r7)
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams
            r6 = -2
            r5.<init>(r6, r6)
            int r6 = r4.mVisibleLeft
            r5.leftMargin = r6
            int r6 = r4.mVisibleTop
            r5.topMargin = r6
            r6 = 51
            r5.gravity = r6
            r4.setLayoutParams(r5)
            return
    }

    @Override
    public int getAudioSessionId() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            int r0 = r0.getAudioSessionId()
            return r0
    }

    @Override
    public int getBufferPercentage() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            if (r0 == 0) goto L7
            int r0 = r1.mCurrentBufferPercentage
            return r0
        L7:
            r0 = 0
            return r0
    }

    @Override
    public int getCurrentPosition() {
            r1 = this;
            boolean r0 = r1.isInPlaybackState()
            if (r0 == 0) goto Ld
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            int r0 = r0.getCurrentPosition()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    @Override
    public int getDuration() {
            r1 = this;
            boolean r0 = r1.isInPlaybackState()
            if (r0 == 0) goto L16
            int r0 = r1.mDuration
            if (r0 <= 0) goto Lb
            return r0
        Lb:
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            int r0 = r0.getDuration()
            r1.mDuration = r0
            int r0 = r1.mDuration
            return r0
        L16:
            r0 = -1
            r1.mDuration = r0
            int r0 = r1.mDuration
            return r0
    }

    public boolean isInPlaybackState() {
            r3 = this;
            android.media.MediaPlayer r0 = r3.mMediaPlayer
            r1 = 1
            if (r0 == 0) goto Lf
            int r0 = r3.mCurrentState
            r2 = -1
            if (r0 == r2) goto Lf
            if (r0 == 0) goto Lf
            if (r0 == r1) goto Lf
            goto L10
        Lf:
            r1 = 0
        L10:
            return r1
    }

    @Override
    public boolean isPlaying() {
            r1 = this;
            boolean r0 = r1.isInPlaybackState()
            if (r0 == 0) goto L10
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            boolean r0 = r0.isPlaying()
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    @Override
    protected void onMeasure(int r3, int r4) {
            r2 = this;
            int r3 = r2.mVideoWidth
            java.lang.String r4 = ":"
            java.lang.String r0 = ""
            if (r3 == 0) goto L33
            int r3 = r2.mVideoHeight
            if (r3 != 0) goto Ld
            goto L33
        Ld:
            int r3 = r2.mVisibleWidth
            int r1 = r2.mVisibleHeight
            r2.setMeasuredDimension(r3, r1)
            java.lang.String r3 = r2.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            int r0 = r2.mVisibleWidth
            r1.append(r0)
            r1.append(r4)
            int r4 = r2.mVisibleHeight
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            android.util.Log.i(r3, r4)
            goto L58
        L33:
            int r3 = r2.mViewWidth
            int r1 = r2.mViewHeight
            r2.setMeasuredDimension(r3, r1)
            java.lang.String r3 = r2.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            int r0 = r2.mViewWidth
            r1.append(r0)
            r1.append(r4)
            int r4 = r2.mViewHeight
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            android.util.Log.i(r3, r4)
        L58:
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r3) {
            r2 = this;
            boolean r0 = r2.mUserInputEnabled
            r1 = 1
            if (r0 == 0) goto L1f
            int r3 = r3.getAction()
            r3 = r3 & 255(0xff, float:3.57E-43)
            if (r3 != r1) goto L1f
            boolean r3 = r2.isPlaying()
            if (r3 == 0) goto L17
            r2.pause()
            goto L1f
        L17:
            int r3 = r2.mCurrentState
            r0 = 4
            if (r3 != r0) goto L1f
            r2.resume()
        L1f:
            return r1
    }

    @Override
    public void pause() {
            r4 = this;
            boolean r0 = r4.isInPlaybackState()
            r1 = 4
            if (r0 == 0) goto L20
            android.media.MediaPlayer r0 = r4.mMediaPlayer
            boolean r0 = r0.isPlaying()
            if (r0 == 0) goto L20
            android.media.MediaPlayer r0 = r4.mMediaPlayer
            r0.pause()
            r4.mCurrentState = r1
            org.cocos2dx.lib.Cocos2dxVideoView$OnVideoEventListener r0 = r4.mOnVideoEventListener
            if (r0 == 0) goto L20
            int r2 = r4.mViewTag
            r3 = 1
            r0.onVideoEvent(r2, r3)
        L20:
            r4.mTargetState = r1
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

    public void restart() {
            r2 = this;
            boolean r0 = r2.isInPlaybackState()
            if (r0 == 0) goto L16
            android.media.MediaPlayer r0 = r2.mMediaPlayer
            r1 = 0
            r0.seekTo(r1)
            android.media.MediaPlayer r0 = r2.mMediaPlayer
            r0.start()
            r0 = 3
            r2.mCurrentState = r0
            r2.mTargetState = r0
        L16:
            return
    }

    public void resume() {
            r3 = this;
            boolean r0 = r3.isInPlaybackState()
            if (r0 == 0) goto L1d
            int r0 = r3.mCurrentState
            r1 = 4
            if (r0 != r1) goto L1d
            android.media.MediaPlayer r0 = r3.mMediaPlayer
            r0.start()
            r0 = 3
            r3.mCurrentState = r0
            org.cocos2dx.lib.Cocos2dxVideoView$OnVideoEventListener r0 = r3.mOnVideoEventListener
            if (r0 == 0) goto L1d
            int r1 = r3.mViewTag
            r2 = 0
            r0.onVideoEvent(r1, r2)
        L1d:
            return
    }

    @Override
    public void seekTo(int r2) {
            r1 = this;
            boolean r0 = r1.isInPlaybackState()
            if (r0 == 0) goto Lf
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            r0.seekTo(r2)
            r2 = 0
            r1.mSeekWhenPrepared = r2
            goto L11
        Lf:
            r1.mSeekWhenPrepared = r2
        L11:
            return
    }

    public void setFullScreenEnabled(boolean r2, int r3, int r4) {
            r1 = this;
            boolean r0 = r1.mFullScreenEnabled
            if (r0 == r2) goto L11
            r1.mFullScreenEnabled = r2
            if (r3 == 0) goto Le
            if (r4 == 0) goto Le
            r1.mFullScreenWidth = r3
            r1.mFullScreenHeight = r4
        Le:
            r1.fixSize()
        L11:
            return
    }

    public void setKeepRatio(boolean r1) {
            r0 = this;
            r0.mKeepRatio = r1
            r0.fixSize()
            return
    }

    public void setLooping(boolean r1) {
            r0 = this;
            r0.mLooping = r1
            return
    }

    public void setOnCompletionListener(org.cocos2dx.lib.Cocos2dxVideoView.OnVideoEventListener r1) {
            r0 = this;
            r0.mOnVideoEventListener = r1
            return
    }

    public void setOnErrorListener(android.media.MediaPlayer.OnErrorListener r1) {
            r0 = this;
            r0.mOnErrorListener = r1
            return
    }

    public void setOnPreparedListener(android.media.MediaPlayer.OnPreparedListener r1) {
            r0 = this;
            r0.mOnPreparedListener = r1
            return
    }

    public void setUserInputEnabled(boolean r1) {
            r0 = this;
            r0.mUserInputEnabled = r1
            return
    }

    public void setVideoFileName(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "assets/"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto Ld
            r0 = 7
            java.lang.String r3 = r3.substring(r0)
        Ld:
            java.lang.String r0 = "/"
            boolean r0 = r3.startsWith(r0)
            r1 = 0
            if (r0 == 0) goto L21
            r0 = 0
            r2.mIsAssetRouse = r0
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r2.setVideoURI(r3, r1)
            goto L2d
        L21:
            r2.mVideoFilePath = r3
            r0 = 1
            r2.mIsAssetRouse = r0
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r2.setVideoURI(r3, r1)
        L2d:
            return
    }

    public void setVideoRect(int r1, int r2, int r3, int r4) {
            r0 = this;
            r0.mViewLeft = r1
            r0.mViewTop = r2
            r0.mViewWidth = r3
            r0.mViewHeight = r4
            int r1 = r0.mViewLeft
            int r2 = r0.mViewTop
            int r3 = r0.mViewWidth
            int r4 = r0.mViewHeight
            r0.fixSize(r1, r2, r3, r4)
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

    @Override
    public void setVisibility(int r2) {
            r1 = this;
            r0 = 4
            if (r2 != r0) goto L14
            boolean r0 = r1.isPlaying()
            r1.mNeedResume = r0
            boolean r0 = r1.mNeedResume
            if (r0 == 0) goto L1e
            int r0 = r1.getCurrentPosition()
            r1.mSeekWhenPrepared = r0
            goto L1e
        L14:
            boolean r0 = r1.mNeedResume
            if (r0 == 0) goto L1e
            r1.start()
            r0 = 0
            r1.mNeedResume = r0
        L1e:
            super.setVisibility(r2)
            return
    }

    @Override
    public void start() {
            r4 = this;
            boolean r0 = r4.isInPlaybackState()
            r1 = 3
            if (r0 == 0) goto L18
            android.media.MediaPlayer r0 = r4.mMediaPlayer
            r0.start()
            r4.mCurrentState = r1
            org.cocos2dx.lib.Cocos2dxVideoView$OnVideoEventListener r0 = r4.mOnVideoEventListener
            if (r0 == 0) goto L18
            int r2 = r4.mViewTag
            r3 = 0
            r0.onVideoEvent(r2, r3)
        L18:
            r4.mTargetState = r1
            return
    }

    public void stop() {
            r3 = this;
            boolean r0 = r3.isInPlaybackState()
            if (r0 == 0) goto L1b
            android.media.MediaPlayer r0 = r3.mMediaPlayer
            boolean r0 = r0.isPlaying()
            if (r0 == 0) goto L1b
            r3.stopPlayback()
            org.cocos2dx.lib.Cocos2dxVideoView$OnVideoEventListener r0 = r3.mOnVideoEventListener
            if (r0 == 0) goto L1b
            int r1 = r3.mViewTag
            r2 = 2
            r0.onVideoEvent(r1, r2)
        L1b:
            return
    }

    public void stopPlayback() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            if (r0 == 0) goto L14
            r0.stop()
            android.media.MediaPlayer r0 = r1.mMediaPlayer
            r0.release()
            r0 = 0
            r1.mMediaPlayer = r0
            r0 = 0
            r1.mCurrentState = r0
            r1.mTargetState = r0
        L14:
            return
    }

    public void suspend() {
            r1 = this;
            r0 = 0
            r1.release(r0)
            return
    }
}
