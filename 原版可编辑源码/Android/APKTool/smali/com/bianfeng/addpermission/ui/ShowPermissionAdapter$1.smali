.class Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;
.super Ljava/lang/Object;
.source "ShowPermissionAdapter.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->onBindViewHolder(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;

.field final synthetic val$bean:Lcom/bianfeng/addpermission/ui/PermissionBean;

.field final synthetic val$holder:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;

.field final synthetic val$isok:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;Ljava/lang/String;Lcom/bianfeng/addpermission/ui/PermissionBean;Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)V
    .locals 0

    .line 47
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;

    iput-object p2, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->val$isok:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->val$bean:Lcom/bianfeng/addpermission/ui/PermissionBean;

    iput-object p4, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->val$holder:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 50
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->val$isok:Ljava/lang/String;

    const-string v0, "1"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 51
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->val$bean:Lcom/bianfeng/addpermission/ui/PermissionBean;

    const-string v0, "0"

    invoke-virtual {p1, v0}, Lcom/bianfeng/addpermission/ui/PermissionBean;->setIsok(Ljava/lang/String;)V

    .line 52
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->val$holder:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->access$200(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)Landroid/widget/ImageView;

    move-result-object p1

    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->access$300(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;)Landroid/content/Context;

    move-result-object v0

    const-string v1, "R.drawable.show_permission_open"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    goto :goto_0

    .line 55
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->val$bean:Lcom/bianfeng/addpermission/ui/PermissionBean;

    invoke-virtual {p1, v0}, Lcom/bianfeng/addpermission/ui/PermissionBean;->setIsok(Ljava/lang/String;)V

    .line 57
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->val$holder:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;->access$200(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$ItemViewHolder;)Landroid/widget/ImageView;

    move-result-object p1

    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->access$300(Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;)Landroid/content/Context;

    move-result-object v0

    const-string v1, "R.drawable.show_permission_close"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 59
    :goto_0
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;

    invoke-virtual {p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;->notifyDataSetChanged()V

    return-void
.end method
