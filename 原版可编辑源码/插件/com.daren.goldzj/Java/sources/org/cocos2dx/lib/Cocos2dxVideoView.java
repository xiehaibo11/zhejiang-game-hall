package org.cocos2dx.lib;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.AssetFileDescriptor;
import android.content.res.Resources;
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
        void onVideoEvent(int i, int i2);
    }

    private enum State {
        IDLE,
        ERROR,
        INITIALIZED,
        PREPARING,
        PREPARED,
        STARTED,
        PAUSED,
        STOPPED,
        PLAYBACK_COMPLETED
    }

    public Cocos2dxVideoView(Cocos2dxActivity cocos2dxActivity, int i) {
        super(cocos2dxActivity);
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
        this.mPreparedListener = new MediaPlayer.OnPreparedListener() {
            @Override
            public void onPrepared(MediaPlayer mediaPlayer) {
                Cocos2dxVideoView.this.mVideoWidth = mediaPlayer.getVideoWidth();
                Cocos2dxVideoView.this.mVideoHeight = mediaPlayer.getVideoHeight();
                if (Cocos2dxVideoView.this.mVideoWidth != 0 && Cocos2dxVideoView.this.mVideoHeight != 0) {
                    Cocos2dxVideoView.this.fixSize();
                }
                if (!Cocos2dxVideoView.this.mMetaUpdated) {
                    Cocos2dxVideoView.this.sendEvent(4);
                    Cocos2dxVideoView.this.sendEvent(6);
                    Cocos2dxVideoView.this.mMetaUpdated = true;
                }
                Cocos2dxVideoView.this.mCurrentState = State.PREPARED;
            }
        };
        this.mCompletionListener = new MediaPlayer.OnCompletionListener() {
            @Override
            public void onCompletion(MediaPlayer mediaPlayer) {
                Cocos2dxVideoView.this.mCurrentState = State.PLAYBACK_COMPLETED;
                Cocos2dxVideoView.this.sendEvent(3);
            }
        };
        this.mErrorListener = new MediaPlayer.OnErrorListener() {
            @Override
            public boolean onError(MediaPlayer mediaPlayer, int i2, int i3) {
                int identifier;
                Log.d(Cocos2dxVideoView.this.TAG, "Error: " + i2 + "," + i3);
                Cocos2dxVideoView.this.mCurrentState = State.ERROR;
                if (Cocos2dxVideoView.this.getWindowToken() == null) {
                    return true;
                }
                Resources resources = Cocos2dxVideoView.this.mCocos2dxActivity.getResources();
                if (i2 == 200) {
                    identifier = resources.getIdentifier("VideoView_error_text_invalid_progressive_playback", "string", com.bianqi.wpll.BuildConfig.APPLICATION_ID);
                } else {
                    identifier = resources.getIdentifier("VideoView_error_text_unknown", "string", com.bianqi.wpll.BuildConfig.APPLICATION_ID);
                }
                new AlertDialog.Builder(Cocos2dxVideoView.this.mCocos2dxActivity).setTitle(resources.getString(resources.getIdentifier("VideoView_error_title", "string", com.bianqi.wpll.BuildConfig.APPLICATION_ID))).setMessage(identifier).setPositiveButton(resources.getString(resources.getIdentifier("VideoView_error_button", "string", com.bianqi.wpll.BuildConfig.APPLICATION_ID)), new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialogInterface, int i4) {
                        Cocos2dxVideoView.this.sendEvent(3);
                    }
                }).setCancelable(false).show();
                return true;
            }
        };
        this.mSHCallback = new SurfaceHolder.Callback() {
            @Override
            public void surfaceChanged(SurfaceHolder surfaceHolder, int i2, int i3, int i4) {
            }

            @Override
            public void surfaceCreated(SurfaceHolder surfaceHolder) {
                Cocos2dxVideoView.this.mSurfaceHolder = surfaceHolder;
                Cocos2dxVideoView.this.openVideo();
                if (Cocos2dxVideoView.this.mPositionBeforeRelease > 0) {
                    Cocos2dxVideoView.this.mMediaPlayer.seekTo(Cocos2dxVideoView.this.mPositionBeforeRelease);
                }
            }

            @Override
            public void surfaceDestroyed(SurfaceHolder surfaceHolder) {
                Cocos2dxVideoView.this.mSurfaceHolder = null;
                Cocos2dxVideoView cocos2dxVideoView = Cocos2dxVideoView.this;
                cocos2dxVideoView.mPositionBeforeRelease = cocos2dxVideoView.getCurrentPosition();
                Cocos2dxVideoView.this.release();
            }
        };
        this.mViewTag = i;
        this.mCocos2dxActivity = cocos2dxActivity;
        initVideoView();
    }

    public void setVideoRect(int i, int i2, int i3, int i4) {
        if (this.mViewLeft == i && this.mViewTop == i2 && this.mViewWidth == i3 && this.mViewHeight == i4) {
            return;
        }
        this.mViewLeft = i;
        this.mViewTop = i2;
        this.mViewWidth = i3;
        this.mViewHeight = i4;
        fixSize(this.mViewLeft, this.mViewTop, this.mViewWidth, this.mViewHeight);
    }

    public void setFullScreenEnabled(boolean z) {
        if (this.mFullScreenEnabled != z) {
            this.mFullScreenEnabled = z;
            fixSize();
        }
    }

    public void setVolume(float f) {
        MediaPlayer mediaPlayer = this.mMediaPlayer;
        if (mediaPlayer != null) {
            mediaPlayer.setVolume(f, f);
        }
    }

    public void setKeepRatio(boolean z) {
        this.mKeepRatio = z;
        fixSize();
    }

    public void setVideoURL(String str) {
        this.mIsAssetRouse = false;
        setVideoURI(Uri.parse(str), null);
    }

    public void setVideoFileName(String str) {
        if (str.startsWith(AssetResourceRoot)) {
            str = str.substring(8);
        }
        if (str.startsWith("/")) {
            this.mIsAssetRouse = false;
            setVideoURI(Uri.parse(str), null);
        } else {
            this.mVideoFilePath = str;
            this.mIsAssetRouse = true;
            setVideoURI(Uri.parse(str), null);
        }
    }

    public int getCurrentPosition() {
        if (!(this.mCurrentState == State.ERROR) && !(this.mMediaPlayer == null)) {
            return this.mMediaPlayer.getCurrentPosition();
        }
        return -1;
    }

    public int getDuration() {
        MediaPlayer mediaPlayer;
        if (this.mCurrentState != State.IDLE && this.mCurrentState != State.ERROR && this.mCurrentState != State.INITIALIZED && (mediaPlayer = this.mMediaPlayer) != null) {
            this.mDuration = mediaPlayer.getDuration();
        }
        return this.mDuration;
    }

    public void setVideoViewEventListener(OnVideoEventListener onVideoEventListener) {
        this.mOnVideoEventListener = onVideoEventListener;
    }

    @Override
    public void setVisibility(int i) {
        super.setVisibility(i);
    }

    @Override
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        setMeasuredDimension(this.mVisibleWidth, this.mVisibleHeight);
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        if ((motionEvent.getAction() & 255) == 1) {
            sendEvent(5);
        }
        return true;
    }

    public void stop() {
        if (this.mCurrentState == State.IDLE || this.mCurrentState == State.INITIALIZED || this.mCurrentState == State.ERROR || this.mCurrentState == State.STOPPED || this.mMediaPlayer == null) {
            return;
        }
        this.mCurrentState = State.STOPPED;
        this.mMediaPlayer.stop();
        sendEvent(2);
        try {
            this.mMediaPlayer.prepare();
            showFirstFrame();
        } catch (Exception unused) {
        }
    }

    public void stopPlayback() {
        release();
    }

    public void start() {
        if ((this.mCurrentState == State.PREPARED || this.mCurrentState == State.PAUSED || this.mCurrentState == State.PLAYBACK_COMPLETED) && this.mMediaPlayer != null) {
            this.mCurrentState = State.STARTED;
            this.mMediaPlayer.start();
            sendEvent(0);
        }
    }

    public void pause() {
        if ((this.mCurrentState == State.STARTED || this.mCurrentState == State.PLAYBACK_COMPLETED) && this.mMediaPlayer != null) {
            this.mCurrentState = State.PAUSED;
            this.mMediaPlayer.pause();
            sendEvent(1);
        }
    }

    public void seekTo(int i) {
        MediaPlayer mediaPlayer;
        if (this.mCurrentState == State.IDLE || this.mCurrentState == State.INITIALIZED || this.mCurrentState == State.STOPPED || this.mCurrentState == State.ERROR || (mediaPlayer = this.mMediaPlayer) == null) {
            return;
        }
        mediaPlayer.seekTo(i);
    }

    public void fixSize() {
        if (this.mFullScreenEnabled) {
            this.mFullScreenWidth = this.mCocos2dxActivity.getGLSurfaceView().getWidth();
            this.mFullScreenHeight = this.mCocos2dxActivity.getGLSurfaceView().getHeight();
            fixSize(0, 0, this.mFullScreenWidth, this.mFullScreenHeight);
            return;
        }
        fixSize(this.mViewLeft, this.mViewTop, this.mViewWidth, this.mViewHeight);
    }

    public void fixSize(int i, int i2, int i3, int i4) {
        int i5;
        int i6 = this.mVideoWidth;
        if (i6 == 0 || (i5 = this.mVideoHeight) == 0) {
            this.mVisibleLeft = i;
            this.mVisibleTop = i2;
            this.mVisibleWidth = i3;
            this.mVisibleHeight = i4;
        } else if (i3 != 0 && i4 != 0) {
            if (this.mKeepRatio && !this.mFullScreenEnabled) {
                if (i6 * i4 > i3 * i5) {
                    this.mVisibleWidth = i3;
                    this.mVisibleHeight = (i5 * i3) / i6;
                } else if (i6 * i4 < i3 * i5) {
                    this.mVisibleWidth = (i6 * i4) / i5;
                    this.mVisibleHeight = i4;
                }
                this.mVisibleLeft = i + ((i3 - this.mVisibleWidth) / 2);
                this.mVisibleTop = i2 + ((i4 - this.mVisibleHeight) / 2);
            } else {
                this.mVisibleLeft = i;
                this.mVisibleTop = i2;
                this.mVisibleWidth = i3;
                this.mVisibleHeight = i4;
            }
        } else {
            this.mVisibleLeft = i;
            this.mVisibleTop = i2;
            this.mVisibleWidth = this.mVideoWidth;
            this.mVisibleHeight = this.mVideoHeight;
        }
        getHolder().setFixedSize(this.mVisibleWidth, this.mVisibleHeight);
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
        layoutParams.leftMargin = this.mVisibleLeft;
        layoutParams.topMargin = this.mVisibleTop;
        setLayoutParams(layoutParams);
    }

    public int resolveAdjustedSize(int i, int i2) {
        int mode = View.MeasureSpec.getMode(i2);
        int size = View.MeasureSpec.getSize(i2);
        if (mode != Integer.MIN_VALUE) {
            return (mode == 0 || mode != 1073741824) ? i : size;
        }
        return Math.min(i, size);
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

    private void setVideoURI(Uri uri, Map<String, String> map) {
        this.mVideoUri = uri;
        this.mVideoWidth = 0;
        this.mVideoHeight = 0;
    }

    private void openVideo() {
        if (this.mSurfaceHolder == null) {
            return;
        }
        if (this.mIsAssetRouse) {
            if (this.mVideoFilePath == null) {
                return;
            }
        } else if (this.mVideoUri == null) {
            return;
        }
        pausePlaybackService();
        try {
            this.mMediaPlayer = new MediaPlayer();
            this.mMediaPlayer.setOnPreparedListener(this.mPreparedListener);
            this.mMediaPlayer.setOnCompletionListener(this.mCompletionListener);
            this.mMediaPlayer.setOnErrorListener(this.mErrorListener);
            this.mMediaPlayer.setDisplay(this.mSurfaceHolder);
            this.mMediaPlayer.setAudioStreamType(3);
            this.mMediaPlayer.setScreenOnWhilePlaying(true);
            if (this.mIsAssetRouse) {
                AssetFileDescriptor assetFileDescriptorOpenFd = this.mCocos2dxActivity.getAssets().openFd(this.mVideoFilePath);
                this.mMediaPlayer.setDataSource(assetFileDescriptorOpenFd.getFileDescriptor(), assetFileDescriptorOpenFd.getStartOffset(), assetFileDescriptorOpenFd.getLength());
            } else {
                this.mMediaPlayer.setDataSource(this.mVideoUri.toString());
            }
            this.mCurrentState = State.INITIALIZED;
            this.mMediaPlayer.prepare();
            showFirstFrame();
        } catch (IOException e) {
            Log.w(this.TAG, "Unable to open content: " + this.mVideoUri, e);
            this.mCurrentState = State.ERROR;
            this.mErrorListener.onError(this.mMediaPlayer, 1, 0);
        } catch (IllegalArgumentException e2) {
            Log.w(this.TAG, "Unable to open content: " + this.mVideoUri, e2);
            this.mCurrentState = State.ERROR;
            this.mErrorListener.onError(this.mMediaPlayer, 1, 0);
        }
    }

    private void release() {
        MediaPlayer mediaPlayer = this.mMediaPlayer;
        if (mediaPlayer != null) {
            mediaPlayer.release();
            this.mMediaPlayer = null;
        }
    }

    private void showFirstFrame() {
        this.mMediaPlayer.seekTo(1);
    }

    private void sendEvent(int i) {
        OnVideoEventListener onVideoEventListener = this.mOnVideoEventListener;
        if (onVideoEventListener != null) {
            onVideoEventListener.onVideoEvent(this.mViewTag, i);
        }
    }

    private void pausePlaybackService() {
        Intent intent = new Intent("com.android.music.musicservicecommand");
        intent.putExtra("command", "pause");
        this.mCocos2dxActivity.sendBroadcast(intent);
    }
}
