.class Lcom/bianfeng/addpermission/common/CheckPermissionUtils$1;
.super Ljava/lang/Object;
.source "CheckPermissionUtils.java"

# interfaces
.implements Lcom/bianfeng/addpermission/ui/PermissionCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/addpermission/common/CheckPermissionUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/addpermission/common/CheckPermissionUtils;)V
    .locals 0

    .line 150
    iput-object p1, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$1;->this$0:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAgree()V
    .locals 3

    .line 154
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$1;->this$0:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->access$000(Lcom/bianfeng/addpermission/common/CheckPermissionUtils;)Ljava/lang/String;

    move-result-object v0

    .line 155
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onAgree\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 156
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 157
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$1;->this$0:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->access$100(Lcom/bianfeng/addpermission/common/CheckPermissionUtils;)Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;->onRefuse()V

    goto :goto_0

    .line 159
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$1;->this$0:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    invoke-static {v1}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->access$100(Lcom/bianfeng/addpermission/common/CheckPermissionUtils;)Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;->onAgree(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onRefuse()V
    .locals 1

    .line 166
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$1;->this$0:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->access$100(Lcom/bianfeng/addpermission/common/CheckPermissionUtils;)Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;->onRefuse()V

    return-void
.end method
