.class public Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;
.super Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;


# instance fields
.field a:J

.field b:I

.field c:Z

.field d:Z

.field e:Ljava/lang/String;

.field f:D

.field g:Lcom/kwad/sdk/api/KsRewardVideoAd;

.field h:Z

.field i:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 40
    invoke-direct {p0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;-><init>()V

    const/4 v0, 0x0

    .line 44
    iput-boolean v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->c:Z

    .line 53
    iput-boolean v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->h:Z

    .line 55
    iput-boolean v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->i:Z

    return-void
.end method

.method static synthetic A(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)V
    .locals 6

    .line 1251
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 1252
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserId:Ljava/lang/String;

    const-string v2, "thirdUserId"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1253
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    const-string v2, "{network_placement_id}"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1254
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v4, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->a:J

    invoke-virtual {v3, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    .line 1256
    :cond_0
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    const-string v2, "extraData"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1258
    new-instance v1, Lcom/kwad/sdk/api/KsScene$Builder;

    iget-wide v2, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->a:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/sdk/api/KsScene$Builder;-><init>(J)V

    const/4 v2, 0x1

    .line 1259
    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/KsScene$Builder;->adNum(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v1

    .line 1260
    iget v3, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->b:I

    const/4 v4, 0x2

    if-ne v3, v4, :cond_1

    move v2, v4

    :cond_1
    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/KsScene$Builder;->screenOrientation(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v1

    .line 1261
    invoke-virtual {v1, v0}, Lcom/kwad/sdk/api/KsScene$Builder;->rewardCallbackExtraData(Ljava/util/Map;)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v0

    .line 1263
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 1264
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsScene$Builder;->setBidResponseV2(Ljava/lang/String;)Lcom/kwad/sdk/api/KsScene$Builder;

    .line 1267
    :cond_2
    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsScene$Builder;->build()Lcom/kwad/sdk/api/KsScene;

    move-result-object v0

    .line 1269
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object v1

    new-instance v2, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;

    invoke-direct {v2, p0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;-><init>(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)V

    invoke-interface {v1, v0, v2}, Lcom/kwad/sdk/api/KsLoadManager;->loadRewardVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;)V

    return-void
.end method

.method static synthetic B(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic C(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic D(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic E(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method private a()V
    .locals 6

    .line 251
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 252
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserId:Ljava/lang/String;

    const-string v2, "thirdUserId"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 253
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    const-string v2, "{network_placement_id}"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 254
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v4, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->a:J

    invoke-virtual {v3, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    .line 256
    :cond_0
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    const-string v2, "extraData"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 258
    new-instance v1, Lcom/kwad/sdk/api/KsScene$Builder;

    iget-wide v2, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->a:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/sdk/api/KsScene$Builder;-><init>(J)V

    const/4 v2, 0x1

    .line 259
    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/KsScene$Builder;->adNum(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v1

    .line 260
    iget v3, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->b:I

    const/4 v4, 0x2

    if-ne v3, v4, :cond_1

    move v2, v4

    :cond_1
    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/KsScene$Builder;->screenOrientation(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v1

    .line 261
    invoke-virtual {v1, v0}, Lcom/kwad/sdk/api/KsScene$Builder;->rewardCallbackExtraData(Ljava/util/Map;)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v0

    .line 263
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 264
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsScene$Builder;->setBidResponseV2(Ljava/lang/String;)Lcom/kwad/sdk/api/KsScene$Builder;

    .line 267
    :cond_2
    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsScene$Builder;->build()Lcom/kwad/sdk/api/KsScene;

    move-result-object v0

    .line 269
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object v1

    new-instance v2, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;

    invoke-direct {v2, p0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;-><init>(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)V

    invoke-interface {v1, v0, v2}, Lcom/kwad/sdk/api/KsLoadManager;->loadRewardVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;)V

    return-void
.end method

.method private a(Ljava/util/Map;Ljava/util/Map;)Z
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
            ">;)Z"
        }
    .end annotation

    const-string v0, "app_id"

    .line 339
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "position_id"

    .line 340
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 342
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 347
    :cond_0
    :try_start_0
    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->a:J
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const-string v0, "orientation"

    .line 351
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 352
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->b:I

    :cond_1
    const/4 v0, 0x1

    .line 355
    iput-boolean v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->d:Z

    const-string v1, "video_muted"

    .line 357
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 358
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "0"

    invoke-static {v2, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->d:Z

    :cond_2
    const-string v1, "KS_RV_SKIP_AFTER_THIRTY_SECOND"

    .line 361
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 364
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;)Z

    move-result p2

    iput-boolean p2, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->c:Z

    :cond_3
    const-string p2, "tkay_gsp"

    .line 367
    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 369
    invoke-static {p1, p2}, Lcom/tkay/core/api/TYInitMediation;->getDoubleFromMap(Ljava/util/Map;Ljava/lang/String;)D

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->f:D

    :cond_4
    const-string p2, "payload"

    .line 372
    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 375
    invoke-static {p1, p2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 376
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object p2

    iget-wide v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->f:D

    invoke-virtual {p2, p1, v1, v2}, Lcom/tkay/network/ks/KSTYInitManager;->getPayloadInfo(Ljava/lang/String;D)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->e:Ljava/lang/String;

    :cond_5
    return v0

    :cond_6
    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic b(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)I
    .locals 1

    const/4 v0, 0x2

    .line 40
    iput v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic j(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic u(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic v(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)I
    .locals 1

    const/4 v0, 0x2

    .line 40
    iput v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic w(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic x(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic y(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic z(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 313
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 314
    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsRewardVideoAd;->setRewardAdInteractionListener(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V

    .line 315
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsRewardVideoAd;->setRewardPlayAgainInteractionListener(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V

    .line 316
    iput-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    :cond_0
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

    .line 390
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getLongFromMap(Ljava/util/Map;Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->a:J

    .line 392
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/ks/KSTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 216
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 2

    .line 323
    :try_start_0
    iget-wide v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->a:J

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 325
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, ""

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 332
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 1

    .line 211
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd;->isAdEnable()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
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
            ">;)V"
        }
    .end annotation

    .line 222
    invoke-direct {p0, p2, p3}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->a(Ljava/util/Map;Ljava/util/Map;)Z

    move-result p3

    if-nez p3, :cond_0

    const-string p1, ""

    const-string p2, "kuaishou app_id or position_id is empty."

    .line 223
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 228
    :cond_0
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object p3

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    new-instance v0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$3;

    invoke-direct {v0, p0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$3;-><init>(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)V

    invoke-virtual {p3, p1, p2, v0}, Lcom/tkay/network/ks/KSTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 4

    .line 59
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_1

    .line 63
    :try_start_0
    new-instance v1, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;-><init>(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)V

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsRewardVideoAd;->setRewardAdInteractionListener(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V

    .line 131
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    new-instance v1, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;-><init>(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)V

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsRewardVideoAd;->setRewardPlayAgainInteractionListener(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V

    .line 195
    new-instance v0, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    invoke-direct {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;-><init>()V

    iget v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->b:I

    const/4 v2, 0x2

    const/4 v3, 0x0

    if-ne v1, v2, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v3

    .line 196
    :goto_0
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->showLandscape(Z)Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    move-result-object v0

    iget-boolean v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->c:Z

    .line 197
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->skipThirtySecond(Z)Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    move-result-object v0

    iget-boolean v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->d:Z

    .line 198
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->videoSoundEnable(Z)Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    move-result-object v0

    .line 199
    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->build()Lcom/kwad/sdk/api/KsVideoPlayConfig;

    move-result-object v0

    .line 200
    iput-boolean v3, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->i:Z

    .line 201
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    invoke-interface {v1, p1, v0}, Lcom/kwad/sdk/api/KsRewardVideoAd;->showRewardVideoAd(Landroid/app/Activity;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 204
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    nop

    :cond_1
    :goto_1
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

    .line 244
    iput-boolean p4, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->h:Z

    .line 245
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
