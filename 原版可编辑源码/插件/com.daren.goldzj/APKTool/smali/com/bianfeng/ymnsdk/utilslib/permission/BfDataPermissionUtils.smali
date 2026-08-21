.class public Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
.super Ljava/lang/Object;
.source "BfDataPermissionUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;,
        Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;,
        Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;,
        Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissionResultCallback;
    }
.end annotation


# static fields
.field private static final TIME_48:J = 0xa4cb800L


# instance fields
.field private TAG_PERMISSION:Ljava/lang/String;

.field private activity:Landroid/app/Activity;

.field private callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

.field private lists:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private manifestPermission:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private resultCallback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissionResultCallback;

.field private set:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Landroid/app/Activity;)V
    .locals 2

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->set:Ljava/util/Set;

    const-string v0, "YMNSDK_PERMISSION_TAG"

    .line 29
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->TAG_PERMISSION:Ljava/lang/String;

    .line 30
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->manifestPermission:Ljava/util/List;

    .line 43
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->activity:Landroid/app/Activity;

    .line 44
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->manifestPermission:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    .line 45
    invoke-virtual {p1}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 46
    invoke-virtual {p1}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object p1

    const/16 v1, 0x1000

    .line 48
    :try_start_0
    invoke-virtual {v0, p1, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p1

    iget-object p1, p1, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    .line 49
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->manifestPermission:Ljava/util/List;

    invoke-static {p1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;I)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->request(I)V

    return-void
.end method

.method public static check(Ljava/lang/String;Landroid/content/Context;)Z
    .locals 3

    .line 68
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x1

    const/16 v2, 0x17

    if-lt v0, v2, :cond_1

    .line 70
    invoke-virtual {p1, p0}, Landroid/content/Context;->checkSelfPermission(Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :cond_1
    :goto_0
    return v1
.end method

.method private check48Hours(Ljava/lang/String;)Z
    .locals 6

    const-string v0, "isInitiative"

    .line 153
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz v1, :cond_0

    .line 157
    :try_start_0
    invoke-static {v0, v3}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 160
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return v2

    .line 164
    :cond_0
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getLong(Ljava/lang/String;)J

    move-result-wide v0

    .line 165
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long/2addr v4, v0

    const-wide/32 v0, 0xa4cb800

    cmp-long p1, v4, v0

    if-ltz p1, :cond_1

    return v2

    :cond_1
    return v3
.end method

.method public static newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .locals 1

    .line 57
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;-><init>(Landroid/app/Activity;)V

    return-object v0
.end method

.method private request(I)V
    .locals 5

    .line 175
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_1

    .line 176
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->lists:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    .line 177
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->lists:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    .line 178
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->activity:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v1

    .line 179
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->TAG_PERMISSION:Ljava/lang/String;

    invoke-virtual {v1, v2}, Landroid/app/FragmentManager;->findFragmentByTag(Ljava/lang/String;)Landroid/app/Fragment;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;

    if-nez v2, :cond_0

    .line 181
    new-instance v2, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;

    invoke-direct {v2}, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;-><init>()V

    .line 182
    new-instance v3, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;

    invoke-direct {v3, p0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;-><init>(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;)V

    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;)V

    .line 183
    invoke-virtual {v1}, Landroid/app/FragmentManager;->beginTransaction()Landroid/app/FragmentTransaction;

    move-result-object v3

    .line 184
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->TAG_PERMISSION:Ljava/lang/String;

    invoke-virtual {v3, v2, v4}, Landroid/app/FragmentTransaction;->add(Landroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;

    .line 185
    invoke-virtual {v3}, Landroid/app/FragmentTransaction;->commit()I

    .line 186
    invoke-virtual {v1}, Landroid/app/FragmentManager;->executePendingTransactions()Z

    .line 187
    invoke-virtual {v2, v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;->requestPermissions([Ljava/lang/String;I)V

    goto :goto_0

    .line 190
    :cond_0
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;-><init>(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;)V

    invoke-virtual {v2, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;)V

    .line 191
    invoke-virtual {v2, v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;->requestPermissions([Ljava/lang/String;I)V

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 7

    .line 204
    array-length v0, p3

    .line 205
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 206
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v0, :cond_1

    .line 208
    aget v4, p3, v3

    if-eqz v4, :cond_0

    .line 210
    :try_start_0
    aget-object v4, p2, v3

    invoke-interface {v1, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 211
    aget-object v4, p2, v3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-static {v4, v5, v6}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v4

    .line 213
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1

    .line 216
    :cond_0
    aget-object v4, p2, v3

    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 219
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    if-eqz v0, :cond_3

    .line 220
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 222
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    invoke-interface {v1}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, p1, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onDeny(ILjava/lang/String;)V

    .line 223
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    invoke-interface {v2}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, p1, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onAllow(ILjava/lang/String;)V

    goto :goto_2

    .line 225
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    invoke-interface {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onAllowAll(I)V

    .line 230
    :cond_3
    :goto_2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->resultCallback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissionResultCallback;

    if-eqz v0, :cond_4

    .line 231
    invoke-interface {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissionResultCallback;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    :cond_4
    return-void
.end method

.method public requestPermissions(I)Z
    .locals 7

    .line 96
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->manifestPermission:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    if-eqz v0, :cond_0

    const-string v2, "manifest\u4e2d\u6ca1\u6709\u914d\u7f6e\u6743\u9650"

    .line 97
    invoke-interface {v0, p1, v2}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onDeny(ILjava/lang/String;)V

    return v1

    .line 100
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    const/4 v3, 0x1

    if-ge v0, v2, :cond_1

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    if-eqz v0, :cond_1

    .line 101
    invoke-interface {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onAllowAll(I)V

    return v3

    .line 104
    :cond_1
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 105
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 106
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->set:Ljava/util/Set;

    invoke-interface {v4}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :cond_2
    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_3

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    .line 107
    iget-object v6, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->activity:Landroid/app/Activity;

    invoke-static {v5, v6}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->check(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v6

    if-nez v6, :cond_2

    .line 108
    invoke-interface {v0, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 111
    :cond_3
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v4

    if-nez v4, :cond_4

    iget-object v4, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    if-eqz v4, :cond_4

    .line 112
    invoke-interface {v4, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onAllowAll(I)V

    return v3

    .line 115
    :cond_4
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    iput-object v4, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->lists:Ljava/util/List;

    .line 116
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_7

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 117
    iget-object v5, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->manifestPermission:Ljava/util/List;

    invoke-interface {v5, v4}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_6

    .line 118
    invoke-direct {p0, v4}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->check48Hours(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_5

    .line 119
    iget-object v5, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->lists:Ljava/util/List;

    invoke-interface {v5, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 121
    :cond_5
    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 124
    :cond_6
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "-->\u5f53\u524d\u6743\u9650\u4e0d\u5728manifest\u4e2d"

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;)I

    goto :goto_1

    .line 127
    :cond_7
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->lists:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_9

    .line 128
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_8

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    if-eqz v0, :cond_8

    .line 129
    invoke-interface {v2}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v2

    invoke-static {v2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, p1, v2}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onDenyIn48Hours(ILjava/lang/String;)V

    .line 131
    :cond_8
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->activity:Landroid/app/Activity;

    new-instance v2, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$1;

    invoke-direct {v2, p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$1;-><init>(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;I)V

    invoke-virtual {v0, v2}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return v1

    .line 139
    :cond_9
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_a

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    if-eqz v0, :cond_a

    .line 140
    invoke-interface {v2}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, p1, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onDenyIn48Hours(ILjava/lang/String;)V

    :cond_a
    return v3
.end method

.method public setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    return-object p0
.end method

.method public setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissionResultCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .locals 0

    .line 38
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->resultCallback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissionResultCallback;

    return-object p0
.end method

.method public setPermissions(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->set:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-object p0
.end method

.method public setPermissions(Ljava/util/List;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;"
        }
    .end annotation

    .line 87
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->set:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->addAll(Ljava/util/Collection;)Z

    return-object p0
.end method

.method public setPermissions([Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->set:Ljava/util/Set;

    invoke-static {p1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/Set;->addAll(Ljava/util/Collection;)Z

    return-object p0
.end method
