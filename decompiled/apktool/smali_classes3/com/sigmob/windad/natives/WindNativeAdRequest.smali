.class public Lcom/sigmob/windad/natives/WindNativeAdRequest;
.super Lcom/sigmob/windad/WindAdRequest;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    invoke-direct {p0, p1, p2, p4}, Lcom/sigmob/windad/WindAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    iput p3, p0, Lcom/sigmob/windad/natives/WindNativeAdRequest;->b:I

    const/4 p1, 0x5

    iput p1, p0, Lcom/sigmob/windad/natives/WindNativeAdRequest;->a:I

    return-void
.end method

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

    iput p1, p0, Lcom/sigmob/windad/natives/WindNativeAdRequest;->a:I

    return-void
.end method

.method public static getWindVideoAdRequest(Lcom/sigmob/windad/WindAdRequest;)Lcom/sigmob/windad/natives/WindNativeAdRequest;
    .locals 4

    if-eqz p0, :cond_0

    new-instance v0, Lcom/sigmob/windad/natives/WindNativeAdRequest;

    invoke-virtual {p0}, Lcom/sigmob/windad/WindAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0}, Lcom/sigmob/windad/WindAdRequest;->getUserId()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    invoke-virtual {p0}, Lcom/sigmob/windad/WindAdRequest;->getOptions()Ljava/util/Map;

    move-result-object p0

    invoke-direct {v0, v1, v2, v3, p0}, Lcom/sigmob/windad/natives/WindNativeAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V

    return-object v0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method
