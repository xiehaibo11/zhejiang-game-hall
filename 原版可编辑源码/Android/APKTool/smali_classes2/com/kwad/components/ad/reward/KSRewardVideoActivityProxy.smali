.class public Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;
.super Lcom/kwad/components/core/l/b;

# interfaces
.implements Lcom/kwad/components/ad/reward/j$b;
.implements Lcom/kwad/components/ad/reward/o$a;
.implements Lcom/kwad/components/core/t/c$b;
.implements Lcom/kwad/components/offline/api/core/adlive/listener/OnAdLiveResumeInterceptor;


# annotations
.annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicImpl;
    value = Lcom/kwad/sdk/api/proxy/app/KsRewardVideoActivity;
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/components/core/l/b<",
        "Lcom/kwad/components/ad/reward/j;",
        ">;",
        "Lcom/kwad/components/ad/reward/j$b;",
        "Lcom/kwad/components/ad/reward/o$a;",
        "Lcom/kwad/components/core/t/c$b;",
        "Lcom/kwad/components/offline/api/core/adlive/listener/OnAdLiveResumeInterceptor;"
    }
.end annotation


# static fields
.field public static final KEY_REWARD_TYPE:Ljava/lang/String; = "key_template_reward_type"

.field public static final KEY_TEMPLATE:Ljava/lang/String; = "key_template_json"

.field public static final KEY_VIDEO_PLAY_CONFIG:Ljava/lang/String; = "key_video_play_config"

.field private static final TAG:Ljava/lang/String; = "RewardVideo"


# instance fields
.field private listenerKey:Ljava/lang/String;

.field private mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

.field private mAdRewardStepListener:Lcom/kwad/components/ad/reward/e/d;

.field private mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

.field private mIsBackEnable:Z

.field private mIsFinishVideoLookStep:Z

.field private mModel:Lcom/kwad/components/ad/reward/model/c;

.field private mPageDismissCalled:Z

.field private mPageEnterTime:J

.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private mPlayLayout:Landroid/widget/FrameLayout;

.field private mPlayTime:J

.field private mRewardPresenter:Lcom/kwad/components/ad/reward/o;

.field private final mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

.field private mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field private mTimerHelper:Lcom/kwad/sdk/utils/bi;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/l/b;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mIsFinishVideoLookStep:Z

    new-instance v0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$1;-><init>(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    new-instance v0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;-><init>(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    new-instance v0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$3;-><init>(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    new-instance v0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$4;-><init>(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mAdRewardStepListener:Lcom/kwad/components/ad/reward/e/d;

    new-instance v0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$5;-><init>(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic access$100(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Lcom/kwad/components/ad/reward/model/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    return-object p0
.end method

.method static synthetic access$1000(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Lcom/kwad/components/core/l/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    return-object p0
.end method

.method static synthetic access$1100(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Lcom/kwad/components/core/l/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    return-object p0
.end method

.method static synthetic access$1200(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;Z)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyPageDismiss(Z)V

    return-void
.end method

.method static synthetic access$1302(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mIsBackEnable:Z

    return p1
.end method

.method static synthetic access$1402(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mPlayTime:J

    return-wide p1
.end method

.method static synthetic access$200(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Lcom/kwad/components/core/l/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    return-object p0
.end method

.method static synthetic access$300(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Lcom/kwad/components/core/l/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    return-object p0
.end method

.method static synthetic access$400(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->markOpenNsCompleted()V

    return-void
.end method

.method static synthetic access$500(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyRewardVerify()V

    return-void
.end method

.method static synthetic access$600(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyRewardVerifyStepByStep()V

    return-void
.end method

.method static synthetic access$700(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Ljava/lang/String;
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->getUniqueId()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$800(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Lcom/kwad/components/core/l/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    return-object p0
.end method

.method static synthetic access$900(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Lcom/kwad/components/core/l/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    return-object p0
.end method

.method private createPlayModuleProxy(Lcom/kwad/components/ad/reward/j;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/l/a;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/reward/l/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    new-instance v1, Lcom/kwad/components/ad/reward/l/d;

    const/4 v2, 0x3

    invoke-direct {v1, v2, v0}, Lcom/kwad/components/ad/reward/l/d;-><init>(ILcom/kwad/components/ad/j/a;)V

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/kwad/components/ad/reward/l/c;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-direct {v0, p1, v1}, Lcom/kwad/components/ad/reward/l/c;-><init>(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/core/video/DetailVideoView;)V

    new-instance v1, Lcom/kwad/components/ad/reward/l/d;

    const/4 v2, 0x1

    invoke-direct {v1, v2, v0}, Lcom/kwad/components/ad/reward/l/d;-><init>(ILcom/kwad/components/ad/j/a;)V

    :goto_0
    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    iput-object v1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    return-void
.end method

.method private getTimerHelper()Lcom/kwad/sdk/utils/bi;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/utils/bi;

    invoke-direct {v0}, Lcom/kwad/sdk/utils/bi;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->startTiming()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    return-object v0
.end method

.method private getUniqueId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->listenerKey:Ljava/lang/String;

    return-object v0
.end method

.method private handleNotifyVerify(Z)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->G(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iput-boolean v1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mRewardVerifyCalled:Z

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast p1, Lcom/kwad/components/ad/reward/j;

    iget p1, p1, Lcom/kwad/components/ad/reward/j;->pr:I

    if-nez p1, :cond_1

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/h;->fG()Lcom/kwad/components/ad/reward/h;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/h;->p(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/report/a;->aG(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast p1, Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    if-nez p1, :cond_2

    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/c/a;->gX()Lcom/kwad/components/ad/reward/c/b;

    move-result-object p1

    sget v0, Lcom/kwad/components/ad/reward/c/b;->ru:I

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/c/b;->L(I)V

    :cond_2
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->getUniqueId()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->A(Ljava/lang/String;)Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    move-result-object p1

    if-eqz p1, :cond_3

    new-instance v0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$8;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$8;-><init>(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/4 v0, 0x0

    const/4 v2, -0x1

    invoke-static {p1, v0, v2, v1}, Lcom/kwad/components/ad/reward/monitor/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IIZ)V

    :cond_3
    iget-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/c;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cB(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast p1, Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    if-nez p1, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast p1, Lcom/kwad/components/ad/reward/j;

    iget-boolean p1, p1, Lcom/kwad/components/ad/reward/j;->pk:Z

    if-nez p1, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast p1, Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j;->ga()Z

    move-result p1

    if-nez p1, :cond_4

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->getActivity()Landroid/app/Activity;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/j;->a(Landroid/app/Activity;Lcom/kwad/components/ad/reward/j;)V

    :cond_4
    return-void
.end method

.method private isLaunchTaskCompleted()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/b/a;->isCompleted()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static launch(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/api/KsVideoPlayConfig;Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;Lcom/kwad/components/core/i/d;I)V
    .locals 3

    invoke-static {p1}, Lcom/kwad/sdk/utils/l;->cA(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isShowLandscape()Z

    move-result v0

    if-eqz v0, :cond_0

    const-class v0, Lcom/kwad/sdk/api/proxy/app/KSRewardLandScapeVideoActivity;

    const-class v1, Lcom/kwad/components/ad/reward/KSRewardLandScapeVideoActivityProxy;

    invoke-static {v0, v1}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    goto :goto_0

    :cond_0
    const-class v0, Lcom/kwad/sdk/api/proxy/app/KsRewardVideoActivity;

    const-class v1, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

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

    const-string p2, "key_template_reward_type"

    invoke-virtual {v1, p2, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getUniqueId()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, p3, p4}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->a(Ljava/lang/String;Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;Lcom/kwad/components/core/i/d;)V

    invoke-static {p1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->E(Ljava/lang/String;)V

    invoke-virtual {p0, v1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    invoke-static {}, Lcom/kwad/sdk/a/a/c;->yb()Lcom/kwad/sdk/a/a/c;

    move-result-object p0

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/a/a/c;->bc(Z)V

    return-void
.end method

.method private markOpenNsCompleted()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pB:Lcom/kwad/components/ad/reward/k/a/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pB:Lcom/kwad/components/ad/reward/k/a/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/a/a;->markOpenNsCompleted()V

    :cond_0
    return-void
.end method

.method private needHandledOnResume()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->gb()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private notifyPageDismiss(Z)V
    .locals 4

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mPageDismissCalled:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    if-nez v0, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    if-nez v0, :cond_2

    return-void

    :cond_2
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mPageDismissCalled:Z

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-wide v2, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mPlayTime:J

    long-to-float v2, v2

    const/high16 v3, 0x447a0000    # 1000.0f

    div-float/2addr v2, v3

    float-to-double v2, v2

    invoke-static {v2, v3}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v2

    double-to-int v2, v2

    invoke-static {v0, v2}, Lcom/kwad/sdk/core/report/a;->n(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    invoke-static {p1, v1, v2, v3, v0}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJLorg/json/JSONObject;)V

    goto :goto_0

    :cond_3
    iget-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/4 v0, 0x6

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v1

    iget-object v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v3}, Lcom/kwad/components/ad/reward/model/c;->hv()Lorg/json/JSONObject;

    move-result-object v3

    invoke-static {p1, v0, v1, v2, v3}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJLorg/json/JSONObject;)V

    :goto_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->getUniqueId()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->A(Ljava/lang/String;)Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    move-result-object p1

    if-eqz p1, :cond_4

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onPageDismiss()V

    :cond_4
    return-void
.end method

.method private notifyRewardStep(II)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cr(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pq:Ljava/util/List;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pq:Ljava/util/List;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-static {p1, p2, v0, v1}, Lcom/kwad/components/ad/reward/p;->a(IILcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/model/c;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->getUniqueId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->A(Ljava/lang/String;)Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    move-result-object v0

    if-nez v0, :cond_3

    return-void

    :cond_3
    :try_start_0
    new-instance v0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$7;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$7;-><init>(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;II)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, p1, p2, v1}, Lcom/kwad/components/ad/reward/monitor/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IIZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method

.method private notifyRewardVerify()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->mCheckExposureResult:Z

    if-nez v0, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cr(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->gc()Z

    move-result v0

    if-eqz v0, :cond_3

    return-void

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->hr()Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/b/a;->isCompleted()Z

    move-result v0

    if-eqz v0, :cond_4

    move v1, v2

    :cond_4
    if-eqz v1, :cond_5

    invoke-direct {p0, v2}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->handleNotifyVerify(Z)V

    :cond_5
    return-void

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->hs()Z

    move-result v0

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pB:Lcom/kwad/components/ad/reward/k/a/a;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pB:Lcom/kwad/components/ad/reward/k/a/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/a/a;->isCompleted()Z

    move-result v0

    if-eqz v0, :cond_7

    move v1, v2

    :cond_7
    if-eqz v1, :cond_8

    invoke-direct {p0, v2}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->handleNotifyVerify(Z)V

    :cond_8
    return-void

    :cond_9
    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->handleNotifyVerify(Z)V

    return-void
.end method

.method private notifyRewardVerifyStepByStep()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->hr()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    const/4 v0, 0x2

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyRewardStep(II)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->isLaunchTaskCompleted()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-direct {p0, v0, v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyRewardStep(II)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->hs()Z

    move-result v0

    const/4 v2, 0x1

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pB:Lcom/kwad/components/ad/reward/k/a/a;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pB:Lcom/kwad/components/ad/reward/k/a/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/a/a;->isCompleted()Z

    move-result v0

    if-eqz v0, :cond_1

    move v0, v2

    goto :goto_0

    :cond_1
    move v0, v1

    :goto_0
    invoke-direct {p0, v2, v1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyRewardStep(II)V

    if-eqz v0, :cond_2

    invoke-direct {p0, v2, v2}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyRewardStep(II)V

    :cond_2
    return-void

    :cond_3
    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mIsFinishVideoLookStep:Z

    if-nez v0, :cond_4

    iput-boolean v2, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mIsFinishVideoLookStep:Z

    invoke-direct {p0, v1, v1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyRewardStep(II)V

    :cond_4
    return-void
.end method

.method public static register()V
    .locals 2

    const-class v0, Lcom/kwad/sdk/api/proxy/app/KsRewardVideoActivity;

    const-class v1, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0, v1}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public checkIntentData(Landroid/content/Intent;)Z
    .locals 1

    invoke-static {p1}, Lcom/kwad/components/ad/reward/model/c;->a(Landroid/content/Intent;)Lcom/kwad/components/ad/reward/model/c;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    if-nez p1, :cond_0

    const-string p1, "reward"

    const-string v0, "show"

    invoke-static {p1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    :cond_0
    const/4 p1, 0x1

    return p1
.end method

.method public finish()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->finish()V

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyPageDismiss(Z)V

    return-void
.end method

.method public getLayoutId()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_activity_reward_video:I

    return v0
.end method

.method public getPageName()Ljava/lang/String;
    .locals 1

    const-string v0, "KSRewardLandScapeVideoActivityProxy"

    return-object v0
.end method

.method public handledAdLiveOnResume()Z
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->needHandledOnResume()Z

    move-result v0

    return v0
.end method

.method public initData()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getUniqueId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->listenerKey:Ljava/lang/String;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mPageEnterTime:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-wide v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mPageEnterTime:J

    const/4 v3, 0x1

    invoke-static {v3, v0, v1, v2}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLcom/kwad/sdk/core/response/model/AdTemplate;J)V

    invoke-static {v3}, Lcom/kwad/components/ad/reward/monitor/a;->I(Z)V

    invoke-static {}, Lcom/kwad/components/core/t/c;->qk()Lcom/kwad/components/core/t/c;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/t/c;->a(Lcom/kwad/components/core/t/c$b;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->a(Lcom/kwad/components/ad/reward/e/j;)V

    return-void
.end method

.method public initView()V
    .locals 3

    sget v0, Lcom/kwad/sdk/R$id;->ksad_root_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_player:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/video/DetailVideoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_play_layout:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mPlayLayout:Landroid/widget/FrameLayout;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    const/4 v1, 0x1

    xor-int/2addr v0, v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v2}, Lcom/kwad/components/ad/reward/model/c;->hr()Z

    move-result v2

    if-nez v2, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v2}, Lcom/kwad/components/ad/reward/model/c;->hs()Z

    move-result v2

    if-eqz v2, :cond_1

    :cond_0
    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setForce(Z)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zX()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/core/video/DetailVideoView;->f(ZI)V

    const-string v0, "reward"

    const-string v1, "show"

    invoke-static {v0, v1}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public interceptPlayCardResume()Z
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->needHandledOnResume()Z

    move-result v0

    return v0
.end method

.method public needAdaptionScreen()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public onBackPressed()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mRewardPresenter:Lcom/kwad/components/ad/reward/o;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/o;->gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    move-result-object v0

    sget-object v1, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    :cond_0
    sget-object v1, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->HANDLED_CLOSE:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->onBackPressed()V

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyPageDismiss(Z)V

    return-void

    :cond_1
    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mIsBackEnable:Z

    if-eqz v0, :cond_2

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyPageDismiss(Z)V

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->onBackPressed()V

    :cond_2
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/components/core/l/b;->onCreate(Landroid/os/Bundle;)V

    sget-object p1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v1, "adShowSuccess"

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    return-void
.end method

.method protected onCreateCallerContext()Lcom/kwad/components/ad/reward/j;
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/model/c;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/ad/reward/j;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/reward/j;-><init>(Lcom/kwad/components/core/l/b;)V

    iget-wide v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mPageEnterTime:J

    iput-wide v3, v2, Lcom/kwad/components/ad/reward/j;->mPageEnterTime:J

    iget-object v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v3}, Lcom/kwad/components/ad/reward/model/c;->hu()I

    move-result v3

    const/4 v4, 0x1

    const/4 v5, 0x2

    if-ne v3, v5, :cond_0

    move v3, v4

    goto :goto_0

    :cond_0
    const/4 v3, 0x0

    :goto_0
    iput-boolean v3, v2, Lcom/kwad/components/ad/reward/j;->oU:Z

    iget-object v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    iput-object v3, v2, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mAdRewardStepListener:Lcom/kwad/components/ad/reward/e/d;

    iput-object v3, v2, Lcom/kwad/components/ad/reward/j;->mAdRewardStepListener:Lcom/kwad/components/ad/reward/e/d;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v3}, Lcom/kwad/components/ad/reward/model/c;->getScreenOrientation()I

    move-result v3

    iput v3, v2, Lcom/kwad/components/ad/reward/j;->mScreenOrientation:I

    iget-object v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v3}, Lcom/kwad/components/ad/reward/model/c;->ht()Lcom/kwad/sdk/api/KsVideoPlayConfig;

    move-result-object v3

    iput-object v3, v2, Lcom/kwad/components/ad/reward/j;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v3}, Lcom/kwad/components/ad/reward/model/c;->hv()Lorg/json/JSONObject;

    move-result-object v3

    iput-object v3, v2, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v3, v2, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v0, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->dB(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v3

    if-eqz v3, :cond_1

    sget-object v3, Lcom/kwad/components/ad/reward/LoadStrategy;->FULL_TK:Lcom/kwad/components/ad/reward/LoadStrategy;

    goto :goto_1

    :cond_1
    sget-object v3, Lcom/kwad/components/ad/reward/LoadStrategy;->MULTI:Lcom/kwad/components/ad/reward/LoadStrategy;

    :goto_1
    iput-object v3, v2, Lcom/kwad/components/ad/reward/j;->pM:Lcom/kwad/components/ad/reward/LoadStrategy;

    invoke-direct {p0, v2}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->createPlayModuleProxy(Lcom/kwad/components/ad/reward/j;)V

    invoke-virtual {v2, p0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j$b;)V

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v3

    if-eqz v3, :cond_2

    new-instance v3, Lcom/kwad/components/core/e/d/c;

    iget-object v5, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v5}, Lcom/kwad/components/ad/reward/model/c;->hv()Lorg/json/JSONObject;

    move-result-object v5

    invoke-direct {v3, v0, v5}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)V

    iput-object v3, v2, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    :cond_2
    new-instance v3, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    iget-object v5, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mContext:Landroid/content/Context;

    invoke-direct {v3, v2, v5, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;-><init>(Lcom/kwad/components/ad/reward/j;Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v3, v2, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v2, v3}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bk(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_3

    new-instance v0, Lcom/kwad/components/ad/reward/l;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v3}, Lcom/kwad/components/ad/reward/model/c;->hv()Lorg/json/JSONObject;

    move-result-object v3

    const/4 v5, 0x0

    invoke-direct {v0, v2, v3, v5}, Lcom/kwad/components/ad/reward/l;-><init>(Lcom/kwad/components/ad/reward/j;Lorg/json/JSONObject;Ljava/lang/String;)V

    iput-object v0, v2, Lcom/kwad/components/ad/reward/j;->oZ:Lcom/kwad/components/ad/reward/l;

    iget-object v0, v2, Lcom/kwad/components/ad/reward/j;->oZ:Lcom/kwad/components/ad/reward/l;

    new-instance v3, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$6;

    invoke-direct {v3, p0, v2}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$6;-><init>(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;Lcom/kwad/components/ad/reward/j;)V

    invoke-virtual {v0, v3}, Lcom/kwad/components/ad/reward/l;->a(Lcom/kwad/components/ad/reward/c/d;)V

    :cond_3
    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ak(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_4

    new-instance v0, Lcom/kwad/components/ad/k/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/k/a;-><init>()V

    invoke-virtual {v0, v4}, Lcom/kwad/components/ad/k/a;->ah(Z)Lcom/kwad/components/ad/k/a;

    move-result-object v0

    iput-object v0, v2, Lcom/kwad/components/ad/reward/j;->pa:Lcom/kwad/components/ad/k/a;

    :cond_4
    iput-boolean v4, v2, Lcom/kwad/components/ad/reward/j;->pj:Z

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_5

    new-instance v0, Lcom/kwad/components/core/playable/a;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_playable_webview:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/playable/a;-><init>(Lcom/kwad/sdk/core/webview/KsAdWebView;)V

    iput-object v0, v2, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    :cond_5
    const-wide/16 v0, 0x0

    iput-wide v0, v2, Lcom/kwad/components/ad/reward/j;->pE:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aj(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    goto :goto_2

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ae(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    :goto_2
    iput-wide v0, v2, Lcom/kwad/components/ad/reward/j;->pE:J

    :cond_7
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    iput-object v0, v2, Lcom/kwad/components/ad/reward/j;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    return-object v2
.end method

.method public bridge synthetic onCreateCallerContext()Lcom/kwad/components/core/l/a;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->onCreateCallerContext()Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    return-object v0
.end method

.method public onCreatePresenter()Lcom/kwad/sdk/mvp/Presenter;
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    new-instance v1, Lcom/kwad/components/ad/reward/o;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v3, Lcom/kwad/components/ad/reward/j;

    invoke-direct {v1, p0, v2, v0, v3}, Lcom/kwad/components/ad/reward/o;-><init>(Lcom/kwad/components/core/l/b;Landroid/view/ViewGroup;Lcom/kwad/components/ad/reward/model/c;Lcom/kwad/components/ad/reward/j;)V

    iput-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mRewardPresenter:Lcom/kwad/components/ad/reward/o;

    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/ad/reward/o$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mRewardPresenter:Lcom/kwad/components/ad/reward/o;

    return-object v0
.end method

.method public onDestroy()V
    .locals 2

    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->b(Lcom/kwad/components/ad/reward/e/j;)V

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->onDestroy()V

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyPageDismiss(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jS()Lcom/kwad/components/ad/reward/f/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/f/a;->removeInterceptor(Lcom/kwad/components/offline/api/core/adlive/listener/OnAdLiveResumeInterceptor;)V

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->getUniqueId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->F(Ljava/lang/String;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/videocache/c/a;->bj(Landroid/content/Context;)Lcom/kwad/sdk/core/videocache/f;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/videocache/f;->dQ(Ljava/lang/String;)Z

    :cond_2
    invoke-static {}, Lcom/kwad/components/core/t/c;->qk()Lcom/kwad/components/core/t/c;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/t/c;->b(Lcom/kwad/components/core/t/c$b;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->listenerKey:Ljava/lang/String;

    return-void
.end method

.method public onPageClose()V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->finish()V

    return-void
.end method

.method public onPause()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->onPause()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

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
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "key_template"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->removeExtra(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public onPreDestroy()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->onPreDestroy()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/d/b;->sg()V

    return-void
.end method

.method public onResume()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->onResume()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mModel:Lcom/kwad/components/ad/reward/model/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/core/d/a;->AW()Lcom/kwad/sdk/core/d/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/d/a;->ar(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mContext:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c/a;->O(Landroid/content/Context;)V

    return-void
.end method

.method public onUnbind()V
    .locals 2

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mIsBackEnable:Z

    iget-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v1, Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/reward/j;->G(Z)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->mCallerContext:Lcom/kwad/components/core/l/a;

    check-cast v1, Lcom/kwad/components/ad/reward/j;

    iput-boolean v0, v1, Lcom/kwad/components/ad/reward/j;->po:Z

    return-void
.end method
