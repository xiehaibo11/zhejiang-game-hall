package org.cocos2dx.lib;

import android.content.Intent;
import android.content.res.AssetFileDescriptor;
import android.media.MediaPlayer;
import android.net.Uri;
import android.util.Log;
import android.view.MotionEvent;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.View;
import android.widget.FrameLayout;
import java.io.IOException;
import java.util.Map;

public class Cocos2dxVideoView extends SurfaceView {
    private static final String AssetResourceRoot = "@assets/";
    private static final int EVENT_CLICKED = 5;
    private static final int EVENT_COMPLETED = 3;
    private static final int EVENT_META_LOADED = 4;
    private static final int EVENT_PAUSED = 1;
    private static final int EVENT_PLAYING = 0;
    private static final int EVENT_READY_TO_PLAY = 6;
    private static final int EVENT_STOPPED = 2;
    private String TAG;
    protected Cocos2dxActivity mCocos2dxActivity;
    private MediaPlayer.OnCompletionListener mCompletionListener;
    private State mCurrentState;
    private int mDuration;
    private MediaPlayer.OnErrorListener mErrorListener;
    protected boolean mFullScreenEnabled;
    protected int mFullScreenHeight;
    protected int mFullScreenWidth;
    private boolean mIsAssetRouse;
    private boolean mKeepRatio;
    private MediaPlayer mMediaPlayer;
    private boolean mMetaUpdated;
    private OnVideoEventListener mOnVideoEventListener;
    private int mPositionBeforeRelease;
    MediaPlayer.OnPreparedListener mPreparedListener;
    SurfaceHolder.Callback mSHCallback;
    private int mSeekWhenPrepared;
    private SurfaceHolder mSurfaceHolder;
    private String mVideoFilePath;
    private int mVideoHeight;
    private Uri mVideoUri;
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

    private enum State extends Enum<State> {
        private static final State[] $VALUES = null;
        public static final State ERROR = null;
        public static final State IDLE = null;
        public static final State INITIALIZED = null;
        public static final State PAUSED = null;
        public static final State PLAYBACK_COMPLETED = null;
        public static final State PREPARED = null;
        public static final State PREPARING = null;
        public static final State STARTED = null;
        public static final State STOPPED = null;

        State(String r1, int r2) {
        }

        public static State valueOf(String r1) {
            return (State) Enum.valueOf(State.class, r1);
        }

        public static State[] values() {
            return (State[]) $VALUES.clone();
        }

        static {
            IDLE = new State("IDLE", 0);
            ERROR = new State("ERROR", 1);
            INITIALIZED = new State("INITIALIZED", 2);
            PREPARING = new State("PREPARING", 3);
            PREPARED = new State("PREPARED", 4);
            STARTED = new State("STARTED", 5);
            PAUSED = new State("PAUSED", 6);
            STOPPED = new State("STOPPED", 7);
            PLAYBACK_COMPLETED = new State("PLAYBACK_COMPLETED", 8);
            $VALUES = new State[]{IDLE, ERROR, INITIALIZED, PREPARING, PREPARED, STARTED, PAUSED, STOPPED, PLAYBACK_COMPLETED};
        }
    }

    static int access$000(Cocos2dxVideoView r0) {
        return r0.mVideoWidth;
    }

    static int access$002(Cocos2dxVideoView r0, int r1) {
        r0.mVideoWidth = r1;
        return r1;
    }

    static int access$100(Cocos2dxVideoView r0) {
        return r0.mVideoHeight;
    }

    static void access$1000(Cocos2dxVideoView r0) {
        r0.release();
    }

    static int access$102(Cocos2dxVideoView r0, int r1) {
        r0.mVideoHeight = r1;
        return r1;
    }

    static boolean access$200(Cocos2dxVideoView r0) {
        return r0.mMetaUpdated;
    }

    static boolean access$202(Cocos2dxVideoView r0, boolean r1) {
        r0.mMetaUpdated = r1;
        return r1;
    }

    static void access$300(Cocos2dxVideoView r0, int r1) {
        r0.sendEvent(r1);
    }

    static State access$402(Cocos2dxVideoView r0, State r1) {
        r0.mCurrentState = r1;
        return r1;
    }

    static String access$500(Cocos2dxVideoView r0) {
        return r0.TAG;
    }

    static SurfaceHolder access$602(Cocos2dxVideoView r0, SurfaceHolder r1) {
        r0.mSurfaceHolder = r1;
        return r1;
    }

    static void access$700(Cocos2dxVideoView r0) {
        r0.openVideo();
    }

    static int access$800(Cocos2dxVideoView r0) {
        return r0.mPositionBeforeRelease;
    }

    static int access$802(Cocos2dxVideoView r0, int r1) {
        r0.mPositionBeforeRelease = r1;
        return r1;
    }

    static MediaPlayer access$900(Cocos2dxVideoView r0) {
        return r0.mMediaPlayer;
    }

    public Cocos2dxVideoView(Cocos2dxActivity r3, int r4) {
        super(r3);
        this.TAG = "Cocos2dxVideoView";
        this.mCurrentState = State.IDLE;
        this.mSurfaceHolder = null;
        this.mMediaPlayer = null;
        this.mVideoWidth = 0;
        this.mVideoHeight = 0;
        this.mSeekWhenPrepared = 0;
        this.mCocos2dxActivity = null;
        this.mViewLeft = 0;
        this.mViewTop = 0;
        this.mViewWidth = 0;
        this.mViewHeight = 0;
        this.mVisibleLeft = 0;
        this.mVisibleTop = 0;
        this.mVisibleWidth = 0;
        this.mVisibleHeight = 0;
        this.mFullScreenEnabled = false;
        this.mFullScreenWidth = 0;
        this.mFullScreenHeight = 0;
        this.mIsAssetRouse = false;
        this.mVideoFilePath = null;
        this.mViewTag = 0;
        this.mKeepRatio = false;
        this.mMetaUpdated = false;
        this.mPositionBeforeRelease = 0;
        this.mPreparedListener = new 1(this);
        this.mCompletionListener = new 2(this);
        this.mErrorListener = new 3(this);
        this.mSHCallback = new 4(this);
        this.mViewTag = r4;
        this.mCocos2dxActivity = r3;
        initVideoView();
    }

    public void setVideoRect(int r2, int r3, int r4, int r5) {
        if (this.mViewLeft == r2) goto L5;
    L11:
        this.mViewLeft = r2;
        this.mViewTop = r3;
        this.mViewWidth = r4;
        this.mViewHeight = r5;
        fixSize(this.mViewLeft, this.mViewTop, this.mViewWidth, this.mViewHeight);
        return;
    L5:
        if (this.mViewTop != r3) goto L11;
        if (this.mViewWidth != r4) goto L11;
        if (this.mViewHeight != r5) goto L11;
    }

    public void setFullScreenEnabled(boolean r2) {
        if (this.mFullScreenEnabled == r2) goto L6;
        this.mFullScreenEnabled = r2;
        fixSize();
        return;
    }

    public void setVolume(float r2) {
        MediaPlayer r0 = this.mMediaPlayer;
        if (r0 == null) goto L6;
        r0.setVolume(r2, r2);
        return;
    }

    public void setKeepRatio(boolean r1) {
        this.mKeepRatio = r1;
        fixSize();
    }

    public void setVideoURL(String r2) {
        this.mIsAssetRouse = false;
        setVideoURI(Uri.parse(r2), null);
    }

    public void setVideoFileName(String r3) {
        if (r3.startsWith(AssetResourceRoot) == false) goto L6;
        r3 = r3.substring(8);
    L6:
        if (r3.startsWith("/") == false) goto L8;
        this.mIsAssetRouse = false;
        setVideoURI(Uri.parse(r3), null);
        return;
    L8:
        this.mVideoFilePath = r3;
        this.mIsAssetRouse = true;
        setVideoURI(Uri.parse(r3), null);
    }

    public int getCurrentPosition() {
        boolean r2 = true;
        if (this.mCurrentState != State.ERROR) goto L5;
        boolean r0 = true;
    L7:
        if (this.mMediaPlayer == null) goto L11;
        r2 = false;
    L11:
        if ((r0 | r2) == false) goto L13;
        return -1;
    L13:
        return this.mMediaPlayer.getCurrentPosition();
    L5:
        r0 = false;
        goto L7
    }

    public int getDuration() {
        if (this.mCurrentState == State.IDLE) goto L12;
        if (this.mCurrentState == State.ERROR) goto L12;
        if (this.mCurrentState == State.INITIALIZED) goto L12;
        MediaPlayer r0 = this.mMediaPlayer;
        if (r0 == null) goto L12;
        this.mDuration = r0.getDuration();
    L12:
        return this.mDuration;
    }

    public void setVideoViewEventListener(OnVideoEventListener r1) {
        this.mOnVideoEventListener = r1;
    }

    @Override
    public void setVisibility(int r1) {
        super.setVisibility(r1);
    }

    @Override
    protected void onMeasure(int r1, int r2) {
        super.onMeasure(r1, r2);
        setMeasuredDimension(this.mVisibleWidth, this.mVisibleHeight);
    }

    @Override
    public boolean onTouchEvent(MotionEvent r2) {
        if ((r2.getAction() & 255) != 1) goto L5;
        sendEvent(5);
    L5:
        return true;
    }

    public void stop() {
        if (this.mCurrentState != State.IDLE) goto L5;
        return;
    L5:
        if (this.mCurrentState != State.INITIALIZED) goto L7;
        return;
    L7:
        if (this.mCurrentState != State.ERROR) goto L9;
        return;
    L9:
        if (this.mCurrentState != State.STOPPED) goto L11;
        return;
    L11:
        if (this.mMediaPlayer == null) goto L22;
        this.mCurrentState = State.STOPPED;
        this.mMediaPlayer.stop();
        sendEvent(2);
        this.mMediaPlayer.prepare();     // Catch: Exception -> L15
        showFirstFrame();     // Catch: Exception -> L15
        return;
    L23:
        return;
    }

    public void stopPlayback() {
        release();
    }

    public void start() {
        if (this.mCurrentState == State.PREPARED) goto L9;
        if (this.mCurrentState == State.PAUSED) goto L9;
        if (this.mCurrentState == State.PLAYBACK_COMPLETED) goto L9;
        return;
    L9:
        if (this.mMediaPlayer == null) goto L13;
        this.mCurrentState = State.STARTED;
        this.mMediaPlayer.start();
        sendEvent(0);
        return;
    }

    public void pause() {
        if (this.mCurrentState == State.STARTED) goto L7;
        if (this.mCurrentState == State.PLAYBACK_COMPLETED) goto L7;
        return;
    L7:
        if (this.mMediaPlayer == null) goto L11;
        this.mCurrentState = State.PAUSED;
        this.mMediaPlayer.pause();
        sendEvent(1);
        return;
    }

    public void seekTo(int r3) {
        if (this.mCurrentState != State.IDLE) goto L5;
        return;
    L5:
        if (this.mCurrentState != State.INITIALIZED) goto L7;
        return;
    L7:
        if (this.mCurrentState != State.STOPPED) goto L9;
        return;
    L9:
        if (this.mCurrentState == State.ERROR) goto L18;
        MediaPlayer r0 = this.mMediaPlayer;
        if (r0 == null) goto L19;
        r0.seekTo(r3);
        return;
    L19:
        return;
    }

    public void fixSize() {
        if (this.mFullScreenEnabled == false) goto L5;
        this.mFullScreenWidth = this.mCocos2dxActivity.getGLSurfaceView().getWidth();
        this.mFullScreenHeight = this.mCocos2dxActivity.getGLSurfaceView().getHeight();
        fixSize(0, 0, this.mFullScreenWidth, this.mFullScreenHeight);
        return;
    L5:
        fixSize(this.mViewLeft, this.mViewTop, this.mViewWidth, this.mViewHeight);
    }

    public void fixSize(int r5, int r6, int r7, int r8) {
        int r0 = this.mVideoWidth;
        if (r0 == 0) goto L22;
        int r1 = this.mVideoHeight;
        if (r1 == 0) goto L22;
        if (r7 == 0) goto L21;
        if (r8 == 0) goto L21;
        if (this.mKeepRatio == true) goto L12;
    L20:
        this.mVisibleLeft = r5;
        this.mVisibleTop = r6;
        this.mVisibleWidth = r7;
        this.mVisibleHeight = r8;
    L23:
        getHolder().setFixedSize(this.mVisibleWidth, this.mVisibleHeight);
        FrameLayout.LayoutParams r52 = new FrameLayout.LayoutParams(-1, -1);
        r52.leftMargin = this.mVisibleLeft;
        r52.topMargin = this.mVisibleTop;
        setLayoutParams(r52);
        return;
    L12:
        if (this.mFullScreenEnabled == true) goto L20;
        if ((r0 * r8) <= (r7 * r1)) goto L17;
        this.mVisibleWidth = r7;
        this.mVisibleHeight = (r1 * r7) / r0;
    L19:
        this.mVisibleLeft = r5 + ((r7 - this.mVisibleWidth) / 2);
        this.mVisibleTop = r6 + ((r8 - this.mVisibleHeight) / 2);
        goto L23
    L17:
        if ((r0 * r8) >= (r7 * r1)) goto L19;
        this.mVisibleWidth = (r0 * r8) / r1;
        this.mVisibleHeight = r8;
    L21:
        this.mVisibleLeft = r5;
        this.mVisibleTop = r6;
        this.mVisibleWidth = this.mVideoWidth;
        this.mVisibleHeight = this.mVideoHeight;
    L22:
        this.mVisibleLeft = r5;
        this.mVisibleTop = r6;
        this.mVisibleWidth = r7;
        this.mVisibleHeight = r8;
        goto L23
    }

    public int resolveAdjustedSize(int r3, int r4) {
        int r0 = View.MeasureSpec.getMode(r4);
        int r42 = View.MeasureSpec.getSize(r4);
        if (r0 == Integer.MIN_VALUE) goto L10;
        if (r0 != 0) goto L6;
        return r3;
    L6:
        if (r0 == 1073741824) goto L12;
        return r3;
    L12:
        return r42;
    L10:
        return Math.min(r3, r42);
    }

    private void initVideoView() {
        this.mVideoWidth = 0;
        this.mVideoHeight = 0;
        getHolder().addCallback(this.mSHCallback);
        getHolder().setType(3);
        setFocusable(true);
        setFocusableInTouchMode(true);
        this.mCurrentState = State.IDLE;
    }

    private void setVideoURI(Uri r1, Map<String, String> r2) {
        this.mVideoUri = r1;
        this.mVideoWidth = 0;
        this.mVideoHeight = 0;
    }

    private void openVideo() {
        if (this.mSurfaceHolder != null) goto L6;
        return;
    L6:
        if (this.mIsAssetRouse == false) goto L11;
        if (this.mVideoFilePath != null) goto L13;
        return;
    L13:
        pausePlaybackService();
        this.mMediaPlayer = new MediaPlayer();     // Catch: IllegalArgumentException -> L20 IOException -> L23
        this.mMediaPlayer.setOnPreparedListener(this.mPreparedListener);     // Catch: IllegalArgumentException -> L20 IOException -> L23
        this.mMediaPlayer.setOnCompletionListener(this.mCompletionListener);     // Catch: IllegalArgumentException -> L20 IOException -> L23
        this.mMediaPlayer.setOnErrorListener(this.mErrorListener);     // Catch: IllegalArgumentException -> L20 IOException -> L23
        this.mMediaPlayer.setDisplay(this.mSurfaceHolder);     // Catch: IllegalArgumentException -> L20 IOException -> L23
        this.mMediaPlayer.setAudioStreamType(3);     // Catch: IllegalArgumentException -> L20 IOException -> L23
        this.mMediaPlayer.setScreenOnWhilePlaying(true);     // Catch: IllegalArgumentException -> L20 IOException -> L23
        if (this.mIsAssetRouse == false) goto L17;
        AssetFileDescriptor r3 = this.mCocos2dxActivity.getAssets().openFd(this.mVideoFilePath);     // Catch: IllegalArgumentException -> L20 IOException -> L23
        this.mMediaPlayer.setDataSource(r3.getFileDescriptor(), r3.getStartOffset(), r3.getLength());     // Catch: IllegalArgumentException -> L20 IOException -> L23
    L18:
        this.mCurrentState = State.INITIALIZED;     // Catch: IllegalArgumentException -> L20 IOException -> L23
        this.mMediaPlayer.prepare();     // Catch: IllegalArgumentException -> L20 IOException -> L23
        showFirstFrame();     // Catch: IllegalArgumentException -> L20 IOException -> L23
        return;
    L17:
        this.mMediaPlayer.setDataSource(this.mVideoUri.toString());     // Catch: IllegalArgumentException -> L20 IOException -> L23
    L23:
        e = move-exception;
        Log.w(this.TAG, "Unable to open content: " + this.mVideoUri, e);
        this.mCurrentState = State.ERROR;
        this.mErrorListener.onError(this.mMediaPlayer, 1, 0);
        return;
    L20:
        e = move-exception;
        Log.w(this.TAG, "Unable to open content: " + this.mVideoUri, e);
        this.mCurrentState = State.ERROR;
        this.mErrorListener.onError(this.mMediaPlayer, 1, 0);
        return;
    L11:
        if (this.mVideoUri != null) goto L13;
    }

    private void release() {
        MediaPlayer r0 = this.mMediaPlayer;
        if (r0 == null) goto L6;
        r0.release();
        this.mMediaPlayer = null;
        return;
    }

    private void showFirstFrame() {
        this.mMediaPlayer.seekTo(1);
    }

    private void sendEvent(int r3) {
        OnVideoEventListener r0 = this.mOnVideoEventListener;
        if (r0 == null) goto L6;
        r0.onVideoEvent(this.mViewTag, r3);
        return;
    }

    private void pausePlaybackService() {
        Intent r0 = new Intent("com.android.music.musicservicecommand");
        r0.putExtra("command", "pause");
        this.mCocos2dxActivity.sendBroadcast(r0);
    }
}
