.class public final Lcom/kwad/components/ad/reward/presenter/i;
.super Lcom/kwad/components/ad/reward/presenter/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jN()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/i$1;

    invoke-direct {v1, p0, v0}, Lcom/kwad/components/ad/reward/presenter/i$1;-><init>(Lcom/kwad/components/ad/reward/presenter/i;Ljava/lang/Throwable;)V

    invoke-static {v1}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
