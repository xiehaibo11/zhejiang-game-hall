.class final Lcom/tkay/network/gdt/GDTTYAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/ads/nativ/NativeADUnifiedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYAdapter;->b(Landroid/content/Context;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/network/gdt/GDTTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYAdapter;Landroid/content/Context;)V
    .locals 0

    .line 112
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onADLoaded(Ljava/util/List;)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/qq/e/ads/nativ/NativeUnifiedADData;",
            ">;)V"
        }
    .end annotation

    .line 115
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p1, :cond_6

    .line 116
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_6

    .line 119
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    const/4 v1, 0x0

    move-object v2, v1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    const/4 v4, 0x4

    if-eqz v3, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    move-object v7, v3

    check-cast v7, Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    .line 121
    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget v3, v3, Lcom/tkay/network/gdt/GDTTYAdapter;->e:I

    if-ne v3, v4, :cond_0

    .line 122
    new-instance v1, Lcom/tkay/network/gdt/GDTTYNativePatchAd;

    iget-object v6, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget v8, v3, Lcom/tkay/network/gdt/GDTTYAdapter;->f:I

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget v9, v3, Lcom/tkay/network/gdt/GDTTYAdapter;->g:I

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget v10, v3, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    move-object v5, v1

    invoke-direct/range {v5 .. v10}, Lcom/tkay/network/gdt/GDTTYNativePatchAd;-><init>(Landroid/content/Context;Lcom/qq/e/ads/nativ/NativeUnifiedADData;III)V

    .line 123
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 125
    :cond_0
    new-instance v2, Lcom/tkay/network/gdt/GDTTYNativeAd;

    iget-object v6, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget v8, v3, Lcom/tkay/network/gdt/GDTTYAdapter;->f:I

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget v9, v3, Lcom/tkay/network/gdt/GDTTYAdapter;->g:I

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget v10, v3, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    move-object v5, v2

    invoke-direct/range {v5 .. v10}, Lcom/tkay/network/gdt/GDTTYNativeAd;-><init>(Landroid/content/Context;Lcom/qq/e/ads/nativ/NativeUnifiedADData;III)V

    .line 126
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 130
    :cond_1
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    new-array p1, p1, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 131
    invoke-interface {v0, p1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 133
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/gdt/GDTTYAdapter;->i:Z

    if-eqz v0, :cond_4

    .line 134
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz p1, :cond_3

    .line 135
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget p1, p1, Lcom/tkay/network/gdt/GDTTYAdapter;->e:I

    if-ne p1, v4, :cond_2

    if-eqz v1, :cond_2

    .line 136
    iget-object p1, v1, Lcom/tkay/network/gdt/GDTTYNativePatchAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getECPM()I

    move-result p1

    int-to-double v2, p1

    .line 138
    new-instance p1, Lcom/tkay/network/gdt/GDTTYBiddingNotice;

    invoke-direct {p1, v1}, Lcom/tkay/network/gdt/GDTTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    .line 139
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    sget-object v5, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-static {v2, v3, v4, p1, v5}, Lcom/tkay/core/api/TYBiddingResult;->success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object p1

    invoke-interface {v0, p1, v1}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    return-void

    :cond_2
    if-eqz v2, :cond_3

    .line 141
    iget-object p1, v2, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getECPM()I

    move-result p1

    int-to-double v0, p1

    .line 143
    new-instance p1, Lcom/tkay/network/gdt/GDTTYBiddingNotice;

    invoke-direct {p1, v2}, Lcom/tkay/network/gdt/GDTTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    .line 144
    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    sget-object v5, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-static {v0, v1, v4, p1, v5}, Lcom/tkay/core/api/TYBiddingResult;->success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object p1

    invoke-interface {v3, p1, v2}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    :cond_3
    return-void

    .line 150
    :cond_4
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYAdapter;->c(Lcom/tkay/network/gdt/GDTTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 151
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYAdapter;->d(Lcom/tkay/network/gdt/GDTTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_5
    return-void

    .line 154
    :cond_6
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    const-string v0, ""

    const-string v1, "Ad list is empty"

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/gdt/GDTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onNoAD(Lcom/qq/e/comm/util/AdError;)V
    .locals 3

    .line 160
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter$2;->b:Lcom/tkay/network/gdt/GDTTYAdapter;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/gdt/GDTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
