.class Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$1;
.super Ljava/lang/Object;
.source "CheckPolicyAndPermissionUtils.java"

# interfaces
.implements Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;)V
    .locals 0

    .line 9
    iput-object p1, p0, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$1;->this$0:Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAgree()V
    .locals 1

    .line 18
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$1;->this$0:Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;->access$000(Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;)Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;->onAgree()V

    return-void
.end method

.method public onRefuse()V
    .locals 1

    .line 12
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$1;->this$0:Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;->access$000(Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;)Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;->onRefuse()V

    return-void
.end method
