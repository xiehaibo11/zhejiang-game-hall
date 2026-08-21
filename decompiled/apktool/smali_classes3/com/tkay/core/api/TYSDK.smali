.class public Lcom/tkay/core/api/TYSDK;
.super Ljava/lang/Object;


# static fields
.field private static HAS_INIT:Z = false

.field public static final NONPERSONALIZED:I = 0x1

.field public static final PERSONALIZED:I = 0x0

.field public static final UNKNOWN:I = 0x2


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 48
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addCustomAdapterConfig(Ljava/lang/String;Lcom/tkay/core/api/TYCustomAdapterConfig;)V
    .locals 1

    .line 272
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;Lcom/tkay/core/api/TYCustomAdapterConfig;)V

    return-void
.end method

.method public static checkIsEuTraffic(Landroid/content/Context;Lcom/tkay/core/api/NetTrafficeCallback;)V
    .locals 0

    .line 201
    invoke-static {p0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/tkay/core/common/b/p;->a(Lcom/tkay/core/api/NetTrafficeCallback;)V

    return-void
.end method

.method public static varargs deniedUploadDeviceInfo([Ljava/lang/String;)V
    .locals 1

    .line 183
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->a([Ljava/lang/String;)V

    return-void
.end method

.method public static getArea(Lcom/tkay/core/api/TYAreaCallback;)V
    .locals 3

    if-nez p0, :cond_0

    return-void

    .line 279
    :cond_0
    new-instance v0, Lcom/tkay/core/common/h/e;

    invoke-direct {v0}, Lcom/tkay/core/common/h/e;-><init>()V

    const/4 v1, 0x0

    new-instance v2, Lcom/tkay/core/api/TYSDK$2;

    invoke-direct {v2, p0}, Lcom/tkay/core/api/TYSDK$2;-><init>(Lcom/tkay/core/api/TYAreaCallback;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/h/e;->a(ILcom/tkay/core/common/h/k;)V

    return-void
.end method

.method public static getGDPRDataLevel(Landroid/content/Context;)I
    .locals 0

    .line 190
    invoke-static {p0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/p;->a()I

    move-result p0

    return p0
.end method

.method public static getPersionalizedAdStatus()I
    .locals 1

    .line 334
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->d()I

    move-result v0

    return v0
.end method

.method public static getSDKVersionName()Ljava/lang/String;
    .locals 1

    .line 229
    invoke-static {}, Lcom/tkay/core/common/l/g;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static init(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 60
    invoke-static {p0, p1, p2, v0}, Lcom/tkay/core/api/TYSDK;->init(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYNetworkConfig;)V

    return-void
.end method

.method public static init(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYNetworkConfig;)V
    .locals 1

    const/4 v0, 0x0

    .line 65
    invoke-static {p0, p1, p2, p3, v0}, Lcom/tkay/core/api/TYSDK;->init(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYNetworkConfig;Lcom/tkay/core/api/TYSDKInitListener;)V

    return-void
.end method

.method public static init(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYNetworkConfig;Lcom/tkay/core/api/TYSDKInitListener;)V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    if-nez p0, :cond_1

    const-string p0, "init: Context is null!"

    if-eqz p4, :cond_0

    .line 82
    :try_start_0
    invoke-interface {p4, p0}, Lcom/tkay/core/api/TYSDKInitListener;->onFail(Ljava/lang/String;)V

    :cond_0
    const-string p1, "tkay"

    .line 84
    invoke-static {p1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 89
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2, p3}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYNetworkConfig;)V

    if-eqz p4, :cond_2

    .line 92
    invoke-interface {p4}, Lcom/tkay/core/api/TYSDKInitListener;->onSuccess()V

    .line 95
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p0

    new-instance p1, Lcom/tkay/core/api/TYSDK$1;

    invoke-direct {p1}, Lcom/tkay/core/api/TYSDK$1;-><init>()V

    invoke-virtual {p0, p1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/Error; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public static initCustomMap(Ljava/util/Map;)V
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

    .line 149
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->a(Ljava/util/Map;)V

    return-void
.end method

.method public static initPlacementCustomMap(Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 156
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static integrationChecking(Landroid/content/Context;)V
    .locals 1

    .line 248
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->b(Landroid/content/Context;)V

    return-void
.end method

.method public static isCnSDK()Z
    .locals 1

    .line 119
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static isEUTraffic(Landroid/content/Context;)Z
    .locals 0

    .line 197
    invoke-static {p0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/p;->d()Z

    move-result p0

    return p0
.end method

.method public static isNetworkLogDebug()Z
    .locals 1

    .line 241
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    return v0
.end method

.method public static setATPrivacyConfig(Lcom/tkay/core/api/ATPrivacyConfig;)V
    .locals 1

    .line 350
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/api/ATPrivacyConfig;)V

    return-void
.end method

.method public static setAdLogoVisible(Z)V
    .locals 1

    .line 252
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->c(Z)V

    return-void
.end method

.method public static setChannel(Ljava/lang/String;)V
    .locals 1

    .line 134
    invoke-static {p0}, Lcom/tkay/core/common/l/g;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 135
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->e(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public static setDebuggerConfig(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/api/ATDebuggerConfig;)V
    .locals 1

    .line 326
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/api/ATDebuggerConfig;)V

    return-void
.end method

.method public static setExcludePackageList(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 161
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->a(Ljava/util/List;)V

    return-void
.end method

.method public static setFilterAdSourceIdList(Ljava/lang/String;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 264
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;Ljava/util/List;)V

    return-void
.end method

.method public static setFilterNetworkFirmIdList(Ljava/lang/String;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 268
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/b/m;->b(Ljava/lang/String;Ljava/util/List;)V

    return-void
.end method

.method public static setGDPRUploadDataLevel(Landroid/content/Context;I)V
    .locals 2

    const-string v0, "tkay"

    if-nez p0, :cond_0

    const-string p0, "setGDPRUploadDataLevel: context should not be null"

    .line 169
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    if-eqz p1, :cond_2

    const/4 v1, 0x1

    if-ne p1, v1, :cond_1

    goto :goto_0

    :cond_1
    const-string p0, "GDPR level setting error!!! Level must be PERSONALIZED or NONPERSONALIZED."

    .line 177
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 175
    :cond_2
    :goto_0
    invoke-static {p0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/tkay/core/common/b/p;->a(I)V

    return-void
.end method

.method public static setInitType(I)V
    .locals 1

    .line 322
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->b(I)V

    return-void
.end method

.method public static setLocation(Landroid/location/Location;)V
    .locals 1

    .line 256
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->a(Landroid/location/Location;)V

    return-void
.end method

.method public static setNetworkLogDebug(Z)V
    .locals 1

    .line 237
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->b(Z)V

    return-void
.end method

.method public static setPersonalizedAdStatus(I)V
    .locals 1

    .line 330
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->a(I)V

    return-void
.end method

.method public static setSubChannel(Ljava/lang/String;)V
    .locals 1

    .line 140
    invoke-static {p0}, Lcom/tkay/core/common/l/g;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 141
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->f(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public static setSystemDevFragmentType(Ljava/lang/String;)V
    .locals 1

    .line 342
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->p(Ljava/lang/String;)V

    return-void
.end method

.method public static setTYAdFilter([Ljava/lang/String;Lcom/tkay/core/api/ITYAdFilter;)V
    .locals 1

    .line 346
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/b/m;->a([Ljava/lang/String;Lcom/tkay/core/api/ITYAdFilter;)V

    return-void
.end method

.method public static setUseHTTP(Z)V
    .locals 1

    .line 338
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->d(Z)V

    return-void
.end method

.method public static setWXAppId(Ljava/lang/String;)V
    .locals 1

    .line 127
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method public static setWXStatus(Z)V
    .locals 1

    .line 260
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->a(Z)V

    return-void
.end method

.method public static showGdprAuth(Landroid/content/Context;)V
    .locals 2

    .line 210
    invoke-static {p0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;Lcom/tkay/core/api/TYGDPRAuthCallback;)V

    return-void
.end method

.method public static showGdprAuth(Landroid/content/Context;Lcom/tkay/core/api/TYGDPRAuthCallback;)V
    .locals 1

    .line 219
    invoke-static {p0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;Lcom/tkay/core/api/TYGDPRAuthCallback;)V

    return-void
.end method

.method public static testModeDeviceInfo(Landroid/content/Context;Lcom/tkay/core/api/DeviceInfoCallback;)V
    .locals 1

    .line 318
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Lcom/tkay/core/api/DeviceInfoCallback;)V

    return-void
.end method
