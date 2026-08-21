.class public final Lcom/sigmob/windad/Splash/WindSplashAD;
.super Lcom/sigmob/sdk/base/g;

# interfaces
.implements Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;
.implements Lcom/sigmob/windad/Splash/WindSplashADListener;


# instance fields
.field public adStatus:Lcom/czhj/sdk/common/models/AdStatus;

.field private b:Lcom/sigmob/windad/Splash/WindSplashADListener;

.field private c:Landroid/view/ViewGroup;

.field private d:I

.field private e:Landroid/widget/RelativeLayout;

.field private f:Z

.field private g:Z

.field private h:Z

.field private i:Lcom/sigmob/sdk/splash/g;

.field private j:Landroid/os/Handler;


# direct methods
.method public constructor <init>(Lcom/sigmob/windad/Splash/WindSplashAdRequest;Lcom/sigmob/windad/Splash/WindSplashADListener;)V
    .locals 2

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/base/g;-><init>(Lcom/sigmob/windad/WindAdRequest;Z)V

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->adStatus:Lcom/czhj/sdk/common/models/AdStatus;

    const/4 v1, 0x5

    iput v1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->d:I

    iput-boolean v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->g:Z

    iput-object p2, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->b:Lcom/sigmob/windad/Splash/WindSplashADListener;

    new-instance p2, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p2, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object p2, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->j:Landroid/os/Handler;

    new-instance p2, Lcom/sigmob/sdk/splash/g;

    invoke-direct {p2, p1, p0}, Lcom/sigmob/sdk/splash/g;-><init>(Lcom/sigmob/windad/Splash/WindSplashAdRequest;Lcom/sigmob/windad/Splash/WindSplashADListener;)V

    iput-object p2, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->i:Lcom/sigmob/sdk/splash/g;

    invoke-virtual {p1}, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->getFetchDelay()I

    move-result p2

    iput p2, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->d:I

    invoke-virtual {p1}, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->isDisableAutoHideAd()Z

    move-result p1

    iput-boolean p1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->f:Z

    return-void
.end method

.method static synthetic a(Lcom/sigmob/windad/Splash/WindSplashAD;)Landroid/widget/RelativeLayout;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->e:Landroid/widget/RelativeLayout;

    return-object p0
.end method

.method private a(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onSplashError: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " :placementId: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->g:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->j:Landroid/os/Handler;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->j:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/windad/Splash/WindSplashAD$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/sigmob/windad/Splash/WindSplashAD$2;-><init>(Lcom/sigmob/windad/Splash/WindSplashAD;Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    invoke-direct {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->h()V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/sigmob/windad/Splash/WindSplashAD;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->g:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/windad/Splash/WindSplashAD;)Lcom/sigmob/sdk/splash/g;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->i:Lcom/sigmob/sdk/splash/g;

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/windad/Splash/WindSplashAD;)Lcom/sigmob/windad/Splash/WindSplashADListener;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->b:Lcom/sigmob/windad/Splash/WindSplashADListener;

    return-object p0
.end method

.method private d()V
    .locals 3

    new-instance v0, Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->c:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->e:Landroid/widget/RelativeLayout;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->e:Landroid/widget/RelativeLayout;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setId(I)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->c:Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->e:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v2, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private e()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->i:Lcom/sigmob/sdk/splash/g;

    if-nez v0, :cond_0

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_NOT_READY:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->a()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/sigmob/windad/Splash/WindSplashAD;->a(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->d()V

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->e:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->j:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/windad/Splash/WindSplashAD$1;

    invoke-direct {v1, p0}, Lcom/sigmob/windad/Splash/WindSplashAD$1;-><init>(Lcom/sigmob/windad/Splash/WindSplashAD;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusPlaying:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->adStatus:Lcom/czhj/sdk/common/models/AdStatus;

    return-void
.end method

.method private f()Z
    .locals 7

    invoke-virtual {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->loadAdFilter()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    invoke-static {}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->getInstance()Lcom/czhj/sdk/common/utils/AdLifecycleManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->addLifecycleListener(Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;)V

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->adStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->i:Lcom/sigmob/sdk/splash/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/splash/g;->g()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->b()V

    :cond_1
    iget-object v1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->i:Lcom/sigmob/sdk/splash/g;

    invoke-virtual {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->getBid_token()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->getBidFloor()I

    move-result v3

    invoke-virtual {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->getCurrency()Ljava/lang/String;

    move-result-object v4

    iget v5, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->d:I

    const/4 v6, 0x0

    invoke-virtual/range {v1 .. v6}, Lcom/sigmob/sdk/splash/g;->a(Ljava/lang/String;ILjava/lang/String;IZ)V

    const/4 v0, 0x1

    return v0
.end method

.method private g()V
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->c:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getActivityFromViewTop(Landroid/view/View;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v1

    const/16 v2, 0x802

    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->systemUiVisibility:I

    invoke-virtual {v0, v1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    const/16 v1, 0x400

    invoke-virtual {v0, v1}, Landroid/view/Window;->addFlags(I)V

    :cond_0
    return-void
.end method

.method private h()V
    .locals 2

    iget-boolean v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->f:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->e:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method


# virtual methods
.method protected a(Lcom/sigmob/windad/WindAdError;)V
    .locals 2

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->adStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->b:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->a()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, p1, v1}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdLoadFail(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method protected c()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->i:Lcom/sigmob/sdk/splash/g;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/splash/g;->j()Ljava/util/List;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public destroy()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->i:Lcom/sigmob/sdk/splash/g;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->j:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iput-object v1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->b:Lcom/sigmob/windad/Splash/WindSplashADListener;

    :cond_0
    return-void
.end method

.method public getEcpm()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->i:Lcom/sigmob/sdk/splash/g;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/splash/g;->i()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public isReady()Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->adStatus:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->i:Lcom/sigmob/sdk/splash/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/splash/g;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public loadAd()Z
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->h:Z

    invoke-super {p0}, Lcom/sigmob/sdk/base/g;->loadAd()Z

    invoke-direct {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->f()Z

    move-result v0

    return v0
.end method

.method public loadAd(Ljava/lang/String;)Z
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/g;->loadAd(Ljava/lang/String;)Z

    invoke-direct {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->f()Z

    move-result p1

    return p1
.end method

.method public loadAndShow(Landroid/view/ViewGroup;)V
    .locals 0

    if-nez p1, :cond_0

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_ADCONTAINER_IS_NULL:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p0, p1}, Lcom/sigmob/windad/Splash/WindSplashAD;->a(Lcom/sigmob/windad/WindAdError;)V

    return-void

    :cond_0
    invoke-super {p0}, Lcom/sigmob/sdk/base/g;->loadAd()Z

    iput-object p1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->c:Landroid/view/ViewGroup;

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->h:Z

    invoke-direct {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->f()Z

    return-void
.end method

.method public loadAndShow(Ljava/lang/String;Landroid/view/ViewGroup;)V
    .locals 0

    if-nez p2, :cond_0

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_ADCONTAINER_IS_NULL:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p0, p1}, Lcom/sigmob/windad/Splash/WindSplashAD;->a(Lcom/sigmob/windad/WindAdError;)V

    return-void

    :cond_0
    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/g;->loadAd(Ljava/lang/String;)Z

    iput-object p2, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->c:Landroid/view/ViewGroup;

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->h:Z

    invoke-direct {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->f()Z

    return-void
.end method

.method public onCreate(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onDestroy(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onPause(Landroid/app/Activity;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->i:Lcom/sigmob/sdk/splash/g;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/splash/g;->a(Landroid/app/Activity;)V

    :cond_0
    return-void
.end method

.method public onResume(Landroid/app/Activity;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->i:Lcom/sigmob/sdk/splash/g;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/splash/g;->b(Landroid/app/Activity;)V

    :cond_0
    return-void
.end method

.method public onSplashAdClick(Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusClick:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->adStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->b:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdClick(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onSplashAdClose(Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusClose:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->adStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->b:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdClose(Ljava/lang/String;)V

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->h()V

    return-void
.end method

.method public onSplashAdLoadFail(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->adStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->b:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdLoadFail(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onSplashAdLoadSuccess(Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->adStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->b:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdLoadSuccess(Ljava/lang/String;)V

    :cond_0
    iget-boolean p1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->h:Z

    if-eqz p1, :cond_1

    invoke-direct {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->e()V

    :cond_1
    return-void
.end method

.method public onSplashAdShow(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->b:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdShow(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onSplashAdShowError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->adStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->b:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdShowError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onSplashAdSkip(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->b:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdSkip(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onStart(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onStop(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public show(Landroid/view/ViewGroup;)V
    .locals 2

    iget-boolean v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->h:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->adStatus:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    if-eq v0, v1, :cond_1

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_NOT_READY:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->a()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/sigmob/windad/Splash/WindSplashAD;->a(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    return-void

    :cond_1
    if-nez p1, :cond_2

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_ADCONTAINER_IS_NULL:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/sigmob/windad/Splash/WindSplashAD;->onSplashAdShowError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    return-void

    :cond_2
    iput-object p1, p0, Lcom/sigmob/windad/Splash/WindSplashAD;->c:Landroid/view/ViewGroup;

    invoke-direct {p0}, Lcom/sigmob/windad/Splash/WindSplashAD;->e()V

    return-void
.end method
