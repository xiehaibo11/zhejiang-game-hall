.class public final Lcom/kwad/components/core/page/recycle/c;
.super Landroid/support/v7/widget/RecyclerView$ViewHolder;


# instance fields
.field public final Mz:Lcom/kwad/components/core/page/recycle/e;

.field public final mPresenter:Lcom/kwad/sdk/mvp/Presenter;


# direct methods
.method public constructor <init>(Landroid/view/View;Lcom/kwad/sdk/mvp/Presenter;Lcom/kwad/components/core/page/recycle/e;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/support/v7/widget/RecyclerView$ViewHolder;-><init>(Landroid/view/View;)V

    iput-object p3, p0, Lcom/kwad/components/core/page/recycle/c;->Mz:Lcom/kwad/components/core/page/recycle/e;

    iput-object p2, p0, Lcom/kwad/components/core/page/recycle/c;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    invoke-virtual {p2, p1}, Lcom/kwad/sdk/mvp/Presenter;->F(Landroid/view/View;)V

    return-void
.end method
