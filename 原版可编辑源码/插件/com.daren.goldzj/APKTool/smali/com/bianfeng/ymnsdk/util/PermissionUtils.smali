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

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 19
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->isFirst:Z

    const-string v0, "android.permission.WRITE_EXTERNAL_STORAGE"

    const-string v1, "android.permission.READ_EXTERNAL_STORAGE"

    .line 20
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissions:[Ljava/lang/String;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->callback:Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)Z
    .locals 0

    .line 1
    iget-boolean p0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->isFirst:Z

    return p0
.end method

.method static synthetic access$102(Lcom/bianfeng/ymnsdk/util/PermissionUtils;Z)Z
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->isFirst:Z

    return p1
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/util/PermissionUtils;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->utils:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->utils:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/util/PermissionUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->utils:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    .line 6
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 8
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->utils:Lcom/bianfeng/ymnsdk/util/PermissionUtils;

    return-object v0
.end method


# virtual methods
.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 0

    .line 1
    iget-object p2, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->callback:Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    if-eqz p2, :cond_0

    iget-boolean p3, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->isFirst:Z

    if-nez p3, :cond_0

    const/16 p3, 0x400

    if-ne p1, p3, :cond_0

    const/4 p1, 0x1

    .line 3
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->isFirst:Z

    .line 4
    invoke-interface {p2}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;->onCall()V

    :cond_0
    return-void
.end method

.method public requestPermission(Landroid/app/Activity;)Z
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const-string v0, "ymnsdk: "

    const-string v1, "\u521d\u59cb\u5316 requestPermission"

    .line 1
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 2
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissions:[Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions([Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    new-instance v0, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/util/PermissionUtils$1;-><init>(Lcom/bianfeng/ymnsdk/util/PermissionUtils;)V

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissionUtils:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    .line 43
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissionUtils:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    const/16 v0, 0x400

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z

    move-result p1

    return p1
.end method

.method public requestPermission(Landroid/app/Activity;Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z
    .locals 2

    const-string v0, "ymnsdk: "

    const-string v1, "\u521d\u59cb\u5316 requestPermission"

    .line 44
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 45
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    iget-object p2, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissions:[Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions([Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissionUtils:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    .line 46
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->permissionUtils:Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    const/16 p2, 0x400

    invoke-virtual {p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z

    move-result p1

    return p1
.end method

.method public setCallback(Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;)Lcom/bianfeng/ymnsdk/util/PermissionUtils;
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/util/PermissionUtils;->callback:Lcom/bianfeng/ymnsdk/util/PermissionUtils$PermissionCallback;

    return-object p0
.end method
