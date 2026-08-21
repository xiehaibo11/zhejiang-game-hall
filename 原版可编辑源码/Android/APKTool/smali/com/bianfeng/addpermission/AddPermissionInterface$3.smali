.class Lcom/bianfeng/addpermission/AddPermissionInterface$3;
.super Ljava/lang/Object;
.source "AddPermissionInterface.java"

# interfaces
.implements Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/addpermission/AddPermissionInterface;->showPolicyDialog()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/addpermission/AddPermissionInterface;)V
    .locals 0

    .line 202
    iput-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$3;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAgree()V
    .locals 4

    const-string v0, "SHOW_POLICY_DIALOG onAgree"

    .line 211
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 212
    iget-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$3;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    const v1, 0x14c10

    const-string v2, "\u5141\u8bb8\u6743\u9650"

    const-string v3, "show_policy_dialog"

    invoke-virtual {v0, v1, v2, v3}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onRefuse()V
    .locals 4

    const-string v0, "SHOW_POLICY_DIALOG \u62d2\u7edd\u4e86"

    .line 205
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 206
    iget-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$3;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    const v1, 0x14c11

    const-string v2, "\u62d2\u7edd\u6743\u9650"

    const-string v3, "show_policy_dialog"

    invoke-virtual {v0, v1, v2, v3}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method
