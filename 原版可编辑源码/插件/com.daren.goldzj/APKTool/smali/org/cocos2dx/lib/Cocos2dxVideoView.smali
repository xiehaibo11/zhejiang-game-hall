.class public Lorg/cocos2dx/lib/Cocos2dxVideoView;
.super Landroid/view/SurfaceView;
.source "Cocos2dxVideoView.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/cocos2dx/lib/Cocos2dxVideoView$State;,
        Lorg/cocos2dx/lib/Cocos2dxVideoView$OnVideoEventListener;
    }
.end annotation


# static fields
.field private static final AssetResourceRoot:Ljava/lang/String; = "@assets/"

.field private static final EVENT_CLICKED:I = 0x5

.field private static final EVENT_COMPLETED:I = 0x3

.field private static final EVENT_META_LOADED:I = 0x4

.field private static final EVENT_PAUSED:I = 0x1

.field private static final EVENT_PLAYING:I = 0x0

.field private static final EVENT_READY_TO_PLAY:I = 0x6

.field private static final EVENT_STOPPED:I = 0x2


# instance fields
.field private TAG:Ljava/lang/String;

.field protected mCocos2dxActivity:Lorg/cocos2dx/lib/Cocos2dxActivity;

.field private mCompletionListener:Landroid/media/MediaPlayer$OnCompletionListener;

.field private mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

.field private mDuration:I

.field private mErrorListener:Landroid/media/MediaPlayer$OnErrorListener;

.field protected mFullScreenEnabled:Z

.field protected mFullScreenHeight:I

.field protected mFullScreenWidth:I

.field private mIsAssetRouse:Z

.field private mKeepRatio:Z

.field private mMediaPlayer:Landroid/media/MediaPlayer;

.field private mMetaUpdated:Z

.field private mOnVideoEventListener:Lorg/cocos2dx/lib/Cocos2dxVideoView$OnVideoEventListener;

.field private mPositionBeforeRelease:I

.field mPreparedListener:Landroid/media/MediaPlayer$OnPreparedListener;

.field mSHCallback:Landroid/view/SurfaceHolder$Callback;

.field private mSeekWhenPrepared:I

.field private mSurfaceHolder:Landroid/view/SurfaceHolder;

.field private mVideoFilePath:Ljava/lang/String;

.field private mVideoHeight:I

.field private mVideoUri:Landroid/net/Uri;

.field private mVideoWidth:I

.field protected mViewHeight:I

.field protected mViewLeft:I

.field private mViewTag:I

.field protected mViewTop:I

.field protected mViewWidth:I

.field protected mVisibleHeight:I

.field protected mVisibleLeft:I

.field protected mVisibleTop:I

.field protected mVisibleWidth:I


# direct methods
.method public constructor <init>(Lorg/cocos2dx/lib/Cocos2dxActivity;I)V
    .locals 2

    .line 119
    invoke-direct {p0, p1}, Landroid/view/SurfaceView;-><init>(Landroid/content/Context;)V

    const-string v0, "Cocos2dxVideoView"

    .line 69
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->TAG:Ljava/lang/String;

    .line 74
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->IDLE:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/4 v0, 0x0

    .line 77
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    .line 78
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    const/4 v1, 0x0

    .line 79
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoWidth:I

    .line 80
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoHeight:I

    .line 85
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mSeekWhenPrepared:I

    .line 87
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCocos2dxActivity:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 89
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewLeft:I

    .line 90
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewTop:I

    .line 91
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewWidth:I

    .line 92
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewHeight:I

    .line 94
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleLeft:I

    .line 95
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleTop:I

    .line 96
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleWidth:I

    .line 97
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleHeight:I

    .line 99
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mFullScreenEnabled:Z

    .line 100
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mFullScreenWidth:I

    .line 101
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mFullScreenHeight:I

    .line 103
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mIsAssetRouse:Z

    .line 104
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoFilePath:Ljava/lang/String;

    .line 106
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewTag:I

    .line 107
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mKeepRatio:Z

    .line 108
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMetaUpdated:Z

    .line 112
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mPositionBeforeRelease:I

    .line 445
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$1;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView$1;-><init>(Lorg/cocos2dx/lib/Cocos2dxVideoView;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mPreparedListener:Landroid/media/MediaPlayer$OnPreparedListener;

    .line 464
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$2;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView$2;-><init>(Lorg/cocos2dx/lib/Cocos2dxVideoView;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCompletionListener:Landroid/media/MediaPlayer$OnCompletionListener;

    .line 481
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$3;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView$3;-><init>(Lorg/cocos2dx/lib/Cocos2dxVideoView;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mErrorListener:Landroid/media/MediaPlayer$OnErrorListener;

    .line 526
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$4;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView$4;-><init>(Lorg/cocos2dx/lib/Cocos2dxVideoView;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mSHCallback:Landroid/view/SurfaceHolder$Callback;

    .line 121
    iput p2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewTag:I

    .line 122
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCocos2dxActivity:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 123
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->initVideoView()V

    return-void
.end method

.method static synthetic access$000(Lorg/cocos2dx/lib/Cocos2dxVideoView;)I
    .locals 0

    .line 37
    iget p0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoWidth:I

    return p0
.end method

.method static synthetic access$002(Lorg/cocos2dx/lib/Cocos2dxVideoView;I)I
    .locals 0

    .line 37
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoWidth:I

    return p1
.end method

.method static synthetic access$100(Lorg/cocos2dx/lib/Cocos2dxVideoView;)I
    .locals 0

    .line 37
    iget p0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoHeight:I

    return p0
.end method

.method static synthetic access$1000(Lorg/cocos2dx/lib/Cocos2dxVideoView;)V
    .locals 0

    .line 37
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->release()V

    return-void
.end method

.method static synthetic access$102(Lorg/cocos2dx/lib/Cocos2dxVideoView;I)I
    .locals 0

    .line 37
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoHeight:I

    return p1
.end method

.method static synthetic access$200(Lorg/cocos2dx/lib/Cocos2dxVideoView;)Z
    .locals 0

    .line 37
    iget-boolean p0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMetaUpdated:Z

    return p0
.end method

.method static synthetic access$202(Lorg/cocos2dx/lib/Cocos2dxVideoView;Z)Z
    .locals 0

    .line 37
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMetaUpdated:Z

    return p1
.end method

.method static synthetic access$300(Lorg/cocos2dx/lib/Cocos2dxVideoView;I)V
    .locals 0

    .line 37
    invoke-direct {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->sendEvent(I)V

    return-void
.end method

.method static synthetic access$402(Lorg/cocos2dx/lib/Cocos2dxVideoView;Lorg/cocos2dx/lib/Cocos2dxVideoView$State;)Lorg/cocos2dx/lib/Cocos2dxVideoView$State;
    .locals 0

    .line 37
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    return-object p1
.end method

.method static synthetic access$500(Lorg/cocos2dx/lib/Cocos2dxVideoView;)Ljava/lang/String;
    .locals 0

    .line 37
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->TAG:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$602(Lorg/cocos2dx/lib/Cocos2dxVideoView;Landroid/view/SurfaceHolder;)Landroid/view/SurfaceHolder;
    .locals 0

    .line 37
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    return-object p1
.end method

.method static synthetic access$700(Lorg/cocos2dx/lib/Cocos2dxVideoView;)V
    .locals 0

    .line 37
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->openVideo()V

    return-void
.end method

.method static synthetic access$800(Lorg/cocos2dx/lib/Cocos2dxVideoView;)I
    .locals 0

    .line 37
    iget p0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mPositionBeforeRelease:I

    return p0
.end method

.method static synthetic access$802(Lorg/cocos2dx/lib/Cocos2dxVideoView;I)I
    .locals 0

    .line 37
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mPositionBeforeRelease:I

    return p1
.end method

.method static synthetic access$900(Lorg/cocos2dx/lib/Cocos2dxVideoView;)Landroid/media/MediaPlayer;
    .locals 0

    .line 37
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    return-object p0
.end method

.method private initVideoView()V
    .locals 2

    const/4 v0, 0x0

    .line 376
    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoWidth:I

    .line 377
    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoHeight:I

    .line 378
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->getHolder()Landroid/view/SurfaceHolder;

    move-result-object v0

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mSHCallback:Landroid/view/SurfaceHolder$Callback;

    invoke-interface {v0, v1}, Landroid/view/SurfaceHolder;->addCallback(Landroid/view/SurfaceHolder$Callback;)V

    .line 380
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->getHolder()Landroid/view/SurfaceHolder;

    move-result-object v0

    const/4 v1, 0x3

    invoke-interface {v0, v1}, Landroid/view/SurfaceHolder;->setType(I)V

    const/4 v0, 0x1

    .line 381
    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->setFocusable(Z)V

    .line 382
    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->setFocusableInTouchMode(Z)V

    .line 383
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->IDLE:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    return-void
.end method

.method private openVideo()V
    .locals 10

    const-string v0, "Unable to open content: "

    .line 396
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    if-nez v1, :cond_0

    return-void

    .line 400
    :cond_0
    iget-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mIsAssetRouse:Z

    if-eqz v1, :cond_1

    .line 401
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoFilePath:Ljava/lang/String;

    if-nez v1, :cond_2

    return-void

    .line 403
    :cond_1
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoUri:Landroid/net/Uri;

    if-nez v1, :cond_2

    return-void

    .line 407
    :cond_2
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->pausePlaybackService()V

    const/4 v1, 0x0

    const/4 v2, 0x1

    .line 410
    :try_start_0
    new-instance v3, Landroid/media/MediaPlayer;

    invoke-direct {v3}, Landroid/media/MediaPlayer;-><init>()V

    iput-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    .line 411
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mPreparedListener:Landroid/media/MediaPlayer$OnPreparedListener;

    invoke-virtual {v3, v4}, Landroid/media/MediaPlayer;->setOnPreparedListener(Landroid/media/MediaPlayer$OnPreparedListener;)V

    .line 412
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCompletionListener:Landroid/media/MediaPlayer$OnCompletionListener;

    invoke-virtual {v3, v4}, Landroid/media/MediaPlayer;->setOnCompletionListener(Landroid/media/MediaPlayer$OnCompletionListener;)V

    .line 413
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mErrorListener:Landroid/media/MediaPlayer$OnErrorListener;

    invoke-virtual {v3, v4}, Landroid/media/MediaPlayer;->setOnErrorListener(Landroid/media/MediaPlayer$OnErrorListener;)V

    .line 414
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    invoke-virtual {v3, v4}, Landroid/media/MediaPlayer;->setDisplay(Landroid/view/SurfaceHolder;)V

    .line 415
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    const/4 v4, 0x3

    invoke-virtual {v3, v4}, Landroid/media/MediaPlayer;->setAudioStreamType(I)V

    .line 416
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {v3, v2}, Landroid/media/MediaPlayer;->setScreenOnWhilePlaying(Z)V

    .line 418
    iget-boolean v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mIsAssetRouse:Z

    if-eqz v3, :cond_3

    .line 419
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCocos2dxActivity:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v3}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v3

    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoFilePath:Ljava/lang/String;

    invoke-virtual {v3, v4}, Landroid/content/res/AssetManager;->openFd(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;

    move-result-object v3

    .line 420
    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {v3}, Landroid/content/res/AssetFileDescriptor;->getFileDescriptor()Ljava/io/FileDescriptor;

    move-result-object v5

    invoke-virtual {v3}, Landroid/content/res/AssetFileDescriptor;->getStartOffset()J

    move-result-wide v6

    invoke-virtual {v3}, Landroid/content/res/AssetFileDescriptor;->getLength()J

    move-result-wide v8

    invoke-virtual/range {v4 .. v9}, Landroid/media/MediaPlayer;->setDataSource(Ljava/io/FileDescriptor;JJ)V

    goto :goto_0

    .line 422
    :cond_3
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoUri:Landroid/net/Uri;

    invoke-virtual {v4}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/media/MediaPlayer;->setDataSource(Ljava/lang/String;)V

    .line 424
    :goto_0
    sget-object v3, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->INITIALIZED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    iput-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 428
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {v3}, Landroid/media/MediaPlayer;->prepare()V

    .line 429
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->showFirstFrame()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v3

    .line 438
    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoUri:Landroid/net/Uri;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0, v3}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 439
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->ERROR:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 440
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mErrorListener:Landroid/media/MediaPlayer$OnErrorListener;

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    invoke-interface {v0, v3, v2, v1}, Landroid/media/MediaPlayer$OnErrorListener;->onError(Landroid/media/MediaPlayer;II)Z

    return-void

    :catch_1
    move-exception v3

    .line 433
    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoUri:Landroid/net/Uri;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0, v3}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 434
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->ERROR:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 435
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mErrorListener:Landroid/media/MediaPlayer$OnErrorListener;

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    invoke-interface {v0, v3, v2, v1}, Landroid/media/MediaPlayer$OnErrorListener;->onError(Landroid/media/MediaPlayer;II)Z

    return-void
.end method

.method private pausePlaybackService()V
    .locals 3

    .line 570
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.android.music.musicservicecommand"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "command"

    const-string v2, "pause"

    .line 571
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 572
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCocos2dxActivity:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v1, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->sendBroadcast(Landroid/content/Intent;)V

    return-void
.end method

.method private release()V
    .locals 1

    .line 551
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    .line 552
    invoke-virtual {v0}, Landroid/media/MediaPlayer;->release()V

    const/4 v0, 0x0

    .line 553
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    :cond_0
    return-void
.end method

.method private sendEvent(I)V
    .locals 2

    .line 562
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mOnVideoEventListener:Lorg/cocos2dx/lib/Cocos2dxVideoView$OnVideoEventListener;

    if-eqz v0, :cond_0

    .line 563
    iget v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewTag:I

    invoke-interface {v0, v1, p1}, Lorg/cocos2dx/lib/Cocos2dxVideoView$OnVideoEventListener;->onVideoEvent(II)V

    :cond_0
    return-void
.end method

.method private setVideoURI(Landroid/net/Uri;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/net/Uri;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 390
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoUri:Landroid/net/Uri;

    const/4 p1, 0x0

    .line 391
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoWidth:I

    .line 392
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoHeight:I

    return-void
.end method

.method private showFirstFrame()V
    .locals 2

    .line 558
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/media/MediaPlayer;->seekTo(I)V

    return-void
.end method


# virtual methods
.method public fixSize()V
    .locals 4

    .line 290
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mFullScreenEnabled:Z

    if-eqz v0, :cond_0

    .line 291
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCocos2dxActivity:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getGLSurfaceView()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->getWidth()I

    move-result v0

    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mFullScreenWidth:I

    .line 292
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCocos2dxActivity:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getGLSurfaceView()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    move-result-object v0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->getHeight()I

    move-result v0

    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mFullScreenHeight:I

    .line 294
    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mFullScreenWidth:I

    iget v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mFullScreenHeight:I

    const/4 v2, 0x0

    invoke-virtual {p0, v2, v2, v0, v1}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->fixSize(IIII)V

    goto :goto_0

    .line 296
    :cond_0
    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewLeft:I

    iget v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewTop:I

    iget v2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewWidth:I

    iget v3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewHeight:I

    invoke-virtual {p0, v0, v1, v2, v3}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->fixSize(IIII)V

    :goto_0
    return-void
.end method

.method public fixSize(IIII)V
    .locals 4

    .line 301
    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoWidth:I

    if-eqz v0, :cond_5

    iget v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoHeight:I

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    if-eqz p3, :cond_4

    if-eqz p4, :cond_4

    .line 308
    iget-boolean v2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mKeepRatio:Z

    if-eqz v2, :cond_3

    iget-boolean v2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mFullScreenEnabled:Z

    if-nez v2, :cond_3

    mul-int v2, v0, p4

    mul-int v3, p3, v1

    if-le v2, v3, :cond_1

    .line 310
    iput p3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleWidth:I

    mul-int v1, v1, p3

    .line 311
    div-int/2addr v1, v0

    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleHeight:I

    goto :goto_0

    :cond_1
    mul-int v2, v0, p4

    mul-int v3, p3, v1

    if-ge v2, v3, :cond_2

    mul-int v0, v0, p4

    .line 313
    div-int/2addr v0, v1

    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleWidth:I

    .line 314
    iput p4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleHeight:I

    .line 316
    :cond_2
    :goto_0
    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleWidth:I

    sub-int/2addr p3, v0

    div-int/lit8 p3, p3, 0x2

    add-int/2addr p1, p3

    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleLeft:I

    .line 317
    iget p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleHeight:I

    sub-int/2addr p4, p1

    div-int/lit8 p4, p4, 0x2

    add-int/2addr p2, p4

    iput p2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleTop:I

    goto :goto_2

    .line 319
    :cond_3
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleLeft:I

    .line 320
    iput p2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleTop:I

    .line 321
    iput p3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleWidth:I

    .line 322
    iput p4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleHeight:I

    goto :goto_2

    .line 326
    :cond_4
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleLeft:I

    .line 327
    iput p2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleTop:I

    .line 328
    iget p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoWidth:I

    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleWidth:I

    .line 329
    iget p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoHeight:I

    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleHeight:I

    goto :goto_2

    .line 302
    :cond_5
    :goto_1
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleLeft:I

    .line 303
    iput p2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleTop:I

    .line 304
    iput p3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleWidth:I

    .line 305
    iput p4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleHeight:I

    .line 332
    :goto_2
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->getHolder()Landroid/view/SurfaceHolder;

    move-result-object p1

    iget p2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleWidth:I

    iget p3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleHeight:I

    invoke-interface {p1, p2, p3}, Landroid/view/SurfaceHolder;->setFixedSize(II)V

    .line 334
    new-instance p1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 p2, -0x1

    invoke-direct {p1, p2, p2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    .line 336
    iget p2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleLeft:I

    iput p2, p1, Landroid/widget/FrameLayout$LayoutParams;->leftMargin:I

    .line 337
    iget p2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleTop:I

    iput p2, p1, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    .line 338
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public getCurrentPosition()I
    .locals 4

    .line 183
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->ERROR:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    if-nez v1, :cond_1

    goto :goto_1

    :cond_1
    const/4 v2, 0x0

    :goto_1
    or-int/2addr v0, v2

    if-nez v0, :cond_2

    .line 185
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->getCurrentPosition()I

    move-result v0

    return v0

    :cond_2
    const/4 v0, -0x1

    return v0
.end method

.method public getDuration()I
    .locals 2

    .line 192
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->IDLE:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->ERROR:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->INITIALIZED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    .line 196
    invoke-virtual {v0}, Landroid/media/MediaPlayer;->getDuration()I

    move-result v0

    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mDuration:I

    .line 199
    :cond_0
    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mDuration:I

    return v0
.end method

.method protected onMeasure(II)V
    .locals 0

    .line 223
    invoke-super {p0, p1, p2}, Landroid/view/SurfaceView;->onMeasure(II)V

    .line 224
    iget p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleWidth:I

    iget p2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVisibleHeight:I

    invoke-virtual {p0, p1, p2}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->setMeasuredDimension(II)V

    return-void
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 1

    .line 229
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    and-int/lit16 p1, p1, 0xff

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    const/4 p1, 0x5

    .line 230
    invoke-direct {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->sendEvent(I)V

    :cond_0
    return v0
.end method

.method public pause()V
    .locals 2

    .line 271
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->STARTED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PLAYBACK_COMPLETED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-ne v0, v1, :cond_1

    :cond_0
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_1

    .line 273
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PAUSED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 274
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->pause()V

    const/4 v0, 0x1

    .line 275
    invoke-direct {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->sendEvent(I)V

    :cond_1
    return-void
.end method

.method public resolveAdjustedSize(II)I
    .locals 2

    .line 343
    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getMode(I)I

    move-result v0

    .line 344
    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p2

    const/high16 v1, -0x80000000

    if-eq v0, v1, :cond_1

    if-eqz v0, :cond_2

    const/high16 v1, 0x40000000    # 2.0f

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    move p1, p2

    goto :goto_0

    .line 359
    :cond_1
    invoke-static {p1, p2}, Ljava/lang/Math;->min(II)I

    move-result p1

    :cond_2
    :goto_0
    return p1
.end method

.method public seekTo(I)V
    .locals 2

    .line 280
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->IDLE:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->INITIALIZED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->STOPPED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->ERROR:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    if-nez v0, :cond_0

    goto :goto_0

    .line 286
    :cond_0
    invoke-virtual {v0, p1}, Landroid/media/MediaPlayer;->seekTo(I)V

    :cond_1
    :goto_0
    return-void
.end method

.method public setFullScreenEnabled(Z)V
    .locals 1

    .line 143
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mFullScreenEnabled:Z

    if-eq v0, p1, :cond_0

    .line 144
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mFullScreenEnabled:Z

    .line 145
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->fixSize()V

    :cond_0
    return-void
.end method

.method public setKeepRatio(Z)V
    .locals 0

    .line 156
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mKeepRatio:Z

    .line 157
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->fixSize()V

    return-void
.end method

.method public setVideoFileName(Ljava/lang/String;)V
    .locals 2

    const-string v0, "@assets/"

    .line 166
    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x8

    .line 167
    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    :cond_0
    const-string v0, "/"

    .line 170
    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    const/4 v0, 0x0

    .line 171
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mIsAssetRouse:Z

    .line 172
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-direct {p0, p1, v1}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->setVideoURI(Landroid/net/Uri;Ljava/util/Map;)V

    goto :goto_0

    .line 176
    :cond_1
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mVideoFilePath:Ljava/lang/String;

    const/4 v0, 0x1

    .line 177
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mIsAssetRouse:Z

    .line 178
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-direct {p0, p1, v1}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->setVideoURI(Landroid/net/Uri;Ljava/util/Map;)V

    :goto_0
    return-void
.end method

.method public setVideoRect(IIII)V
    .locals 1

    .line 131
    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewLeft:I

    if-ne v0, p1, :cond_0

    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewTop:I

    if-ne v0, p2, :cond_0

    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewWidth:I

    if-ne v0, p3, :cond_0

    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewHeight:I

    if-ne v0, p4, :cond_0

    return-void

    .line 134
    :cond_0
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewLeft:I

    .line 135
    iput p2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewTop:I

    .line 136
    iput p3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewWidth:I

    .line 137
    iput p4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewHeight:I

    .line 139
    iget p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewLeft:I

    iget p2, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewTop:I

    iget p3, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewWidth:I

    iget p4, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mViewHeight:I

    invoke-virtual {p0, p1, p2, p3, p4}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->fixSize(IIII)V

    return-void
.end method

.method public setVideoURL(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 161
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mIsAssetRouse:Z

    .line 162
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->setVideoURI(Landroid/net/Uri;Ljava/util/Map;)V

    return-void
.end method

.method public setVideoViewEventListener(Lorg/cocos2dx/lib/Cocos2dxVideoView$OnVideoEventListener;)V
    .locals 0

    .line 209
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mOnVideoEventListener:Lorg/cocos2dx/lib/Cocos2dxVideoView$OnVideoEventListener;

    return-void
.end method

.method public setVisibility(I)V
    .locals 0

    .line 218
    invoke-super {p0, p1}, Landroid/view/SurfaceView;->setVisibility(I)V

    return-void
.end method

.method public setVolume(F)V
    .locals 1

    .line 150
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    .line 151
    invoke-virtual {v0, p1, p1}, Landroid/media/MediaPlayer;->setVolume(FF)V

    :cond_0
    return-void
.end method

.method public start()V
    .locals 2

    .line 259
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PREPARED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PAUSED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PLAYBACK_COMPLETED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-ne v0, v1, :cond_1

    :cond_0
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_1

    .line 264
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->STARTED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 265
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->start()V

    const/4 v0, 0x0

    .line 266
    invoke-direct {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->sendEvent(I)V

    :cond_1
    return-void
.end method

.method public stop()V
    .locals 2

    .line 240
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->IDLE:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->INITIALIZED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->ERROR:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->STOPPED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    .line 242
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->STOPPED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mCurrentState:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 243
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->stop()V

    const/4 v0, 0x2

    .line 244
    invoke-direct {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->sendEvent(I)V

    .line 248
    :try_start_0
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxVideoView;->mMediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->prepare()V

    .line 249
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->showFirstFrame()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method public stopPlayback()V
    .locals 0

    .line 255
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxVideoView;->release()V

    return-void
.end method
