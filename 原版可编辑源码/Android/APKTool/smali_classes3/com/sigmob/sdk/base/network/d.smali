.class public Lcom/sigmob/sdk/base/network/d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/network/d$b;,
        Lcom/sigmob/sdk/base/network/d$a;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/network/d$a;)V
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getRequestQueue()Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_1

    if-eqz p1, :cond_0

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_NETWORK:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    const-string v2, "request queue is null"

    invoke-interface {p1, v0, v2, v1, p0}, Lcom/sigmob/sdk/base/network/d$a;->a(ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    :cond_0
    return-void

    :cond_1
    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->l()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/i;->m()Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_2
    :goto_0
    new-instance v2, Ljava/net/URL;

    invoke-direct {v2, v0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/net/URL;->getHost()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/common/network/SigmobRequestUtil;->isConnection(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_4

    if-eqz p1, :cond_3

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_NETWORK:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    const-string v2, "network is disconnection"

    invoke-interface {p1, v0, v2, v1, p0}, Lcom/sigmob/sdk/base/network/d$a;->a(ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    :cond_3
    return-void

    :cond_4
    new-instance v2, Lcom/sigmob/sdk/base/network/a;

    invoke-direct {v2, v0, p0, p1}, Lcom/sigmob/sdk/base/network/a;-><init>(Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/network/d$a;)V

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getRequestQueue()Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->add(Lcom/czhj/volley/Request;)Lcom/czhj/volley/Request;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    if-eqz p1, :cond_5

    sget-object v2, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_NETWORK:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v2}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v2

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v2, v0, v1, p0}, Lcom/sigmob/sdk/base/network/d$a;->a(ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    :cond_5
    :goto_1
    return-void
.end method
