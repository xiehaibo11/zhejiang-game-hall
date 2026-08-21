.class public Lcom/bianfeng/addpermission/AddPermissionInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "AddPermissionInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field private static final ADD_PERMISSION:Ljava/lang/String; = "add_permission"

.field private static final ADD_PERMISSION_FAIL:I = 0x14c09

.field private static final ADD_PERMISSION_IN48:I = 0x14c14

.field private static final ADD_PERMISSION_SUCCESS:I = 0x14c08

.field private static final AGREE_POLICY:I = 0x14c10

.field private static final CHECK_HAS_PERMISSION:Ljava/lang/String; = "check_has_permission"

.field private static final CHECK_SELELCT_NO_REQUEST:Ljava/lang/String; = "check_select_no_request"

.field private static final CLEAR_FAIL:I = 0x14c16

.field private static final CLEAR_SUCCESS:I = 0x14c15

.field private static final CLEAR_USER_POLICY:Ljava/lang/String; = "clear_user_policy"

.field private static final GET_ADD_PERMISSION:I = 0x14c0a

.field private static final GET_GRANT_LIST_SUCCESS:I = 0x14c17

.field private static final GET_GRANT_PERMISSIONS:Ljava/lang/String; = "get_grant_permission"

.field private static final GET_PERMISSION:Ljava/lang/String; = "get_permission"

.field private static final HAS_PERMISSIONS:I = 0x14c0e

.field private static final JUMP_PERMISSION_SYSTEM:Ljava/lang/String; = "jump_permission_system"

.field private static final NON_SELECT_NO_REQUEST:I = 0x14c13

.field private static final NOT_HAS_PERMISSIONS:I = 0x14c0f

.field private static final REFUSE_POLICY:I = 0x14c11

.field private static final REQUEST_PERMISSION:Ljava/lang/String; = "request_permission"

.field private static final SELECT_NO_REQUEST:I = 0x14c12

.field private static final SHOW_ADD_PERMISSION_AGREE:I = 0x14c0b

.field private static final SHOW_ADD_PERMISSION_HAD:I = 0x14c0d

.field private static final SHOW_ADD_PERMISSION_REFUSE:I = 0x14c0c

.field private static final SHOW_PERMISSION_DIALOG:Ljava/lang/String; = "show_permission_dialog"

.field private static final SHOW_POLICY_DIALOG:Ljava/lang/String; = "show_policy_dialog"

.field private static final USER_INITATIVE:Ljava/lang/String; = "user_initiative"

.field private static final YMNAGREEPRIVACY:Ljava/lang/String; = "ymn_agree_privacy"


# instance fields
.field private checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

.field private context:Landroid/content/Context;

.field private funcName:Ljava/lang/String;

.field private permissionUtils:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 29
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    const-string v0, ""

    .line 66
    iput-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->funcName:Ljava/lang/String;

    .line 176
    new-instance v0, Lcom/bianfeng/addpermission/AddPermissionInterface$2;

    invoke-direct {v0, p0}, Lcom/bianfeng/addpermission/AddPermissionInterface$2;-><init>(Lcom/bianfeng/addpermission/AddPermissionInterface;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/addpermission/AddPermissionInterface;)Ljava/lang/String;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->funcName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/addpermission/AddPermissionInterface;)Lcom/bianfeng/addpermission/common/CheckPermissionUtils;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->permissionUtils:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    return-object p0
.end method

.method private checkSelectNonRequest(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "check_select_no_request"
    .end annotation

    .line 220
    invoke-static {p1}, Lcom/bianfeng/addpermission/common/ConstantsUtils;->toPermissionList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object p1

    .line 221
    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 222
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    if-lt v1, v2, :cond_0

    .line 223
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v1

    if-eqz v1, :cond_0

    .line 224
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/app/Activity;->shouldShowRequestPermissionRationale(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    :goto_0
    const-string v0, "check_select_no_request"

    if-eqz p1, :cond_2

    const p1, 0x14c12

    const-string v1, "\u52fe\u9009\u4e86\u7981\u6b62\u4e0d\u518d\u63d0\u9192"

    .line 233
    invoke-virtual {p0, p1, v1, v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    const p1, 0x14c13

    const-string v1, "\u672a\u52fe\u9009\u4e86\u7981\u6b62\u4e0d\u518d\u63d0\u9192"

    .line 236
    invoke-virtual {p0, p1, v1, v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method


# virtual methods
.method public addPermission(Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "add_permission"
    .end annotation

    .line 99
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u7533\u8bf7\u6743\u9650"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/bianfeng/addpermission/common/ConstantsUtils;->toPermissionList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const-string v0, "add_permission"

    .line 100
    iput-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->funcName:Ljava/lang/String;

    .line 101
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/addpermission/AddPermissionInterface$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/addpermission/AddPermissionInterface$1;-><init>(Lcom/bianfeng/addpermission/AddPermissionInterface;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    .line 125
    invoke-static {p1}, Lcom/bianfeng/addpermission/common/ConstantsUtils;->toPermissionList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions(Ljava/util/List;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    const/16 v0, 0x400

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z

    return-void
.end method

.method public checkHasPermission(Ljava/lang/String;)V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "check_has_permission"
    .end annotation

    .line 161
    invoke-static {p1}, Lcom/bianfeng/addpermission/common/ConstantsUtils;->toPermissionList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object p1

    .line 162
    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    const/4 v0, 0x1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 163
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x17

    if-lt v2, v3, :cond_0

    .line 164
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->getActivity()Landroid/app/Activity;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v1

    if-eqz v1, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_1
    const-string p1, "check_has_permission"

    if-eqz v0, :cond_2

    const v0, 0x14c0e

    const-string v1, "\u6709\u6743\u9650"

    .line 170
    invoke-virtual {p0, v0, v1, p1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    const v0, 0x14c0f

    const-string v1, "\u65e0\u6743\u9650"

    .line 172
    invoke-virtual {p0, v0, v1, p1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public clearUserPolicy()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "clear_user_policy"
    .end annotation

    .line 254
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;->clearAgreePrivacy()V

    const v0, 0x14c15

    const-string v1, "success"

    .line 255
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    const v1, 0x14c16

    .line 257
    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public getGrantPermissions()V
    .locals 7
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "get_grant_permission"
    .end annotation

    .line 263
    new-instance v0, Lcom/bianfeng/addpermission/common/Constants;

    invoke-direct {v0}, Lcom/bianfeng/addpermission/common/Constants;-><init>()V

    .line 264
    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/Constants;->getPermissionStr()Ljava/util/ArrayList;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, ""

    move-object v4, v2

    const/4 v3, 0x0

    .line 267
    :goto_0
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v5

    const-string v6, ";"

    if-ge v3, v5, :cond_0

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 268
    :cond_0
    invoke-static {v4}, Lcom/bianfeng/addpermission/common/ConstantsUtils;->toPermissionList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v0

    .line 270
    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 271
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x17

    if-lt v4, v5, :cond_1

    .line 272
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->getActivity()Landroid/app/Activity;

    move-result-object v4

    invoke-virtual {v4, v3}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v3

    if-nez v3, :cond_1

    .line 273
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    :cond_2
    const v0, 0x14c17

    .line 278
    invoke-virtual {p0, v0, v2}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public getPermission()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "get_permission"
    .end annotation

    .line 139
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getPermissionsStr()Ljava/lang/String;

    move-result-object v0

    .line 140
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u83b7\u53d6\u6743\u9650"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const v1, 0x14c0a

    const-string v2, "get_permission"

    .line 141
    invoke-virtual {p0, v1, v0, v2}, Lcom/bianfeng/addpermission/AddPermissionInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "85"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "addpermission"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0x5b

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "2.0.0"

    return-object v0
.end method

.method public jumpPermissionSystem()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "jump_permission_system"
    .end annotation

    .line 146
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.settings.APPLICATION_DETAILS_SETTINGS"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 147
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "package:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->context:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 148
    iget-object v1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->context:Landroid/content/Context;

    invoke-virtual {v1, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1

    .line 92
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 93
    iput-object p1, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->context:Landroid/content/Context;

    .line 94
    invoke-static {}, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->getInstance()Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->init(Landroid/content/Context;)V

    return-void
.end method

.method public requestPermission(Ljava/lang/String;)V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "request_permission"
    .end annotation

    const-string v0, "\u7533\u8bf7\u6743\u9650"

    .line 130
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const-string v0, "request_permission"

    .line 131
    iput-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->funcName:Ljava/lang/String;

    .line 132
    new-instance v0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    invoke-virtual {p0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    const/4 v3, 0x1

    invoke-direct {v0, v1, v2, p1, v3}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;-><init>(Landroid/app/Activity;Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;Ljava/lang/String;Z)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->permissionUtils:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    .line 133
    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->check()V

    return-void
.end method

.method public showPermissionDialog()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "show_permission_dialog"
    .end annotation

    const-string v0, "show_permission_dialog"

    .line 153
    iput-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->funcName:Ljava/lang/String;

    .line 154
    new-instance v0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    invoke-virtual {p0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    invoke-direct {v0, v1, v2}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;-><init>(Landroid/app/Activity;Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/AddPermissionInterface;->permissionUtils:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    .line 155
    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->check()V

    return-void
.end method

.method public showPolicyDialog()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "show_policy_dialog"
    .end annotation

    const-string v0, "showPolicyDialog"

    .line 201
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 202
    new-instance v0, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;

    invoke-virtual {p0}, Lcom/bianfeng/addpermission/AddPermissionInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    new-instance v2, Lcom/bianfeng/addpermission/AddPermissionInterface$3;

    invoke-direct {v2, p0}, Lcom/bianfeng/addpermission/AddPermissionInterface$3;-><init>(Lcom/bianfeng/addpermission/AddPermissionInterface;)V

    invoke-direct {v0, v1, v2}, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;-><init>(Landroid/app/Activity;Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;)V

    return-void
.end method

.method public userInitiative()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "user_initiative"
    .end annotation

    :try_start_0
    const-string v0, "isInitiative"

    const/4 v1, 0x1

    .line 243
    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 246
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
