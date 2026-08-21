.class public Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;
.super Lcom/kwad/components/core/n/c;


# annotations
.annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicImpl;
    value = Lcom/kwad/sdk/api/proxy/app/AdWebViewActivity;
.end annotation


# static fields
.field public static final KEY_TEMPLATE:Ljava/lang/String; = "key_template_json"

.field private static final KEY_URL:Ljava/lang/String; = "key_langingpage_url"

.field private static final TAG:Ljava/lang/String; = "AdRewardPreviewActivityProxy"

.field public static mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;


# instance fields
.field private counterPaused:Z

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private mCheckExposureResult:Z

.field public mCloseDialog:Lcom/kwad/components/ad/reward/k;

.field private mCount:I

.field private mCountDownLayout:Landroid/view/View;

.field private mCountDownTips:Landroid/widget/TextView;

.field private mEnableSkip:Z

.field private mHandler:Landroid/os/Handler;

.field private mLastDown:J

.field protected mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

.field private mSkipCount:I

.field private mSkipCountDownBtn:Landroid/view/View;

.field private mSkipCountDownDiv:Landroid/view/View;

.field private mStartPlayTime:J

.field private mTimerHelper:Lcom/kwad/sdk/utils/bi;

.field private mUrl:Ljava/lang/String;

.field private mWebCloseBtn:Landroid/widget/ImageView;

.field private mWebContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/core/n/c;-><init>()V

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mHandler:Landroid/os/Handler;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mEnableSkip:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->counterPaused:Z

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCheckExposureResult:Z

    return-void
.end method

.method static synthetic access$000(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic access$100(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->showCloseDialog()V

    return-void
.end method

.method static synthetic access$1000(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCountDownTips:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$1100(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mWebCloseBtn:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic access$1200(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mLastDown:J

    return-wide v0
.end method

.method static synthetic access$1202(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mLastDown:J

    return-wide p1
.end method

.method static synthetic access$1300(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Lcom/kwad/sdk/core/view/AdBaseFrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mWebContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    return-object p0
.end method

.method static synthetic access$1400(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->checkRequest(I)V

    return-void
.end method

.method static synthetic access$1502(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCheckExposureResult:Z

    return p1
.end method

.method static synthetic access$1600(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mStartPlayTime:J

    return-wide v0
.end method

.method static synthetic access$200(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->counterPaused:Z

    return p0
.end method

.method static synthetic access$202(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->counterPaused:Z

    return p1
.end method

.method static synthetic access$300(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/os/Handler;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mHandler:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic access$400(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCount:I

    return p0
.end method

.method static synthetic access$410(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)I
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCount:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCount:I

    return v0
.end method

.method static synthetic access$502(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mEnableSkip:Z

    return p1
.end method

.method static synthetic access$600(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->skipToEnd()V

    return-void
.end method

.method static synthetic access$700(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCount:I

    return p0
.end method

.method static synthetic access$710(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)I
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCount:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCount:I

    return v0
.end method

.method static synthetic access$800(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCountDownBtn:Landroid/view/View;

    return-object p0
.end method

.method static synthetic access$900(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCountDownDiv:Landroid/view/View;

    return-object p0
.end method

.method private checkRequest(I)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$7;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$7;-><init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;I)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->exposureRequest()Lcom/kwad/sdk/core/network/p;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void
.end method

.method private exposureRequest()Lcom/kwad/sdk/core/network/p;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/kwad/sdk/core/network/p<",
            "Lcom/kwad/components/core/p/d;",
            "Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;",
            ">;"
        }
    .end annotation

    new-instance v0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$8;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$8;-><init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V

    return-object v0
.end method

.method private getClientParams()Lcom/kwad/sdk/core/report/z$b;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    const/4 v1, 0x0

    iput v1, v0, Lcom/kwad/sdk/core/report/z$b;->ati:I

    return-object v0
.end method

.method private getWebErrorListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$5;-><init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V

    return-object v0
.end method

.method public static launch(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V
    .locals 1

    sput-object p3, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    const-class p3, Lcom/kwad/sdk/api/proxy/app/AdWebViewActivity;

    const-class v0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {p3, v0}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    new-instance p3, Landroid/content/Intent;

    const-class v0, Lcom/kwad/sdk/api/proxy/app/AdWebViewActivity;

    invoke-direct {p3, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v0, 0x10000000

    invoke-virtual {p3, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "key_template_json"

    invoke-virtual {p3, v0, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "key_langingpage_url"

    invoke-virtual {p3, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    :try_start_0
    invoke-virtual {p0, p3}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    const/4 p1, 0x0

    invoke-virtual {p0, p1, p1}, Landroid/app/Activity;->overridePendingTransition(II)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    invoke-static {p0}, Lcom/kwad/sdk/crash/b;->l(Ljava/lang/Throwable;)V

    return-void
.end method

.method private showCloseDialog()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCloseDialog:Lcom/kwad/components/ad/reward/k;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCount:I

    add-int/lit8 v0, v0, 0x1

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "\u8fd8\u5dee"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "\u79d2\u5c31\u53ef\u4ee5\u83b7\u53d6\u5956\u52b1"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/k;->H(Ljava/lang/String;)Lcom/kwad/components/ad/reward/k$c;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getActivity()Landroid/app/Activity;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v3, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$9;

    invoke-direct {v3, p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$9;-><init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V

    invoke-static {v1, v2, v0, v3}, Lcom/kwad/components/ad/reward/k;->a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)Lcom/kwad/components/ad/reward/k;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCloseDialog:Lcom/kwad/components/ad/reward/k;

    return-void
.end method

.method private skipToEnd()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCountDownLayout:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mWebCloseBtn:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    sget-object v0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    iget-boolean v2, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCheckExposureResult:Z

    if-eqz v2, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onRewardVerify()V

    :try_start_0
    sget-object v0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    invoke-interface {v0, v1, v1}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onRewardStepVerify(II)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public checkExposure()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->callBackStrategyInfo:Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->impressionCheckMs:I

    int-to-long v0, v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-lez v2, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    const-wide/16 v4, 0x1388

    cmp-long v2, v2, v4

    if-lez v2, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mHandler:Landroid/os/Handler;

    new-instance v3, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$6;

    invoke-direct {v3, p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$6;-><init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V

    invoke-virtual {v2, v3, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method

.method public checkIntentData(Landroid/content/Intent;)Z
    .locals 2

    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "key_template_json"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

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

.method public getLayoutId()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_activity_reward_preview:I

    return v0
.end method

.method public getPageName()Ljava/lang/String;
    .locals 1

    const-string v0, "AdRewardPreviewActivityProxy"

    return-object v0
.end method

.method public getTimerHelper()Lcom/kwad/sdk/utils/bi;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/utils/bi;

    invoke-direct {v0}, Lcom/kwad/sdk/utils/bi;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    return-object v0
.end method

.method public initData()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "key_langingpage_url"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo;->adBrowseInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo$AdBrowseInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$AdBrowseInfo;->adBrowseDuration:I

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->W(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    iput v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCount:I

    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCount:I

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mStartPlayTime:J

    sget-object v0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    :try_start_0
    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoPlayStart()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method

.method public initView()V
    .locals 5

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_webview:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getClientParams()Lcom/kwad/sdk/core/report/z$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/webview/a/c$a;->bm(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getWebErrorListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v2, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->onActivityCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_web_close_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mWebCloseBtn:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_landing_page_root:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mWebContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_preview_logo:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mWebCloseBtn:Landroid/widget/ImageView;

    new-instance v2, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$1;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$1;-><init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_preview_skip_layout:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCountDownLayout:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_preview_skip_div:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCountDownDiv:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_preview_skip_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCountDownBtn:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_preview_skip_time:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCountDownTips:Landroid/widget/TextView;

    iget v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCount:I

    if-gtz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCountDownBtn:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCountDownDiv:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCountDownBtn:Landroid/view/View;

    const/16 v2, 0x8

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCountDownDiv:Landroid/view/View;

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mSkipCountDownBtn:Landroid/view/View;

    new-instance v2, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$2;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$2;-><init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V

    invoke-virtual {v0, v2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCountDownTips:Landroid/widget/TextView;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "\u6fc0\u52b1\u9886\u53d6\u89c6\u9891\u8fd8\u6709"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v3, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mCount:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "\u79d2"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mHandler:Landroid/os/Handler;

    new-instance v2, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;-><init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V

    const-wide/16 v3, 0x3e8

    invoke-virtual {v0, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mUrl:Ljava/lang/String;

    if-eqz v2, :cond_1

    new-instance v2, Lcom/kwad/components/core/e/d/c;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v2, v3}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zo()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1

    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getActivity()Landroid/app/Activity;

    move-result-object v3

    invoke-direct {v0, v3}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->an(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-object v3, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v3}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->ap(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/kwad/components/core/e/d/c;->m(Lcom/kwad/components/core/e/d/a$a;)I

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mUrl:Ljava/lang/String;

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    :goto_1
    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->startTiming()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mWebContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    new-instance v1, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;-><init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->a(Landroid/view/View$OnTouchListener;)V

    return-void
.end method

.method public onActivityCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/n/c;->onActivityCreate()V

    const-string v0, "reward"

    const-string v1, "show"

    invoke-static {v0, v1}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onBackPressed()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->canGoBack()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->goBack()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/a;->aB(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void

    :cond_0
    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mEnableSkip:Z

    if-eqz v0, :cond_2

    invoke-super {p0}, Lcom/kwad/components/core/n/c;->onBackPressed()V

    sget-object v0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_1

    :try_start_0
    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoPlayEnd()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v1, 0xb

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v2

    const/4 v4, 0x0

    invoke-static {v0, v1, v2, v3, v4}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJLorg/json/JSONObject;)V

    return-void

    :cond_2
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->showCloseDialog()V

    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/components/core/n/c;->onCreate(Landroid/os/Bundle;)V

    sget-object p1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v1, "adShowSuccess"

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    return-void
.end method

.method public onDestroy()V
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onPageDismiss()V

    :cond_0
    const/4 v0, 0x0

    sput-object v0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->onActivityDestroy()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    :cond_1
    invoke-super {p0}, Lcom/kwad/components/core/n/c;->onDestroy()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mHandler:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    return-void
.end method

.method public onPause()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/n/c;->onPause()V

    const/4 v0, 0x0

    invoke-virtual {p0, v0, v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->overridePendingTransition(II)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->Kc()V

    return-void
.end method

.method public onResume()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/n/c;->onResume()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->Kb()V

    return-void
.end method
