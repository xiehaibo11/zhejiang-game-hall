.class public Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;
.super Landroid/support/v7/widget/RecyclerView$ViewHolder;
.source "ShowPermissionAdapter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "ItemViewHolder"
.end annotation


# instance fields
.field private imageView:Landroid/widget/ImageView;

.field private name:Landroid/widget/TextView;

.field private notity:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/view/View;)V
    .locals 2

    .line 76
    invoke-direct {p0, p1}, Landroid/support/v7/widget/RecyclerView$ViewHolder;-><init>(Landroid/view/View;)V

    .line 77
    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "R.id.adapter_show_permission_check"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->imageView:Landroid/widget/ImageView;

    .line 78
    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "R.id.adapter_show_permission_name"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->name:Landroid/widget/TextView;

    .line 79
    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "R.id.adapter_show_permission_notity"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->notity:Landroid/widget/TextView;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)Landroid/widget/TextView;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->name:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)Landroid/widget/TextView;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->notity:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$200(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)Landroid/widget/ImageView;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->imageView:Landroid/widget/ImageView;

    return-object p0
.end method
