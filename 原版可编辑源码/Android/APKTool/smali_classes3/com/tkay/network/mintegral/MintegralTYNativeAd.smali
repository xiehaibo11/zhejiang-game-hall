.class public Lcom/tkay/network/mintegral/MintegralTYNativeAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# instance fields
.field a:Landroid/content/Context;

.field b:Lcom/mbridge/msdk/out/MBNativeHandler;

.field c:Lcom/mbridge/msdk/out/MBBidNativeHandler;

.field d:Lcom/mbridge/msdk/out/Campaign;

.field e:Ljava/lang/String;

.field f:Lcom/mbridge/msdk/nativex/view/MBMediaView;

.field g:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

.field h:Z

.field private final i:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/out/Campaign;Z)V
    .locals 1

    .line 44
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    .line 33
    const-class v0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->i:Ljava/lang/String;

    .line 45
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->a:Landroid/content/Context;

    if-eqz p5, :cond_0

    .line 47
    invoke-static {p2, p3}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->getNativeProperties(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    goto :goto_0

    :cond_0
    invoke-static {p2, p3}, Lcom/mbridge/msdk/out/MBNativeHandler;->getNativeProperties(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    .line 49
    :goto_0
    iput-object p4, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    if-eqz p5, :cond_1

    .line 52
    new-instance p2, Lcom/mbridge/msdk/out/MBBidNativeHandler;

    iget-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->a:Landroid/content/Context;

    invoke-direct {p2, p1, p3}, Lcom/mbridge/msdk/out/MBBidNativeHandler;-><init>(Ljava/util/Map;Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->c:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    .line 53
    new-instance p1, Lcom/tkay/network/mintegral/MintegralTYNativeAd$1;

    invoke-direct {p1, p0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYNativeAd;)V

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    goto :goto_1

    .line 84
    :cond_1
    new-instance p2, Lcom/mbridge/msdk/out/MBNativeHandler;

    iget-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->a:Landroid/content/Context;

    invoke-direct {p2, p1, p3}, Lcom/mbridge/msdk/out/MBNativeHandler;-><init>(Ljava/util/Map;Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->b:Lcom/mbridge/msdk/out/MBNativeHandler;

    .line 85
    new-instance p1, Lcom/tkay/network/mintegral/MintegralTYNativeAd$2;

    invoke-direct {p1, p0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd$2;-><init>(Lcom/tkay/network/mintegral/MintegralTYNativeAd;)V

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/out/MBNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 116
    :goto_1
    invoke-virtual {p0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->setAdData()V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 0

    .line 295
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->e:Ljava/lang/String;

    return-void
.end method

.method private a(Z)V
    .locals 0

    .line 291
    iput-boolean p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->h:Z

    return-void
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 2

    .line 175
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->b:Lcom/mbridge/msdk/out/MBNativeHandler;

    if-eqz v0, :cond_0

    .line 176
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/out/MBNativeHandler;->unregisterView(Landroid/view/View;Lcom/mbridge/msdk/out/Campaign;)V

    .line 178
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->c:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    if-eqz v0, :cond_1

    .line 179
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->unregisterView(Landroid/view/View;Lcom/mbridge/msdk/out/Campaign;)V

    :cond_1
    return-void
.end method

.method public destroy()V
    .locals 2

    .line 266
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->f:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 267
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->g:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    .line 268
    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->destory()V

    .line 269
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->f:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    .line 271
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->b:Lcom/mbridge/msdk/out/MBNativeHandler;

    if-eqz v0, :cond_1

    .line 272
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 273
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->b:Lcom/mbridge/msdk/out/MBNativeHandler;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBNativeHandler;->clearVideoCache()V

    .line 274
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->b:Lcom/mbridge/msdk/out/MBNativeHandler;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBNativeHandler;->release()V

    .line 275
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->b:Lcom/mbridge/msdk/out/MBNativeHandler;

    .line 278
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->c:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    if-eqz v0, :cond_2

    .line 279
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 280
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->c:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->clearVideoCache()V

    .line 281
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->c:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->bidRelease()V

    .line 282
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->c:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    .line 284
    :cond_2
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->a:Landroid/content/Context;

    .line 285
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    return-void
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 5

    .line 190
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->f:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    if-nez p1, :cond_6

    .line 191
    new-instance p1, Lcom/mbridge/msdk/nativex/view/MBMediaView;

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->a:Landroid/content/Context;

    invoke-direct {p1, v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->f:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    const/4 v0, 0x1

    .line 192
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->setIsAllowFullScreen(Z)V

    .line 193
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->f:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->setNativeAd(Lcom/mbridge/msdk/out/Campaign;)V

    .line 194
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->e:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    .line 195
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->e:Ljava/lang/String;

    const/4 v1, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v2

    const/16 v3, 0x30

    const/4 v4, 0x0

    if-eq v2, v3, :cond_1

    const/16 v3, 0x31

    if-eq v2, v3, :cond_0

    goto :goto_0

    :cond_0
    const-string v2, "1"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move v1, v0

    goto :goto_0

    :cond_1
    const-string v2, "0"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move v1, v4

    :cond_2
    :goto_0
    if-eqz v1, :cond_4

    if-eq v1, v0, :cond_3

    goto :goto_1

    .line 200
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->f:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->setVideoSoundOnOff(Z)V

    goto :goto_1

    .line 197
    :cond_4
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->f:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-virtual {p1, v4}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->setVideoSoundOnOff(Z)V

    .line 204
    :cond_5
    :goto_1
    new-instance p1, Lcom/tkay/network/mintegral/MintegralTYNativeAd$3;

    invoke-direct {p1, p0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd$3;-><init>(Lcom/tkay/network/mintegral/MintegralTYNativeAd;)V

    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->g:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    .line 245
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->f:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->setOnMediaViewListener(Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;)V

    .line 248
    :cond_6
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->f:Lcom/mbridge/msdk/nativex/view/MBMediaView;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 251
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 2

    .line 155
    :try_start_0
    invoke-virtual {p2}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getClickViewList()Ljava/util/List;

    move-result-object p2

    .line 157
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->b:Lcom/mbridge/msdk/out/MBNativeHandler;

    if-eqz v0, :cond_0

    .line 158
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->b:Lcom/mbridge/msdk/out/MBNativeHandler;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0, p1, p2, v1}, Lcom/mbridge/msdk/out/MBNativeHandler;->registerView(Landroid/view/View;Ljava/util/List;Lcom/mbridge/msdk/out/Campaign;)V

    .line 161
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->c:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    if-eqz v0, :cond_1

    .line 162
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->c:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0, p1, p2, v1}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->registerView(Landroid/view/View;Ljava/util/List;Lcom/mbridge/msdk/out/Campaign;)V

    .line 165
    :cond_1
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_2

    const/4 p2, 0x0

    .line 166
    invoke-virtual {p1, p2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception p1

    .line 169
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public setAdData()V
    .locals 5

    .line 120
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/Campaign;->getAppName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->setTitle(Ljava/lang/String;)V

    .line 121
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/Campaign;->getAppDesc()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->setDescriptionText(Ljava/lang/String;)V

    .line 122
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/Campaign;->getIconUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->setIconImageUrl(Ljava/lang/String;)V

    .line 123
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/Campaign;->getAdCall()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->setCallToActionText(Ljava/lang/String;)V

    .line 124
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/Campaign;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->setMainImageUrl(Ljava/lang/String;)V

    .line 125
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/Campaign;->getRating()D

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->setStarRating(Ljava/lang/Double;)V

    .line 126
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/Campaign;->getVideoLength()I

    move-result v0

    int-to-double v0, v0

    invoke-virtual {p0, v0, v1}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->setVideoDuration(D)V

    .line 128
    new-instance v0, Lcom/mbridge/msdk/widget/MBAdChoice;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/widget/MBAdChoice;-><init>(Landroid/content/Context;)V

    .line 129
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/MBAdChoice;->setCampaign(Lcom/mbridge/msdk/out/Campaign;)V

    .line 130
    invoke-virtual {p0, v0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->setAdLogoView(Landroid/view/View;)V

    .line 132
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 134
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_0

    const-string v0, "1"

    .line 135
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->mAdSourceType:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string v0, "2"

    .line 137
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->mAdSourceType:Ljava/lang/String;

    .line 140
    :goto_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/Campaign;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    const-wide/16 v1, 0x0

    .line 144
    :try_start_0
    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v3}, Lcom/mbridge/msdk/out/Campaign;->getSize()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 148
    :catch_0
    new-instance v3, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;

    iget-object v4, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-virtual {v4}, Lcom/mbridge/msdk/out/Campaign;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v0, v4, v1, v2}, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;-><init>(Lcom/mbridge/msdk/out/ApkDisplayInfo;Ljava/lang/String;J)V

    invoke-virtual {p0, v3}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->setAdAppInfo(Lcom/tkay/core/api/TYAdAppInfo;)V

    :cond_1
    return-void
.end method

.method public setVideoMute(Z)V
    .locals 1

    .line 258
    invoke-super {p0, p1}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->setVideoMute(Z)V

    .line 259
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->f:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    if-eqz v0, :cond_0

    xor-int/lit8 p1, p1, 0x1

    .line 260
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->setVideoSoundOnOff(Z)V

    :cond_0
    return-void
.end method
