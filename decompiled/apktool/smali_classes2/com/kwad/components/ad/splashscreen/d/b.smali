.class public final Lcom/kwad/components/ad/splashscreen/d/b;
.super Lcom/kwad/components/core/n/e;


# instance fields
.field private BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

.field private bJ:Lcom/kwad/sdk/core/h/b;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/n/e;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/sdk/core/h/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/d/b;->bJ:Lcom/kwad/sdk/core/h/b;

    return-void
.end method

.method public static b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/h/b;Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)Lcom/kwad/components/ad/splashscreen/d/b;
    .locals 2

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v1, "ad_splash_template_str"

    invoke-virtual {v0, v1, p0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/components/ad/splashscreen/d/b;

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/d/b;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/d/b;->setArguments(Landroid/os/Bundle;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/d/b;->a(Lcom/kwad/sdk/core/h/b;)V

    invoke-direct {p0, p2}, Lcom/kwad/components/ad/splashscreen/d/b;->setSplashScreenAdListener(Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)V

    return-object p0
.end method

.method private initData()V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/d/b;->getArguments()Landroid/os/Bundle;

    move-result-object v0

    const-string v1, "ad_splash_template_str"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :try_start_0
    new-instance v1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V

    iput-object v1, p0, Lcom/kwad/components/ad/splashscreen/d/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private setSplashScreenAdListener(Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/d/b;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    return-void
.end method


# virtual methods
.method public final lA()Landroid/view/ViewGroup;
    .locals 5

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/d/b;->initData()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/d/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    if-nez v0, :cond_1

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    const/4 v0, 0x0

    const-string v2, "adTemplate null"

    invoke-static {v0, v2, v1}, Lcom/kwad/components/ad/splashscreen/monitor/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Z)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/d/b;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    if-eqz v2, :cond_0

    const-string v3, "data parse error"

    invoke-interface {v2, v1, v3}, Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;->onAdShowError(ILjava/lang/String;)V

    :cond_0
    return-object v0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/d/b;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/d/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/d/b;->bJ:Lcom/kwad/sdk/core/h/b;

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/d/b;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    invoke-static {v0, v2, v1, v3, v4}, Lcom/kwad/components/ad/splashscreen/c;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;ZLcom/kwad/sdk/core/h/b;Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)Lcom/kwad/components/ad/splashscreen/c;

    move-result-object v0

    return-object v0
.end method
