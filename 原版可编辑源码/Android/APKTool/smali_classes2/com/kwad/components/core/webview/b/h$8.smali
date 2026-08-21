.class final Lcom/kwad/components/core/webview/b/h$8;
.super Lcom/kwad/components/core/webview/b/a/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;)V
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

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$8;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final jd()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/webview/b/a/c;->jd()V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$8;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->k(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/c/d;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$8;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->k(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/c/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/c/d;->dismiss()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$8;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$8;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/i;->em()V

    :cond_1
    return-void
.end method
