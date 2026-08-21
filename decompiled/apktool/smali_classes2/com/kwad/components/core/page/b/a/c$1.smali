.class final Lcom/kwad/components/core/page/b/a/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/page/b/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Nl:Lcom/kwad/components/core/page/b/a/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/b/a/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/c$1;->Nl:Lcom/kwad/components/core/page/b/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c$1;->Nl:Lcom/kwad/components/core/page/b/a/c;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/a/c;->a(Lcom/kwad/components/core/page/b/a/c;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-wide/16 v0, 0x1f4

    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c$1;->Nl:Lcom/kwad/components/core/page/b/a/c;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/a/c;->b(Lcom/kwad/components/core/page/b/a/c;)I

    move-result v0

    if-gtz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c$1;->Nl:Lcom/kwad/components/core/page/b/a/c;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/a/c;->c(Lcom/kwad/components/core/page/b/a/c;)Landroid/widget/TextView;

    move-result-object v0

    const-string v1, "\u4efb\u52a1\u5df2\u5b8c\u6210"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c$1;->Nl:Lcom/kwad/components/core/page/b/a/c;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/a/c;->d(Lcom/kwad/components/core/page/b/a/c;)Landroid/widget/TextView;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c$1;->Nl:Lcom/kwad/components/core/page/b/a/c;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/a/c;->e(Lcom/kwad/components/core/page/b/a/c;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c$1;->Nl:Lcom/kwad/components/core/page/b/a/c;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/a/c;->f(Lcom/kwad/components/core/page/b/a/c;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    const-class v0, Lcom/kwad/components/ad/b/g;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/b/g;

    if-eqz v0, :cond_2

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/c$1;->Nl:Lcom/kwad/components/core/page/b/a/c;

    invoke-static {v1}, Lcom/kwad/components/core/page/b/a/c;->g(Lcom/kwad/components/core/page/b/a/c;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-interface {v0}, Lcom/kwad/components/ad/b/g;->notifyRewardVerify()V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c$1;->Nl:Lcom/kwad/components/core/page/b/a/c;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/a/c;->h(Lcom/kwad/components/core/page/b/a/c;)V

    const-wide/16 v0, 0x3e8

    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c$1;->Nl:Lcom/kwad/components/core/page/b/a/c;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/a/c;->i(Lcom/kwad/components/core/page/b/a/c;)I

    return-void
.end method
