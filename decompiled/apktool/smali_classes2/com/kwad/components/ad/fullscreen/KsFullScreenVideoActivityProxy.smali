.class public Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;
.super Lcom/kwad/components/core/l/b;

# interfaces
.implements Lcom/kwad/components/offline/api/core/adlive/listener/OnAdLiveResumeInterceptor;


# annotations
.annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicImpl;
    value = Lcom/kwad/sdk/api/proxy/app/FeedDownloadActivity;
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/components/core/l/b<",
        "Lcom/kwad/components/ad/reward/j;",
        ">;",
        "Lcom/kwad/components/offline/api/core/adlive/listener/OnAdLiveResumeInterceptor;"
    }
.end annotation


# static fields
.field public static final KEY_TEMPLATE:Ljava/lang/String; = "key_template_json"

.field public static final KEY_VIDEO_PLAY_CONFIG:Ljava/lang/String; = "key_video_play_config"

.field private static final TAG:Ljava/lang/String; = "FullScreenVideo"

.field private static final sHashMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

.field private mFullScreenPresenter:Lcom/kwad/components/ad/fullscreen/c/b;

.field private mInteractionListener:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

.field private mIsBackEnable:Z

.field private mPageDismissCalled:Z

.field public mPageEnterTime:J

.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private mPlayLayout:Landroid/widget/FrameLayout;

.field private mReportExtData:Lorg/json/JSONObject;

.field private mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field public mScreenOrientation:I

.field private mTimerHelper:Lcom/kwad/sdk/utils/bi;

.field private mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->sHashMap:Ljava/util/HashMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/l/b;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy$1;-><init>(Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    new-instance v0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy$2;-><init>(Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    return-void
.end method

.method static synthetic access$002(Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mIsBackEnable:Z

    return p1
.end method

.method static synthetic access$100(Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;)Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    return-object p0
.end method

.method static synthetic access$200(Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->notifyPageDismiss()V

    return-void
.end method

.method private createPlayModuleProxy(Lcom/kwad/components/ad/reward/j;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/l/a;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/reward/l/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    new-instance v1, Lcom/kwad/components/ad/reward/l/d;

    const/4 v2, 0x3

    invoke-direct {v1, v2, v0}, Lcom/kwad/components/ad/reward/l/d;-><init>(ILcom/kwad/components/ad/j/a;)V

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/kwad/components/ad/reward/l/c;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-direct {v0, p1, v1}, Lcom/kwad/components/ad/reward/l/c;-><init>(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/core/video/DetailVideoView;)V

    new-instance v1, Lcom/kwad/components/ad/reward/l/d;

    const/4 v2, 0x1

    invoke-direct {v1, v2, v0}, Lcom/kwad/components/ad/reward/l/d;-><init>(ILcom/kwad/components/ad/j/a;)V

    :goto_0
    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j$a;)V

    iput-object v1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    return-void
.end method

.method private static getListenerKey(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 2

    if-nez p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->creativeId:J

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private getTimerHelper()Lcom/kwad/sdk/utils/bi;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/utils/bi;

    invoke-direct {v0}, Lcom/kwad/sdk/utils/bi;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->startTiming()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    return-object v0
.end method

.method private initVideoPlayConfig(Lcom/kwad/sdk/api/KsVideoPlayConfig;)V
    .locals 2

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->getShowScene()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mReportExtData:Lorg/json/JSONObject;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mReportExtData:Lorg/json/JSONObject;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->getShowScene()Ljava/lang/String;

    move-result-object p1

    const-string v1, "ext_showscene"

    invoke-static {v0, v1, p1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public static launch(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/api/KsVideoPlayConfig;Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;)V
    .locals 3

    invoke-static {p1}, Lcom/kwad/sdk/utils/l;->cA(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isShowLandscape()Z

    move-result v0

    if-eqz v0, :cond_0

    const-class v0, Lcom/kwad/sdk/api/proxy/app/KsFullScreenLandScapeVideoActivity;

    const-class v1, Lcom/kwad/components/ad/fullscreen/KsFullScreenLandScapeVideoActivityProxy;

    invoke-static {v0, v1}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    goto :goto_0

    :cond_0
    const-class v0, Lcom/kwad/sdk/api/proxy/app/FeedDownloadActivity;

    const-class v1, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;

    invoke-static {v0, v1}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    :goto_0
    const/high16 v0, 0x10000000

    invoke-virtual {v1, v0}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "key_template_json"

    invoke-virtual {v1, v2, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v0, "key_video_play_config"

    invoke-virtual {v1, v0, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    sget-object p2, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->sHashMap:Ljava/util/HashMap;

    invoke-static {p1}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->getListenerKey(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1, p3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p0, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    invoke-static {}, Lcom/kwad/sdk/a/a/c;->yb()Lcom/kwad/sdk/a/a/c;

    move-result-object p0

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/a/a/c;->bc(Z)V

    return-void
.end method

.method private notifyPageDismiss()V
    .locals 5

    iget-boolean v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mPageDismissCalled:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mPageDismissCalled:Z

    invoke-static {}, Lcom/kwad/sdk/a/a/c;->yb()Lcom/kwad/sdk/a/a/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/a/a/c;->ye()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x6

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v2

    iget-object v4, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mReportExtData:Lorg/json/JSONObject;

    invoke-static {v0, v1, v2, v3, v4}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJLorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;->onPageDismiss()V

    :cond_1
    return-void
.end method

.method public static register()V
    .locals 2

    const-class v0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;

    const-class v1, Lcom/kwad/sdk/api/proxy/app/KsFullScreenVideoActivity;

    invoke-static {v1, v0}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    const-class v1, Lcom/kwad/sdk/api/proxy/app/FeedDownloadActivity;

    invoke-static {v1, v0}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public checkIntentData(Landroid/content/Intent;)Z
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "key_video_play_config"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object p1

    instance-of v0, p1, Lcom/kwad/sdk/api/KsVideoPlayConfig;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/kwad/sdk/api/KsVideoPlayConfig;

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "key_template_json"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-nez p1, :cond_1

    goto :goto_1

    :cond_1
    const/4 p1, 0x1

    return p1

    :cond_2
    :goto_1
    const-string p1, "fullscreen"

    const-string v0, "show"

    invoke-static {p1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method public finish()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->finish()V

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->notifyPageDismiss()V

    return-void
.end method

.method public getLayoutId()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_activity_fullscreen_video:I

    return v0
.end method

.method public getPageName()Ljava/lang/String;
    .locals 1

    const-string v0, "KsFullScreenVideoActivityProxy"

    return-object v0
.end method

.method public handledAdLiveOnResume()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->fO()Z

    move-result v0

    return v0
.end method

.method public initData()V
    .locals 4

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mPageEnterTime:J

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v3, 0x0

    invoke-static {v3, v2, v0, v1}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLcom/kwad/sdk/core/response/model/AdTemplate;J)V

    invoke-static {v3}, Lcom/kwad/components/ad/reward/monitor/a;->I(Z)V

    sget-object v0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->sHashMap:Ljava/util/HashMap;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->getListenerKey(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isShowLandscape()Z

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mScreenOrientation:I

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    invoke-interface {v1}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x2

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    :goto_0
    iput v1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->initVideoPlayConfig(Lcom/kwad/sdk/api/KsVideoPlayConfig;)V

    return-void
.end method

.method public initView()V
    .locals 3

    sget v0, Lcom/kwad/sdk/R$id;->ksad_root_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_player:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/video/DetailVideoView;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_play_layout:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mPlayLayout:Landroid/widget/FrameLayout;

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zX()I

    move-result v1

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/kwad/components/core/video/DetailVideoView;->f(ZI)V

    const-string v0, "fullscreen"

    const-string v1, "show"

    invoke-static {v0, v1}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public needAdaptionScreen()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public onBackPressed()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mFullScreenPresenter:Lcom/kwad/components/ad/fullscreen/c/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/fullscreen/c/b;->bP()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-boolean v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mIsBackEnable:Z

    if-eqz v0, :cond_1

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->onBackPressed()V

    :cond_1
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/components/core/l/b;->onCreate(Landroid/os/Bundle;)V

    sget-object p1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FULLSCREEN:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v1, "adShowSuccess"

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    return-void
.end method

.method protected onCreateCallerContext()Lcom/kwad/components/ad/reward/j;
    .locals 5

    new-instance v0, Lcom/kwad/components/ad/reward/j;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/j;-><init>(Lcom/kwad/components/core/l/b;)V

    iget-wide v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mPageEnterTime:J

    iput-wide v1, v0, Lcom/kwad/components/ad/reward/j;->mPageEnterTime:J

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->oU:Z

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    iput-object v2, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    iget v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mScreenOrientation:I

    iput v2, v0, Lcom/kwad/components/ad/reward/j;->mScreenOrientation:I

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    iput-object v2, v0, Lcom/kwad/components/ad/reward/j;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mReportExtData:Lorg/json/JSONObject;

    iput-object v2, v0, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v2, v0, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v2, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->createPlayModuleProxy(Lcom/kwad/components/ad/reward/j;)V

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-eqz v2, :cond_0

    new-instance v2, Lcom/kwad/components/core/e/d/c;

    iget-object v3, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v4, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mReportExtData:Lorg/json/JSONObject;

    invoke-direct {v2, v3, v4}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)V

    iput-object v2, v0, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    :cond_0
    new-instance v2, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    iget-object v3, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mContext:Landroid/content/Context;

    iget-object v4, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v2, v0, v3, v4}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;-><init>(Lcom/kwad/components/ad/reward/j;Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v2, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v2}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->bk(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v2

    if-eqz v2, :cond_1

    new-instance v2, Lcom/kwad/components/ad/reward/l;

    iget-object v3, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mReportExtData:Lorg/json/JSONObject;

    const/4 v4, 0x0

    invoke-direct {v2, v0, v3, v4}, Lcom/kwad/components/ad/reward/l;-><init>(Lcom/kwad/components/ad/reward/j;Lorg/json/JSONObject;Ljava/lang/String;)V

    iput-object v2, v0, Lcom/kwad/components/ad/reward/j;->oZ:Lcom/kwad/components/ad/reward/l;

    :cond_1
    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-eqz v2, :cond_2

    new-instance v2, Lcom/kwad/components/core/playable/a;

    sget v3, Lcom/kwad/sdk/R$id;->ksad_playable_webview:I

    invoke-virtual {p0, v3}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {v2, v3}, Lcom/kwad/components/core/playable/a;-><init>(Lcom/kwad/sdk/core/webview/KsAdWebView;)V

    iput-object v2, v0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    :cond_2
    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->am(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-eqz v2, :cond_3

    new-instance v2, Lcom/kwad/components/ad/k/a;

    invoke-direct {v2}, Lcom/kwad/components/ad/k/a;-><init>()V

    invoke-virtual {v2, v1}, Lcom/kwad/components/ad/k/a;->ah(Z)Lcom/kwad/components/ad/k/a;

    move-result-object v2

    iput-object v2, v0, Lcom/kwad/components/ad/reward/j;->pa:Lcom/kwad/components/ad/k/a;

    :cond_3
    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aj(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v1

    goto :goto_0

    :cond_4
    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ae(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v1

    :goto_0
    iput-wide v1, v0, Lcom/kwad/components/ad/reward/j;->pE:J

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/ad/reward/j;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    return-object v0
.end method

.method public bridge synthetic onCreateCallerContext()Lcom/kwad/components/core/l/a;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->onCreateCallerContext()Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    return-object v0
.end method

.method public onCreatePresenter()Lcom/kwad/sdk/mvp/Presenter;
    .locals 4

    new-instance v0, Lcom/kwad/components/ad/fullscreen/b;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/fullscreen/b;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    new-instance v1, Lcom/kwad/components/ad/fullscreen/c/b;

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->getActivity()Landroid/app/Activity;

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v3, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v3, Lcom/kwad/components/ad/reward/j;

    invoke-direct {v1, p0, v2, v0, v3}, Lcom/kwad/components/ad/fullscreen/c/b;-><init>(Lcom/kwad/components/core/l/b;Landroid/view/ViewGroup;Lcom/kwad/components/ad/fullscreen/b;Lcom/kwad/components/ad/reward/j;)V

    iput-object v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mFullScreenPresenter:Lcom/kwad/components/ad/fullscreen/c/b;

    return-object v1
.end method

.method public onDestroy()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->onDestroy()V

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->notifyPageDismiss()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/videocache/c/a;->bj(Landroid/content/Context;)Lcom/kwad/sdk/core/videocache/f;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/videocache/f;->dQ(Ljava/lang/String;)Z

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jS()Lcom/kwad/components/ad/reward/f/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/f/a;->removeInterceptor(Lcom/kwad/components/offline/api/core/adlive/listener/OnAdLiveResumeInterceptor;)V

    :cond_1
    sget-object v0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->sHashMap:Ljava/util/HashMap;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->getListenerKey(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    return-void
.end method

.method public onPause()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->onPause()V

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->Kc()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    const-wide/16 v1, -0x1

    iput-wide v1, v0, Lcom/kwad/components/ad/reward/j;->mPageEnterTime:J

    :cond_0
    return-void
.end method

.method public onPreCreate(Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/core/l/b;->onPreCreate(Landroid/os/Bundle;)V

    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "key_template"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->removeExtra(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public onResume()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->onResume()V

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/KsFullScreenVideoActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->Kb()V

    return-void
.end method
