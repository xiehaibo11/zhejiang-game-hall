.class public Lcom/tkay/network/adx/AdxTYSplashAdapter;
.super Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;


# instance fields
.field a:Lcom/tkay/basead/d/g;

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


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 30
    invoke-direct {p0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;)V
    .locals 5
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

    const-string v0, "orientation"

    .line 148
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    .line 149
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 151
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    const-string v1, "countdown"

    .line 155
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 156
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 158
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    mul-int/lit16 v1, v1, 0x3e8

    goto :goto_1

    :cond_1
    const/4 v1, 0x5

    :goto_1
    const-string v3, "allows_skip"

    .line 162
    invoke-interface {p2, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 163
    invoke-interface {p2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_4

    .line 165
    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    if-nez v3, :cond_2

    goto :goto_2

    :cond_2
    if-ne v3, v2, :cond_3

    const/4 v2, 0x0

    goto :goto_2

    :cond_3
    move v2, v3

    :cond_4
    :goto_2
    const-string v3, "basead_params"

    .line 175
    invoke-interface {p2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->b:Lcom/tkay/core/common/f/i;

    .line 176
    new-instance p2, Lcom/tkay/basead/d/g;

    sget-object v3, Lcom/tkay/basead/d/b$a;->a:Lcom/tkay/basead/d/b$a;

    iget-object v4, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->b:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, v3, v4}, Lcom/tkay/basead/d/g;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    .line 177
    new-instance p1, Lcom/tkay/basead/d/c$a;

    invoke-direct {p1}, Lcom/tkay/basead/d/c$a;-><init>()V

    .line 178
    invoke-virtual {p1, v0}, Lcom/tkay/basead/d/c$a;->d(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 179
    invoke-virtual {p1, v1}, Lcom/tkay/basead/d/c$a;->e(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 180
    invoke-virtual {p1, v2}, Lcom/tkay/basead/d/c$a;->f(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 181
    invoke-virtual {p1}, Lcom/tkay/basead/d/c$a;->a()Lcom/tkay/basead/d/c;

    move-result-object p1

    .line 177
    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/g;->a(Lcom/tkay/basead/d/c;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 134
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 135
    invoke-virtual {v0}, Lcom/tkay/basead/d/g;->b()V

    .line 136
    iput-object v1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    .line 139
    :cond_0
    iput-object v1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->b:Lcom/tkay/core/common/f/i;

    return-void
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
    .locals 0
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

    .line 214
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    .line 215
    new-instance p3, Lcom/tkay/network/adx/AdxBidRequestInfo;

    if-eqz p2, :cond_0

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p2, ""

    :goto_0
    invoke-direct {p3, p1, p2}, Lcom/tkay/network/adx/AdxBidRequestInfo;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 216
    invoke-virtual {p3}, Lcom/tkay/network/adx/AdxBidRequestInfo;->fillSplashData()V

    if-eqz p4, :cond_1

    .line 219
    invoke-interface {p4, p3}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onSuccess(Lcom/tkay/core/api/TYBidRequestInfo;)V

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

    .line 204
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->c:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 188
    invoke-static {}, Lcom/tkay/network/adx/AdxTYInitManager;->getInstance()Lcom/tkay/network/adx/AdxTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 193
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->b:Lcom/tkay/core/common/f/i;

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

.method public isAdReady()Z
    .locals 2

    .line 68
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/d/g;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    .line 69
    iget-object v1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->c:Ljava/util/Map;

    if-nez v1, :cond_1

    .line 70
    iget-object v1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    invoke-static {v1}, Lcom/tkay/basead/b;->a(Lcom/tkay/basead/d/b;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->c:Ljava/util/Map;

    :cond_1
    return v0
.end method

.method public isSupportCustomSkipView()Z
    .locals 1

    .line 209
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/d/g;->f()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 4
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

    const-string p3, "orientation"

    .line 1148
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 1149
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    if-eqz p3, :cond_0

    .line 1151
    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p3

    goto :goto_0

    :cond_0
    move p3, v1

    :goto_0
    const-string v0, "countdown"

    .line 1155
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 1156
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1158
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    goto :goto_1

    :cond_1
    const/4 v0, 0x5

    :goto_1
    const-string v2, "allows_skip"

    .line 1162
    invoke-interface {p2, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_4

    .line 1163
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 1165
    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    if-nez v2, :cond_2

    goto :goto_2

    :cond_2
    if-ne v2, v1, :cond_3

    const/4 v1, 0x0

    goto :goto_2

    :cond_3
    move v1, v2

    :cond_4
    :goto_2
    const-string v2, "basead_params"

    .line 1175
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->b:Lcom/tkay/core/common/f/i;

    .line 1176
    new-instance p2, Lcom/tkay/basead/d/g;

    sget-object v2, Lcom/tkay/basead/d/b$a;->a:Lcom/tkay/basead/d/b$a;

    iget-object v3, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->b:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, v2, v3}, Lcom/tkay/basead/d/g;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    .line 1177
    new-instance p1, Lcom/tkay/basead/d/c$a;

    invoke-direct {p1}, Lcom/tkay/basead/d/c$a;-><init>()V

    .line 1178
    invoke-virtual {p1, p3}, Lcom/tkay/basead/d/c$a;->d(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 1179
    invoke-virtual {p1, v0}, Lcom/tkay/basead/d/c$a;->e(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 1180
    invoke-virtual {p1, v1}, Lcom/tkay/basead/d/c$a;->f(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 1181
    invoke-virtual {p1}, Lcom/tkay/basead/d/c$a;->a()Lcom/tkay/basead/d/c;

    move-result-object p1

    .line 1177
    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/g;->a(Lcom/tkay/basead/d/c;)V

    .line 41
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    new-instance p2, Lcom/tkay/network/adx/AdxTYSplashAdapter$1;

    invoke-direct {p2, p0}, Lcom/tkay/network/adx/AdxTYSplashAdapter$1;-><init>(Lcom/tkay/network/adx/AdxTYSplashAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/g;->a(Lcom/tkay/basead/e/c;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
    .locals 2

    .line 78
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    if-eqz p1, :cond_1

    .line 80
    new-instance v0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;

    invoke-virtual {p1}, Lcom/tkay/basead/d/g;->e()Lcom/tkay/core/common/f/h;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;-><init>(Lcom/tkay/network/adx/AdxTYSplashAdapter;Lcom/tkay/core/common/f/h;)V

    invoke-virtual {p1, v0}, Lcom/tkay/basead/d/g;->a(Lcom/tkay/basead/e/a;)V

    .line 123
    invoke-virtual {p0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->isCustomSkipView()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 124
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    invoke-virtual {p1}, Lcom/tkay/basead/d/g;->a()V

    .line 127
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/g;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method
