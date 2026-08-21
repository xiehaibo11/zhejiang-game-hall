.class final Lcom/kwad/components/ad/reward/presenter/j$2;
.super Lcom/kwad/components/core/l/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic sl:Lcom/kwad/components/ad/reward/presenter/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/j$2;->sl:Lcom/kwad/components/ad/reward/presenter/j;

    invoke-direct {p0}, Lcom/kwad/components/core/l/a/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final c(Lcom/kwad/components/core/n/c;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/core/l/a/b;->c(Lcom/kwad/components/core/n/c;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/j$2;->sl:Lcom/kwad/components/ad/reward/presenter/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/j$2;->sl:Lcom/kwad/components/ad/reward/presenter/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->jS()Lcom/kwad/components/ad/reward/f/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/f/a;->onResume()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/j$2;->sl:Lcom/kwad/components/ad/reward/presenter/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/t/a;->qh()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/j$2;->sl:Lcom/kwad/components/ad/reward/presenter/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v0, 0x0

    invoke-virtual {p1, v0, v0}, Lcom/kwad/components/ad/reward/j;->c(ZZ)V

    :cond_0
    return-void
.end method

.method public final d(Lcom/kwad/components/core/n/c;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/core/l/a/b;->d(Lcom/kwad/components/core/n/c;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/j$2;->sl:Lcom/kwad/components/ad/reward/presenter/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/j$2;->sl:Lcom/kwad/components/ad/reward/presenter/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->jS()Lcom/kwad/components/ad/reward/f/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/f/a;->onPause()V

    :cond_0
    return-void
.end method
