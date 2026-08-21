.class public Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;
.super Landroid/app/Fragment;
.source "PermissionFragment.java"


# instance fields
.field private callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Landroid/app/Fragment;-><init>()V

    return-void
.end method


# virtual methods
.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 1
    .param p1, "requestCode"    # I
    .param p2, "permissions"    # [Ljava/lang/String;
    .param p3, "grantResults"    # [I

    .line 16
    invoke-super {p0, p1, p2, p3}, Landroid/app/Fragment;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    .line 17
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;

    if-eqz v0, :cond_0

    .line 18
    invoke-interface {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    .line 20
    :cond_0
    return-void
.end method

.method public setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;)V
    .locals 0
    .param p1, "callback"    # Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;

    .line 11
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;

    .line 12
    return-void
.end method
