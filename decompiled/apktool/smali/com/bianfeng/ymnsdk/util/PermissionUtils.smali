.class public Lcom/bianfeng/ymnsdk/util/PermissionUtils;
.super Ljava/lang/Object;
.source "PermissionUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;
    }
.end annotation

.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field private static utils:Lcom/bianfeng/ymnsdk/util/PermissionUtils;


# instance fields
.field private callback:Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

.field private isFirst:Z

.field private permissionUtils:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

.field private permissions:[Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 31
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->isFirst:Z

    .line 32
    const-string v0, "android.permission.WRITE_EXTERNAL_STORAGE"

    const-string v1, "android.permission.READ_EXTERNAL_STORAGE"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissions:[Ljava/lang/String;

    .line 14
    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    .line 11
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->callback:Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    return-object v0
.end method

.method static synthetic access$100(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Z
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    .line 11
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->isFirst:Z

    return v0
.end method

.method static synthetic access$102(Lcom/bianfeng/ymnsdk/util/PermissionUtils;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/util/PermissionUtils;
    .param p1, "x1"    # Z

    .line 11
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->isFirst:Z

    return p1
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/util/PermissionUtils;
    .locals 2

    .line 18
    sget-object v0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->utils:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    if-nez v0, :cond_1

    .line 19
    const-class v0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    monitor-enter v0

    .line 20
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->utils:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    if-nez v1, :cond_0

    .line 21
    new-instance v1, Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->utils:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    .line 23
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 25
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->utils:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    return-object v0
.end method


# virtual methods
.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 2
    .param p1, "requestCode"    # I
    .param p2, "permissions"    # [Ljava/lang/String;
    .param p3, "grantResults"    # [I

    .line 98
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->callback:Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    if-eqz v0, :cond_0

    iget-boolean v1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->isFirst:Z

    if-nez v1, :cond_0

    .line 99
    const/16 v1, 0x400

    if-ne p1, v1, :cond_0

    .line 100
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->isFirst:Z

    .line 101
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;->onCall()V

    .line 104
    :cond_0
    return-void
.end method

.method public requestPermission(Landroid/app/Activity;)Z
    .locals 2
    .param p1, "activity"    # Landroid/app/Activity;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 36
    const-string v0, "ymnsdk: "

    const-string v1, "\u521d\u59cb\u5316 requestPermission"

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 37
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissions:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions([Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;-><init>(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissionUtils:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    .line 78
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissionUtils:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    const/16 v1, 0x400

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z

    move-result v0

    return v0
.end method

.method public requestPermission(Landroid/app/Activity;Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z
    .locals 2
    .param p1, "activity"    # Landroid/app/Activity;
    .param p2, "callback"    # Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;

    .line 82
    const-string v0, "ymnsdk: "

    const-string v1, "\u521d\u59cb\u5316 requestPermission"

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 83
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissions:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions([Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissionUtils:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    .line 84
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissionUtils:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    const/16 v1, 0x400

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z

    move-result v0

    return v0
.end method

.method public setCallback(Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;)Lcom/bianfeng/ymnsdk/util/PermissionUtils;
    .locals 0
    .param p1, "callback"    # Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    .line 88
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->callback:Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    .line 89
    return-object p0
.end method
