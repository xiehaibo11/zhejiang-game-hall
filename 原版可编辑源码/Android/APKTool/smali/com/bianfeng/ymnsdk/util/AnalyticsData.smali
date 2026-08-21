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

    .line 26
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->blackFunctions:Ljava/util/Set;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addBlackFunction(Ljava/lang/String;)V
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;

    .line 198
    sget-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->blackFunctions:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 199
    return-void
.end method

.method public static callFunctionEvent(Ljava/lang/String;)V
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;

    .line 202
    sget-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->blackFunctions:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 203
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->testCallFunction(Ljava/lang/String;)V

    .line 205
    :cond_0
    return-void
.end method

.method public static callFunctionEvent(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;
    .param p1, "args"    # [Ljava/lang/String;

    .line 208
    sget-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->blackFunctions:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 209
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->testCallFunction(Ljava/lang/String;[Ljava/lang/String;)V

    .line 211
    :cond_0
    return-void
.end method

.method public static datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .param p0, "eventId"    # Ljava/lang/String;
    .param p1, "ext"    # Ljava/lang/String;
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

    .line 163
    .local p2, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    const/4 v0, 0x0

    invoke-static {p0, p1, p2, v0}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    .line 164
    return-void
.end method

.method public static datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V
    .locals 2
    .param p0, "eventId"    # Ljava/lang/String;
    .param p1, "ext"    # Ljava/lang/String;
    .param p3, "msg"    # Ljava/lang/String;
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

    .line 167
    .local p2, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0, p2}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    .line 168
    .local v0, "dfMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    invoke-static {p3}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->jsonStringToMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 169
    invoke-static {p0, p1, v0}, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->onEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    .line 170
    return-void
.end method

.method public static getTransactionId()Ljava/lang/String;
    .locals 1

    .line 31
    sget-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 32
    const-string v0, ""

    sput-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    .line 33
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    return-object v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0
    .param p0, "context"    # Landroid/content/Context;

    .line 41
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->init(Landroid/content/Context;)V

    .line 42
    return-void
.end method

.method public static jsonStringToMap(Ljava/lang/String;)Ljava/util/Map;
    .locals 5
    .param p0, "jsonStr"    # Ljava/lang/String;
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

    .line 173
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 174
    .local v0, "valueMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 175
    const-string v1, "AnalyticsData"

    const-string v2, "onCallback msg is null"

    invoke-static {v1, v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 176
    return-object v0

    .line 179
    :cond_0
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 180
    .local v1, "jsonObject":Lorg/json/JSONObject;
    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v2

    .line 181
    .local v2, "keyIter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 182
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 183
    .local v3, "key":Ljava/lang/String;
    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    invoke-interface {v0, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 184
    nop

    .end local v3    # "key":Ljava/lang/String;
    goto :goto_0

    .line 185
    :cond_1
    return-object v0

    .line 186
    .end local v1    # "jsonObject":Lorg/json/JSONObject;
    .end local v2    # "keyIter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    :catch_0
    move-exception v1

    .line 187
    .local v1, "e":Ljava/lang/Exception;
    const-string v2, "msg"

    invoke-interface {v0, v2, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 188
    return-object v0
.end method

.method public static loginServerResEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;ILjava/lang/String;Ljava/lang/String;)V
    .locals 3
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;
    .param p3, "loginTransactionId"    # Ljava/lang/String;

    .line 89
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 90
    .local v0, "customs":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platformId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 91
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v1

    const-string v2, "sdkVersion"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 92
    const-string v1, "transactionId"

    invoke-interface {v0, v1, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 93
    const/4 v1, -0x1

    const-string v2, "1010103"

    if-eq p1, v1, :cond_1

    const/4 v1, 0x1

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 95
    :cond_0
    const-string v1, "1"

    invoke-static {v2, v1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    .line 96
    goto :goto_0

    .line 98
    :cond_1
    const-string v1, "2"

    invoke-static {v2, v1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    .line 101
    :goto_0
    return-void
.end method

.method public static loginThirdEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 0
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 56
    return-void
.end method

.method public static loginThirdResEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;ILjava/lang/String;)V
    .locals 3
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 65
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 66
    .local v0, "customs":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platformId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 67
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v1

    const-string v2, "sdkVersion"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 68
    sget-object v1, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    const-string v2, "transactionId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 69
    const/16 v1, 0x66

    const-string v2, "1010101"

    if-eq p1, v1, :cond_2

    const/16 v1, 0x69

    if-eq p1, v1, :cond_1

    const/16 v1, 0x6a

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 74
    :cond_0
    const-string v1, "4"

    invoke-static {v2, v1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    .line 75
    goto :goto_0

    .line 77
    :cond_1
    const-string v1, "3"

    invoke-static {v2, v1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_0

    .line 71
    :cond_2
    const-string v1, "2"

    invoke-static {v2, v1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    .line 72
    nop

    .line 80
    :goto_0
    return-void
.end method

.method public static payServerEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 0
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 113
    return-void
.end method

.method public static payServerResEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;ILjava/lang/String;Ljava/lang/String;)V
    .locals 3
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;
    .param p3, "paymentTransactionId"    # Ljava/lang/String;

    .line 122
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 123
    .local v0, "customs":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platformId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 124
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v1

    const-string v2, "sdkVersion"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 125
    sput-object p3, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    const-string v1, "transactionId"

    invoke-interface {v0, v1, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 126
    const/4 v1, -0x1

    const-string v2, "1010203"

    if-eq p1, v1, :cond_1

    const/4 v1, 0x1

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 128
    :cond_0
    const-string v1, "1"

    invoke-static {v2, v1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    .line 129
    goto :goto_0

    .line 131
    :cond_1
    const-string v1, "2"

    invoke-static {v2, v1, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    .line 134
    :goto_0
    return-void
.end method

.method public static payThirdResEvent(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;ILjava/lang/String;)V
    .locals 3
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 143
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 144
    .local v0, "customs":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platformId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 145
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v1

    const-string v2, "sdkVersion"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 146
    sget-object v1, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->transactionId:Ljava/lang/String;

    const-string v2, "transactionId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 147
    const-string v1, "1010204"

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    .line 152
    :pswitch_0
    const-string v2, "4"

    invoke-static {v1, v2, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    .line 153
    goto :goto_0

    .line 155
    :pswitch_1
    const-string v2, "3"

    invoke-static {v1, v2, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_0

    .line 149
    :pswitch_2
    const-string v2, "2"

    invoke-static {v1, v2, v0, p2}, Lcom/bianfeng/ymnsdk/util/AnalyticsData;->datafunOnEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    .line 150
    nop

    .line 158
    :goto_0
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0xc8
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
