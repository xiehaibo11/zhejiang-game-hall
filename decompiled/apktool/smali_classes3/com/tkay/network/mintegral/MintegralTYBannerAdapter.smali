.class public Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;
.super Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;


# instance fields
.field a:Lcom/mbridge/msdk/out/MBBannerView;

.field b:Ljava/lang/String;

.field c:Ljava/lang/String;

.field d:Ljava/lang/String;

.field e:Ljava/lang/String;

.field f:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 32
    invoke-direct {p0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;-><init>()V

    const-string v0, ""

    .line 36
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->b:Ljava/lang/String;

    .line 37
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->c:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;)V
    .locals 7
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

    .line 44
    new-instance v0, Lcom/mbridge/msdk/out/MBBannerView;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/out/MBBannerView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    .line 48
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->d:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v1

    const/4 v2, 0x3

    const/4 v3, 0x2

    const/4 v4, 0x1

    const/4 v5, -0x1

    const/4 v6, 0x0

    sparse-switch v1, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v1, "320x90"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v6

    goto :goto_1

    :sswitch_1
    const-string v1, "320x50"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v2

    goto :goto_1

    :sswitch_2
    const-string v1, "smart"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v3

    goto :goto_1

    :sswitch_3
    const-string v1, "300x250"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v4

    goto :goto_1

    :cond_0
    :goto_0
    move v0, v5

    :goto_1
    if-eqz v0, :cond_3

    if-eq v0, v4, :cond_2

    if-eq v0, v3, :cond_1

    const/4 v2, 0x4

    const/16 v0, 0x32

    goto :goto_2

    :cond_1
    move v0, v5

    goto :goto_2

    :cond_2
    const/16 v0, 0xfa

    move v2, v3

    goto :goto_2

    :cond_3
    const/16 v0, 0x5a

    move v2, v4

    .line 74
    :goto_2
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    new-instance v3, Lcom/mbridge/msdk/out/BannerSize;

    invoke-direct {v3, v2, v6, v6}, Lcom/mbridge/msdk/out/BannerSize;-><init>(III)V

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->b:Ljava/lang/String;

    invoke-virtual {v1, v3, v2, v4}, Lcom/mbridge/msdk/out/MBBannerView;->init(Lcom/mbridge/msdk/out/BannerSize;Ljava/lang/String;Ljava/lang/String;)V

    .line 75
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    if-lez v0, :cond_4

    int-to-float v0, v0

    invoke-static {p1, v0}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->dip2px(Landroid/content/Context;F)I

    move-result v0

    :cond_4
    invoke-direct {v2, v5, v0}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/out/MBBannerView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 77
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    new-instance v0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;

    invoke-direct {v0, p0}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)V

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/out/MBBannerView;->setBannerAdListener(Lcom/mbridge/msdk/out/BannerAdListener;)V

    .line 133
    iget p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->f:I

    if-lez p1, :cond_5

    .line 134
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/out/MBBannerView;->setRefreshTime(I)V

    goto :goto_3

    .line 136
    :cond_5
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {p1, v6}, Lcom/mbridge/msdk/out/MBBannerView;->setRefreshTime(I)V

    .line 143
    :goto_3
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->e:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    .line 144
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    const/4 v0, 0x7

    invoke-virtual {p1, v0, p2}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 146
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->e:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/out/MBBannerView;->loadFromBid(Ljava/lang/String;)V

    return-void

    .line 148
    :cond_6
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    const/16 v0, 0x8

    invoke-virtual {p1, v0, p2}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 150
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBBannerView;->load()V

    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        -0x215ddd38 -> :sswitch_3
        0x68795c9 -> :sswitch_2
        0x59df59c2 -> :sswitch_1
        0x59df5a3e -> :sswitch_0
    .end sparse-switch
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;Landroid/content/Context;Ljava/util/Map;)V
    .locals 7

    .line 1044
    new-instance v0, Lcom/mbridge/msdk/out/MBBannerView;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/out/MBBannerView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    .line 1048
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->d:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v1

    const/4 v2, 0x3

    const/4 v3, 0x2

    const/4 v4, 0x1

    const/4 v5, -0x1

    const/4 v6, 0x0

    sparse-switch v1, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v1, "320x90"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v6

    goto :goto_1

    :sswitch_1
    const-string v1, "320x50"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v2

    goto :goto_1

    :sswitch_2
    const-string v1, "smart"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v3

    goto :goto_1

    :sswitch_3
    const-string v1, "300x250"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v4

    goto :goto_1

    :cond_0
    :goto_0
    move v0, v5

    :goto_1
    if-eqz v0, :cond_3

    if-eq v0, v4, :cond_2

    if-eq v0, v3, :cond_1

    const/4 v2, 0x4

    const/16 v0, 0x32

    goto :goto_2

    :cond_1
    move v0, v5

    goto :goto_2

    :cond_2
    const/16 v0, 0xfa

    move v2, v3

    goto :goto_2

    :cond_3
    const/16 v0, 0x5a

    move v2, v4

    .line 1074
    :goto_2
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    new-instance v3, Lcom/mbridge/msdk/out/BannerSize;

    invoke-direct {v3, v2, v6, v6}, Lcom/mbridge/msdk/out/BannerSize;-><init>(III)V

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->b:Ljava/lang/String;

    invoke-virtual {v1, v3, v2, v4}, Lcom/mbridge/msdk/out/MBBannerView;->init(Lcom/mbridge/msdk/out/BannerSize;Ljava/lang/String;Ljava/lang/String;)V

    .line 1075
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    if-lez v0, :cond_4

    int-to-float v0, v0

    invoke-static {p1, v0}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->dip2px(Landroid/content/Context;F)I

    move-result v0

    :cond_4
    invoke-direct {v2, v5, v0}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/out/MBBannerView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1077
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    new-instance v0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;

    invoke-direct {v0, p0}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)V

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/out/MBBannerView;->setBannerAdListener(Lcom/mbridge/msdk/out/BannerAdListener;)V

    .line 1133
    iget p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->f:I

    if-lez p1, :cond_5

    .line 1134
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/out/MBBannerView;->setRefreshTime(I)V

    goto :goto_3

    .line 1136
    :cond_5
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {p1, v6}, Lcom/mbridge/msdk/out/MBBannerView;->setRefreshTime(I)V

    .line 1143
    :goto_3
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->e:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    .line 1144
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    const/4 v0, 0x7

    invoke-virtual {p1, v0, p2}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 1146
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->e:Ljava/lang/String;

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/out/MBBannerView;->loadFromBid(Ljava/lang/String;)V

    return-void

    .line 1148
    :cond_6
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    const/16 v0, 0x8

    invoke-virtual {p1, v0, p2}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 1150
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/out/MBBannerView;->load()V

    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        -0x215ddd38 -> :sswitch_3
        0x68795c9 -> :sswitch_2
        0x59df59c2 -> :sswitch_1
        0x59df5a3e -> :sswitch_0
    .end sparse-switch
.end method

.method static synthetic b(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method public static dip2px(Landroid/content/Context;F)I
    .locals 0

    .line 156
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F

    mul-float/2addr p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method

.method static synthetic e(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 245
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 246
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBBannerView;->setBannerAdListener(Lcom/mbridge/msdk/out/BannerAdListener;)V

    .line 247
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBBannerView;->release()V

    .line 248
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    :cond_0
    return-void
.end method

.method public getBannerView()Landroid/view/View;
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    return-object v0
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
    .locals 7
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

    const-string v0, "unitid"

    .line 274
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->b:Ljava/lang/String;

    .line 275
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v1

    const/4 v5, 0x2

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v6, p4

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;ILcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getMediationInitManager()Lcom/tkay/core/api/TYInitMediation;
    .locals 1

    .line 264
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 167
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 254
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 259
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkVersion()Ljava/lang/String;

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

    const-string p3, "nw_rft"

    const-string v0, "appid"

    .line 172
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "appkey"

    .line 173
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "unitid"

    .line 174
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->b:Ljava/lang/String;

    const-string v2, "size"

    .line 175
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->d:Ljava/lang/String;

    const-string v2, "payload"

    .line 176
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->e:Ljava/lang/String;

    const-string v2, "placement_id"

    .line 177
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->c:Ljava/lang/String;

    .line 201
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    :cond_0
    const/4 v0, 0x0

    .line 215
    iput v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->f:I

    .line 217
    :try_start_0
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 219
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result p3

    iput p3, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->f:I

    int-to-float p3, p3

    const/high16 v0, 0x447a0000    # 1000.0f

    div-float/2addr p3, v0

    float-to-int p3, p3

    .line 220
    iput p3, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->f:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p3

    .line 223
    invoke-virtual {p3}, Ljava/lang/Throwable;->printStackTrace()V

    .line 226
    :cond_1
    :goto_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 228
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p3

    new-instance v0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$2;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$2;-><init>(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;Landroid/content/Context;Ljava/util/Map;)V

    invoke-virtual {p3, p1, p2, v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void

    .line 202
    :cond_2
    :goto_1
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p1, :cond_3

    .line 203
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    const-string p2, ""

    const-string p3, "appid\u3001appkey or unitid is empty."

    invoke-interface {p1, p2, p3}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method
