.class Lcom/bianfeng/addpermission/ui/AddPermissionActivity$4;
.super Ljava/lang/Object;
.source "AddPermissionActivity.java"

# interfaces
.implements Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;


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

    .line 266
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$4;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAgree()V
    .locals 1

    .line 275
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;->setYmnagreeprivacy()V

    .line 276
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$4;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->access$400(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    return-void
.end method

.method public onRefuse()V
    .locals 1

    const-string v0, "\u6d4b\u8bd5--"

    .line 269
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 270
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$4;->this$0:Lcom/bianfeng/addpermission/ui/AddPermissionActivity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->access$000(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    return-void
.end method
