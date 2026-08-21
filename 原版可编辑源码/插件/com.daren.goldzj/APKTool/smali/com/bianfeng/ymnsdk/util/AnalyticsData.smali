.class public Lcom/bianfeng/ymnsdk/util/AnalyticsData;
.super Ljava/lang/Object;
.source "AnalyticsData.java"


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field public static final DATA_CANCEL:I = -0x2

.field public static final DATA_FAIL:I = -0x1

.field public static final DATA_SUCCESS:I = 0x1

.field public static final KEY_TRANSACTIONID:Ljava/lang/String; = "transactionId"

.field private static blackFunctions:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static transactionId:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->blackFunctions:Ljava/util/Set;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addBlackFunction(Ljava/lang/String;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->blackFunctions:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static callFunctionEvent(Ljava/lang/String;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->blackFunctions:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->testCallFunction(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public static callFunctionEvent(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 1

    .line 3
    sget-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->blackFunctions:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 4
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->testCallFunction(Ljava/lang/String;[Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public static datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 1
    invoke-static {p0, p1, p2, v0}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    return-void
.end method

.method public static datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 2
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0, p2}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    .line 3
    invoke-static {p3}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->jsonStringToMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p2

    invoke-interface {v0, p2}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 4
    invoke-static {p0, p1, v0}, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->onEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static getTransactionId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    .line 2
    sput-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    .line 3
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    return-object v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->init(Landroid/content/Context;)V

    return-void
.end method

.method public static jsonStringToMap(Ljava/lang/String;)Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 2
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p0, "AnalyticsData"

    const-string v1, "onCallback msg is null"

    .line 3
    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    .line 7
    :cond_0
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 8
    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v2

    .line 9
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 10
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 11
    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    invoke-interface {v0, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_1
    return-object v0

    :catch_0
    const-string v1, "msg"

    .line 15
    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method public static loginServerResEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;ILjava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 2
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platformId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object p0

    const-string v1, "sdkVersion"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "transactionId"

    .line 4
    invoke-interface {v0, p0, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "1010103"

    const/4 p3, -0x1

    if-eq p1, p3, :cond_1

    const/4 p3, 0x1

    if-eq p1, p3, :cond_0

    goto :goto_0

    :cond_0
    const-string p1, "1"

    .line 7
    invoke-static {p0, p1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string p1, "2"

    .line 10
    invoke-static {p0, p1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static loginThirdEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 0

    return-void
.end method

.method public static loginThirdResEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;ILjava/lang/String;)V
    .locals 3

    .line 1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 2
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platformId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object p0

    const-string v1, "sdkVersion"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4
    sget-object p0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    const-string v1, "transactionId"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "1010101"

    const/16 v1, 0x66

    if-eq p1, v1, :cond_2

    const/16 v1, 0x69

    if-eq p1, v1, :cond_1

    const/16 v1, 0x6a

    if-eq p1, v1, :cond_0

    goto :goto_0

    :cond_0
    const-string p1, "4"

    .line 10
    invoke-static {p0, p1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string p1, "3"

    .line 13
    invoke-static {p0, p1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    const-string p1, "2"

    .line 14
    invoke-static {p0, p1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static payServerEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 0

    return-void
.end method

.method public static payServerResEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;ILjava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 2
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platformId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object p0

    const-string v1, "sdkVersion"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4
    sput-object p3, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    const-string p0, "transactionId"

    invoke-interface {v0, p0, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "1010203"

    const/4 p3, -0x1

    if-eq p1, p3, :cond_1

    const/4 p3, 0x1

    if-eq p1, p3, :cond_0

    goto :goto_0

    :cond_0
    const-string p1, "1"

    .line 7
    invoke-static {p0, p1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string p1, "2"

    .line 10
    invoke-static {p0, p1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static payThirdResEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;ILjava/lang/String;)V
    .locals 3

    .line 1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 2
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platformId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object p0

    const-string v1, "sdkVersion"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4
    sget-object p0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    const-string v1, "transactionId"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "1010204"

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const-string p1, "4"

    .line 10
    invoke-static {p0, p1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_0

    :pswitch_1
    const-string p1, "3"

    .line 13
    invoke-static {p0, p1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_0

    :pswitch_2
    const-string p1, "2"

    .line 14
    invoke-static {p0, p1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    :goto_0
    return-void

    :pswitch_data_0
    .packed-switch 0xc8
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
