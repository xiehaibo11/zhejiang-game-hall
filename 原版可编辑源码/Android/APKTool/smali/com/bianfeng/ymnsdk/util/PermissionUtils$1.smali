.class Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;
.super Ljava/lang/Object;
.source "PermissionUtils.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/util/PermissionUtils;->requestPermission(Landroid/app/Activity;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    .line 37
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAllow(ILjava/lang/String;)V
    .locals 2
    .param p1, "i"    # I
    .param p2, "s"    # Ljava/lang/String;

    .line 50
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$100(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 51
    const/16 v0, 0x400

    if-ne p1, v0, :cond_0

    .line 52
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$102(Lcom/bianfeng/ymnsdk/util/PermissionUtils;Z)Z

    .line 53
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;->onCall()V

    .line 56
    :cond_0
    return-void
.end method

.method public onAllowAll(I)V
    .locals 2
    .param p1, "i"    # I

    .line 40
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$100(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 41
    const/16 v0, 0x400

    if-ne p1, v0, :cond_0

    .line 42
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$102(Lcom/bianfeng/ymnsdk/util/PermissionUtils;Z)Z

    .line 43
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;->onCall()V

    .line 46
    :cond_0
    return-void
.end method

.method public onDeny(ILjava/lang/String;)V
    .locals 2
    .param p1, "i"    # I
    .param p2, "s"    # Ljava/lang/String;

    .line 60
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$100(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 61
    const/16 v0, 0x400

    if-ne p1, v0, :cond_0

    .line 62
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$102(Lcom/bianfeng/ymnsdk/util/PermissionUtils;Z)Z

    .line 63
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;->onCall()V

    .line 66
    :cond_0
    return-void
.end method

.method public onDenyIn48Hours(ILjava/lang/String;)V
    .locals 2
    .param p1, "i"    # I
    .param p2, "s"    # Ljava/lang/String;

    .line 70
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$100(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 71
    const/16 v0, 0x400

    if-ne p1, v0, :cond_0

    .line 72
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$102(Lcom/bianfeng/ymnsdk/util/PermissionUtils;Z)Z

    .line 73
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;->onCall()V

    .line 76
    :cond_0
    return-void
.end method
