.class public Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/w$c;


# static fields
.field public static final INTERVAL_TIME_PLAY_TIME_CD_THREAD:I = 0x3e8

.field public static final TAG:Ljava/lang/String; = "VideoFeedsPlayer"


# instance fields
.field private exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

.field private isStart:Z

.field private mBufferTime:I

.field private mBufferTimeoutTimer:Ljava/util/Timer;

.field private mContext:Landroid/content/Context;

.field private mCurrentPosition:J

.field private mFullScreenLoadingView:Landroid/view/View;

.field private final mHandler:Landroid/os/Handler;

.field private mHasPrepare:Z

.field private volatile mInnerVFPLisener:Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

.field private mIsBuffering:Z

.field private mIsComplete:Z

.field private mIsFrontDesk:Z

.field private mIsNeedBufferingTimeout:Z

.field private mIsPlaying:Z

.field private mIsSilent:Z

.field private mLoadingView:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private mLock:Ljava/lang/Object;

.field private mMediaSourceUrl:Ljava/lang/String;

.field private mNetVideoUrl:Ljava/lang/String;

.field private volatile mOutterVFListener:Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

.field mPlayLocalVideoFileErrorStr:Ljava/lang/String;

.field private mPlayUrl:Ljava/lang/String;

.field private mSurfaceHolder:Landroid/view/SurfaceHolder;

.field private mVideoReadyRate:I

.field private mediaSource:Lcom/tkay/expressad/exoplayer/h/s;

.field private needPrepareVideoPlayAgain:Z

.field private playProgressRunnable:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 43
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsComplete:Z

    .line 44
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsPlaying:Z

    .line 45
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    .line 50
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsBuffering:Z

    .line 55
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsNeedBufferingTimeout:Z

    const/4 v1, 0x1

    .line 60
    iput-boolean v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsFrontDesk:Z

    const/4 v1, 0x5

    .line 67
    iput v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mBufferTime:I

    .line 87
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mLock:Ljava/lang/Object;

    .line 98
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->isStart:Z

    .line 100
    new-instance v1, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, p0, v2}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$1;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;Landroid/os/Looper;)V

    iput-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    .line 109
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->needPrepareVideoPlayAgain:Z

    const-string v0, ""

    .line 110
    iput-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mNetVideoUrl:Ljava/lang/String;

    .line 111
    iput-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mMediaSourceUrl:Ljava/lang/String;

    .line 233
    new-instance v0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$2;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$2;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)V

    iput-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->playProgressRunnable:Ljava/lang/Runnable;

    return-void
.end method

.method static synthetic access$000(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/exoplayer/ad;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    return-object p0
.end method

.method static synthetic access$100(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)J
    .locals 2

    .line 37
    iget-wide v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mCurrentPosition:J

    return-wide v0
.end method

.method static synthetic access$1000(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Ljava/lang/ref/WeakReference;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mLoadingView:Ljava/lang/ref/WeakReference;

    return-object p0
.end method

.method static synthetic access$102(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;J)J
    .locals 0

    .line 37
    iput-wide p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mCurrentPosition:J

    return-wide p1
.end method

.method static synthetic access$1100(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mOutterVFListener:Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    return-object p0
.end method

.method static synthetic access$1200(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mInnerVFPLisener:Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    return-object p0
.end method

.method static synthetic access$200(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;II)V
    .locals 0

    .line 37
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayProgressOnMainThread(II)V

    return-void
.end method

.method static synthetic access$302(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;Z)Z
    .locals 0

    .line 37
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsComplete:Z

    return p1
.end method

.method static synthetic access$400(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Z
    .locals 0

    .line 37
    iget-boolean p0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsBuffering:Z

    return p0
.end method

.method static synthetic access$500(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)V
    .locals 0

    .line 37
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hideLoading()V

    return-void
.end method

.method static synthetic access$600(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Landroid/os/Handler;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic access$700(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Z
    .locals 0

    .line 37
    iget-boolean p0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    return p0
.end method

.method static synthetic access$800(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;Ljava/lang/String;)V
    .locals 0

    .line 37
    invoke-direct {p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnBufferingStarOnMainThread(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$900(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Landroid/view/View;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mFullScreenLoadingView:Landroid/view/View;

    return-object p0
.end method

.method private cancelBufferTimeoutTimer()V
    .locals 1

    .line 289
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mBufferTimeoutTimer:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 290
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mBufferTimeoutTimer:Ljava/util/Timer;

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 293
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private cancelPlayProgressTimer()V
    .locals 2

    .line 281
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->playProgressRunnable:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 283
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private hideLoading()V
    .locals 2

    .line 414
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    if-nez v0, :cond_0

    return-void

    .line 417
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$5;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$5;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 431
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private postOnBufferinEndOnMainThread()V
    .locals 2

    .line 509
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 510
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$8;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$8;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 533
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private postOnBufferingStarOnMainThread(Ljava/lang/String;)V
    .locals 2

    .line 476
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 477
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$7;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$7;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 500
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private postOnPlayCompletedOnMainThread()V
    .locals 2

    .line 647
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 648
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$12;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$12;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 669
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private postOnPlayErrorOnMainThread(Ljava/lang/String;)V
    .locals 2

    .line 578
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 579
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$10;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$10;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 604
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private postOnPlayProgressOnMainThread(II)V
    .locals 2

    .line 441
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 442
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;II)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 465
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private postOnPlaySetDataSourceError2MainThread(Ljava/lang/String;)V
    .locals 2

    .line 615
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 616
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$11;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$11;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 638
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private postOnPlayStartOnMainThread(J)V
    .locals 2

    .line 542
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 543
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$9;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$9;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;J)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 567
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private rePrepareVideoSourceAgain()V
    .locals 2

    .line 1183
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mOutterVFListener:Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    if-eqz v0, :cond_0

    .line 1184
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mOutterVFListener:Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    invoke-interface {v0}, Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;->onVideoDownloadResume()V

    .line 1187
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mediaSource:Lcom/tkay/expressad/exoplayer/h/s;

    if-eqz v0, :cond_1

    .line 1188
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/h/s;)V

    :cond_1
    return-void
.end method

.method private startBufferIngTimer(Ljava/lang/String;)V
    .locals 4

    .line 304
    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsNeedBufferingTimeout:Z

    if-nez v0, :cond_0

    return-void

    .line 309
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->cancelBufferTimeoutTimer()V

    .line 311
    new-instance v0, Ljava/util/Timer;

    invoke-direct {v0}, Ljava/util/Timer;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mBufferTimeoutTimer:Ljava/util/Timer;

    .line 312
    new-instance v1, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$3;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;Ljava/lang/String;)V

    iget p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mBufferTime:I

    mul-int/lit16 p1, p1, 0x3e8

    int-to-long v2, p1

    invoke-virtual {v0, v1, v2, v3}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;J)V

    return-void
.end method

.method private startPlayProgressTimer()V
    .locals 2

    .line 272
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->cancelPlayProgressTimer()V

    .line 273
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->playProgressRunnable:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 275
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public closeSound()V
    .locals 2

    .line 894
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-nez v0, :cond_0

    return-void

    .line 897
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(F)V

    const/4 v0, 0x1

    .line 898
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsSilent:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 900
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public exoPlayerIsPlaying()Z
    .locals 2

    .line 1065
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ad;->d()I

    move-result v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    .line 1066
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ad;->f()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public fullScreenLoadingViewisVisible()Z
    .locals 1

    .line 1000
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mFullScreenLoadingView:Landroid/view/View;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mFullScreenLoadingView:Landroid/view/View;

    .line 1001
    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :catchall_0
    move-exception v0

    .line 1005
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getCurPosition()I
    .locals 2

    .line 925
    iget-wide v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mCurrentPosition:J

    long-to-int v0, v0

    return v0
.end method

.method public getDuration()I
    .locals 1

    .line 1033
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_0

    .line 1034
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ad;->s()J

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public halfLoadingViewisVisible()Z
    .locals 1

    .line 1014
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mLoadingView:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mLoadingView:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mLoadingView:Ljava/lang/ref/WeakReference;

    .line 1015
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :catchall_0
    move-exception v0

    .line 1019
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasPrepare()Z
    .locals 1

    .line 967
    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    return v0
.end method

.method public initBufferIngParam(I)V
    .locals 1

    if-lez p1, :cond_0

    .line 335
    iput p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mBufferTime:I

    :cond_0
    const/4 p1, 0x1

    .line 337
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsNeedBufferingTimeout:Z

    .line 338
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "mIsNeedBufferingTimeout:"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsNeedBufferingTimeout:Z

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v0, "  mMaxBufferTime:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mBufferTime:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    return-void
.end method

.method public initPlayer(Landroid/content/Context;Landroid/view/View;Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/playercommon/VideoPlayerStatusListener;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p2, :cond_0

    :try_start_0
    const-string p1, "MediaPlayer init error"

    .line 120
    invoke-direct {p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayErrorOnMainThread(Ljava/lang/String;)V

    return v0

    .line 125
    :cond_0
    invoke-static {p3, p4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x1

    if-nez v1, :cond_1

    move v1, v2

    goto :goto_0

    :cond_1
    move v1, v0

    :goto_0
    iput-boolean v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->needPrepareVideoPlayAgain:Z

    .line 126
    iput-object p3, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mMediaSourceUrl:Ljava/lang/String;

    .line 127
    iput-object p4, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mNetVideoUrl:Ljava/lang/String;

    .line 128
    iput p5, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mVideoReadyRate:I

    .line 129
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mContext:Landroid/content/Context;

    .line 131
    iput-object p6, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mOutterVFListener:Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    .line 132
    new-instance p4, Ljava/lang/ref/WeakReference;

    invoke-direct {p4, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p4, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mLoadingView:Ljava/lang/ref/WeakReference;

    .line 134
    new-instance p2, Lcom/tkay/expressad/exoplayer/f;

    invoke-direct {p2, p1}, Lcom/tkay/expressad/exoplayer/f;-><init>(Landroid/content/Context;)V

    new-instance p4, Lcom/tkay/expressad/exoplayer/i/c;

    invoke-direct {p4}, Lcom/tkay/expressad/exoplayer/i/c;-><init>()V

    new-instance p5, Lcom/tkay/expressad/exoplayer/d;

    invoke-direct {p5}, Lcom/tkay/expressad/exoplayer/d;-><init>()V

    invoke-static {p2, p4, p5}, Lcom/tkay/expressad/exoplayer/i;->a(Lcom/tkay/expressad/exoplayer/ab;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/p;)Lcom/tkay/expressad/exoplayer/ad;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    .line 137
    invoke-static {p3}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    .line 138
    new-instance p3, Lcom/tkay/expressad/exoplayer/h/o$c;

    new-instance p4, Lcom/tkay/expressad/exoplayer/j/o;

    const-string p5, "TY_ExoPlayer"

    invoke-direct {p4, p1, p5}, Lcom/tkay/expressad/exoplayer/j/o;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    invoke-direct {p3, p4}, Lcom/tkay/expressad/exoplayer/h/o$c;-><init>(Lcom/tkay/expressad/exoplayer/j/h$a;)V

    .line 140
    invoke-virtual {p3, p2}, Lcom/tkay/expressad/exoplayer/h/o$c;->a(Landroid/net/Uri;)Lcom/tkay/expressad/exoplayer/h/o;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mediaSource:Lcom/tkay/expressad/exoplayer/h/s;

    .line 141
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(I)V

    .line 142
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    iget-object p2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mediaSource:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/h/s;)V

    .line 144
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {p1, p0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/w$c;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v2

    :catchall_0
    move-exception p1

    .line 148
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 151
    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    .line 153
    invoke-direct {p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayErrorOnMainThread(Ljava/lang/String;)V

    return v0
.end method

.method public isComplete()Z
    .locals 1

    .line 980
    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsComplete:Z

    return v0
.end method

.method public isPlayIng()Z
    .locals 1

    .line 935
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayerIsPlaying()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :catch_0
    move-exception v0

    .line 939
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public isSilent()Z
    .locals 1

    .line 1029
    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsSilent:Z

    return v0
.end method

.method public justSeekTo(I)V
    .locals 2

    int-to-long v0, p1

    .line 784
    :try_start_0
    iput-wide v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mCurrentPosition:J

    .line 785
    iget-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p1, :cond_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 790
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onBufferingUpdate(I)V
    .locals 0

    return-void
.end method

.method public onCompletion()V
    .locals 2

    const/4 v0, 0x1

    .line 344
    :try_start_0
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsComplete:Z

    const/4 v0, 0x0

    .line 345
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsPlaying:Z

    const-wide/16 v0, 0x0

    .line 346
    iput-wide v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mCurrentPosition:J

    .line 347
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hideLoading()V

    .line 348
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayCompletedOnMainThread()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 351
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onError(ILjava/lang/String;)Z
    .locals 3

    const/4 v0, 0x1

    .line 946
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "onError what: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " extra: "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 947
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hideLoading()V

    .line 948
    iget-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsFrontDesk:Z

    if-nez p1, :cond_0

    const-string p1, "MIX 3"

    invoke-static {}, Lcom/tkay/core/common/l/d;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/tkay/core/common/l/d;->b()Ljava/lang/String;

    move-result-object p1

    const-string v1, "Xiaomi"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    return v0

    :cond_0
    const/4 p1, 0x0

    .line 951
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    .line 952
    invoke-direct {p0, p2}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayErrorOnMainThread(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 954
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :goto_0
    return v0
.end method

.method public onLoadingChanged(Z)V
    .locals 0

    return-void
.end method

.method public onPlaybackParametersChanged(Lcom/tkay/expressad/exoplayer/v;)V
    .locals 2

    .line 1200
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onPlaybackParametersChanged : "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget p1, p1, Lcom/tkay/expressad/exoplayer/v;->b:F

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    return-void
.end method

.method public onPlayerError(Lcom/tkay/expressad/exoplayer/g;)V
    .locals 5

    const/4 v0, 0x0

    const-string v1, "Play error and ExoPlayer have not message."

    if-eqz p1, :cond_3

    .line 1137
    iget v2, p1, Lcom/tkay/expressad/exoplayer/g;->d:I

    const/4 v3, 0x1

    if-eqz v2, :cond_2

    if-eq v2, v3, :cond_1

    const/4 v3, 0x2

    if-eq v2, v3, :cond_0

    :goto_0
    move v3, v0

    goto :goto_1

    :cond_0
    const-string v1, "Play error, because have a UnexpectedException."

    goto :goto_0

    :cond_1
    const-string v1, "Play error, because have a RendererException."

    goto :goto_0

    :cond_2
    const-string v1, "Play error, because have a SourceException."

    .line 1155
    :goto_1
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/g;->getCause()Ljava/lang/Throwable;

    move-result-object v2

    if-eqz v2, :cond_4

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/g;->getCause()Ljava/lang/Throwable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    .line 1156
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/g;->getCause()Ljava/lang/Throwable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    goto :goto_2

    :cond_3
    move v3, v0

    .line 1162
    :cond_4
    :goto_2
    iget-boolean v2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->needPrepareVideoPlayAgain:Z

    if-eqz v2, :cond_5

    if-eqz v3, :cond_5

    .line 1163
    iput-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mPlayLocalVideoFileErrorStr:Ljava/lang/String;

    .line 1164
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->needPrepareVideoPlayAgain:Z

    .line 1165
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->rePrepareVideoSourceAgain()V

    return-void

    :cond_5
    const-wide/16 v2, 0x0

    .line 1169
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ad;->t()J

    move-result-wide v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1172
    :catchall_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v4, "videoUrl"

    invoke-direct {v0, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mNetVideoUrl:Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ",readyRate:"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mVideoReadyRate:I

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ",cdRate:0,play process:"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1173
    iget-object v2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mPlayLocalVideoFileErrorStr:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v3, ",localFileErrorMsg:"

    if-eqz v2, :cond_6

    .line 1174
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_3

    .line 1176
    :cond_6
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mPlayLocalVideoFileErrorStr:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ",errorMsg:"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1178
    :goto_3
    iget p1, p1, Lcom/tkay/expressad/exoplayer/g;->d:I

    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->onError(ILjava/lang/String;)Z

    return-void
.end method

.method public onPlayerStateChanged(ZI)V
    .locals 0

    const/4 p1, 0x2

    if-eq p2, p1, :cond_2

    const/4 p1, 0x3

    if-eq p2, p1, :cond_1

    const/4 p1, 0x4

    if-eq p2, p1, :cond_0

    goto :goto_0

    .line 1116
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->cancelPlayProgressTimer()V

    .line 1117
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->onCompletion()V

    :goto_0
    return-void

    :cond_1
    const/4 p1, 0x0

    .line 1108
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsBuffering:Z

    .line 1109
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hideLoading()V

    .line 1110
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnBufferinEndOnMainThread()V

    .line 1111
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->onPrepared()V

    return-void

    :cond_2
    const/4 p1, 0x1

    .line 1101
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsBuffering:Z

    .line 1102
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->showLoading()V

    const-string p1, "play buffering tiemout"

    .line 1103
    invoke-direct {p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->startBufferIngTimer(Ljava/lang/String;)V

    return-void
.end method

.method public onPositionDiscontinuity(I)V
    .locals 0

    return-void
.end method

.method public onPrepared()V
    .locals 5

    .line 357
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onPrepared:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const/4 v0, 0x1

    .line 358
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    .line 359
    iget-boolean v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsFrontDesk:Z

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v1, :cond_0

    .line 360
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->pause()V

    .line 362
    :cond_0
    iget-boolean v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsFrontDesk:Z

    if-eqz v1, :cond_2

    .line 363
    iget-boolean v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsFrontDesk:Z

    if-eqz v1, :cond_2

    .line 364
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hideLoading()V

    .line 365
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    .line 366
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v1, :cond_1

    .line 367
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsPlaying:Z

    .line 368
    iget-boolean v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->isStart:Z

    if-nez v1, :cond_1

    .line 369
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/ad;->s()J

    move-result-wide v1

    const-wide/16 v3, 0x3e8

    div-long/2addr v1, v3

    invoke-direct {p0, v1, v2}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayStartOnMainThread(J)V

    .line 370
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "onPlayStarted()\uff0cgetCurrentPosition:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/ad;->t()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    .line 371
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->isStart:Z

    .line 374
    :cond_1
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnBufferinEndOnMainThread()V

    .line 375
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->startPlayProgressTimer()V

    .line 376
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onPrepare mCurrentPosition:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mCurrentPosition:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " onPrepare mHasPrepare:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    .line 382
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onRepeatModeChanged(I)V
    .locals 0

    return-void
.end method

.method public onSeekProcessed()V
    .locals 0

    return-void
.end method

.method public onShuffleModeEnabledChanged(Z)V
    .locals 0

    return-void
.end method

.method public onTimelineChanged(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;I)V
    .locals 0

    return-void
.end method

.method public onTracksChanged(Lcom/tkay/expressad/exoplayer/h/af;Lcom/tkay/expressad/exoplayer/i/g;)V
    .locals 0

    return-void
.end method

.method public openSound()V
    .locals 2

    .line 909
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-nez v0, :cond_0

    return-void

    .line 912
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    const/high16 v1, 0x3f800000    # 1.0f

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(F)V

    const/4 v0, 0x0

    .line 913
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsSilent:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 915
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public pause()V
    .locals 2

    .line 678
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    if-nez v0, :cond_0

    return-void

    .line 681
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayerIsPlaying()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 682
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "pause isPalying:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayerIsPlaying()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " mIsPlaying:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsPlaying:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 683
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hideLoading()V

    .line 684
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(Z)V

    .line 685
    iput-boolean v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsPlaying:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception v0

    .line 688
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public play()V
    .locals 2

    .line 1070
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(Z)V

    return-void
.end method

.method public play(Ljava/lang/String;I)V
    .locals 4

    .line 181
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mLock:Ljava/lang/Object;

    monitor-enter v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 183
    :try_start_1
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Start Play currentionPosition:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mCurrentPosition:J

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    if-lez p2, :cond_0

    int-to-long v1, p2

    .line 186
    iput-wide v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mCurrentPosition:J

    .line 188
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_1

    const-string p1, "play url is null"

    .line 189
    invoke-direct {p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayErrorOnMainThread(Ljava/lang/String;)V

    .line 190
    monitor-exit v0

    return-void

    .line 192
    :cond_1
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mPlayUrl:Ljava/lang/String;

    const/4 p1, 0x0

    .line 193
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    const/4 p1, 0x1

    .line 194
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsFrontDesk:Z

    .line 195
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->showLoading()V

    .line 197
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 198
    :try_start_2
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->setDataSource()V

    .line 199
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "mPlayUrl:"

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mPlayUrl:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void

    :catchall_0
    move-exception p1

    .line 197
    monitor-exit v0

    throw p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    move-exception p1

    .line 201
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 202
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->releasePlayer()V

    .line 203
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hideLoading()V

    const-string p1, "mediaplayer cannot play"

    .line 204
    invoke-direct {p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayErrorOnMainThread(Ljava/lang/String;)V

    return-void
.end method

.method public play(Ljava/lang/String;Landroid/view/SurfaceHolder;)V
    .locals 2

    .line 211
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mLock:Ljava/lang/Object;

    monitor-enter v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 213
    :try_start_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p1, "play url is null"

    .line 214
    invoke-direct {p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayErrorOnMainThread(Ljava/lang/String;)V

    .line 215
    monitor-exit v0

    return-void

    .line 217
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mPlayUrl:Ljava/lang/String;

    const/4 p1, 0x0

    .line 218
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    const/4 p1, 0x1

    .line 219
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsFrontDesk:Z

    .line 220
    iput-object p2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    .line 221
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->showLoading()V

    .line 222
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 223
    :try_start_2
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->setDataSource()V

    .line 224
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "mPlayUrl:"

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mPlayUrl:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void

    :catchall_0
    move-exception p1

    .line 222
    monitor-exit v0

    throw p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    move-exception p1

    .line 226
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 227
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->releasePlayer()V

    .line 228
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hideLoading()V

    const-string p1, "mediaplayer cannot play"

    .line 229
    invoke-direct {p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayErrorOnMainThread(Ljava/lang/String;)V

    return-void
.end method

.method public prepare()V
    .locals 2

    .line 697
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    if-eqz v0, :cond_0

    return-void

    .line 700
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_1

    .line 701
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mediaSource:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/h/s;)V

    const/4 v0, 0x1

    .line 702
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    const/4 v0, 0x0

    .line 703
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsPlaying:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception v0

    .line 706
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public releasePlayer()V
    .locals 1

    .line 873
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->cancelPlayProgressTimer()V

    .line 874
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->cancelBufferTimeoutTimer()V

    .line 875
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_0

    .line 876
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->stop()V

    .line 877
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/exoplayer/ad;->b(Lcom/tkay/expressad/exoplayer/w$c;)V

    .line 878
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ad;->n()V

    const/4 v0, 0x0

    .line 880
    iput-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mInnerVFPLisener:Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    .line 881
    iput-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mOutterVFListener:Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    .line 883
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hideLoading()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 885
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public seekTo(I)V
    .locals 2

    int-to-long v0, p1

    .line 796
    :try_start_0
    iput-wide v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mCurrentPosition:J

    .line 797
    iget-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    if-nez p1, :cond_0

    return-void

    .line 801
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz p1, :cond_1

    .line 802
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception p1

    .line 805
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setDataSource()V
    .locals 5

    .line 815
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_3

    .line 817
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    if-eqz v0, :cond_0

    .line 818
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->setDisplay(Landroid/view/SurfaceHolder;)V

    :cond_0
    const/4 v0, 0x0

    .line 821
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    .line 822
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mMediaSourceUrl:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mNetVideoUrl:Ljava/lang/String;

    invoke-static {v1, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v1, :cond_1

    .line 826
    :try_start_1
    new-instance v1, Ljava/io/File;

    iget-object v2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mMediaSourceUrl:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 827
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    if-nez v0, :cond_1

    .line 832
    :try_start_2
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mNetVideoUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 833
    new-instance v1, Lcom/tkay/expressad/exoplayer/h/o$c;

    new-instance v2, Lcom/tkay/expressad/exoplayer/j/o;

    iget-object v3, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mContext:Landroid/content/Context;

    const-string v4, "TY_ExoPlayer"

    invoke-direct {v2, v3, v4}, Lcom/tkay/expressad/exoplayer/j/o;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/h/o$c;-><init>(Lcom/tkay/expressad/exoplayer/j/h$a;)V

    .line 835
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/h/o$c;->a(Landroid/net/Uri;)Lcom/tkay/expressad/exoplayer/h/o;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mediaSource:Lcom/tkay/expressad/exoplayer/h/s;

    .line 836
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mNetVideoUrl:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mMediaSourceUrl:Ljava/lang/String;

    .line 839
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mMediaSourceUrl:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mNetVideoUrl:Ljava/lang/String;

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mVideoReadyRate:I

    if-lez v0, :cond_2

    const-string v0, "Video Play Fail:Play Network Url"

    .line 840
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "AdxExpress videoUrl:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mPlayUrl:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ",readyRate:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mVideoReadyRate:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",maxVideoCacheSize:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 842
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/a/j;->c()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ",lastRecycleCheckDownloadedFileSize:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 843
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/a/j;->d()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 844
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v2

    .line 840
    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 846
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Real Play Url:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mMediaSourceUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 847
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mediaSource:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/h/s;)V

    .line 848
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(Z)V

    const-string v0, "mediaplayer prepare timeout"

    .line 849
    invoke-direct {p0, v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->startBufferIngTimer(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :cond_3
    return-void

    :catch_0
    move-exception v0

    .line 852
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 853
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hideLoading()V

    const-string v0, "illegal video address"

    .line 854
    invoke-direct {p0, v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayErrorOnMainThread(Ljava/lang/String;)V

    .line 855
    invoke-direct {p0, v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlaySetDataSourceError2MainThread(Ljava/lang/String;)V

    return-void
.end method

.method public setDisplay(Landroid/view/SurfaceHolder;)V
    .locals 1

    .line 161
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    .line 162
    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/w$g;->a(Landroid/view/SurfaceHolder;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 164
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 167
    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    .line 169
    invoke-direct {p0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayErrorOnMainThread(Ljava/lang/String;)V

    return-void
.end method

.method public setFullScreenLoadingView(Landroid/view/View;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 990
    :try_start_0
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mFullScreenLoadingView:Landroid/view/View;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 993
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return-void
.end method

.method public setIsComplete(Z)V
    .locals 0

    .line 984
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsComplete:Z

    return-void
.end method

.method public setIsFrontDesk(Z)V
    .locals 2

    .line 972
    :try_start_0
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsFrontDesk:Z

    .line 973
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "isFrontDesk: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    const-string p1, "frontStage"

    goto :goto_0

    :cond_0
    const-string p1, "backStage"

    :goto_0
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 975
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setPlaybackParams(F)V
    .locals 1

    .line 1051
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayerIsPlaying()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1052
    new-instance v0, Lcom/tkay/expressad/exoplayer/v;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/v;-><init>(F)V

    .line 1053
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/v;)V

    return-void

    .line 1055
    :cond_0
    new-instance v0, Lcom/tkay/expressad/exoplayer/v;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/v;-><init>(F)V

    .line 1056
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/v;)V

    .line 1057
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/ad;->m()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1060
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setSelfVideoFeedsPlayerListener(Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;)V
    .locals 0

    .line 863
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mInnerVFPLisener:Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    return-void
.end method

.method public setVideoFeedsPlayerListener(Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;)V
    .locals 0

    .line 963
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mOutterVFListener:Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    return-void
.end method

.method public setVolume(FF)V
    .locals 0

    .line 1041
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz p1, :cond_0

    .line 1042
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/exoplayer/ad;->a(F)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 1045
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public showLoading()V
    .locals 2

    .line 392
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    if-nez v0, :cond_0

    return-void

    .line 395
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHandler:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$4;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$4;-><init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 405
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public start(I)V
    .locals 3

    .line 762
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    if-nez v0, :cond_0

    return-void

    .line 766
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayerIsPlaying()Z

    move-result v0

    if-nez v0, :cond_2

    if-lez p1, :cond_1

    .line 769
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    int-to-long v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/ad;->a(J)V

    .line 770
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->play()V

    return-void

    .line 772
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->play()V

    const/4 p1, 0x1

    .line 773
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsPlaying:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception p1

    .line 778
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public start(Z)V
    .locals 1

    .line 735
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    if-nez v0, :cond_0

    return-void

    .line 740
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayerIsPlaying()Z

    move-result v0

    if-nez v0, :cond_1

    .line 741
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->showLoading()V

    .line 742
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->play()V

    const/4 v0, 0x1

    .line 743
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsPlaying:Z

    if-eqz p1, :cond_1

    .line 746
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->startPlayProgressTimer()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception p1

    .line 752
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public stop()V
    .locals 1

    .line 715
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    if-nez v0, :cond_0

    return-void

    .line 718
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayerIsPlaying()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 719
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hideLoading()V

    .line 720
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->exoPlayer:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ad;->m()V

    const/4 v0, 0x0

    .line 721
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mHasPrepare:Z

    .line 722
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsPlaying:Z

    const/4 v0, 0x1

    .line 723
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->mIsComplete:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception v0

    .line 726
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method
