.class public Lcom/bianfeng/ymnsdk/actionv2/c;
.super Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;
.source "RequestOrderStatusActionV2.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field private a:Ljava/util/TreeMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;

    .line 20
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;-><init>(Landroid/content/Context;)V

    .line 21
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->httpHelper:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->setMethod(I)V

    .line 22
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInitTrace()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/c;->b:Ljava/lang/String;

    .line 23
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->httpHelper:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->getHeadersMap()Ljava/util/TreeMap;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/c;->a:Ljava/util/TreeMap;

    .line 24
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInitTrace()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/c;->b:Ljava/lang/String;

    .line 25
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/c;->a:Ljava/util/TreeMap;

    const-string v1, "Content-Type"

    const-string v2, "application/json"

    invoke-virtual {v0, v1, v2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 26
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/c;->a:Ljava/util/TreeMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "X-App-Id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 27
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/c;->a:Ljava/util/TreeMap;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getConfigIdStr()Ljava/lang/String;

    move-result-object v1

    const-string v2, "X-Package-Id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 28
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/c;->a:Ljava/util/TreeMap;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/c;->b:Ljava/lang/String;

    const-string v2, "X-Nonce-Str"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 29
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/c;->a:Ljava/util/TreeMap;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/c;->b:Ljava/lang/String;

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 31
    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 1

    .line 35
    const-string v0, "v2/trade/query"

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public varargs onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 4
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
    .param p2, "datas"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 41
    const/4 v0, 0x0

    aget-object v0, p2, v0

    check-cast v0, Ljava/lang/String;

    .line 42
    .local v0, "orderid":Ljava/lang/String;
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/c;->b:Ljava/lang/String;

    const-string v2, ""

    invoke-virtual {p0, v2, v2, v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->setPayloadEntity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 43
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 45
    .local v1, "object":Lorg/json/JSONObject;
    :try_start_0
    const-string v2, "order_no"

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 48
    nop

    .line 49
    return-object v1

    .line 46
    :catch_0
    move-exception v2

    .line 47
    .local v2, "e":Ljava/lang/Exception;
    new-instance v3, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v3, v2}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v3
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 15
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/c;->onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/lang/String;
    .locals 1
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 55
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getSrcRes()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
