.class final Lcom/kwad/components/ad/k/a$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/KsAdWebView$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/k/a;->lT()Lcom/kwad/sdk/core/webview/KsAdWebView$b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic GZ:Lcom/kwad/components/ad/k/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/k/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/a$4;->GZ:Lcom/kwad/components/ad/k/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/k/a$4;->GZ:Lcom/kwad/components/ad/k/a;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/k/a;->c(Lcom/kwad/components/ad/k/a;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/k/a$4;->GZ:Lcom/kwad/components/ad/k/a;

    invoke-static {v0}, Lcom/kwad/components/ad/k/a;->a(Lcom/kwad/components/ad/k/a;)Lcom/kwad/components/ad/k/a$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/k/a$4;->GZ:Lcom/kwad/components/ad/k/a;

    invoke-static {v0}, Lcom/kwad/components/ad/k/a;->a(Lcom/kwad/components/ad/k/a;)Lcom/kwad/components/ad/k/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/k/a$4;->GZ:Lcom/kwad/components/ad/k/a;

    invoke-static {v1}, Lcom/kwad/components/ad/k/a;->b(Lcom/kwad/components/ad/k/a;)Z

    move-result v1

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/k/a$a;->T(Z)V

    :cond_0
    return-void
.end method

.method public final onSuccess()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/k/a$4;->GZ:Lcom/kwad/components/ad/k/a;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/k/a;->c(Lcom/kwad/components/ad/k/a;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/k/a$4;->GZ:Lcom/kwad/components/ad/k/a;

    invoke-static {v0}, Lcom/kwad/components/ad/k/a;->a(Lcom/kwad/components/ad/k/a;)Lcom/kwad/components/ad/k/a$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/k/a$4;->GZ:Lcom/kwad/components/ad/k/a;

    invoke-static {v0}, Lcom/kwad/components/ad/k/a;->a(Lcom/kwad/components/ad/k/a;)Lcom/kwad/components/ad/k/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/k/a$4;->GZ:Lcom/kwad/components/ad/k/a;

    invoke-static {v1}, Lcom/kwad/components/ad/k/a;->b(Lcom/kwad/components/ad/k/a;)Z

    move-result v1

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/k/a$a;->T(Z)V

    :cond_0
    return-void
.end method
