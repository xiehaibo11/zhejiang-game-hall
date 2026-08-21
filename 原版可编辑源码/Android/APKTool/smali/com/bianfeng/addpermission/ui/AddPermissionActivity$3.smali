.class Lcom/bianfeng/addpermission/ui/AddPermissionActivity$3;
.super Ljava/lang/Object;
.source "AddPermissionActivity.java"

# interfaces
.implements Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/addpermission/ui/AddPermissionActivity;
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

    .line 245
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$3;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAgree(Ljava/lang/String;)V
    .locals 2

    .line 254
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6d4b\u8bd5--"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 255
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$3;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->access$300(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    return-void
.end method

.method public onHasPermission()V
    .locals 1

    const-string v0, "\u6d4b\u8bd5--\u5141\u8bb8"

    .line 260
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 261
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$3;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->access$000(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    return-void
.end method

.method public onRefuse()V
    .locals 1

    const-string v0, "\u6d4b\u8bd5--"

    .line 248
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 249
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$3;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->access$000(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    return-void
.end method
