.class public Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;
.super Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;


# instance fields
.field a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

.field b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

.field c:Ljava/lang/String;

.field d:Ljava/lang/String;

.field e:Ljava/lang/String;

.field f:Ljava/lang/String;

.field g:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private final h:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 33
    invoke-direct {p0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;-><init>()V

    .line 34
    const-class v0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->h:Ljava/lang/String;

    const-string v0, ""

    .line 38
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->c:Ljava/lang/String;

    .line 39
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->d:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;)V
    .locals 12

    .line 105
    new-instance v0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;

    invoke-direct {v0, p0}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;-><init>(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)V

    .line 197
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x2

    const-string v4, "1"

    const-string v5, "0"

    const/16 v6, 0x31

    const/16 v7, 0x30

    const/4 v8, -0x1

    const/4 v9, 0x1

    if-eqz v1, :cond_5

    .line 198
    new-instance v1, Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iget-object v10, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->c:Ljava/lang/String;

    iget-object v11, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-direct {v1, p1, v10, v11}, Lcom/mbridge/msdk/out/MBRewardVideoHandler;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    .line 199
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->setRewardVideoListener(Lcom/mbridge/msdk/video/bt/module/b/g;)V

    .line 200
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->f:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_b

    .line 201
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->f:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    if-eq v0, v7, :cond_1

    if-eq v0, v6, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move v2, v9

    goto :goto_1

    :cond_1
    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_1

    :cond_2
    :goto_0
    move v2, v8

    :goto_1
    if-eqz v2, :cond_4

    if-eq v2, v9, :cond_3

    goto :goto_2

    .line 206
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->playVideoMute(I)V

    :goto_2
    return-void

    .line 203
    :cond_4
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    invoke-virtual {p1, v9}, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->playVideoMute(I)V

    return-void

    .line 211
    :cond_5
    new-instance v1, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iget-object v10, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->c:Ljava/lang/String;

    iget-object v11, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-direct {v1, p1, v10, v11}, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    .line 212
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->setRewardVideoListener(Lcom/mbridge/msdk/video/bt/module/b/g;)V

    .line 213
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->f:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_b

    .line 214
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->f:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    if-eq v0, v7, :cond_7

    if-eq v0, v6, :cond_6

    goto :goto_3

    :cond_6
    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_8

    move v2, v9

    goto :goto_4

    :cond_7
    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_8

    goto :goto_4

    :cond_8
    :goto_3
    move v2, v8

    :goto_4
    if-eqz v2, :cond_a

    if-eq v2, v9, :cond_9

    goto :goto_5

    .line 219
    :cond_9
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->playVideoMute(I)V

    goto :goto_5

    .line 216
    :cond_a
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    invoke-virtual {p1, v9}, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->playVideoMute(I)V

    :cond_b
    :goto_5
    return-void
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;Landroid/content/Context;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 297
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 298
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->setRewardVideoListener(Lcom/mbridge/msdk/video/bt/module/b/g;)V

    .line 299
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    .line 302
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    if-eqz v0, :cond_1

    .line 303
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->setRewardVideoListener(Lcom/mbridge/msdk/video/bt/module/b/g;)V

    .line 304
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    :cond_1
    return-void
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

    .line 336
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->d:Ljava/lang/String;

    .line 337
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v1

    const/4 v5, 0x1

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v6, p4

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;ILcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getMediationInitManager()Lcom/tkay/core/api/TYInitMediation;
    .locals 1

    .line 326
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    return-object v0
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

    .line 321
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->g:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 291
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 311
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->d:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 316
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public initNetworkObjectByPlacementId(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)Z
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
            ">;)Z"
        }
    .end annotation

    if-eqz p2, :cond_1

    const-string p3, "appid"

    .line 229
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_1

    const-string p3, "appkey"

    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_1

    const-string p3, "unitid"

    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 231
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->d:Ljava/lang/String;

    const-string p3, "placement_id"

    .line 232
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 233
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->c:Ljava/lang/String;

    .line 235
    :cond_0
    invoke-direct {p0, p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a(Landroid/content/Context;)V

    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method public isAdReady()Z
    .locals 1

    .line 261
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    if-eqz v0, :cond_0

    .line 262
    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->isReady()Z

    move-result v0

    return v0

    .line 265
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    if-eqz v0, :cond_1

    .line 266
    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->isBidReady()Z

    move-result v0

    return v0

    :cond_1
    const/4 v0, 0x0

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

    const-string p3, "appid"

    .line 53
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    const-string v0, "appkey"

    .line 54
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "unitid"

    .line 55
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->d:Ljava/lang/String;

    .line 57
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_1

    iget-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_0

    goto :goto_0

    :cond_0
    const-string p3, "payload"

    .line 67
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->e:Ljava/lang/String;

    const-string p3, "placement_id"

    .line 76
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->c:Ljava/lang/String;

    const-string p3, "video_muted"

    .line 81
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->f:Ljava/lang/String;

    .line 83
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p3

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;)V

    invoke-virtual {p3, v0, p2, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void

    .line 58
    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p1, :cond_2

    .line 59
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    const-string p2, ""

    const-string p3, "mintegral appid, appkey or unitid is empty!"

    invoke-interface {p1, p2, p3}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 3

    .line 274
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    const-string v0, "{network_placement_id}"

    if-eqz p1, :cond_1

    .line 275
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 276
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    .line 278
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserId:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->show(Ljava/lang/String;Ljava/lang/String;)V

    .line 281
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    if-eqz p1, :cond_3

    .line 282
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 283
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    .line 285
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserId:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->showFromBid(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public startLoad(Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 246
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    if-eqz v0, :cond_0

    .line 247
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 249
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->load()V

    .line 252
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    if-eqz v0, :cond_1

    .line 253
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    const/4 v1, 0x7

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 255
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->loadFromBid(Ljava/lang/String;)V

    :cond_1
    return-void
.end method
