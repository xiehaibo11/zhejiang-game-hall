.class public Lcom/sigmob/windad/WindAds;
.super Ljava/lang/Object;


# static fields
.field public static final ADN_ID:Ljava/lang/String; = "ADN_ID"

.field public static final AD_SCENE_DESC:Ljava/lang/String; = "scene_desc"

.field public static final AD_SCENE_ID:Ljava/lang/String; = "scene_id"

.field public static final AUCTION_PRICE:Ljava/lang/String; = "AUCTION_PRICE"

.field public static final CNY:Ljava/lang/String; = "CNY"

.field public static final CURRENCY:Ljava/lang/String; = "CURRENCY"

.field public static final HIGHEST_LOSS_PRICE:Ljava/lang/String; = "HIGHEST_LOSS_PRICE"

.field public static final LOSS_REASON:Ljava/lang/String; = "LOSS_REASON"

.field public static final USD:Ljava/lang/String; = "USD"

.field private static volatile a:Lcom/sigmob/windad/WindAds;


# instance fields
.field private b:Z

.field private c:Lcom/sigmob/windad/WindAdOptions;

.field private d:Z

.field private e:Landroid/os/Handler;

.field private f:Lcom/sigmob/windad/OnInitializationListener;

.field private g:Z

.field private h:I

.field private i:Z

.field private j:I

.field private k:I


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/windad/WindAds;->b:Z

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/windad/WindAds;->g:Z

    iput-boolean v0, p0, Lcom/sigmob/windad/WindAds;->i:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/windad/WindAds;->c:Lcom/sigmob/windad/WindAdOptions;

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/sigmob/windad/WindAds;->e:Landroid/os/Handler;

    return-void
.end method

.method private a()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAds;->f:Lcom/sigmob/windad/OnInitializationListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/windad/OnInitializationListener;->OnInitializationSuccess()V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "startWithOptions "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/windad/WindAds;->f:Lcom/sigmob/windad/OnInitializationListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/OnInitializationListener;->OnInitializationFail(Ljava/lang/String;)V

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private b()V
    .locals 3

    iget v0, p0, Lcom/sigmob/windad/WindAds;->h:I

    if-nez v0, :cond_1

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/c;->g()I

    move-result v0

    iput v0, p0, Lcom/sigmob/windad/WindAds;->h:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    iget v0, p0, Lcom/sigmob/windad/WindAds;->h:I

    if-nez v0, :cond_1

    :try_start_1
    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/windad/consent/WindAdConsentInformation;->getInstance(Landroid/content/Context;)Lcom/sigmob/windad/consent/WindAdConsentInformation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/consent/WindAdConsentInformation;->getConsentStatus()Lcom/sigmob/windad/consent/ConsentStatus;

    move-result-object v0

    sget-object v1, Lcom/sigmob/windad/WindAds$1;->a:[I

    invoke-virtual {v0}, Lcom/sigmob/windad/consent/ConsentStatus;->ordinal()I

    move-result v0

    aget v0, v1, v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    iput v1, p0, Lcom/sigmob/windad/WindAds;->h:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    :cond_1
    :goto_0
    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    iget v1, p0, Lcom/sigmob/windad/WindAds;->h:I

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/c;->c(IZ)V

    return-void
.end method

.method private c()V
    .locals 3

    :try_start_0
    iget v0, p0, Lcom/sigmob/windad/WindAds;->j:I

    const/4 v1, 0x0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/c;->c()I

    move-result v0

    iput v0, p0, Lcom/sigmob/windad/WindAds;->j:I

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    iget v2, p0, Lcom/sigmob/windad/WindAds;->j:I

    invoke-virtual {v0, v2, v1}, Lcom/sigmob/sdk/base/c;->b(IZ)V

    :goto_0
    iget v0, p0, Lcom/sigmob/windad/WindAds;->k:I

    if-nez v0, :cond_1

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/c;->b()I

    move-result v0

    iput v0, p0, Lcom/sigmob/windad/WindAds;->k:I

    goto :goto_1

    :cond_1
    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    iget v2, p0, Lcom/sigmob/windad/WindAds;->k:I

    invoke-virtual {v0, v2, v1}, Lcom/sigmob/sdk/base/c;->a(IZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :goto_1
    return-void
.end method

.method private d()V
    .locals 3

    :try_start_0
    invoke-direct {p0}, Lcom/sigmob/windad/WindAds;->c()V

    invoke-direct {p0}, Lcom/sigmob/windad/WindAds;->b()V

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    iget-boolean v1, p0, Lcom/sigmob/windad/WindAds;->i:Z

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/c;->b(ZZ)V

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    iget-boolean v1, p0, Lcom/sigmob/windad/WindAds;->g:Z

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/c;->a(ZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    const-string v1, "loadPrivacyInfo"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public static getUserId()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getUserId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "4.9.0"

    return-object v0
.end method

.method public static requestPermission(Landroid/app/Activity;)V
    .locals 6

    if-eqz p0, :cond_1

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_1

    const-string v0, "android.permission.READ_PHONE_STATE"

    invoke-static {p0, v0}, Lcom/czhj/sdk/common/ClientMetadata;->isPermissionGranted(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    const-string v2, "android.permission.WRITE_EXTERNAL_STORAGE"

    invoke-static {p0, v2}, Lcom/czhj/sdk/common/ClientMetadata;->isPermissionGranted(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v3

    const-string v4, "android.permission.ACCESS_FINE_LOCATION"

    invoke-static {p0, v4}, Lcom/czhj/sdk/common/ClientMetadata;->isPermissionGranted(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v5

    if-eqz v1, :cond_0

    if-eqz v3, :cond_0

    if-nez v5, :cond_1

    :cond_0
    filled-new-array {v0, v2, v4}, [Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/app/Activity;->requestPermissions([Ljava/lang/String;I)V

    :cond_1
    return-void
.end method

.method public static setOAIDCertPem(Ljava/lang/String;)V
    .locals 0

    :try_start_0
    invoke-static {p0}, Lcom/czhj/sdk/common/ClientMetadata;->setOAIDCertPem(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const-string p0, "not support OAID Module"

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static setUserId(Ljava/lang/String;)V
    .locals 0

    invoke-static {p0}, Lcom/czhj/sdk/common/ClientMetadata;->setUserId(Ljava/lang/String;)V

    return-void
.end method

.method public static sharedAds()Lcom/sigmob/windad/WindAds;
    .locals 3

    sget-object v0, Lcom/sigmob/windad/WindAds;->a:Lcom/sigmob/windad/WindAds;

    if-nez v0, :cond_1

    const-class v0, Lcom/sigmob/windad/WindAds;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/sigmob/windad/WindAds;->a:Lcom/sigmob/windad/WindAds;

    if-nez v1, :cond_0

    new-instance v1, Lcom/sigmob/windad/WindAds;

    invoke-direct {v1}, Lcom/sigmob/windad/WindAds;-><init>()V

    sput-object v1, Lcom/sigmob/windad/WindAds;->a:Lcom/sigmob/windad/WindAds;

    sget-object v1, Lcom/sigmob/windad/WindAds;->a:Lcom/sigmob/windad/WindAds;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/sigmob/windad/WindAds;->setDebugEnable(Z)V

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/sigmob/windad/WindAds;->a:Lcom/sigmob/windad/WindAds;

    return-object v0
.end method


# virtual methods
.method public debugDeviceID()V
    .locals 6

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x1

    if-nez v2, :cond_0

    const-string v2, "debug device Type: IMEI,  ID => %s"

    new-array v4, v3, [Ljava/lang/Object;

    aput-object v1, v4, v0

    invoke-static {v2, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move v1, v3

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    :try_start_1
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getAdvertisingId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    const-string v4, "debug device Type: gaid, ID => %s"

    new-array v5, v3, [Ljava/lang/Object;

    aput-object v2, v5, v0

    invoke-static {v4, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    move v1, v3

    :cond_1
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/sdk/common/ClientMetadata;->getOAID()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    const-string v4, "debug device Type oaid, ID => %s"

    new-array v5, v3, [Ljava/lang/Object;

    aput-object v2, v5, v0

    invoke-static {v4, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_0
    move v1, v0

    :catchall_1
    :cond_2
    move v3, v1

    :goto_1
    if-nez v3, :cond_3

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "can\'t find any can be used debug valid Device Type"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public getAgeRestrictedStatus()I
    .locals 1

    iget v0, p0, Lcom/sigmob/windad/WindAds;->j:I

    return v0
.end method

.method public getAppId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAds;->c:Lcom/sigmob/windad/WindAdOptions;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdOptions;->getAppId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getAppKey()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAds;->c:Lcom/sigmob/windad/WindAdOptions;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdOptions;->getAppKey()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getHandler()Landroid/os/Handler;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/windad/WindAds;->e:Landroid/os/Handler;

    if-nez v0, :cond_0

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/sigmob/windad/WindAds;->e:Landroid/os/Handler;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/windad/WindAds;->e:Landroid/os/Handler;

    return-object v0
.end method

.method public getOptions()Lcom/sigmob/windad/WindAdOptions;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAds;->c:Lcom/sigmob/windad/WindAdOptions;

    return-object v0
.end method

.method public getSDKToken()Ljava/lang/String;
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/windad/WindAds;->b:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->getInstance()Lcom/sigmob/sdk/Sigmob;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/Sigmob;->getSDKToken()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getUserAge()I
    .locals 1

    iget v0, p0, Lcom/sigmob/windad/WindAds;->k:I

    return v0
.end method

.method public getUserGDPRConsentStatus()I
    .locals 1

    iget v0, p0, Lcom/sigmob/windad/WindAds;->h:I

    return v0
.end method

.method public getWindUid()Ljava/lang/String;
    .locals 1

    :try_start_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getUid()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, "Please initialize the SDK properly first"

    return-object v0
.end method

.method public isAdult()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/windad/WindAds;->g:Z

    return v0
.end method

.method public isDebugEnable()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/windad/WindAds;->d:Z

    return v0
.end method

.method public isInit()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/windad/WindAds;->b:Z

    return v0
.end method

.method public isPersonalizedAdvertisingOn()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/windad/WindAds;->i:Z

    return v0
.end method

.method public setAdult(Z)V
    .locals 2

    iput-boolean p1, p0, Lcom/sigmob/windad/WindAds;->g:Z

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Windads -> setAdult "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/sigmob/windad/WindAds;->b:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/base/c;->a(ZZ)V

    :cond_0
    return-void
.end method

.method public setDebugEnable(Z)V
    .locals 1

    iput-boolean p1, p0, Lcom/sigmob/windad/WindAds;->d:Z

    sget-object v0, Lcom/sigmob/sdk/base/h;->e:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    if-eqz p1, :cond_1

    sget-object p1, Ljava/util/logging/Level;->FINE:Ljava/util/logging/Level;

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_1

    sget-object p1, Ljava/util/logging/Level;->INFO:Ljava/util/logging/Level;

    goto :goto_0

    :cond_1
    sget-object p1, Ljava/util/logging/Level;->SEVERE:Ljava/util/logging/Level;

    :goto_0
    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->setSdkHandlerLevel(Ljava/util/logging/Level;)V

    return-void
.end method

.method public setIsAgeRestrictedUser(I)V
    .locals 2

    iput p1, p0, Lcom/sigmob/windad/WindAds;->j:I

    iget-boolean v0, p0, Lcom/sigmob/windad/WindAds;->b:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/base/c;->b(IZ)V

    :cond_0
    return-void
.end method

.method public setOAIDCertFileName(Ljava/lang/String;)V
    .locals 0

    invoke-static {p1}, Lcom/czhj/sdk/common/ClientMetadata;->setOaidCertFileName(Ljava/lang/String;)V

    return-void
.end method

.method public setPersonalizedAdvertisingOn(Z)V
    .locals 2

    iput-boolean p1, p0, Lcom/sigmob/windad/WindAds;->i:Z

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Windads -> setPersonalized "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/sigmob/windad/WindAds;->b:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/base/c;->b(ZZ)V

    :cond_0
    return-void
.end method

.method public setUserAge(I)V
    .locals 2

    iput p1, p0, Lcom/sigmob/windad/WindAds;->k:I

    iget-boolean v0, p0, Lcom/sigmob/windad/WindAds;->b:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/base/c;->a(IZ)V

    :cond_0
    return-void
.end method

.method public setUserGDPRConsentStatus(I)V
    .locals 2

    iput p1, p0, Lcom/sigmob/windad/WindAds;->h:I

    iget-boolean v0, p0, Lcom/sigmob/windad/WindAds;->b:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/base/c;->c(IZ)V

    :cond_0
    return-void
.end method

.method public startWithOptions(Landroid/content/Context;Lcom/sigmob/windad/WindAdOptions;)Z
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, p1, p2, v0}, Lcom/sigmob/windad/WindAds;->startWithOptions(Landroid/content/Context;Lcom/sigmob/windad/WindAdOptions;Lcom/sigmob/windad/OnInitializationListener;)Z

    move-result p1

    return p1
.end method

.method public startWithOptions(Landroid/content/Context;Lcom/sigmob/windad/WindAdOptions;Lcom/sigmob/windad/OnInitializationListener;)Z
    .locals 3

    iput-object p3, p0, Lcom/sigmob/windad/WindAds;->f:Lcom/sigmob/windad/OnInitializationListener;

    iget-boolean p3, p0, Lcom/sigmob/windad/WindAds;->b:Z

    const/4 v0, 0x1

    if-nez p3, :cond_4

    :try_start_0
    sget p3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x12

    const/4 v2, 0x0

    if-ge p3, v1, :cond_0

    const-string p1, "Wind SDK Only Support Android API 18+"

    invoke-direct {p0, p1}, Lcom/sigmob/windad/WindAds;->a(Ljava/lang/String;)V

    return v2

    :cond_0
    if-nez p1, :cond_1

    const-string p1, "context is null "

    invoke-direct {p0, p1}, Lcom/sigmob/windad/WindAds;->a(Ljava/lang/String;)V

    return v2

    :cond_1
    if-nez p2, :cond_2

    const-string p1, "WindAdOptions is null "

    invoke-direct {p0, p1}, Lcom/sigmob/windad/WindAds;->a(Ljava/lang/String;)V

    return v2

    :cond_2
    invoke-virtual {p2}, Lcom/sigmob/windad/WindAdOptions;->getAppId()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_3

    const-string p1, "appId is empty "

    invoke-direct {p0, p1}, Lcom/sigmob/windad/WindAds;->a(Ljava/lang/String;)V

    return v2

    :cond_3
    iput-object p2, p0, Lcom/sigmob/windad/WindAds;->c:Lcom/sigmob/windad/WindAdOptions;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/sigmob/sdk/b;->a(Landroid/content/Context;)V

    invoke-direct {p0}, Lcom/sigmob/windad/WindAds;->d()V

    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->getInstance()Lcom/sigmob/sdk/Sigmob;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/Sigmob;->init()V

    invoke-static {}, Lcom/sigmob/sdk/b;->a()V

    iput-boolean v0, p0, Lcom/sigmob/windad/WindAds;->b:Z

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "init appId: "

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/sigmob/windad/WindAdOptions;->getAppId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "startWithOptions fail"

    invoke-static {p2, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :try_start_1
    const-string p2, "init"

    sget-object p3, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INIT_FAIL:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p3}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result p3

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p3, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_0

    :catchall_1
    move-exception p1

    const-string p2, "startWithOptions"

    invoke-static {p2, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_0

    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "already init appId: "

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/sigmob/windad/WindAdOptions;->getAppId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    :goto_0
    invoke-direct {p0}, Lcom/sigmob/windad/WindAds;->a()V

    return v0
.end method
