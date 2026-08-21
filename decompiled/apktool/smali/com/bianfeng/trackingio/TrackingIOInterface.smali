.class public Lcom/bianfeng/trackingio/TrackingIOInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "TrackingIOInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field public static final ASSET_FILE_NAME_CERT:Ljava/lang/String; = ".cert.pem"


# instance fields
.field private final FUNCTION_SET_APP_DURATION:Ljava/lang/String;

.field private final FUNCTION_SET_CLICK:Ljava/lang/String;

.field private final FUNCTION_SET_EVENT:Ljava/lang/String;

.field private final FUNCTION_SET_LOGINSUCCESSBUSINESS:Ljava/lang/String;

.field private final FUNCTION_SET_ORDER:Ljava/lang/String;

.field private final FUNCTION_SET_PAGE_DURATION:Ljava/lang/String;

.field private final FUNCTION_SET_PAYMENT:Ljava/lang/String;

.field private final FUNCTION_SET_PAYMENTSTART:Ljava/lang/String;

.field private final FUNCTION_SET_PROFILE:Ljava/lang/String;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field private final FUNCTION_SET_REGISTERWITHACCOUNTID:Ljava/lang/String;

.field private final FUNCTION_SET_SHOW:Ljava/lang/String;

.field private final TAG:Ljava/lang/String;

.field private final TRACKINGIO_ACCOUNTID:Ljava/lang/String;

.field private final TRACKINGIO_AD_PLATFORM:Ljava/lang/String;

.field private final TRACKINGIO_APP_DURATION:Ljava/lang/String;

.field private final TRACKINGIO_APP_PAGE_DURATION:Ljava/lang/String;

.field private final TRACKINGIO_APP_PAGE_NAME:Ljava/lang/String;

.field private final TRACKINGIO_CURRENCYAMOUNT:Ljava/lang/String;

.field private final TRACKINGIO_CURRENCYTYPE:Ljava/lang/String;

.field private final TRACKINGIO_EVENTNAME:Ljava/lang/String;

.field private final TRACKINGIO_PAYMENTTYPE:Ljava/lang/String;

.field private final TRACKINGIO_TRANSACTIONID:Ljava/lang/String;

.field private final TRACKINGIO_adId:Ljava/lang/String;

.field private final TRACKINGIO_fill:Ljava/lang/String;

.field private isInit:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 21
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    const-string v0, "TrackingIOInterface : "

    .line 22
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TAG:Ljava/lang/String;

    const-string v0, "trackingio_set_registerwithaccountid"

    .line 26
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->FUNCTION_SET_REGISTERWITHACCOUNTID:Ljava/lang/String;

    const-string v0, "trackingio_set_loginsuccessbusiness"

    .line 30
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->FUNCTION_SET_LOGINSUCCESSBUSINESS:Ljava/lang/String;

    const-string v0, "trackingio_set_paymentstart"

    .line 34
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->FUNCTION_SET_PAYMENTSTART:Ljava/lang/String;

    const-string v0, "trackingio_set_payment"

    .line 38
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->FUNCTION_SET_PAYMENT:Ljava/lang/String;

    const-string v0, "trackingio_set_event"

    .line 42
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->FUNCTION_SET_EVENT:Ljava/lang/String;

    const-string v0, "trackingio_set_profile"

    .line 46
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->FUNCTION_SET_PROFILE:Ljava/lang/String;

    const-string v0, "trackingio_set_order"

    .line 51
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->FUNCTION_SET_ORDER:Ljava/lang/String;

    const-string v0, "trackingio_set_show"

    .line 55
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->FUNCTION_SET_SHOW:Ljava/lang/String;

    const-string v0, "trackingio_set_click"

    .line 59
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->FUNCTION_SET_CLICK:Ljava/lang/String;

    const-string v0, "trackingio_set_app_duration"

    .line 63
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->FUNCTION_SET_APP_DURATION:Ljava/lang/String;

    const-string v0, "trackingio_set_page_duration"

    .line 64
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->FUNCTION_SET_PAGE_DURATION:Ljava/lang/String;

    const-string v0, "accountId"

    .line 68
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_ACCOUNTID:Ljava/lang/String;

    const-string v0, "transactionId"

    .line 69
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_TRANSACTIONID:Ljava/lang/String;

    const-string v0, "paymentType"

    .line 70
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_PAYMENTTYPE:Ljava/lang/String;

    const-string v0, "currencyType"

    .line 71
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_CURRENCYTYPE:Ljava/lang/String;

    const-string v0, "currencyAmount"

    .line 72
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_CURRENCYAMOUNT:Ljava/lang/String;

    const-string v0, "eventName"

    .line 73
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_EVENTNAME:Ljava/lang/String;

    const-string v0, "adPlatform"

    .line 76
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_AD_PLATFORM:Ljava/lang/String;

    const-string v0, "adId"

    .line 77
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_adId:Ljava/lang/String;

    const-string v0, "fill"

    .line 78
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_fill:Ljava/lang/String;

    const-string v0, "duration"

    .line 80
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_APP_DURATION:Ljava/lang/String;

    const-string v1, "app_page_name"

    .line 81
    iput-object v1, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_APP_PAGE_NAME:Ljava/lang/String;

    .line 82
    iput-object v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->TRACKINGIO_APP_PAGE_DURATION:Ljava/lang/String;

    const/4 v0, 0x0

    .line 86
    iput-boolean v0, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->isInit:Z

    return-void
.end method

.method private getCurrencyAmount(Ljava/util/LinkedHashMap;)F
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)F"
        }
    .end annotation

    const-string v0, "currencyAmount"

    .line 232
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 233
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 234
    invoke-static {p1}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method private getExtraMap(Ljava/util/LinkedHashMap;)Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    const-string v0, "extra"

    .line 255
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 256
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getExtraMap: map : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "TrackingIOInterface : "

    invoke-static {v1, p1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 258
    :try_start_0
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->getMapFrom(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 260
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getExtraMap ERROR: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 261
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method private getInitParameters()Lcom/reyun/tracking/sdk/InitParameters;
    .locals 2

    .line 267
    new-instance v0, Lcom/reyun/tracking/sdk/InitParameters;

    invoke-direct {v0}, Lcom/reyun/tracking/sdk/InitParameters;-><init>()V

    const-string v1, "trackingio_appkey"

    .line 269
    invoke-virtual {p0, v1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/reyun/tracking/sdk/InitParameters;->appKey:Ljava/lang/String;

    .line 271
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getChannelId()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/reyun/tracking/sdk/InitParameters;->channelId:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public getLongTime(Ljava/util/LinkedHashMap;Ljava/lang/String;)J
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")J"
        }
    .end annotation

    .line 240
    invoke-virtual {p1, p2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 242
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    const-wide/16 p1, 0x0

    return-wide p1

    .line 245
    :cond_0
    invoke-static {p1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide p1

    return-wide p1
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "31"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "trackingio"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0xc

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "1.9.5"

    return-object v0
.end method

.method public onDestroy()V
    .locals 2

    .line 218
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onDestroy()V

    const-string v0, "TrackingIOInterface : "

    const-string v1, "onDestroy"

    .line 219
    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 220
    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->exitSdk()V

    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1

    .line 110
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 111
    iget-boolean p1, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->isInit:Z

    if-nez p1, :cond_0

    const-string p1, "TrackingIOInterface : "

    const-string v0, " into onInit"

    .line 112
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 114
    invoke-virtual {p0}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    check-cast p1, Landroid/app/Application;

    const-string v0, "trackingio_appkey"

    invoke-virtual {p0, v0}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/reyun/tracking/sdk/Tracking;->preInit(Landroid/content/Context;Ljava/lang/String;)V

    .line 115
    invoke-virtual {p0}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    check-cast p1, Landroid/app/Application;

    invoke-direct {p0}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getInitParameters()Lcom/reyun/tracking/sdk/InitParameters;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/reyun/tracking/sdk/Tracking;->initWithKeyAndChannelId(Landroid/app/Application;Lcom/reyun/tracking/sdk/InitParameters;)V

    const/4 p1, 0x1

    .line 116
    iput-boolean p1, p0, Lcom/bianfeng/trackingio/TrackingIOInterface;->isInit:Z

    :cond_0
    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 0

    .line 225
    invoke-super {p0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    .line 226
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "onRequestPermissionsResult: request code : "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "TrackingIOInterface : "

    invoke-static {p2, p1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 227
    invoke-virtual {p0}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    check-cast p1, Landroid/app/Application;

    invoke-direct {p0}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getInitParameters()Lcom/reyun/tracking/sdk/InitParameters;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/reyun/tracking/sdk/Tracking;->initWithKeyAndChannelId(Landroid/app/Application;Lcom/reyun/tracking/sdk/InitParameters;)V

    return-void
.end method

.method public setAdClick(Ljava/util/LinkedHashMap;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "trackingio_set_click"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "adPlatform"

    .line 187
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "adId"

    invoke-virtual {p1, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getExtraMap(Ljava/util/LinkedHashMap;)Ljava/util/Map;

    move-result-object p1

    invoke-static {v0, v1, p1}, Lcom/reyun/tracking/sdk/Tracking;->setAdClick(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    const-string p1, "TrackingIOInterface : "

    const-string v0, "call functiontrackingio_set_click"

    .line 188
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setAdShow(Ljava/util/LinkedHashMap;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "trackingio_set_show"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "adPlatform"

    .line 178
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "adId"

    invoke-virtual {p1, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "fill"

    invoke-virtual {p1, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getExtraMap(Ljava/util/LinkedHashMap;)Ljava/util/Map;

    move-result-object p1

    invoke-static {v0, v1, v2, p1}, Lcom/reyun/tracking/sdk/Tracking;->setAdShow(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    const-string p1, "TrackingIOInterface : "

    const-string v0, "call functiontrackingio_set_show"

    .line 179
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setAppDuration(Ljava/util/LinkedHashMap;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "trackingio_set_app_duration"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "duration"

    .line 197
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getLongTime(Ljava/util/LinkedHashMap;Ljava/lang/String;)J

    move-result-wide v0

    invoke-direct {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getExtraMap(Ljava/util/LinkedHashMap;)Ljava/util/Map;

    move-result-object p1

    invoke-static {v0, v1, p1}, Lcom/reyun/tracking/sdk/Tracking;->setAppDuration(JLjava/util/Map;)V

    const-string p1, "TrackingIOInterface : "

    const-string v0, "call functiontrackingio_set_app_duration"

    .line 198
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setEvent(Ljava/util/LinkedHashMap;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "trackingio_set_event"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "eventName"

    .line 153
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getExtraMap(Ljava/util/LinkedHashMap;)Ljava/util/Map;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/reyun/tracking/sdk/Tracking;->setEvent(Ljava/lang/String;Ljava/util/Map;)V

    const-string p1, "TrackingIOInterface : "

    const-string v0, "call function trackingio_set_event"

    .line 154
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setLoginSuccessBusiness(Ljava/util/LinkedHashMap;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "trackingio_set_loginsuccessbusiness"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "accountId"

    .line 128
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getExtraMap(Ljava/util/LinkedHashMap;)Ljava/util/Map;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/reyun/tracking/sdk/Tracking;->setLoginSuccessBusiness(Ljava/lang/String;Ljava/util/Map;)V

    const-string p1, "TrackingIOInterface : "

    const-string v0, "call functiontrackingio_set_loginsuccessbusiness"

    .line 129
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setOrder(Ljava/util/LinkedHashMap;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "trackingio_set_order"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "transactionId"

    .line 169
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "currencyType"

    invoke-virtual {p1, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getCurrencyAmount(Ljava/util/LinkedHashMap;)F

    move-result v2

    invoke-direct {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getExtraMap(Ljava/util/LinkedHashMap;)Ljava/util/Map;

    move-result-object p1

    invoke-static {v0, v1, v2, p1}, Lcom/reyun/tracking/sdk/Tracking;->setOrder(Ljava/lang/String;Ljava/lang/String;FLjava/util/Map;)V

    const-string p1, "TrackingIOInterface : "

    const-string v0, "call functiontrackingio_set_order"

    .line 170
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setPageDuration(Ljava/util/LinkedHashMap;)V
    .locals 5
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "trackingio_set_page_duration"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "app_page_name"

    .line 206
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 207
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, "TrackingIOInterface : "

    if-eqz v1, :cond_0

    .line 208
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setPageDuration: activityName\u4e0d\u5408\u6cd5\uff1a"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    const-string v1, "duration"

    .line 211
    invoke-virtual {p0, p1, v1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getLongTime(Ljava/util/LinkedHashMap;Ljava/lang/String;)J

    move-result-wide v3

    invoke-direct {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getExtraMap(Ljava/util/LinkedHashMap;)Ljava/util/Map;

    move-result-object p1

    invoke-static {v0, v3, v4, p1}, Lcom/reyun/tracking/sdk/Tracking;->setPageDuration(Ljava/lang/String;JLjava/util/Map;)V

    const-string p1, "call functiontrackingio_set_page_duration"

    .line 213
    invoke-static {v2, p1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setPayment(Ljava/util/LinkedHashMap;)V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "trackingio_set_payment"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "transactionId"

    .line 142
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "paymentType"

    invoke-virtual {p1, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "currencyType"

    invoke-virtual {p1, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getCurrencyAmount(Ljava/util/LinkedHashMap;)F

    move-result v3

    invoke-direct {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getExtraMap(Ljava/util/LinkedHashMap;)Ljava/util/Map;

    move-result-object p1

    invoke-static {v0, v1, v2, v3, p1}, Lcom/reyun/tracking/sdk/Tracking;->setPayment(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;FLjava/util/Map;)V

    const-string p1, "TrackingIOInterface : "

    const-string v0, "call function trackingio_set_payment"

    .line 143
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setPaymentStart(Ljava/util/LinkedHashMap;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "trackingio_set_paymentstart"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 136
    invoke-virtual {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->setPayment(Ljava/util/LinkedHashMap;)V

    const-string p1, "TrackingIOInterface : "

    const-string v0, "call function trackingio_set_paymentstart"

    .line 137
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setProfile(Ljava/util/LinkedHashMap;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "trackingio_set_profile"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const-string p1, "TrackingIOInterface : "

    const-string v0, "call functiontrackingio_set_profile"

    .line 161
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setRegisterWithAccountid(Ljava/util/LinkedHashMap;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "trackingio_set_registerwithaccountid"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "accountId"

    .line 122
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/bianfeng/trackingio/TrackingIOInterface;->getExtraMap(Ljava/util/LinkedHashMap;)Ljava/util/Map;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/reyun/tracking/sdk/Tracking;->setRegisterWithAccountID(Ljava/lang/String;Ljava/util/Map;)V

    const-string p1, "TrackingIOInterface : "

    const-string v0, "call function trackingio_set_registerwithaccountid"

    .line 123
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
