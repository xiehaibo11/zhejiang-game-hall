.class public Lcom/tkay/network/adx/AdxTYBannerAdapter;
.super Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;


# instance fields
.field a:Lcom/tkay/core/common/f/i;

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

.field private c:Lcom/tkay/basead/d/a;

.field private d:Landroid/view/View;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 29
    invoke-direct {p0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/adx/AdxTYBannerAdapter;Landroid/view/View;)Landroid/view/View;
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->d:Landroid/view/View;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 5
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

    const-string v0, "close_button"

    .line 139
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 140
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 142
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    const-string v1, "size"

    .line 146
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 147
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 149
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    :cond_1
    const-string v1, "320x50"

    :goto_1
    if-eqz p3, :cond_2

    const-string v3, "key_height"

    .line 157
    invoke-interface {p3, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 158
    invoke-interface {p3, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    .line 160
    :try_start_0
    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    double-to-int v2, v2

    goto :goto_2

    :catchall_0
    move-exception p3

    .line 162
    invoke-virtual {p3}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_2
    const-string p3, "basead_params"

    .line 168
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->a:Lcom/tkay/core/common/f/i;

    .line 169
    new-instance p2, Lcom/tkay/basead/d/a;

    sget-object p3, Lcom/tkay/basead/d/b$a;->a:Lcom/tkay/basead/d/b$a;

    iget-object v3, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->a:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, p3, v3}, Lcom/tkay/basead/d/a;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c:Lcom/tkay/basead/d/a;

    .line 170
    new-instance p1, Lcom/tkay/basead/d/c$a;

    invoke-direct {p1}, Lcom/tkay/basead/d/c$a;-><init>()V

    .line 171
    invoke-virtual {p1, v0}, Lcom/tkay/basead/d/c$a;->c(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 172
    invoke-virtual {p1, v1}, Lcom/tkay/basead/d/c$a;->b(Ljava/lang/String;)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 173
    invoke-virtual {p1, v2}, Lcom/tkay/basead/d/c$a;->g(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 174
    invoke-virtual {p1}, Lcom/tkay/basead/d/c$a;->a()Lcom/tkay/basead/d/c;

    move-result-object p1

    .line 170
    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/a;->a(Lcom/tkay/basead/d/c;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/basead/d/a;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c:Lcom/tkay/basead/d/a;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Landroid/view/View;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->d:Landroid/view/View;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    const/4 v0, 0x0

    .line 186
    iput-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->d:Landroid/view/View;

    .line 187
    iget-object v1, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c:Lcom/tkay/basead/d/a;

    if-eqz v1, :cond_0

    .line 188
    invoke-virtual {v1, v0}, Lcom/tkay/basead/d/a;->a(Lcom/tkay/basead/e/a;)V

    .line 189
    iget-object v1, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c:Lcom/tkay/basead/d/a;

    invoke-virtual {v1}, Lcom/tkay/basead/d/a;->b()V

    .line 190
    iput-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c:Lcom/tkay/basead/d/a;

    :cond_0
    return-void
.end method

.method public getBannerView()Landroid/view/View;
    .locals 1

    .line 49
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->d:Landroid/view/View;

    return-object v0
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

    .line 216
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/core/common/f/i;

    .line 217
    new-instance v0, Lcom/tkay/network/adx/AdxBidRequestInfo;

    if-eqz p3, :cond_0

    iget-object p3, p3, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p3, ""

    :goto_0
    invoke-direct {v0, p1, p3}, Lcom/tkay/network/adx/AdxBidRequestInfo;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 218
    invoke-virtual {v0, p2}, Lcom/tkay/network/adx/AdxBidRequestInfo;->fillBannerData(Ljava/util/Map;)V

    if-eqz p4, :cond_1

    .line 221
    invoke-interface {p4, v0}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onSuccess(Lcom/tkay/core/api/TYBidRequestInfo;)V

    :cond_1
    return-void
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

    .line 211
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->b:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 206
    invoke-static {}, Lcom/tkay/network/adx/AdxTYInitManager;->getInstance()Lcom/tkay/network/adx/AdxTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 196
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->a:Lcom/tkay/core/common/f/i;

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
    .locals 5
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

    const-string v0, "close_button"

    .line 1139
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 1140
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1142
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    const-string v1, "size"

    .line 1146
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 1147
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1149
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    :cond_1
    const-string v1, "320x50"

    :goto_1
    if-eqz p3, :cond_2

    const-string v3, "key_height"

    .line 1157
    invoke-interface {p3, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 1158
    invoke-interface {p3, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    .line 1160
    :try_start_0
    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    double-to-int v2, v2

    goto :goto_2

    :catchall_0
    move-exception p3

    .line 1162
    invoke-virtual {p3}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_2
    const-string p3, "basead_params"

    .line 1168
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->a:Lcom/tkay/core/common/f/i;

    .line 1169
    new-instance p2, Lcom/tkay/basead/d/a;

    sget-object p3, Lcom/tkay/basead/d/b$a;->a:Lcom/tkay/basead/d/b$a;

    iget-object v3, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->a:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, p3, v3}, Lcom/tkay/basead/d/a;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c:Lcom/tkay/basead/d/a;

    .line 1170
    new-instance p1, Lcom/tkay/basead/d/c$a;

    invoke-direct {p1}, Lcom/tkay/basead/d/c$a;-><init>()V

    .line 1171
    invoke-virtual {p1, v0}, Lcom/tkay/basead/d/c$a;->c(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 1172
    invoke-virtual {p1, v1}, Lcom/tkay/basead/d/c$a;->b(Ljava/lang/String;)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 1173
    invoke-virtual {p1, v2}, Lcom/tkay/basead/d/c$a;->g(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 1174
    invoke-virtual {p1}, Lcom/tkay/basead/d/c$a;->a()Lcom/tkay/basead/d/c;

    move-result-object p1

    .line 1170
    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/a;->a(Lcom/tkay/basead/d/c;)V

    .line 58
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c:Lcom/tkay/basead/d/a;

    new-instance p2, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;

    invoke-direct {p2, p0}, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;-><init>(Lcom/tkay/network/adx/AdxTYBannerAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/a;->a(Lcom/tkay/basead/e/c;)V

    return-void
.end method
