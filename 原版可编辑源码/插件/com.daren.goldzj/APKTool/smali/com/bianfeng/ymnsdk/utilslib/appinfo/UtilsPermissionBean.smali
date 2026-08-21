.class Lcom/bianfeng/ymnsdk/utilslib/appinfo/UtilsPermissionBean;
.super Ljava/lang/Object;
.source "UtilsPermissionBean.java"


# instance fields
.field private hasPermission:Z

.field private permissionName:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Z)V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 10
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/UtilsPermissionBean;->permissionName:Ljava/lang/String;

    .line 11
    iput-boolean p2, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/UtilsPermissionBean;->hasPermission:Z

    return-void
.end method


# virtual methods
.method public getPermissionName()Ljava/lang/String;
    .locals 1

    .line 15
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/UtilsPermissionBean;->permissionName:Ljava/lang/String;

    return-object v0
.end method

.method public isHasPermission()Z
    .locals 1

    .line 23
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/UtilsPermissionBean;->hasPermission:Z

    return v0
.end method

.method public setHasPermission(Z)V
    .locals 0

    .line 27
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/UtilsPermissionBean;->hasPermission:Z

    return-void
.end method

.method public setPermissionName(Ljava/lang/String;)V
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/UtilsPermissionBean;->permissionName:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 32
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
