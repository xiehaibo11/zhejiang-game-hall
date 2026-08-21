.class public final Lcom/kwad/components/ad/reward/presenter/b/a;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private tK:Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveHandleClickListener;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/b/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/b/a$1;-><init>(Lcom/kwad/components/ad/reward/presenter/b/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/a;->tK:Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveHandleClickListener;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/b/a;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/b/a;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/b/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/b/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/b/a;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/b/a;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/b/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/b/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oW:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oW:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/a;->tK:Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveHandleClickListener;

    invoke-interface {v0, v1}, Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;->registerClickListener(Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveHandleClickListener;)V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oW:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oW:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/a;->tK:Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveHandleClickListener;

    invoke-interface {v0, v1}, Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;->unRegisterClickListener(Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveHandleClickListener;)V

    :cond_0
    return-void
.end method
