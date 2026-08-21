.class public Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;
.super Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

# interfaces
.implements Lcom/qq/e/ads/interstitial2/UnifiedInterstitialMediaListener;


# static fields
.field public static TAG:Ljava/lang/String;


# instance fields
.field a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

.field b:Ljava/lang/String;

.field c:Ljava/lang/String;

.field d:Ljava/lang/String;

.field e:I

.field f:Ljava/lang/String;

.field g:Z

.field h:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 38
    const-class v0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 37
    invoke-direct {p0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;-><init>()V

    const/4 v0, 0x0

    .line 45
    iput v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->e:I

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

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

    .line 60
    instance-of v0, p1, Landroid/app/Activity;

    if-nez v0, :cond_0

    const-string p1, ""

    const-string p2, "GDT UnifiedInterstitial\'s context must be activity."

    .line 61
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 65
    :cond_0
    new-instance v3, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;

    invoke-direct {v3, p0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;-><init>(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)V

    .line 159
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->h:Z

    if-eqz v0, :cond_1

    goto :goto_0

    .line 163
    :cond_1
    new-instance v6, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    const/4 v4, 0x0

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->d:Ljava/lang/String;

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;Ljava/util/Map;Ljava/lang/String;)V

    iput-object v6, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    goto :goto_1

    .line 160
    :cond_2
    :goto_0
    new-instance v0, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    check-cast p1, Landroid/app/Activity;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v3}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;)V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    .line 161
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    :goto_1
    const/4 p1, 0x0

    const-string v0, "video_muted"

    .line 2288
    invoke-static {p2, v0, p1}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v0

    const/4 v1, 0x1

    const-string v2, "video_autoplay"

    .line 2289
    invoke-static {p2, v2, v1}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v2

    const/4 v3, -0x1

    const-string v4, "video_duration"

    .line 2290
    invoke-static {p2, v4, v3}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p2

    .line 2292
    iget-object v4, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v4, :cond_5

    .line 2293
    new-instance v4, Lcom/qq/e/ads/cfg/VideoOption$Builder;

    invoke-direct {v4}, Lcom/qq/e/ads/cfg/VideoOption$Builder;-><init>()V

    if-ne v0, v1, :cond_3

    move v5, v1

    goto :goto_2

    :cond_3
    move v5, p1

    .line 2294
    :goto_2
    invoke-virtual {v4, v5}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v4

    if-ne v0, v1, :cond_4

    move p1, v1

    .line 2295
    :cond_4
    invoke-virtual {v4, p1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setDetailPageMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object p1

    .line 2296
    invoke-virtual {p1, v2}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayPolicy(I)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object p1

    .line 2297
    invoke-virtual {p1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->build()Lcom/qq/e/ads/cfg/VideoOption;

    move-result-object p1

    .line 2298
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setVideoOption(Lcom/qq/e/ads/cfg/VideoOption;)V

    if-eq p2, v3, :cond_5

    .line 2300
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMaxVideoDuration(I)V

    .line 169
    :cond_5
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->f:Ljava/lang/String;

    const-string p2, "1"

    invoke-static {p2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 170
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->loadFullScreenAD()V

    return-void

    .line 172
    :cond_6
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->loadAD()V

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
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
            ">;)V"
        }
    .end annotation

    const-string v0, "is_fullscreen"

    const-string v1, "0"

    .line 53
    invoke-static {p2, v0, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->f:Ljava/lang/String;

    const/4 v0, 0x0

    const-string v1, "ad_click_confirm_status"

    .line 54
    invoke-static {p3, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;Z)Z

    move-result p3

    iput-boolean p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->g:Z

    .line 1060
    instance-of p3, p1, Landroid/app/Activity;

    if-nez p3, :cond_0

    const-string p1, ""

    const-string p2, "GDT UnifiedInterstitial\'s context must be activity."

    .line 1061
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 1065
    :cond_0
    new-instance v4, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;

    invoke-direct {v4, p0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;-><init>(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)V

    .line 1159
    iget-object p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->d:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_2

    iget-boolean p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->h:Z

    if-eqz p3, :cond_1

    goto :goto_0

    .line 1163
    :cond_1
    new-instance p3, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    move-object v2, p1

    check-cast v2, Landroid/app/Activity;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    const/4 v5, 0x0

    iget-object v6, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->d:Ljava/lang/String;

    move-object v1, p3

    invoke-direct/range {v1 .. v6}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;Ljava/util/Map;Ljava/lang/String;)V

    iput-object p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    goto :goto_1

    .line 1160
    :cond_2
    :goto_0
    new-instance p3, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    check-cast p1, Landroid/app/Activity;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    invoke-direct {p3, p1, v1, v4}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;)V

    iput-object p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    .line 1161
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {p3, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    :goto_1
    const-string p1, "video_muted"

    .line 1288
    invoke-static {p2, p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p1

    const/4 p3, 0x1

    const-string v1, "video_autoplay"

    .line 1289
    invoke-static {p2, v1, p3}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v1

    const/4 v2, -0x1

    const-string v3, "video_duration"

    .line 1290
    invoke-static {p2, v3, v2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p2

    .line 1292
    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v3, :cond_5

    .line 1293
    new-instance v3, Lcom/qq/e/ads/cfg/VideoOption$Builder;

    invoke-direct {v3}, Lcom/qq/e/ads/cfg/VideoOption$Builder;-><init>()V

    if-ne p1, p3, :cond_3

    move v4, p3

    goto :goto_2

    :cond_3
    move v4, v0

    .line 1294
    :goto_2
    invoke-virtual {v3, v4}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v3

    if-ne p1, p3, :cond_4

    move v0, p3

    .line 1295
    :cond_4
    invoke-virtual {v3, v0}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setDetailPageMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object p1

    .line 1296
    invoke-virtual {p1, v1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayPolicy(I)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object p1

    .line 1297
    invoke-virtual {p1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->build()Lcom/qq/e/ads/cfg/VideoOption;

    move-result-object p1

    .line 1298
    iget-object p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p3, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setVideoOption(Lcom/qq/e/ads/cfg/VideoOption;)V

    if-eq p2, v2, :cond_5

    .line 1300
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMaxVideoDuration(I)V

    .line 1169
    :cond_5
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->f:Ljava/lang/String;

    const-string p2, "1"

    invoke-static {p2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 1170
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->loadFullScreenAD()V

    return-void

    .line 1172
    :cond_6
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->loadAD()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 7

    const-string v0, "is_fullscreen"

    const-string v1, "0"

    .line 4053
    invoke-static {p2, v0, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->f:Ljava/lang/String;

    const/4 v0, 0x0

    const-string v1, "ad_click_confirm_status"

    .line 4054
    invoke-static {p3, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;Z)Z

    move-result p3

    iput-boolean p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->g:Z

    .line 4060
    instance-of p3, p1, Landroid/app/Activity;

    if-nez p3, :cond_0

    const-string p1, ""

    const-string p2, "GDT UnifiedInterstitial\'s context must be activity."

    .line 4061
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 4065
    :cond_0
    new-instance v4, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;

    invoke-direct {v4, p0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;-><init>(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)V

    .line 4159
    iget-object p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->d:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_2

    iget-boolean p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->h:Z

    if-eqz p3, :cond_1

    goto :goto_0

    .line 4163
    :cond_1
    new-instance p3, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    move-object v2, p1

    check-cast v2, Landroid/app/Activity;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    const/4 v5, 0x0

    iget-object v6, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->d:Ljava/lang/String;

    move-object v1, p3

    invoke-direct/range {v1 .. v6}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;Ljava/util/Map;Ljava/lang/String;)V

    iput-object p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    goto :goto_1

    .line 4160
    :cond_2
    :goto_0
    new-instance p3, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    check-cast p1, Landroid/app/Activity;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    invoke-direct {p3, p1, v1, v4}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;)V

    iput-object p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    .line 4161
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;

    move-result-object p1

    invoke-virtual {p3, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setLoadAdParams(Lcom/qq/e/comm/constants/LoadAdParams;)V

    :goto_1
    const-string p1, "video_muted"

    .line 4288
    invoke-static {p2, p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p1

    const/4 p3, 0x1

    const-string v1, "video_autoplay"

    .line 4289
    invoke-static {p2, v1, p3}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v1

    const/4 v2, -0x1

    const-string v3, "video_duration"

    .line 4290
    invoke-static {p2, v3, v2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p2

    .line 4292
    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v3, :cond_5

    .line 4293
    new-instance v3, Lcom/qq/e/ads/cfg/VideoOption$Builder;

    invoke-direct {v3}, Lcom/qq/e/ads/cfg/VideoOption$Builder;-><init>()V

    if-ne p1, p3, :cond_3

    move v4, p3

    goto :goto_2

    :cond_3
    move v4, v0

    .line 4294
    :goto_2
    invoke-virtual {v3, v4}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v3

    if-ne p1, p3, :cond_4

    move v0, p3

    .line 4295
    :cond_4
    invoke-virtual {v3, v0}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setDetailPageMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object p1

    .line 4296
    invoke-virtual {p1, v1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayPolicy(I)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object p1

    .line 4297
    invoke-virtual {p1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->build()Lcom/qq/e/ads/cfg/VideoOption;

    move-result-object p1

    .line 4298
    iget-object p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p3, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setVideoOption(Lcom/qq/e/ads/cfg/VideoOption;)V

    if-eq p2, v2, :cond_5

    .line 4300
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p1, p2}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMaxVideoDuration(I)V

    .line 4169
    :cond_5
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->f:Ljava/lang/String;

    const-string p2, "1"

    invoke-static {p2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 4170
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->loadFullScreenAD()V

    return-void

    .line 4172
    :cond_6
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->loadAD()V

    return-void
.end method

.method private a(Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "app_id"

    .line 258
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->b:Ljava/lang/String;

    const-string v0, "unit_id"

    .line 259
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    const-string v0, "unit_version"

    .line 260
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->e:I

    const-string v0, "payload"

    .line 261
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->d:Ljava/lang/String;

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method private b(Ljava/util/Map;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x0

    const-string v1, "video_muted"

    .line 288
    invoke-static {p1, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v1

    const/4 v2, 0x1

    const-string v3, "video_autoplay"

    .line 289
    invoke-static {p1, v3, v2}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v3

    const/4 v4, -0x1

    const-string v5, "video_duration"

    .line 290
    invoke-static {p1, v5, v4}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p1

    .line 292
    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v5, :cond_2

    .line 293
    new-instance v5, Lcom/qq/e/ads/cfg/VideoOption$Builder;

    invoke-direct {v5}, Lcom/qq/e/ads/cfg/VideoOption$Builder;-><init>()V

    if-ne v1, v2, :cond_0

    move v6, v2

    goto :goto_0

    :cond_0
    move v6, v0

    .line 294
    :goto_0
    invoke-virtual {v5, v6}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v5

    if-ne v1, v2, :cond_1

    move v0, v2

    .line 295
    :cond_1
    invoke-virtual {v5, v0}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setDetailPageMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    .line 296
    invoke-virtual {v0, v3}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayPolicy(I)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v0

    .line 297
    invoke-virtual {v0}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->build()Lcom/qq/e/ads/cfg/VideoOption;

    move-result-object v0

    .line 298
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v1, v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setVideoOption(Lcom/qq/e/ads/cfg/VideoOption;)V

    if-eq p1, v4, :cond_2

    .line 300
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMaxVideoDuration(I)V

    :cond_2
    return-void
.end method

.method static synthetic c(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 266
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 267
    invoke-virtual {v0, v1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMediaListener(Lcom/qq/e/ads/interstitial2/UnifiedInterstitialMediaListener;)V

    .line 268
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->destroy()V

    .line 269
    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    :cond_0
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

    .line 363
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    .line 364
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getMediationInitManager()Lcom/tkay/core/api/TYInitMediation;
    .locals 1

    .line 358
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 211
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 275
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 280
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 1

    .line 179
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v0, :cond_0

    .line 180
    invoke-virtual {v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->isValid()Z

    move-result v0

    return v0

    :cond_0
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

    const-string v0, "app_id"

    .line 3258
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->b:Ljava/lang/String;

    const-string v0, "unit_id"

    .line 3259
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    const-string v0, "unit_version"

    .line 3260
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->e:I

    const-string v0, "payload"

    .line 3261
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->d:Ljava/lang/String;

    .line 218
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 240
    :cond_0
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;-><init>(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/network/gdt/GDTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void

    :cond_1
    :goto_0
    const-string p1, ""

    const-string p2, "GDT appid or unitId is empty."

    .line 219
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onVideoComplete()V
    .locals 1

    .line 333
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    if-eqz v0, :cond_0

    .line 334
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoEnd()V

    :cond_0
    return-void
.end method

.method public onVideoError(Lcom/qq/e/comm/util/AdError;)V
    .locals 3

    .line 340
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->b()V

    .line 341
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    if-eqz v0, :cond_0

    .line 342
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onVideoInit()V
    .locals 0

    return-void
.end method

.method public onVideoLoading()V
    .locals 0

    return-void
.end method

.method public onVideoPageClose()V
    .locals 0

    return-void
.end method

.method public onVideoPageOpen()V
    .locals 0

    return-void
.end method

.method public onVideoPause()V
    .locals 0

    return-void
.end method

.method public onVideoReady(J)V
    .locals 0

    return-void
.end method

.method public onVideoStart()V
    .locals 1

    .line 321
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    if-eqz v0, :cond_0

    .line 322
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoStart()V

    :cond_0
    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 3

    .line 187
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v0, :cond_3

    .line 189
    invoke-virtual {v0, p0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setMediaListener(Lcom/qq/e/ads/interstitial2/UnifiedInterstitialMediaListener;)V

    .line 191
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->f:Ljava/lang/String;

    const-string v1, "1"

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    .line 193
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;)V

    .line 194
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->showFullScreenAD(Landroid/app/Activity;)V

    return-void

    .line 196
    :cond_0
    sget-object p1, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->TAG:Ljava/lang/String;

    const-string v0, "Gdt (Full Screen) show fail: context need be Activity"

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 199
    :cond_1
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;)V

    if-eqz p1, :cond_2

    .line 201
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0, p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->show(Landroid/app/Activity;)V

    return-void

    .line 203
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->show()V

    :cond_3
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

    .line 369
    iput-boolean p4, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->h:Z

    .line 370
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
