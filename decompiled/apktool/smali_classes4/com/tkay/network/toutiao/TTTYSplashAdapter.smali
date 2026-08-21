.class public Lcom/tkay/network/toutiao/TTTYSplashAdapter;
.super Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

# interfaces
.implements Lcom/bykv/vk/openvk/CSJSplashAd$SplashAdListener;


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/lang/String;

.field c:Ljava/lang/String;

.field d:Lcom/bykv/vk/openvk/CSJSplashAd;

.field e:Z

.field f:Lcom/tkay/network/toutiao/TTTYSplashEyeAd;

.field g:Landroid/view/View;

.field h:Ljava/lang/String;

.field i:Z

.field j:Lcom/bykv/vk/openvk/TTAppDownloadListener;

.field private final k:Ljava/lang/String;

.field private l:Z

.field private m:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private n:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 36
    invoke-direct {p0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;-><init>()V

    .line 37
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->k:Ljava/lang/String;

    const-string v0, ""

    .line 39
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a:Ljava/lang/String;

    .line 40
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->b:Ljava/lang/String;

    .line 41
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->c:Ljava/lang/String;

    const/4 v1, 0x0

    .line 46
    iput-boolean v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->l:Z

    .line 53
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->h:Ljava/lang/String;

    .line 55
    iput-boolean v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->i:Z

    .line 338
    iput-boolean v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->n:Z

    .line 339
    new-instance v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;-><init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->j:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    return-void
.end method

.method private static a(Landroid/content/Context;F)I
    .locals 1

    .line 282
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F

    const/4 v0, 0x0

    cmpg-float v0, p0, v0

    if-gtz v0, :cond_0

    const/high16 p0, 0x3f800000    # 1.0f

    :cond_0
    div-float/2addr p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Ljava/util/Map;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->m:Ljava/util/Map;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYSplashAdapter;Ljava/util/Map;)Ljava/util/Map;
    .locals 0

    .line 36
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->m:Ljava/util/Map;

    return-object p1
.end method

.method private a()V
    .locals 2

    .line 250
    iget-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->l:Z

    if-eqz v0, :cond_0

    .line 251
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    new-instance v1, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;-><init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)V

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/CSJSplashAd;->setSplashClickEyeListener(Lcom/bykv/vk/openvk/CSJSplashAd$SplashClickEyeListener;)V

    :cond_0
    return-void
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 8
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

    const-string v0, "button_type"

    const-string v1, "zoomoutad_sw"

    const-string v2, "key_height"

    const-string v3, "key_width"

    .line 104
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->getVfManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v4

    .line 106
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 107
    invoke-interface {v4, p1}, Lcom/bykv/vk/openvk/TTVfManager;->createVfNative(Landroid/content/Context;)Lcom/bykv/vk/openvk/TTVfNative;

    move-result-object v4

    .line 108
    new-instance v5, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;

    iget-object v6, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->b:Ljava/lang/String;

    invoke-direct {v5, v6, p2, p3}, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;-><init>(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V

    const/4 v6, 0x0

    .line 113
    :try_start_0
    invoke-interface {p3, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_0

    .line 114
    invoke-interface {p3, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :cond_0
    :goto_0
    move v3, v6

    goto :goto_1

    :catchall_0
    move-exception v3

    .line 117
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    .line 121
    :goto_1
    :try_start_1
    invoke-interface {p3, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_1

    .line 122
    invoke-interface {p3, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    move v6, p3

    goto :goto_2

    :catchall_1
    move-exception p3

    .line 125
    invoke-virtual {p3}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_2
    if-gtz v3, :cond_2

    .line 129
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p3

    iget v3, p3, Landroid/util/DisplayMetrics;->widthPixels:I

    :cond_2
    if-gtz v6, :cond_3

    .line 132
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p3

    iget v6, p3, Landroid/util/DisplayMetrics;->heightPixels:I

    .line 135
    :cond_3
    invoke-virtual {v5, v3, v6}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setImageAcceptedSize(II)Lcom/bykv/vk/openvk/VfSlot$Builder;

    int-to-float p3, v3

    .line 136
    invoke-static {p1, p3}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a(Landroid/content/Context;F)I

    move-result p3

    int-to-float p3, p3

    int-to-float v2, v6

    invoke-static {p1, v2}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a(Landroid/content/Context;F)I

    move-result p1

    int-to-float p1, p1

    invoke-virtual {v5, p3, p1}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setExpressViewAcceptedSize(FF)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 140
    :try_start_2
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_4

    const-string p1, "2"

    .line 141
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->l:Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    .line 155
    :catch_0
    :cond_4
    :try_start_3
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_5

    .line 156
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    .line 191
    :catch_1
    :cond_5
    new-instance p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    invoke-direct {p1, p0, v5, v4}, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;-><init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter;Lcom/bykv/vk/openvk/VfSlot$Builder;Lcom/bykv/vk/openvk/TTVfNative;)V

    invoke-virtual {p0, p1}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->postOnMainThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYSplashAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 8

    const-string v0, "button_type"

    const-string v1, "zoomoutad_sw"

    const-string v2, "key_height"

    const-string v3, "key_width"

    .line 3104
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->getVfManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v4

    .line 3106
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 3107
    invoke-interface {v4, p1}, Lcom/bykv/vk/openvk/TTVfManager;->createVfNative(Landroid/content/Context;)Lcom/bykv/vk/openvk/TTVfNative;

    move-result-object v4

    .line 3108
    new-instance v5, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;

    iget-object v6, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->b:Ljava/lang/String;

    invoke-direct {v5, v6, p2, p3}, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;-><init>(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V

    const/4 v6, 0x0

    .line 3113
    :try_start_0
    invoke-interface {p3, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_0

    .line 3114
    invoke-interface {p3, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :cond_0
    :goto_0
    move v3, v6

    goto :goto_1

    :catchall_0
    move-exception v3

    .line 3117
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    .line 3121
    :goto_1
    :try_start_1
    invoke-interface {p3, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_1

    .line 3122
    invoke-interface {p3, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    move v6, p3

    goto :goto_2

    :catchall_1
    move-exception p3

    .line 3125
    invoke-virtual {p3}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_2
    if-gtz v3, :cond_2

    .line 3129
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p3

    iget v3, p3, Landroid/util/DisplayMetrics;->widthPixels:I

    :cond_2
    if-gtz v6, :cond_3

    .line 3132
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p3

    iget v6, p3, Landroid/util/DisplayMetrics;->heightPixels:I

    .line 3135
    :cond_3
    invoke-virtual {v5, v3, v6}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setImageAcceptedSize(II)Lcom/bykv/vk/openvk/VfSlot$Builder;

    int-to-float p3, v3

    .line 3136
    invoke-static {p1, p3}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a(Landroid/content/Context;F)I

    move-result p3

    int-to-float p3, p3

    int-to-float v2, v6

    invoke-static {p1, v2}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a(Landroid/content/Context;F)I

    move-result p1

    int-to-float p1, p1

    invoke-virtual {v5, p3, p1}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setExpressViewAcceptedSize(FF)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 3140
    :try_start_2
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_4

    const-string p1, "2"

    .line 3141
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->l:Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    .line 3155
    :catch_0
    :cond_4
    :try_start_3
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_5

    .line 3156
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    .line 3191
    :catch_1
    :cond_5
    new-instance p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    invoke-direct {p1, p0, v5, v4}, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;-><init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter;Lcom/bykv/vk/openvk/VfSlot$Builder;Lcom/bykv/vk/openvk/TTVfNative;)V

    invoke-virtual {p0, p1}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->postOnMainThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(Ljava/util/Map;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)Z"
        }
    .end annotation

    const-string v0, "app_id"

    .line 418
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "slot_id"

    .line 419
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->b:Ljava/lang/String;

    .line 421
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "0"

    .line 425
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->c:Ljava/lang/String;

    const-string v0, "personalized_template"

    .line 426
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 427
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->c:Ljava/lang/String;

    :cond_1
    const-string v0, "payload"

    .line 430
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 431
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->h:Ljava/lang/String;

    :cond_2
    const/4 p1, 0x1

    return p1

    :cond_3
    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic b(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)I
    .locals 0

    .line 36
    iget p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mFetchAdTimeout:I

    return p0
.end method

.method static synthetic e(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Z
    .locals 0

    .line 36
    iget-boolean p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->n:Z

    return p0
.end method

.method static synthetic h(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Z
    .locals 1

    const/4 v0, 0x1

    .line 36
    iput-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->n:Z

    return v0
.end method

.method static synthetic i(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic u(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic v(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic w(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic x(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic y(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic z(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 0

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

    .line 404
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->m:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 315
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 325
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 330
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSplashEyeAd()Lcom/tkay/splashad/api/ITYSplashEyeAd;
    .locals 1

    .line 335
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->f:Lcom/tkay/network/toutiao/TTTYSplashEyeAd;

    return-object v0
.end method

.method public isAdReady()Z
    .locals 1

    .line 288
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public isSupportCustomSkipView()Z
    .locals 1

    const/4 v0, 0x1

    return v0
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

    const-string v0, "app_id"

    .line 1418
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "slot_id"

    .line 1419
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->b:Ljava/lang/String;

    .line 1421
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "0"

    .line 1425
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->c:Ljava/lang/String;

    const-string v0, "personalized_template"

    .line 1426
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1427
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->c:Ljava/lang/String;

    :cond_1
    const-string v0, "payload"

    .line 1430
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 1431
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->h:Ljava/lang/String;

    :cond_2
    const/4 v0, 0x1

    goto :goto_1

    :cond_3
    :goto_0
    const/4 v0, 0x0

    :goto_1
    if-nez v0, :cond_4

    const-string p1, ""

    const-string p2, "app_id or slot_id is empty!"

    .line 61
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 82
    :cond_4
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;-><init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/network/toutiao/TTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method public onSplashAdClick(Lcom/bykv/vk/openvk/CSJSplashAd;)V
    .locals 0

    .line 452
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    if-eqz p1, :cond_0

    .line 453
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdClicked()V

    :cond_0
    return-void
.end method

.method public onSplashAdClose(Lcom/bykv/vk/openvk/CSJSplashAd;I)V
    .locals 2

    const/4 v0, 0x1

    const/4 v1, 0x2

    if-eq p2, v0, :cond_2

    const/4 p1, 0x3

    if-eq p2, v1, :cond_1

    if-eq p2, p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x4

    .line 469
    iput p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDismissType:I

    goto :goto_0

    .line 472
    :cond_1
    iput p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDismissType:I

    goto :goto_0

    .line 461
    :cond_2
    iput v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mDismissType:I

    .line 462
    iget-boolean p2, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->l:Z

    if-eqz p2, :cond_3

    if-eqz p1, :cond_3

    .line 464
    invoke-interface {p1}, Lcom/bykv/vk/openvk/CSJSplashAd;->startClickEye()V

    .line 475
    :cond_3
    :goto_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    if-eqz p1, :cond_4

    .line 476
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_4
    return-void
.end method

.method public onSplashAdShow(Lcom/bykv/vk/openvk/CSJSplashAd;)V
    .locals 3

    .line 440
    :try_start_0
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object p1

    invoke-virtual {p0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    invoke-direct {v1, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 445
    :catchall_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    if-eqz p1, :cond_0

    .line 446
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShow()V

    :cond_0
    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
    .locals 2

    .line 293
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    if-eqz p1, :cond_3

    .line 294
    invoke-virtual {p0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->isCustomSkipView()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 295
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/CSJSplashAd;->hideSkipButton()V

    .line 297
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->j:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/CSJSplashAd;->setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V

    .line 2250
    iget-boolean p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->l:Z

    if-eqz p1, :cond_1

    .line 2251
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    new-instance v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter$3;-><init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)V

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/CSJSplashAd;->setSplashClickEyeListener(Lcom/bykv/vk/openvk/CSJSplashAd$SplashClickEyeListener;)V

    .line 299
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    invoke-interface {p1, p0}, Lcom/bykv/vk/openvk/CSJSplashAd;->setSplashAdListener(Lcom/bykv/vk/openvk/CSJSplashAd$SplashAdListener;)V

    .line 300
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/CSJSplashAd;->getSplashView()Landroid/view/View;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 303
    iget-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->l:Z

    const/4 v1, -0x1

    if-eqz v0, :cond_2

    .line 304
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->g:Landroid/view/View;

    .line 305
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p2, p1, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    .line 307
    :cond_2
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p2, p1, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_3
    return-void
.end method

.method public startBiddingRequest(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBiddingListener;)Z
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
            "Lcom/tkay/core/api/TYBiddingListener;",
            ")Z"
        }
    .end annotation

    const/4 p4, 0x1

    .line 409
    iput-boolean p4, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->i:Z

    .line 410
    invoke-virtual {p0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->getMixedFormatAdType()I

    move-result v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 413
    :cond_0
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method

.method public startSplashCustomSkipViewClickEye()V
    .locals 1

    .line 397
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    if-eqz v0, :cond_0

    .line 398
    invoke-interface {v0}, Lcom/bykv/vk/openvk/CSJSplashAd;->startClickEye()V

    :cond_0
    return-void
.end method
