.class public abstract Lcom/kwad/sdk/core/network/n;
.super Lcom/kwad/sdk/core/network/a;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<R::",
        "Lcom/kwad/sdk/core/network/o;",
        "T:",
        "Lcom/kwad/sdk/core/network/NormalResultData;",
        ">",
        "Lcom/kwad/sdk/core/network/a<",
        "TR;>;"
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "NormalNetworking"


# instance fields
.field private mListener:Lcom/kwad/sdk/core/network/h;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/sdk/core/network/h<",
            "TR;TT;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/a;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/core/network/n;->mListener:Lcom/kwad/sdk/core/network/h;

    return-void
.end method

.method private onRequest(Lcom/kwad/sdk/core/network/h;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/network/h<",
            "TR;TT;>;)V"
        }
    .end annotation

    iput-object p1, p0, Lcom/kwad/sdk/core/network/n;->mListener:Lcom/kwad/sdk/core/network/h;

    return-void
.end method


# virtual methods
.method protected cancel()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/core/network/a;->cancel()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/core/network/n;->mListener:Lcom/kwad/sdk/core/network/h;

    return-void
.end method

.method protected abstract createResponseData()Lcom/kwad/sdk/core/network/NormalResultData;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TT;"
        }
    .end annotation
.end method

.method protected fetchImpl()V
    .locals 6

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/n;->createRequest()Lcom/kwad/sdk/core/network/g;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/network/o;

    const/4 v1, 0x0

    :try_start_0
    invoke-interface {v0}, Lcom/kwad/sdk/core/network/o;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0}, Lcom/kwad/sdk/core/network/o;->getMethod()Ljava/lang/String;

    move-result-object v3

    const-string v4, "POST"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-static {}, Lcom/kwad/sdk/g;->wX()Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    move-result-object v3

    invoke-interface {v0}, Lcom/kwad/sdk/core/network/o;->getHeader()Ljava/util/Map;

    move-result-object v4

    invoke-interface {v0}, Lcom/kwad/sdk/core/network/o;->getBody()Lorg/json/JSONObject;

    move-result-object v5

    invoke-interface {v3, v2, v4, v5}, Lcom/kwad/sdk/export/proxy/AdHttpProxy;->doPost(Ljava/lang/String;Ljava/util/Map;Lorg/json/JSONObject;)Lcom/kwad/sdk/core/network/c;

    move-result-object v1

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/g;->wX()Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    move-result-object v3

    invoke-interface {v0}, Lcom/kwad/sdk/core/network/o;->getHeader()Ljava/util/Map;

    move-result-object v4

    invoke-interface {v3, v2, v4}, Lcom/kwad/sdk/export/proxy/AdHttpProxy;->doGet(Ljava/lang/String;Ljava/util/Map;)Lcom/kwad/sdk/core/network/c;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    const-string v2, "NormalNetworking"

    if-eqz v1, :cond_1

    :try_start_1
    iget v3, v1, Lcom/kwad/sdk/core/network/c;->code:I

    const/16 v4, 0xc8

    if-ne v3, v4, :cond_1

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "normal request success:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v4, v1, Lcom/kwad/sdk/core/network/c;->code:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    :goto_1
    invoke-static {v2, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :cond_1
    const-string v3, "normal request failed"
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v2

    invoke-static {v2}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    if-nez v1, :cond_2

    new-instance v1, Lcom/kwad/sdk/core/network/c;

    invoke-direct {v1}, Lcom/kwad/sdk/core/network/c;-><init>()V

    :cond_2
    const/4 v3, -0x1

    iput v3, v1, Lcom/kwad/sdk/core/network/c;->code:I

    iput-object v2, v1, Lcom/kwad/sdk/core/network/c;->aoL:Ljava/lang/Exception;

    :goto_2
    invoke-virtual {p0, v0, v1}, Lcom/kwad/sdk/core/network/n;->onResponse(Lcom/kwad/sdk/core/network/o;Lcom/kwad/sdk/core/network/c;)V

    return-void
.end method

.method protected bridge synthetic onResponse(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/c;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/network/o;

    invoke-virtual {p0, p1, p2}, Lcom/kwad/sdk/core/network/n;->onResponse(Lcom/kwad/sdk/core/network/o;Lcom/kwad/sdk/core/network/c;)V

    return-void
.end method

.method protected onResponse(Lcom/kwad/sdk/core/network/o;Lcom/kwad/sdk/core/network/c;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;",
            "Lcom/kwad/sdk/core/network/c;",
            ")V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/core/network/n;->mListener:Lcom/kwad/sdk/core/network/h;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p2}, Lcom/kwad/sdk/core/network/c;->Bd()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/n;->createResponseData()Lcom/kwad/sdk/core/network/NormalResultData;

    move-result-object v0

    invoke-virtual {p0, v0, p2}, Lcom/kwad/sdk/core/network/n;->parseResponse(Lcom/kwad/sdk/core/network/NormalResultData;Lcom/kwad/sdk/core/network/c;)V

    iget-object p2, p0, Lcom/kwad/sdk/core/network/n;->mListener:Lcom/kwad/sdk/core/network/h;

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/core/network/h;->onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/network/n;->mListener:Lcom/kwad/sdk/core/network/h;

    iget v1, p2, Lcom/kwad/sdk/core/network/c;->code:I

    iget-object v2, p2, Lcom/kwad/sdk/core/network/c;->aoL:Ljava/lang/Exception;

    if-eqz v2, :cond_2

    iget-object p2, p2, Lcom/kwad/sdk/core/network/c;->aoL:Ljava/lang/Exception;

    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_2
    const-string p2, ""

    :goto_0
    invoke-interface {v0, p1, v1, p2}, Lcom/kwad/sdk/core/network/h;->onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    return-void
.end method

.method protected parseResponse(Lcom/kwad/sdk/core/network/NormalResultData;Lcom/kwad/sdk/core/network/c;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;",
            "Lcom/kwad/sdk/core/network/c;",
            ")V"
        }
    .end annotation

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/network/NormalResultData;->parseResponse(Lcom/kwad/sdk/core/network/c;)V

    return-void
.end method

.method public request(Lcom/kwad/sdk/core/network/h;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/network/h<",
            "TR;TT;>;)V"
        }
    .end annotation

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/n;->onRequest(Lcom/kwad/sdk/core/network/h;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/n;->fetch()V

    return-void
.end method
