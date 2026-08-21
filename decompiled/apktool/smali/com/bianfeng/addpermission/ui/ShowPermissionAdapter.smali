.class public Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;
.super Landroid/support/v7/widget/RecyclerView$Adapter;
.source "ShowPermissionAdapter.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/support/v7/widget/RecyclerView$Adapter<",
        "Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;",
        ">;"
    }
.end annotation


# instance fields
.field private context:Landroid/content/Context;

.field private data:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/addpermission/ui/PermissionBean;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/util/List;Landroid/content/Context;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/addpermission/ui/PermissionBean;",
            ">;",
            "Landroid/content/Context;",
            ")V"
        }
    .end annotation

    .line 21
    invoke-direct {p0}, Landroid/support/v7/widget/RecyclerView$Adapter;-><init>()V

    .line 22
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->data:Ljava/util/List;

    .line 23
    iput-object p2, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->context:Landroid/content/Context;

    return-void
.end method

.method static synthetic access$300(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;)Landroid/content/Context;
    .locals 0

    .line 15
    iget-object p0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->context:Landroid/content/Context;

    return-object p0
.end method


# virtual methods
.method public getItemCount()I
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->data:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    return v0
.end method

.method public bridge synthetic onBindViewHolder(Landroid/support/v7/widget/RecyclerView$ViewHolder;I)V
    .locals 0

    .line 15
    check-cast p1, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;

    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->onBindViewHolder(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;I)V

    return-void
.end method

.method public onBindViewHolder(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;I)V
    .locals 4

    .line 34
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->data:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/bianfeng/addpermission/ui/PermissionBean;

    .line 36
    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->access$000(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {p2}, Lcom/bianfeng/addpermission/ui/PermissionBean;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 37
    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->access$100(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {p2}, Lcom/bianfeng/addpermission/ui/PermissionBean;->getNotity()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 39
    invoke-virtual {p2}, Lcom/bianfeng/addpermission/ui/PermissionBean;->getIsok()Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    .line 40
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 41
    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->access$200(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)Landroid/widget/ImageView;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->context:Landroid/content/Context;

    const-string v3, "R.drawable.show_permission_close"

    invoke-static {v2, v3}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setImageResource(I)V

    goto :goto_0

    :cond_0
    const-string v1, "0"

    .line 42
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 43
    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->access$200(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)Landroid/widget/ImageView;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->context:Landroid/content/Context;

    const-string v3, "R.drawable.show_permission_open"

    invoke-static {v2, v3}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setImageResource(I)V

    goto :goto_0

    .line 45
    :cond_1
    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->access$200(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)Landroid/widget/ImageView;

    move-result-object v1

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 47
    :goto_0
    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->access$200(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)Landroid/widget/ImageView;

    move-result-object v1

    new-instance v2, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;

    invoke-direct {v2, p0, v0, p2, p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;-><init>(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;Ljava/lang/String;Lcom/bianfeng/addpermission/ui/PermissionBean;Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)V

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public bridge synthetic onCreateViewHolder(Landroid/view/ViewGroup;I)Landroid/support/v7/widget/RecyclerView$ViewHolder;
    .locals 0

    .line 15
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->onCreateViewHolder(Landroid/view/ViewGroup;I)Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;

    move-result-object p1

    return-object p1
.end method

.method public onCreateViewHolder(Landroid/view/ViewGroup;I)Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;
    .locals 2

    .line 28
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p2

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "R.layout.adapter_show_permission_list"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x0

    invoke-virtual {p2, v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    .line 29
    new-instance p2, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;

    invoke-direct {p2, p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;-><init>(Landroid/view/View;)V

    return-object p2
.end method
