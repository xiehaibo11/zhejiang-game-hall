.class public Lcom/bianfeng/addpermission/ui/AddPermissionActivity;
.super Landroid/app/Activity;
.source "AddPermissionActivity.java"


# static fields
.field private static final REQUEST_PERMISSIONS_CODE:I = 0x5573a

.field private static handler:Landroid/os/Handler;


# instance fields
.field private checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

.field private lackedPermission:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private permissionList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private permissionUtils:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

.field private policyCheckCallback:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

.field private privacyPolicyUtils:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 201
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    sput-object v0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->handler:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 39
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 41
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->lackedPermission:Ljava/util/List;

    .line 42
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->permissionList:Ljava/util/List;

    .line 245
    new-instance v0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$3;

    invoke-direct {v0, p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$3;-><init>(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    .line 266
    new-instance v0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$4;

    invoke-direct {v0, p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$4;-><init>(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->policyCheckCallback:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V
    .locals 0

    .line 39
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->toNextActivity()V

    return-void
.end method

.method static synthetic access$100(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V
    .locals 0

    .line 39
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->toSetting()V

    return-void
.end method

.method static synthetic access$200(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)Ljava/lang/String;
    .locals 0

    .line 39
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->getGameActivityName()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$300(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V
    .locals 0

    .line 39
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->requestPermission()V

    return-void
.end method

.method static synthetic access$400(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V
    .locals 0

    .line 39
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->toCheckPermission()V

    return-void
.end method

.method private getGameActivityName()Ljava/lang/String;
    .locals 4

    const-string v0, "ADD_PERMISSION_ACTIVITY_MAIN"

    .line 230
    invoke-static {p0, v0}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 231
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u83b7\u53d6\u5230\u7684activity\u540d\u662f"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const-string v1, "org.cocos2dx.cpp.AppActivity"

    .line 232
    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v1

    :cond_0
    const-string v2, "com.bf.sysfunc.BFActivity"

    .line 234
    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    return-object v2

    :cond_1
    const-string v2, "com.bf.prettysdk.BFActivity"

    .line 236
    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_2

    return-object v2

    .line 238
    :cond_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    return-object v1

    :cond_3
    return-object v0
.end method

.method private hasNecessaryPMSGranted([Ljava/lang/String;)Z
    .locals 7

    .line 192
    array-length v0, p1

    const/4 v1, 0x0

    const/4 v2, 0x1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v0, :cond_1

    aget-object v4, p1, v3

    .line 193
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "hasNecessaryPMSGranted"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 194
    invoke-virtual {p0, v4}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v4

    if-eqz v4, :cond_0

    const/4 v2, 0x0

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return v2
.end method

.method public static hideVirtualKey(Landroid/app/Activity;)V
    .locals 3

    .line 82
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    const/16 v2, 0xb

    if-le v0, v2, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v1, :cond_0

    .line 83
    invoke-virtual {p0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p0

    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p0

    const/16 v0, 0x8

    invoke-virtual {p0, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 84
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_1

    const/16 v0, 0x1006

    .line 86
    invoke-virtual {p0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p0

    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    :cond_1
    :goto_0
    return-void
.end method

.method private requestPermission()V
    .locals 4

    .line 113
    invoke-static {p0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getPermissions()Ljava/util/List;

    move-result-object v0

    .line 114
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->lackedPermission:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 115
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/addpermission/ui/PermissionBean;

    .line 116
    invoke-virtual {v1}, Lcom/bianfeng/addpermission/ui/PermissionBean;->getIsok()Ljava/lang/String;

    move-result-object v2

    .line 117
    invoke-virtual {v1}, Lcom/bianfeng/addpermission/ui/PermissionBean;->getAndroidName()Ljava/lang/String;

    move-result-object v1

    const-string v3, "0"

    .line 118
    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 119
    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->lackedPermission:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 120
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, " AddPermissionActivity requestPermission == "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    goto :goto_0

    .line 124
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->permissionList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 125
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->lackedPermission:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 126
    invoke-virtual {p0, v1}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v2

    if-eqz v2, :cond_2

    .line 127
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, " AddPermissionActivity checkAndRequestPermission ==== "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 128
    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->permissionList:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 132
    :cond_3
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->permissionList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_4

    .line 137
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$1;-><init>(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->permissionList:Ljava/util/List;

    .line 157
    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions(Ljava/util/List;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    const v1, 0x5573a

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z

    goto :goto_2

    .line 159
    :cond_4
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->toNextActivity()V

    :goto_2
    return-void
.end method

.method private toCheckPermission()V
    .locals 3

    .line 103
    :try_start_0
    new-instance v0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    invoke-direct {v0, p0, v1}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;-><init>(Landroid/app/Activity;Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->permissionUtils:Lcom/bianfeng/addpermission/common/CheckPermissionUtils;

    .line 104
    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->check()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 106
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, " Exception == "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private toCheckPolicy()V
    .locals 3

    .line 94
    :try_start_0
    new-instance v0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;

    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->policyCheckCallback:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

    invoke-direct {v0, p0, v1}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;-><init>(Landroid/app/Activity;Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->privacyPolicyUtils:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;

    .line 95
    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->check()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 97
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, " Exception == "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private toNextActivity()V
    .locals 5

    .line 205
    invoke-static {p0}, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->isNotNeedSplash(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    const/16 v0, 0x7d0

    .line 209
    :goto_0
    sget-object v1, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->handler:Landroid/os/Handler;

    new-instance v2, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;

    invoke-direct {v2, p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity$2;-><init>(Lcom/bianfeng/addpermission/ui/AddPermissionActivity;)V

    int-to-long v3, v0

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method private toSetting()V
    .locals 4

    const-string v0, "ADD_PERMISSION_JUMP_TO_PERMISSION"

    .line 165
    invoke-static {p0, v0}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 166
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, "package:"

    const-string v3, "android.settings.APPLICATION_DETAILS_SETTINGS"

    if-nez v1, :cond_1

    const-string v1, "jump"

    .line 167
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 168
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 169
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 170
    invoke-virtual {p0, v0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->startActivity(Landroid/content/Intent;)V

    .line 171
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->finish()V

    goto :goto_0

    .line 173
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->toNextActivity()V

    goto :goto_0

    .line 176
    :cond_1
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 177
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 178
    invoke-virtual {p0, v0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->startActivity(Landroid/content/Intent;)V

    .line 179
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->finish()V

    :goto_0
    return-void
.end method


# virtual methods
.method public finish()V
    .locals 1

    .line 282
    invoke-super {p0}, Landroid/app/Activity;->finish()V

    const/4 v0, 0x0

    .line 283
    invoke-virtual {p0, v0, v0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->overridePendingTransition(II)V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 6

    .line 48
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 49
    invoke-static {p0}, Lcom/bianfeng/addpermission/common/DensityUtils;->setDefault(Landroid/app/Activity;)V

    const-string p1, "ADD_PERMISSION_IS_FULLSCREEN"

    .line 50
    invoke-static {p0, p1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 51
    invoke-static {p0}, Lcom/bianfeng/gongxiang/screenlib/ScreenSdk;->setFullScreen(Landroid/app/Activity;)V

    :cond_0
    const/4 p1, 0x1

    .line 58
    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->requestWindowFeature(I)Z

    .line 59
    invoke-static {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->hideVirtualKey(Landroid/app/Activity;)V

    .line 62
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/16 v1, 0x400

    invoke-virtual {v0, v1}, Landroid/view/Window;->addFlags(I)V

    const-string v0, "R.layout.activity_add_permission"

    .line 63
    invoke-static {p0, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->setContentView(I)V

    .line 64
    invoke-static {}, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->getInstance()Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->init(Landroid/content/Context;)V

    .line 65
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/AddPermissionActivity;->toCheckPolicy()V

    :try_start_0
    const-string v0, "YSDK_MAIN_ACTIVITY"

    .line 68
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.tencent.ysdk.api.YSDKApi"

    .line 69
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "setMainActivity"

    new-array v3, p1, [Ljava/lang/Class;

    .line 70
    const-class v4, Ljava/lang/String;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    invoke-virtual {v1, v2, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    .line 72
    invoke-virtual {v2, p1}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array p1, p1, [Ljava/lang/Object;

    aput-object v0, p1, v5

    .line 73
    invoke-virtual {v2, v1, p1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 77
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
