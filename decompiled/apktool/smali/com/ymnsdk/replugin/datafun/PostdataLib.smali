.class public Lcom/ymnsdk/replugin/datafun/PostdataLib;
.super Ljava/lang/Object;
.source "PostdataLib.java"


# static fields
.field private static handler:Landroid/os/Handler;

.field private static volatile postdataLib:Lcom/ymnsdk/replugin/datafun/PostdataLib;

.field private static volatile trace:Ljava/lang/String;


# instance fields
.field private responseHeaders:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

.field private url:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 27
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/ymnsdk/replugin/datafun/PostdataLib;->handler:Landroid/os/Handler;

    return-void
.end method

.method private constructor <init>()V
    .locals 3

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "https://sluice.imeete.com/api/data/receiver"

    .line 23
    iput-object v0, p0, Lcom/ymnsdk/replugin/datafun/PostdataLib;->url:Ljava/lang/String;

    .line 24
    new-instance v0, Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    const-string v1, "X-Error-Code"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/bianfeng/datafunsdk/net/ResponseHeaders;-><init>(Ljava/lang/String;I)V

    iput-object v0, p0, Lcom/ymnsdk/replugin/datafun/PostdataLib;->responseHeaders:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    return-void
.end method

.method static synthetic access$000(Lcom/ymnsdk/replugin/datafun/PostdataLib;)Ljava/lang/String;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/ymnsdk/replugin/datafun/PostdataLib;->url:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$100(Lcom/ymnsdk/replugin/datafun/PostdataLib;)Lcom/bianfeng/datafunsdk/net/ResponseHeaders;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/ymnsdk/replugin/datafun/PostdataLib;->responseHeaders:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    return-object p0
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;
    .locals 2

    .line 30
    sget-object v0, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postdataLib:Lcom/ymnsdk/replugin/datafun/PostdataLib;

    if-nez v0, :cond_1

    .line 31
    const-class v0, Lcom/ymnsdk/replugin/datafun/PostdataLib;

    monitor-enter v0

    .line 32
    :try_start_0
    sget-object v1, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postdataLib:Lcom/ymnsdk/replugin/datafun/PostdataLib;

    if-nez v1, :cond_0

    .line 33
    new-instance v1, Lcom/ymnsdk/replugin/datafun/PostdataLib;

    invoke-direct {v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;-><init>()V

    sput-object v1, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postdataLib:Lcom/ymnsdk/replugin/datafun/PostdataLib;

    .line 35
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 37
    :cond_1
    :goto_0
    sget-object v0, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postdataLib:Lcom/ymnsdk/replugin/datafun/PostdataLib;

    return-object v0
.end method


# virtual methods
.method public init(Landroid/content/Context;)V
    .locals 3

    .line 44
    invoke-static {}, Lcom/bianfeng/datafunsdk/PostDatalib;->getInstance()Lcom/bianfeng/datafunsdk/PostDatalib;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib;->init(Landroid/content/Context;)V

    .line 45
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/SystemUtils;->createTransactionId()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ymnsdk/replugin/datafun/PostdataLib;->trace:Ljava/lang/String;

    .line 46
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    sget-object v0, Lcom/ymnsdk/replugin/datafun/PostdataLib;->trace:Ljava/lang/String;

    invoke-static {v0}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setRepluginTrace(Ljava/lang/String;)V

    .line 47
    invoke-static {}, Lcom/bianfeng/seppellita/SepperllitaSdk;->getInstance()Lcom/bianfeng/seppellita/SepperllitaSdk;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/datafun/PostdataLib$1;

    invoke-direct {v1, p0}, Lcom/ymnsdk/replugin/datafun/PostdataLib$1;-><init>(Lcom/ymnsdk/replugin/datafun/PostdataLib;)V

    const-string v2, ""

    invoke-virtual {v0, p1, v2, v1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->onInit(Landroid/content/Context;Ljava/lang/String;Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;)V

    return-void
.end method

.method public postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V
    .locals 2

    .line 62
    :try_start_0
    sget-object v0, Lcom/ymnsdk/replugin/datafun/PostdataLib;->handler:Landroid/os/Handler;

    new-instance v1, Lcom/ymnsdk/replugin/datafun/PostdataLib$2;

    invoke-direct {v1, p0, p1}, Lcom/ymnsdk/replugin/datafun/PostdataLib$2;-><init>(Lcom/ymnsdk/replugin/datafun/PostdataLib;Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 73
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public postTest()V
    .locals 4

    .line 83
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    const-string v1, "act"

    const-string v2, "push"

    .line 84
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "pg"

    const-string v2, "P1069"

    .line 85
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "eid"

    const-string v2, "139000"

    .line 86
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 87
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "et"

    invoke-virtual {v0, v2, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "uid "

    const-string v2, "u5454"

    .line 88
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "did"

    const-string v2, "d08d776b2b5d0b45"

    .line 89
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "adb "

    const-string v2, "2.0.4"

    .line 90
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "st"

    const-string v2, "S011"

    .line 91
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "rv"

    const-string v2, "1.0.0"

    .line 92
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "dur"

    const-string v2, "580"

    .line 93
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "an"

    const-string v2, "\u6d4b\u8bd5"

    .line 94
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "pkg"

    const-string v2, "com.test"

    .line 95
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "blk"

    const-string v2, "BHF001"

    .line 96
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "bl"

    const-string v2, "\u5bbf\u4e3b\u5305\u542f\u52a8"

    .line 97
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "label"

    const-string v2, "\u8bf7\u6c42\u5bbf\u4e3b\u914d\u7f6e\u4fe1\u606f"

    .line 98
    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 100
    new-instance v1, Ljava/util/LinkedHashMap;

    invoke-direct {v1}, Ljava/util/LinkedHashMap;-><init>()V

    const-string v2, "trace"

    const-string v3, "c3773a61916fd165ddd37d7307d0bdf3"

    .line 101
    invoke-virtual {v1, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "android_id"

    const-string v3, "8efd3095a50cdc00"

    .line 102
    invoke-virtual {v1, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "request_code"

    const-string v3, "-1"

    .line 103
    invoke-virtual {v1, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "request_msg"

    const-string v3, "\u8fd8\u672a\u83b7\u53d6\u63d2\u4ef6Patch\u4fe1\u606f"

    .line 104
    invoke-virtual {v1, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "plugin_id"

    const-string v3, "61c550c2-3d61-4375-86bd-4dc5a9a4d558"

    .line 105
    invoke-virtual {v1, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "host_app_info"

    const-string v3, "{\"uaalType\":\"shuangkou\",\"deviceID\":\"8efd3095a50cdc00\",\"userID\":\"SWXr788810\",\"numID\":\"112913999\",\"areaID\":10,\"userID_Old\":\"bf70772191\",\"numID_Old\":70772191,\"areaID_Old\":5007,\"sessionID\":\"{44F6F630-0109-F246-8F94-DB9A5B5371FB}\",\"paychannel\":10002,\"cpsID\":10002,\"sessionTime_Old\":\"1653275762965\",\"aliPay\":\"alipayopen_pay\",\"wechatPay\":\"weixin_pay\",\"hostPackageName\":\"com.bf.BFShuangKou\",\"hostActivity\":\"com.cocos.game.AppActivity\"}"

    .line 106
    invoke-virtual {v1, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "restart_num"

    const-string v3, "2"

    .line 107
    invoke-virtual {v1, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "request_server_type"

    const-string v3, "1"

    .line 108
    invoke-virtual {v1, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 109
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "cust"

    invoke-virtual {v0, v2, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 111
    invoke-static {}, Lcom/bianfeng/seppellita/SepperllitaSdk;->getInstance()Lcom/bianfeng/seppellita/SepperllitaSdk;

    move-result-object v1

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->post(Ljava/lang/String;)V

    return-void
.end method

.method public postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V
    .locals 2

    .line 79
    invoke-static {}, Lcom/bianfeng/seppellita/SepperllitaSdk;->getInstance()Lcom/bianfeng/seppellita/SepperllitaSdk;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->post(Ljava/lang/String;)V

    return-void
.end method
