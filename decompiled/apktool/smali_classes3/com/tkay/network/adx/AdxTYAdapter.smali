.class public Lcom/tkay/network/adx/AdxTYAdapter;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;


# instance fields
.field a:Lcom/tkay/basead/d/e;

.field b:Lcom/tkay/core/common/f/i;

.field private c:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 29
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;-><init>()V

    return-void
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

    const-string v0, "basead_params"

    .line 122
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYAdapter;->b:Lcom/tkay/core/common/f/i;

    .line 123
    new-instance p2, Lcom/tkay/basead/d/e;

    sget-object v0, Lcom/tkay/basead/d/b$a;->a:Lcom/tkay/basead/d/b$a;

    iget-object v1, p0, Lcom/tkay/network/adx/AdxTYAdapter;->b:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, v0, v1}, Lcom/tkay/basead/d/e;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYAdapter;->a:Lcom/tkay/basead/d/e;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/adx/AdxTYAdapter;)Z
    .locals 0

    .line 29
    iget-boolean p0, p0, Lcom/tkay/network/adx/AdxTYAdapter;->c:Z

    return p0
.end method

.method static synthetic b(Lcom/tkay/network/adx/AdxTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/adx/AdxTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/adx/AdxTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/adx/AdxTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYAdapter;->a:Lcom/tkay/basead/d/e;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 141
    iput-object v0, p0, Lcom/tkay/network/adx/AdxTYAdapter;->a:Lcom/tkay/basead/d/e;

    :cond_0
    return-void
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
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
            ">;",
            "Lcom/tkay/core/api/TYBidRequestInfoListener;",
            ")V"
        }
    .end annotation

    const-string p3, "basead_params"

    .line 163
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/core/common/f/i;

    .line 164
    new-instance v0, Lcom/tkay/network/adx/AdxBidRequestInfo;

    if-eqz p3, :cond_0

    iget-object p3, p3, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p3, ""

    :goto_0
    invoke-direct {v0, p1, p3}, Lcom/tkay/network/adx/AdxBidRequestInfo;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    const-string p1, "layout_type"

    .line 165
    invoke-static {p2, p1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "1"

    .line 166
    invoke-static {p2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/network/adx/AdxTYAdapter;->c:Z

    if-eqz p1, :cond_1

    .line 168
    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxBidRequestInfo;->fillAdAcceptType()V

    :cond_1
    if-eqz p4, :cond_2

    .line 171
    invoke-interface {p4, v0}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onSuccess(Lcom/tkay/core/api/TYBidRequestInfo;)V

    :cond_2
    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 147
    invoke-static {}, Lcom/tkay/network/adx/AdxTYInitManager;->getInstance()Lcom/tkay/network/adx/AdxTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 152
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYAdapter;->b:Lcom/tkay/core/common/f/i;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 11
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

    const-string v0, "basead_params"

    .line 1122
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/i;

    iput-object v0, p0, Lcom/tkay/network/adx/AdxTYAdapter;->b:Lcom/tkay/core/common/f/i;

    .line 1123
    new-instance v0, Lcom/tkay/basead/d/e;

    sget-object v1, Lcom/tkay/basead/d/b$a;->a:Lcom/tkay/basead/d/b$a;

    iget-object v2, p0, Lcom/tkay/network/adx/AdxTYAdapter;->b:Lcom/tkay/core/common/f/i;

    invoke-direct {v0, p1, v1, v2}, Lcom/tkay/basead/d/e;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object v0, p0, Lcom/tkay/network/adx/AdxTYAdapter;->a:Lcom/tkay/basead/d/e;

    const-string v0, "layout_type"

    .line 38
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    .line 39
    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/network/adx/AdxTYAdapter;->c:Z

    const-string v0, "0"

    const-string v2, "close_button"

    .line 41
    invoke-static {p2, v2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 42
    invoke-static {v0, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v10

    const-string v2, "v_m"

    .line 44
    invoke-static {p2, v2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 45
    invoke-static {v0, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v7

    const-string v0, "video_autoplay"

    .line 47
    invoke-static {p2, v0, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const/4 p2, -0x1

    if-eqz p3, :cond_0

    const-string p2, "key_width"

    .line 60
    invoke-static {p3, p2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result p2

    const-string v0, "key_height"

    .line 61
    invoke-static {p3, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result p3

    goto :goto_0

    :cond_0
    move p3, p2

    .line 64
    :goto_0
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 65
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    iget v1, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    if-gtz p2, :cond_1

    .line 69
    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result p2

    :cond_1
    if-gtz p3, :cond_2

    mul-int/lit8 p3, p2, 0x3

    .line 72
    div-int/lit8 p3, p3, 0x4

    :cond_2
    if-le p2, v0, :cond_3

    move v5, v0

    goto :goto_1

    :cond_3
    move v5, p2

    :goto_1
    if-le p3, v1, :cond_4

    move v6, v1

    goto :goto_2

    :cond_4
    move v6, p3

    .line 90
    :goto_2
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v9

    .line 96
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYAdapter;->a:Lcom/tkay/basead/d/e;

    new-instance p2, Lcom/tkay/network/adx/AdxTYAdapter$1;

    move-object v3, p2

    move-object v4, p0

    invoke-direct/range {v3 .. v10}, Lcom/tkay/network/adx/AdxTYAdapter$1;-><init>(Lcom/tkay/network/adx/AdxTYAdapter;IIZLjava/lang/String;Landroid/content/Context;Z)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/e;->a(Lcom/tkay/basead/e/d;)V

    return-void
.end method
