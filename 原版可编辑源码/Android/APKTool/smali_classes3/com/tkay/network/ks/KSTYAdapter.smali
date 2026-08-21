.class public Lcom/tkay/network/ks/KSTYAdapter;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;


# instance fields
.field a:J

.field b:Ljava/lang/String;

.field c:Z

.field d:Ljava/lang/String;

.field e:Ljava/lang/String;

.field f:Landroid/content/Context;

.field g:Z

.field h:D


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 37
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;-><init>()V

    const-string v0, "0"

    .line 40
    iput-object v0, p0, Lcom/tkay/network/ks/KSTYAdapter;->b:Ljava/lang/String;

    const/4 v1, 0x0

    .line 41
    iput-boolean v1, p0, Lcom/tkay/network/ks/KSTYAdapter;->c:Z

    .line 42
    iput-object v0, p0, Lcom/tkay/network/ks/KSTYAdapter;->d:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/ks/KSTYAdapter;)I
    .locals 0

    .line 37
    iget p0, p0, Lcom/tkay/network/ks/KSTYAdapter;->mRequestNum:I

    return p0
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;I)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;I)V"
        }
    .end annotation

    const-string v0, "key_width"

    .line 81
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 82
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    const-string v1, "key_height"

    .line 86
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 87
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    .line 90
    :cond_1
    new-instance p2, Lcom/kwad/sdk/api/KsScene$Builder;

    iget-wide v3, p0, Lcom/tkay/network/ks/KSTYAdapter;->a:J

    invoke-direct {p2, v3, v4}, Lcom/kwad/sdk/api/KsScene$Builder;-><init>(J)V

    .line 91
    iget-boolean v1, p0, Lcom/tkay/network/ks/KSTYAdapter;->g:Z

    const/4 v3, 0x1

    if-eqz v1, :cond_2

    move p3, v3

    goto :goto_1

    :cond_2
    const/4 v1, 0x5

    invoke-static {p3, v1}, Ljava/lang/Math;->min(II)I

    move-result p3

    :goto_1
    invoke-virtual {p2, p3}, Lcom/kwad/sdk/api/KsScene$Builder;->adNum(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object p2

    if-eqz v0, :cond_3

    .line 95
    :try_start_0
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0

    double-to-int p3, v0

    if-lez p3, :cond_3

    .line 97
    invoke-virtual {p2, p3}, Lcom/kwad/sdk/api/KsScene$Builder;->width(I)Lcom/kwad/sdk/api/KsScene$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p3

    .line 101
    invoke-virtual {p3}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    :goto_2
    if-eqz v2, :cond_4

    .line 106
    :try_start_1
    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0

    double-to-int p3, v0

    if-lez p3, :cond_4

    .line 108
    invoke-virtual {p2, p3}, Lcom/kwad/sdk/api/KsScene$Builder;->height(I)Lcom/kwad/sdk/api/KsScene$Builder;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_3

    :catchall_1
    move-exception p3

    .line 112
    invoke-virtual {p3}, Ljava/lang/Throwable;->printStackTrace()V

    .line 115
    :cond_4
    :goto_3
    iget-object p3, p0, Lcom/tkay/network/ks/KSTYAdapter;->e:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_5

    .line 116
    iget-object p3, p0, Lcom/tkay/network/ks/KSTYAdapter;->e:Ljava/lang/String;

    invoke-virtual {p2, p3}, Lcom/kwad/sdk/api/KsScene$Builder;->setBidResponseV2(Ljava/lang/String;)Lcom/kwad/sdk/api/KsScene$Builder;

    .line 117
    invoke-virtual {p2, v3}, Lcom/kwad/sdk/api/KsScene$Builder;->adNum(I)Lcom/kwad/sdk/api/KsScene$Builder;

    .line 120
    :cond_5
    invoke-virtual {p2}, Lcom/kwad/sdk/api/KsScene$Builder;->build()Lcom/kwad/sdk/api/KsScene;

    move-result-object p2

    .line 122
    iget-object p3, p0, Lcom/tkay/network/ks/KSTYAdapter;->d:Ljava/lang/String;

    const-string v0, "1"

    invoke-static {v0, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_6

    .line 123
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object p3

    new-instance v0, Lcom/tkay/network/ks/KSTYAdapter$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/ks/KSTYAdapter$2;-><init>(Lcom/tkay/network/ks/KSTYAdapter;Landroid/content/Context;)V

    invoke-interface {p3, p2, v0}, Lcom/kwad/sdk/api/KsLoadManager;->loadDrawAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V

    return-void

    .line 167
    :cond_6
    iget-object p3, p0, Lcom/tkay/network/ks/KSTYAdapter;->b:Ljava/lang/String;

    invoke-static {v0, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_7

    .line 168
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object p3

    new-instance v0, Lcom/tkay/network/ks/KSTYAdapter$3;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/ks/KSTYAdapter$3;-><init>(Lcom/tkay/network/ks/KSTYAdapter;Landroid/content/Context;)V

    invoke-interface {p3, p2, v0}, Lcom/kwad/sdk/api/KsLoadManager;->loadConfigFeedAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V

    return-void

    .line 210
    :cond_7
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object p3

    new-instance v0, Lcom/tkay/network/ks/KSTYAdapter$4;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/ks/KSTYAdapter$4;-><init>(Lcom/tkay/network/ks/KSTYAdapter;Landroid/content/Context;)V

    invoke-interface {p3, p2, v0}, Lcom/kwad/sdk/api/KsLoadManager;->loadNativeAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/ks/KSTYAdapter;Landroid/content/Context;Ljava/util/Map;I)V
    .locals 5

    const-string v0, "key_width"

    .line 1081
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 1082
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    const-string v1, "key_height"

    .line 1086
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 1087
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    .line 1090
    :cond_1
    new-instance p2, Lcom/kwad/sdk/api/KsScene$Builder;

    iget-wide v3, p0, Lcom/tkay/network/ks/KSTYAdapter;->a:J

    invoke-direct {p2, v3, v4}, Lcom/kwad/sdk/api/KsScene$Builder;-><init>(J)V

    .line 1091
    iget-boolean v1, p0, Lcom/tkay/network/ks/KSTYAdapter;->g:Z

    const/4 v3, 0x1

    if-eqz v1, :cond_2

    move p3, v3

    goto :goto_1

    :cond_2
    const/4 v1, 0x5

    invoke-static {p3, v1}, Ljava/lang/Math;->min(II)I

    move-result p3

    :goto_1
    invoke-virtual {p2, p3}, Lcom/kwad/sdk/api/KsScene$Builder;->adNum(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object p2

    if-eqz v0, :cond_3

    .line 1095
    :try_start_0
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0

    double-to-int p3, v0

    if-lez p3, :cond_3

    .line 1097
    invoke-virtual {p2, p3}, Lcom/kwad/sdk/api/KsScene$Builder;->width(I)Lcom/kwad/sdk/api/KsScene$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p3

    .line 1101
    invoke-virtual {p3}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    :goto_2
    if-eqz v2, :cond_4

    .line 1106
    :try_start_1
    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0

    double-to-int p3, v0

    if-lez p3, :cond_4

    .line 1108
    invoke-virtual {p2, p3}, Lcom/kwad/sdk/api/KsScene$Builder;->height(I)Lcom/kwad/sdk/api/KsScene$Builder;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_3

    :catchall_1
    move-exception p3

    .line 1112
    invoke-virtual {p3}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1115
    :cond_4
    :goto_3
    iget-object p3, p0, Lcom/tkay/network/ks/KSTYAdapter;->e:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_5

    .line 1116
    iget-object p3, p0, Lcom/tkay/network/ks/KSTYAdapter;->e:Ljava/lang/String;

    invoke-virtual {p2, p3}, Lcom/kwad/sdk/api/KsScene$Builder;->setBidResponseV2(Ljava/lang/String;)Lcom/kwad/sdk/api/KsScene$Builder;

    .line 1117
    invoke-virtual {p2, v3}, Lcom/kwad/sdk/api/KsScene$Builder;->adNum(I)Lcom/kwad/sdk/api/KsScene$Builder;

    .line 1120
    :cond_5
    invoke-virtual {p2}, Lcom/kwad/sdk/api/KsScene$Builder;->build()Lcom/kwad/sdk/api/KsScene;

    move-result-object p2

    .line 1122
    iget-object p3, p0, Lcom/tkay/network/ks/KSTYAdapter;->d:Ljava/lang/String;

    const-string v0, "1"

    invoke-static {v0, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_6

    .line 1123
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object p3

    new-instance v0, Lcom/tkay/network/ks/KSTYAdapter$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/ks/KSTYAdapter$2;-><init>(Lcom/tkay/network/ks/KSTYAdapter;Landroid/content/Context;)V

    invoke-interface {p3, p2, v0}, Lcom/kwad/sdk/api/KsLoadManager;->loadDrawAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V

    return-void

    .line 1167
    :cond_6
    iget-object p3, p0, Lcom/tkay/network/ks/KSTYAdapter;->b:Ljava/lang/String;

    invoke-static {v0, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_7

    .line 1168
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object p3

    new-instance v0, Lcom/tkay/network/ks/KSTYAdapter$3;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/ks/KSTYAdapter$3;-><init>(Lcom/tkay/network/ks/KSTYAdapter;Landroid/content/Context;)V

    invoke-interface {p3, p2, v0}, Lcom/kwad/sdk/api/KsLoadManager;->loadConfigFeedAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V

    return-void

    .line 1210
    :cond_7
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object p3

    new-instance v0, Lcom/tkay/network/ks/KSTYAdapter$4;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/ks/KSTYAdapter$4;-><init>(Lcom/tkay/network/ks/KSTYAdapter;Landroid/content/Context;)V

    invoke-interface {p3, p2, v0}, Lcom/kwad/sdk/api/KsLoadManager;->loadNativeAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V

    return-void
.end method

.method private a(Ljava/util/Map;)Z
    .locals 3
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

    .line 283
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "position_id"

    .line 284
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 286
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 290
    :cond_0
    :try_start_0
    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYAdapter;->a:J
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const-string v0, "0"

    const-string v1, "layout_type"

    .line 294
    invoke-static {p1, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/ks/KSTYAdapter;->b:Ljava/lang/String;

    const-string v1, "video_sound"

    .line 296
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 297
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "1"

    invoke-static {v2, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/tkay/network/ks/KSTYAdapter;->c:Z

    :cond_1
    const-string v1, "unit_type"

    .line 300
    invoke-static {p1, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/ks/KSTYAdapter;->d:Ljava/lang/String;

    const-string v0, "tkay_gsp"

    .line 302
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getDoubleFromMap(Ljava/util/Map;Ljava/lang/String;)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYAdapter;->h:D

    const-string v0, "payload"

    .line 304
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 305
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 306
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    iget-wide v1, p0, Lcom/tkay/network/ks/KSTYAdapter;->h:D

    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/network/ks/KSTYInitManager;->getPayloadInfo(Ljava/lang/String;D)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSTYAdapter;->e:Ljava/lang/String;

    :cond_2
    const/4 p1, 0x1

    return p1

    :cond_3
    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic b(Lcom/tkay/network/ks/KSTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/ks/KSTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/ks/KSTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/ks/KSTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/ks/KSTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/ks/KSTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 0

    return-void
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
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
            ">;",
            "Lcom/tkay/core/api/TYBidRequestInfoListener;",
            ")V"
        }
    .end annotation

    const-string v0, "position_id"

    .line 314
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getLongFromMap(Ljava/util/Map;Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYAdapter;->a:J

    .line 316
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/ks/KSTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 53
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 2

    .line 262
    :try_start_0
    iget-wide v0, p0, Lcom/tkay/network/ks/KSTYAdapter;->a:J

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 264
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, ""

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 271
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
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

    .line 59
    invoke-direct {p0, p2}, Lcom/tkay/network/ks/KSTYAdapter;->a(Ljava/util/Map;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p1, ""

    const-string p2, "kuaishou app_id or position_id is empty."

    .line 60
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/ks/KSTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 64
    :cond_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/ks/KSTYAdapter;->f:Landroid/content/Context;

    .line 66
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/ks/KSTYAdapter$1;

    invoke-direct {v1, p0, p3}, Lcom/tkay/network/ks/KSTYAdapter$1;-><init>(Lcom/tkay/network/ks/KSTYAdapter;Ljava/util/Map;)V

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/network/ks/KSTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

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

    .line 277
    iput-boolean p4, p0, Lcom/tkay/network/ks/KSTYAdapter;->g:Z

    .line 278
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/ks/KSTYAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
