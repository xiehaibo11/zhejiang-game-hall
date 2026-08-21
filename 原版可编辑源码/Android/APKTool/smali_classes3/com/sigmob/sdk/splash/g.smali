.class public final Lcom/sigmob/sdk/splash/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/f$b;
.implements Lcom/sigmob/sdk/base/network/d$a;
.implements Lcom/sigmob/sdk/splash/f$a;


# static fields
.field private static final n:I = 0x20001


# instance fields
.field private final a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

.field private final b:Ljava/lang/Runnable;

.field private c:Landroid/os/Handler;

.field private d:Lcom/sigmob/sdk/splash/f;

.field private e:Lcom/sigmob/windad/Splash/WindSplashADListener;

.field private f:I

.field private g:Lcom/czhj/sdk/common/models/AdStatus;

.field private h:Lcom/sigmob/sdk/splash/i;

.field private i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private j:I

.field private k:I

.field private l:I

.field private m:I

.field private o:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/sigmob/windad/Splash/WindSplashAdRequest;Lcom/sigmob/windad/Splash/WindSplashADListener;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/splash/g;->j:I

    iput v0, p0, Lcom/sigmob/sdk/splash/g;->k:I

    iput v0, p0, Lcom/sigmob/sdk/splash/g;->l:I

    iput v0, p0, Lcom/sigmob/sdk/splash/g;->m:I

    new-instance v0, Lcom/sigmob/sdk/splash/g$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/splash/g$1;-><init>(Lcom/sigmob/sdk/splash/g;)V

    iput-object v0, p0, Lcom/sigmob/sdk/splash/g;->b:Ljava/lang/Runnable;

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/sdk/splash/g;->g:Lcom/czhj/sdk/common/models/AdStatus;

    new-instance v0, Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;-><init>(Lcom/sigmob/windad/WindAdRequest;)V

    iput-object v0, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iput-object p2, p0, Lcom/sigmob/sdk/splash/g;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

    new-instance p1, Lcom/sigmob/sdk/splash/f;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/splash/f;-><init>(Lcom/sigmob/sdk/base/common/m$b;)V

    iput-object p1, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/splash/g;)Landroid/os/Handler;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/splash/g;Lcom/sigmob/windad/WindAdError;Z)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/splash/g;->a(Lcom/sigmob/windad/WindAdError;Z)V

    return-void
.end method

.method private a(Lcom/sigmob/windad/WindAdError;Z)V
    .locals 3

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/sdk/splash/g;->g:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iput-object v1, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getRequest_scene_type()I

    move-result v0

    sget-object v2, Lcom/sigmob/sdk/rewardVideoAd/a;->e:Lcom/sigmob/sdk/rewardVideoAd/a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/rewardVideoAd/a;->a()Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    if-eq v0, v2, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz v0, :cond_2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdLoadFail(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    iget-object p2, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdShowError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :goto_0
    iput-object v1, p0, Lcom/sigmob/sdk/splash/g;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    if-eqz p1, :cond_3

    iget-object p2, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/splash/f;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_3
    return-void
.end method

.method private a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p2, :cond_0

    return v0

    :cond_0
    new-instance v1, Lcom/sigmob/sdk/splash/i;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v1, p1}, Lcom/sigmob/sdk/splash/i;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    if-nez v1, :cond_1

    return v0

    :cond_1
    invoke-virtual {v1}, Lcom/sigmob/sdk/splash/i;->b()V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    iget v1, p0, Lcom/sigmob/sdk/splash/g;->j:I

    if-eqz v1, :cond_2

    const/4 v0, 0x1

    :cond_2
    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/splash/i;->setShowAppLogo(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/splash/i;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result p1

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/sdk/splash/i;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/splash/g;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/splash/g;->f:I

    return p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/splash/g;)I
    .locals 2

    iget v0, p0, Lcom/sigmob/sdk/splash/g;->f:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/sigmob/sdk/splash/g;->f:I

    return v0
.end method

.method static synthetic e(Lcom/sigmob/sdk/splash/g;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/splash/g;->l:I

    return p0
.end method

.method static synthetic f(Lcom/sigmob/sdk/splash/g;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/splash/g;->m:I

    return p0
.end method

.method static synthetic g(Lcom/sigmob/sdk/splash/g;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/splash/g;->k:I

    return p0
.end method

.method static synthetic h(Lcom/sigmob/sdk/splash/g;)Ljava/lang/Runnable;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/splash/g;->b:Ljava/lang/Runnable;

    return-object p0
.end method

.method static synthetic i(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method static synthetic j(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    return-object p0
.end method

.method private k()Landroid/app/Activity;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getActivityFromViewTop(Landroid/view/View;)Landroid/app/Activity;

    move-result-object v0

    return-object v0
.end method

.method static synthetic k(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/windad/Splash/WindSplashADListener;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/splash/g;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

    return-object p0
.end method

.method private l()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    if-eqz v0, :cond_1

    iget-object v0, v0, Lcom/sigmob/sdk/splash/f;->d:Lcom/sigmob/sdk/splash/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    iget-object v0, v0, Lcom/sigmob/sdk/splash/f;->d:Lcom/sigmob/sdk/splash/c;

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v1, v2, v3}, Lcom/sigmob/sdk/splash/c;->b(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/splash/f;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iput-object v1, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    if-eqz v0, :cond_3

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iput-object v1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    :cond_3
    iput-object v1, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object v1, p0, Lcom/sigmob/sdk/splash/g;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

    return-void
.end method


# virtual methods
.method public a()V
    .locals 0

    return-void
.end method

.method public a(ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 2

    invoke-static {p1}, Lcom/sigmob/windad/WindAdError;->getWindAdError(I)Lcom/sigmob/windad/WindAdError;

    move-result-object p3

    if-nez p3, :cond_0

    sget-object p3, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p3, p1, p2}, Lcom/sigmob/windad/WindAdError;->setErrorMessage(ILjava/lang/String;)V

    :cond_0
    const-string v0, "respond"

    const-string v1, "0"

    invoke-static {v0, v1, p4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    const/4 v0, 0x0

    const-string v1, "request"

    invoke-static {v1, v0, p1, p2, p4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    const/4 p1, 0x1

    invoke-direct {p0, p3, p1}, Lcom/sigmob/sdk/splash/g;->a(Lcom/sigmob/windad/WindAdError;Z)V

    return-void
.end method

.method public a(Landroid/app/Activity;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/splash/g;->k()Landroid/app/Activity;

    move-result-object v0

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    invoke-virtual {p1}, Lcom/sigmob/sdk/splash/i;->e()V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    :cond_0
    return-void
.end method

.method public a(Landroid/view/ViewGroup;)V
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/ClientMetadata;->getOrientationInt()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    if-nez v1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/splash/g;->h()V

    return-void

    :cond_1
    if-eqz p1, :cond_3

    invoke-virtual {p1}, Landroid/view/ViewGroup;->removeAllViews()V

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/splash/g;->a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/splash/g;->c()V

    return-void

    :cond_2
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    invoke-virtual {p1, v1, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/splash/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    iget-object p1, p1, Lcom/sigmob/sdk/splash/f;->d:Lcom/sigmob/sdk/splash/c;

    invoke-virtual {p1}, Lcom/sigmob/sdk/splash/c;->l()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/splash/g;->f:I

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    iget-object p1, p1, Lcom/sigmob/sdk/splash/f;->d:Lcom/sigmob/sdk/splash/c;

    invoke-virtual {p1}, Lcom/sigmob/sdk/splash/c;->n()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/splash/g;->l:I

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    iget-object p1, p1, Lcom/sigmob/sdk/splash/f;->d:Lcom/sigmob/sdk/splash/c;

    invoke-virtual {p1}, Lcom/sigmob/sdk/splash/c;->o()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/splash/g;->m:I

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    iget v0, p0, Lcom/sigmob/sdk/splash/g;->f:I

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/splash/i;->setDuration(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    invoke-virtual {p1}, Lcom/sigmob/sdk/splash/i;->c()Z

    move-result p1

    if-eqz p1, :cond_3

    return-void

    :cond_3
    invoke-virtual {p0}, Lcom/sigmob/sdk/splash/g;->c()V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
    .locals 2

    const-string v0, " loadEnd"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object p2, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    const/4 v0, 0x0

    const-string v1, "ready"

    invoke-static {v1, v0, p1, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    iget-object p2, p0, Lcom/sigmob/sdk/splash/g;->g:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusClose:Lcom/czhj/sdk/common/models/AdStatus;

    if-ne p2, v1, :cond_0

    const-string p2, " next load"

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/sigmob/sdk/base/utils/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/FileUtil;->writeToCache(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->g:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object p2, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    if-eq p1, p2, :cond_1

    return-void

    :cond_1
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/ClientMetadata;->getOrientationInt()Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    const/4 p2, 0x1

    if-ne p2, p1, :cond_2

    goto :goto_0

    :cond_2
    const/4 p2, 0x0

    :goto_0
    if-nez p2, :cond_3

    invoke-virtual {p0}, Lcom/sigmob/sdk/splash/g;->h()V

    return-void

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    if-eqz p1, :cond_4

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    :cond_4
    sget-object p1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object p1, p0, Lcom/sigmob/sdk/splash/g;->g:Lcom/czhj/sdk/common/models/AdStatus;

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAds;->getHandler()Landroid/os/Handler;

    move-result-object p1

    new-instance p2, Lcom/sigmob/sdk/splash/g$3;

    invoke-direct {p2, p0}, Lcom/sigmob/sdk/splash/g$3;-><init>(Lcom/sigmob/sdk/splash/g;)V

    invoke-virtual {p1, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_1

    :cond_5
    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/splash/g;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public a(Ljava/lang/String;ILjava/lang/String;IZ)V
    .locals 3

    if-nez p5, :cond_1

    sget-object p5, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object p5, p0, Lcom/sigmob/sdk/splash/g;->g:Lcom/czhj/sdk/common/models/AdStatus;

    invoke-virtual {p0}, Lcom/sigmob/sdk/splash/g;->g()Z

    move-result p5

    if-eqz p5, :cond_0

    iget-object p5, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    if-eqz p5, :cond_0

    const/4 p1, 0x0

    iget-object p2, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p5, p1, p2}, Lcom/sigmob/sdk/splash/f;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, p2, p0}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V

    return-void

    :cond_0
    iget-object p5, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    sget-object v0, Lcom/sigmob/sdk/rewardVideoAd/a;->c:Lcom/sigmob/sdk/rewardVideoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/a;->a()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-virtual {p5, v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setRequest_scene_type(I)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    goto :goto_0

    :cond_1
    iget-object p5, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    sget-object v0, Lcom/sigmob/sdk/rewardVideoAd/a;->e:Lcom/sigmob/sdk/rewardVideoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/a;->a()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-virtual {p5, v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setRequest_scene_type(I)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object p5, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    const-string v0, "request"

    const-string v1, "play"

    invoke-static {v0, v1, p5}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    :goto_0
    new-instance p5, Lcom/sigmob/sdk/splash/g$2;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p5, p0, v0}, Lcom/sigmob/sdk/splash/g$2;-><init>(Lcom/sigmob/sdk/splash/g;Landroid/os/Looper;)V

    iput-object p5, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    const v0, 0x20001

    mul-int/lit16 p4, p4, 0x3e8

    int-to-long v1, p4

    invoke-virtual {p5, v0, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    iget-object p4, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p4, p1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setBidToken(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setBidFloor(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p1, p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setCurrency(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-static {p1, p0}, Lcom/sigmob/sdk/base/network/d;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/network/d$a;)V

    return-void
.end method

.method public a(Ljava/util/List;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;",
            "Lcom/sigmob/sdk/base/models/LoadAdRequest;",
            ")V"
        }
    .end annotation

    const/4 p2, 0x0

    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const-string v0, "respond"

    const-string v1, "1"

    invoke-static {v0, v1, p2}, Lcom/sigmob/sdk/base/common/z;->b(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/splash/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

    const/4 p2, 0x1

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/splash/g;->a(Lcom/sigmob/windad/WindAdError;Z)V

    return-void

    :cond_0
    iput-object p2, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p1, p0, Lcom/sigmob/sdk/splash/g;->o:Ljava/util/List;

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    if-eqz p1, :cond_1

    const/4 v0, 0x0

    invoke-virtual {p1, v0, p2}, Lcom/sigmob/sdk/splash/f;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_1
    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, p2, p0}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V

    return-void
.end method

.method public b()V
    .locals 3

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v1

    const-string v2, "com.sigmob.action.interstitial.dismiss"

    invoke-static {v0, v1, v2}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public b(Landroid/app/Activity;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/sigmob/sdk/splash/g;->k()Landroid/app/Activity;

    move-result-object v0

    if-ne p1, v0, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    invoke-virtual {p1}, Lcom/sigmob/sdk/splash/i;->f()V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    if-nez p1, :cond_0

    new-instance p1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->b:Ljava/lang/Runnable;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusPlaying:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/sdk/splash/g;->g:Lcom/czhj/sdk/common/models/AdStatus;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/f;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    invoke-virtual {p1}, Lcom/sigmob/sdk/splash/i;->getDuration()I

    move-result p1

    if-lez p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    invoke-virtual {p1}, Lcom/sigmob/sdk/splash/i;->getDuration()I

    move-result p1

    iget v0, p0, Lcom/sigmob/sdk/splash/g;->f:I

    if-ge p1, v0, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    invoke-virtual {p1}, Lcom/sigmob/sdk/splash/i;->getDuration()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/splash/g;->f:I

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    if-eqz p1, :cond_1

    iget v0, p0, Lcom/sigmob/sdk/splash/g;->f:I

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/splash/i;->setDuration(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/splash/i;->setVisibility(I)V

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz p1, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdShow(Ljava/lang/String;)V

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    if-nez p1, :cond_3

    new-instance p1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    :cond_3
    iget p1, p0, Lcom/sigmob/sdk/splash/g;->f:I

    iput p1, p0, Lcom/sigmob/sdk/splash/g;->k:I

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->b:Ljava/lang/Runnable;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
    .locals 1

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_FILE_DOWNLOAD:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p1, p2}, Lcom/sigmob/windad/WindAdError;->setMessage(Ljava/lang/String;)V

    const/4 p2, 0x1

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/splash/g;->a(Lcom/sigmob/windad/WindAdError;Z)V

    iget-object p2, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const-string v0, "load"

    invoke-static {v0, p1, p2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Lcom/sigmob/windad/WindAdError;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method public c()V
    .locals 3

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE:Lcom/sigmob/windad/WindAdError;

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const-string v2, "play"

    invoke-static {v2, v0, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Lcom/sigmob/windad/WindAdError;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE:Lcom/sigmob/windad/WindAdError;

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/splash/g;->a(Lcom/sigmob/windad/WindAdError;Z)V

    invoke-direct {p0}, Lcom/sigmob/sdk/splash/g;->l()V

    return-void
.end method

.method public c(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public c(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    sget-object p1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusClick:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object p1, p0, Lcom/sigmob/sdk/splash/g;->g:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object p1, p0, Lcom/sigmob/sdk/splash/g;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdClick(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public d()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/splash/f;->d:Lcom/sigmob/sdk/splash/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->d:Lcom/sigmob/sdk/splash/f;

    iget-object v0, v0, Lcom/sigmob/sdk/splash/f;->d:Lcom/sigmob/sdk/splash/c;

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v2, v1, v3}, Lcom/sigmob/sdk/splash/c;->c(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->h:Lcom/sigmob/sdk/splash/i;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/splash/i;->setDuration(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdSkip(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 6

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/sigmob/windad/Splash/WindSplashADListener;->onSplashAdClose(Ljava/lang/String;)V

    :cond_0
    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusClose:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/sdk/splash/g;->g:Lcom/czhj/sdk/common/models/AdStatus;

    invoke-direct {p0}, Lcom/sigmob/sdk/splash/g;->l()V

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/f;->c(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-nez p1, :cond_1

    const/4 v1, 0x0

    const/4 v2, 0x0

    const/16 v4, 0x2d

    const/4 v5, 0x1

    const-string v3, "CNY"

    move-object v0, p0

    invoke-virtual/range {v0 .. v5}, Lcom/sigmob/sdk/splash/g;->a(Ljava/lang/String;ILjava/lang/String;IZ)V

    :cond_1
    return-void
.end method

.method public e()V
    .locals 0

    return-void
.end method

.method public e(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    return-void
.end method

.method public f()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iput-object v1, p0, Lcom/sigmob/sdk/splash/g;->c:Landroid/os/Handler;

    :cond_0
    return-void
.end method

.method public g()Z
    .locals 8

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/sigmob/sdk/base/utils/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/common/utils/FileUtil;->readFromCache(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    instance-of v2, v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v2, :cond_0

    move-object v2, v1

    check-cast v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v2

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/sigmob/sdk/splash/g;->a:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/sigmob/sdk/base/utils/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/common/utils/FileUtil;->deleteFile(Ljava/lang/String;)Z

    check-cast v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object v1, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v1, :cond_3

    new-instance v1, Ljava/io/File;

    iget-object v2, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSplashFilePath()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->canRead()Z

    move-result v1

    iget-object v2, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v2

    iget-object v2, v2, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iget-object v2, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreate_time()J

    move-result-wide v6

    sub-long/2addr v4, v6

    iget-object v2, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdExpiredTime()Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    int-to-long v6, v2

    cmp-long v2, v4, v6

    if-lez v2, :cond_1

    move v2, v3

    goto :goto_0

    :cond_1
    move v2, v0

    :goto_0
    if-eqz v1, :cond_2

    if-nez v2, :cond_2

    move v0, v3

    :cond_2
    return v0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_3
    return v0
.end method

.method public h()V
    .locals 3

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION:Lcom/sigmob/windad/WindAdError;

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const-string v2, "play"

    invoke-static {v2, v0, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Lcom/sigmob/windad/WindAdError;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION:Lcom/sigmob/windad/WindAdError;

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/splash/g;->a(Lcom/sigmob/windad/WindAdError;Z)V

    invoke-direct {p0}, Lcom/sigmob/sdk/splash/g;->l()V

    return-void
.end method

.method public i()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ecpm:Ljava/lang/Integer;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public j()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g;->o:Ljava/util/List;

    return-object v0
.end method
