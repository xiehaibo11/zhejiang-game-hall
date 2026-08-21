.class public Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;
.super Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;


# instance fields
.field a:Lcom/tkay/core/common/f/i;

.field b:Ljava/lang/String;

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

.field private d:Lcom/tkay/basead/d/a;

.field private e:Landroid/view/View;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;Landroid/view/View;)Landroid/view/View;
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->e:Landroid/view/View;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "unit_id"

    .line 85
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, ""

    :goto_0
    iput-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->b:Ljava/lang/String;

    const/4 v0, 0x0

    const-string v1, "close_button"

    .line 90
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 91
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 93
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    :cond_1
    const-string v1, "size"

    .line 97
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 98
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 100
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    :cond_2
    const-string v1, "320x50"

    :goto_1
    const-string v2, "basead_params"

    .line 105
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->a:Lcom/tkay/core/common/f/i;

    .line 106
    new-instance p2, Lcom/tkay/basead/d/a;

    sget-object v2, Lcom/tkay/basead/d/b$a;->b:Lcom/tkay/basead/d/b$a;

    iget-object v3, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->a:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, v2, v3}, Lcom/tkay/basead/d/a;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    .line 107
    new-instance p1, Lcom/tkay/basead/d/c$a;

    invoke-direct {p1}, Lcom/tkay/basead/d/c$a;-><init>()V

    .line 108
    invoke-virtual {p1, v0}, Lcom/tkay/basead/d/c$a;->c(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 109
    invoke-virtual {p1, v1}, Lcom/tkay/basead/d/c$a;->b(Ljava/lang/String;)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 110
    invoke-virtual {p1}, Lcom/tkay/basead/d/c$a;->a()Lcom/tkay/basead/d/c;

    move-result-object p1

    .line 107
    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/a;->a(Lcom/tkay/basead/d/c;)V

    .line 113
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    new-instance p2, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;

    invoke-direct {p2, p0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;-><init>(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/a;->a(Lcom/tkay/basead/e/a;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/basead/d/a;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Landroid/view/View;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->e:Landroid/view/View;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    const/4 v0, 0x0

    .line 163
    iput-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->e:Landroid/view/View;

    .line 164
    iget-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    if-eqz v1, :cond_0

    .line 165
    invoke-virtual {v1, v0}, Lcom/tkay/basead/d/a;->a(Lcom/tkay/basead/e/a;)V

    .line 166
    iget-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    invoke-virtual {v1}, Lcom/tkay/basead/d/a;->b()V

    .line 167
    iput-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    :cond_0
    return-void
.end method

.method public getBannerView()Landroid/view/View;
    .locals 1

    .line 38
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->e:Landroid/view/View;

    if-nez v0, :cond_0

    .line 39
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/d/a;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 40
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    invoke-virtual {v0}, Lcom/tkay/basead/d/a;->a()Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->e:Landroid/view/View;

    .line 43
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->c:Ljava/util/Map;

    if-nez v0, :cond_1

    .line 44
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    invoke-static {v0}, Lcom/tkay/basead/b;->a(Lcom/tkay/basead/d/b;)Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->c:Ljava/util/Map;

    .line 46
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->e:Landroid/view/View;

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

    .line 188
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->c:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 173
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 3
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

    const-string p3, "unit_id"

    .line 1085
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    goto :goto_0

    :cond_0
    const-string p3, ""

    :goto_0
    iput-object p3, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->b:Ljava/lang/String;

    const/4 p3, 0x0

    const-string v0, "close_button"

    .line 1090
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1091
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1093
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p3

    :cond_1
    const-string v0, "size"

    .line 1097
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 1098
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 1100
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    :cond_2
    const-string v0, "320x50"

    :goto_1
    const-string v1, "basead_params"

    .line 1105
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->a:Lcom/tkay/core/common/f/i;

    .line 1106
    new-instance p2, Lcom/tkay/basead/d/a;

    sget-object v1, Lcom/tkay/basead/d/b$a;->b:Lcom/tkay/basead/d/b$a;

    iget-object v2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->a:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, v1, v2}, Lcom/tkay/basead/d/a;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    .line 1107
    new-instance p1, Lcom/tkay/basead/d/c$a;

    invoke-direct {p1}, Lcom/tkay/basead/d/c$a;-><init>()V

    .line 1108
    invoke-virtual {p1, p3}, Lcom/tkay/basead/d/c$a;->c(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 1109
    invoke-virtual {p1, v0}, Lcom/tkay/basead/d/c$a;->b(Ljava/lang/String;)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 1110
    invoke-virtual {p1}, Lcom/tkay/basead/d/c$a;->a()Lcom/tkay/basead/d/c;

    move-result-object p1

    .line 1107
    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/a;->a(Lcom/tkay/basead/d/c;)V

    .line 1113
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    new-instance p2, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;

    invoke-direct {p2, p0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;-><init>(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/a;->a(Lcom/tkay/basead/e/a;)V

    .line 54
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d:Lcom/tkay/basead/d/a;

    new-instance p2, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;

    invoke-direct {p2, p0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;-><init>(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/a;->a(Lcom/tkay/basead/e/c;)V

    return-void
.end method
