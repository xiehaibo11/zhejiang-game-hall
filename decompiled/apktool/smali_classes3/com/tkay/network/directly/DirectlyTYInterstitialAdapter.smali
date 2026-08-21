.class public Lcom/tkay/network/directly/DirectlyTYInterstitialAdapter;
.super Lcom/tkay/network/adx/AdxTYInterstitialAdapter;


# instance fields
.field private d:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 16
    invoke-direct {p0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;-><init>()V

    const/4 v0, 0x0

    .line 17
    iput v0, p0, Lcom/tkay/network/directly/DirectlyTYInterstitialAdapter;->d:I

    return-void
.end method


# virtual methods
.method public fixDirectlyInterstitial()V
    .locals 3

    .line 39
    iget-object v0, p0, Lcom/tkay/network/directly/DirectlyTYInterstitialAdapter;->b:Lcom/tkay/basead/d/d;

    if-nez v0, :cond_0

    return-void

    .line 43
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/directly/DirectlyTYInterstitialAdapter;->b:Lcom/tkay/basead/d/d;

    invoke-virtual {v0}, Lcom/tkay/basead/d/d;->e()Lcom/tkay/core/common/f/h;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    .line 49
    :cond_1
    iget v1, p0, Lcom/tkay/network/directly/DirectlyTYInterstitialAdapter;->d:I

    if-nez v1, :cond_2

    const/4 v1, 0x2

    goto :goto_0

    :cond_2
    const/4 v1, 0x1

    :goto_0
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/h;->d(I)V

    .line 52
    check-cast v0, Lcom/tkay/core/common/f/z;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->Y()I

    move-result v1

    const/4 v2, 0x5

    if-ne v1, v2, :cond_3

    .line 54
    iget v1, p0, Lcom/tkay/network/directly/DirectlyTYInterstitialAdapter;->d:I

    if-nez v1, :cond_3

    const/4 v1, 0x3

    .line 55
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/z;->j(I)V

    :cond_3
    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "Directly"

    return-object v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "unit_type"

    .line 21
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 22
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 24
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/network/directly/DirectlyTYInterstitialAdapter;->d:I

    .line 27
    :cond_0
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 0

    .line 33
    invoke-virtual {p0}, Lcom/tkay/network/directly/DirectlyTYInterstitialAdapter;->fixDirectlyInterstitial()V

    .line 34
    invoke-super {p0, p1}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->show(Landroid/app/Activity;)V

    return-void
.end method
