.class final Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:I

.field final synthetic c:Landroid/content/Context;

.field final synthetic d:Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;IILandroid/content/Context;)V
    .locals 0

    .line 71
    iput-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;->d:Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;

    iput p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;->a:I

    iput p3, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;->b:I

    iput-object p4, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;->c:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onNativeAdLoadError(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 86
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;->d:Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->c(Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 87
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;->d:Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->d(Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->b()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final varargs onNativeAdLoaded([Lcom/tkay/basead/d/h;)V
    .locals 5

    .line 74
    array-length v0, p1

    new-array v0, v0, [Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;

    const/4 v1, 0x0

    .line 75
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_0

    .line 76
    aget-object v2, p1, v1

    iget v3, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;->a:I

    iget v4, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;->b:I

    invoke-virtual {v2, v3, v4}, Lcom/tkay/basead/d/h;->a(II)V

    .line 77
    new-instance v2, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;

    iget-object v3, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;->c:Landroid/content/Context;

    aget-object v4, p1, v1

    invoke-direct {v2, v3, v4}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/h;)V

    aput-object v2, v0, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 79
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;->d:Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;

    invoke-static {p1}, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->a(Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 80
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;->d:Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;

    invoke-static {p1}, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->b(Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_1
    return-void
.end method
