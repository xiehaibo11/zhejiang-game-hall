.class Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$1;
.super Ljava/lang/Object;
.source "BfDataPermissionUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

.field final synthetic val$code:I


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;I)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    .line 131
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    iput p2, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$1;->val$code:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 134
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$1;->this$0:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    iget v1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$1;->val$code:I

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->access$000(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;I)V

    .line 135
    return-void
.end method
