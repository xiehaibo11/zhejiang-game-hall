.class public final Lcom/kwad/components/ad/splashscreen/c;
.super Lcom/kwad/components/core/l/c;

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;
.implements Landroid/content/DialogInterface$OnShowListener;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/components/core/l/c<",
        "Lcom/kwad/components/ad/splashscreen/h;",
        ">;",
        "Landroid/content/DialogInterface$OnDismissListener;",
        "Landroid/content/DialogInterface$OnShowListener;"
    }
.end annotation


# instance fields
.field private BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

.field private BS:Lcom/kwad/components/ad/splashscreen/f/d;

.field private bJ:Lcom/kwad/sdk/core/h/b;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

.field private mPageDismissCalled:Z

.field private mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field private mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;


# direct methods
.method private constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/l/c;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object p1, p2, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c;->od()V

    return-void
.end method

.method private static D(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/mvp/Presenter;
    .locals 6

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    new-instance v0, Lcom/kwad/sdk/mvp/Presenter;

    invoke-direct {v0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/k;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/k;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/b;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/b;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/c;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/c;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/o;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/o;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/d;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/d;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/q;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/q;-><init>()V

    goto :goto_0

    :cond_0
    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/h;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/h;-><init>()V

    :goto_0
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->dn(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->dd(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->dh(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->dm(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->dj(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v5

    if-nez v1, :cond_4

    if-eqz v5, :cond_1

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/n;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/n;-><init>()V

    :goto_1
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    goto :goto_2

    :cond_1
    if-eqz v2, :cond_2

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/m;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/m;-><init>()V

    goto :goto_1

    :cond_2
    if-eqz v3, :cond_3

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/l;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/l;-><init>()V

    goto :goto_1

    :cond_3
    if-eqz v4, :cond_4

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/p;-><init>()V

    goto :goto_1

    :cond_4
    :goto_2
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_5

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/f;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/f;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_5
    invoke-static {p0}, Lcom/kwad/components/ad/splashscreen/h;->o(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_6

    new-instance p0, Lcom/kwad/components/ad/splashscreen/c/a/f;

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/a/f;-><init>()V

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_6
    new-instance p0, Lcom/kwad/components/ad/splashscreen/c/j;

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/j;-><init>()V

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance p0, Lcom/kwad/components/ad/splashscreen/c/a;

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/a;-><init>()V

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance p0, Lcom/kwad/components/ad/splashscreen/c/g;

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/g;-><init>()V

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-object v0
.end method

.method public static a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;ZLcom/kwad/sdk/core/h/b;Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)Lcom/kwad/components/ad/splashscreen/c;
    .locals 5

    const-string v0, "show"

    const-string v1, "splash"

    const/4 v2, 0x0

    :try_start_0
    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    iput-wide v3, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->showStartTime:J

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/monitor/a;->F(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/KsAdSDKImpl;->getSDKInitTime()J

    move-result-wide v3

    invoke-static {p1, v3, v4, p2}, Lcom/kwad/components/ad/splashscreen/monitor/a;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;JZ)V

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    new-instance v3, Lcom/kwad/components/ad/splashscreen/c;

    invoke-direct {v3, p0, p1}, Lcom/kwad/components/ad/splashscreen/c;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {v3, p3}, Lcom/kwad/components/ad/splashscreen/c;->setPageExitListener(Lcom/kwad/sdk/core/h/b;)V

    invoke-virtual {v3, p4}, Lcom/kwad/components/ad/splashscreen/c;->setSplashScreenAdListener(Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)V

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    move-object v2, v3

    goto :goto_0

    :catchall_1
    move-exception p0

    :goto_0
    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    invoke-virtual {p0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p3, p2}, Lcom/kwad/components/ad/splashscreen/monitor/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Z)V

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/KsAdSDKImpl;->getIsExternal()Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-static {p0}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    move-object v3, v2

    :goto_1
    return-object v3

    :cond_0
    throw p0
.end method

.method private a(Lcom/kwad/components/ad/splashscreen/h;)Lcom/kwad/sdk/core/h/c;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/splashscreen/c$1;-><init>(Lcom/kwad/components/ad/splashscreen/c;Lcom/kwad/components/ad/splashscreen/h;)V

    return-object v0
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c;)Lcom/kwad/sdk/mvp/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c;->Li:Lcom/kwad/sdk/mvp/a;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/c;)Lcom/kwad/sdk/mvp/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c;->Li:Lcom/kwad/sdk/mvp/a;

    return-object p0
.end method

.method private getSplashLayoutId()I
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/splashscreen/b/a;->Cz:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/d;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_splash_screen_layout:I

    return v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->skipButtonPosition:I

    if-nez v0, :cond_1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_splash_screen_skip_button_top_right:I

    return v0

    :cond_1
    sget v0, Lcom/kwad/sdk/R$layout;->ksad_splash_screen_skip_button_top_left:I

    return v0
.end method

.method private ku()Lcom/kwad/components/ad/splashscreen/h;
    .locals 5

    new-instance v0, Lcom/kwad/components/ad/splashscreen/f/d;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->lJ:Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->cl(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v2

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/ad/splashscreen/f/d;-><init>(Landroid/view/View;I)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->BS:Lcom/kwad/components/ad/splashscreen/f/d;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->bJ:Lcom/kwad/sdk/core/h/b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/f/d;->a(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->BS:Lcom/kwad/components/ad/splashscreen/f/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/f/d;->sy()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    if-nez v0, :cond_1

    new-instance v0, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    invoke-direct {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->mute:I

    const/4 v2, 0x1

    if-eq v1, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-virtual {v0, v2}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->videoSoundEnable(Z)Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->build()Lcom/kwad/sdk/api/KsVideoPlayConfig;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    :cond_1
    new-instance v0, Lcom/kwad/components/ad/splashscreen/h;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/h;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/h;->setSplashScreenAdListener(Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v1, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v1, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-object v1, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    iput-object v1, v0, Lcom/kwad/components/ad/splashscreen/h;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->BS:Lcom/kwad/components/ad/splashscreen/f/d;

    iput-object v1, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object v1, v0, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance v1, Lcom/kwad/sdk/utils/bi;

    invoke-direct {v1}, Lcom/kwad/sdk/utils/bi;-><init>()V

    iput-object v1, v0, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    new-instance v1, Lcom/kwad/components/ad/splashscreen/e/a;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/c;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/c;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    invoke-direct {v1, v2, v3, v4}, Lcom/kwad/components/ad/splashscreen/e/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/video/DetailVideoView;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V

    iput-object v1, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    iget-object v2, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v2, v1}, Lcom/kwad/sdk/core/h/a;->a(Lcom/kwad/sdk/core/h/c;)V

    :cond_2
    iget-object v1, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/c;->a(Lcom/kwad/components/ad/splashscreen/h;)Lcom/kwad/sdk/core/h/c;

    move-result-object v2

    invoke-interface {v1, v2}, Lcom/kwad/sdk/core/h/a;->a(Lcom/kwad/sdk/core/h/c;)V

    return-object v0
.end method

.method public static m(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->fullScreenClickSwitch:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private notifyPageDismiss()V
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/a/a/c;->yb()Lcom/kwad/sdk/a/a/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/a/a/c;->ye()V

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mPageDismissCalled:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mPageDismissCalled:Z

    return-void
.end method


# virtual methods
.method public final aa()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/l/c;->aa()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->Li:Lcom/kwad/sdk/mvp/a;

    check-cast v0, Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->Li:Lcom/kwad/sdk/mvp/a;

    check-cast v0, Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/e/a;->lB()V

    :cond_0
    return-void
.end method

.method public final ab()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/l/c;->ab()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->setOnShowListener(Landroid/content/DialogInterface$OnShowListener;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->BS:Lcom/kwad/components/ad/splashscreen/f/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/f/d;->sz()V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c;->notifyPageDismiss()V

    return-void
.end method

.method public final getLayoutId()I
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c;->getSplashLayoutId()I

    move-result v0

    return v0
.end method

.method public final initData()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    new-instance v0, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    invoke-direct {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->mute:I

    const/4 v2, 0x1

    if-eq v1, v2, :cond_0

    move v1, v2

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->videoSoundEnable(Z)Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->build()Lcom/kwad/sdk/api/KsVideoPlayConfig;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v2, 0x2

    :cond_1
    iput v2, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    new-instance v0, Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/e/d/c;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/e/d/c;->setOnShowListener(Landroid/content/DialogInterface$OnShowListener;)V

    return-void
.end method

.method public final kt()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final kv()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->lJ:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_splash_root_container:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->lJ:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_splash_video_player:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/video/DetailVideoView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setAd(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->splash_play_card_view:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/c$2;-><init>(Lcom/kwad/components/ad/splashscreen/c;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public final synthetic kw()Lcom/kwad/sdk/mvp/a;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c;->ku()Lcom/kwad/components/ad/splashscreen/h;

    move-result-object v0

    return-object v0
.end method

.method public final onCreatePresenter()Lcom/kwad/sdk/mvp/Presenter;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c;->getContext()Landroid/content/Context;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c;->D(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/mvp/Presenter;

    move-result-object v0

    return-object v0
.end method

.method public final onDismiss(Landroid/content/DialogInterface;)V
    .locals 1

    instance-of v0, p1, Lcom/kwad/components/core/e/c/b;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/kwad/components/core/e/c/b;

    invoke-virtual {p1}, Lcom/kwad/components/core/e/c/b;->nb()Z

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    if-eqz v0, :cond_2

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;->onDownloadTipsDialogDismiss()V

    goto :goto_1

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;->onDownloadTipsDialogCancel()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method public final onShow(Landroid/content/DialogInterface;)V
    .locals 0

    :try_start_0
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;->onDownloadTipsDialogShow()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method

.method protected final onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/l/c;->onVisibilityChanged(Landroid/view/View;I)V

    return-void
.end method

.method public final setPageExitListener(Lcom/kwad/sdk/core/h/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c;->bJ:Lcom/kwad/sdk/core/h/b;

    return-void
.end method

.method public final setSplashScreenAdListener(Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->Li:Lcom/kwad/sdk/mvp/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c;->Li:Lcom/kwad/sdk/mvp/a;

    check-cast v0, Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/splashscreen/h;->setSplashScreenAdListener(Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)V

    :cond_0
    return-void
.end method
