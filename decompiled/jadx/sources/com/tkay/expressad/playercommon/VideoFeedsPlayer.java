package com.tkay.expressad.playercommon;

import android.content.Context;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.view.SurfaceHolder;
import android.view.View;
import com.tkay.core.common.a.j;
import com.tkay.core.common.b.m;
import com.tkay.expressad.exoplayer.ad;
import com.tkay.expressad.exoplayer.ae;
import com.tkay.expressad.exoplayer.d;
import com.tkay.expressad.exoplayer.f;
import com.tkay.expressad.exoplayer.h.af;
import com.tkay.expressad.exoplayer.h.o;
import com.tkay.expressad.exoplayer.h.s;
import com.tkay.expressad.exoplayer.i;
import com.tkay.expressad.exoplayer.i.c;
import com.tkay.expressad.exoplayer.i.g;
import com.tkay.expressad.exoplayer.v;
import com.tkay.expressad.exoplayer.w;
import java.io.File;
import java.lang.ref.WeakReference;
import java.util.Timer;
import java.util.TimerTask;

/* JADX INFO: loaded from: classes3.dex */
public class VideoFeedsPlayer implements w.c {
    public static final int INTERVAL_TIME_PLAY_TIME_CD_THREAD = 1000;
    public static final String TAG = "VideoFeedsPlayer";
    private ad exoPlayer;
    private Timer mBufferTimeoutTimer;
    private Context mContext;
    private long mCurrentPosition;
    private View mFullScreenLoadingView;
    private volatile VideoPlayerStatusListener mInnerVFPLisener;
    private boolean mIsSilent;
    private WeakReference<View> mLoadingView;
    private volatile VideoPlayerStatusListener mOutterVFListener;
    String mPlayLocalVideoFileErrorStr;
    private String mPlayUrl;
    private SurfaceHolder mSurfaceHolder;
    private int mVideoReadyRate;
    private s mediaSource;
    private boolean mIsComplete = false;
    private boolean mIsPlaying = false;
    private boolean mHasPrepare = false;
    private boolean mIsBuffering = false;
    private boolean mIsNeedBufferingTimeout = false;
    private boolean mIsFrontDesk = true;
    private int mBufferTime = 5;
    private Object mLock = new Object();
    private boolean isStart = false;
    private final Handler mHandler = new Handler(Looper.getMainLooper()) { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            super.handleMessage(message);
        }
    };
    private boolean needPrepareVideoPlayAgain = false;
    private String mNetVideoUrl = "";
    private String mMediaSourceUrl = "";
    private Runnable playProgressRunnable = new Runnable() { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.2
        @Override // java.lang.Runnable
        public void run() {
            long jS;
            try {
                if (VideoFeedsPlayer.this.exoPlayer == null || !VideoFeedsPlayer.this.exoPlayerIsPlaying()) {
                    return;
                }
                VideoFeedsPlayer.this.mCurrentPosition = VideoFeedsPlayer.this.exoPlayer.t();
                float f = VideoFeedsPlayer.this.mCurrentPosition % 1000;
                int iRound = Math.round(VideoFeedsPlayer.this.mCurrentPosition / 1000.0f);
                StringBuilder sb = new StringBuilder("currentPosition:");
                sb.append(iRound);
                sb.append(" mCurrentPosition:");
                sb.append(VideoFeedsPlayer.this.mCurrentPosition);
                if (VideoFeedsPlayer.this.exoPlayer == null || VideoFeedsPlayer.this.exoPlayer.s() <= 0) {
                    jS = 0;
                } else {
                    jS = VideoFeedsPlayer.this.exoPlayer.s() / 1000;
                    if (f > 0.0f && f < 500.0f) {
                        iRound++;
                    }
                }
                if (iRound >= 0 && jS > 0 && iRound < 1 + jS) {
                    VideoFeedsPlayer.this.postOnPlayProgressOnMainThread(iRound, (int) jS);
                }
                VideoFeedsPlayer.this.mIsComplete = false;
                if (!VideoFeedsPlayer.this.mIsBuffering) {
                    VideoFeedsPlayer.this.hideLoading();
                }
                VideoFeedsPlayer.this.mHandler.postDelayed(this, 1000L);
            } catch (Exception e) {
                e.getMessage();
            }
        }
    };

    public void onBufferingUpdate(int i) {
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public void onLoadingChanged(boolean z) {
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public void onPositionDiscontinuity(int i) {
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public void onRepeatModeChanged(int i) {
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public void onSeekProcessed() {
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public void onShuffleModeEnabledChanged(boolean z) {
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public void onTimelineChanged(ae aeVar, Object obj, int i) {
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public void onTracksChanged(af afVar, g gVar) {
    }

    public boolean initPlayer(Context context, View view, String str, String str2, int i, VideoPlayerStatusListener videoPlayerStatusListener) {
        try {
            if (view == null) {
                postOnPlayErrorOnMainThread("MediaPlayer init error");
                return false;
            }
            this.needPrepareVideoPlayAgain = !TextUtils.equals(str, str2);
            this.mMediaSourceUrl = str;
            this.mNetVideoUrl = str2;
            this.mVideoReadyRate = i;
            this.mContext = context;
            this.mOutterVFListener = videoPlayerStatusListener;
            this.mLoadingView = new WeakReference<>(view);
            this.exoPlayer = i.a(new f(context), new c(), new d());
            this.mediaSource = new o.c(new com.tkay.expressad.exoplayer.j.o(context, "TY_ExoPlayer")).b(Uri.parse(str));
            this.exoPlayer.a(0);
            this.exoPlayer.a(this.mediaSource);
            this.exoPlayer.a(this);
            return true;
        } catch (Throwable th) {
            th.getMessage();
            postOnPlayErrorOnMainThread(th.toString());
            return false;
        }
    }

    public void setDisplay(SurfaceHolder surfaceHolder) {
        try {
            this.exoPlayer.a(surfaceHolder);
        } catch (Throwable th) {
            th.getMessage();
            postOnPlayErrorOnMainThread(th.toString());
        }
    }

    public void play(String str, int i) {
        try {
            synchronized (this.mLock) {
                new StringBuilder("Start Play currentionPosition:").append(this.mCurrentPosition);
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
                new StringBuilder("mPlayUrl:").append(this.mPlayUrl);
            }
        } catch (Exception e) {
            e.getMessage();
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
                new StringBuilder("mPlayUrl:").append(this.mPlayUrl);
            }
        } catch (Exception e) {
            e.getMessage();
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
            e.getMessage();
        }
    }

    private void cancelPlayProgressTimer() {
        try {
            this.mHandler.removeCallbacks(this.playProgressRunnable);
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private void cancelBufferTimeoutTimer() {
        try {
            if (this.mBufferTimeoutTimer != null) {
                this.mBufferTimeoutTimer.cancel();
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private void startBufferIngTimer(final String str) {
        if (this.mIsNeedBufferingTimeout) {
            cancelBufferTimeoutTimer();
            Timer timer = new Timer();
            this.mBufferTimeoutTimer = timer;
            timer.schedule(new TimerTask() { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.3
                @Override // java.util.TimerTask, java.lang.Runnable
                public void run() {
                    try {
                        if (!VideoFeedsPlayer.this.mHasPrepare || VideoFeedsPlayer.this.mIsBuffering) {
                            VideoFeedsPlayer.this.postOnBufferingStarOnMainThread(str);
                        }
                    } catch (Exception e) {
                        e.getMessage();
                    }
                }
            }, this.mBufferTime * 1000);
        }
    }

    public void initBufferIngParam(int i) {
        if (i > 0) {
            this.mBufferTime = i;
        }
        this.mIsNeedBufferingTimeout = true;
        StringBuilder sb = new StringBuilder("mIsNeedBufferingTimeout:");
        sb.append(this.mIsNeedBufferingTimeout);
        sb.append("  mMaxBufferTime:");
        sb.append(this.mBufferTime);
    }

    public void onCompletion() {
        try {
            this.mIsComplete = true;
            this.mIsPlaying = false;
            this.mCurrentPosition = 0L;
            hideLoading();
            postOnPlayCompletedOnMainThread();
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void onPrepared() {
        try {
            new StringBuilder("onPrepared:").append(this.mHasPrepare);
            this.mHasPrepare = true;
            if (!this.mIsFrontDesk && this.exoPlayer != null) {
                pause();
            }
            if (this.mIsFrontDesk && this.mIsFrontDesk) {
                hideLoading();
                this.mHasPrepare = true;
                if (this.exoPlayer != null) {
                    this.mIsPlaying = true;
                    if (!this.isStart) {
                        postOnPlayStartOnMainThread(this.exoPlayer.s() / 1000);
                        new StringBuilder("onPlayStarted()，getCurrentPosition:").append(this.exoPlayer.t());
                        this.isStart = true;
                    }
                }
                postOnBufferinEndOnMainThread();
                startPlayProgressTimer();
                StringBuilder sb = new StringBuilder("onPrepare mCurrentPosition:");
                sb.append(this.mCurrentPosition);
                sb.append(" onPrepare mHasPrepare:");
                sb.append(this.mHasPrepare);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public void showLoading() {
        try {
            if (this.mHandler == null) {
                return;
            }
            this.mHandler.post(new Runnable() { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.4
                @Override // java.lang.Runnable
                public void run() {
                    if (VideoFeedsPlayer.this.mFullScreenLoadingView != null) {
                        VideoFeedsPlayer.this.mFullScreenLoadingView.setVisibility(0);
                    }
                }
            });
        } catch (Exception e) {
            e.getMessage();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void hideLoading() {
        try {
            if (this.mHandler == null) {
                return;
            }
            this.mHandler.post(new Runnable() { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.5
                @Override // java.lang.Runnable
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
            e.getMessage();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void postOnPlayProgressOnMainThread(final int i, final int i2) {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.6
                    @Override // java.lang.Runnable
                    public void run() {
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onPlayProgress(i, i2);
                            } catch (Exception e) {
                                e.getMessage();
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onPlayProgress(i, i2);
                            } catch (Exception e2) {
                                e2.getMessage();
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void postOnBufferingStarOnMainThread(final String str) {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.7
                    @Override // java.lang.Runnable
                    public void run() {
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onBufferingStart(str);
                            } catch (Exception e) {
                                e.getMessage();
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onBufferingStart(str);
                            } catch (Exception e2) {
                                e2.getMessage();
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private void postOnBufferinEndOnMainThread() {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.8
                    @Override // java.lang.Runnable
                    public void run() {
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onBufferingEnd();
                            } catch (Exception e) {
                                e.getMessage();
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onBufferingEnd();
                            } catch (Exception e2) {
                                e2.getMessage();
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private void postOnPlayStartOnMainThread(final long j) {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.9
                    @Override // java.lang.Runnable
                    public void run() {
                        int i = (int) j;
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onPlayStarted(i);
                            } catch (Exception e) {
                                e.getMessage();
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onPlayStarted(i);
                            } catch (Exception e2) {
                                e2.getMessage();
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private void postOnPlayErrorOnMainThread(final String str) {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.10
                    @Override // java.lang.Runnable
                    public void run() {
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onPlayError(str);
                            } catch (Exception e) {
                                e.getMessage();
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onPlayError(str);
                            } catch (Exception e2) {
                                e2.getMessage();
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private void postOnPlaySetDataSourceError2MainThread(final String str) {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.11
                    @Override // java.lang.Runnable
                    public void run() {
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onPlaySetDataSourceError(str);
                            } catch (Exception e) {
                                e.getMessage();
                            }
                        }
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onPlaySetDataSourceError(str);
                            } catch (Exception e2) {
                                e2.getMessage();
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private void postOnPlayCompletedOnMainThread() {
        try {
            if (this.mHandler != null) {
                this.mHandler.post(new Runnable() { // from class: com.tkay.expressad.playercommon.VideoFeedsPlayer.12
                    @Override // java.lang.Runnable
                    public void run() {
                        if (VideoFeedsPlayer.this.mOutterVFListener != null) {
                            try {
                                VideoFeedsPlayer.this.mOutterVFListener.onPlayCompleted();
                            } catch (Exception e) {
                                e.getMessage();
                            }
                        }
                        if (VideoFeedsPlayer.this.mInnerVFPLisener != null) {
                            try {
                                VideoFeedsPlayer.this.mInnerVFPLisener.onPlayCompleted();
                            } catch (Exception e2) {
                                e2.getMessage();
                            }
                        }
                    }
                });
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void pause() {
        try {
            if (this.mHasPrepare && this.exoPlayer != null && exoPlayerIsPlaying()) {
                StringBuilder sb = new StringBuilder("pause isPalying:");
                sb.append(exoPlayerIsPlaying());
                sb.append(" mIsPlaying:");
                sb.append(this.mIsPlaying);
                hideLoading();
                this.exoPlayer.a(false);
                this.mIsPlaying = false;
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void prepare() {
        try {
            if (this.mHasPrepare || this.exoPlayer == null) {
                return;
            }
            this.exoPlayer.a(this.mediaSource);
            this.mHasPrepare = true;
            this.mIsPlaying = false;
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void stop() {
        try {
            if (this.mHasPrepare && this.exoPlayer != null && exoPlayerIsPlaying()) {
                hideLoading();
                this.exoPlayer.m();
                this.mHasPrepare = false;
                this.mIsPlaying = false;
                this.mIsComplete = true;
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void start(boolean z) {
        try {
            if (!this.mHasPrepare || this.exoPlayer == null || exoPlayerIsPlaying()) {
                return;
            }
            showLoading();
            play();
            this.mIsPlaying = true;
            if (z) {
                startPlayProgressTimer();
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void start(int i) {
        try {
            if (!this.mHasPrepare || this.exoPlayer == null || exoPlayerIsPlaying()) {
                return;
            }
            if (i > 0) {
                this.exoPlayer.a(i);
                play();
            } else {
                play();
                this.mIsPlaying = true;
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void justSeekTo(int i) {
        try {
            this.mCurrentPosition = i;
            if (!this.mHasPrepare) {
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void seekTo(int i) {
        long j = i;
        try {
            this.mCurrentPosition = j;
            if (this.mHasPrepare && this.exoPlayer != null) {
                this.exoPlayer.a(j);
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void setDataSource() {
        try {
            if (this.exoPlayer != null) {
                if (this.mSurfaceHolder != null) {
                    setDisplay(this.mSurfaceHolder);
                }
                boolean zExists = false;
                this.mHasPrepare = false;
                if (!TextUtils.equals(this.mMediaSourceUrl, this.mNetVideoUrl)) {
                    try {
                        zExists = new File(this.mMediaSourceUrl).exists();
                    } catch (Throwable unused) {
                    }
                    if (!zExists) {
                        this.mediaSource = new o.c(new com.tkay.expressad.exoplayer.j.o(this.mContext, "TY_ExoPlayer")).b(Uri.parse(this.mNetVideoUrl));
                        this.mMediaSourceUrl = this.mNetVideoUrl;
                    }
                }
                if (TextUtils.equals(this.mMediaSourceUrl, this.mNetVideoUrl) && this.mVideoReadyRate > 0) {
                    com.tkay.core.common.k.c.a("Video Play Fail:Play Network Url", "AdxExpress videoUrl:" + this.mPlayUrl + ",readyRate:" + this.mVideoReadyRate + ",maxVideoCacheSize:" + j.a().c() + ",lastRecycleCheckDownloadedFileSize:" + j.a().d(), m.a().q());
                }
                new StringBuilder("Real Play Url:").append(this.mMediaSourceUrl);
                this.exoPlayer.a(this.mediaSource);
                this.exoPlayer.a(true);
                startBufferIngTimer("mediaplayer prepare timeout");
            }
        } catch (Exception e) {
            e.getMessage();
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
            cancelPlayProgressTimer();
            cancelBufferTimeoutTimer();
            if (this.exoPlayer != null) {
                stop();
                this.exoPlayer.b(this);
                this.exoPlayer.n();
                this.mInnerVFPLisener = null;
                this.mOutterVFListener = null;
            }
            hideLoading();
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public void closeSound() {
        try {
            if (this.exoPlayer == null) {
                return;
            }
            this.exoPlayer.a(0.0f);
            this.mIsSilent = true;
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void openSound() {
        try {
            if (this.exoPlayer == null) {
                return;
            }
            this.exoPlayer.a(1.0f);
            this.mIsSilent = false;
        } catch (Exception e) {
            e.getMessage();
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
            e.getMessage();
            return false;
        }
    }

    public boolean onError(int i, String str) {
        try {
            StringBuilder sb = new StringBuilder("onError what: ");
            sb.append(i);
            sb.append(" extra: ");
            sb.append(str);
            hideLoading();
            if (!this.mIsFrontDesk && "MIX 3".equalsIgnoreCase(com.tkay.core.common.l.d.a()) && com.tkay.core.common.l.d.b().equalsIgnoreCase("Xiaomi")) {
                return true;
            }
            this.mHasPrepare = false;
            postOnPlayErrorOnMainThread(str);
        } catch (Exception e) {
            e.getMessage();
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
            new StringBuilder("isFrontDesk: ").append(z ? "frontStage" : "backStage");
        } catch (Exception e) {
            e.getMessage();
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
                e.getMessage();
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
            th.getMessage();
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
            th.getMessage();
            return false;
        }
    }

    public boolean isSilent() {
        return this.mIsSilent;
    }

    public int getDuration() {
        ad adVar = this.exoPlayer;
        if (adVar == null) {
            return 0;
        }
        adVar.s();
        return 0;
    }

    public void setVolume(float f, float f2) {
        try {
            if (this.exoPlayer != null) {
                this.exoPlayer.a(f2);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public void setPlaybackParams(float f) {
        try {
            if (exoPlayerIsPlaying()) {
                this.exoPlayer.a(new v(f));
            } else {
                this.exoPlayer.a(new v(f));
                this.exoPlayer.m();
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public boolean exoPlayerIsPlaying() {
        return this.exoPlayer.d() == 3 && this.exoPlayer.f();
    }

    public void play() {
        this.exoPlayer.a(true);
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public void onPlayerStateChanged(boolean z, int i) {
        if (i == 2) {
            this.mIsBuffering = true;
            showLoading();
            startBufferIngTimer("play buffering tiemout");
        } else {
            if (i != 3) {
                if (i != 4) {
                    return;
                }
                cancelPlayProgressTimer();
                onCompletion();
                return;
            }
            this.mIsBuffering = false;
            hideLoading();
            postOnBufferinEndOnMainThread();
            onPrepared();
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public void onPlayerError(com.tkay.expressad.exoplayer.g gVar) {
        boolean z;
        String str;
        String message = "Play error and ExoPlayer have not message.";
        if (gVar != null) {
            int i = gVar.d;
            z = true;
            if (i != 0) {
                if (i == 1) {
                    message = "Play error, because have a RendererException.";
                } else if (i == 2) {
                    message = "Play error, because have a UnexpectedException.";
                }
                z = false;
            } else {
                message = "Play error, because have a SourceException.";
            }
            if (gVar.getCause() != null && !TextUtils.isEmpty(gVar.getCause().getMessage())) {
                message = gVar.getCause().getMessage();
            }
        } else {
            z = false;
        }
        if (this.needPrepareVideoPlayAgain && z) {
            this.mPlayLocalVideoFileErrorStr = message;
            this.needPrepareVideoPlayAgain = false;
            rePrepareVideoSourceAgain();
            return;
        }
        long jT = 0;
        try {
            jT = this.exoPlayer.t();
        } catch (Throwable unused) {
        }
        String str2 = "videoUrl" + this.mNetVideoUrl + ",readyRate:" + this.mVideoReadyRate + ",cdRate:0,play process:" + jT;
        if (TextUtils.isEmpty(this.mPlayLocalVideoFileErrorStr)) {
            str = str2 + ",localFileErrorMsg:" + message;
        } else {
            str = str2 + ",localFileErrorMsg:" + this.mPlayLocalVideoFileErrorStr + ",errorMsg:" + message;
        }
        onError(gVar.d, str);
    }

    private void rePrepareVideoSourceAgain() {
        if (this.mOutterVFListener != null) {
            this.mOutterVFListener.onVideoDownloadResume();
        }
        s sVar = this.mediaSource;
        if (sVar != null) {
            this.exoPlayer.a(sVar);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public void onPlaybackParametersChanged(v vVar) {
        new StringBuilder("onPlaybackParametersChanged : ").append(vVar.b);
    }
}
