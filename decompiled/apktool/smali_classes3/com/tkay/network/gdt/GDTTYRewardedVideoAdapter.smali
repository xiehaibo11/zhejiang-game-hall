.class public Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;
.super Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;


# static fields
.field private static final f:Ljava/lang/String;


# instance fields
.field a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

.field b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

.field c:Ljava/lang/String;

.field d:Ljava/lang/String;

.field e:Ljava/lang/String;

.field private g:I

.field private h:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private i:Z

.field private j:I

.field private k:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 43
    const-class v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->f:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 41
    invoke-direct {p0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;-><init>()V

    const/4 v0, 0x0

    .line 48
    iput v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->g:I

    const/4 v1, 0x1

    .line 56
    iput v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->j:I

    .line 58
    iput-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->k:Z

    return-void
.end method

.method static synthetic A(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic B(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic C(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic D(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic E(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic F(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic G(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic H(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic I(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic J(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic K(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic L(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic M(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Ljava/util/Map;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->h:Ljava/util/Map;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;Ljava/util/Map;)Ljava/util/Map;
    .locals 0

    .line 41
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->h:Ljava/util/Map;

    return-object p1
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;)V
    .locals 10
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

    const-string v0, "{network_placement_id}"

    .line 95
    iget v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->j:I

    const/4 v2, 0x0

    const/4 v3, 0x1

    const/4 v4, 0x2

    if-ne v1, v4, :cond_9

    .line 1242
    instance-of v0, p1, Landroid/app/Activity;

    if-nez v0, :cond_0

    const-string p1, ""

    const-string p2, "GDT UnifiedInterstitial\'s context must be activity."

    .line 1243
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 1247
    :cond_0
    new-instance v7, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    invoke-direct {v7, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V

    .line 1369
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->k:Z

    if-eqz v0, :cond_1

    goto :goto_0

    .line 1373
    :cond_1
    new-instance v0, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    move-object v5, p1

    check-cast v5, Landroid/app/Activity;

    iget-object v6, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    const/4 v8, 0x0

    iget-object v9, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    move-object v4, v0

    invoke-direct/range {v4 .. v9}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;Ljava/util/Map;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    goto :goto_1

    .line 1370
    :cond_2
    :goto_0
    new-instance v0, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    check-cast p1, Landroid/app/Activity;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v7}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    .line 1371
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    .line 1376
    :goto_1
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    const-string v0, "video_muted"

    .line 1440
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 1441
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    goto :goto_2

    :cond_3
    move v0, v2

    :goto_2
    const-string v1, "video_autoplay"

    .line 1443
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 1444
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    goto :goto_3

    :cond_4
    move v1, v3

    :goto_3
    const-string v4, "video_duration"

    .line 1446
    invoke-interface {p2, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    const/4 v6, -0x1

    if-eqz v5, :cond_5

    .line 1447
    invoke-interface {p2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    goto :goto_4

    :cond_5
    move p2, v6

    :goto_4
    if-eqz p1, :cond_8

    .line 1451
    new-instance v4, Lcom/qq/e/ads/cfg/VideoOption$Builder;

    invoke-direct {v4}, Lcom/qq/e/ads/cfg/VideoOption$Builder;-><init>()V

    if-ne v0, v3, :cond_6

    move v5, v3

    goto :goto_5

    :cond_6
    move v5, v2

    .line 1452
    :goto_5
    invoke-virtual {v4, v5}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v4

    if-ne v0, v3, :cond_7

    move v2, v3

    .line 1453
    :cond_7
    invoke-virtual {v4, v2}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setDetailPageMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    .line 1454
    invoke-virtual {v0, v1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayPolicy(I)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    .line 1455
    invoke-virtual {v0}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->build()Lcom/qq/e/ads/cfg/VideoOption;

    move-result-object v0

    .line 1456
    invoke-virtual {p1, v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setVideoOption(Lcom/qq/e/ads/cfg/VideoOption;)V

    if-eq p2, v6, :cond_8

    .line 1458
    invoke-virtual {p1, p2}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMaxVideoDuration(I)V

    .line 1378
    :cond_8
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    new-instance p2, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;

    invoke-direct {p2, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMediaListener(Lcom/qq/e/ads/interstitial2/UnifiedInterstitialMediaListener;)V

    .line 1429
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->loadFullScreenAD()V

    return-void

    .line 2103
    :cond_9
    new-instance v4, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;

    invoke-direct {v4, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V

    .line 2219
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_c

    iget-boolean v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->k:Z

    if-eqz v1, :cond_a

    goto :goto_7

    .line 2223
    :cond_a
    new-instance p2, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    iget v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->g:I

    if-eq v1, v3, :cond_b

    move v6, v3

    goto :goto_6

    :cond_b
    move v6, v2

    :goto_6
    iget-object v7, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    move-object v1, p2

    move-object v2, p1

    move-object v3, v5

    move v5, v6

    move-object v6, v7

    invoke-direct/range {v1 .. v6}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/rewardvideo/RewardVideoADListener;ZLjava/lang/String;)V

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    goto :goto_8

    .line 2220
    :cond_c
    :goto_7
    new-instance v1, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->g:I

    if-eq v6, v3, :cond_d

    move v2, v3

    :cond_d
    invoke-direct {v1, p1, v5, v4, v2}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/rewardvideo/RewardVideoADListener;Z)V

    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    .line 2221
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    .line 2227
    :goto_8
    :try_start_0
    new-instance p1, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;

    invoke-direct {p1}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;-><init>()V

    .line 2228
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserId:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;->setUserId(Ljava/lang/String;)Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;

    .line 2229
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_e

    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_e

    .line 2230
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-virtual {p2, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    .line 2232
    :cond_e
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;->setCustomData(Ljava/lang/String;)Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;

    .line 2234
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;->build()Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->setServerSideVerificationOptions(Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2238
    :catchall_0
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->loadAD()V

    return-void
.end method

.method private static a(Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;Ljava/util/Map;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "video_muted"

    .line 440
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 441
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    const-string v1, "video_autoplay"

    .line 443
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x1

    if-eqz v3, :cond_1

    .line 444
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v4

    :goto_1
    const-string v3, "video_duration"

    .line 446
    invoke-interface {p1, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    const/4 v6, -0x1

    if-eqz v5, :cond_2

    .line 447
    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    goto :goto_2

    :cond_2
    move p1, v6

    :goto_2
    if-eqz p0, :cond_5

    .line 451
    new-instance v3, Lcom/qq/e/ads/cfg/VideoOption$Builder;

    invoke-direct {v3}, Lcom/qq/e/ads/cfg/VideoOption$Builder;-><init>()V

    if-ne v0, v4, :cond_3

    move v5, v4

    goto :goto_3

    :cond_3
    move v5, v2

    .line 452
    :goto_3
    invoke-virtual {v3, v5}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v3

    if-ne v0, v4, :cond_4

    move v2, v4

    .line 453
    :cond_4
    invoke-virtual {v3, v2}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setDetailPageMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    .line 454
    invoke-virtual {v0, v1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayPolicy(I)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    .line 455
    invoke-virtual {v0}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->build()Lcom/qq/e/ads/cfg/VideoOption;

    move-result-object v0

    .line 456
    invoke-virtual {p0, v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setVideoOption(Lcom/qq/e/ads/cfg/VideoOption;)V

    if-eq p1, v6, :cond_5

    .line 458
    invoke-virtual {p0, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMaxVideoDuration(I)V

    :cond_5
    return-void
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;)V
    .locals 10

    const-string v0, "{network_placement_id}"

    .line 3095
    iget v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->j:I

    const/4 v2, 0x0

    const/4 v3, 0x1

    const/4 v4, 0x2

    if-ne v1, v4, :cond_9

    .line 3242
    instance-of v0, p1, Landroid/app/Activity;

    if-nez v0, :cond_0

    const-string p1, ""

    const-string p2, "GDT UnifiedInterstitial\'s context must be activity."

    .line 3243
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 3247
    :cond_0
    new-instance v7, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    invoke-direct {v7, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V

    .line 3369
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->k:Z

    if-eqz v0, :cond_1

    goto :goto_0

    .line 3373
    :cond_1
    new-instance v0, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    move-object v5, p1

    check-cast v5, Landroid/app/Activity;

    iget-object v6, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    const/4 v8, 0x0

    iget-object v9, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    move-object v4, v0

    invoke-direct/range {v4 .. v9}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;Ljava/util/Map;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    goto :goto_1

    .line 3370
    :cond_2
    :goto_0
    new-instance v0, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    check-cast p1, Landroid/app/Activity;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v7}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    .line 3371
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    .line 3376
    :goto_1
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    const-string v0, "video_muted"

    .line 3440
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 3441
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    goto :goto_2

    :cond_3
    move v0, v2

    :goto_2
    const-string v1, "video_autoplay"

    .line 3443
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 3444
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    goto :goto_3

    :cond_4
    move v1, v3

    :goto_3
    const-string v4, "video_duration"

    .line 3446
    invoke-interface {p2, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    const/4 v6, -0x1

    if-eqz v5, :cond_5

    .line 3447
    invoke-interface {p2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    goto :goto_4

    :cond_5
    move p2, v6

    :goto_4
    if-eqz p1, :cond_8

    .line 3451
    new-instance v4, Lcom/qq/e/ads/cfg/VideoOption$Builder;

    invoke-direct {v4}, Lcom/qq/e/ads/cfg/VideoOption$Builder;-><init>()V

    if-ne v0, v3, :cond_6

    move v5, v3

    goto :goto_5

    :cond_6
    move v5, v2

    .line 3452
    :goto_5
    invoke-virtual {v4, v5}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v4

    if-ne v0, v3, :cond_7

    move v2, v3

    .line 3453
    :cond_7
    invoke-virtual {v4, v2}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setDetailPageMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    .line 3454
    invoke-virtual {v0, v1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayPolicy(I)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    .line 3455
    invoke-virtual {v0}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->build()Lcom/qq/e/ads/cfg/VideoOption;

    move-result-object v0

    .line 3456
    invoke-virtual {p1, v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setVideoOption(Lcom/qq/e/ads/cfg/VideoOption;)V

    if-eq p2, v6, :cond_8

    .line 3458
    invoke-virtual {p1, p2}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMaxVideoDuration(I)V

    .line 3378
    :cond_8
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    new-instance p2, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;

    invoke-direct {p2, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMediaListener(Lcom/qq/e/ads/interstitial2/UnifiedInterstitialMediaListener;)V

    .line 3429
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->loadFullScreenAD()V

    return-void

    .line 4103
    :cond_9
    new-instance v4, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;

    invoke-direct {v4, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V

    .line 4219
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_c

    iget-boolean v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->k:Z

    if-eqz v1, :cond_a

    goto :goto_7

    .line 4223
    :cond_a
    new-instance p2, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    iget v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->g:I

    if-eq v1, v3, :cond_b

    move v6, v3

    goto :goto_6

    :cond_b
    move v6, v2

    :goto_6
    iget-object v7, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    move-object v1, p2

    move-object v2, p1

    move-object v3, v5

    move v5, v6

    move-object v6, v7

    invoke-direct/range {v1 .. v6}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/rewardvideo/RewardVideoADListener;ZLjava/lang/String;)V

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    goto :goto_8

    .line 4220
    :cond_c
    :goto_7
    new-instance v1, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->g:I

    if-eq v6, v3, :cond_d

    move v2, v3

    :cond_d
    invoke-direct {v1, p1, v5, v4, v2}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/rewardvideo/RewardVideoADListener;Z)V

    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    .line 4221
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    .line 4227
    :goto_8
    :try_start_0
    new-instance p1, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;

    invoke-direct {p1}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;-><init>()V

    .line 4228
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserId:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;->setUserId(Ljava/lang/String;)Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;

    .line 4229
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_e

    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_e

    .line 4230
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-virtual {p2, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    .line 4232
    :cond_e
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;->setCustomData(Ljava/lang/String;)Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;

    .line 4234
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;->build()Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->setServerSideVerificationOptions(Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 4238
    :catchall_0
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p0}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->loadAD()V

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

    const-string v0, "app_id"

    .line 84
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->c:Ljava/lang/String;

    const-string v0, "unit_id"

    .line 85
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    const-string v0, "payload"

    .line 86
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    const/4 v0, 0x0

    const-string v1, "video_muted"

    .line 88
    invoke-static {p1, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->g:I

    const-string v1, "unit_type"

    const/4 v2, 0x1

    .line 89
    invoke-static {p1, v1, v2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p1

    iput p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->j:I

    const-string p1, "ad_click_confirm_status"

    .line 91
    invoke-static {p2, p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;Z)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->i:Z

    return-void
.end method

.method private b(Landroid/content/Context;Ljava/util/Map;)V
    .locals 8
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

    const-string v0, "{network_placement_id}"

    .line 103
    new-instance v4, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;

    invoke-direct {v4, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V

    .line 219
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-nez v1, :cond_2

    iget-boolean v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->k:Z

    if-eqz v1, :cond_0

    goto :goto_1

    .line 223
    :cond_0
    new-instance p2, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    iget v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->g:I

    if-eq v1, v3, :cond_1

    move v6, v3

    goto :goto_0

    :cond_1
    move v6, v2

    :goto_0
    iget-object v7, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    move-object v1, p2

    move-object v2, p1

    move-object v3, v5

    move v5, v6

    move-object v6, v7

    invoke-direct/range {v1 .. v6}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/rewardvideo/RewardVideoADListener;ZLjava/lang/String;)V

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    goto :goto_2

    .line 220
    :cond_2
    :goto_1
    new-instance v1, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->g:I

    if-eq v6, v3, :cond_3

    move v2, v3

    :cond_3
    invoke-direct {v1, p1, v5, v4, v2}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/rewardvideo/RewardVideoADListener;Z)V

    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    .line 221
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    .line 227
    :goto_2
    :try_start_0
    new-instance p1, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;

    invoke-direct {p1}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;-><init>()V

    .line 228
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserId:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;->setUserId(Ljava/lang/String;)Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;

    .line 229
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_4

    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_4

    .line 230
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-virtual {p2, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    .line 232
    :cond_4
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;->setCustomData(Ljava/lang/String;)Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;

    .line 234
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions$Builder;->build()Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->setServerSideVerificationOptions(Lcom/qq/e/ads/rewardvideo/ServerSideVerificationOptions;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 238
    :catchall_0
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->loadAD()V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Z
    .locals 0

    .line 41
    iget-boolean p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->i:Z

    return p0
.end method

.method static synthetic c(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method private c(Landroid/content/Context;Ljava/util/Map;)V
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

    .line 242
    instance-of v0, p1, Landroid/app/Activity;

    if-nez v0, :cond_0

    const-string p1, ""

    const-string p2, "GDT UnifiedInterstitial\'s context must be activity."

    .line 243
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 247
    :cond_0
    new-instance v3, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    invoke-direct {v3, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V

    .line 369
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->k:Z

    if-eqz v0, :cond_1

    goto :goto_0

    .line 373
    :cond_1
    new-instance v6, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    const/4 v4, 0x0

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;Ljava/util/Map;Ljava/lang/String;)V

    iput-object v6, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    goto :goto_1

    .line 370
    :cond_2
    :goto_0
    new-instance v0, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    check-cast p1, Landroid/app/Activity;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v3}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    .line 371
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    .line 376
    :goto_1
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    const-string v0, "video_muted"

    .line 2440
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_3

    .line 2441
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    goto :goto_2

    :cond_3
    move v0, v2

    :goto_2
    const-string v1, "video_autoplay"

    .line 2443
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x1

    if-eqz v3, :cond_4

    .line 2444
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    goto :goto_3

    :cond_4
    move v1, v4

    :goto_3
    const-string v3, "video_duration"

    .line 2446
    invoke-interface {p2, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    const/4 v6, -0x1

    if-eqz v5, :cond_5

    .line 2447
    invoke-interface {p2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    goto :goto_4

    :cond_5
    move p2, v6

    :goto_4
    if-eqz p1, :cond_8

    .line 2451
    new-instance v3, Lcom/qq/e/ads/cfg/VideoOption$Builder;

    invoke-direct {v3}, Lcom/qq/e/ads/cfg/VideoOption$Builder;-><init>()V

    if-ne v0, v4, :cond_6

    move v5, v4

    goto :goto_5

    :cond_6
    move v5, v2

    .line 2452
    :goto_5
    invoke-virtual {v3, v5}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v3

    if-ne v0, v4, :cond_7

    move v2, v4

    .line 2453
    :cond_7
    invoke-virtual {v3, v2}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setDetailPageMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    .line 2454
    invoke-virtual {v0, v1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayPolicy(I)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    .line 2455
    invoke-virtual {v0}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->build()Lcom/qq/e/ads/cfg/VideoOption;

    move-result-object v0

    .line 2456
    invoke-virtual {p1, v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setVideoOption(Lcom/qq/e/ads/cfg/VideoOption;)V

    if-eq p2, v6, :cond_8

    .line 2458
    invoke-virtual {p1, p2}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMaxVideoDuration(I)V

    .line 378
    :cond_8
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    new-instance p2, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;

    invoke-direct {p2, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMediaListener(Lcom/qq/e/ads/interstitial2/UnifiedInterstitialMediaListener;)V

    .line 429
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->loadFullScreenAD()V

    return-void
.end method

.method static synthetic d(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Z
    .locals 0

    .line 41
    iget-boolean p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->k:Z

    return p0
.end method

.method static synthetic h(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic u(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic v(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic w(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic x(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic y(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic z(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 470
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 471
    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    .line 473
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v0, :cond_1

    .line 474
    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    :cond_1
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

    .line 542
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    .line 543
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getMediationInitManager()Lcom/tkay/core/api/TYInitMediation;
    .locals 1

    .line 537
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

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

    .line 532
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->h:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 465
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 480
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 485
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 1

    .line 490
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    if-eqz v0, :cond_0

    .line 491
    invoke-virtual {v0}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->isValid()Z

    move-result v0

    return v0

    .line 494
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v0, :cond_1

    .line 495
    invoke-virtual {v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->isValid()Z

    move-result v0

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
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

    const-string v0, "app_id"

    .line 1084
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->c:Ljava/lang/String;

    const-string v0, "unit_id"

    .line 1085
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    const-string v0, "payload"

    .line 1086
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e:Ljava/lang/String;

    const/4 v0, 0x0

    const-string v1, "video_muted"

    .line 1088
    invoke-static {p2, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->g:I

    const-string v1, "unit_type"

    const/4 v2, 0x1

    .line 1089
    invoke-static {p2, v1, v2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->j:I

    const-string v1, "ad_click_confirm_status"

    .line 1091
    invoke-static {p3, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;Z)Z

    move-result p3

    iput-boolean p3, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->i:Z

    .line 64
    iget-object p3, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->c:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_1

    iget-object p3, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_0

    goto :goto_0

    .line 69
    :cond_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    .line 70
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$1;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;)V

    invoke-virtual {v0, p3, p2, v1}, Lcom/tkay/network/gdt/GDTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void

    :cond_1
    :goto_0
    const-string p1, ""

    const-string p2, "GTD appid or unitId is empty."

    .line 65
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public setDismissType(I)V
    .locals 0

    .line 547
    iput p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mDismissType:I

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 3

    .line 504
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    if-eqz v0, :cond_1

    .line 506
    :try_start_0
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/lang/String;Lcom/qq/e/ads/rewardvideo/RewardVideoAD;)V

    if-eqz p1, :cond_0

    .line 508
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->showAD(Landroid/app/Activity;)V

    goto :goto_0

    .line 510
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {v0}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->showAD()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 513
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/network/gdt/GDTTYInitManager;->a()V

    .line 514
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 518
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v0, :cond_2

    .line 520
    :try_start_1
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;)V

    .line 521
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->showFullScreenAD(Landroid/app/Activity;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    :catchall_1
    move-exception p1

    .line 523
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->b()V

    .line 524
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
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

    .line 552
    iput-boolean p4, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->k:Z

    .line 553
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
