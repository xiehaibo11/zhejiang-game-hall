.class public Lcom/tkay/network/myoffer/MyOfferTYAdapter;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;


# instance fields
.field a:Lcom/tkay/basead/f/e;

.field b:Lcom/tkay/core/common/f/i;

.field private c:Ljava/lang/String;

.field private d:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 24
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;-><init>()V

    const-string v0, ""

    .line 25
    iput-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->c:Ljava/lang/String;

    const/4 v0, 0x0

    .line 27
    iput-boolean v0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->d:Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/myoffer/MyOfferTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;)V
    .locals 4

    .line 71
    new-instance v0, Lcom/tkay/basead/f/e;

    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->b:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->c:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->d:Z

    invoke-direct {v0, p1, v1, v2, v3}, Lcom/tkay/basead/f/e;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V

    iput-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->a:Lcom/tkay/basead/f/e;

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/myoffer/MyOfferTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/myoffer/MyOfferTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/myoffer/MyOfferTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 104
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->a:Lcom/tkay/basead/f/e;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 105
    invoke-virtual {v0, v1}, Lcom/tkay/basead/f/e;->a(Lcom/tkay/basead/e/a;)V

    .line 106
    iput-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->a:Lcom/tkay/basead/f/e;

    :cond_0
    return-void
.end method

.method public getBaseAdObject(Landroid/content/Context;)Lcom/tkay/core/api/BaseAd;
    .locals 2

    .line 95
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->a:Lcom/tkay/basead/f/e;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/f/e;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 96
    new-instance v0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;

    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->a:Lcom/tkay/basead/f/e;

    invoke-direct {v0, p1, v1}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;-><init>(Landroid/content/Context;Lcom/tkay/basead/f/e;)V

    return-object v0

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "MyOffer"

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 123
    invoke-static {}, Lcom/tkay/core/common/l/g;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public initNetworkObjectByPlacementId(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)Z
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
            ">;)Z"
        }
    .end annotation

    const-string p3, "my_oid"

    .line 77
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 78
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->c:Ljava/lang/String;

    :cond_0
    const-string p3, "basead_params"

    .line 80
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 81
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/core/common/f/i;

    iput-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->b:Lcom/tkay/core/common/f/i;

    :cond_1
    const-string p3, "isDefaultOffer"

    .line 84
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 85
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    iput-boolean p2, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->d:Z

    .line 88
    :cond_2
    new-instance p2, Lcom/tkay/basead/f/e;

    iget-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->b:Lcom/tkay/core/common/f/i;

    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->c:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->d:Z

    invoke-direct {p2, p1, p3, v0, v1}, Lcom/tkay/basead/f/e;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V

    iput-object p2, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->a:Lcom/tkay/basead/f/e;

    const/4 p1, 0x1

    return p1
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

    const-string p3, "my_oid"

    .line 36
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 37
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->c:Ljava/lang/String;

    :cond_0
    const-string p3, "basead_params"

    .line 39
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 40
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->b:Lcom/tkay/core/common/f/i;

    .line 1071
    :cond_1
    new-instance p2, Lcom/tkay/basead/f/e;

    iget-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->b:Lcom/tkay/core/common/f/i;

    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->c:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->d:Z

    invoke-direct {p2, p1, p3, v0, v1}, Lcom/tkay/basead/f/e;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V

    iput-object p2, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->a:Lcom/tkay/basead/f/e;

    .line 44
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 46
    iget-object p2, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->a:Lcom/tkay/basead/f/e;

    new-instance p3, Lcom/tkay/network/myoffer/MyOfferTYAdapter$1;

    invoke-direct {p3, p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYAdapter$1;-><init>(Lcom/tkay/network/myoffer/MyOfferTYAdapter;Landroid/content/Context;)V

    invoke-virtual {p2, p3}, Lcom/tkay/basead/f/e;->a(Lcom/tkay/basead/e/c;)V

    return-void
.end method
