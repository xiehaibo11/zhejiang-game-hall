.class Lcom/bianfeng/addpermission/AddPermissionInterface$1;
.super Ljava/lang/Object;
.source "AddPermissionInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/addpermission/AddPermissionInterface;->addPermission(Ljava/lang/String;)V
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

    .line 101
    iput-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAllow(ILjava/lang/String;)V
    .locals 3

    .line 110
    iget-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5141\u8bb8\u7684\u90e8\u5206\u6743\u9650\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-static {v1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object v1

    const v2, 0x14c09

    invoke-virtual {p1, v2, v0, v1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 111
    iget-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5141\u8bb8\u7684\u90e8\u5206\u6743\u9650"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-static {v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x8a1

    invoke-virtual {p1, v1, p2, v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onAllowAll(I)V
    .locals 3

    .line 104
    iget-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-static {p1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "\u6388\u6743\u6210\u529f"

    const v2, 0x14c08

    invoke-virtual {p1, v2, v1, v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 105
    iget-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-static {p1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object v0

    const/16 v2, 0x8a0

    invoke-virtual {p1, v2, v1, v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onDeny(ILjava/lang/String;)V
    .locals 3

    .line 115
    iget-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u62d2\u7edd\u7684\u6743\u9650\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-static {v1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object v1

    const v2, 0x14c09

    invoke-virtual {p1, v2, v0, v1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 116
    iget-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u62d2\u7edd\u7684\u6743\u9650"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-static {v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x8a1

    invoke-virtual {p1, v1, p2, v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onDenyIn48Hours(ILjava/lang/String;)V
    .locals 2

    .line 121
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onDenyIn48Hours--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "---"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 122
    iget-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-static {p1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object v0

    const v1, 0x14c14

    invoke-virtual {p1, v1, p2, v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 123
    iget-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface$1;->this$0:Lcom/bianfeng/addpermission/AddPermissionInterface;

    invoke-static {p1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;

    move-result-object p2

    const/16 v0, 0x8a3

    const-string v1, "\u6388\u6743\u6210\u529f"

    invoke-virtual {p1, v0, v1, p2}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method
