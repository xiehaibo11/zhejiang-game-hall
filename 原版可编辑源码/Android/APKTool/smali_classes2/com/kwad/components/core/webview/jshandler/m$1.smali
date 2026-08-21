.class final Lcom/kwad/components/core/webview/jshandler/m$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/m;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic TH:Lcom/kwad/components/core/webview/b/b/x;

.field final synthetic TI:Lcom/kwad/components/core/webview/jshandler/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/m;Lcom/kwad/components/core/webview/b/b/x;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TI:Lcom/kwad/components/core/webview/jshandler/m;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TH:Lcom/kwad/components/core/webview/b/b/x;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TH:Lcom/kwad/components/core/webview/b/b/x;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/b/x;->rU()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TI:Lcom/kwad/components/core/webview/jshandler/m;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TH:Lcom/kwad/components/core/webview/b/b/x;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/jshandler/m;->a(Lcom/kwad/components/core/webview/b/b/x;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TH:Lcom/kwad/components/core/webview/b/b/x;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/b/x;->rW()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TI:Lcom/kwad/components/core/webview/jshandler/m;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TH:Lcom/kwad/components/core/webview/b/b/x;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/jshandler/m;->b(Lcom/kwad/components/core/webview/b/b/x;)V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TH:Lcom/kwad/components/core/webview/b/b/x;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/b/x;->rV()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TI:Lcom/kwad/components/core/webview/jshandler/m;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TH:Lcom/kwad/components/core/webview/b/b/x;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/jshandler/m;->c(Lcom/kwad/components/core/webview/b/b/x;)V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TH:Lcom/kwad/components/core/webview/b/b/x;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/b/x;->isFailed()Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TI:Lcom/kwad/components/core/webview/jshandler/m;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/m$1;->TH:Lcom/kwad/components/core/webview/b/b/x;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/jshandler/m;->d(Lcom/kwad/components/core/webview/b/b/x;)V

    :cond_3
    return-void
.end method
