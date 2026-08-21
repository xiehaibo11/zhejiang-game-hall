.class Lcom/bianfeng/addpermission/AddPermissionInterface$2;
.super Ljava/lang/Object;
.source "AddPermissionInterface.java"

# interfaces
.implements Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/addpermission/AddPermissionInterface;
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

    .line 176
    iput-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$2;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAgree(Ljava/lang/String;)V
    .locals 4

    .line 184
    iget-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$2;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u7528\u6237"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$2;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-static {v2}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object v2

    const v3, 0x14c0b

    invoke-virtual {v0, v3, v1, v2}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 185
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "CheckPermissionUtils  onAgree"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 186
    iget-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$2;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-virtual {v0, p1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->addPermission(Ljava/lang/String;)V

    return-void
.end method

.method public onHasPermission()V
    .locals 4

    .line 191
    iget-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$2;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-static {v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$100(Lcom/bianfeng/addpermission/AddPermissionInterface;)Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->isRequest()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 192
    iget-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$2;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    const v1, 0x14c08

    invoke-static {v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "\u6388\u6743\u6210\u529f"

    invoke-virtual {v0, v1, v3, v2}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 194
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$2;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    const v1, 0x14c0d

    invoke-static {v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "\u4e0d\u9700\u8981\u83b7\u53d6"

    invoke-virtual {v0, v1, v3, v2}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onRefuse()V
    .locals 4

    .line 179
    iget-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$2;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-static {v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object v1

    const v2, 0x14c0c

    const-string v3, "\u7528\u6237\u62d2\u7edd\u83b7\u53d6"

    invoke-virtual {v0, v2, v3, v1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method
