.class final Lcom/tkay/network/sigmob/SigmobTYAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYAdapter;->a(Landroid/content/Context;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/network/sigmob/SigmobTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYAdapter;Landroid/content/Context;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 1

    .line 45
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    if-eqz p1, :cond_0

    .line 50
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, v0, p1}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYAdapter;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onAdLoad(Ljava/util/List;Ljava/lang/String;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/windad/natives/WindNativeAdData;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 56
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_4

    if-eqz p1, :cond_3

    .line 57
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_3

    .line 58
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    .line 59
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/windad/natives/WindNativeAdData;

    .line 60
    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYNativeAd;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    invoke-static {v3}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    move-result-object v3

    invoke-direct {v1, v2, v0, v3}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;-><init>(Landroid/content/Context;Lcom/sigmob/windad/natives/WindNativeAdData;Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)V

    invoke-interface {p2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 62
    :cond_0
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p1

    new-array p1, p1, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 63
    invoke-interface {p2, p1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 65
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    invoke-static {p2}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->c(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Z

    move-result p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    invoke-static {p2}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 66
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    .line 67
    invoke-static {p2}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->getEcpm()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    iget-object v1, v1, Lcom/tkay/network/sigmob/SigmobTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    .line 68
    invoke-static {v2}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    move-result-object v2

    const/4 v3, 0x0

    aget-object p1, p1, v3

    .line 66
    invoke-static {p2, v0, v1, v2, p1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->onC2SBiddingResultWithCache(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYBiddingListener;Ljava/lang/Object;Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 70
    :cond_1
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    invoke-static {p2}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->d(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 71
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    invoke-static {p2}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->e(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_2
    return-void

    .line 78
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;->b:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    const-string p2, ""

    const-string v0, "no ad return"

    invoke-static {p1, p2, v0}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYAdapter;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    return-void
.end method
