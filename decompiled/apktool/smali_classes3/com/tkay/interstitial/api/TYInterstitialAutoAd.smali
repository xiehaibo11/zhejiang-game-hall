.class public Lcom/tkay/interstitial/api/TYInterstitialAutoAd;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static varargs addPlacementId([Ljava/lang/String;)V
    .locals 0

    .line 27
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    invoke-static {p0}, Lcom/tkay/interstitial/a/b;->a([Ljava/lang/String;)V

    return-void
.end method

.method public static checkAdStatus(Ljava/lang/String;)Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 1

    .line 51
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/interstitial/a/b;->b(Ljava/lang/String;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object p0

    return-object p0
.end method

.method public static checkValidAdCaches(Ljava/lang/String;)Ljava/util/List;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/api/TYAdInfo;",
            ">;"
        }
    .end annotation

    .line 55
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    invoke-static {p0}, Lcom/tkay/interstitial/a/b;->c(Ljava/lang/String;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method public static entryAdScenario(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 59
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    const/4 v0, 0x0

    invoke-static {p0, p1, v0}, Lcom/tkay/interstitial/a/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static entryAdScenario(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
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

    .line 63
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    invoke-static {p0, p1, p2}, Lcom/tkay/interstitial/a/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static init(Landroid/content/Context;[Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;)V
    .locals 1

    .line 23
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2}, Lcom/tkay/interstitial/a/b;->a(Landroid/content/Context;[Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;)V

    return-void
.end method

.method public static isAdReady(Ljava/lang/String;)Z
    .locals 1

    .line 47
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/interstitial/a/b;->a(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static varargs removePlacementId([Ljava/lang/String;)V
    .locals 0

    .line 31
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    invoke-static {p0}, Lcom/tkay/interstitial/a/b;->b([Ljava/lang/String;)V

    return-void
.end method

.method public static setLocalExtra(Ljava/lang/String;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 35
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    invoke-static {p0, p1}, Lcom/tkay/interstitial/a/b;->a(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static show(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;)V
    .locals 2

    .line 39
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    move-result-object v0

    const-string v1, ""

    .line 1121
    invoke-virtual {v0, p0, p1, v1, p2}, Lcom/tkay/interstitial/a/b;->a(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;)V

    return-void
.end method

.method public static show(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;)V
    .locals 1

    .line 43
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2, p3}, Lcom/tkay/interstitial/a/b;->a(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;)V

    return-void
.end method
