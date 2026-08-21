.class Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;
.super Ljava/lang/Object;
.source "AddPermissionActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->toNextActivity()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;


# direct methods
.method constructor <init>(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V
    .locals 0

    .line 209
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 212
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->access$200(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)Ljava/lang/String;

    move-result-object v0

    .line 213
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 214
    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-virtual {v2}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 215
    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-virtual {v2}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 217
    :cond_0
    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-virtual {v2}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 218
    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-virtual {v2}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v2

    .line 219
    invoke-virtual {v1, v2}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    .line 221
    :cond_1
    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-virtual {v1, v2, v0}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 222
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->startActivity(Landroid/content/Intent;)V

    .line 223
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-virtual {v0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->finish()V

    return-void
.end method
