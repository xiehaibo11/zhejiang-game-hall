.class public Lcom/tkay/network/gdt/GDTTYNativeAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# static fields
.field private static final l:Ljava/lang/String;


# instance fields
.field a:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field b:Landroid/content/Context;

.field c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

.field d:I

.field e:I

.field f:I

.field g:I

.field h:Landroid/view/View;

.field i:Lcom/qq/e/ads/nativ/MediaView;

.field j:Z

.field k:Lcom/qq/e/ads/nativ/widget/NativeAdContainer;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 41
    const-class v0, Lcom/tkay/network/gdt/GDTTYNativeAd;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/gdt/GDTTYNativeAd;->l:Ljava/lang/String;

    return-void
.end method

.method protected constructor <init>(Landroid/content/Context;Lcom/qq/e/ads/nativ/NativeUnifiedADData;III)V
    .locals 2

    .line 54
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    const/4 v0, 0x0

    .line 51
    iput v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->g:I

    .line 188
    iput-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->j:Z

    .line 56
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->b:Landroid/content/Context;

    .line 57
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->a:Ljava/lang/ref/WeakReference;

    .line 59
    iput p3, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->d:I

    .line 60
    iput p4, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->e:I

    .line 61
    iput p5, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->f:I

    .line 63
    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    .line 1118
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getTitle()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setTitle(Ljava/lang/String;)V

    .line 1119
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getDesc()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setDescriptionText(Ljava/lang/String;)V

    .line 1121
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getIconUrl()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setIconImageUrl(Ljava/lang/String;)V

    .line 1122
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getAppScore()I

    move-result p1

    int-to-double p3, p1

    invoke-static {p3, p4}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setStarRating(Ljava/lang/Double;)V

    .line 1123
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getAppPrice()D

    move-result-wide p3

    invoke-virtual {p0, p3, p4}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setAppPrice(D)V

    .line 1125
    invoke-virtual {p0, p2}, Lcom/tkay/network/gdt/GDTTYNativeAd;->getCallToAction(Lcom/qq/e/ads/nativ/NativeUnifiedADData;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setCallToActionText(Ljava/lang/String;)V

    .line 1127
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getImgUrl()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setMainImageUrl(Ljava/lang/String;)V

    .line 1128
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getPictureWidth()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setMainImageWidth(I)V

    .line 1129
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getPictureHeight()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setMainImageHeight(I)V

    .line 1131
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getImgList()Ljava/util/List;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setImageUrlList(Ljava/util/List;)V

    .line 1133
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getVideoDuration()I

    move-result p1

    int-to-double p3, p1

    const-wide v0, 0x408f400000000000L    # 1000.0

    div-double/2addr p3, v0

    invoke-virtual {p0, p3, p4}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setVideoDuration(D)V

    .line 1135
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->isAppAd()Z

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setNativeInteractionType(I)V

    .line 1137
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getAppMiitInfo()Lcom/qq/e/ads/nativ/NativeUnifiedADAppMiitInfo;

    move-result-object p1

    .line 1138
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->isAppAd()Z

    move-result p3

    if-eqz p3, :cond_0

    if-eqz p1, :cond_0

    .line 1141
    :try_start_0
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getDownloadCount()J

    move-result-wide p3

    invoke-static {p3, p4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p3, ""

    .line 1145
    :goto_0
    new-instance p4, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;

    invoke-direct {p4, p1, p3}, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;-><init>(Lcom/qq/e/ads/nativ/NativeUnifiedADAppMiitInfo;Ljava/lang/String;)V

    invoke-virtual {p0, p4}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setAdAppInfo(Lcom/tkay/core/api/TYAdAppInfo;)V

    .line 1148
    :cond_0
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getAdPatternType()I

    move-result p1

    const/4 p3, 0x2

    if-ne p1, p3, :cond_1

    const-string p1, "1"

    .line 1149
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->mAdSourceType:Ljava/lang/String;

    goto :goto_1

    :cond_1
    const-string p1, "2"

    .line 1151
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->mAdSourceType:Ljava/lang/String;

    .line 1154
    :goto_1
    new-instance p1, Lcom/tkay/network/gdt/GDTTYNativeAd$2;

    invoke-direct {p1, p0, p2}, Lcom/tkay/network/gdt/GDTTYNativeAd$2;-><init>(Lcom/tkay/network/gdt/GDTTYNativeAd;Lcom/qq/e/ads/nativ/NativeUnifiedADData;)V

    invoke-interface {p2, p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->setNativeAdEventListener(Lcom/qq/e/ads/nativ/NativeADEventListener;)V

    .line 1181
    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getExtraInfo()Ljava/util/Map;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setNetworkInfoMap(Ljava/util/Map;)V

    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 342
    :cond_0
    instance-of v0, p1, Landroid/view/ViewGroup;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->i:Lcom/qq/e/ads/nativ/MediaView;

    if-eq p1, v0, :cond_2

    .line 343
    check-cast p1, Landroid/view/ViewGroup;

    .line 344
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v0

    if-ge v1, v0, :cond_1

    .line 345
    invoke-virtual {p1, v1}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    .line 346
    invoke-direct {p0, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->a(Landroid/view/View;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void

    :cond_2
    const/4 v0, 0x0

    .line 349
    invoke-virtual {p1, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 350
    invoke-virtual {p1, v1}, Landroid/view/View;->setClickable(Z)V

    return-void
.end method

.method private a(Landroid/view/View;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    .line 322
    instance-of v0, p1, Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->i:Lcom/qq/e/ads/nativ/MediaView;

    if-eq p1, v0, :cond_1

    .line 323
    check-cast p1, Landroid/view/ViewGroup;

    const/4 v0, 0x0

    .line 324
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 325
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    .line 326
    invoke-direct {p0, v1, p2}, Lcom/tkay/network/gdt/GDTTYNativeAd;->a(Landroid/view/View;Ljava/util/List;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void

    .line 329
    :cond_1
    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private a(Lcom/qq/e/ads/nativ/NativeUnifiedADData;)V
    .locals 4

    .line 118
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getTitle()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setTitle(Ljava/lang/String;)V

    .line 119
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getDesc()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setDescriptionText(Ljava/lang/String;)V

    .line 121
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getIconUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setIconImageUrl(Ljava/lang/String;)V

    .line 122
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getAppScore()I

    move-result v0

    int-to-double v0, v0

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setStarRating(Ljava/lang/Double;)V

    .line 123
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getAppPrice()D

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setAppPrice(D)V

    .line 125
    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->getCallToAction(Lcom/qq/e/ads/nativ/NativeUnifiedADData;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setCallToActionText(Ljava/lang/String;)V

    .line 127
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getImgUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setMainImageUrl(Ljava/lang/String;)V

    .line 128
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getPictureWidth()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setMainImageWidth(I)V

    .line 129
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getPictureHeight()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setMainImageHeight(I)V

    .line 131
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getImgList()Ljava/util/List;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setImageUrlList(Ljava/util/List;)V

    .line 133
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getVideoDuration()I

    move-result v0

    int-to-double v0, v0

    const-wide v2, 0x408f400000000000L    # 1000.0

    div-double/2addr v0, v2

    invoke-virtual {p0, v0, v1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setVideoDuration(D)V

    .line 135
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->isAppAd()Z

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setNativeInteractionType(I)V

    .line 137
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getAppMiitInfo()Lcom/qq/e/ads/nativ/NativeUnifiedADAppMiitInfo;

    move-result-object v0

    .line 138
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->isAppAd()Z

    move-result v1

    if-eqz v1, :cond_0

    if-eqz v0, :cond_0

    .line 141
    :try_start_0
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getDownloadCount()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string v1, ""

    .line 145
    :goto_0
    new-instance v2, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;

    invoke-direct {v2, v0, v1}, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;-><init>(Lcom/qq/e/ads/nativ/NativeUnifiedADAppMiitInfo;Ljava/lang/String;)V

    invoke-virtual {p0, v2}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setAdAppInfo(Lcom/tkay/core/api/TYAdAppInfo;)V

    .line 148
    :cond_0
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getAdPatternType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    const-string v0, "1"

    .line 149
    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->mAdSourceType:Ljava/lang/String;

    goto :goto_1

    :cond_1
    const-string v0, "2"

    .line 151
    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->mAdSourceType:Ljava/lang/String;

    .line 154
    :goto_1
    new-instance v0, Lcom/tkay/network/gdt/GDTTYNativeAd$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd$2;-><init>(Lcom/tkay/network/gdt/GDTTYNativeAd;Lcom/qq/e/ads/nativ/NativeUnifiedADData;)V

    invoke-interface {p1, v0}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->setNativeAdEventListener(Lcom/qq/e/ads/nativ/NativeADEventListener;)V

    .line 181
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getExtraInfo()Ljava/util/Map;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->setNetworkInfoMap(Ljava/util/Map;)V

    return-void
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 0

    .line 335
    invoke-direct {p0, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->a(Landroid/view/View;)V

    return-void
.end method

.method public destroy()V
    .locals 2

    .line 394
    invoke-super {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->destroy()V

    .line 396
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 397
    invoke-interface {v0, v1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->setNativeAdEventListener(Lcom/qq/e/ads/nativ/NativeADEventListener;)V

    .line 398
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-interface {v0}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->destroy()V

    .line 399
    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    .line 401
    :cond_0
    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->i:Lcom/qq/e/ads/nativ/MediaView;

    .line 403
    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->b:Landroid/content/Context;

    .line 404
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->a:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    .line 405
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->clear()V

    .line 406
    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->a:Ljava/lang/ref/WeakReference;

    .line 409
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->k:Lcom/qq/e/ads/nativ/widget/NativeAdContainer;

    if-eqz v0, :cond_2

    .line 410
    invoke-virtual {v0}, Lcom/qq/e/ads/nativ/widget/NativeAdContainer;->removeAllViews()V

    .line 411
    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->k:Lcom/qq/e/ads/nativ/widget/NativeAdContainer;

    :cond_2
    return-void
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 2

    .line 193
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    if-eqz v0, :cond_3

    .line 194
    invoke-interface {v0}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getAdPatternType()I

    move-result v0

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    .line 195
    invoke-super {p0, p1}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->getAdMediaView([Ljava/lang/Object;)Landroid/view/View;

    move-result-object p1

    return-object p1

    .line 197
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->i:Lcom/qq/e/ads/nativ/MediaView;

    if-nez p1, :cond_2

    .line 198
    new-instance p1, Lcom/qq/e/ads/nativ/MediaView;

    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->b:Landroid/content/Context;

    invoke-direct {p1, v0}, Lcom/qq/e/ads/nativ/MediaView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->i:Lcom/qq/e/ads/nativ/MediaView;

    const/high16 v0, -0x1000000

    .line 199
    invoke-virtual {p1, v0}, Lcom/qq/e/ads/nativ/MediaView;->setBackgroundColor(I)V

    .line 200
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->i:Lcom/qq/e/ads/nativ/MediaView;

    invoke-virtual {p1}, Lcom/qq/e/ads/nativ/MediaView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    if-nez p1, :cond_1

    .line 202
    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    const/4 v0, -0x1

    const/4 v1, -0x2

    invoke-direct {p1, v0, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 204
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->i:Lcom/qq/e/ads/nativ/MediaView;

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/nativ/MediaView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 208
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->i:Lcom/qq/e/ads/nativ/MediaView;

    return-object p1

    .line 211
    :cond_3
    invoke-super {p0, p1}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->getAdMediaView([Ljava/lang/Object;)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method

.method public getCallToAction(Lcom/qq/e/ads/nativ/NativeUnifiedADData;)Ljava/lang/String;
    .locals 2

    .line 86
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getCTAText()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 87
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getCTAText()Ljava/lang/String;

    move-result-object p1

    return-object p1

    .line 92
    :cond_0
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->isAppAd()Z

    move-result v0

    .line 93
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getAppStatus()I

    move-result p1

    const-string v1, "\u6d4f\u89c8"

    if-nez v0, :cond_1

    return-object v1

    :cond_1
    if-eqz p1, :cond_5

    const/4 v0, 0x1

    if-eq p1, v0, :cond_4

    const/4 v0, 0x2

    if-eq p1, v0, :cond_3

    const/4 v0, 0x4

    if-eq p1, v0, :cond_5

    const/16 v0, 0x8

    if-eq p1, v0, :cond_2

    const/16 v0, 0x10

    if-eq p1, v0, :cond_5

    return-object v1

    :cond_2
    const-string p1, "\u5b89\u88c5"

    return-object p1

    :cond_3
    const-string p1, "\u66f4\u65b0"

    return-object p1

    :cond_4
    const-string p1, "\u542f\u52a8"

    return-object p1

    :cond_5
    const-string p1, "\u4e0b\u8f7d"

    return-object p1
.end method

.method public getCustomAdContainer()Landroid/view/ViewGroup;
    .locals 2

    .line 315
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    if-eqz v0, :cond_0

    .line 316
    new-instance v0, Lcom/qq/e/ads/nativ/widget/NativeAdContainer;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/qq/e/ads/nativ/widget/NativeAdContainer;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->k:Lcom/qq/e/ads/nativ/widget/NativeAdContainer;

    .line 318
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->k:Lcom/qq/e/ads/nativ/widget/NativeAdContainer;

    return-object v0
.end method

.method public getVideoProgress()D
    .locals 4

    .line 385
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    if-eqz v0, :cond_0

    .line 386
    invoke-interface {v0}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getVideoCurrentPosition()I

    move-result v0

    int-to-double v0, v0

    const-wide v2, 0x408f400000000000L    # 1000.0

    div-double/2addr v0, v2

    return-wide v0

    .line 389
    :cond_0
    invoke-super {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->getVideoProgress()D

    move-result-wide v0

    return-wide v0
.end method

.method public isNativeExpress()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public onResume()V
    .locals 1

    .line 356
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    if-eqz v0, :cond_0

    .line 357
    invoke-interface {v0}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->resume()V

    :cond_0
    return-void
.end method

.method public pauseVideo()V
    .locals 1

    .line 370
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    if-eqz v0, :cond_0

    .line 371
    invoke-interface {v0}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->pauseVideo()V

    :cond_0
    return-void
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 7

    .line 221
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->k:Lcom/qq/e/ads/nativ/widget/NativeAdContainer;

    if-eqz v0, :cond_8

    .line 223
    invoke-virtual {p2}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getClickViewList()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 225
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    .line 226
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 227
    invoke-direct {p0, p1, v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->a(Landroid/view/View;Ljava/util/List;)V

    :cond_1
    move-object v5, v0

    .line 230
    invoke-virtual {p2}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getChoiceViewLayoutParams()Landroid/widget/FrameLayout$LayoutParams;

    move-result-object v4

    .line 232
    new-instance v6, Ljava/util/ArrayList;

    invoke-direct {v6}, Ljava/util/ArrayList;-><init>()V

    .line 233
    instance-of v0, p2, Lcom/tkay/nativead/api/TYNativePrepareExInfo;

    if-eqz v0, :cond_2

    .line 234
    check-cast p2, Lcom/tkay/nativead/api/TYNativePrepareExInfo;

    invoke-virtual {p2}, Lcom/tkay/nativead/api/TYNativePrepareExInfo;->getCreativeClickViewList()Ljava/util/List;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 236
    invoke-interface {v6, p2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 240
    :cond_2
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->k:Lcom/qq/e/ads/nativ/widget/NativeAdContainer;

    invoke-interface/range {v1 .. v6}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->bindAdToView(Landroid/content/Context;Lcom/qq/e/ads/nativ/widget/NativeAdContainer;Landroid/widget/FrameLayout$LayoutParams;Ljava/util/List;Ljava/util/List;)V

    .line 242
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->i:Lcom/qq/e/ads/nativ/MediaView;

    if-nez p1, :cond_3

    return-void

    .line 245
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->i:Lcom/qq/e/ads/nativ/MediaView;

    new-instance v0, Lcom/qq/e/ads/cfg/VideoOption$Builder;

    invoke-direct {v0}, Lcom/qq/e/ads/cfg/VideoOption$Builder;-><init>()V

    iget v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->d:I

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v1, v3, :cond_4

    move v1, v3

    goto :goto_0

    :cond_4
    move v1, v2

    .line 246
    :goto_0
    invoke-virtual {v0, v1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    iget v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->d:I

    if-ne v1, v3, :cond_5

    move v1, v3

    goto :goto_1

    :cond_5
    move v1, v2

    .line 247
    :goto_1
    invoke-virtual {v0, v1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setDetailPageMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    iget v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->e:I

    .line 248
    invoke-virtual {v0, v1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayPolicy(I)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    .line 249
    invoke-virtual {v0}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->build()Lcom/qq/e/ads/cfg/VideoOption;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/gdt/GDTTYNativeAd$3;

    invoke-direct {v1, p0}, Lcom/tkay/network/gdt/GDTTYNativeAd$3;-><init>(Lcom/tkay/network/gdt/GDTTYNativeAd;)V

    .line 245
    invoke-interface {p1, p2, v0, v1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->bindMediaView(Lcom/qq/e/ads/nativ/MediaView;Lcom/qq/e/ads/cfg/VideoOption;Lcom/qq/e/ads/nativ/NativeADMediaListener;)V

    .line 300
    iget p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->g:I

    if-lez p1, :cond_7

    .line 301
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    iget p2, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->g:I

    if-ne p2, v3, :cond_6

    move v2, v3

    :cond_6
    invoke-interface {p1, v2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->setVideoMute(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_7
    return-void

    :catchall_0
    move-exception p1

    .line 304
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_8
    return-void
.end method

.method public registerDownloadConfirmListener()V
    .locals 2

    .line 70
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    new-instance v1, Lcom/tkay/network/gdt/GDTTYNativeAd$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/gdt/GDTTYNativeAd$1;-><init>(Lcom/tkay/network/gdt/GDTTYNativeAd;)V

    invoke-interface {v0, v1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->setDownloadConfirmListener(Lcom/qq/e/comm/compliance/DownloadConfirmListener;)V

    return-void
.end method

.method public resumeVideo()V
    .locals 1

    .line 363
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    if-eqz v0, :cond_0

    .line 364
    invoke-interface {v0}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->resumeVideo()V

    :cond_0
    return-void
.end method

.method public setVideoMute(Z)V
    .locals 1

    if-eqz p1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    .line 377
    :goto_0
    iput v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->g:I

    .line 378
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    if-eqz v0, :cond_1

    .line 379
    invoke-interface {v0, p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->setVideoMute(Z)V

    :cond_1
    return-void
.end method
