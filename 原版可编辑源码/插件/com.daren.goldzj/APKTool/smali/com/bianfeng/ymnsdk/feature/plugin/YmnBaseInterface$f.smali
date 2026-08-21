.class Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$f;
.super Ljava/lang/Object;
.source "YmnBaseInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->request_permission(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$f;->a:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAllow(ILjava/lang/String;)V
    .locals 2

    .line 1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$f;->a:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5141\u8bb8\u7684\u6743\u9650|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const/16 v0, 0x8a1

    const-string v1, "request_permission"

    invoke-virtual {p1, v0, p2, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onAllowAll(I)V
    .locals 3

    .line 1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$f;->a:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    const/16 v0, 0x8a0

    const-string v1, "\u6743\u9650\u7533\u8bf7\u6210\u529f"

    const-string v2, "request_permission"

    invoke-virtual {p1, v0, v1, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onDeny(ILjava/lang/String;)V
    .locals 2

    .line 1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$f;->a:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u62d2\u7edd\u7684\u6743\u9650|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const/16 v0, 0x8a1

    const-string v1, "request_permission"

    invoke-virtual {p1, v0, p2, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onDenyIn48Hours(ILjava/lang/String;)V
    .locals 2

    .line 1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$f;->a:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u8fd9\u4e9b\u6743\u9650\u572848\u5c0f\u65f6\u5185\u7533\u8bf7\u8fc7|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const/16 v0, 0x8a3

    const-string v1, "request_permission"

    invoke-virtual {p1, v0, p2, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method
