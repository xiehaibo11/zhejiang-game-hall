.class public final Lcom/kwad/components/core/e/a/a;
.super Lcom/kwad/sdk/mvp/a;


# instance fields
.field public IS:Lcom/kwad/components/core/e/a/g;

.field public IT:Lcom/kwad/components/core/widget/a/b;

.field public IU:Lcom/kwad/components/core/e/a/d;

.field public cG:Lcom/kwad/components/core/webview/jshandler/am;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final bt()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/a/a;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/a;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_0
    return-void
.end method

.method public final mK()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/a/a;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/a;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    return-void
.end method

.method public final release()V
    .locals 0

    return-void
.end method
