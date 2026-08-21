.class final Lcom/kwad/components/core/webview/jshandler/ad$a;
.super Lcom/kwad/sdk/core/download/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/jshandler/ad;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# instance fields
.field private Vb:Lcom/kwad/components/core/webview/jshandler/ad$c;


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/webview/jshandler/ad$c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/download/a/a;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ad$a;->Vb:Lcom/kwad/components/core/webview/jshandler/ad$c;

    return-void
.end method


# virtual methods
.method public final onDownloadFailed()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ad$a;->Vb:Lcom/kwad/components/core/webview/jshandler/ad$c;

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ad;->b(Lcom/kwad/components/core/webview/jshandler/ad$c;IF)V

    return-void
.end method

.method public final onDownloadFinished()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ad$a;->Vb:Lcom/kwad/components/core/webview/jshandler/ad$c;

    const/4 v1, 0x5

    const/high16 v2, 0x3f800000    # 1.0f

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ad;->b(Lcom/kwad/components/core/webview/jshandler/ad$c;IF)V

    return-void
.end method

.method public final onIdle()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ad$a;->Vb:Lcom/kwad/components/core/webview/jshandler/ad$c;

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ad;->b(Lcom/kwad/components/core/webview/jshandler/ad$c;IF)V

    return-void
.end method

.method public final onInstalled()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ad$a;->Vb:Lcom/kwad/components/core/webview/jshandler/ad$c;

    const/4 v1, 0x6

    const/high16 v2, 0x3f800000    # 1.0f

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ad;->b(Lcom/kwad/components/core/webview/jshandler/ad$c;IF)V

    return-void
.end method

.method public final onPaused(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ad$a;->Vb:Lcom/kwad/components/core/webview/jshandler/ad$c;

    int-to-float p1, p1

    const/high16 v1, 0x3f800000    # 1.0f

    mul-float/2addr p1, v1

    const/high16 v1, 0x42c80000    # 100.0f

    div-float/2addr p1, v1

    const/4 v1, 0x3

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/webview/jshandler/ad;->b(Lcom/kwad/components/core/webview/jshandler/ad$c;IF)V

    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ad$a;->Vb:Lcom/kwad/components/core/webview/jshandler/ad$c;

    int-to-float p1, p1

    const/high16 v1, 0x3f800000    # 1.0f

    mul-float/2addr p1, v1

    const/high16 v1, 0x42c80000    # 100.0f

    div-float/2addr p1, v1

    const/4 v1, 0x2

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/webview/jshandler/ad;->b(Lcom/kwad/components/core/webview/jshandler/ad$c;IF)V

    return-void
.end method
