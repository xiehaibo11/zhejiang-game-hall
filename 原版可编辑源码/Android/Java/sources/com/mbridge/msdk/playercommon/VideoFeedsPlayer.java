package com.mbridge.msdk.playercommon;

import android.content.Context;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.view.SurfaceHolder;
import android.view.View;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl;
import com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory;
import com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;
import com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerFactory;
import com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters;
import com.mbridge.msdk.playercommon.exoplayer2.Player;
import com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer;
import com.mbridge.msdk.playercommon.exoplayer2.Timeline;
import com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource;
import com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource;
import com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray;
import com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector;
import com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray;
import com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultDataSourceFactory;
import java.lang.ref.WeakReference;
import java.util.Timer;
import java.util.TimerTask;

public class VideoFeedsPlayer implements Player.EventListener {
    public static final int INTERVAL_TIME_PLAY_TIME_CD_THREAD = 1000;
    public static final String TAG = "VideoFeedsPlayer";
    private SimpleExoPlayer exoPlayer;
    private Timer mBufferTimeoutTimer;
    private long mCurrentPosition;
    private View mFullScreenLoadingView;
    private volatile VideoPlayerStatusListener mInnerVFPLisener;
    private boolean mIsSilent;
    private WeakReference<View> mLoadingView;
    private volatile VideoPlayerStatusListener mOutterVFListener;
    private String mPlayUrl;
    private SurfaceHolder mSurfaceHolder;
    private MediaSource mediaSource;
    private boolean mIsComplete = false;
    private boolean mIsPlaying = false;
    private boolean mHasPrepare = false;
    private boolean mIsBuffering = false;
    private boolean mIsNeedBufferingTimeout = false;
    private boolean mIsFrontDesk = true;
    private int mBufferTime = 5;
    private Object mLock = new Object();
    private boolean isStart = false;
    private final Handler mHandler = new Handler(Looper.getMainLooper()) {
        @Override
        public void handleMessage(Message message) {
            super.handleMessage(message);
        }
    };
    private Runnable playProgressRunnable = new Runnable() {
        @Override
        public void run() {
            long duration;
            try {
                if (VideoFeedsPlayer.this.exoPlayer == null || !VideoFeedsPlayer.this.exoPlayerIsPlaying()) {
                    return;
                }
                VideoFeedsPlayer.this.mCurrentPosition = VideoFeedsPlayer.this.exoPlayer.getCurrentPosition();
                float f = VideoFeedsPlayer.this.mCurrentPosition % 1000;
                int iRound = Math.round(VideoFeedsPlayer.this.mCurrentPosition / 1000.0f);
                z.b("VideoFeedsPlayer", "currentPosition:" + iRound + " mCurrentPosition:" + VideoFeedsPlayer.this.mCurrentPosition);
                if (VideoFeedsPlayer.this.exoPlayer == null || VideoFeedsPlayer.this.exoPlayer.getDuration() <= 0) {
                    duration = 0;
                } else {
                    duration = VideoFeedsPlayer.this.exoPlayer.getDuration() / 1000;
                    if (f > 0.0f && f < 500.0f) {
                        iRound++;
                    }
                }
                if (iRound >= 0 && duration > 0 && iRound < 1 + duration) {
                    VideoFeedsPlayer.this.postOnPlayProgressOnMainThread(iRound, (int) duration);
                }
                VideoFeedsPlayer.this.mIsComplete = false;
                if (!VideoFeedsPlayer.this.mIsBuffering) {
                    VideoFeedsPlayer.this.hideLoading();
                }
                VideoFeedsPlayer.this.mHandler.postDelayed(this, 1000L);
            } catch (Exception e) {
                z.d("VideoFeedsPlayer", e.getMessage());
            }
        }
    };

    public void onBufferingUpdate(int i) {
    }

    @Override
    public void onLoadingChanged(boolean z) {
    }

    @Override
    public void onPositionDiscontinuity(int i) {
    }

    @Override
    public void onRepeatModeChanged(int i) {
    }

    @Override
    public void onSeekProcessed() {
    }

    @Override
    public void onShuffleModeEnabledChanged(boolean z) {
    }

    @Override
    public void onTimelineChanged(Timeline timeline, Object obj, int i) {
    }

    @Override
    public void onTracksChanged(TrackGroupArray trackGroupArray, TrackSelectionArray trackSelectionArray) {
    }

    public boolean initPlayer(Context context, View view, String str, VideoPlayerStatusListener videoPlayerStatusListener) {
        try {
            if (view == null) {
                z.b("VideoFeedsPlayer", "loadingView is NULL");
                postOnPlayErrorOnMainThread("MediaPlayer init error");
                return false;
            }
            this.mOutterVFListener = videoPlayerStatusListener;
            this.mLoadingView = new WeakReference<>(view);
            this.exoPlayer = ExoPlayerFactory.newSimpleInstance(new DefaultRenderersFactory(context), new DefaultTrackSelector(), new DefaultLoadControl());
            this.mediaSource = new ExtractorMediaSource.Factory(new DefaultDataSourceFactory(context, "MBridge_ExoPlayer")).createMediaSource(Uri.parse(str));
            this.exoPlayer.setRepeatMode(0);
            this.exoPlayer.prepare(this.mediaSource);
            this.exoPlayer.addListener(this);
            return true;
        } catch (Throwable th) {
            z.d("VideoFeedsPlayer", th.getMessage());
            postOnPlayErrorOnMainThread(th.toString());
            return false;
        }
    }

    public void setDisplay(SurfaceHolder surfaceHolder) {
        try {
            this.exoPlayer.getVideoComponent().setVideoSurfaceHolder(surfaceHolder);
        } catch (Throwable th) {
            z.d("VideoFeedsPlayer", th.getMessage());
            postOnPlayErrorOnMainThread(th.toString());
        }
    }

    public void play(String str, int i) {
        try {
            synchronized (this.mLock) {
                z.d("VideoFeedsPlayer", "Start Play currentionPosition:" + this.mCurrentPosition);
                if (i > 0) {
                    this.mCurrentPosition = i;
                }
                if (TextUtils.isEmpty(str)) {
                    postOnPlayErrorOnMainThread("play url is null");
                    return;
                }
                this.mPlayUrl = str;
                this.mHasPrepare = false;
                this.mIsFrontDesk = true;
                showLoading();
                setDataSource();
                z.b("VideoFeedsPlayer", "mPlayUrl:" + this.mPlayUrl);
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
            releasePlayer();
            hideLoading();
            postOnPlayErrorOnMainThread("mediaplayer cannot play");
        }
    }

    public void play(String str, SurfaceHolder surfaceHolder) {
        try {
            synchronized (this.mLock) {
                if (TextUtils.isEmpty(str)) {
                    postOnPlayErrorOnMainThread("play url is null");
                    return;
                }
                this.mPlayUrl = str;
                this.mHasPrepare = false;
                this.mIsFrontDesk = true;
                this.mSurfaceHolder = surfaceHolder;
                showLoading();
                setDataSource();
                z.b("VideoFeedsPlayer", "mPlayUrl:" + this.mPlayUrl);
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
            releasePlayer();
            hideLoading();
            postOnPlayErrorOnMainThread("mediaplayer cannot play");
        }
    }

    private void startPlayProgressTimer() {
        try {
            cancelPlayProgressTimer();
            this.mHandler.post(this.playProgressRunnable);
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    private void cancelPlayProgressTimer() {
        try {
            this.mHandler.removeCallbacks(this.playProgressRunnable);
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    private void cancelBufferTimeoutTimer() {
        try {
            if (this.mBufferTimeoutTimer != null) {
                this.mBufferTimeoutTimer.cancel();
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    private void startBufferIngTimer(final String str) {
        if (!this.mIsNeedBufferingTimeout) {
            z.d("VideoFeedsPlayer", "不需要缓冲超时功能");
            return;
        }
        cancelBufferTimeoutTimer();
        Timer timer = new Timer();
        this.mBufferTimeoutTimer = timer;
        timer.schedule(new TimerTask() {
            @Override
            public void run() {
                try {
                    if (!VideoFeedsPlayer.this.mHasPrepare || VideoFeedsPlayer.this.mIsBuffering) {
                        z.d("VideoFeedsPlayer", "缓冲超时");
                        VideoFeedsPlayer.this.postOnBufferingStarOnMainThread(str);
                    }
                } catch (Exception e) {
                    z.d("VideoFeedsPlayer", e.getMessage());
                }
            }
        }, this.mBufferTime * 1000);
    }

    public void initBufferIngParam(int i) {
        if (i > 0) {
            this.mBufferTime = i;
        }
        this.mIsNeedBufferingTimeout = true;
        z.b("VideoFeedsPlayer", "mIsNeedBufferingTimeout:" + this.mIsNeedBufferingTimeout + "  mMaxBufferTime:" + this.mBufferTime);
    }

    public void onCompletion() {
        try {
            this.mIsComplete = true;
            this.mIsPlaying = false;
            this.mCurrentPosition = 0L;
            hideLoading();
            postOnPlayCompletedOnMainThread();
            z.b("VideoFeedsPlayer", "======onCompletion");
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public void onPrepared() {
        try {
            z.b("VideoFeedsPlayer", "onPrepared:" + this.mHasPrepare);
            this.mHasPrepare = true;
            if (this.mIsFrontDesk) {
                if (this.mIsFrontDesk) {
                    hideLoading();
                    if (this.exoPlayer != null) {
                        this.mIsPlaying = true;
                        if (!this.isStart) {
                            postOnPlayStartOnMainThread(this.exoPlayer.getDuration() / 1000);
                            z.b("VideoFeedsPlayer", "onPlayStarted()，getCurrentPosition:" + this.exoPlayer.getCurrentPosition());
                            this.isStart = true;
                        }
                    }
                    postOnBufferinEndOnMainThread();
                    startPlayProgressTimer();
                    z.b("VideoFeedsPlayer", "onPrepare mCurrentPosition:" + this.mCurrentPosition + " onPrepare mHasPrepare：" + this.mHasPrepare);
                    return;
                }
                return;
            }
            z.d("VideoFeedsPlayer", "At background, Do not process");
            if (this.exoPlayer != null) {
                pause();
            }
        } catch (Throwable th) {
            z.d("VideoFeedsPlayer", th.getMessage());
        }
    }

    public void showLoading() {
        try {
            if (this.mHandler == null) {
                return;
            }
            this.mHandler.post(new Runnable() {
                @Override
                public void run() {
                    if (VideoFeedsPlayer.this.mFullScreenLoadingView != null) {
                        VideoFeedsPlayer.this.mFullScreenLoadingView.setVisibility(0);
                    }
                }
            });
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    private void hideLoading() {
        try {
            if (this.mHandler == null) {
                return;
            }
            this.mHandler.post(new Runnable() {
                @Override
                public void run() {
                    if (VideoFeedsPlayer.this.mLoadingView != null && VideoFeedsPlayer.this.mLoadingView.get() != null) {
                        ((View) VideoFeedsPlayer.this.mLoadingView.get()).setVisibility(8);
                    }
                    if (VideoFeedsPlayer.this.mFullScreenLoadingView != null) {
                        VideoFeedsPlayer.this.mFullScreenLoadingView.setVisibility(8);
                    }
                }
            });
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    private void postOnPlayProgressOnMainThread(final int i, final int i2) {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onPlayProgress(i, i2);
                            } catch (Exception e) {
                                z.d("VideoFeedsPlayer", e.getMessage());
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onPlayProgress(i, i2);
                            } catch (Exception e2) {
                                z.d("VideoFeedsPlayer", e2.getMessage());
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    private void postOnBufferingStarOnMainThread(final String str) {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onBufferingStart(str);
                            } catch (Exception e) {
                                z.d("VideoFeedsPlayer", e.getMessage());
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onBufferingStart(str);
                            } catch (Exception e2) {
                                z.d("VideoFeedsPlayer", e2.getMessage());
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    private void postOnBufferinEndOnMainThread() {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onBufferingEnd();
                            } catch (Exception e) {
                                z.d("VideoFeedsPlayer", e.getMessage());
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onBufferingEnd();
                            } catch (Exception e2) {
                                z.d("VideoFeedsPlayer", e2.getMessage());
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    private void postOnPlayStartOnMainThread(final long j) {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        int i = (int) j;
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onPlayStarted(i);
                            } catch (Exception e) {
                                z.d("VideoFeedsPlayer", e.getMessage());
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onPlayStarted(i);
                            } catch (Exception e2) {
                                z.d("VideoFeedsPlayer", e2.getMessage());
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    private void postOnPlayErrorOnMainThread(final String str) {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onPlayError(str);
                            } catch (Exception e) {
                                z.d("VideoFeedsPlayer", e.getMessage());
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onPlayError(str);
                            } catch (Exception e2) {
                                z.d("VideoFeedsPlayer", e2.getMessage());
                            }
                        }
                    }
                });
            }
            e.a(94, this.mPlayUrl, str);
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    private void postOnPlaySetDataSourceError2MainThread(final String str) {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onPlaySetDataSourceError(str);
                            } catch (Exception e) {
                                z.d("VideoFeedsPlayer", e.getMessage());
                            }
                        }
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onPlaySetDataSourceError(str);
                            } catch (Exception e2) {
                                z.d("VideoFeedsPlayer", e2.getMessage());
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    private void postOnPlayCompletedOnMainThread() {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onPlayCompleted();
                            } catch (Exception e) {
                                z.d("VideoFeedsPlayer", e.getMessage());
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onPlayCompleted();
                            } catch (Exception e2) {
                                z.d("VideoFeedsPlayer", e2.getMessage());
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public void pause() {
        try {
            if (this.mHasPrepare && this.exoPlayer != null && exoPlayerIsPlaying()) {
                z.b("VideoFeedsPlayer", "pause isPalying:" + exoPlayerIsPlaying() + " mIsPlaying:" + this.mIsPlaying);
                hideLoading();
                this.exoPlayer.setPlayWhenReady(false);
                this.mIsPlaying = false;
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public void prepare() {
        try {
            if (this.mHasPrepare || this.exoPlayer == null) {
                return;
            }
            this.exoPlayer.prepare(this.mediaSource);
            this.mHasPrepare = true;
            this.mIsPlaying = false;
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public void stop() {
        try {
            if (this.mHasPrepare && this.exoPlayer != null && exoPlayerIsPlaying()) {
                hideLoading();
                this.exoPlayer.stop();
                this.mHasPrepare = false;
                this.mIsPlaying = false;
                this.mIsComplete = true;
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public void start(boolean z) {
        try {
            if (!this.mHasPrepare) {
                z.b("VideoFeedsPlayer", "!mHasPrepare");
                return;
            }
            if (this.exoPlayer == null || exoPlayerIsPlaying()) {
                return;
            }
            showLoading();
            play();
            this.mIsPlaying = true;
            if (z) {
                startPlayProgressTimer();
            }
            z.b("VideoFeedsPlayer", "start");
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public void start(int i) {
        try {
            if (this.mHasPrepare) {
                if (this.exoPlayer != null && !exoPlayerIsPlaying()) {
                    if (i > 0) {
                        this.exoPlayer.seekTo(i);
                        play();
                    } else {
                        play();
                        this.mIsPlaying = true;
                        z.b("VideoFeedsPlayer", "=========start 指定进度");
                    }
                }
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public void justSeekTo(int i) {
        try {
            this.mCurrentPosition = i;
            if (this.mHasPrepare) {
                return;
            }
            z.a("VideoFeedsPlayer", "seekTo return mHasPrepare false");
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public void seekTo(int i) {
        long j = i;
        try {
            this.mCurrentPosition = j;
            if (!this.mHasPrepare) {
                z.a("VideoFeedsPlayer", "seekTo return mHasPrepare false");
            } else if (this.exoPlayer != null) {
                this.exoPlayer.seekTo(j);
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public void setDataSource() {
        try {
            z.b("VideoFeedsPlayer", "setDataSource");
            if (this.exoPlayer != null) {
                if (this.mSurfaceHolder != null) {
                    setDisplay(this.mSurfaceHolder);
                }
                this.mHasPrepare = false;
                this.exoPlayer.prepare(this.mediaSource);
                this.exoPlayer.setPlayWhenReady(true);
                startBufferIngTimer("mediaplayer prepare timeout");
            }
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
            hideLoading();
            postOnPlayErrorOnMainThread("illegal video address");
            postOnPlaySetDataSourceError2MainThread("illegal video address");
        }
    }

    public void setSelfVideoFeedsPlayerListener(VideoPlayerStatusListener videoPlayerStatusListener) {
        this.mInnerVFPLisener = videoPlayerStatusListener;
    }

    public void releasePlayer() {
        try {
            z.b("VideoFeedsPlayer", "release");
            cancelPlayProgressTimer();
            cancelBufferTimeoutTimer();
            if (this.exoPlayer != null) {
                stop();
                this.exoPlayer.removeListener(this);
                this.exoPlayer.release();
                this.mInnerVFPLisener = null;
                this.mOutterVFListener = null;
            }
            hideLoading();
        } catch (Throwable th) {
            z.d("VideoFeedsPlayer", th.getMessage());
        }
    }

    public void closeSound() {
        try {
            if (this.exoPlayer == null) {
                return;
            }
            this.exoPlayer.setVolume(0.0f);
            this.mIsSilent = true;
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public void openSound() {
        try {
            if (this.exoPlayer == null) {
                return;
            }
            this.exoPlayer.setVolume(1.0f);
            this.mIsSilent = false;
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public int getCurPosition() {
        return (int) this.mCurrentPosition;
    }

    public boolean isPlayIng() {
        try {
            if (this.exoPlayer != null) {
                return exoPlayerIsPlaying();
            }
            return false;
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
            return false;
        }
    }

    public boolean onError(int i, String str) {
        try {
            z.d("VideoFeedsPlayer", "onError what: " + i + " extra: " + str);
            hideLoading();
            if (!this.mIsFrontDesk && "MIX 3".equalsIgnoreCase(v.x()) && v.z().equalsIgnoreCase("Xiaomi")) {
                return true;
            }
            this.mHasPrepare = false;
            postOnPlayErrorOnMainThread(str);
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
        return true;
    }

    public void setVideoFeedsPlayerListener(VideoPlayerStatusListener videoPlayerStatusListener) {
        this.mOutterVFListener = videoPlayerStatusListener;
    }

    public boolean hasPrepare() {
        return this.mHasPrepare;
    }

    public void setIsFrontDesk(boolean z) {
        try {
            this.mIsFrontDesk = z;
            StringBuilder sb = new StringBuilder();
            sb.append("isFrontDesk: ");
            sb.append(z ? "frontStage" : "backStage");
            z.d("VideoFeedsPlayer", sb.toString());
        } catch (Exception e) {
            z.d("VideoFeedsPlayer", e.getMessage());
        }
    }

    public boolean isComplete() {
        return this.mIsComplete;
    }

    public void setIsComplete(boolean z) {
        this.mIsComplete = z;
    }

    public void setFullScreenLoadingView(View view) {
        if (view != null) {
            try {
                this.mFullScreenLoadingView = view;
            } catch (Exception e) {
                z.d("VideoFeedsPlayer", e.getMessage());
            }
        }
    }

    public boolean fullScreenLoadingViewisVisible() {
        try {
            if (this.mFullScreenLoadingView != null) {
                return this.mFullScreenLoadingView.getVisibility() == 0;
            }
            return false;
        } catch (Throwable th) {
            z.d("VideoFeedsPlayer", th.getMessage());
            return false;
        }
    }

    public boolean halfLoadingViewisVisible() {
        try {
            if (this.mLoadingView == null || this.mLoadingView.get() == null) {
                return false;
            }
            return this.mLoadingView.get().getVisibility() == 0;
        } catch (Throwable th) {
            z.d("VideoFeedsPlayer", th.getMessage());
            return false;
        }
    }

    public boolean isSilent() {
        return this.mIsSilent;
    }

    public int getDuration() {
        SimpleExoPlayer simpleExoPlayer = this.exoPlayer;
        if (simpleExoPlayer == null) {
            return 0;
        }
        simpleExoPlayer.getDuration();
        return 0;
    }

    public void setVolume(float f, float f2) {
        try {
            if (this.exoPlayer != null) {
                this.exoPlayer.setVolume(f2);
            }
        } catch (Throwable th) {
            z.d("VideoFeedsPlayer", th.getMessage());
        }
    }

    public void setPlaybackParams(float f) {
        try {
            if (exoPlayerIsPlaying()) {
                this.exoPlayer.setPlaybackParameters(new PlaybackParameters(f));
            } else {
                this.exoPlayer.setPlaybackParameters(new PlaybackParameters(f));
                this.exoPlayer.stop();
            }
        } catch (Throwable th) {
            z.d("VideoFeedsPlayer", th.getMessage());
        }
    }

    public boolean exoPlayerIsPlaying() {
        return this.exoPlayer.getPlaybackState() == 3 && this.exoPlayer.getPlayWhenReady();
    }

    public void play() {
        this.exoPlayer.setPlayWhenReady(true);
    }

    @Override
    public void onPlayerStateChanged(boolean z, int i) {
        z.d("VideoFeedsPlayer", "onPlaybackStateChanged : " + i);
        if (i == 1) {
            z.d("VideoFeedsPlayer", "onPlaybackStateChanged : IDLE");
            return;
        }
        if (i == 2) {
            z.d("VideoFeedsPlayer", "onPlaybackStateChanged : Buffering");
            this.mIsBuffering = true;
            showLoading();
            startBufferIngTimer("play buffering tiemout");
            return;
        }
        if (i != 3) {
            if (i != 4) {
                return;
            }
            z.d("VideoFeedsPlayer", "onPlaybackStateChanged : Ended : PLAY ENDED");
            cancelPlayProgressTimer();
            onCompletion();
            return;
        }
        z.d("VideoFeedsPlayer", "onPlaybackStateChanged : READY");
        this.mIsBuffering = false;
        hideLoading();
        postOnBufferinEndOnMainThread();
        onPrepared();
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0016  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onPlayerError(ExoPlaybackException exoPlaybackException) {
        String message;
        if (exoPlaybackException == null) {
            message = "Play error and ExoPlayer have not message.";
        } else {
            int i = exoPlaybackException.type;
            if (i == 0) {
                message = "Play error, because have a SourceException.";
            } else if (i == 1) {
                message = "Play error, because have a RendererException.";
            } else if (i == 2) {
                message = "Play error, because have a UnexpectedException.";
            }
        }
        if (exoPlaybackException.getCause() != null && !TextUtils.isEmpty(exoPlaybackException.getCause().getMessage())) {
            message = exoPlaybackException.getCause().getMessage();
        }
        z.d("VideoFeedsPlayer", "onPlayerError : " + message);
        onError(exoPlaybackException.type, message);
    }

    @Override
    public void onPlaybackParametersChanged(PlaybackParameters playbackParameters) {
        z.d("VideoFeedsPlayer", "onPlaybackParametersChanged : " + playbackParameters.speed);
    }
}
