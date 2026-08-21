.class public abstract Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest;
.super Lcom/bianfeng/netlibsdk/Request;
.source "YmnRequest.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/netlibsdk/Request<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# static fields
.field protected static final PROTOCOL_CHARSET:Ljava/lang/String; = "utf-8"


# instance fields
.field private listener:Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest$a;

.field protected pContent:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 25
    invoke-direct {p0}, Lcom/bianfeng/netlibsdk/Request;-><init>()V

    return-void
.end method


# virtual methods
.method public addHeaders()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 40
    const/4 v0, 0x0

    return-object v0
.end method

.method public deliverError(Lcom/bianfeng/netlibsdk/utils/NetException;)V
    .locals 5
    .param p1, "error"    # Lcom/bianfeng/netlibsdk/utils/NetException;

    .line 103
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest;->listener:Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest$a;

    if-nez v0, :cond_0

    .line 104
    return-void

    .line 106
    :cond_0
    iget-object v1, p1, Lcom/bianfeng/netlibsdk/utils/NetException;->response:Lcom/bianfeng/netlibsdk/NetworkResponse;

    .line 107
    .local v1, "response":Lcom/bianfeng/netlibsdk/NetworkResponse;
    if-eqz v1, :cond_1

    .line 108
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, v1, Lcom/bianfeng/netlibsdk/NetworkResponse;->statusCode:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v1, Lcom/bianfeng/netlibsdk/NetworkResponse;->data:[B

    invoke-static {v4}, Ljava/util/Arrays;->toString([B)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v1, Lcom/bianfeng/netlibsdk/NetworkResponse;->allHeaders:Ljava/util/List;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, v1, Lcom/bianfeng/netlibsdk/NetworkResponse;->notModified:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest$a;->onFail(Ljava/lang/String;)V

    goto :goto_0

    .line 110
    :cond_1
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest$a;->onFail(Ljava/lang/String;)V

    .line 112
    :goto_0
    return-void
.end method

.method protected bridge synthetic deliverResponse(Ljava/lang/Object;)V
    .locals 0

    .line 25
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest;->deliverResponse(Ljava/lang/String;)V

    return-void
.end method

.method protected deliverResponse(Ljava/lang/String;)V
    .locals 1
    .param p1, "response"    # Ljava/lang/String;

    .line 95
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest;->listener:Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest$a;

    if-nez v0, :cond_0

    .line 96
    return-void

    .line 98
    :cond_0
    invoke-interface {v0, p1}, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest$a;->onSuccess(Ljava/lang/String;)V

    .line 99
    return-void
.end method

.method protected formatType(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2
    .param p1, "obj"    # Ljava/lang/Object;

    .line 140
    instance-of v0, p1, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 142
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 143
    :catch_0
    move-exception v0

    .line 144
    .local v0, "e":Ljava/lang/Exception;
    return-object p1

    .line 147
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_0
    return-object p1
.end method

.method protected formatUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p1, "action"    # Ljava/lang/String;

    .line 135
    const-string v0, "ymn"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->getHost(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 136
    .local v0, "urlHost":Ljava/lang/String;
    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    const/4 v2, 0x1

    const-string v3, "v1"

    aput-object v3, v1, v2

    const/4 v2, 0x2

    aput-object p1, v1, v2

    const-string v2, "%s/%s/%s"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public getRequestBody()Ljava/lang/String;
    .locals 1

    .line 45
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest;->pContent:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 46
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest;->pContent:Ljava/lang/String;

    return-object v0

    .line 48
    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public varargs abstract onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation
.end method

.method protected parseNetworkResponse(Lcom/bianfeng/netlibsdk/NetworkResponse;)Lcom/bianfeng/netlibsdk/Response;
    .locals 4
    .param p1, "response"    # Lcom/bianfeng/netlibsdk/NetworkResponse;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/NetworkResponse;",
            ")",
            "Lcom/bianfeng/netlibsdk/Response<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/netlibsdk/utils/NetException;
        }
    .end annotation

    .line 117
    :try_start_0
    new-instance v0, Ljava/lang/String;

    iget-object v1, p1, Lcom/bianfeng/netlibsdk/NetworkResponse;->data:[B

    iget-object v2, p1, Lcom/bianfeng/netlibsdk/NetworkResponse;->headers:Ljava/util/Map;

    const-string v3, "utf-8"

    invoke-static {v2, v3}, Lcom/bianfeng/netlibsdk/HttpHeaderParser;->parseCharset(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    .line 118
    .local v0, "jsonString":Ljava/lang/String;
    const-class v1, Lcom/bianfeng/ymnsdk/gongxiang/k;

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/gongxiang/k;

    .line 119
    .local v1, "responseBean":Lcom/bianfeng/ymnsdk/gongxiang/k;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/gongxiang/k;->c()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 120
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/gongxiang/k;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/netlibsdk/Response;->success(Ljava/lang/Object;)Lcom/bianfeng/netlibsdk/Response;

    move-result-object v2

    return-object v2

    .line 122
    :cond_0
    new-instance v2, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {v2, p1}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Lcom/bianfeng/netlibsdk/NetworkResponse;)V

    invoke-static {v2}, Lcom/bianfeng/netlibsdk/Response;->error(Lcom/bianfeng/netlibsdk/utils/NetException;)Lcom/bianfeng/netlibsdk/Response;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v2

    .line 123
    .end local v0    # "jsonString":Ljava/lang/String;
    .end local v1    # "responseBean":Lcom/bianfeng/ymnsdk/gongxiang/k;
    :catch_0
    move-exception v0

    .line 124
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {v1, v0}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method protected putBasicData(Lorg/json/JSONObject;)V
    .locals 4
    .param p1, "json"    # Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 68
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    .line 69
    .local v0, "dataFunUtils":Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;
    const-string v1, "appid"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppId()I

    move-result v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 70
    const-string v1, "channel"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getChannelId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 71
    const-string v1, "package_id"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getIdentify_id()I

    move-result v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 72
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 73
    .local v1, "base":Lorg/json/JSONObject;
    const-string v2, "df_ver"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getPlatformUtils()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getDatafun_ver()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 74
    const-string v2, "app_key"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppId()I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 75
    const-string v2, "group_id"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getGroupId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 76
    const-string v2, "device_id"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 77
    const-string v2, "version_code"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerCode()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 78
    const-string v2, "version_name"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 79
    const-string v2, "device_mobile"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceModel()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 80
    const-string v2, "device_network"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getNetChannelStr()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 81
    const-string v2, "device_os"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceOS()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 82
    const-string v2, "device_os_version"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getOsVersion()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 83
    const-string v2, "device_pixel"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDevicePixel()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 84
    const-string v2, "device_type"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getDeviceType()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 85
    const-string v2, "device_version_code"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceVersionCode()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 86
    const-string v2, "transactionId"

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInitTrace()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 87
    const-string v2, "base"

    invoke-virtual {p1, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 90
    nop

    .line 91
    .end local v0    # "dataFunUtils":Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;
    .end local v1    # "base":Lorg/json/JSONObject;
    return-void

    .line 88
    :catch_0
    move-exception v0

    .line 89
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public varargs putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V
    .locals 3
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
    .param p2, "datas"    # [Ljava/lang/Object;

    .line 55
    :try_start_0
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest;->onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;

    move-result-object v0

    .line 56
    .local v0, "json":Lorg/json/JSONObject;
    if-eqz v0, :cond_0

    .line 57
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest;->putBasicData(Lorg/json/JSONObject;)V

    .line 58
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest;->pContent:Ljava/lang/String;

    .line 59
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u6d4b\u8bd5---"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest;->pContent:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_0 .. :try_end_0} :catch_0

    .line 63
    .end local v0    # "json":Lorg/json/JSONObject;
    :cond_0
    goto :goto_0

    .line 61
    :catch_0
    move-exception v0

    .line 62
    .local v0, "e":Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 64
    .end local v0    # "e":Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
    :goto_0
    return-void
.end method

.method public setListener(Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest$a;)V
    .locals 0
    .param p1, "listener"    # Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest$a;

    .line 35
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest;->listener:Lcom/bianfeng/ymnsdk/net/ymn/YmnRequest$a;

    .line 36
    return-void
.end method
