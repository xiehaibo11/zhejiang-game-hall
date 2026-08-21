.class public Lcom/kwad/components/core/page/recycle/g;
.super Landroid/support/v7/widget/RecyclerView;


# instance fields
.field private Ol:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/support/v7/widget/RecyclerView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/support/v7/widget/RecyclerView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/support/v7/widget/RecyclerView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method


# virtual methods
.method protected removeDetachedView(Landroid/view/View;Z)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/page/recycle/g;->Ol:Z

    invoke-super {p0, p1, p2}, Landroid/support/v7/widget/RecyclerView;->removeDetachedView(Landroid/view/View;Z)V

    return-void
.end method

.method public setIngoreTmpDetachedFlag(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/page/recycle/g;->Ol:Z

    return-void
.end method
