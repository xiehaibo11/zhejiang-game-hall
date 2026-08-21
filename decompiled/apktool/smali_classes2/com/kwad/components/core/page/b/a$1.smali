.class final Lcom/kwad/components/core/page/b/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


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

.field final synthetic se:Lcom/kwad/sdk/core/response/model/AdInfo;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/b/a;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/page/recycle/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a$1;->MO:Lcom/kwad/components/core/page/b/a;

    iput-object p2, p0, Lcom/kwad/components/core/page/b/a$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    iput-object p3, p0, Lcom/kwad/components/core/page/b/a$1;->MN:Lcom/kwad/components/core/page/recycle/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 3

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    const/16 v0, 0x32

    const/4 v1, 0x1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a$1;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object p1, p1, Lcom/kwad/components/core/page/recycle/e;->JG:Lcom/kwad/components/core/e/d/c;

    if-eqz p1, :cond_1

    new-instance p1, Lcom/kwad/components/core/e/d/a$a;

    iget-object v2, p0, Lcom/kwad/components/core/page/b/a$1;->MO:Lcom/kwad/components/core/page/b/a;

    invoke-virtual {v2}, Lcom/kwad/components/core/page/b/a;->getActivity()Landroid/app/Activity;

    move-result-object v2

    invoke-direct {p1, v2}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x0

    invoke-virtual {p1, v2}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/kwad/components/core/e/d/a$a;->an(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/e/d/a$a;->ar(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a$1;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object v1, v1, Lcom/kwad/components/core/page/recycle/e;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/kwad/components/core/e/d/a$a;->ap(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a$1;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object p1, p1, Lcom/kwad/components/core/page/recycle/e;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a$1;->MO:Lcom/kwad/components/core/page/b/a;

    invoke-static {v1}, Lcom/kwad/components/core/page/b/a;->a(Lcom/kwad/components/core/page/b/a;)Lcom/kwad/components/core/widget/FeedVideoView;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/widget/FeedVideoView;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/utils/ac$a;)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/page/b/a$1;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object p1, p1, Lcom/kwad/components/core/page/recycle/e;->Oj:Landroid/support/v7/widget/RecyclerView;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a$1;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object p1, p1, Lcom/kwad/components/core/page/recycle/e;->Oj:Landroid/support/v7/widget/RecyclerView;

    invoke-virtual {p1}, Landroid/support/v7/widget/RecyclerView;->getAdapter()Landroid/support/v7/widget/RecyclerView$Adapter;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a$1;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object p1, p1, Lcom/kwad/components/core/page/recycle/e;->Oj:Landroid/support/v7/widget/RecyclerView;

    invoke-virtual {p1}, Landroid/support/v7/widget/RecyclerView;->getAdapter()Landroid/support/v7/widget/RecyclerView$Adapter;

    move-result-object p1

    invoke-virtual {p1}, Landroid/support/v7/widget/RecyclerView$Adapter;->getItemCount()I

    move-result p1

    if-le p1, v1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a$1;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object p1, p1, Lcom/kwad/components/core/page/recycle/e;->Oj:Landroid/support/v7/widget/RecyclerView;

    invoke-virtual {p1, v1}, Landroid/support/v7/widget/RecyclerView;->scrollToPosition(I)V

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a$1;->MN:Lcom/kwad/components/core/page/recycle/e;

    iget-object p1, p1, Lcom/kwad/components/core/page/recycle/e;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a$1;->MO:Lcom/kwad/components/core/page/b/a;

    invoke-static {v1}, Lcom/kwad/components/core/page/b/a;->a(Lcom/kwad/components/core/page/b/a;)Lcom/kwad/components/core/widget/FeedVideoView;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/widget/FeedVideoView;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/utils/ac$a;)V

    :cond_1
    return-void
.end method
