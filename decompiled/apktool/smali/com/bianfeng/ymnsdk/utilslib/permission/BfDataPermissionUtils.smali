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
    .locals 5
    .param p1, "activity"    # Landroid/app/Activity;

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->set:Ljava/util/Set;

    .line 29
    const-string v0, "YMNSDK_PERMISSION_TAG"

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
    .local v0, "packageManager":Landroid/content/pm/PackageManager;
    invoke-virtual {p1}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v1

    .line 48
    .local v1, "packageName":Ljava/lang/String;
    const/16 v2, 0x1000

    :try_start_0
    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v2

    iget-object v2, v2, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    .line 49
    .local v2, "strings":[Ljava/lang/String;
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->manifestPermission:Ljava/util/List;

    invoke-static {v2}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 51
    nop

    .end local v2    # "strings":[Ljava/lang/String;
    goto :goto_0

    .line 50
    :catch_0
    move-exception v2

    .line 54
    .end local v0    # "packageManager":Landroid/content/pm/PackageManager;
    .end local v1    # "packageName":Ljava/lang/String;
    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;I)V
    .locals 0
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .param p1, "x1"    # I

    .line 22
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->request(I)V

    return-void
.end method

.method public static check(Ljava/lang/String;Landroid/content/Context;)Z
    .locals 3
    .param p0, "name"    # Ljava/lang/String;
    .param p1, "context"    # Landroid/content/Context;

    .line 68
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x1

    const/16 v2, 0x17

    if-lt v0, v2, :cond_1

    .line 70
    invoke-virtual {p1, p0}, Landroid/content/Context;->checkSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1

    .line 72
    :cond_1
    return v1
.end method

.method private check48Hours(Ljava/lang/String;)Z
    .locals 12
    .param p1, "per"    # Ljava/lang/String;

    .line 153
    const-string v0, "isInitiative"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    .line 154
    .local v1, "isInitiative":Z
    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz v1, :cond_0

    .line 157
    :try_start_0
    invoke-static {v0, v3}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 161
    goto :goto_0

    .line 158
    :catch_0
    move-exception v0

    .line 160
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 162
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return v2

    .line 164
    :cond_0
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getLong(Ljava/lang/String;)J

    move-result-wide v4

    .line 165
    .local v4, "time":J
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    .line 166
    .local v6, "currentTime":J
    sub-long v8, v6, v4

    const-wide/32 v10, 0xa4cb800

    cmp-long v0, v8, v10

    if-ltz v0, :cond_1

    .line 167
    return v2

    .line 169
    :cond_1
    return v3
.end method

.method public static newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .locals 1
    .param p0, "activity"    # Landroid/app/Activity;

    .line 57
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;-><init>(Landroid/app/Activity;)V

    return-object v0
.end method

.method private request(I)V
    .locals 5
    .param p1, "code"    # I

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
    .local v0, "strings":[Ljava/lang/String;
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->lists:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    .line 178
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->activity:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v1

    .line 179
    .local v1, "fm":Landroid/app/FragmentManager;
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->TAG_PERMISSION:Ljava/lang/String;

    invoke-virtual {v1, v2}, Landroid/app/FragmentManager;->findFragmentByTag(Ljava/lang/String;)Landroid/app/Fragment;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;

    .line 180
    .local v2, "fragment":Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;
    if-nez v2, :cond_0

    .line 181
    new-instance v3, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;

    invoke-direct {v3}, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;-><init>()V

    move-object v2, v3

    .line 182
    new-instance v3, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;

    invoke-direct {v3, p0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;-><init>(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;)V

    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;)V

    .line 183
    invoke-virtual {v1}, Landroid/app/FragmentManager;->beginTransaction()Landroid/app/FragmentTransaction;

    move-result-object v3

    .line 184
    .local v3, "ft":Landroid/app/FragmentTransaction;
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->TAG_PERMISSION:Ljava/lang/String;

    invoke-virtual {v3, v2, v4}, Landroid/app/FragmentTransaction;->add(Landroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;

    .line 185
    invoke-virtual {v3}, Landroid/app/FragmentTransaction;->commit()I

    .line 186
    invoke-virtual {v1}, Landroid/app/FragmentManager;->executePendingTransactions()Z

    .line 187
    invoke-virtual {v2, v0, p1}, Landroid/app/Fragment;->requestPermissions([Ljava/lang/String;I)V

    .line 189
    .end local v3    # "ft":Landroid/app/FragmentTransaction;
    goto :goto_0

    .line 190
    :cond_0
    new-instance v3, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;

    invoke-direct {v3, p0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallbackImpl;-><init>(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;)V

    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$RequestPermissionsResultCallback;)V

    .line 191
    invoke-virtual {v2, v0, p1}, Landroid/app/Fragment;->requestPermissions([Ljava/lang/String;I)V

    .line 194
    .end local v0    # "strings":[Ljava/lang/String;
    .end local v1    # "fm":Landroid/app/FragmentManager;
    .end local v2    # "fragment":Lcom/bianfeng/ymnsdk/utilslib/permission/PermissionFragment;
    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 7
    .param p1, "requestCode"    # I
    .param p2, "permissions"    # [Ljava/lang/String;
    .param p3, "grantResults"    # [I

    .line 204
    array-length v0, p3

    .line 205
    .local v0, "size":I
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 206
    .local v1, "denyList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 207
    .local v2, "allowList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    const/4 v3, 0x0

    .local v3, "i":I
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

    .line 212
    :catch_0
    move-exception v4

    .line 213
    .local v4, "e":Ljava/lang/Exception;
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V

    .line 214
    .end local v4    # "e":Ljava/lang/Exception;
    :goto_1
    goto :goto_2

    .line 216
    :cond_0
    aget-object v4, p2, v3

    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 207
    :goto_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 219
    .end local v3    # "i":I
    :cond_1
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    if-eqz v3, :cond_3

    .line 220
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_2

    .line 222
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    invoke-interface {v1}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v4

    invoke-static {v4}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v3, p1, v4}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onDeny(ILjava/lang/String;)V

    .line 223
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    invoke-interface {v2}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v4

    invoke-static {v4}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v3, p1, v4}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onAllow(ILjava/lang/String;)V

    goto :goto_3

    .line 225
    :cond_2
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    invoke-interface {v3, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onAllowAll(I)V

    .line 230
    :cond_3
    :goto_3
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->resultCallback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissionResultCallback;

    if-eqz v3, :cond_4

    .line 231
    invoke-interface {v3, p1, p2, p3}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissionResultCallback;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    .line 233
    :cond_4
    return-void
.end method

.method public requestPermissions(I)Z
    .locals 8
    .param p1, "code"    # I

    .line 96
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->manifestPermission:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    if-eqz v0, :cond_0

    .line 97
    const-string v2, "manifest\u4e2d\u6ca1\u6709\u914d\u7f6e\u6743\u9650"

    invoke-interface {v0, p1, v2}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onDeny(ILjava/lang/String;)V

    .line 98
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

    .line 102
    return v3

    .line 104
    :cond_1
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 105
    .local v0, "temLists":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 106
    .local v2, "in48Lists":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->set:Ljava/util/Set;

    invoke-interface {v4}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_3

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    .line 107
    .local v5, "s":Ljava/lang/String;
    iget-object v6, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->activity:Landroid/app/Activity;

    invoke-static {v5, v6}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->check(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v6

    if-nez v6, :cond_2

    .line 108
    invoke-interface {v0, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 110
    .end local v5    # "s":Ljava/lang/String;
    :cond_2
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

    .line 113
    return v3

    .line 115
    :cond_4
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    iput-object v4, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->lists:Ljava/util/List;

    .line 116
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :goto_1
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_7

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    .line 117
    .local v5, "per":Ljava/lang/String;
    iget-object v6, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->manifestPermission:Ljava/util/List;

    invoke-interface {v6, v5}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_6

    .line 118
    invoke-direct {p0, v5}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->check48Hours(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_5

    .line 119
    iget-object v6, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->lists:Ljava/util/List;

    invoke-interface {v6, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 121
    :cond_5
    invoke-interface {v2, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 124
    :cond_6
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "-->\u5f53\u524d\u6743\u9650\u4e0d\u5728manifest\u4e2d"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;)I

    .line 126
    .end local v5    # "per":Ljava/lang/String;
    :goto_2
    goto :goto_1

    .line 127
    :cond_7
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->lists:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-lez v4, :cond_9

    .line 128
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_8

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    if-eqz v3, :cond_8

    .line 129
    invoke-interface {v2}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v4

    invoke-static {v4}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v3, p1, v4}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onDenyIn48Hours(ILjava/lang/String;)V

    .line 131
    :cond_8
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->activity:Landroid/app/Activity;

    new-instance v4, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$1;

    invoke-direct {v4, p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$1;-><init>(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;I)V

    invoke-virtual {v3, v4}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 137
    return v1

    .line 139
    :cond_9
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_a

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    if-eqz v1, :cond_a

    .line 140
    invoke-interface {v2}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v4

    invoke-static {v4}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v1, p1, v4}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;->onDenyIn48Hours(ILjava/lang/String;)V

    .line 142
    :cond_a
    return v3
.end method

.method public setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .locals 0
    .param p1, "callback"    # Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    .line 33
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->callback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    .line 34
    return-object p0
.end method

.method public setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissionResultCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .locals 0
    .param p1, "callback"    # Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissionResultCallback;

    .line 38
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->resultCallback:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissionResultCallback;

    .line 39
    return-object p0
.end method

.method public setPermissions(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .locals 1
    .param p1, "s"    # Ljava/lang/String;

    .line 77
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->set:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 78
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
    .local p1, "s":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->set:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->addAll(Ljava/util/Collection;)Z

    .line 88
    return-object p0
.end method

.method public setPermissions([Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
    .locals 2
    .param p1, "s"    # [Ljava/lang/String;

    .line 82
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->set:Ljava/util/Set;

    invoke-static {p1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->addAll(Ljava/util/Collection;)Z

    .line 83
    return-object p0
.end method
