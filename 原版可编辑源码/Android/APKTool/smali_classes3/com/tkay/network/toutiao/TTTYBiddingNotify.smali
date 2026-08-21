.class public Lcom/tkay/network/toutiao/TTTYBiddingNotify;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/TYBiddingNotice;


# instance fields
.field a:Lcom/bykv/vk/openvk/TTClientBidding;


# direct methods
.method protected constructor <init>(Lcom/bykv/vk/openvk/TTClientBidding;)V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 17
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBiddingNotify;->a:Lcom/bykv/vk/openvk/TTClientBidding;

    return-void
.end method


# virtual methods
.method public getNoticePriceCurrency()Lcom/tkay/core/api/TYAdConst$CURRENCY;
    .locals 1

    .line 81
    sget-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-object v0
.end method

.method public notifyBidDisplay(ZD)V
    .locals 2

    .line 69
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 70
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "notifyBidDisplay :  price:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v1, ",isWinner:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "TTTYBiddingNotify"

    invoke-static {v0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 73
    :cond_0
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBiddingNotify;->a:Lcom/bykv/vk/openvk/TTClientBidding;

    invoke-static {p2, p3}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/bykv/vk/openvk/TTClientBidding;->setPrice(Ljava/lang/Double;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    const/4 p1, 0x0

    .line 76
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBiddingNotify;->a:Lcom/bykv/vk/openvk/TTClientBidding;

    return-void
.end method

.method public notifyBidLoss(Ljava/lang/String;DLjava/util/Map;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "D",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 37
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p4

    if-eqz p4, :cond_0

    .line 38
    new-instance p4, Ljava/lang/StringBuilder;

    const-string v0, "notifyBidLoss :  price:"

    invoke-direct {p4, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p4, p2, p3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v0, ",lossCode:"

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    const-string v0, "TTATBiddingNotify"

    invoke-static {v0, p4}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p4, -0x1

    .line 41
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    const/16 v1, 0x32

    const-string v2, "102"

    const-string v3, "2"

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x1

    if-eq v0, v1, :cond_2

    const/16 v1, 0x35

    if-eq v0, v1, :cond_1

    packed-switch v0, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const-string v0, "103"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p4, v5

    goto :goto_0

    :pswitch_1
    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p4, v6

    goto :goto_0

    :cond_1
    const-string v0, "5"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p4, v4

    goto :goto_0

    :cond_2
    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    const/4 p4, 0x0

    :cond_3
    :goto_0
    const-string p1, "201"

    if-eqz p4, :cond_4

    if-eq p4, v6, :cond_5

    if-eq p4, v5, :cond_5

    move-object v2, p1

    goto :goto_1

    :cond_4
    move-object v2, v3

    :cond_5
    :goto_1
    const/4 p1, 0x0

    .line 59
    :try_start_0
    iget-object p4, p0, Lcom/tkay/network/toutiao/TTTYBiddingNotify;->a:Lcom/bykv/vk/openvk/TTClientBidding;

    invoke-static {p2, p3}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object p2

    invoke-interface {p4, p2, v2, p1}, Lcom/bykv/vk/openvk/TTClientBidding;->loss(Ljava/lang/Double;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 62
    :catchall_0
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBiddingNotify;->a:Lcom/bykv/vk/openvk/TTClientBidding;

    return-void

    :pswitch_data_0
    .packed-switch 0xbdf3
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public notifyBidWin(D)V
    .locals 2

    .line 24
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 25
    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    const-string v1, "notifyBidWin : second price:"

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "TTTYBiddingNotify"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 28
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBiddingNotify;->a:Lcom/bykv/vk/openvk/TTClientBidding;

    invoke-static {p1, p2}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bykv/vk/openvk/TTClientBidding;->win(Ljava/lang/Double;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
