.class public abstract Lcom/kwad/sdk/core/network/m;
.super Lcom/kwad/sdk/core/network/a;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<R::",
        "Lcom/kwad/sdk/core/network/g;",
        "T:",
        "Lcom/kwad/sdk/core/network/BaseResultData;",
        ">",
        "Lcom/kwad/sdk/core/network/a<",
        "TR;>;"
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "Networking"


# instance fields
.field private mListener:Lcom/kwad/sdk/core/network/h;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/sdk/core/network/h<",
            "TR;TT;>;"
        }
    .end annotation
.end field

.field private final mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/a;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/core/network/m;->mListener:Lcom/kwad/sdk/core/network/h;

    invoke-static {}, Lcom/kwad/sdk/core/network/b/c;->BA()Lcom/kwad/sdk/core/network/b/b;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    return-void
.end method

.method private checkAndSetHasData(Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/network/BaseResultData;->hasData()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    const/4 v0, 0x1

    invoke-interface {p1, v0}, Lcom/kwad/sdk/core/network/b/b;->ca(I)Lcom/kwad/sdk/core/network/b/b;

    :cond_0
    return-void
.end method

.method private checkIpDirect(Lcom/kwad/sdk/core/network/c;)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/sdk/core/network/c;->Bd()Z

    move-result p1

    if-nez p1, :cond_1

    const-class p1, Lcom/kwad/sdk/service/a/e;

    invoke-static {p1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/service/a/e;

    if-eqz p1, :cond_1

    invoke-interface {p1}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/ag;->isNetworkConnected(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/kwad/sdk/ip/direct/a;->FS()V

    :cond_1
    return-void
.end method

.method private notifyOnErrorListener(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;I",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    invoke-static {}, Lcom/kwad/sdk/core/network/i;->Bh()Lcom/kwad/sdk/core/network/i;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/network/i;->b(Lcom/kwad/sdk/core/network/g;I)V

    iget-object v0, p0, Lcom/kwad/sdk/core/network/m;->mListener:Lcom/kwad/sdk/core/network/h;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/core/network/h;->onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    invoke-interface {p1}, Lcom/kwad/sdk/core/network/b/b;->Bz()Lcom/kwad/sdk/core/network/b/b;

    return-void
.end method

.method private notifyOnErrorListener(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/c;Ljava/lang/String;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;",
            "Lcom/kwad/sdk/core/network/c;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    invoke-interface {p1}, Lcom/kwad/sdk/core/network/g;->getUrl()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/core/network/idc/DomainException;

    iget v2, p2, Lcom/kwad/sdk/core/network/c;->aoK:I

    iget-object v3, p2, Lcom/kwad/sdk/core/network/c;->aoL:Ljava/lang/Exception;

    invoke-direct {v1, v2, v3}, Lcom/kwad/sdk/core/network/idc/DomainException;-><init>(ILjava/lang/Throwable;)V

    const-string v2, "/rest/zt/emoticon/package/list"

    invoke-virtual {v0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, "zt"

    goto :goto_0

    :cond_0
    const-string v2, "api"

    :goto_0
    invoke-static {}, Lcom/kwad/sdk/core/network/idc/a;->Bo()Lcom/kwad/sdk/core/network/idc/a;

    move-result-object v3

    invoke-virtual {v3, v0, v2, v1}, Lcom/kwad/sdk/core/network/idc/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/network/idc/DomainException;)V

    iget p2, p2, Lcom/kwad/sdk/core/network/c;->code:I

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/core/network/m;->notifyOnErrorListener(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    return-void
.end method

.method private notifyOnStartRequest(Lcom/kwad/sdk/core/network/g;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/core/network/m;->mListener:Lcom/kwad/sdk/core/network/h;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/network/h;->onStartRequest(Lcom/kwad/sdk/core/network/g;)V

    return-void
.end method

.method private notifyOnSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;TT;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/core/network/m;->mListener:Lcom/kwad/sdk/core/network/h;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/core/network/h;->onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V

    iget-object p1, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    invoke-interface {p1}, Lcom/kwad/sdk/core/network/b/b;->Bz()Lcom/kwad/sdk/core/network/b/b;

    return-void
.end method

.method private onRequest(Lcom/kwad/sdk/core/network/h;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/network/h<",
            "TR;TT;>;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    invoke-interface {v0}, Lcom/kwad/sdk/core/network/b/b;->Bt()Lcom/kwad/sdk/core/network/b/b;

    iput-object p1, p0, Lcom/kwad/sdk/core/network/m;->mListener:Lcom/kwad/sdk/core/network/h;

    return-void
.end method

.method private parseCommonData(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "requestSessionData"

    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {}, Lcom/kwad/sdk/core/network/r;->Bk()Lcom/kwad/sdk/core/network/r;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/network/r;->N(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method

.method private setMonitorRequestId(Lcom/kwad/sdk/core/network/g;)V
    .locals 1

    invoke-interface {p1}, Lcom/kwad/sdk/core/network/g;->getHeader()Ljava/util/Map;

    move-result-object p1

    if-eqz p1, :cond_0

    const-string v0, "kuaishou-tracing-token"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/network/b/b;->dj(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;

    :cond_0
    return-void
.end method


# virtual methods
.method protected afterParseData(Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)V"
        }
    .end annotation

    return-void
.end method

.method public cancel()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/core/network/a;->cancel()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/core/network/m;->mListener:Lcom/kwad/sdk/core/network/h;

    return-void
.end method

.method protected enableMonitorReport()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method protected fetchImpl()V
    .locals 7

    const-string v0, "requestError:"

    :try_start_0
    iget-object v1, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    invoke-interface {v1}, Lcom/kwad/sdk/core/network/b/b;->Bx()Lcom/kwad/sdk/core/network/b/b;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/m;->createRequest()Lcom/kwad/sdk/core/network/g;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/kwad/sdk/core/network/m;->notifyOnStartRequest(Lcom/kwad/sdk/core/network/g;)V

    iget-object v2, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    invoke-interface {v1}, Lcom/kwad/sdk/core/network/g;->getUrl()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v3}, Lcom/kwad/sdk/core/network/b/b;->df(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;

    move-result-object v2

    invoke-interface {v1}, Lcom/kwad/sdk/core/network/g;->getUrl()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v3}, Lcom/kwad/sdk/core/network/b/b;->dg(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;

    invoke-direct {p0, v1}, Lcom/kwad/sdk/core/network/m;->setMonitorRequestId(Lcom/kwad/sdk/core/network/g;)V

    const-class v2, Lcom/kwad/sdk/service/a/e;

    invoke-static {v2}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v2}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/utils/ag;->isNetworkConnected(Landroid/content/Context;)Z

    move-result v2

    if-nez v2, :cond_0

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoS:Lcom/kwad/sdk/core/network/f;

    iget v2, v2, Lcom/kwad/sdk/core/network/f;->errorCode:I

    sget-object v3, Lcom/kwad/sdk/core/network/f;->aoS:Lcom/kwad/sdk/core/network/f;

    iget-object v3, v3, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-direct {p0, v1, v2, v3}, Lcom/kwad/sdk/core/network/m;->notifyOnErrorListener(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoS:Lcom/kwad/sdk/core/network/f;

    iget v2, v2, Lcom/kwad/sdk/core/network/f;->errorCode:I

    invoke-interface {v1, v2}, Lcom/kwad/sdk/core/network/b/b;->bZ(I)Lcom/kwad/sdk/core/network/b/b;

    move-result-object v1

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoS:Lcom/kwad/sdk/core/network/f;

    iget-object v2, v2, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-interface {v1, v2}, Lcom/kwad/sdk/core/network/b/b;->dh(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto/16 :goto_3

    :cond_0
    const/4 v2, 0x0

    :try_start_1
    invoke-interface {v1}, Lcom/kwad/sdk/core/network/g;->getUrl()Ljava/lang/String;

    move-result-object v3

    invoke-static {}, Lcom/kwad/sdk/g;->wX()Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    move-result-object v4

    instance-of v5, v4, Lcom/kwad/sdk/core/network/c/b;

    if-eqz v5, :cond_1

    iget-object v5, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    const-string v6, "ok_http"

    invoke-interface {v5, v6}, Lcom/kwad/sdk/core/network/b/b;->di(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;

    move-result-object v5

    :goto_0
    invoke-interface {v5}, Lcom/kwad/sdk/core/network/b/b;->Bw()Lcom/kwad/sdk/core/network/b/b;

    goto :goto_1

    :cond_1
    iget-object v5, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    const-string v6, "http"

    invoke-interface {v5, v6}, Lcom/kwad/sdk/core/network/b/b;->di(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;

    move-result-object v5

    goto :goto_0

    :goto_1
    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/m;->isPostByJson()Z

    move-result v5

    if-eqz v5, :cond_2

    invoke-interface {v1}, Lcom/kwad/sdk/core/network/g;->getHeader()Ljava/util/Map;

    move-result-object v5

    invoke-interface {v1}, Lcom/kwad/sdk/core/network/g;->getBody()Lorg/json/JSONObject;

    move-result-object v6

    invoke-interface {v4, v3, v5, v6}, Lcom/kwad/sdk/export/proxy/AdHttpProxy;->doPost(Ljava/lang/String;Ljava/util/Map;Lorg/json/JSONObject;)Lcom/kwad/sdk/core/network/c;

    move-result-object v2

    goto :goto_2

    :cond_2
    invoke-interface {v1}, Lcom/kwad/sdk/core/network/g;->getHeader()Ljava/util/Map;

    move-result-object v5

    invoke-interface {v1}, Lcom/kwad/sdk/core/network/g;->getBodyMap()Ljava/util/Map;

    move-result-object v6

    invoke-interface {v4, v3, v5, v6}, Lcom/kwad/sdk/export/proxy/AdHttpProxy;->doPost(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)Lcom/kwad/sdk/core/network/c;

    move-result-object v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catch_0
    move-exception v3

    :try_start_2
    invoke-static {v3}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    iget-object v4, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v4, v3}, Lcom/kwad/sdk/core/network/b/b;->dh(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;

    :goto_2
    iget-object v3, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    invoke-interface {v3}, Lcom/kwad/sdk/core/network/b/b;->Bu()Lcom/kwad/sdk/core/network/b/b;

    move-result-object v3

    invoke-interface {v3}, Lcom/kwad/sdk/core/network/b/b;->Bv()Lcom/kwad/sdk/core/network/b/b;

    move-result-object v3

    invoke-static {}, Lcom/kwad/sdk/ip/direct/a;->getType()I

    move-result v4

    invoke-interface {v3, v4}, Lcom/kwad/sdk/core/network/b/b;->cc(I)Lcom/kwad/sdk/core/network/b/b;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :try_start_3
    invoke-virtual {p0, v1, v2}, Lcom/kwad/sdk/core/network/m;->onResponse(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/c;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_3

    :catch_1
    move-exception v1

    :try_start_4
    iget-object v2, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "onResponseError:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v3}, Lcom/kwad/sdk/core/network/b/b;->dh(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    :goto_3
    :try_start_5
    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/m;->enableMonitorReport()Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    invoke-interface {v0}, Lcom/kwad/sdk/core/network/b/b;->report()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    :catch_2
    :cond_3
    return-void

    :catchall_0
    move-exception v1

    :try_start_6
    iget-object v2, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v2, v0}, Lcom/kwad/sdk/core/network/b/b;->dh(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    goto :goto_4

    :catchall_1
    move-exception v0

    goto :goto_5

    :catch_3
    :goto_4
    :try_start_7
    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    :try_start_8
    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/m;->enableMonitorReport()Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    invoke-interface {v0}, Lcom/kwad/sdk/core/network/b/b;->report()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_4

    :catch_4
    :cond_4
    return-void

    :goto_5
    :try_start_9
    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/m;->enableMonitorReport()Z

    move-result v1

    if-eqz v1, :cond_5

    iget-object v1, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    invoke-interface {v1}, Lcom/kwad/sdk/core/network/b/b;->report()V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_5

    :catch_5
    :cond_5
    throw v0
.end method

.method protected isPostByJson()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method protected onResponse(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/c;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;",
            "Lcom/kwad/sdk/core/network/c;",
            ")V"
        }
    .end annotation

    const-string v0, "Networking"

    if-nez p2, :cond_0

    sget-object p2, Lcom/kwad/sdk/core/network/f;->aoS:Lcom/kwad/sdk/core/network/f;

    iget p2, p2, Lcom/kwad/sdk/core/network/f;->errorCode:I

    sget-object v1, Lcom/kwad/sdk/core/network/f;->aoS:Lcom/kwad/sdk/core/network/f;

    iget-object v1, v1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-direct {p0, p1, p2, v1}, Lcom/kwad/sdk/core/network/m;->notifyOnErrorListener(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    const-string p2, "responseBase is null"

    invoke-interface {p1, p2}, Lcom/kwad/sdk/core/network/b/b;->dh(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;

    const-string p1, "request responseBase is null"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    iget v2, p2, Lcom/kwad/sdk/core/network/c;->code:I

    invoke-interface {v1, v2}, Lcom/kwad/sdk/core/network/b/b;->bZ(I)Lcom/kwad/sdk/core/network/b/b;

    invoke-direct {p0, p2}, Lcom/kwad/sdk/core/network/m;->checkIpDirect(Lcom/kwad/sdk/core/network/c;)V

    iget-object v1, p2, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, ":"

    if-nez v1, :cond_6

    invoke-virtual {p2}, Lcom/kwad/sdk/core/network/c;->Bd()Z

    move-result v1

    if-nez v1, :cond_1

    goto/16 :goto_1

    :cond_1
    :try_start_0
    invoke-interface {p1}, Lcom/kwad/sdk/core/network/g;->getUrl()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p2, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    invoke-direct {p0, v0, v1}, Lcom/kwad/sdk/core/network/m;->parseCommonData(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p2, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/network/m;->parseData(Ljava/lang/String;)Lcom/kwad/sdk/core/network/BaseResultData;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/network/m;->afterParseData(Lcom/kwad/sdk/core/network/BaseResultData;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    iget-object v1, p2, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    iget-object p2, p2, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result p2

    int-to-long v3, p2

    invoke-interface {v1, v3, v4}, Lcom/kwad/sdk/core/network/b/b;->Y(J)Lcom/kwad/sdk/core/network/b/b;

    move-result-object p2

    invoke-interface {p2}, Lcom/kwad/sdk/core/network/b/b;->By()Lcom/kwad/sdk/core/network/b/b;

    move-result-object p2

    iget v1, v0, Lcom/kwad/sdk/core/network/BaseResultData;->result:I

    invoke-interface {p2, v1}, Lcom/kwad/sdk/core/network/b/b;->cb(I)Lcom/kwad/sdk/core/network/b/b;

    :cond_2
    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/BaseResultData;->isResultOk()Z

    move-result p2

    if-nez p2, :cond_3

    iget-object p2, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "serverCodeError:"

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v3, v0, Lcom/kwad/sdk/core/network/BaseResultData;->result:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v0, Lcom/kwad/sdk/core/network/BaseResultData;->errorMsg:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v1}, Lcom/kwad/sdk/core/network/b/b;->dh(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/BaseResultData;->notifyFailOnResultError()Z

    move-result p2

    if-eqz p2, :cond_3

    iget p2, v0, Lcom/kwad/sdk/core/network/BaseResultData;->result:I

    iget-object v0, v0, Lcom/kwad/sdk/core/network/BaseResultData;->errorMsg:Ljava/lang/String;

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/sdk/core/network/m;->notifyOnErrorListener(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    return-void

    :cond_3
    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/BaseResultData;->isDataEmpty()Z

    move-result p2

    if-eqz p2, :cond_5

    sget-object p2, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget p2, p2, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object v1, v0, Lcom/kwad/sdk/core/network/BaseResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    iget-object v0, v0, Lcom/kwad/sdk/core/network/BaseResultData;->testErrorMsg:Ljava/lang/String;

    goto :goto_0

    :cond_4
    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object v0, v0, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    :goto_0
    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/sdk/core/network/m;->notifyOnErrorListener(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    return-void

    :cond_5
    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/network/m;->checkAndSetHasData(Lcom/kwad/sdk/core/network/BaseResultData;)V

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/core/network/m;->notifyOnSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V

    return-void

    :catch_0
    move-exception p2

    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoT:Lcom/kwad/sdk/core/network/f;

    iget v0, v0, Lcom/kwad/sdk/core/network/f;->errorCode:I

    sget-object v1, Lcom/kwad/sdk/core/network/f;->aoT:Lcom/kwad/sdk/core/network/f;

    iget-object v1, v1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-direct {p0, p1, v0, v1}, Lcom/kwad/sdk/core/network/m;->notifyOnErrorListener(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    invoke-static {p2}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    iget-object p1, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "parseDataError:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/core/network/b/b;->dh(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;

    return-void

    :cond_6
    :goto_1
    const-string v1, "\u7f51\u7edc\u9519\u8bef"

    invoke-direct {p0, p1, p2, v1}, Lcom/kwad/sdk/core/network/m;->notifyOnErrorListener(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/c;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/sdk/core/network/m;->mMonitorRecorder:Lcom/kwad/sdk/core/network/b/b;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "httpCodeError:"

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v3, p2, Lcom/kwad/sdk/core/network/c;->code:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p2, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v1}, Lcom/kwad/sdk/core/network/b/b;->dh(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "request responseBase httpCodeError:"

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget p2, p2, Lcom/kwad/sdk/core/network/c;->code:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected abstract parseData(Ljava/lang/String;)Lcom/kwad/sdk/core/network/BaseResultData;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")TT;"
        }
    .end annotation
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

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/m;->onRequest(Lcom/kwad/sdk/core/network/h;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/m;->fetch()V

    return-void
.end method
