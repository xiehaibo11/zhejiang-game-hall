.class public Lcom/tkay/expressad/playercommon/PlayerView;
.super Landroid/widget/LinearLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;
    }
.end annotation


# static fields
.field public static final TAG:Ljava/lang/String; = "PlayerView"


# instance fields
.field private isBTVideo:Z

.field private isBTVideoPlaying:Z

.field private mInitState:Z

.field private mIsCovered:Z

.field private mIsFirstCreateHolder:Z

.field private mIsNeedToRepeatPrepare:Z

.field private mIsSurfaceHolderDestoryed:Z

.field private mLlSurContainer:Landroid/widget/LinearLayout;

.field private mLoadingView:Landroid/widget/LinearLayout;

.field private mPlayUrl:Ljava/lang/String;

.field private mSurfaceHolder:Landroid/view/SurfaceHolder;

.field private mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 41
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 28
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mInitState:Z

    const/4 v0, 0x1

    .line 30
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsFirstCreateHolder:Z

    .line 31
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsSurfaceHolderDestoryed:Z

    .line 32
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsCovered:Z

    .line 33
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsNeedToRepeatPrepare:Z

    .line 35
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->isBTVideo:Z

    .line 36
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->isBTVideoPlaying:Z

    .line 42
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 46
    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 28
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mInitState:Z

    const/4 p2, 0x1

    .line 30
    iput-boolean p2, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsFirstCreateHolder:Z

    .line 31
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsSurfaceHolderDestoryed:Z

    .line 32
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsCovered:Z

    .line 33
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsNeedToRepeatPrepare:Z

    .line 35
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->isBTVideo:Z

    .line 36
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->isBTVideoPlaying:Z

    .line 47
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->init()V

    return-void
.end method

.method static synthetic access$100(Lcom/tkay/expressad/playercommon/PlayerView;)Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;
    .locals 0

    .line 18
    iget-object p0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    return-object p0
.end method

.method static synthetic access$202(Lcom/tkay/expressad/playercommon/PlayerView;Landroid/view/SurfaceHolder;)Landroid/view/SurfaceHolder;
    .locals 0

    .line 18
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    return-object p1
.end method

.method static synthetic access$302(Lcom/tkay/expressad/playercommon/PlayerView;Z)Z
    .locals 0

    .line 18
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsFirstCreateHolder:Z

    return p1
.end method

.method static synthetic access$400(Lcom/tkay/expressad/playercommon/PlayerView;)Z
    .locals 0

    .line 18
    iget-boolean p0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsSurfaceHolderDestoryed:Z

    return p0
.end method

.method static synthetic access$402(Lcom/tkay/expressad/playercommon/PlayerView;Z)Z
    .locals 0

    .line 18
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsSurfaceHolderDestoryed:Z

    return p1
.end method

.method static synthetic access$502(Lcom/tkay/expressad/playercommon/PlayerView;Z)Z
    .locals 0

    .line 18
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsNeedToRepeatPrepare:Z

    return p1
.end method

.method static synthetic access$600(Lcom/tkay/expressad/playercommon/PlayerView;)Z
    .locals 0

    .line 18
    iget-boolean p0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsCovered:Z

    return p0
.end method

.method static synthetic access$700(Lcom/tkay/expressad/playercommon/PlayerView;)Z
    .locals 0

    .line 18
    iget-boolean p0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->isBTVideo:Z

    return p0
.end method

.method static synthetic access$800(Lcom/tkay/expressad/playercommon/PlayerView;)Z
    .locals 0

    .line 18
    iget-boolean p0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->isBTVideoPlaying:Z

    return p0
.end method

.method private init()V
    .locals 1

    .line 60
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->initView()V

    .line 61
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->initPlayer()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 63
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private initPlayer()V
    .locals 1

    .line 68
    new-instance v0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-direct {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    return-void
.end method

.method private initView()V
    .locals 4

    .line 102
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "tkay_playercommon_player_view"

    const-string v2, "layout"

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 103
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 105
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "id"

    const-string v3, "tkay_playercommon_ll_sur_container"

    invoke-static {v1, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/LinearLayout;

    iput-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mLlSurContainer:Landroid/widget/LinearLayout;

    .line 106
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "tkay_playercommon_ll_loading"

    invoke-static {v1, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/LinearLayout;

    iput-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mLoadingView:Landroid/widget/LinearLayout;

    .line 108
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->addSurfaceView()V

    const/4 v1, -0x1

    .line 109
    invoke-virtual {p0, v0, v1, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->addView(Landroid/view/View;II)V

    :cond_0
    return-void
.end method


# virtual methods
.method public addSurfaceView()V
    .locals 4

    .line 77
    :try_start_0
    new-instance v0, Landroid/view/SurfaceView;

    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/view/SurfaceView;-><init>(Landroid/content/Context;)V

    .line 78
    invoke-virtual {v0}, Landroid/view/SurfaceView;->getHolder()Landroid/view/SurfaceHolder;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    const/4 v2, 0x3

    .line 79
    invoke-interface {v1, v2}, Landroid/view/SurfaceHolder;->setType(I)V

    .line 80
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    const/4 v2, 0x1

    invoke-interface {v1, v2}, Landroid/view/SurfaceHolder;->setKeepScreenOn(Z)V

    .line 81
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    new-instance v2, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;

    const/4 v3, 0x0

    invoke-direct {v2, p0, v3}, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;-><init>(Lcom/tkay/expressad/playercommon/PlayerView;Lcom/tkay/expressad/playercommon/PlayerView$1;)V

    invoke-interface {v1, v2}, Landroid/view/SurfaceHolder;->addCallback(Landroid/view/SurfaceHolder$Callback;)V

    .line 82
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mLlSurContainer:Landroid/widget/LinearLayout;

    const/4 v2, -0x1

    invoke-virtual {v1, v0, v2, v2}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;II)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 84
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public closeSound()V
    .locals 1

    .line 285
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 286
    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->closeSound()V

    :cond_0
    return-void
.end method

.method public coverUnlockResume()V
    .locals 2

    .line 315
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->setIsFrontDesk(Z)V

    .line 316
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_2

    .line 318
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hasPrepare()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsNeedToRepeatPrepare:Z

    if-eqz v0, :cond_0

    goto :goto_0

    .line 321
    :cond_0
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->start(Z)V

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x0

    .line 319
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/playercommon/PlayerView;->playVideo(I)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    :goto_1
    return-void

    :catchall_0
    move-exception v0

    .line 325
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public getCurPosition()I
    .locals 2

    const/4 v0, 0x0

    .line 356
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v1, :cond_0

    .line 357
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->getCurPosition()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 360
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return v0
.end method

.method public getDuration()I
    .locals 1

    .line 366
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 367
    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->getDuration()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public initBufferIngParam(I)V
    .locals 1

    .line 448
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 449
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->initBufferIngParam(I)V

    :cond_0
    return-void
.end method

.method public initVFPData(Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/playercommon/VideoPlayerStatusListener;)Z
    .locals 7

    .line 121
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 126
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mPlayUrl:Ljava/lang/String;

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mLoadingView:Landroid/widget/LinearLayout;

    move-object v3, p1

    move-object v4, p2

    move v5, p3

    move-object v6, p4

    invoke-virtual/range {v0 .. v6}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->initPlayer(Landroid/content/Context;Landroid/view/View;Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/playercommon/VideoPlayerStatusListener;)Z

    const/4 p1, 0x1

    .line 130
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mInitState:Z

    return p1
.end method

.method public isComplete()Z
    .locals 2

    const/4 v0, 0x0

    .line 435
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->isComplete()Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0

    :catchall_0
    move-exception v1

    .line 437
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return v0
.end method

.method public isPlayIng()Z
    .locals 1

    .line 455
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 456
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->isPlayIng()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v0

    .line 459
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public isSilent()Z
    .locals 1

    .line 474
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->isSilent()Z

    move-result v0

    return v0
.end method

.method public justSeekTo(I)V
    .locals 1

    .line 244
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 245
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->justSeekTo(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 248
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onPause()V
    .locals 2

    .line 163
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->pause()V

    .line 164
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 165
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->setIsFrontDesk(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 168
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onResume()V
    .locals 2

    .line 299
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->setIsFrontDesk(Z)V

    .line 300
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsSurfaceHolderDestoryed:Z

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->isComplete()Z

    move-result v0

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsCovered:Z

    if-nez v0, :cond_1

    .line 302
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hasPrepare()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 303
    invoke-virtual {p0}, Lcom/tkay/expressad/playercommon/PlayerView;->resumeStart()V

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 305
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/playercommon/PlayerView;->playVideo(I)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception v0

    .line 309
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public openSound()V
    .locals 1

    .line 276
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 277
    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->openSound()V

    :cond_0
    return-void
.end method

.method public pause()V
    .locals 1

    .line 177
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 178
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->pause()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 181
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public playVideo()Z
    .locals 1

    const/4 v0, 0x0

    .line 158
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/playercommon/PlayerView;->playVideo(I)Z

    move-result v0

    return v0
.end method

.method public playVideo(I)Z
    .locals 3

    const/4 v0, 0x0

    .line 139
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-nez v1, :cond_0

    return v0

    .line 143
    :cond_0
    iget-boolean v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mInitState:Z

    if-nez v1, :cond_1

    return v0

    .line 148
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    iget-object v2, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mPlayUrl:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->play(Ljava/lang/String;I)V

    .line 149
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsNeedToRepeatPrepare:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    .line 152
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return v0
.end method

.method public prepare()V
    .locals 1

    .line 220
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 221
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->prepare()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 224
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public release()V
    .locals 1

    .line 334
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 335
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->releasePlayer()V

    .line 338
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    if-eqz v0, :cond_1

    .line 340
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    invoke-interface {v0}, Landroid/view/SurfaceHolder;->getSurface()Landroid/view/Surface;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Surface;->release()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-void

    :catchall_0
    move-exception v0

    .line 343
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public removeSurface()V
    .locals 1

    .line 94
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mLlSurContainer:Landroid/widget/LinearLayout;

    invoke-virtual {v0}, Landroid/widget/LinearLayout;->removeAllViews()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 96
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public resumeStart()V
    .locals 1

    const/4 v0, 0x1

    .line 187
    :try_start_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/playercommon/PlayerView;->start(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 189
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public seekTo(I)V
    .locals 1

    .line 254
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 255
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->seekTo(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 258
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setDataSource()V
    .locals 1

    .line 195
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 196
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->showLoading()V

    .line 197
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->setDataSource()V

    const/4 v0, 0x0

    .line 198
    iput-boolean v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsNeedToRepeatPrepare:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 201
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setDesk(Z)V
    .locals 1

    .line 291
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->setIsFrontDesk(Z)V

    return-void
.end method

.method public setIsBTVideo(Z)V
    .locals 0

    .line 51
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->isBTVideo:Z

    return-void
.end method

.method public setIsBTVideoPlaying(Z)V
    .locals 0

    .line 55
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->isBTVideoPlaying:Z

    return-void
.end method

.method public setIsCovered(Z)V
    .locals 0

    .line 466
    :try_start_0
    iput-boolean p1, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsCovered:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 469
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setPlaybackParams(F)V
    .locals 1

    .line 484
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 485
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->setPlaybackParams(F)V

    :cond_0
    return-void
.end method

.method public setVolume(FF)V
    .locals 1

    .line 478
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 479
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->setVolume(FF)V

    :cond_0
    return-void
.end method

.method public start(I)V
    .locals 1

    .line 234
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 235
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->start(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 238
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public start(Z)V
    .locals 1

    .line 210
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mIsCovered:Z

    if-nez v0, :cond_0

    .line 211
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->start(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 214
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public stop()V
    .locals 1

    .line 264
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    if-eqz v0, :cond_0

    .line 265
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView;->mVideoFeedsPlayer:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->stop()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 268
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method
