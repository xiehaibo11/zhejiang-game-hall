.class public Lcom/bianfeng/ymnsdk/actionv2/d;
.super Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;
.source "RequestProductsActionV2.java"


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

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/d;->b:Ljava/lang/String;

    .line 23
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->httpHelper:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->getHeadersMap()Ljava/util/TreeMap;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/d;->a:Ljava/util/TreeMap;

    .line 24
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInitTrace()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/d;->b:Ljava/lang/String;

    .line 25
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/d;->a:Ljava/util/TreeMap;

    const-string v1, "Content-Type"

    const-string v2, "application/json"

    invoke-virtual {v0, v1, v2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 26
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/d;->a:Ljava/util/TreeMap;

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
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/d;->a:Ljava/util/TreeMap;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getConfigIdStr()Ljava/lang/String;

    move-result-object v1

    const-string v2, "X-Package-Id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 28
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/d;->a:Ljava/util/TreeMap;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/d;->b:Ljava/lang/String;

    const-string v2, "X-Nonce-Str"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 29
    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 1

    .line 33
    const-string v0, "v2/trade/goods"

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

    .line 39
    const/4 v0, 0x0

    aget-object v0, p2, v0

    check-cast v0, Ljava/util/Map;

    .line 40
    .local v0, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v1, "role_id"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "role_name"

    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/actionv2/d;->b:Ljava/lang/String;

    invoke-virtual {p0, v1, v2, v3}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->setPayloadEntity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 41
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 42
    .local v1, "object":Lorg/json/JSONObject;
    return-object v1
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 16
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/d;->onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/lang/String;

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

    .line 48
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getSrcRes()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
