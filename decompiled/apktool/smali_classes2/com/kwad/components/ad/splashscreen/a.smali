.class public final Lcom/kwad/components/ad/splashscreen/a;
.super Lcom/kwad/sdk/components/d;

# interfaces
.implements Lcom/kwad/components/ad/b/h;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/components/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final R()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->kB()Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->R()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public final getComponentsType()Ljava/lang/Class;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/lang/Class<",
            "Lcom/kwad/components/ad/b/h;",
            ">;"
        }
    .end annotation

    const-class v0, Lcom/kwad/components/ad/b/h;

    return-object v0
.end method

.method public final init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public final loadSplashScreenAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;)V
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/components/ad/splashscreen/b;->loadSplashScreenAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;)V

    return-void
.end method
