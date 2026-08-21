.class public Lcom/tkay/network/gdt/GDTTYSplashAdapter;
.super Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

# interfaces
.implements Lcom/qq/e/ads/splash/SplashADZoomOutListener;


# instance fields
.field final a:Ljava/lang/String;

.field b:Z

.field c:Lcom/tkay/network/gdt/GDTTYSplashEyeAd;

.field d:Landroid/view/ViewGroup;

.field e:Ljava/lang/String;

.field f:Z

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Z

.field private j:Lcom/qq/e/ads/splash/SplashAD;

.field private k:Z

.field private l:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 38
    invoke-direct {p0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;-><init>()V

    .line 40
    const-class v0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 52
    iput-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->l:Z

    .line 58
    iput-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->f:Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

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

    .line 61
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->f:Z

    if-eqz v0, :cond_0

    goto :goto_0

    .line 65
    :cond_0
    new-instance p2, Lcom/qq/e/ads/splash/SplashAD;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->h:Ljava/lang/String;

    iget v5, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mFetchAdTimeout:I

    iget-object v6, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->e:Ljava/lang/String;

    move-object v1, p2

    move-object v2, p1

    move-object v4, p0

    invoke-direct/range {v1 .. v6}, Lcom/qq/e/ads/splash/SplashAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/splash/SplashADListener;ILjava/lang/String;)V

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    goto :goto_1

    .line 62
    :cond_1
    :goto_0
    new-instance v0, Lcom/qq/e/ads/splash/SplashAD;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->h:Ljava/lang/String;

    iget v2, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mFetchAdTimeout:I

    invoke-direct {v0, p1, v1, p0, v2}, Lcom/qq/e/ads/splash/SplashAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/splash/SplashADListener;I)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    .line 63
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/splash/SplashAD;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    .line 68
    :goto_1
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/splash/SplashAD;->fetchAdOnly()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYSplashAdapter;Landroid/content/Context;Ljava/util/Map;)V
    .locals 7

    .line 2061
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->f:Z

    if-eqz v0, :cond_0

    goto :goto_0

    .line 2065
    :cond_0
    new-instance p2, Lcom/qq/e/ads/splash/SplashAD;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->h:Ljava/lang/String;

    iget v5, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mFetchAdTimeout:I

    iget-object v6, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->e:Ljava/lang/String;

    move-object v1, p2

    move-object v2, p1

    move-object v4, p0

    invoke-direct/range {v1 .. v6}, Lcom/qq/e/ads/splash/SplashAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/splash/SplashADListener;ILjava/lang/String;)V

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    goto :goto_1

    .line 2062
    :cond_1
    :goto_0
    new-instance v0, Lcom/qq/e/ads/splash/SplashAD;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->h:Ljava/lang/String;

    iget v2, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mFetchAdTimeout:I

    invoke-direct {v0, p1, v1, p0, v2}, Lcom/qq/e/ads/splash/SplashAD;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/qq/e/ads/splash/SplashADListener;I)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    .line 2063
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/splash/SplashAD;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    .line 2068
    :goto_1
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    invoke-virtual {p0}, Lcom/qq/e/ads/splash/SplashAD;->fetchAdOnly()V

    return-void
.end method

.method private a(Ljava/util/Map;Ljava/util/Map;)V
    .locals 2
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

    .line 112
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->g:Ljava/lang/String;

    const-string v0, "unit_id"

    .line 113
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->h:Ljava/lang/String;

    const-string v0, "payload"

    .line 114
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->e:Ljava/lang/String;

    const/4 v0, 0x0

    .line 116
    iput-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->i:Z

    const-string v1, "ad_click_confirm_status"

    .line 118
    invoke-static {p2, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;Z)Z

    move-result p2

    iput-boolean p2, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->k:Z

    const-string p2, "zoomoutad_sw"

    .line 120
    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 121
    invoke-static {p1, p2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "2"

    invoke-static {p2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->l:Z

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/network/gdt/GDTTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 1

    const/4 v0, 0x0

    .line 143
    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

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

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->h:Ljava/lang/String;

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

    .line 73
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->h:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 153
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSplashEyeAd()Lcom/tkay/splashad/api/ITYSplashEyeAd;
    .locals 1

    .line 252
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->c:Lcom/tkay/network/gdt/GDTTYSplashEyeAd;

    return-object v0
.end method

.method public isAdReady()Z
    .locals 1

    .line 78
    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->i:Z

    return v0
.end method

.method public isSupportZoomOut()Z
    .locals 1

    .line 277
    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->l:Z

    return v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
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

    const-string v0, "app_id"

    .line 1112
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->g:Ljava/lang/String;

    const-string v0, "unit_id"

    .line 1113
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->h:Ljava/lang/String;

    const-string v0, "payload"

    .line 1114
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->e:Ljava/lang/String;

    const/4 v0, 0x0

    .line 1116
    iput-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->i:Z

    const-string v1, "ad_click_confirm_status"

    .line 1118
    invoke-static {p3, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->k:Z

    const-string v0, "zoomoutad_sw"

    .line 1120
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1121
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "2"

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->l:Z

    .line 85
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 90
    :cond_1
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v6

    .line 91
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    new-instance v7, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p2

    move-object v4, p1

    move-object v5, p3

    invoke-direct/range {v1 .. v6}, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;-><init>(Lcom/tkay/network/gdt/GDTTYSplashAdapter;Ljava/util/Map;Landroid/content/Context;Ljava/util/Map;Landroid/content/Context;)V

    invoke-virtual {v0, p1, p2, v7}, Lcom/tkay/network/gdt/GDTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void

    :cond_2
    :goto_0
    const-string p1, ""

    const-string p2, "GTD appid or unitId is empty."

    .line 86
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onADClicked()V
    .locals 1

    .line 191
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    if-eqz v0, :cond_0

    .line 192
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdClicked()V

    :cond_0
    return-void
.end method

.method public onADDismissed()V
    .locals 3

    .line 159
    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->l:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->b:Z

    if-eqz v0, :cond_1

    .line 160
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->c:Lcom/tkay/network/gdt/GDTTYSplashEyeAd;

    if-eqz v0, :cond_2

    .line 161
    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYSplashEyeAd;->getSplashEyeAdListener()Lcom/tkay/splashad/api/TYSplashEyeAdListener;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    const-string v2, ""

    .line 163
    invoke-interface {v0, v1, v2}, Lcom/tkay/splashad/api/TYSplashEyeAdListener;->onAdDismiss(ZLjava/lang/String;)V

    :cond_0
    return-void

    .line 167
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    if-eqz v0, :cond_2

    .line 168
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_2
    return-void
.end method

.method public onADExposure()V
    .locals 4

    .line 204
    :try_start_0
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 208
    :catchall_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    if-eqz v0, :cond_0

    .line 209
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShow()V

    :cond_0
    return-void
.end method

.method public onADLoaded(J)V
    .locals 5

    const/4 p1, 0x1

    .line 215
    iput-boolean p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->i:Z

    .line 216
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    if-eqz p1, :cond_0

    iget-boolean p2, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->k:Z

    if-eqz p2, :cond_0

    .line 217
    new-instance p2, Lcom/tkay/network/gdt/GDTTYSplashAdapter$2;

    invoke-direct {p2, p0}, Lcom/tkay/network/gdt/GDTTYSplashAdapter$2;-><init>(Lcom/tkay/network/gdt/GDTTYSplashAdapter;)V

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/splash/SplashAD;->setDownloadConfirmListener(Lcom/qq/e/comm/compliance/DownloadConfirmListener;)V

    .line 231
    :cond_0
    iget-boolean p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->f:Z

    if-eqz p1, :cond_2

    .line 232
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz p1, :cond_3

    .line 233
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    if-eqz p1, :cond_1

    .line 234
    invoke-virtual {p1}, Lcom/qq/e/ads/splash/SplashAD;->getECPM()I

    move-result p1

    int-to-double p1, p1

    .line 236
    new-instance v0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    invoke-direct {v0, v1}, Lcom/tkay/network/gdt/GDTTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    .line 237
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    sget-object v3, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-static {p1, p2, v2, v0, v3}, Lcom/tkay/core/api/TYBiddingResult;->success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object p1

    const/4 p2, 0x0

    invoke-interface {v1, p1, p2}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    return-void

    :cond_1
    const-string p1, ""

    const-string p2, "GDT: SplashAD had been destroy."

    .line 239
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 243
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p1, :cond_3

    .line 244
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    const/4 p2, 0x0

    new-array p2, p2, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_3
    return-void
.end method

.method public onADPresent()V
    .locals 0

    return-void
.end method

.method public onADTick(J)V
    .locals 0

    return-void
.end method

.method public onNoAD(Lcom/qq/e/comm/util/AdError;)V
    .locals 3

    .line 175
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    .line 177
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    if-eqz v0, :cond_0

    .line 178
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "GDT Splash show fail:[errorCode:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",errorMsg:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "]"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/16 v0, 0x63

    .line 179
    iput v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mDismissType:I

    .line 180
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object p1

    const-string v2, "4006"

    invoke-static {v2, v1, p1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShowFail(Lcom/tkay/core/api/AdError;)V

    .line 181
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method

.method public onZoomOut()V
    .locals 2

    const/4 v0, 0x1

    .line 257
    iput-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->b:Z

    .line 259
    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->l:Z

    if-eqz v0, :cond_0

    .line 260
    new-instance v0, Lcom/tkay/network/gdt/GDTTYSplashEyeAd;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    invoke-direct {v0, p0, v1}, Lcom/tkay/network/gdt/GDTTYSplashEyeAd;-><init>(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/qq/e/ads/splash/SplashAD;)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->c:Lcom/tkay/network/gdt/GDTTYSplashEyeAd;

    .line 261
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->d:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Lcom/tkay/network/gdt/GDTTYSplashEyeAd;->setSplashView(Landroid/view/View;)V

    .line 263
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    if-eqz v0, :cond_0

    .line 264
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method

.method public onZoomOutPlayFinish()V
    .locals 0

    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
    .locals 2

    .line 128
    iget-boolean p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->i:Z

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    if-eqz p1, :cond_1

    .line 129
    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->l:Z

    if-eqz v0, :cond_0

    .line 131
    new-instance p1, Landroid/widget/FrameLayout;

    invoke-virtual {p2}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->d:Landroid/view/ViewGroup;

    .line 132
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p2, p1, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 134
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->j:Lcom/qq/e/ads/splash/SplashAD;

    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->d:Landroid/view/ViewGroup;

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/splash/SplashAD;->showAd(Landroid/view/ViewGroup;)V

    return-void

    .line 136
    :cond_0
    invoke-virtual {p1, p2}, Lcom/qq/e/ads/splash/SplashAD;->showAd(Landroid/view/ViewGroup;)V

    :cond_1
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

    .line 293
    iput-boolean p4, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->f:Z

    .line 294
    invoke-virtual {p0}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->getMixedFormatAdType()I

    move-result v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 297
    :cond_0
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
