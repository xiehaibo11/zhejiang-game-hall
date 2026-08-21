.class final Lcom/kwad/components/core/page/b/a$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/widget/FeedVideoView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/page/b/a;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic MN:Lcom/kwad/components/core/page/recycle/e;

.field final synthetic MO:Lcom/kwad/components/core/page/b/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/b/a;Lcom/kwad/components/core/page/recycle/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a$3;->MO:Lcom/kwad/components/core/page/b/a;

    iput-object p2, p0, Lcom/kwad/components/core/page/b/a$3;->MN:Lcom/kwad/components/core/page/recycle/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final oG()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a$3;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object v0, v0, Lcom/kwad/components/core/page/recycle/e;->Oj:Landroid/support/v7/widget/RecyclerView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a$3;->MO:Lcom/kwad/components/core/page/b/a;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a$3;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object v1, v1, Lcom/kwad/components/core/page/recycle/e;->Oj:Landroid/support/v7/widget/RecyclerView;

    invoke-virtual {v1}, Landroid/support/v7/widget/RecyclerView;->computeVerticalScrollOffset()I

    move-result v1

    invoke-static {v0, v1}, Lcom/kwad/components/core/page/b/a;->a(Lcom/kwad/components/core/page/b/a;I)I

    :cond_0
    return-void
.end method

.method public final oH()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a$3;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object v0, v0, Lcom/kwad/components/core/page/recycle/e;->Oj:Landroid/support/v7/widget/RecyclerView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a$3;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object v0, v0, Lcom/kwad/components/core/page/recycle/e;->Oj:Landroid/support/v7/widget/RecyclerView;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a$3;->MO:Lcom/kwad/components/core/page/b/a;

    invoke-static {v1}, Lcom/kwad/components/core/page/b/a;->b(Lcom/kwad/components/core/page/b/a;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/support/v7/widget/RecyclerView;->scrollToPosition(I)V

    :cond_0
    return-void
.end method
