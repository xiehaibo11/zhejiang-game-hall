.class final Lcom/kwad/components/ad/reward/presenter/h/a$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/h/a;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic xq:Lcom/kwad/components/ad/reward/presenter/h/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/h/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a$4;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDismiss(Landroid/content/DialogInterface;)V
    .locals 4

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a$4;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/h/a;->b(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/core/webview/b/g;

    move-result-object p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance p1, Lcom/kwad/components/core/webview/b/b/v;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/v;-><init>()V

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->pY()Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_3

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/r/a;->aI(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$4;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->c(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aF(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    if-nez v0, :cond_1

    :goto_0
    iput v2, p1, Lcom/kwad/components/core/webview/b/b/v;->Xh:I

    :goto_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$4;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->b(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/core/webview/b/g;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/webview/b/g;->b(Lcom/kwad/sdk/core/b;)V

    return-void

    :cond_1
    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->pU()Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    :cond_2
    iput v1, p1, Lcom/kwad/components/core/webview/b/b/v;->Xh:I

    goto :goto_1

    :cond_3
    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->pW()Z

    move-result v0

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$4;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->c(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aF(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    if-ne v0, v2, :cond_6

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->pX()I

    move-result v0

    if-ne v0, v2, :cond_5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$4;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->c(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/h/a$4;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/h/a;->l(Lcom/kwad/components/ad/reward/presenter/h/a;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v0}, Lcom/kwad/sdk/utils/ak;->ak(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_4

    iput v1, p1, Lcom/kwad/components/core/webview/b/b/v;->Xh:I

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$4;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->b(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/core/webview/b/g;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/webview/b/g;->b(Lcom/kwad/sdk/core/b;)V

    :cond_4
    return-void

    :cond_5
    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->pX()I

    move-result v0

    const/4 v3, 0x3

    if-ne v0, v3, :cond_6

    iput v2, p1, Lcom/kwad/components/core/webview/b/b/v;->Xh:I

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/r/a;->aF(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$4;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->b(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/core/webview/b/g;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/webview/b/g;->b(Lcom/kwad/sdk/core/b;)V

    :cond_6
    return-void
.end method
