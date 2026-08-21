.class final Lcom/kwad/components/core/webview/b/h$7;
.super Lcom/kwad/components/core/webview/b/a/r;


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

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$7;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/r;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/b/r;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/b/a/r;->a(Lcom/kwad/components/core/webview/b/b/r;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$7;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->c(Lcom/kwad/components/core/webview/b/h;)Landroid/app/Activity;

    move-result-object v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$7;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->getCurrentActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/core/webview/b/h;Landroid/app/Activity;)Landroid/app/Activity;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$7;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->c(Lcom/kwad/components/core/webview/b/h;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$7;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->c(Lcom/kwad/components/core/webview/b/h;)Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$7;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->k(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/c/d;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$7;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->k(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/c/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/c/d;->dismiss()V

    :cond_2
    new-instance v0, Lcom/kwad/components/core/webview/b/c/d$b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/c/d$b;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h$7;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v1}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d$b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/b/r;->templateId:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/webview/b/c/d$b;->aO(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$7;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/c/d;->b(Lcom/kwad/components/core/webview/b/c/d$b;)Lcom/kwad/components/core/webview/b/c/d;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/core/webview/b/c/d;)Lcom/kwad/components/core/webview/b/c/d;

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$7;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b/h;->k(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/c/d;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$7;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->c(Lcom/kwad/components/core/webview/b/h;)Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v0

    const-string v1, ""

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/core/webview/b/c/d;->show(Landroid/app/FragmentManager;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method
