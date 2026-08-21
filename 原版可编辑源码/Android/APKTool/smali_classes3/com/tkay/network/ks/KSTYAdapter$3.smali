.class final Lcom/tkay/network/ks/KSTYAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYAdapter;->a(Landroid/content/Context;Ljava/util/Map;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/network/ks/KSTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYAdapter;Landroid/content/Context;)V
    .locals 0

    .line 168
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYAdapter$3;->b:Lcom/tkay/network/ks/KSTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/ks/KSTYAdapter$3;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onError(ILjava/lang/String;)V
    .locals 1

    .line 171
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYAdapter$3;->b:Lcom/tkay/network/ks/KSTYAdapter;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/tkay/network/ks/KSTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onFeedAdLoad(Ljava/util/List;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/api/KsFeedAd;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_5

    .line 176
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_2

    .line 179
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 180
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/api/KsFeedAd;

    .line 181
    new-instance v3, Lcom/tkay/network/ks/KSATFeedAd;

    iget-object v4, p0, Lcom/tkay/network/ks/KSTYAdapter$3;->a:Landroid/content/Context;

    iget-object v5, p0, Lcom/tkay/network/ks/KSTYAdapter$3;->b:Lcom/tkay/network/ks/KSTYAdapter;

    iget-boolean v5, v5, Lcom/tkay/network/ks/KSTYAdapter;->c:Z

    invoke-direct {v3, v4, v2, v5}, Lcom/tkay/network/ks/KSATFeedAd;-><init>(Landroid/content/Context;Lcom/kwad/sdk/api/KsFeedAd;Z)V

    .line 182
    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 185
    :cond_1
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    new-array v1, v1, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 186
    invoke-interface {v0, v1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 188
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYAdapter$3;->b:Lcom/tkay/network/ks/KSTYAdapter;

    iget-boolean v1, v1, Lcom/tkay/network/ks/KSTYAdapter;->g:Z

    if-eqz v1, :cond_3

    const/4 v1, 0x0

    .line 189
    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/api/KsFeedAd;

    .line 190
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYAdapter$3;->b:Lcom/tkay/network/ks/KSTYAdapter;

    iget-object v2, v2, Lcom/tkay/network/ks/KSTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz v2, :cond_2

    const-wide/16 v2, 0x0

    .line 194
    :try_start_0
    invoke-interface {p1}, Lcom/kwad/sdk/api/KsFeedAd;->getECPM()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    int-to-double v2, v2

    goto :goto_1

    :catchall_0
    move-exception v4

    .line 196
    invoke-virtual {v4}, Ljava/lang/Throwable;->printStackTrace()V

    .line 198
    :goto_1
    new-instance v4, Lcom/tkay/network/ks/KSTYBiddingNotice;

    invoke-direct {v4, p1}, Lcom/tkay/network/ks/KSTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    .line 199
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYAdapter$3;->b:Lcom/tkay/network/ks/KSTYAdapter;

    iget-object p1, p1, Lcom/tkay/network/ks/KSTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    invoke-virtual {v5, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    sget-object v6, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-static {v2, v3, v5, v4, v6}, Lcom/tkay/core/api/TYBiddingResult;->success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object v2

    aget-object v0, v0, v1

    invoke-interface {p1, v2, v0}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    :cond_2
    return-void

    .line 202
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYAdapter$3;->b:Lcom/tkay/network/ks/KSTYAdapter;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYAdapter;->d(Lcom/tkay/network/ks/KSTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 203
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYAdapter$3;->b:Lcom/tkay/network/ks/KSTYAdapter;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYAdapter;->e(Lcom/tkay/network/ks/KSTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_4
    return-void

    .line 177
    :cond_5
    :goto_2
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYAdapter$3;->b:Lcom/tkay/network/ks/KSTYAdapter;

    const-string v0, ""

    const-string v1, "kuaishou no fill"

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/ks/KSTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
