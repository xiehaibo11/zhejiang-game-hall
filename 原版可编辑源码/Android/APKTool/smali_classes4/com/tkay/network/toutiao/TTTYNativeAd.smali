.class public Lcom/tkay/network/toutiao/TTTYNativeAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# instance fields
.field a:Lcom/bykv/vk/openvk/TTNtObject;

.field b:Landroid/content/Context;

.field c:Ljava/lang/String;

.field d:Z

.field e:Lcom/tkay/network/toutiao/TTTYCustomVideo;

.field f:D

.field g:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/bykv/vk/openvk/TTNtObject;ZLandroid/graphics/Bitmap;I)V
    .locals 1

    .line 43
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    const/4 v0, 0x0

    .line 39
    iput-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->d:Z

    .line 44
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->b:Landroid/content/Context;

    .line 45
    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->c:Ljava/lang/String;

    .line 46
    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    .line 48
    invoke-interface {p3}, Lcom/bykv/vk/openvk/TTNtObject;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setNetworkInfoMap(Ljava/util/Map;)V

    .line 50
    invoke-virtual {p0, p4, p5, p6}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setAdData(ZLandroid/graphics/Bitmap;I)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method private a(Landroid/app/Activity;)V
    .locals 1

    .line 276
    new-instance v0, Lcom/tkay/network/toutiao/TTTYNativeAd$4;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/toutiao/TTTYNativeAd$4;-><init>(Lcom/tkay/network/toutiao/TTTYNativeAd;Landroid/app/Activity;)V

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->bindDislikeListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 339
    :cond_0
    instance-of v0, p1, Landroid/view/ViewGroup;

    if-eqz v0, :cond_3

    .line 340
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getAdView()Landroid/view/View;

    move-result-object v0

    if-ne p1, v0, :cond_1

    return-void

    .line 343
    :cond_1
    check-cast p1, Landroid/view/ViewGroup;

    const/4 v0, 0x0

    .line 344
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 345
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    .line 346
    invoke-direct {p0, v1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->a(Landroid/view/View;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    return-void

    :cond_3
    const/4 v0, 0x0

    .line 349
    invoke-virtual {p1, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private a(Ljava/util/List;Landroid/view/View;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/View;",
            ")V"
        }
    .end annotation

    .line 227
    instance-of v0, p2, Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getAdView()Landroid/view/View;

    move-result-object v0

    if-eq p2, v0, :cond_1

    .line 228
    check-cast p2, Landroid/view/ViewGroup;

    const/4 v0, 0x0

    .line 229
    :goto_0
    invoke-virtual {p2}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 230
    invoke-virtual {p2, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    .line 231
    invoke-direct {p0, p1, v1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->a(Ljava/util/List;Landroid/view/View;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void

    .line 234
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getAdView()Landroid/view/View;

    move-result-object v0

    if-eq p2, v0, :cond_2

    .line 235
    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_2
    return-void
.end method

.method static synthetic b(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 0

    .line 332
    invoke-direct {p0, p1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->a(Landroid/view/View;)V

    return-void
.end method

.method public destroy()V
    .locals 2

    const/4 v0, 0x0

    .line 378
    :try_start_0
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    if-eqz v1, :cond_0

    .line 379
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v1, v0}, Lcom/bykv/vk/openvk/TTNtObject;->setActivityForDownloadApp(Landroid/app/Activity;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 384
    :catch_0
    :cond_0
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->b:Landroid/content/Context;

    .line 385
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    return-void
.end method

.method public getAdLogo()Landroid/graphics/Bitmap;
    .locals 1

    .line 321
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    if-eqz v0, :cond_0

    .line 322
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getAdLogo()Landroid/graphics/Bitmap;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    .line 325
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 0

    .line 358
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->g:Landroid/view/View;

    if-nez p1, :cond_0

    .line 359
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtObject;->getAdView()Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->g:Landroid/view/View;

    .line 361
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->g:Landroid/view/View;

    return-object p1
.end method

.method public getNativeCustomVideo()Lcom/tkay/core/api/TYCustomVideo;
    .locals 1

    .line 372
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->e:Lcom/tkay/network/toutiao/TTTYCustomVideo;

    return-object v0
.end method

.method public getVideoProgress()D
    .locals 2

    .line 367
    iget-wide v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->f:D

    return-wide v0
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 3

    .line 243
    invoke-virtual {p2}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getClickViewList()Ljava/util/List;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 244
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_1

    .line 245
    :cond_0
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    .line 246
    invoke-direct {p0, p2, p1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->a(Ljava/util/List;Landroid/view/View;)V

    .line 248
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    move-object v1, p1

    check-cast v1, Landroid/view/ViewGroup;

    new-instance v2, Lcom/tkay/network/toutiao/TTTYNativeAd$3;

    invoke-direct {v2, p0}, Lcom/tkay/network/toutiao/TTTYNativeAd$3;-><init>(Lcom/tkay/network/toutiao/TTTYNativeAd;)V

    invoke-interface {v0, v1, p2, p2, v2}, Lcom/bykv/vk/openvk/TTNtObject;->registerViewForInteraction(Landroid/view/ViewGroup;Ljava/util/List;Ljava/util/List;Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;)V

    .line 265
    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p2

    instance-of p2, p2, Landroid/app/Activity;

    if-eqz p2, :cond_2

    .line 266
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    invoke-interface {p2, v0}, Lcom/bykv/vk/openvk/TTNtObject;->setActivityForDownloadApp(Landroid/app/Activity;)V

    .line 268
    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    check-cast p1, Landroid/app/Activity;

    .line 1276
    new-instance p2, Lcom/tkay/network/toutiao/TTTYNativeAd$4;

    invoke-direct {p2, p0, p1}, Lcom/tkay/network/toutiao/TTTYNativeAd$4;-><init>(Lcom/tkay/network/toutiao/TTTYNativeAd;Landroid/app/Activity;)V

    invoke-virtual {p0, p2}, Lcom/tkay/network/toutiao/TTTYNativeAd;->bindDislikeListener(Landroid/view/View$OnClickListener;)V

    :cond_2
    return-void
.end method

.method public setAdData(ZLandroid/graphics/Bitmap;I)V
    .locals 6

    .line 56
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getTitle()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setTitle(Ljava/lang/String;)V

    .line 57
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getDescription()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setDescriptionText(Ljava/lang/String;)V

    .line 58
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getSource()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setAdFrom(Ljava/lang/String;)V

    .line 59
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getAppScore()I

    move-result v0

    int-to-double v0, v0

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setStarRating(Ljava/lang/Double;)V

    .line 60
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getAppCommentNum()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setAppCommentNum(I)V

    .line 62
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getIcon()Lcom/bykv/vk/openvk/TTImage;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 64
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/TTImage;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setIconImageUrl(Ljava/lang/String;)V

    .line 67
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getImageList()Ljava/util/List;

    move-result-object v0

    .line 68
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    .line 69
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_2

    move v3, v2

    .line 70
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_2

    .line 71
    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bykv/vk/openvk/TTImage;

    if-eqz v4, :cond_1

    .line 73
    invoke-virtual {v4}, Lcom/bykv/vk/openvk/TTImage;->getImageUrl()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    if-nez v3, :cond_1

    .line 75
    invoke-virtual {v4}, Lcom/bykv/vk/openvk/TTImage;->getImageUrl()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v5}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setMainImageUrl(Ljava/lang/String;)V

    .line 76
    invoke-virtual {v4}, Lcom/bykv/vk/openvk/TTImage;->getWidth()I

    move-result v5

    invoke-virtual {p0, v5}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setMainImageWidth(I)V

    .line 77
    invoke-virtual {v4}, Lcom/bykv/vk/openvk/TTImage;->getHeight()I

    move-result v4

    invoke-virtual {p0, v4}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setMainImageHeight(I)V

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 82
    :cond_2
    invoke-virtual {p0, v1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setImageUrlList(Ljava/util/List;)V

    .line 84
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtObject;->getButtonText()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setCallToActionText(Ljava/lang/String;)V

    .line 85
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    instance-of v1, v0, Lcom/bykv/vk/openvk/TTDrawVfObject;

    if-eqz v1, :cond_4

    .line 86
    check-cast v0, Lcom/bykv/vk/openvk/TTDrawVfObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTDrawVfObject;->getCustomVideo()Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 88
    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;->getVideoUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setVideoUrl(Ljava/lang/String;)V

    .line 89
    new-instance v1, Lcom/tkay/network/toutiao/TTTYCustomVideo;

    invoke-direct {v1, v0}, Lcom/tkay/network/toutiao/TTTYCustomVideo;-><init>(Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;)V

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->e:Lcom/tkay/network/toutiao/TTTYCustomVideo;

    .line 91
    :cond_3
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    check-cast v0, Lcom/bykv/vk/openvk/TTDrawVfObject;

    invoke-interface {v0, p1}, Lcom/bykv/vk/openvk/TTDrawVfObject;->setCanInterruptVideoPlay(Z)V

    if-eqz p2, :cond_4

    if-lez p3, :cond_4

    .line 93
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    check-cast p1, Lcom/bykv/vk/openvk/TTDrawVfObject;

    invoke-interface {p1, p2, p3}, Lcom/bykv/vk/openvk/TTDrawVfObject;->setPauseIcon(Landroid/graphics/Bitmap;I)V

    .line 97
    :cond_4
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtObject;->getComplianceInfo()Lcom/bykv/vk/openvk/ComplianceInfo;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 99
    new-instance p2, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;

    iget-object p3, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {p3}, Lcom/bykv/vk/openvk/TTNtObject;->getAppSize()I

    move-result p3

    int-to-long v0, p3

    invoke-direct {p2, p1, v0, v1}, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;-><init>(Lcom/bykv/vk/openvk/ComplianceInfo;J)V

    invoke-virtual {p0, p2}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setAdAppInfo(Lcom/tkay/core/api/TYAdAppInfo;)V

    .line 103
    :cond_5
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtObject;->getInteractionType()I

    move-result p1

    const/4 p2, 0x4

    if-ne p1, p2, :cond_6

    const/4 v2, 0x1

    .line 106
    :cond_6
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtObject;->getInteractionType()I

    move-result p1

    const/4 p3, 0x3

    if-ne p1, p3, :cond_7

    move v2, p3

    .line 109
    :cond_7
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtObject;->getInteractionType()I

    move-result p1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_8

    move v2, v0

    .line 112
    :cond_8
    invoke-virtual {p0, v2}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setNativeInteractionType(I)V

    .line 114
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    instance-of v1, p1, Lcom/bykv/vk/openvk/TTVfObject;

    if-eqz v1, :cond_a

    .line 115
    check-cast p1, Lcom/bykv/vk/openvk/TTVfObject;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTVfObject;->getCustomVideo()Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    move-result-object p1

    if-eqz p1, :cond_9

    .line 117
    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;->getVideoUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setVideoUrl(Ljava/lang/String;)V

    .line 118
    new-instance v1, Lcom/tkay/network/toutiao/TTTYCustomVideo;

    invoke-direct {v1, p1}, Lcom/tkay/network/toutiao/TTTYCustomVideo;-><init>(Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;)V

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->e:Lcom/tkay/network/toutiao/TTTYCustomVideo;

    .line 120
    :cond_9
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    check-cast p1, Lcom/bykv/vk/openvk/TTVfObject;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTVfObject;->getVideoDuration()D

    move-result-wide v1

    invoke-virtual {p0, v1, v2}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setVideoDuration(D)V

    .line 121
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    check-cast p1, Lcom/bykv/vk/openvk/TTVfObject;

    new-instance v1, Lcom/tkay/network/toutiao/TTTYNativeAd$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYNativeAd$1;-><init>(Lcom/tkay/network/toutiao/TTTYNativeAd;)V

    invoke-interface {p1, v1}, Lcom/bykv/vk/openvk/TTVfObject;->setVideoListener(Lcom/bykv/vk/openvk/TTVfObject$VideoVfListener;)V

    .line 160
    :cond_a
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    new-instance v1, Lcom/tkay/network/toutiao/TTTYNativeAd$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYNativeAd$2;-><init>(Lcom/tkay/network/toutiao/TTTYNativeAd;)V

    invoke-interface {p1, v1}, Lcom/bykv/vk/openvk/TTNtObject;->setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V

    .line 210
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtObject;->getImageMode()I

    move-result p1

    if-eq p1, v0, :cond_c

    if-eq p1, p3, :cond_c

    if-eq p1, p2, :cond_c

    const/4 p2, 0x5

    if-eq p1, p2, :cond_b

    const/16 p2, 0xf

    if-eq p1, p2, :cond_b

    const/16 p2, 0x10

    if-eq p1, p2, :cond_c

    goto :goto_1

    :cond_b
    const-string p1, "1"

    .line 213
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mAdSourceType:Ljava/lang/String;

    return-void

    :cond_c
    const-string p1, "2"

    .line 220
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd;->mAdSourceType:Ljava/lang/String;

    :goto_1
    return-void
.end method
