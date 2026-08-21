.class public Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;
.super Lcom/kwad/components/core/n/f;


# annotations
.annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicImpl;
    value = Lcom/kwad/sdk/api/proxy/app/AdWebViewActivity;
.end annotation


# static fields
.field public static final KEY_REPORTED:Ljava/lang/String; = "key_reported"

.field public static final KEY_TEMPLATE:Ljava/lang/String; = "key_template_json"

.field public static showingAdWebViewVideoActivity:Z


# instance fields
.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mFragment:Lcom/kwad/components/core/page/b;

.field private mKsExitInterceptDialog:Landroid/app/Dialog;

.field private mProgressbar:Lcom/kwad/sdk/widget/DownloadProgressBar;

.field private mSplitLandingPage:Lcom/kwad/components/core/page/splitLandingPage/a;

.field private mTitleBarHelper:Lcom/kwad/components/core/b/a;

.field private mWebDownloadContainer:Landroid/view/ViewGroup;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/n/f;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/widget/DownloadProgressBar;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mProgressbar:Lcom/kwad/sdk/widget/DownloadProgressBar;

    return-object p0
.end method

.method static synthetic access$100(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic access$200(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;Z)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->getAdClickConfig(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$301(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/n/f;->onBackPressed()V

    return-void
.end method

.method private buildDialog()Lcom/kwad/components/core/page/widget/a;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/page/widget/a;

    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->getActivity()Landroid/app/Activity;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$4;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$4;-><init>(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)V

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/page/widget/a;-><init>(Landroid/content/Context;Lcom/kwad/components/core/page/widget/a$a;)V

    return-object v0
.end method

.method private getAdClickConfig(Z)Lcom/kwad/components/core/e/d/a$a;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->ar(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->an(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->ap(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    return-object p1
.end method

.method private initView()V
    .locals 5

    sget v0, Lcom/kwad/sdk/R$id;->ksad_web_download_progress:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/DownloadProgressBar;

    iput-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mProgressbar:Lcom/kwad/sdk/widget/DownloadProgressBar;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_web_download_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mWebDownloadContainer:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mWebDownloadContainer:Landroid/view/ViewGroup;

    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->setVisibility(I)V

    new-instance v1, Lcom/kwad/components/core/e/d/c;

    iget-object v3, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v4, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;

    invoke-direct {v4, p0, v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$1;-><init>(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;Lcom/kwad/sdk/core/response/model/AdInfo;)V

    invoke-direct {v1, v3, v4}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    iput-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mProgressbar:Lcom/kwad/sdk/widget/DownloadProgressBar;

    new-instance v1, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$2;-><init>(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mWebDownloadContainer:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bO(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    :cond_1
    const-string v0, "\u8be6\u60c5\u9875\u9762"

    :goto_1
    new-instance v1, Lcom/kwad/components/core/b/a;

    sget v3, Lcom/kwad/sdk/R$id;->ksad_kwad_web_title_bar:I

    invoke-virtual {p0, v3}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    invoke-direct {v1, v3}, Lcom/kwad/components/core/b/a;-><init>(Landroid/view/ViewGroup;)V

    iput-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mTitleBarHelper:Lcom/kwad/components/core/b/a;

    new-instance v3, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$3;

    invoke-direct {v3, p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$3;-><init>(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)V

    invoke-virtual {v1, v3}, Lcom/kwad/components/core/b/a;->a(Lcom/kwad/components/core/b/a$a;)V

    iget-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mTitleBarHelper:Lcom/kwad/components/core/b/a;

    new-instance v3, Lcom/kwad/components/core/b/b;

    invoke-direct {v3, v0}, Lcom/kwad/components/core/b/b;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v3}, Lcom/kwad/components/core/b/a;->a(Lcom/kwad/components/core/b/b;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ai;->cl(Landroid/content/Context;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v0, v2, v1}, Lcom/kwad/components/core/t/d;->a(Landroid/app/Activity;IZ)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_recycler_container:I

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->yY()I

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/core/page/splitLandingPage/a;->T(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/splitLandingPage/a;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mSplitLandingPage:Lcom/kwad/components/core/page/splitLandingPage/a;

    iget-object v2, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/page/splitLandingPage/a;->setApkDownloadHelper(Lcom/kwad/components/core/e/d/c;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->getSupportFragmentManager()Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;->beginTransaction()Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mSplitLandingPage:Lcom/kwad/components/core/page/splitLandingPage/a;

    :goto_2
    invoke-virtual {v1, v0, v2}, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->replace(ILcom/kwad/sdk/api/core/fragment/KsFragment;)Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;->commitAllowingStateLoss()I

    return-void

    :cond_2
    iget-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/core/page/b;->R(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/b;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mFragment:Lcom/kwad/components/core/page/b;

    iget-object v2, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/page/b;->setApkDownloadHelper(Lcom/kwad/components/core/e/d/c;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->getSupportFragmentManager()Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/api/core/fragment/KsFragmentManager;->beginTransaction()Lcom/kwad/sdk/api/core/fragment/KsFragmentTransaction;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mFragment:Lcom/kwad/components/core/page/b;

    goto :goto_2
.end method

.method private isFormAdExitInterceptEnable()Z
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zx()Z

    move-result v0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsFromContent:Z

    if-eqz v0, :cond_1

    return v2

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zy()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsFromContent:Z

    if-nez v0, :cond_2

    return v2

    :cond_2
    return v1
.end method

.method public static launch(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 3

    if-eqz p0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/kwad/sdk/api/proxy/app/BaseFragmentActivity$FragmentActivity3;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "key_template_json"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    iget-boolean p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPvReported:Z

    const-string v1, "key_reported"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dr(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object p0

    if-eqz p0, :cond_1

    const/4 p1, 0x0

    invoke-virtual {p0, p1, p1}, Landroid/app/Activity;->overridePendingTransition(II)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static register()V
    .locals 2

    const-class v0, Lcom/kwad/sdk/api/proxy/app/BaseFragmentActivity$FragmentActivity3;

    const-class v1, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {v0, v1}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    return-void
.end method

.method private showDialog()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mKsExitInterceptDialog:Landroid/app/Dialog;

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->buildDialog()Lcom/kwad/components/core/page/widget/a;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mKsExitInterceptDialog:Landroid/app/Dialog;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v1, 0x67

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mKsExitInterceptDialog:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    return-void
.end method

.method private showWaitDialog()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->isFormAdExitInterceptEnable()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->showDialog()V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->finish()V

    return-void
.end method


# virtual methods
.method public getPageName()Ljava/lang/String;
    .locals 1

    const-string v0, "AdWebViewVideoActivityProxy"

    return-object v0
.end method

.method public onBackPressed()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mSplitLandingPage:Lcom/kwad/components/core/page/splitLandingPage/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/page/splitLandingPage/a;->bP()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mSplitLandingPage:Lcom/kwad/components/core/page/splitLandingPage/a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/page/splitLandingPage/a;->po()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mFragment:Lcom/kwad/components/core/page/b;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/kwad/components/core/page/b;->bP()Z

    move-result v0

    if-nez v0, :cond_2

    goto :goto_0

    :cond_2
    invoke-super {p0}, Lcom/kwad/components/core/n/f;->onBackPressed()V

    return-void

    :cond_3
    :goto_0
    invoke-direct {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->showWaitDialog()V

    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/core/n/f;->onCreate(Landroid/os/Bundle;)V

    sget p1, Lcom/kwad/sdk/R$layout;->ksad_activity_ad_video_webview:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->setContentView(I)V

    const/4 p1, 0x1

    sput-boolean p1, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->showingAdWebViewVideoActivity:Z

    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "key_template_json"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    iget-object p1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "key_reported"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPvReported:Z

    invoke-direct {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->initView()V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->finish()V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mKsExitInterceptDialog:Landroid/app/Dialog;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Dialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mKsExitInterceptDialog:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    :cond_0
    invoke-super {p0}, Lcom/kwad/components/core/n/f;->onDestroy()V

    const/4 v0, 0x0

    sput-boolean v0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->showingAdWebViewVideoActivity:Z

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/e/d/c;->clear()V

    :cond_1
    return-void
.end method

.method public onPause()V
    .locals 1

    const/4 v0, 0x0

    sput-boolean v0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->showingAdWebViewVideoActivity:Z

    invoke-virtual {p0, v0, v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->overridePendingTransition(II)V

    return-void
.end method

.method public onPreCreate(Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/core/n/f;->onPreCreate(Landroid/os/Bundle;)V

    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->getIntent()Landroid/content/Intent;

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

    invoke-super {p0}, Lcom/kwad/components/core/n/f;->onResume()V

    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->showingAdWebViewVideoActivity:Z

    return-void
.end method
