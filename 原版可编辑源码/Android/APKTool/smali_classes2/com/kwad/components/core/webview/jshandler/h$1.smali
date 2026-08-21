.class final Lcom/kwad/components/core/webview/jshandler/h$1;
.super Lcom/kwad/sdk/core/download/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/h;->rt()Lcom/kwad/sdk/api/KsAppDownloadListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic TA:Lcom/kwad/components/core/webview/jshandler/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/h$1;->TA:Lcom/kwad/components/core/webview/jshandler/h;

    invoke-direct {p0}, Lcom/kwad/sdk/core/download/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadFailed()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/h$1;->TA:Lcom/kwad/components/core/webview/jshandler/h;

    const/4 v1, 0x0

    invoke-static {v0, v1, v1}, Lcom/kwad/components/core/webview/jshandler/h;->a(Lcom/kwad/components/core/webview/jshandler/h;II)V

    return-void
.end method

.method public final onDownloadFinished()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/h$1;->TA:Lcom/kwad/components/core/webview/jshandler/h;

    const/16 v1, 0x8

    const/16 v2, 0x64

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/h;->a(Lcom/kwad/components/core/webview/jshandler/h;II)V

    return-void
.end method

.method public final onIdle()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/h$1;->TA:Lcom/kwad/components/core/webview/jshandler/h;

    const/4 v1, 0x0

    invoke-static {v0, v1, v1}, Lcom/kwad/components/core/webview/jshandler/h;->a(Lcom/kwad/components/core/webview/jshandler/h;II)V

    return-void
.end method

.method public final onInstalled()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/h$1;->TA:Lcom/kwad/components/core/webview/jshandler/h;

    const/16 v1, 0xc

    const/16 v2, 0x64

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/h;->a(Lcom/kwad/components/core/webview/jshandler/h;II)V

    return-void
.end method

.method public final onPaused(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/h$1;->TA:Lcom/kwad/components/core/webview/jshandler/h;

    const/4 v1, 0x4

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/webview/jshandler/h;->a(Lcom/kwad/components/core/webview/jshandler/h;II)V

    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 2

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/h$1;->TA:Lcom/kwad/components/core/webview/jshandler/h;

    const/4 v0, 0x1

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/kwad/components/core/webview/jshandler/h;->a(Lcom/kwad/components/core/webview/jshandler/h;II)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/h$1;->TA:Lcom/kwad/components/core/webview/jshandler/h;

    const/4 v1, 0x2

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/webview/jshandler/h;->a(Lcom/kwad/components/core/webview/jshandler/h;II)V

    return-void
.end method
