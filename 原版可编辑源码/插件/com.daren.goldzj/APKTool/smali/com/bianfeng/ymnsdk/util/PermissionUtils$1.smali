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

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAllow(ILjava/lang/String;)V
    .locals 0

    .line 1
    iget-object p2, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object p2

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$100(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Z

    move-result p2

    if-nez p2, :cond_0

    const/16 p2, 0x400

    if-ne p1, p2, :cond_0

    .line 3
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    const/4 p2, 0x1

    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$102(Lcom/bianfeng/ymnsdk/util/PermissionUtils;Z)Z

    .line 4
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;->onCall()V

    :cond_0
    return-void
.end method

.method public onAllowAll(I)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$100(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Z

    move-result v0

    if-nez v0, :cond_0

    const/16 v0, 0x400

    if-ne p1, v0, :cond_0

    .line 3
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$102(Lcom/bianfeng/ymnsdk/util/PermissionUtils;Z)Z

    .line 4
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;->onCall()V

    :cond_0
    return-void
.end method

.method public onDeny(ILjava/lang/String;)V
    .locals 0

    .line 1
    iget-object p2, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object p2

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$100(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Z

    move-result p2

    if-nez p2, :cond_0

    const/16 p2, 0x400

    if-ne p1, p2, :cond_0

    .line 3
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    const/4 p2, 0x1

    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$102(Lcom/bianfeng/ymnsdk/util/PermissionUtils;Z)Z

    .line 4
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;->onCall()V

    :cond_0
    return-void
.end method

.method public onDenyIn48Hours(ILjava/lang/String;)V
    .locals 0

    .line 1
    iget-object p2, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object p2

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$100(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Z

    move-result p2

    if-nez p2, :cond_0

    const/16 p2, 0x400

    if-ne p1, p2, :cond_0

    .line 3
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    const/4 p2, 0x1

    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$102(Lcom/bianfeng/ymnsdk/util/PermissionUtils;Z)Z

    .line 4
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;->onCall()V

    :cond_0
    return-void
.end method
