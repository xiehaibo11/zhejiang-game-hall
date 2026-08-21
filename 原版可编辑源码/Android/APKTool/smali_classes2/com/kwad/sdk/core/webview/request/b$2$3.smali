.class final Lcom/kwad/sdk/core/webview/request/b$2$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/webview/request/b$2;->m(ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic IA:Ljava/lang/String;

.field final synthetic Iz:I

.field final synthetic azl:Lcom/kwad/sdk/core/webview/request/b$2;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/webview/request/b$2;ILjava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/request/b$2$3;->azl:Lcom/kwad/sdk/core/webview/request/b$2;

    iput p2, p0, Lcom/kwad/sdk/core/webview/request/b$2$3;->Iz:I

    iput-object p3, p0, Lcom/kwad/sdk/core/webview/request/b$2$3;->IA:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "load onError:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    iget v2, p0, Lcom/kwad/sdk/core/webview/request/b$2$3;->Iz:I

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/kwad/sdk/core/webview/request/b$2$3;->IA:Ljava/lang/String;

    const/4 v3, 0x1

    aput-object v2, v1, v3

    const-string v2, "code:%s__msg:%s"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WebCardGetDataRequestManager"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/request/b$2$3;->azl:Lcom/kwad/sdk/core/webview/request/b$2;

    iget-object v0, v0, Lcom/kwad/sdk/core/webview/request/b$2;->azk:Lcom/kwad/sdk/core/webview/request/b$a;

    iget v1, p0, Lcom/kwad/sdk/core/webview/request/b$2$3;->Iz:I

    iget-object v2, p0, Lcom/kwad/sdk/core/webview/request/b$2$3;->IA:Ljava/lang/String;

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/core/webview/request/b$a;->onError(ILjava/lang/String;)V

    return-void
.end method
