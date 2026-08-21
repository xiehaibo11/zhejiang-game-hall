.class Lcom/bianfeng/addpermission/ui/AddPermissionActivity$1;
.super Ljava/lang/Object;
.source "AddPermissionActivity.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->requestPermission()V
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

    .line 137
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$1;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAllow(ILjava/lang/String;)V
    .locals 0

    .line 145
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$1;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->access$100(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    return-void
.end method

.method public onAllowAll(I)V
    .locals 0

    .line 140
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$1;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->access$000(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    return-void
.end method

.method public onDeny(ILjava/lang/String;)V
    .locals 0

    .line 150
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$1;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->access$100(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    return-void
.end method

.method public onDenyIn48Hours(ILjava/lang/String;)V
    .locals 0

    .line 155
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$1;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->access$100(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    return-void
.end method
