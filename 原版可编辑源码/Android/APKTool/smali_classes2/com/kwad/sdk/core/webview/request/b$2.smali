.class final Lcom/kwad/sdk/core/webview/request/b$2;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/webview/request/b;->a(Lcom/kwad/sdk/core/webview/d/b$a;Lcom/kwad/sdk/core/webview/request/b$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/sdk/core/webview/request/a;",
        "Lcom/kwad/sdk/core/webview/request/WebCardGetDataResponse;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic azi:Lcom/kwad/sdk/core/webview/request/b;

.field final synthetic azk:Lcom/kwad/sdk/core/webview/request/b$a;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/webview/request/b;Lcom/kwad/sdk/core/webview/request/b$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/request/b$2;->azi:Lcom/kwad/sdk/core/webview/request/b;

    iput-object p2, p0, Lcom/kwad/sdk/core/webview/request/b$2;->azk:Lcom/kwad/sdk/core/webview/request/b$a;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/sdk/core/webview/request/a;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/network/p;->onStartRequest(Lcom/kwad/sdk/core/network/g;)V

    const-string p1, "WebCardGetDataRequestManager"

    const-string v0, "onStartRequest"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/webview/request/b;->vW()Landroid/os/Handler;

    move-result-object p1

    new-instance v0, Lcom/kwad/sdk/core/webview/request/b$2$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/webview/request/b$2$1;-><init>(Lcom/kwad/sdk/core/webview/request/b$2;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private b(Lcom/kwad/sdk/core/webview/request/WebCardGetDataResponse;)V
    .locals 2

    const-string v0, "WebCardGetDataRequestManager"

    const-string v1, "onSuccess"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/webview/request/b;->vW()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/core/webview/request/b$2$2;

    invoke-direct {v1, p0, p1}, Lcom/kwad/sdk/core/webview/request/b$2$2;-><init>(Lcom/kwad/sdk/core/webview/request/b$2;Lcom/kwad/sdk/core/webview/request/WebCardGetDataResponse;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private m(ILjava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onError errorCode="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " errorMsg="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WebCardGetDataRequestManager"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/webview/request/b;->vW()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/core/webview/request/b$2$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/kwad/sdk/core/webview/request/b$2$3;-><init>(Lcom/kwad/sdk/core/webview/request/b$2;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method


# virtual methods
.method public final synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    invoke-direct {p0, p2, p3}, Lcom/kwad/sdk/core/webview/request/b$2;->m(ILjava/lang/String;)V

    return-void
.end method

.method public final synthetic onStartRequest(Lcom/kwad/sdk/core/network/g;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/webview/request/a;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/webview/request/b$2;->a(Lcom/kwad/sdk/core/webview/request/a;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p2, Lcom/kwad/sdk/core/webview/request/WebCardGetDataResponse;

    invoke-direct {p0, p2}, Lcom/kwad/sdk/core/webview/request/b$2;->b(Lcom/kwad/sdk/core/webview/request/WebCardGetDataResponse;)V

    return-void
.end method
