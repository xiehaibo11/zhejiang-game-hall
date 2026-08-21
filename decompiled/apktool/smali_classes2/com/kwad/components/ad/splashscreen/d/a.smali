.class public final Lcom/kwad/components/ad/splashscreen/d/a;
.super Lcom/kwad/components/ad/splashscreen/a/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/h/b;Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)Lcom/kwad/sdk/api/core/fragment/KsFragment;
    .locals 0

    invoke-static {p1, p2, p3}, Lcom/kwad/components/ad/splashscreen/d/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/h/b;Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)Lcom/kwad/components/ad/splashscreen/d/b;

    move-result-object p1

    return-object p1
.end method

.method public final getComponentsType()Ljava/lang/Class;
    .locals 1

    const-class v0, Lcom/kwad/components/ad/splashscreen/a/a;

    return-object v0
.end method

.method public final init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method
