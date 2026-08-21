.class public Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;


# instance fields
.field a:Lcom/tkay/basead/d/e;

.field b:Lcom/tkay/core/common/f/i;

.field c:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;)V
    .locals 2
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

    .line 94
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
    iput-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->c:Ljava/lang/String;

    const-string v0, "basead_params"

    .line 95
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->b:Lcom/tkay/core/common/f/i;

    .line 96
    new-instance p2, Lcom/tkay/basead/d/e;

    sget-object v0, Lcom/tkay/basead/d/b$a;->b:Lcom/tkay/basead/d/b$a;

    iget-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->b:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, v0, v1}, Lcom/tkay/basead/d/e;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->a:Lcom/tkay/basead/d/e;

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 1

    .line 118
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->a:Lcom/tkay/basead/d/e;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 119
    iput-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->a:Lcom/tkay/basead/d/e;

    :cond_0
    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 130
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
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

    const-string v0, "unit_id"

    .line 1094
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
    iput-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->c:Ljava/lang/String;

    const-string v0, "basead_params"

    .line 1095
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->b:Lcom/tkay/core/common/f/i;

    .line 1096
    new-instance p2, Lcom/tkay/basead/d/e;

    sget-object v0, Lcom/tkay/basead/d/b$a;->b:Lcom/tkay/basead/d/b$a;

    iget-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->b:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, v0, v1}, Lcom/tkay/basead/d/e;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->a:Lcom/tkay/basead/d/e;

    const/4 p2, -0x1

    if-eqz p3, :cond_1

    :try_start_0
    const-string v0, "key_width"

    .line 39
    invoke-interface {p3, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move v0, p2

    :goto_1
    :try_start_1
    const-string v1, "key_height"

    .line 43
    invoke-interface {p3, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    move p3, p2

    move p2, v0

    goto :goto_2

    :cond_1
    move p3, p2

    .line 48
    :goto_2
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 49
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    iget v1, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    if-gtz p2, :cond_2

    .line 52
    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result p2

    :cond_2
    if-gtz p3, :cond_3

    mul-int/lit8 p3, p2, 0x3

    .line 55
    div-int/lit8 p3, p3, 0x4

    :cond_3
    if-le p2, v0, :cond_4

    goto :goto_3

    :cond_4
    move v0, p2

    :goto_3
    if-le p3, v1, :cond_5

    goto :goto_4

    :cond_5
    move v1, p3

    .line 70
    :goto_4
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 71
    iget-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;->a:Lcom/tkay/basead/d/e;

    new-instance p3, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;

    invoke-direct {p3, p0, v0, v1, p1}, Lcom/tkay/network/onlineapi/OnlineApiTYAdapter$1;-><init>(Lcom/tkay/network/onlineapi/OnlineApiTYAdapter;IILandroid/content/Context;)V

    invoke-virtual {p2, p3}, Lcom/tkay/basead/d/e;->a(Lcom/tkay/basead/e/d;)V

    return-void
.end method
