.class public Lcom/reyun/tracking/sdk/Tracking;
.super Ljava/lang/Object;


# static fields
.field private static final HEART_BEAT_TIME:I

.field public static final KEY_ACCOUNT:Ljava/lang/String; = "account"

.field public static final KEY_INSTALL_SEND_SUCCESS_TIME:Ljava/lang/String; = "key_install_send_success_time"

.field public static final KEY_INTERVAL:Ljava/lang/String; = "interval"

.field public static final KEY_TIME_TRACK:Ljava/lang/String; = "time_track"

.field public static SEND_DATA_WITH_HEARTBEAT:Z = false

.field private static final STR_UNKNOWN:Ljava/lang/String; = "unknown"

.field public static final TAG:Ljava/lang/String; = "TrackingIO"

.field private static final VALUE_FROM:Ljava/lang/String; = "tkio"

.field public static final XML_INSTALL:Ljava/lang/String; = "tracking_install"

.field public static final XML_INTERVAL:Ljava/lang/String; = "tracking_interval"

.field public static final XML_LOGIN:Ljava/lang/String; = "tracking_login"

.field public static final XML_PKG_INFO:Ljava/lang/String; = "tracking_pkgInfo"

.field private static _antiCheat:Z = false

.field private static _installParams:Ljava/util/Map; = null

.field private static _oid:Ljava/lang/String; = null

.field private static _startupParams:Ljava/util/Map; = null

.field private static attributionQueryListener:Lcom/reyun/tracking/utils/IAttributionQueryListener; = null

.field private static dataShareRunnable:Ljava/lang/Runnable; = null

.field private static deepLinkListener:Lcom/reyun/tracking/utils/IDeepLinkListener; = null

.field private static isInstallSent:Z = false

.field private static isPreInit:Z = false

.field private static isSDKInited:Z = false

.field private static volatile isSdkExit:Z = false

.field private static mApplication:Landroid/app/Application; = null

.field private static m_appKey:Ljava/lang/String; = null

.field private static m_channelid:Ljava/lang/String; = "_default_"

.field private static m_context:Landroid/content/Context; = null

.field private static myTimehandler:Landroid/os/Handler; = null

.field private static mydbhandler:Landroid/os/Handler; = null

.field private static onDataUploadListener:Lcom/reyun/tracking/sdk/p; = null

.field private static onSDKInitCompleteListener:Lcom/reyun/tracking/sdk/o; = null

.field private static sCyid:Ljava/lang/String; = null

.field private static sInstallParams:Ljava/util/Map; = null

.field private static uploadMac:Z = true


# direct methods
.method static constructor <clinit>()V
    .locals 2

    sget-boolean v0, Lcom/reyun/tracking/a/i;->a:Z

    if-eqz v0, :cond_0

    const/16 v0, 0x2710

    goto :goto_0

    :cond_0
    const/16 v0, 0xbb8

    :goto_0
    sput v0, Lcom/reyun/tracking/sdk/Tracking;->HEART_BEAT_TIME:I

    const/4 v0, 0x0

    sput-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->isSDKInited:Z

    new-instance v0, Lcom/reyun/tracking/sdk/d;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/reyun/tracking/sdk/d;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/reyun/tracking/sdk/Tracking;->myTimehandler:Landroid/os/Handler;

    new-instance v0, Lcom/reyun/tracking/sdk/i;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/reyun/tracking/sdk/i;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/reyun/tracking/sdk/Tracking;->mydbhandler:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Landroid/content/Context;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    return-object v0
.end method

.method static synthetic access$002(Landroid/content/Context;)Landroid/content/Context;
    .locals 0

    sput-object p0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic access$100()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1000()Landroid/os/Handler;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->myTimehandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$1100()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->_oid:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1302(Landroid/app/Application;)Landroid/app/Application;
    .locals 0

    sput-object p0, Lcom/reyun/tracking/sdk/Tracking;->mApplication:Landroid/app/Application;

    return-object p0
.end method

.method static synthetic access$1400(I)I
    .locals 0

    invoke-static {p0}, Lcom/reyun/tracking/sdk/Tracking;->sendFailureRecord(I)I

    move-result p0

    return p0
.end method

.method static synthetic access$1500()I
    .locals 1

    sget v0, Lcom/reyun/tracking/sdk/Tracking;->HEART_BEAT_TIME:I

    return v0
.end method

.method static synthetic access$200()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$300()Ljava/util/Map;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->sInstallParams:Ljava/util/Map;

    return-object v0
.end method

.method static synthetic access$400(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;ILjava/util/Map;)V
    .locals 0

    invoke-static/range {p0 .. p5}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;ILjava/util/Map;)V

    return-void
.end method

.method static synthetic access$502(Z)Z
    .locals 0

    sput-boolean p0, Lcom/reyun/tracking/sdk/Tracking;->isInstallSent:Z

    return p0
.end method

.method static synthetic access$600()Ljava/util/Map;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->_startupParams:Ljava/util/Map;

    return-object v0
.end method

.method static synthetic access$700()Ljava/util/Map;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->_installParams:Ljava/util/Map;

    return-object v0
.end method

.method static synthetic access$800()Z
    .locals 1

    sget-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->_antiCheat:Z

    return v0
.end method

.method static synthetic access$900(Ljava/util/Map;Ljava/util/Map;Z)V
    .locals 0

    invoke-static {p0, p1, p2}, Lcom/reyun/tracking/sdk/Tracking;->afterInit(Ljava/util/Map;Ljava/util/Map;Z)V

    return-void
.end method

.method public static activation()V
    .locals 3

    sget-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->isSDKInited:Z

    if-nez v0, :cond_0

    const-string v0, "TrackingIO"

    const-string v1, "\u5fc5\u987b\u5148\u8c03\u7528\u521d\u59cb\u5316\u65b9\u6cd5"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    new-instance v0, Lcom/reyun/tracking/sdk/e;

    invoke-direct {v0}, Lcom/reyun/tracking/sdk/e;-><init>()V

    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object v1

    new-instance v2, Lcom/reyun/tracking/sdk/m;

    invoke-direct {v2, v0}, Lcom/reyun/tracking/sdk/m;-><init>(Lcom/reyun/tracking/sdk/o;)V

    invoke-virtual {v1, v2}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static addRecordToDbase(Ljava/lang/String;Lorg/json/JSONObject;I)J
    .locals 3

    const-string v0, "TrackingIO"

    :try_start_0
    invoke-static {p1}, Lcom/reyun/tracking/sdk/Tracking;->jsonObjToByteArray(Lorg/json/JSONObject;)[B

    move-result-object p1

    new-instance v1, Landroid/content/ContentValues;

    invoke-direct {v1}, Landroid/content/ContentValues;-><init>()V

    const-string v2, "what"

    invoke-virtual {v1, v2, p0}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string p0, "value"

    invoke-virtual {v1, p0, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;[B)V

    const-string p0, "priority"

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v1, p0, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    sget-object p0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    invoke-static {p0, v0}, Lcom/reyun/tracking/utils/i;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/reyun/tracking/utils/i;

    move-result-object p0

    invoke-virtual {p0, v1}, Lcom/reyun/tracking/utils/i;->a(Landroid/content/ContentValues;)J

    move-result-wide p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-wide p0

    :catchall_0
    move-exception p0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "Exception in addRecordToDbase:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/reyun/tracking/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-wide/16 p0, -0x1

    return-wide p0
.end method

.method private static afterInit(Ljava/util/Map;Ljava/util/Map;Z)V
    .locals 2

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v1, "TrackingIO"

    if-nez v0, :cond_0

    const-string p0, "context destoryed!"

    invoke-static {v1, p0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->onSDKInitCompleteListener:Lcom/reyun/tracking/sdk/o;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/reyun/tracking/sdk/o;->a()V

    :cond_1
    sput-object p1, Lcom/reyun/tracking/sdk/Tracking;->sInstallParams:Ljava/util/Map;

    const-string p1, "afterInit"

    invoke-static {v1, p1}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p1, Lcom/reyun/tracking/sdk/f;

    invoke-direct {p1, p0}, Lcom/reyun/tracking/sdk/f;-><init>(Ljava/util/Map;)V

    sget-object p0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v0, "gettime"

    const-string v1, "receive/gettime"

    invoke-static {p0, v0, v1, p1}, Lcom/reyun/tracking/utils/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/reyun/tracking/utils/n;)V

    if-eqz p2, :cond_2

    sget-object p0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->p(Landroid/content/Context;)V

    sget-object p0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->q(Landroid/content/Context;)V

    :cond_2
    return-void
.end method

.method public static exitSdk()V
    .locals 4

    const/4 v0, 0x0

    sput-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->isSDKInited:Z

    invoke-static {}, Lcom/reyun/tracking/a/a;->e()V

    invoke-static {}, Lcom/reyun/tracking/a/a;->d()V

    invoke-static {}, Lcom/reyun/tracking/utils/p;->b()V

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->myTimehandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    :cond_0
    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object v0

    new-instance v1, Lcom/reyun/tracking/sdk/h;

    invoke-direct {v1}, Lcom/reyun/tracking/sdk/h;-><init>()V

    const-wide/16 v2, 0x1f4

    invoke-virtual {v0, v1, v2, v3}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;J)V

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v1, "TrackingIO"

    invoke-static {v0, v1}, Lcom/reyun/tracking/utils/i;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/reyun/tracking/utils/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/reyun/tracking/utils/i;->a()V

    return-void
.end method

.method public static getAppId()Ljava/lang/String;
    .locals 2

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    if-eqz v0, :cond_1

    const-string v1, ""

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    return-object v0

    :cond_1
    :goto_0
    const-string v0, "unknown"

    return-object v0
.end method

.method public static getAttributionQueryListener()Lcom/reyun/tracking/utils/IAttributionQueryListener;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->attributionQueryListener:Lcom/reyun/tracking/utils/IAttributionQueryListener;

    return-object v0
.end method

.method public static getChannelId()Ljava/lang/String;
    .locals 2

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    if-eqz v0, :cond_1

    const-string v1, ""

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    return-object v0

    :cond_1
    :goto_0
    const-string v0, "unknown"

    return-object v0
.end method

.method static getContext()Landroid/content/Context;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    return-object v0
.end method

.method public static getDataShareRunnable()Ljava/lang/Runnable;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->dataShareRunnable:Ljava/lang/Runnable;

    return-object v0
.end method

.method public static getDeepLinkListener()Lcom/reyun/tracking/utils/IDeepLinkListener;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->deepLinkListener:Lcom/reyun/tracking/utils/IDeepLinkListener;

    return-object v0
.end method

.method public static getDeviceId()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    if-nez v0, :cond_0

    const-string v0, "unknown"

    return-object v0

    :cond_0
    invoke-static {v0}, Lcom/reyun/tracking/a/a;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getImei2()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    if-nez v0, :cond_0

    const-string v0, "unknown"

    return-object v0

    :cond_0
    invoke-static {v0}, Lcom/reyun/tracking/a/a;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getMeid()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    if-nez v0, :cond_0

    const-string v0, "unknown"

    return-object v0

    :cond_0
    invoke-static {v0}, Lcom/reyun/tracking/a/a;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->onDataUploadListener:Lcom/reyun/tracking/sdk/p;

    return-object v0
.end method

.method public static getUploadMac()Z
    .locals 1

    sget-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->uploadMac:Z

    return v0
.end method

.method public static getsCyid()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->sCyid:Ljava/lang/String;

    return-object v0
.end method

.method public static initWithKeyAndChannelId(Landroid/app/Application;Lcom/reyun/tracking/sdk/InitParameters;)V
    .locals 7

    iget-object v1, p1, Lcom/reyun/tracking/sdk/InitParameters;->appKey:Ljava/lang/String;

    iget-object v2, p1, Lcom/reyun/tracking/sdk/InitParameters;->channelId:Ljava/lang/String;

    iget-object v3, p1, Lcom/reyun/tracking/sdk/InitParameters;->startupParams:Ljava/util/Map;

    iget-object v4, p1, Lcom/reyun/tracking/sdk/InitParameters;->installParams:Ljava/util/Map;

    iget-object v5, p1, Lcom/reyun/tracking/sdk/InitParameters;->cyid:Ljava/lang/String;

    iget-boolean v6, p1, Lcom/reyun/tracking/sdk/InitParameters;->antiCheat:Z

    move-object v0, p0

    invoke-static/range {v0 .. v6}, Lcom/reyun/tracking/sdk/Tracking;->initWithKeyAndChannelId(Landroid/app/Application;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;Ljava/lang/String;Z)V

    return-void
.end method

.method public static initWithKeyAndChannelId(Landroid/app/Application;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    const/4 v0, 0x0

    move-object v5, v0

    check-cast v5, Ljava/util/Map;

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, v5

    invoke-static/range {v1 .. v7}, Lcom/reyun/tracking/sdk/Tracking;->initWithKeyAndChannelId(Landroid/app/Application;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;Ljava/lang/String;Z)V

    return-void
.end method

.method public static initWithKeyAndChannelId(Landroid/app/Application;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 8

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object v4

    new-instance p3, Lorg/json/JSONObject;

    invoke-direct {p3, p4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p3}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object v5

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v6, p5

    move v7, p6

    invoke-static/range {v1 .. v7}, Lcom/reyun/tracking/sdk/Tracking;->initWithKeyAndChannelId(Landroid/app/Application;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;Ljava/lang/String;Z)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static initWithKeyAndChannelId(Landroid/app/Application;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;Ljava/lang/String;Z)V
    .locals 2

    sget-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    const-string v1, "TrackingIO"

    if-nez v0, :cond_0

    const-string p0, "initWithKeyAndChannelId Error:preInit init failed! Did you call the method \'preInit\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    sput-object p1, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    invoke-static {p1}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_1

    const-string p0, "Your appKey is incorrect! init failed!"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    const-string p1, "unknown"

    const-string v0, "initWithKeyAndChannelId : channelid is NULL"

    invoke-static {p2, p1, v0}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    sput-object p2, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    const-string p2, "appContext can not be null!"

    if-eqz p0, :cond_8

    invoke-virtual {p0}, Landroid/app/Application;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_2

    goto :goto_0

    :cond_2
    sput-object p0, Lcom/reyun/tracking/sdk/Tracking;->mApplication:Landroid/app/Application;

    invoke-virtual {p0}, Landroid/app/Application;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    if-nez p0, :cond_3

    invoke-static {v1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_3
    sput-object p5, Lcom/reyun/tracking/sdk/Tracking;->sCyid:Ljava/lang/String;

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sget-object p2, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result p5

    invoke-static {p2, p5}, Lcom/reyun/tracking/a/a;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object p2

    if-nez p2, :cond_4

    const-string p0, "processName is null! init FAILED!"

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_4
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_5

    const-string p0, "pkgName is unknown! init FAILED!"

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_5
    invoke-virtual {p0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_7

    const-string p0, "Initial sdk successful!"

    invoke-static {v1, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    sget-boolean p0, Lcom/reyun/tracking/sdk/Tracking;->isSDKInited:Z

    if-eqz p0, :cond_6

    return-void

    :cond_6
    const/4 p0, 0x1

    sput-boolean p0, Lcom/reyun/tracking/sdk/Tracking;->isSDKInited:Z

    sput-object p3, Lcom/reyun/tracking/sdk/Tracking;->_startupParams:Ljava/util/Map;

    sput-object p4, Lcom/reyun/tracking/sdk/Tracking;->_installParams:Ljava/util/Map;

    sput-boolean p6, Lcom/reyun/tracking/sdk/Tracking;->_antiCheat:Z

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->activation()V

    return-void

    :cond_7
    const-string p0, "Only main process can init sdk"

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_8
    :goto_0
    invoke-static {v1, p2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private static jsonObjToByteArray(Lorg/json/JSONObject;)[B
    .locals 1

    if-eqz p0, :cond_0

    :try_start_0
    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "utf-8"

    invoke-virtual {p0, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_0
    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method private static jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;
    .locals 4

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {p0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    :try_start_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    return-object v0
.end method

.method public static mapApi2Byte(Ljava/lang/String;)B
    .locals 1

    const-string v0, "receive/batch"

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const-string v0, "receive/tkio/startup"

    if-ne p0, v0, :cond_1

    const/4 p0, 0x3

    return p0

    :cond_1
    const-string v0, "receive/tkio/register"

    if-ne p0, v0, :cond_2

    const/4 p0, 0x4

    return p0

    :cond_2
    const-string v0, "receive/tkio/install"

    if-ne p0, v0, :cond_3

    const/4 p0, 0x2

    return p0

    :cond_3
    const-string v0, "receive/tkio/loggedin"

    if-ne p0, v0, :cond_4

    const/4 p0, 0x5

    return p0

    :cond_4
    const-string v0, "receive/tkio/payment"

    if-ne p0, v0, :cond_5

    const/4 p0, 0x6

    return p0

    :cond_5
    const-string v0, "receive/tkio/event"

    if-ne p0, v0, :cond_6

    const/4 p0, 0x7

    return p0

    :cond_6
    const-string v0, "receive/gettime"

    if-ne p0, v0, :cond_7

    const/4 p0, 0x0

    return p0

    :cond_7
    const-string v0, "receive/pkginfo"

    if-ne p0, v0, :cond_8

    const/16 p0, 0x11

    return p0

    :cond_8
    const-string v0, "dpquery"

    if-ne p0, v0, :cond_9

    const/16 p0, 0xd

    return p0

    :cond_9
    const-string v0, "receive/tkio/appduration"

    if-ne p0, v0, :cond_a

    const/16 p0, 0x10

    return p0

    :cond_a
    const-string v0, "receive/tkio/pageduration"

    if-ne p0, v0, :cond_b

    const/16 p0, 0xe

    return p0

    :cond_b
    const-string v0, "receive/tkio/adshow"

    if-ne p0, v0, :cond_c

    const/16 p0, 0xa

    return p0

    :cond_c
    const-string v0, "receive/tkio/adclick"

    if-ne p0, v0, :cond_d

    const/16 p0, 0xb

    return p0

    :cond_d
    const-string v0, "receive/tkio/sdklog"

    if-ne p0, v0, :cond_e

    const/16 p0, 0x15

    return p0

    :cond_e
    const/4 p0, -0x1

    return p0
.end method

.method public static preInit(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    invoke-static {p1}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;)Z

    move-result p0

    const-string p1, "TrackingIO"

    if-nez p0, :cond_0

    const-string p0, "Your appKey is incorrect! preInit failed!"

    invoke-static {p1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    const/4 p0, 0x1

    sput-boolean p0, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    const-string p0, "preInit init success"

    invoke-static {p1, p0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static queryRecordFromDatabase(I)Lcom/reyun/tracking/utils/k;
    .locals 2

    :try_start_0
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v1, "TrackingIO"

    invoke-static {v0, v1}, Lcom/reyun/tracking/utils/i;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/reyun/tracking/utils/i;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/reyun/tracking/utils/i;->a(I)Lcom/reyun/tracking/utils/k;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static removeDataShareRunnable()V
    .locals 1

    const/4 v0, 0x0

    sput-object v0, Lcom/reyun/tracking/sdk/Tracking;->dataShareRunnable:Ljava/lang/Runnable;

    return-void
.end method

.method public static sendFailedRecord()V
    .locals 2

    new-instance v0, Lcom/reyun/tracking/sdk/k;

    invoke-direct {v0}, Lcom/reyun/tracking/sdk/k;-><init>()V

    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/reyun/tracking/sdk/a;->b(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static sendFailureRecord(I)I
    .locals 6

    const-string v0, "TrackingIO"

    const/4 v1, 0x0

    :try_start_0
    const-string v2, "sendFailureRecord"

    invoke-static {v0, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p0}, Lcom/reyun/tracking/sdk/Tracking;->queryRecordFromDatabase(I)Lcom/reyun/tracking/utils/k;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v3, v2, Lcom/reyun/tracking/utils/k;->a:Ljava/util/ArrayList;

    if-eqz v3, :cond_1

    iget-object v3, v2, Lcom/reyun/tracking/utils/k;->a:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-nez v3, :cond_0

    goto :goto_0

    :cond_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "sendFailureRecord :"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v2, Lcom/reyun/tracking/utils/k;->a:Ljava/util/ArrayList;

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v3, Lcom/reyun/tracking/sdk/Tracking;->mydbhandler:Landroid/os/Handler;

    sget-object v4, Lcom/reyun/tracking/sdk/Tracking;->mydbhandler:Landroid/os/Handler;

    const/4 v5, 0x1

    invoke-virtual {v4, v5, p0, v1, v2}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object p0

    invoke-virtual {v3, p0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    iget-object p0, v2, Lcom/reyun/tracking/utils/k;->a:Ljava/util/ArrayList;

    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result p0

    return p0

    :cond_1
    :goto_0
    const-string p0, "sendFailureRecord-nocache"

    invoke-static {v0, p0}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v1

    :catchall_0
    move-exception p0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sendFailureRecord!"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v1
.end method

.method private static sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x1

    invoke-static {p0, p1, p2, p3, v0}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;I)V

    return-void
.end method

.method private static sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;I)V
    .locals 6

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move v4, p4

    invoke-static/range {v0 .. v5}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;ILjava/util/Map;)V

    return-void
.end method

.method private static sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;ILjava/util/Map;)V
    .locals 10

    const-string v0, "install"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-nez v0, :cond_1

    sget-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->isInstallSent:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    sget-object v4, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    invoke-static {v4}, Lcom/reyun/tracking/utils/b;->a(Landroid/content/Context;)Z

    move-result v4

    if-eqz v4, :cond_2

    sget-boolean v4, Lcom/reyun/tracking/sdk/Tracking;->SEND_DATA_WITH_HEARTBEAT:Z

    if-nez v4, :cond_2

    if-eqz v0, :cond_2

    const/4 v4, 0x1

    goto :goto_2

    :cond_2
    const/4 v4, 0x0

    :goto_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sendOrSave:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, ","

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v0, " what:"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " what2:"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " isInstallSent:"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->isInstallSent:Z

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "TrackingIO"

    invoke-static {v2, v0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object v8

    new-instance v9, Lcom/reyun/tracking/sdk/l;

    move-object v0, v9

    move-object v1, p0

    move-object v2, p2

    move-object v3, p1

    move-object v5, p3

    move v6, p4

    move-object v7, p5

    invoke-direct/range {v0 .. v7}, Lcom/reyun/tracking/sdk/l;-><init>(Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;ZLjava/lang/String;ILjava/util/Map;)V

    invoke-virtual {v8, v9}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static setAdClick(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    check-cast v0, Ljava/util/Map;

    invoke-static {p0, p1, v0}, Lcom/reyun/tracking/sdk/Tracking;->setAdClick(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static setAdClick(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object p2

    invoke-static {p0, p1, p2}, Lcom/reyun/tracking/sdk/Tracking;->setAdClick(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setAdClick(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 9

    const-string v0, "adclick"

    sget-boolean v1, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    const-string v2, "TrackingIO"

    if-nez v1, :cond_0

    const-string p0, "setAdClick Error:preInit init failed! Did you call the method \'preInit\'?"

    invoke-static {v2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    sget-object v1, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    if-nez v1, :cond_1

    const-string p0, "setAdClick Error: Null context! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    sget-object v1, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    invoke-static {v1}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string p0, "setAdClick Error: Invalid appKey! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_2
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    const-string p0, "setAdClick Error: adPlatform cannot be NULL"

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_3
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    const-string p0, "setAdClick Error: adId cannot be NULL"

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_4
    :try_start_0
    invoke-static {p2}, Lcom/reyun/tracking/a/a;->b(Ljava/util/Map;)V

    sget-object v3, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    sget-object v4, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    const-string v5, "adclick"

    sget-object v1, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v2, "tracking_login"

    const-string v6, "account"

    const-string v7, "unknown"

    invoke-static {v1, v2, v6, v7}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    sget-object v7, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    const/4 v8, 0x0

    invoke-static/range {v3 .. v8}, Lcom/reyun/tracking/a/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "context"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "_adPlatform"

    invoke-virtual {v2, v3, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "_adId"

    invoke-virtual {v2, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    if-eqz p2, :cond_5

    invoke-static {p2, v1}, Lcom/reyun/tracking/a/a;->a(Ljava/util/Map;Lorg/json/JSONObject;)V

    :cond_5
    const-string p0, "receive/tkio/adclick"

    invoke-static {v0, v0, v1, p0}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static setAdShow(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    check-cast v0, Ljava/util/Map;

    invoke-static {p0, p1, p2, v0}, Lcom/reyun/tracking/sdk/Tracking;->setAdShow(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static setAdShow(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object p3

    invoke-static {p0, p1, p2, p3}, Lcom/reyun/tracking/sdk/Tracking;->setAdShow(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setAdShow(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 9

    const-string v0, "adshow"

    sget-boolean v1, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    const-string v2, "TrackingIO"

    if-nez v1, :cond_0

    const-string p0, "setAdShow Error preInit init failed :Did you call the method \'preInit\'?"

    invoke-static {v2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    sget-object v1, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    if-nez v1, :cond_1

    const-string p0, "setAdShow Error: Null context! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    sget-object v1, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    invoke-static {v1}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string p0, "setAdShow Error: Invalid appKey! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_2
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    const-string p0, "setAdShow Error: adPlatform cannot be NULL"

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_3
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    const-string p0, "setAdShow Error: adId cannot be NULL"

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_4
    :try_start_0
    invoke-static {p3}, Lcom/reyun/tracking/a/a;->b(Ljava/util/Map;)V

    sget-object v3, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    sget-object v4, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    const-string v5, "adshow"

    sget-object v1, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v2, "tracking_login"

    const-string v6, "account"

    const-string v7, "unknown"

    invoke-static {v1, v2, v6, v7}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    sget-object v7, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    const/4 v8, 0x0

    invoke-static/range {v3 .. v8}, Lcom/reyun/tracking/a/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "context"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "_adPlatform"

    invoke-virtual {v2, v3, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "_adId"

    invoke-virtual {v2, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "_fill"

    invoke-virtual {v2, p0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    if-eqz p3, :cond_5

    invoke-static {p3, v1}, Lcom/reyun/tracking/a/a;->a(Ljava/util/Map;Lorg/json/JSONObject;)V

    :cond_5
    const-string p0, "receive/tkio/adshow"

    invoke-static {v0, v0, v1, p0}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static setAppDuration(J)V
    .locals 1

    const/4 v0, 0x0

    check-cast v0, Ljava/util/Map;

    invoke-static {p0, p1, v0}, Lcom/reyun/tracking/sdk/Tracking;->setAppDuration(JLjava/util/Map;)V

    return-void
.end method

.method public static setAppDuration(JLjava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object p2

    invoke-static {p0, p1, p2}, Lcom/reyun/tracking/sdk/Tracking;->setAppDuration(JLjava/util/Map;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setAppDuration(JLjava/util/Map;)V
    .locals 8

    const-string v0, "appduration"

    const-string v1, "unknown"

    :try_start_0
    sget-boolean v2, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    if-nez v2, :cond_0

    const-string p0, "TrackingIO"

    const-string p1, "setAppDuration Error:preInit init failed! Did you call the method \'preInit\'?"

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    invoke-static {p2}, Lcom/reyun/tracking/a/a;->b(Ljava/util/Map;)V

    sget-object v2, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    sget-object v3, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    const-string v4, "appduration"

    sget-object v5, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v6, "tracking_login"

    const-string v7, "account"

    invoke-static {v5, v6, v7, v1}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    sget-object v6, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    const/4 v7, 0x0

    invoke-static/range {v2 .. v7}, Lcom/reyun/tracking/a/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "context"

    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    const-string v4, "_deviceid"

    invoke-virtual {v3, v4, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v4, "_create_timestamp"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v3, v4, v5, v6}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v4

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/reyun/tracking/a/a;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v4, "_appduration"

    const-wide/16 v5, 0x3e8

    div-long/2addr p0, v5

    invoke-virtual {v3, v4, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string p0, "_sessionid"

    invoke-virtual {v3, p0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    if-eqz p2, :cond_1

    invoke-static {p2, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/util/Map;Lorg/json/JSONObject;)V

    :cond_1
    const-string p0, "receive/tkio/appduration"

    invoke-static {v0, v0, v2, p0}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static setAttributionQueryListener(Lcom/reyun/tracking/utils/IAttributionQueryListener;)V
    .locals 0

    sput-object p0, Lcom/reyun/tracking/sdk/Tracking;->attributionQueryListener:Lcom/reyun/tracking/utils/IAttributionQueryListener;

    return-void
.end method

.method public static setDataShare(Z)V
    .locals 1

    new-instance v0, Lcom/reyun/tracking/sdk/g;

    invoke-direct {v0, p0}, Lcom/reyun/tracking/sdk/g;-><init>(Z)V

    sput-object v0, Lcom/reyun/tracking/sdk/Tracking;->dataShareRunnable:Ljava/lang/Runnable;

    return-void
.end method

.method public static setDebugMode(Z)V
    .locals 0

    sput-boolean p0, Lcom/reyun/tracking/a/i;->a:Z

    return-void
.end method

.method public static setDeepLinkListener(Lcom/reyun/tracking/utils/IDeepLinkListener;)V
    .locals 0

    sput-object p0, Lcom/reyun/tracking/sdk/Tracking;->deepLinkListener:Lcom/reyun/tracking/utils/IDeepLinkListener;

    return-void
.end method

.method public static setEncrypt(Z)V
    .locals 0

    sput-boolean p0, Lcom/reyun/tracking/a/i;->d:Z

    return-void
.end method

.method public static setEvent(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    check-cast v0, Ljava/util/Map;

    invoke-static {p0, v0}, Lcom/reyun/tracking/sdk/Tracking;->setEvent(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static setEvent(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/reyun/tracking/sdk/Tracking;->setEvent(Ljava/lang/String;Ljava/util/Map;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setEvent(Ljava/lang/String;Ljava/util/Map;)V
    .locals 10

    const-string v0, "userEvent"

    sget-boolean v1, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    const-string v2, "TrackingIO"

    if-nez v1, :cond_0

    const-string p0, "setEvent Error:preInit init failed! Did you call the method \'preInit\'?"

    invoke-static {v2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    sget-object v1, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    if-nez v1, :cond_1

    return-void

    :cond_1
    sget-object v1, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    invoke-static {v1}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string p0, "setEvent Error: Invalid appKey! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_2
    invoke-static {p1}, Lcom/reyun/tracking/a/a;->a(Ljava/util/Map;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_3

    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "setEvent Error: Invalid key of map "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_3
    const-string v1, "unknown"

    const-string v3, "\u8c03\u7528setEvent\u65f6 eventName \u4e3a\u7a7a"

    invoke-static {p0, v1, v3}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_4

    const-string p0, "setEvent Error: param eventName cannot be NULL"

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_4
    invoke-static {p1}, Lcom/reyun/tracking/a/a;->b(Ljava/util/Map;)V

    const-string p0, "electricityDataEvent"

    invoke-virtual {p0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_8

    const-string p0, "gyroDataEvent"

    invoke-virtual {p0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_8

    const-string p0, "paymentStart"

    invoke-virtual {p0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_8

    const-string p0, "exception"

    invoke-virtual {p0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_8

    const-string p0, "order"

    invoke-virtual {p0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_8

    const-string p0, "invoke"

    invoke-virtual {p0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_5

    goto :goto_0

    :cond_5
    const-string p0, "^event_([1-9]|1[0-9]|2[0-9]|30)$"

    invoke-virtual {v6, p0}, Ljava/lang/String;->matches(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_6

    const-string p0, "setEvent Error: only supported eventName: event_1 - event_12 or invoke"

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_6
    if-nez p1, :cond_7

    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    :cond_7
    const-string p0, "_isReyunDefaultEvent"

    const-string v2, "1"

    invoke-interface {p1, p0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_8
    :goto_0
    :try_start_0
    sget-object v4, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    sget-object v5, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    sget-object p0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v2, "tracking_login"

    const-string v3, "account"

    invoke-static {p0, v2, v3, v1}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    sget-object v8, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    const/4 v9, 0x0

    invoke-static/range {v4 .. v9}, Lcom/reyun/tracking/a/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/reyun/tracking/a/a;->a(Ljava/util/Map;Lorg/json/JSONObject;)V

    const-string p1, "receive/tkio/event"

    invoke-static {v0, v0, p0, p1}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static setEventJsonString(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/reyun/tracking/sdk/Tracking;->setEvent(Ljava/lang/String;Ljava/util/Map;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setIsInstallSent(Z)V
    .locals 0

    sput-boolean p0, Lcom/reyun/tracking/sdk/Tracking;->isInstallSent:Z

    return-void
.end method

.method public static setLoginSuccessBusiness(Ljava/lang/String;)V
    .locals 2

    const/4 v0, 0x0

    move-object v1, v0

    check-cast v1, Ljava/util/Map;

    invoke-static {p0, v0, v1}, Lcom/reyun/tracking/sdk/Tracking;->setLoginSuccessBusiness(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static setLoginSuccessBusiness(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object p2

    invoke-static {p0, p1, p2}, Lcom/reyun/tracking/sdk/Tracking;->setLoginSuccessBusiness(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setLoginSuccessBusiness(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 8

    sget-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    const-string v1, "TrackingIO"

    if-nez v0, :cond_0

    const-string p0, "setLoginSuccessBusiness Error:preInit init failed! Did you call the method \'preInit\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    if-nez v0, :cond_1

    const-string p0, "setLoginSuccessBusiness Error: Null context! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    invoke-static {v0}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string p0, "setLoginSuccessBusiness Error: Invalid appKey! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_2
    invoke-static {p2}, Lcom/reyun/tracking/a/a;->b(Ljava/util/Map;)V

    const-string v0, "unknown"

    const-string v1, "setRegisterWithAccountID Warning: param account is NULL"

    invoke-static {p0, v0, v1}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    sget-object p0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v0, "tracking_login"

    const-string v1, "account"

    invoke-static {p0, v0, v1, v5}, Lcom/reyun/tracking/utils/f;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    :try_start_0
    sget-object v2, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    sget-object v3, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    const-string v4, "loggedin"

    sget-object v6, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    const/4 v7, 0x0

    invoke-static/range {v2 .. v7}, Lcom/reyun/tracking/a/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lorg/json/JSONObject;

    move-result-object p0

    if-eqz p1, :cond_3

    const-string v0, "context"

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "serverid"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    if-eqz p2, :cond_4

    invoke-static {p2, p0}, Lcom/reyun/tracking/a/a;->a(Ljava/util/Map;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_4
    :goto_0
    if-eqz p0, :cond_5

    const-string p1, "loggedin"

    const-string p2, "login"

    const-string v0, "receive/tkio/loggedin"

    invoke-static {p1, p2, p0, v0}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V

    :cond_5
    return-void
.end method

.method public static setLoginSuccessBusiness(Ljava/lang/String;Ljava/util/Map;)V
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, v0, p1}, Lcom/reyun/tracking/sdk/Tracking;->setLoginSuccessBusiness(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static setOnDataUploadListener(Lcom/reyun/tracking/sdk/p;)V
    .locals 0

    sput-object p0, Lcom/reyun/tracking/sdk/Tracking;->onDataUploadListener:Lcom/reyun/tracking/sdk/p;

    return-void
.end method

.method public static setOnSDKInitCompleteListener(Lcom/reyun/tracking/sdk/o;)V
    .locals 0

    sput-object p0, Lcom/reyun/tracking/sdk/Tracking;->onSDKInitCompleteListener:Lcom/reyun/tracking/sdk/o;

    return-void
.end method

.method public static setOrder(Ljava/lang/String;Ljava/lang/String;F)V
    .locals 1

    const/4 v0, 0x0

    check-cast v0, Ljava/util/Map;

    invoke-static {p0, p1, p2, v0}, Lcom/reyun/tracking/sdk/Tracking;->setOrder(Ljava/lang/String;Ljava/lang/String;FLjava/util/Map;)V

    return-void
.end method

.method public static setOrder(Ljava/lang/String;Ljava/lang/String;FLjava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object p3

    invoke-static {p0, p1, p2, p3}, Lcom/reyun/tracking/sdk/Tracking;->setOrder(Ljava/lang/String;Ljava/lang/String;FLjava/util/Map;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setOrder(Ljava/lang/String;Ljava/lang/String;FLjava/util/Map;)V
    .locals 3

    sget-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    const-string v1, "TrackingIO"

    if-nez v0, :cond_0

    const-string p0, "setOrder Error:preInit init failed! Did you call the method \'preInit\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    const-string v0, "unknown"

    const-string v2, "\u8c03\u7528 setOrder\u65f6 transactionId \u4e3a\u7a7a"

    invoke-static {p0, v0, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string p0, "setOrder Error: param transactionId cannot be NULL"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    const-string v2, "\u8c03\u7528 setPayment\u65f6 paymentType \u4e3a\u7a7a"

    invoke-static {p1, v0, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string p0, "setOrder Error: param currencyType cannot be NULL"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_2
    const/4 v0, 0x0

    cmpg-float v0, p2, v0

    if-gtz v0, :cond_3

    const-string p0, "setOrder Error: param currencyAmount cannot <= 0"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_3
    if-nez p3, :cond_4

    new-instance p3, Ljava/util/HashMap;

    invoke-direct {p3}, Ljava/util/HashMap;-><init>()V

    :cond_4
    const-string v0, "_transactionId"

    invoke-interface {p3, v0, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "_currencytype"

    invoke-interface {p3, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    const-string p1, "_currencyAmount"

    invoke-interface {p3, p1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "order"

    invoke-static {p0, p3}, Lcom/reyun/tracking/sdk/Tracking;->setEvent(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static setPageDuration(Ljava/lang/String;J)V
    .locals 1

    const/4 v0, 0x0

    check-cast v0, Ljava/util/Map;

    invoke-static {p0, p1, p2, v0}, Lcom/reyun/tracking/sdk/Tracking;->setPageDuration(Ljava/lang/String;JLjava/util/Map;)V

    return-void
.end method

.method public static setPageDuration(Ljava/lang/String;JLjava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object p3

    invoke-static {p0, p1, p2, p3}, Lcom/reyun/tracking/sdk/Tracking;->setPageDuration(Ljava/lang/String;JLjava/util/Map;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setPageDuration(Ljava/lang/String;JLjava/util/Map;)V
    .locals 8

    const-string v0, "pageduration"

    const-string v1, "unknown"

    :try_start_0
    sget-boolean v2, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    if-nez v2, :cond_0

    const-string p0, "TrackingIO"

    const-string p1, "setPageDuration Error:preInit init failed! Did you call the method \'preInit\'?"

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v2

    const/16 v3, 0x40

    if-le v2, v3, :cond_1

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v2

    sub-int/2addr v2, v3

    invoke-virtual {p0, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    :cond_1
    invoke-static {p3}, Lcom/reyun/tracking/a/a;->b(Ljava/util/Map;)V

    sget-object v2, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    sget-object v3, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    const-string v4, "pageduration"

    sget-object v5, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v6, "tracking_login"

    const-string v7, "account"

    invoke-static {v5, v6, v7, v1}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    sget-object v6, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    const/4 v7, 0x0

    invoke-static/range {v2 .. v7}, Lcom/reyun/tracking/a/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "context"

    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    const-string v4, "_deviceid"

    invoke-virtual {v3, v4, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v4, "_create_timestamp"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v3, v4, v5, v6}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v4

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/reyun/tracking/a/a;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v4, "_sessionid"

    invoke-virtual {v3, v4, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "_pageid"

    invoke-virtual {v3, v1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "_pageduration"

    const-wide/16 v4, 0x3e8

    div-long/2addr p1, v4

    invoke-virtual {v3, p0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    if-eqz p3, :cond_2

    invoke-static {p3, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/util/Map;Lorg/json/JSONObject;)V

    :cond_2
    const-string p0, "receive/tkio/pageduration"

    invoke-static {v0, v0, v2, p0}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static setPayment(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;F)V
    .locals 1

    const/4 v0, 0x0

    check-cast v0, Ljava/util/Map;

    invoke-static {p0, p1, p2, p3, v0}, Lcom/reyun/tracking/sdk/Tracking;->setPayment(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;FLjava/util/Map;)V

    return-void
.end method

.method public static setPayment(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;FLjava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object p4

    invoke-static {p0, p1, p2, p3, p4}, Lcom/reyun/tracking/sdk/Tracking;->setPayment(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;FLjava/util/Map;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setPayment(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;FLjava/util/Map;)V
    .locals 8

    sget-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    const-string v1, "TrackingIO"

    if-nez v0, :cond_0

    const-string p0, "setPayment Error:preInit init failed! Did you call the method \'preInit\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    if-nez v0, :cond_1

    const-string p0, "setPayment Error: Null context! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    invoke-static {v0}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string p0, "setPayment Error: Invalid appKey! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_2
    const-string v0, "unknown"

    const-string v2, "\u8c03\u7528 setPayment\u65f6 transactionId \u4e3a\u7a7a"

    invoke-static {p0, v0, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    const-string p0, "setPayment Error: param transactionId cannot be NULL"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_3
    const-string v2, "\u8c03\u7528 setPayment\u65f6 paymentType \u4e3a\u7a7a"

    invoke-static {p1, v0, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    const-string p0, "setPayment Error: param paymentType cannot be NULL"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_4
    if-eqz p2, :cond_5

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v2

    const/4 v3, 0x3

    if-le v2, v3, :cond_5

    const-string p0, "setPayment Error:param  currencyType\'s length cannot bigger than 3"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_5
    invoke-static {p4}, Lcom/reyun/tracking/a/a;->b(Ljava/util/Map;)V

    const-string v2, "\u8c03\u7528 setPayment\u65f6 currencyType \u4e3a\u7a7a"

    invoke-static {p2, v0, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_6

    const-string p0, "setPayment Error:param  currencyType cannot be NULL"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_6
    const/4 v2, 0x0

    cmpg-float v2, p3, v2

    if-gtz v2, :cond_7

    const-string p0, "setPayment Error: param currencyAmount cannot <= 0"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_7
    const/4 v1, 0x0

    :try_start_0
    sget-object v2, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    sget-object v3, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    const-string v4, "payment"

    sget-object v5, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v6, "tracking_login"

    const-string v7, "account"

    invoke-static {v5, v6, v7, v0}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    sget-object v6, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    const/4 v7, 0x0

    invoke-static/range {v2 .. v7}, Lcom/reyun/tracking/a/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lorg/json/JSONObject;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    :try_start_1
    const-string v0, "context"

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_8

    const-string v2, "_transactionId"

    invoke-virtual {v0, v2, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "_paymentType"

    invoke-virtual {v0, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "_currencytype"

    invoke-virtual {v0, p0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "_currencyAmount"

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    if-eqz p4, :cond_8

    invoke-static {p4, v1}, Lcom/reyun/tracking/a/a;->a(Ljava/util/Map;Lorg/json/JSONObject;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    nop

    :cond_8
    :goto_1
    if-eqz v1, :cond_9

    const-string p0, "payment"

    const-string p1, "receive/tkio/payment"

    invoke-static {p0, p0, v1, p1}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V

    :cond_9
    return-void
.end method

.method public static setPaymentStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;F)V
    .locals 1

    const/4 v0, 0x0

    check-cast v0, Ljava/util/Map;

    invoke-static {p0, p1, p2, p3, v0}, Lcom/reyun/tracking/sdk/Tracking;->setPaymentStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;FLjava/util/Map;)V

    return-void
.end method

.method public static setPaymentStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;FLjava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object p4

    invoke-static {p0, p1, p2, p3, p4}, Lcom/reyun/tracking/sdk/Tracking;->setPaymentStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;FLjava/util/Map;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setPaymentStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;FLjava/util/Map;)V
    .locals 4

    sget-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    const-string v1, "TrackingIO"

    if-nez v0, :cond_0

    const-string p0, "setPaymentStart Error:preInit init failed! Did you call the method \'preInit\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    if-nez v0, :cond_1

    const-string p0, "setPaymentStart Error: Null context! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    invoke-static {v0}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string p0, "setPaymentStart Error: Invalid appKey! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_2
    const-string v0, "unknown"

    const-string v2, "\u8c03\u7528 setPaymentStart\u65f6 transactionId \u4e3a\u7a7a"

    invoke-static {p0, v0, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    const-string p0, "setPaymentStart Error: param transactionId cannot be NULL"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_3
    const-string v2, "\u8c03\u7528 setPaymentStart\u65f6 paymentType \u4e3a\u7a7a"

    invoke-static {p1, v0, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    const-string p0, "setPaymentStart Error: param paymentType cannot be NULL"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_4
    invoke-static {p4}, Lcom/reyun/tracking/a/a;->b(Ljava/util/Map;)V

    if-eqz p2, :cond_5

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v2

    const/4 v3, 0x3

    if-le v2, v3, :cond_5

    const-string p0, "setPayment Error:param  currencyType\'s length cannot bigger than 3"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_5
    const-string v2, "\u8c03\u7528 setPaymentStart\u65f6 currencyType \u4e3a\u7a7a"

    invoke-static {p2, v0, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    const-string p0, "setPaymentStart Error: param currencyType cannot be NULL"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_6
    const/4 v0, 0x0

    cmpg-float v0, p3, v0

    if-gtz v0, :cond_7

    const-string p0, "setPaymentStart Error: param currencyamount cannot <= 0"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_7
    if-nez p4, :cond_8

    new-instance p4, Ljava/util/HashMap;

    invoke-direct {p4}, Ljava/util/HashMap;-><init>()V

    :cond_8
    const-string v0, "_transactionId"

    invoke-interface {p4, v0, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "_paymentType"

    invoke-interface {p4, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "_currencytype"

    invoke-interface {p4, p0, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p3}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    const-string p1, "_currencyAmount"

    invoke-interface {p4, p1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "paymentStart"

    invoke-static {p0, p4}, Lcom/reyun/tracking/sdk/Tracking;->setEvent(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static setRegisterWithAccountID(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    check-cast v0, Ljava/util/Map;

    invoke-static {p0, v0}, Lcom/reyun/tracking/sdk/Tracking;->setRegisterWithAccountID(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static setRegisterWithAccountID(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/reyun/tracking/sdk/Tracking;->setRegisterWithAccountID(Ljava/lang/String;Ljava/util/Map;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setRegisterWithAccountID(Ljava/lang/String;Ljava/util/Map;)V
    .locals 9

    sget-boolean v0, Lcom/reyun/tracking/sdk/Tracking;->isPreInit:Z

    const-string v1, "TrackingIO"

    if-nez v0, :cond_0

    const-string p0, "setRegisterWithAccountID Error:preInit init failed! Did you call the method \'preInit\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    if-nez v0, :cond_1

    const-string p0, "setRegisterWithAccountID Error: Null context! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    sget-object v0, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    invoke-static {v0}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string p0, "setRegisterWithAccountID Error: Invalid appKey! Did you call the method \'initWithKeyAndChannelId\'?"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_2
    const-string v0, "unknown"

    const-string v2, "setRegisterWithAccountID Warning: param account is NULL"

    invoke-static {p0, v0, v2}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_3

    const-string p0, "setRegisterWithAccountID Error: param account cannot be NULL! Upload register data failed"

    invoke-static {v1, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_3
    invoke-static {p1}, Lcom/reyun/tracking/a/a;->b(Ljava/util/Map;)V

    sget-object p0, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    const-string v0, "tracking_login"

    const-string v1, "account"

    invoke-static {p0, v0, v1, v6}, Lcom/reyun/tracking/utils/f;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    :try_start_0
    sget-object v3, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    sget-object v4, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    const-string v5, "register"

    sget-object v7, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    const/4 v8, 0x0

    invoke-static/range {v3 .. v8}, Lcom/reyun/tracking/a/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lorg/json/JSONObject;

    move-result-object p0

    if-eqz p1, :cond_4

    invoke-static {p1, p0}, Lcom/reyun/tracking/a/a;->a(Ljava/util/Map;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_4
    :goto_0
    if-eqz p0, :cond_5

    const-string p1, "register"

    const-string v0, "receive/tkio/register"

    invoke-static {p1, p1, p0, v0}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V

    :cond_5
    return-void
.end method

.method public static setStartupInternal(Ljava/util/Map;)V
    .locals 7

    const-string v0, "TrackingIO"

    const-string v1, "setStartupInternal"

    invoke-static {v0, v1}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    :try_start_0
    sget-object v1, Lcom/reyun/tracking/sdk/Tracking;->m_context:Landroid/content/Context;

    sget-object v2, Lcom/reyun/tracking/sdk/Tracking;->m_appKey:Ljava/lang/String;

    const-string v3, "startup"

    const-string v4, "unknown"

    sget-object v5, Lcom/reyun/tracking/sdk/Tracking;->m_channelid:Ljava/lang/String;

    const/4 v6, 0x0

    invoke-static/range {v1 .. v6}, Lcom/reyun/tracking/a/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz p0, :cond_0

    invoke-static {p0, v0}, Lcom/reyun/tracking/a/a;->a(Ljava/util/Map;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    if-eqz v0, :cond_1

    const-string p0, "startup"

    const-string v1, "receive/tkio/startup"

    invoke-static {p0, p0, v0, v1}, Lcom/reyun/tracking/sdk/Tracking;->sendOrSava(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V

    :cond_1
    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->sendFailedRecord()V

    return-void
.end method

.method public static setUploadMac(Z)V
    .locals 0

    sput-boolean p0, Lcom/reyun/tracking/sdk/Tracking;->uploadMac:Z

    return-void
.end method

.method public static setUseTcp(Z)V
    .locals 0

    sput-boolean p0, Lcom/reyun/tracking/a/i;->c:Z

    return-void
.end method
