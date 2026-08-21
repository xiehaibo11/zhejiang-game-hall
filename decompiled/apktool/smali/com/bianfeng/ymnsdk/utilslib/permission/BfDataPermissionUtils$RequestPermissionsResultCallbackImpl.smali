.class public Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;
.super Ljava/lang/Object;
.source "BfDataPermissionUtils.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4
    name = "RequestPermissionsResultCallbackImpl"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;


# direct methods
.method protected constructor <init>(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    .line 253
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;->this$0:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 1
    .param p1, "requestCode"    # I
    .param p2, "permissions"    # [Ljava/lang/String;
    .param p3, "grantResults"    # [I

    .line 256
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;->this$0:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    .line 257
    return-void
.end method
