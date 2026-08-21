.class final Lcom/kwad/components/core/webview/b/h$20;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->rM()V
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

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$20;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$20;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->e(Lcom/kwad/components/core/webview/b/h;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$20;->Wk:Lcom/kwad/components/core/webview/b/h;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/core/webview/b/h;->b(Lcom/kwad/components/core/webview/b/h;Z)Z

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$20;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/i;->cc()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h$20;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object v1, v1, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v1}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->aS(Ljava/lang/String;)V

    return-void
.end method
