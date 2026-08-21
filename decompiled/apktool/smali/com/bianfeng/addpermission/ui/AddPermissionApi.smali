.class public Lcom/bianfeng/addpermission/ui/AddPermissionApi;
.super Ljava/lang/Object;
.source "AddPermissionApi.java"


# static fields
.field private static permissionCallback:Lcom/bianfeng/addpermission/ui/PermissionCallback;

.field private static policyCallBack:Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getPermissionCallback()Lcom/bianfeng/addpermission/ui/PermissionCallback;
    .locals 1

    .line 21
    sget-object v0, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->permissionCallback:Lcom/bianfeng/addpermission/ui/PermissionCallback;

    return-object v0
.end method

.method public static getPolicyCallBack()Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;
    .locals 1

    .line 17
    sget-object v0, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->policyCallBack:Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;

    return-object v0
.end method

.method public static setPermissionCallback(Lcom/bianfeng/addpermission/ui/PermissionCallback;)V
    .locals 0

    .line 25
    sput-object p0, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->permissionCallback:Lcom/bianfeng/addpermission/ui/PermissionCallback;

    return-void
.end method

.method public static setPolicyCallBack(Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;)V
    .locals 0

    .line 13
    sput-object p0, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->policyCallBack:Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;

    return-void
.end method

.method public static showPolicyDialog(Landroid/app/Activity;)V
    .locals 0

    .line 45
    invoke-static {p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->start(Landroid/app/Activity;)V

    return-void
.end method

.method public static showTipsDialog(Landroid/app/Activity;)V
    .locals 0

    .line 67
    invoke-static {p0}, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->start(Landroid/app/Activity;)V

    return-void
.end method

.method public static toShowPermissionDialog(Landroid/app/Activity;)V
    .locals 1

    const-string v0, "======toShowPermissionDialog="

    .line 57
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 58
    invoke-static {p0}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->start(Landroid/app/Activity;)V

    return-void
.end method
