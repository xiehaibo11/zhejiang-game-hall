.class public Lcom/sigmob/windad/Splash/WindSplashAdRequest;
.super Lcom/sigmob/windad/WindAdRequest;


# instance fields
.field private c:I

.field private d:Z


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2, p3}, Lcom/sigmob/windad/WindAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    const/4 p1, 0x5

    iput p1, p0, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->c:I

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->d:Z

    const/4 p1, 0x2

    iput p1, p0, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->a:I

    return-void
.end method


# virtual methods
.method public getFetchDelay()I
    .locals 2

    iget v0, p0, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->c:I

    const/4 v1, 0x3

    if-ge v0, v1, :cond_0

    return v1

    :cond_0
    return v0
.end method

.method public isDisableAutoHideAd()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->d:Z

    return v0
.end method

.method public setDisableAutoHideAd(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->d:Z

    return-void
.end method

.method public setFetchDelay(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->c:I

    return-void
.end method
