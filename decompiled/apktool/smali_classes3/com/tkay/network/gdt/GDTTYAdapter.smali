.class public Lcom/tkay/network/gdt/GDTTYAdapter;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/lang/String;

.field c:I

.field d:Ljava/lang/String;

.field e:I

.field f:I

.field g:I

.field h:I

.field i:Z

.field private j:I

.field private k:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 34
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;-><init>()V

    const/4 v0, -0x1

    .line 41
    iput v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->j:I

    const/4 v0, -0x2

    iput v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->k:I

    const/4 v0, 0x0

    .line 49
    iput-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->i:Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;)V
    .locals 12
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

    .line 53
    :try_start_0
    iget v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->e:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    .line 62
    new-instance v0, Lcom/tkay/network/gdt/GDTTYAdapter$1;

    invoke-direct {v0, p0}, Lcom/tkay/network/gdt/GDTTYAdapter$1;-><init>(Lcom/tkay/network/gdt/GDTTYAdapter;)V

    .line 88
    iget v1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->e:I

    const/4 v2, 0x3

    if-ne v1, v2, :cond_0

    .line 89
    new-instance v1, Lcom/tkay/network/gdt/GDTTYNativeExpressPatchAd;

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->j:I

    iget v7, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->k:I

    iget v8, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->f:I

    iget v9, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->g:I

    iget v10, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    iget-object v11, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    move-object v3, v1

    move-object v4, p1

    invoke-direct/range {v3 .. v11}, Lcom/tkay/network/gdt/GDTTYNativeExpressPatchAd;-><init>(Landroid/content/Context;Ljava/lang/String;IIIIILjava/lang/String;)V

    .line 91
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v1, v0, p1}, Lcom/tkay/network/gdt/GDTTYNativeExpressPatchAd;->a(Lcom/tkay/network/gdt/a;Lcom/qq/e/comm/constants/LoadAdParams;)V

    return-void

    .line 94
    :cond_0
    new-instance v10, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    iget v4, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->j:I

    iget v5, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->k:I

    iget v6, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->f:I

    iget v7, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->g:I

    iget v8, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    iget-object v9, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    move-object v1, v10

    move-object v2, p1

    invoke-direct/range {v1 .. v9}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;-><init>(Landroid/content/Context;Ljava/lang/String;IIIIILjava/lang/String;)V

    .line 96
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v10, v0, p1}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->a(Lcom/tkay/network/gdt/a;Lcom/qq/e/comm/constants/LoadAdParams;)V

    return-void

    .line 56
    :cond_1
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 1112
    new-instance v0, Lcom/tkay/network/gdt/GDTTYAdapter$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/gdt/GDTTYAdapter$2;-><init>(Lcom/tkay/network/gdt/GDTTYAdapter;Landroid/content/Context;)V

    .line 1165
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 1166
    new-instance v1, Lcom/qq/e/ads/nativ/NativeUnifiedAD;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    invoke-direct {v1, p1, v2, v0}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/nativ/NativeADUnifiedListener;)V

    goto :goto_0

    .line 1168
    :cond_2
    new-instance v1, Lcom/qq/e/ads/nativ/NativeUnifiedAD;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    invoke-direct {v1, p1, v2, v0, v3}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/nativ/NativeADUnifiedListener;Ljava/lang/String;)V

    .line 1172
    :goto_0
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    const/4 v0, -0x1

    if-eq p1, v0, :cond_3

    .line 1173
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    invoke-virtual {v1, p1}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;->setMaxVideoDuration(I)V

    .line 1175
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 1176
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->c:I

    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p2

    invoke-virtual {v1, p1, p2}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;->loadData(ILcom/qq/e/comm/constants/LoadAdParams;)V

    return-void

    .line 1178
    :cond_4
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->c:I

    invoke-virtual {v1, p1}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;->loadData(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 102
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, ""

    invoke-virtual {p0, p2, p1}, Lcom/tkay/network/gdt/GDTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYAdapter;Landroid/content/Context;Ljava/util/Map;)V
    .locals 12

    .line 2053
    :try_start_0
    iget v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->e:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    .line 2062
    new-instance v0, Lcom/tkay/network/gdt/GDTTYAdapter$1;

    invoke-direct {v0, p0}, Lcom/tkay/network/gdt/GDTTYAdapter$1;-><init>(Lcom/tkay/network/gdt/GDTTYAdapter;)V

    .line 2088
    iget v1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->e:I

    const/4 v2, 0x3

    if-ne v1, v2, :cond_0

    .line 2089
    new-instance v1, Lcom/tkay/network/gdt/GDTTYNativeExpressPatchAd;

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->j:I

    iget v7, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->k:I

    iget v8, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->f:I

    iget v9, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->g:I

    iget v10, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    iget-object v11, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    move-object v3, v1

    move-object v4, p1

    invoke-direct/range {v3 .. v11}, Lcom/tkay/network/gdt/GDTTYNativeExpressPatchAd;-><init>(Landroid/content/Context;Ljava/lang/String;IIIIILjava/lang/String;)V

    .line 2091
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v1, v0, p1}, Lcom/tkay/network/gdt/GDTTYNativeExpressPatchAd;->a(Lcom/tkay/network/gdt/a;Lcom/qq/e/comm/constants/LoadAdParams;)V

    return-void

    .line 2094
    :cond_0
    new-instance v10, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    iget v4, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->j:I

    iget v5, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->k:I

    iget v6, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->f:I

    iget v7, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->g:I

    iget v8, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    iget-object v9, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    move-object v1, v10

    move-object v2, p1

    invoke-direct/range {v1 .. v9}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;-><init>(Landroid/content/Context;Ljava/lang/String;IIIIILjava/lang/String;)V

    .line 2096
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v10, v0, p1}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->a(Lcom/tkay/network/gdt/a;Lcom/qq/e/comm/constants/LoadAdParams;)V

    return-void

    .line 2056
    :cond_1
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 2112
    new-instance v0, Lcom/tkay/network/gdt/GDTTYAdapter$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/gdt/GDTTYAdapter$2;-><init>(Lcom/tkay/network/gdt/GDTTYAdapter;Landroid/content/Context;)V

    .line 2165
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 2166
    new-instance v1, Lcom/qq/e/ads/nativ/NativeUnifiedAD;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    invoke-direct {v1, p1, v2, v0}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/nativ/NativeADUnifiedListener;)V

    goto :goto_0

    .line 2168
    :cond_2
    new-instance v1, Lcom/qq/e/ads/nativ/NativeUnifiedAD;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    invoke-direct {v1, p1, v2, v0, v3}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/nativ/NativeADUnifiedListener;Ljava/lang/String;)V

    .line 2172
    :goto_0
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    const/4 v0, -0x1

    if-eq p1, v0, :cond_3

    .line 2173
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    invoke-virtual {v1, p1}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;->setMaxVideoDuration(I)V

    .line 2175
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 2176
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->c:I

    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p2

    invoke-virtual {v1, p1, p2}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;->loadData(ILcom/qq/e/comm/constants/LoadAdParams;)V

    return-void

    .line 2178
    :cond_4
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->c:I

    invoke-virtual {v1, p1}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;->loadData(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 2102
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, ""

    invoke-virtual {p0, p2, p1}, Lcom/tkay/network/gdt/GDTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/util/Map;Ljava/util/Map;)V
    .locals 6
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

    const-string v0, "key_height"

    const-string v1, "gdtad_height"

    const-string v2, "app_id"

    .line 237
    invoke-static {p1, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->a:Ljava/lang/String;

    const-string v2, "unit_id"

    .line 238
    invoke-static {p1, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    const-string v2, "unit_type"

    .line 239
    invoke-static {p1, v2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result v2

    iput v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->e:I

    const-string v2, "payload"

    .line 240
    invoke-static {p1, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    .line 242
    iget-boolean v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->i:Z

    const/4 v3, 0x1

    if-eqz v2, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    iget v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->mRequestNum:I

    :goto_0
    iput v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->c:I

    const/4 v2, -0x1

    :try_start_0
    const-string v4, "key_width"

    .line 246
    invoke-static {p2, v4, v2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v4

    iput v4, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->j:I

    .line 248
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    const/4 v5, -0x2

    if-eqz v4, :cond_1

    .line 249
    invoke-static {p2, v1, v5}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p2

    iput p2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->k:I

    goto :goto_1

    .line 250
    :cond_1
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 251
    invoke-static {p2, v0, v5}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p2

    iput p2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->k:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p2

    .line 254
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    const/4 p2, 0x0

    const-string v0, "video_muted"

    .line 257
    invoke-static {p1, v0, p2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p2

    const-string v0, "video_autoplay"

    .line 258
    invoke-static {p1, v0, v3}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v0

    const-string v1, "video_duration"

    .line 259
    invoke-static {p1, v1, v2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p1

    .line 261
    iput p2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->f:I

    .line 262
    iput v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->g:I

    .line 263
    iput p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/gdt/GDTTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private b(Landroid/content/Context;Ljava/util/Map;)V
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

    .line 112
    new-instance v0, Lcom/tkay/network/gdt/GDTTYAdapter$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/gdt/GDTTYAdapter$2;-><init>(Lcom/tkay/network/gdt/GDTTYAdapter;Landroid/content/Context;)V

    .line 165
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 166
    new-instance v1, Lcom/qq/e/ads/nativ/NativeUnifiedAD;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    invoke-direct {v1, p1, v2, v0}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/nativ/NativeADUnifiedListener;)V

    goto :goto_0

    .line 168
    :cond_0
    new-instance v1, Lcom/qq/e/ads/nativ/NativeUnifiedAD;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    invoke-direct {v1, p1, v2, v0, v3}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/nativ/NativeADUnifiedListener;Ljava/lang/String;)V

    .line 172
    :goto_0
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    const/4 v0, -0x1

    if-eq p1, v0, :cond_1

    .line 173
    invoke-virtual {v1, p1}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;->setMaxVideoDuration(I)V

    .line 175
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 176
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->c:I

    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p2

    invoke-virtual {v1, p1, p2}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;->loadData(ILcom/qq/e/comm/constants/LoadAdParams;)V

    return-void

    .line 178
    :cond_2
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->c:I

    invoke-virtual {v1, p1}, Lcom/qq/e/ads/nativ/NativeUnifiedAD;->loadData(I)V

    return-void
.end method

.method static synthetic c(Lcom/tkay/network/gdt/GDTTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/gdt/GDTTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 0

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

    const-string v0, "unit_id"

    .line 287
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    .line 288
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getMediationInitManager()Lcom/tkay/core/api/TYInitMediation;
    .locals 1

    .line 282
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 186
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 272
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 277
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 6
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

    const-string v0, "key_height"

    const-string v1, "gdtad_height"

    const-string v2, "app_id"

    .line 1237
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->a:Ljava/lang/String;

    const-string v2, "unit_id"

    .line 1238
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    const-string v2, "unit_type"

    .line 1239
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result v2

    iput v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->e:I

    const-string v2, "payload"

    .line 1240
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->d:Ljava/lang/String;

    .line 1242
    iget-boolean v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->i:Z

    const/4 v3, 0x1

    if-eqz v2, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    iget v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->mRequestNum:I

    :goto_0
    iput v2, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->c:I

    const/4 v2, -0x1

    :try_start_0
    const-string v4, "key_width"

    .line 1246
    invoke-static {p3, v4, v2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v4

    iput v4, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->j:I

    .line 1248
    invoke-interface {p3, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    const/4 v5, -0x2

    if-eqz v4, :cond_1

    .line 1249
    invoke-static {p3, v1, v5}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p3

    iput p3, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->k:I

    goto :goto_1

    .line 1250
    :cond_1
    invoke-interface {p3, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 1251
    invoke-static {p3, v0, v5}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p3

    iput p3, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->k:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p3

    .line 1254
    invoke-virtual {p3}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    const/4 p3, 0x0

    const-string v0, "video_muted"

    .line 1257
    invoke-static {p2, v0, p3}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p3

    const-string v0, "video_autoplay"

    .line 1258
    invoke-static {p2, v0, v3}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v0

    const-string v1, "video_duration"

    .line 1259
    invoke-static {p2, v1, v2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v1

    .line 1261
    iput p3, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->f:I

    .line 1262
    iput v0, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->g:I

    .line 1263
    iput v1, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->h:I

    .line 193
    iget-object p3, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->a:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_4

    iget-object p3, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->b:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_3

    goto :goto_2

    .line 223
    :cond_3
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object p3

    new-instance v0, Lcom/tkay/network/gdt/GDTTYAdapter$3;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYAdapter$3;-><init>(Lcom/tkay/network/gdt/GDTTYAdapter;Landroid/content/Context;Ljava/util/Map;)V

    invoke-virtual {p3, p1, p2, v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void

    :cond_4
    :goto_2
    const-string p1, ""

    const-string p2, "GTD appid or unitId is empty."

    .line 194
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

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

    .line 293
    iput-boolean p4, p0, Lcom/tkay/network/gdt/GDTTYAdapter;->i:Z

    .line 294
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/gdt/GDTTYAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
