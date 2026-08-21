.class final Lcom/kwad/components/core/webview/jshandler/u$2;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/u;->a(Lcom/kwad/components/core/p/a/b;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/components/core/p/a;",
        "Lcom/kwad/components/core/response/model/AdResultData;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic Ue:Lcom/kwad/components/core/webview/jshandler/u;

.field final synthetic lx:Lcom/kwad/sdk/core/webview/c/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/u;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/u$2;->Ue:Lcom/kwad/components/core/webview/jshandler/u;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/u$2;->lx:Lcom/kwad/sdk/core/webview/c/c;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private b(Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 4

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->isAdResultDataEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onError:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    sget-object v3, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v3, v3, Lcom/kwad/sdk/core/network/f;->errorCode:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x1

    iget-object v3, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object p1, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    :goto_0
    aput-object p1, v1, v2

    const-string p1, "code:%s__msg:%s"

    invoke-static {p1, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "WebCardGetKsAdDataHandler"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p1, Lcom/kwad/components/core/webview/jshandler/u$2$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/core/webview/jshandler/u$2$1;-><init>(Lcom/kwad/components/core/webview/jshandler/u$2;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void

    :cond_1
    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u$2$2;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/webview/jshandler/u$2$2;-><init>(Lcom/kwad/components/core/webview/jshandler/u$2;Lcom/kwad/components/core/response/model/AdResultData;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method private f(ILjava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "requestAggregateAd onError code:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " msg: "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "WebCardGetKsAdDataHandler"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/u$2;->Ue:Lcom/kwad/components/core/webview/jshandler/u;

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/u$2;->lx:Lcom/kwad/sdk/core/webview/c/c;

    invoke-static {p1, p2}, Lcom/kwad/components/core/webview/jshandler/u;->a(Lcom/kwad/components/core/webview/jshandler/u;Lcom/kwad/sdk/core/webview/c/c;)V

    return-void
.end method


# virtual methods
.method public final synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    invoke-direct {p0, p2, p3}, Lcom/kwad/components/core/webview/jshandler/u$2;->f(ILjava/lang/String;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p2, Lcom/kwad/components/core/response/model/AdResultData;

    invoke-direct {p0, p2}, Lcom/kwad/components/core/webview/jshandler/u$2;->b(Lcom/kwad/components/core/response/model/AdResultData;)V

    return-void
.end method
