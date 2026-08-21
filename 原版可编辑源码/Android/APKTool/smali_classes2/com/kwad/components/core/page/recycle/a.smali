.class public abstract Lcom/kwad/components/core/page/recycle/a;
.super Lcom/kwad/components/core/n/e;


# instance fields
.field private ND:Landroid/support/v7/widget/RecyclerView;

.field private NE:Lcom/kwad/components/core/page/recycle/d;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/n/e;-><init>()V

    return-void
.end method

.method private pb()V
    .locals 2

    invoke-static {}, Lcom/kwad/components/core/page/recycle/a;->pf()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/recycle/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/support/v7/widget/RecyclerView;

    iput-object v0, p0, Lcom/kwad/components/core/page/recycle/a;->ND:Landroid/support/v7/widget/RecyclerView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/support/v7/widget/RecyclerView;->setItemAnimator(Landroid/support/v7/widget/RecyclerView$ItemAnimator;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/recycle/a;->ND:Landroid/support/v7/widget/RecyclerView;

    invoke-direct {p0}, Lcom/kwad/components/core/page/recycle/a;->pe()Landroid/support/v7/widget/RecyclerView$LayoutManager;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/support/v7/widget/RecyclerView;->setLayoutManager(Landroid/support/v7/widget/RecyclerView$LayoutManager;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/recycle/a;->ND:Landroid/support/v7/widget/RecyclerView;

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/recycle/a;->a(Landroid/support/v7/widget/RecyclerView;)Lcom/kwad/components/core/page/recycle/d;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/page/recycle/a;->NE:Lcom/kwad/components/core/page/recycle/d;

    return-void
.end method

.method private pc()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/recycle/a;->ND:Landroid/support/v7/widget/RecyclerView;

    iget-object v1, p0, Lcom/kwad/components/core/page/recycle/a;->NE:Lcom/kwad/components/core/page/recycle/d;

    invoke-virtual {v0, v1}, Landroid/support/v7/widget/RecyclerView;->setAdapter(Landroid/support/v7/widget/RecyclerView$Adapter;)V

    return-void
.end method

.method private pe()Landroid/support/v7/widget/RecyclerView$LayoutManager;
    .locals 2

    new-instance v0, Landroid/support/v7/widget/LinearLayoutManager;

    iget-object v1, p0, Lcom/kwad/components/core/page/recycle/a;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/support/v7/widget/LinearLayoutManager;-><init>(Landroid/content/Context;)V

    return-object v0
.end method

.method private static pf()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_recycler_view:I

    return v0
.end method


# virtual methods
.method protected abstract a(Landroid/support/v7/widget/RecyclerView;)Lcom/kwad/components/core/page/recycle/d;
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/components/core/n/e;->onActivityResult(IILandroid/content/Intent;)V

    return-void
.end method

.method public onDestroy()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/n/e;->onDestroy()V

    return-void
.end method

.method public onDestroyView()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/n/e;->onDestroyView()V

    iget-object v0, p0, Lcom/kwad/components/core/page/recycle/a;->ND:Landroid/support/v7/widget/RecyclerView;

    invoke-virtual {v0}, Landroid/support/v7/widget/RecyclerView;->clearOnChildAttachStateChangeListeners()V

    return-void
.end method

.method public onPause()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/n/e;->onPause()V

    return-void
.end method

.method public onResume()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/n/e;->onResume()V

    return-void
.end method

.method public onViewCreated(Landroid/view/View;Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/n/e;->onViewCreated(Landroid/view/View;Landroid/os/Bundle;)V

    invoke-direct {p0}, Lcom/kwad/components/core/page/recycle/a;->pb()V

    invoke-direct {p0}, Lcom/kwad/components/core/page/recycle/a;->pc()V

    return-void
.end method

.method public final pd()Landroid/support/v7/widget/RecyclerView;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/recycle/a;->ND:Landroid/support/v7/widget/RecyclerView;

    return-object v0
.end method
