.class Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/dislike/TTDislikeListView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)V
    .locals 0

    .line 58
    iput-object p1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;->rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 61
    iget-object v0, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;->rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    invoke-virtual {v0}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;->rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    .line 62
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    invoke-interface {v0, p3}, Landroid/widget/ListAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;->rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    .line 63
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    invoke-interface {v0, p3}, Landroid/widget/ListAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Lcom/bykv/vk/openvk/FilterWord;

    if-eqz v0, :cond_3

    .line 64
    iget-object v0, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;->rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    invoke-virtual {v0}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    invoke-interface {v0, p3}, Landroid/widget/ListAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bykv/vk/openvk/FilterWord;

    .line 65
    invoke-interface {v0}, Lcom/bykv/vk/openvk/FilterWord;->hasSecondOptions()Z

    move-result v1

    if-nez v1, :cond_2

    .line 66
    iget-object v1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;->rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    invoke-static {v1}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->access$000(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)Lcom/bykv/vk/openvk/TTDislikeController;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 67
    iget-object v1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;->rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    invoke-static {v1}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->access$000(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)Lcom/bykv/vk/openvk/TTDislikeController;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/bykv/vk/openvk/TTDislikeController;->onDislikeSelected(Lcom/bykv/vk/openvk/FilterWord;)V

    .line 69
    :cond_0
    iget-object v1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;->rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    invoke-static {v1}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->access$100(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)Landroid/widget/AdapterView$OnItemClickListener;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 70
    iget-object v1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;->rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    invoke-static {v1}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->access$100(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)Landroid/widget/AdapterView$OnItemClickListener;

    move-result-object v2

    move-object v3, p1

    move-object v4, p2

    move v5, p3

    move-wide v6, p4

    invoke-interface/range {v2 .. v7}, Landroid/widget/AdapterView$OnItemClickListener;->onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V

    .line 72
    :cond_1
    iget-object p1, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;->rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    invoke-static {p1}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->access$200(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)Lcom/bykv/vk/openvk/api/proto/EventListener;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 74
    invoke-static {}, Lcom/bykv/vk/openvk/api/q;->rg()Lcom/bykv/vk/openvk/api/q;

    move-result-object p1

    .line 75
    invoke-interface {v0}, Lcom/bykv/vk/openvk/FilterWord;->getId()Ljava/lang/String;

    move-result-object p2

    const/4 p3, 0x0

    invoke-virtual {p1, p3, p2}, Lcom/bykv/vk/openvk/api/q;->rg(ILjava/lang/String;)Lcom/bykv/vk/openvk/api/q;

    move-result-object p1

    const/4 p2, 0x1

    .line 76
    invoke-interface {v0}, Lcom/bykv/vk/openvk/FilterWord;->getName()Ljava/lang/String;

    move-result-object p4

    invoke-virtual {p1, p2, p4}, Lcom/bykv/vk/openvk/api/q;->rg(ILjava/lang/String;)Lcom/bykv/vk/openvk/api/q;

    move-result-object p1

    .line 77
    invoke-virtual {p1}, Lcom/bykv/vk/openvk/api/q;->df()Lcom/bykv/vk/openvk/api/proto/ValueSet;

    move-result-object p1

    .line 78
    iget-object p2, p0, Lcom/bykv/vk/openvk/dislike/TTDislikeListView$1;->rg:Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    invoke-static {p2}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->access$200(Lcom/bykv/vk/openvk/dislike/TTDislikeListView;)Lcom/bykv/vk/openvk/api/proto/EventListener;

    move-result-object p2

    invoke-static {}, Lcom/bykv/vk/openvk/api/df;->rg()Lcom/bykv/vk/openvk/api/df;

    move-result-object p4

    invoke-virtual {p4, p1}, Lcom/bykv/vk/openvk/api/df;->rg(Lcom/bykv/vk/openvk/api/proto/ValueSet;)Lcom/bykv/vk/openvk/api/df;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bykv/vk/openvk/api/df;->df()Lcom/bykv/vk/openvk/api/proto/Result;

    move-result-object p1

    invoke-interface {p2, p3, p1}, Lcom/bykv/vk/openvk/api/proto/EventListener;->onEvent(ILcom/bykv/vk/openvk/api/proto/Result;)Lcom/bykv/vk/openvk/api/proto/ValueSet;

    :cond_2
    return-void

    .line 82
    :cond_3
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "adapter\u6570\u636e\u5f02\u5e38\uff0c\u5fc5\u987b\u4e3aFilterWord"

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method
