.class public final Lcom/kwad/components/ad/reward/presenter/j;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private final sj:Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveCallerContextListener;

.field private final sk:Lcom/kwad/components/core/l/a/a;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/j$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/j$1;-><init>(Lcom/kwad/components/ad/reward/presenter/j;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/j;->sj:Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveCallerContextListener;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/j$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/j$2;-><init>(Lcom/kwad/components/ad/reward/presenter/j;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/j;->sk:Lcom/kwad/components/core/l/a/a;

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jS()Lcom/kwad/components/ad/reward/f/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/j;->sj:Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveCallerContextListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/f/a;->registerAdLiveCallerContextListener(Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveCallerContextListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->Lg:Ljava/util/List;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/j;->sk:Lcom/kwad/components/core/l/a/a;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final onDestroy()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onDestroy()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jS()Lcom/kwad/components/ad/reward/f/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/j;->sj:Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveCallerContextListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/f/a;->unRegisterAdLiveCallerContextListener(Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveCallerContextListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->Lg:Ljava/util/List;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/j;->sk:Lcom/kwad/components/core/l/a/a;

    invoke-interface {v0, v1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final onUnbind()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    return-void
.end method
