.class final Lcom/kwad/components/core/webview/b/h$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->rI()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$1;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$1;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/core/webview/b/h;J)J

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "\u5f00\u59cb\u8bfb\u53d6\u6a21\u677f id: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h$1;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object v1, v1, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v1}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TKLoadController"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$1;->Wk:Lcom/kwad/components/core/webview/b/h;

    new-instance v1, Lcom/kwad/components/core/webview/b/h$1$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b/h$1$1;-><init>(Lcom/kwad/components/core/webview/b/h$1;)V

    invoke-static {v0, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/offline/api/tk/TKDownloadListener;)V

    return-void
.end method
