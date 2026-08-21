.class public Lcom/sigmob/sdk/base/network/e;
.super Lcom/czhj/sdk/common/network/SigmobRequest;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/network/e$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/sdk/common/network/SigmobRequest<",
        "Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;",
        ">;"
    }
.end annotation


# instance fields
.field private final a:Lcom/sigmob/sdk/base/network/e$a;

.field private final b:Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/sigmob/sdk/base/network/e$a;)V
    .locals 2

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0, p2}, Lcom/czhj/sdk/common/network/SigmobRequest;-><init>(Ljava/lang/String;ILcom/czhj/volley/Response$ErrorListener;)V

    iput-object p2, p0, Lcom/sigmob/sdk/base/network/e;->a:Lcom/sigmob/sdk/base/network/e$a;

    new-instance p1, Lcom/czhj/volley/DefaultRetryPolicy;

    const/16 p2, 0x2710

    const/4 v0, 0x2

    const/4 v1, 0x0

    invoke-direct {p1, p2, v0, v1}, Lcom/czhj/volley/DefaultRetryPolicy;-><init>(IIF)V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/network/e;->setRetryPolicy(Lcom/czhj/volley/RetryPolicy;)Lcom/czhj/volley/Request;

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/network/e;->setShouldCache(Z)Lcom/czhj/volley/Request;

    invoke-static {}, Lcom/sigmob/sdk/base/network/e;->a()Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/network/e;->b:Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;

    return-void
.end method

.method public static a()Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;-><init>()V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceLocale()Ljava/util/Locale;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/network/a;->b()Lcom/czhj/sdk/common/models/App$Builder;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/App$Builder;->build()Lcom/czhj/sdk/common/models/App;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->app(Lcom/czhj/sdk/common/models/App;)Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;

    invoke-static {}, Lcom/sigmob/sdk/base/network/a;->c()Lcom/czhj/sdk/common/models/User$Builder;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/User$Builder;->build()Lcom/czhj/sdk/common/models/User;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->user(Lcom/czhj/sdk/common/models/User;)Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;

    invoke-static {}, Lcom/sigmob/sdk/base/network/a;->d()Lcom/czhj/sdk/common/models/Privacy$Builder;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Privacy$Builder;->build()Lcom/czhj/sdk/common/models/Privacy;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->privacy(Lcom/czhj/sdk/common/models/Privacy;)Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createNetwork()Lcom/czhj/sdk/common/models/Network$Builder;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Network$Builder;->build()Lcom/czhj/sdk/common/models/Network;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->network(Lcom/czhj/sdk/common/models/Network;)Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createDevice()Lcom/czhj/sdk/common/models/Device$Builder;

    move-result-object v1

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createDeviceId()Lcom/czhj/sdk/common/models/DeviceId$Builder;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->build()Lcom/czhj/sdk/common/models/DeviceId;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/Device$Builder;->did(Lcom/czhj/sdk/common/models/DeviceId;)Lcom/czhj/sdk/common/models/Device$Builder;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Device$Builder;->build()Lcom/czhj/sdk/common/models/Device;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->device(Lcom/czhj/sdk/common/models/Device;)Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;

    :cond_0
    return-object v0
.end method


# virtual methods
.method protected a(Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/e;->a:Lcom/sigmob/sdk/base/network/e$a;

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/base/network/e$a;->a(Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;)V

    return-void
.end method

.method public b()Lcom/sigmob/sdk/base/network/e$a;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/e;->a:Lcom/sigmob/sdk/base/network/e$a;

    return-object v0
.end method

.method protected synthetic deliverResponse(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/network/e;->a(Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;)V

    return-void
.end method

.method public getBody()[B
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/e;->b:Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->build()Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "send SdkConfig Request: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :try_start_0
    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->encode()[B

    move-result-object v1

    const-string v2, "KGpfzbYsn4T9Jyuq"

    invoke-static {v1, v2}, Lcom/czhj/sdk/common/utils/AESUtil;->Encrypt([BLjava/lang/String;)[B

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->encode()[B

    move-result-object v0

    return-object v0
.end method

.method public getBodyContentType()Ljava/lang/String;
    .locals 1

    const-string v0, "application/octet-stream"

    return-object v0
.end method

.method public getHeaders()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-super {p0}, Lcom/czhj/sdk/common/network/SigmobRequest;->getHeaders()Ljava/util/Map;

    move-result-object v0

    const-string v1, "e"

    const-string v2, "1"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected parseNetworkResponse(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Response;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/NetworkResponse;",
            ")",
            "Lcom/czhj/volley/Response<",
            "Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;",
            ">;"
        }
    .end annotation

    :try_start_0
    sget-object v0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/volley/NetworkResponse;->data:[B

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->decode([B)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;

    invoke-static {p1}, Lcom/czhj/volley/toolbox/HttpHeaderParser;->parseCacheHeaders(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Cache$Entry;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/czhj/volley/Response;->success(Ljava/lang/Object;Lcom/czhj/volley/Cache$Entry;)Lcom/czhj/volley/Response;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    new-instance v0, Lcom/czhj/volley/ParseError;

    invoke-direct {v0, p1}, Lcom/czhj/volley/ParseError;-><init>(Ljava/lang/Throwable;)V

    invoke-static {v0}, Lcom/czhj/volley/Response;->error(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1
.end method
