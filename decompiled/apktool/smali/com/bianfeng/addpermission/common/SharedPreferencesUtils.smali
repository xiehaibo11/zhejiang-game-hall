.class public Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;
.super Ljava/lang/Object;
.source "SharedPreferencesUtils.java"


# static fields
.field private static final ANDPERMISSION_AGREE_POLICY:Ljava/lang/String; = "permission_agree_policy"

.field private static final ISFIRST:Ljava/lang/String; = "permission_isFirst"

.field private static final ISREFUSE:Ljava/lang/String; = "permission_isRefuse"

.field private static final PERMISSION_LIST:Ljava/lang/String; = "permission_list"

.field private static final POLICY_DIALOG_SHOW:Ljava/lang/String; = "policy_dialog_show"

.field private static volatile preferencesUtils:Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;
    .locals 1

    .line 27
    sget-object p0, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->preferencesUtils:Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    if-nez p0, :cond_1

    .line 28
    const-class p0, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    monitor-enter p0

    .line 29
    :try_start_0
    sget-object v0, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->preferencesUtils:Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    if-nez v0, :cond_0

    .line 30
    new-instance v0, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    invoke-direct {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->preferencesUtils:Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    .line 32
    :cond_0
    monitor-exit p0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0

    .line 34
    :cond_1
    :goto_0
    sget-object p0, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->preferencesUtils:Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    return-object p0
.end method


# virtual methods
.method public getAgreePolicy()Z
    .locals 1

    const-string v0, "permission_agree_policy"

    .line 134
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public getIsFirst()Z
    .locals 1

    const-string v0, "permission_isFirst"

    .line 86
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public getPermissions()Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/bianfeng/addpermission/ui/PermissionBean;",
            ">;"
        }
    .end annotation

    .line 57
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getPermissionsStr()Ljava/lang/String;

    move-result-object v0

    .line 58
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 59
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    return-object v0

    .line 61
    :cond_0
    new-instance v1, Lcom/google/gson/Gson;

    invoke-direct {v1}, Lcom/google/gson/Gson;-><init>()V

    new-instance v2, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils$1;

    invoke-direct {v2, p0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils$1;-><init>(Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;)V

    invoke-virtual {v2}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils$1;->getType()Ljava/lang/reflect/Type;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 64
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getPermissions: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 66
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    return-object v0
.end method

.method public getPermissionsStr()Ljava/lang/String;
    .locals 1

    const-string v0, "permission_list"

    .line 52
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPolicyDialogShow()Z
    .locals 1

    const-string v0, "policy_dialog_show"

    .line 156
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public getRefuxe()Z
    .locals 1

    const-string v0, "permission_isRefuse"

    .line 126
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public putString(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/addpermission/ui/PermissionBean;",
            ">;)V"
        }
    .end annotation

    .line 38
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "putString"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Lcom/google/gson/Gson;

    invoke-direct {v1}, Lcom/google/gson/Gson;-><init>()V

    invoke-virtual {v1, p1}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 39
    invoke-static {}, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->getInstance()Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->put(Ljava/util/List;)Ljava/lang/String;

    move-result-object p1

    :try_start_0
    const-string v0, "permission_list"

    .line 41
    invoke-static {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 43
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setAgreePolicy(Z)V
    .locals 1

    :try_start_0
    const-string v0, "permission_agree_policy"

    .line 103
    invoke-static {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public setIsFirst(Z)V
    .locals 1

    :try_start_0
    const-string v0, "permission_isFirst"

    .line 74
    invoke-static {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 76
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setPolicyDialogShow(Z)V
    .locals 1

    :try_start_0
    const-string v0, "policy_dialog_show"

    .line 143
    invoke-static {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 146
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setRefuse(Z)V
    .locals 1

    :try_start_0
    const-string v0, "permission_isRefuse"

    .line 91
    invoke-static {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method
