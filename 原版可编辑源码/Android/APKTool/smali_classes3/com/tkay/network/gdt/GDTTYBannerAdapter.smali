.class public Lcom/tkay/network/gdt/GDTTYBannerAdapter;
.super Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/lang/String;

.field c:Ljava/lang/String;

.field d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

.field e:I

.field f:I

.field g:Z

.field h:Z

.field i:Lcom/qq/e/comm/compliance/DownloadConfirmListener;

.field private final j:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 38
    invoke-direct {p0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;-><init>()V

    .line 39
    const-class v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->j:Ljava/lang/String;

    const/4 v0, 0x0

    .line 46
    iput v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->e:I

    .line 53
    new-instance v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$1;

    invoke-direct {v0, p0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter$1;-><init>(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->i:Lcom/qq/e/comm/compliance/DownloadConfirmListener;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method private a(Landroid/app/Activity;Ljava/util/Map;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 69
    new-instance v3, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;

    invoke-direct {v3, p0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;-><init>(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)V

    .line 135
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->h:Z

    if-eqz v0, :cond_0

    goto :goto_0

    .line 139
    :cond_0
    new-instance p2, Lcom/qq/e/ads/banner2/UnifiedBannerView;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->b:Ljava/lang/String;

    const/4 v4, 0x0

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->c:Ljava/lang/String;

    move-object v0, p2

    move-object v1, p1

    invoke-direct/range {v0 .. v5}, Lcom/qq/e/ads/banner2/UnifiedBannerView;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/banner2/UnifiedBannerADListener;Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_1

    .line 136
    :cond_1
    :goto_0
    new-instance v0, Lcom/qq/e/ads/banner2/UnifiedBannerView;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->b:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v3}, Lcom/qq/e/ads/banner2/UnifiedBannerView;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/banner2/UnifiedBannerADListener;)V

    .line 137
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    move-object p2, v0

    .line 143
    :goto_1
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->f:I

    if-lez p1, :cond_2

    .line 144
    invoke-virtual {p2, p1}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->setRefresh(I)V

    goto :goto_2

    :cond_2
    const/4 p1, 0x0

    .line 146
    invoke-virtual {p2, p1}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->setRefresh(I)V

    .line 148
    :goto_2
    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    .line 150
    invoke-virtual {p2}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    if-nez p1, :cond_3

    .line 151
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    const/4 v2, -0x2

    invoke-direct {v0, v1, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v0}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 153
    :cond_3
    invoke-virtual {p2}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->loadAD()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYBannerAdapter;Landroid/app/Activity;Ljava/util/Map;)V
    .locals 6

    .line 2069
    new-instance v3, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;

    invoke-direct {v3, p0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;-><init>(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)V

    .line 2135
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->h:Z

    if-eqz v0, :cond_0

    goto :goto_0

    .line 2139
    :cond_0
    new-instance p2, Lcom/qq/e/ads/banner2/UnifiedBannerView;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->b:Ljava/lang/String;

    const/4 v4, 0x0

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->c:Ljava/lang/String;

    move-object v0, p2

    move-object v1, p1

    invoke-direct/range {v0 .. v5}, Lcom/qq/e/ads/banner2/UnifiedBannerView;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/banner2/UnifiedBannerADListener;Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_1

    .line 2136
    :cond_1
    :goto_0
    new-instance v0, Lcom/qq/e/ads/banner2/UnifiedBannerView;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->b:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v3}, Lcom/qq/e/ads/banner2/UnifiedBannerView;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/banner2/UnifiedBannerADListener;)V

    .line 2137
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    move-object p2, v0

    .line 2143
    :goto_1
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->f:I

    if-lez p1, :cond_2

    .line 2144
    invoke-virtual {p2, p1}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->setRefresh(I)V

    goto :goto_2

    :cond_2
    const/4 p1, 0x0

    .line 2146
    invoke-virtual {p2, p1}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->setRefresh(I)V

    .line 2148
    :goto_2
    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    .line 2150
    invoke-virtual {p2}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    if-nez p1, :cond_3

    .line 2151
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    new-instance p1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v0, -0x1

    const/4 v1, -0x2

    invoke-direct {p1, v0, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, p1}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 2153
    :cond_3
    invoke-virtual {p2}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->loadAD()V

    return-void
.end method

.method private a(Ljava/util/Map;Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
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

    const-string v0, "nw_rft"

    const-string v1, "app_id"

    .line 216
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->a:Ljava/lang/String;

    const-string v1, "unit_id"

    .line 217
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->b:Ljava/lang/String;

    const-string v1, "unit_version"

    .line 218
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->e:I

    const-string v1, "payload"

    .line 220
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->c:Ljava/lang/String;

    const/4 v1, 0x0

    const-string v2, "ad_click_confirm_status"

    .line 222
    invoke-static {p2, v2, v1}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;Z)Z

    move-result p2

    iput-boolean p2, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->g:Z

    .line 224
    iput v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->f:I

    .line 226
    :try_start_0
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 227
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->f:I

    int-to-float p1, p1

    const/high16 p2, 0x447a0000    # 1000.0f

    div-float/2addr p1, p2

    float-to-int p1, p1

    .line 228
    iput p1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->f:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 231
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 237
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    if-eqz v0, :cond_1

    .line 238
    instance-of v1, v0, Lcom/qq/e/ads/banner2/UnifiedBannerView;

    if-eqz v1, :cond_0

    .line 239
    invoke-virtual {v0}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->destroy()V

    :cond_0
    const/4 v0, 0x0

    .line 241
    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    :cond_1
    return-void
.end method

.method public getBannerView()Landroid/view/View;
    .locals 1

    .line 158
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

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

    const-string v0, "unit_id"

    .line 262
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->b:Ljava/lang/String;

    .line 263
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getMediationInitManager()Lcom/tkay/core/api/TYInitMediation;
    .locals 1

    .line 257
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 163
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 247
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 252
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

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

    const-string v0, "nw_rft"

    const-string v1, "app_id"

    .line 1216
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->a:Ljava/lang/String;

    const-string v1, "unit_id"

    .line 1217
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->b:Ljava/lang/String;

    const-string v1, "unit_version"

    .line 1218
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->e:I

    const-string v1, "payload"

    .line 1220
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->c:Ljava/lang/String;

    const/4 v1, 0x0

    const-string v2, "ad_click_confirm_status"

    .line 1222
    invoke-static {p3, v2, v1}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;Z)Z

    move-result p3

    iput-boolean p3, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->g:Z

    .line 1224
    iput v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->f:I

    .line 1226
    :try_start_0
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_0

    .line 1227
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result p3

    iput p3, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->f:I

    int-to-float p3, p3

    const/high16 v0, 0x447a0000    # 1000.0f

    div-float/2addr p3, v0

    float-to-int p3, p3

    .line 1228
    iput p3, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->f:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p3

    .line 1231
    invoke-virtual {p3}, Ljava/lang/Throwable;->printStackTrace()V

    .line 170
    :cond_0
    :goto_0
    iget-object p3, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->a:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    const-string v0, ""

    if-nez p3, :cond_3

    iget-object p3, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->b:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_1

    goto :goto_1

    .line 175
    :cond_1
    instance-of p3, p1, Landroid/app/Activity;

    if-nez p3, :cond_2

    const-string p1, "Context must be activity."

    .line 176
    invoke-virtual {p0, v0, p1}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 197
    :cond_2
    new-instance p3, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;

    invoke-direct {p3, p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;-><init>(Lcom/tkay/network/gdt/GDTTYBannerAdapter;Landroid/content/Context;Ljava/util/Map;)V

    invoke-virtual {p0, p3}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->runOnNetworkRequestThread(Ljava/lang/Runnable;)V

    return-void

    :cond_3
    :goto_1
    const-string p1, "GTD appid or unitId is empty."

    .line 171
    invoke-virtual {p0, v0, p1}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public startBiddingRequest(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBiddingListener;)Z
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
            "Lcom/tkay/core/api/TYBiddingListener;",
            ")Z"
        }
    .end annotation

    const/4 p4, 0x1

    .line 268
    iput-boolean p4, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->h:Z

    .line 269
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
