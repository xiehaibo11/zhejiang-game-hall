.class final Lcom/tkay/network/gdt/GDTTYAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/network/gdt/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYAdapter;->a(Landroid/content/Context;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYAdapter;)V
    .locals 0

    .line 62
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final notifyError(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYAdapter;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/network/gdt/GDTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final varargs notifyLoaded([Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;)V
    .locals 7

    .line 66
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/gdt/GDTTYAdapter;->i:Z

    if-eqz v0, :cond_1

    const/4 v0, 0x0

    aget-object v1, p1, v0

    instance-of v1, v1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    if-eqz v1, :cond_1

    .line 67
    aget-object p1, p1, v0

    check-cast p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    .line 68
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz v0, :cond_0

    .line 69
    iget-object v0, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    invoke-virtual {v0}, Lcom/qq/e/ads/nativ/NativeExpressADView;->getECPM()I

    move-result v0

    int-to-double v0, v0

    .line 71
    new-instance v2, Lcom/tkay/network/gdt/GDTTYBiddingNotice;

    invoke-direct {v2, p1}, Lcom/tkay/network/gdt/GDTTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    .line 72
    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    sget-object v5, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-static {v0, v1, v4, v2, v5}, Lcom/tkay/core/api/TYBiddingResult;->success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object v0

    invoke-interface {v3, v0, p1}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    :cond_0
    return-void

    .line 77
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYAdapter;->a(Lcom/tkay/network/gdt/GDTTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 78
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYAdapter;->b(Lcom/tkay/network/gdt/GDTTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_2
    return-void
.end method
