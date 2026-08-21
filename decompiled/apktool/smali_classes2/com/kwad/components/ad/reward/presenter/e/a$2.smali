.class final Lcom/kwad/components/ad/reward/presenter/e/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/e/a;->U(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wb:Lcom/kwad/components/ad/reward/presenter/e/a;

.field final synthetic wc:Z


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/e/a;Z)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wb:Lcom/kwad/components/ad/reward/presenter/e/a;

    iput-boolean p2, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wc:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wb:Lcom/kwad/components/ad/reward/presenter/e/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->b(Lcom/kwad/components/ad/reward/presenter/e/a;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wc:Z

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    const/4 v1, 0x4

    :goto_0
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wb:Lcom/kwad/components/ad/reward/presenter/e/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->b(Lcom/kwad/components/ad/reward/presenter/e/a;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wc:Z

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setClickable(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wb:Lcom/kwad/components/ad/reward/presenter/e/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->c(Lcom/kwad/components/ad/reward/presenter/e/a;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wc:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wb:Lcom/kwad/components/ad/reward/presenter/e/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->c(Lcom/kwad/components/ad/reward/presenter/e/a;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wb:Lcom/kwad/components/ad/reward/presenter/e/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->c(Lcom/kwad/components/ad/reward/presenter/e/a;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wb:Lcom/kwad/components/ad/reward/presenter/e/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->c(Lcom/kwad/components/ad/reward/presenter/e/a;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a$2;->wb:Lcom/kwad/components/ad/reward/presenter/e/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->c(Lcom/kwad/components/ad/reward/presenter/e/a;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_2
    return-void
.end method
