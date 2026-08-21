.class public Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;
.super Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;


# instance fields
.field a:Ljava/lang/String;

.field b:Lcom/tkay/core/common/f/i;

.field c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private d:Lcom/tkay/basead/f/b;

.field private e:Landroid/view/View;

.field private f:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 27
    invoke-direct {p0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;-><init>()V

    const/4 v0, 0x0

    .line 33
    iput-boolean v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->f:Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;Landroid/view/View;)Landroid/view/View;
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->e:Landroid/view/View;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/basead/f/b;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->d:Lcom/tkay/basead/f/b;

    return-object p0
.end method

.method private a(Landroid/content/Context;)V
    .locals 4

    .line 92
    new-instance v0, Lcom/tkay/basead/f/b;

    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->b:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->a:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->f:Z

    invoke-direct {v0, p1, v1, v2, v3}, Lcom/tkay/basead/f/b;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V

    iput-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->d:Lcom/tkay/basead/f/b;

    .line 93
    new-instance p1, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$2;

    invoke-direct {p1, p0}, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$2;-><init>(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)V

    invoke-virtual {v0, p1}, Lcom/tkay/basead/f/b;->a(Lcom/tkay/basead/e/a;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Landroid/view/View;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->e:Landroid/view/View;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    const/4 v0, 0x0

    .line 152
    iput-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->e:Landroid/view/View;

    .line 153
    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->d:Lcom/tkay/basead/f/b;

    if-eqz v1, :cond_0

    .line 154
    invoke-virtual {v1, v0}, Lcom/tkay/basead/f/b;->a(Lcom/tkay/basead/e/a;)V

    .line 155
    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->d:Lcom/tkay/basead/f/b;

    invoke-virtual {v1}, Lcom/tkay/basead/f/b;->c()V

    .line 156
    iput-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->d:Lcom/tkay/basead/f/b;

    :cond_0
    return-void
.end method

.method public getBannerView()Landroid/view/View;
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->e:Landroid/view/View;

    if-nez v0, :cond_0

    .line 41
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->d:Lcom/tkay/basead/f/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/f/b;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 42
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->d:Lcom/tkay/basead/f/b;

    invoke-virtual {v0}, Lcom/tkay/basead/f/b;->b()Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->e:Landroid/view/View;

    .line 43
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->c:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 44
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->d:Lcom/tkay/basead/f/b;

    invoke-static {v0}, Lcom/tkay/basead/b;->a(Lcom/tkay/basead/f/c;)Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->c:Ljava/util/Map;

    .line 49
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->e:Landroid/view/View;

    return-object v0
.end method

.method public getNetworkInfoMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 177
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->c:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "MyOffer"

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 167
    invoke-static {}, Lcom/tkay/core/common/l/g;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public initNetworkObjectByPlacementId(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)Z
    .locals 1
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

    .line 134
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 135
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->a:Ljava/lang/String;

    :cond_0
    const-string p3, "basead_params"

    .line 138
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 139
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/core/common/f/i;

    iput-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->b:Lcom/tkay/core/common/f/i;

    :cond_1
    const-string p3, "isDefaultOffer"

    .line 142
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 143
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    iput-boolean p2, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->f:Z

    .line 146
    :cond_2
    invoke-direct {p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->a(Landroid/content/Context;)V

    const/4 p1, 0x1

    return p1
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 1
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

    .line 54
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 55
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->a:Ljava/lang/String;

    :cond_0
    const-string p3, "basead_params"

    .line 57
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 58
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->b:Lcom/tkay/core/common/f/i;

    .line 61
    :cond_1
    invoke-direct {p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->a(Landroid/content/Context;)V

    .line 63
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->d:Lcom/tkay/basead/f/b;

    new-instance p2, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$1;

    invoke-direct {p2, p0}, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$1;-><init>(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/f/b;->a(Lcom/tkay/basead/e/c;)V

    return-void
.end method
