.class public final Lcom/tkay/core/common/b/o;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/TYCustomLoadListener;


# instance fields
.field a:Lcom/tkay/core/api/TYCustomLoadListener;

.field b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/tkay/core/api/TYCustomLoadListener;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/core/api/TYCustomLoadListener;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/tkay/core/common/b/o;->a:Lcom/tkay/core/api/TYCustomLoadListener;

    .line 21
    iput-object p2, p0, Lcom/tkay/core/common/b/o;->b:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public final varargs onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V
    .locals 5

    .line 33
    array-length v0, p1

    if-lez v0, :cond_1

    const/4 v0, 0x0

    .line 34
    aget-object p1, p1, v0

    .line 35
    invoke-virtual {p1}, Lcom/tkay/core/api/BaseAd;->getMainImageUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 36
    iget-object v1, p0, Lcom/tkay/core/common/b/o;->a:Lcom/tkay/core/api/TYCustomLoadListener;

    const/4 v2, 0x1

    new-array v2, v2, [Lcom/tkay/core/api/BaseAd;

    new-instance v3, Lcom/tkay/core/common/f/a/e;

    iget-object v4, p0, Lcom/tkay/core/common/b/o;->b:Ljava/util/Map;

    invoke-direct {v3, p1, v4}, Lcom/tkay/core/common/f/a/e;-><init>(Lcom/tkay/core/api/BaseAd;Ljava/util/Map;)V

    aput-object v3, v2, v0

    invoke-interface {v1, v2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 38
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v1

    new-instance v2, Lcom/tkay/core/common/res/e;

    const/4 v3, 0x2

    .line 39
    invoke-virtual {p1}, Lcom/tkay/core/api/BaseAd;->getMainImageUrl()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v2, v3, v4}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v3, Lcom/tkay/core/common/b/o$1;

    invoke-direct {v3, p0, p1}, Lcom/tkay/core/common/b/o$1;-><init>(Lcom/tkay/core/common/b/o;Lcom/tkay/core/api/BaseAd;)V

    .line 38
    invoke-virtual {v1, v2, v0, v0, v3}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    return-void

    .line 58
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/common/b/o;->a:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p1, :cond_2

    const-string v0, "10011"

    const-string v1, "load fail with no adObject"

    .line 59
    invoke-interface {p1, v0, v1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onAdDataLoaded()V
    .locals 1

    .line 26
    iget-object v0, p0, Lcom/tkay/core/common/b/o;->a:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz v0, :cond_0

    .line 27
    invoke-interface {v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdDataLoaded()V

    :cond_0
    return-void
.end method

.method public final onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/tkay/core/common/b/o;->a:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz v0, :cond_0

    .line 67
    invoke-interface {v0, p1, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
