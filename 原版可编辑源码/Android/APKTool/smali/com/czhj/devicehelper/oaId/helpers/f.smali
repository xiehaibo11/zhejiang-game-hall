.class public Lcom/czhj/devicehelper/oaId/helpers/f;
.super Ljava/lang/Object;


# instance fields
.field public a:Ljava/lang/String;

.field b:Lcom/czhj/devicehelper/oaId/interfaces/d;

.field public final c:Ljava/util/concurrent/LinkedBlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/LinkedBlockingQueue<",
            "Landroid/os/IBinder;",
            ">;"
        }
    .end annotation
.end field

.field d:Landroid/content/ServiceConnection;

.field private e:Landroid/content/Context;

.field private f:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "OUID"

    iput-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->a:Ljava/lang/String;

    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>(I)V

    iput-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->c:Ljava/util/concurrent/LinkedBlockingQueue;

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/f$1;

    invoke-direct {v0, p0}, Lcom/czhj/devicehelper/oaId/helpers/f$1;-><init>(Lcom/czhj/devicehelper/oaId/helpers/f;)V

    iput-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->d:Landroid/content/ServiceConnection;

    iput-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->e:Landroid/content/Context;

    return-void
.end method

.method private a(Ljava/lang/String;)Ljava/lang/String;
    .locals 9

    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->e:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->f:Ljava/lang/String;

    if-nez v1, :cond_2

    const/4 v1, 0x0

    :try_start_0
    iget-object v2, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->e:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    const/16 v3, 0x40

    invoke-virtual {v2, v0, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v2

    iget-object v2, v2, Landroid/content/pm/PackageInfo;->signatures:[Landroid/content/pm/Signature;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    move-object v2, v1

    :goto_0
    if-eqz v2, :cond_1

    array-length v3, v2

    if-lez v3, :cond_1

    const/4 v3, 0x0

    aget-object v2, v2, v3

    invoke-virtual {v2}, Landroid/content/pm/Signature;->toByteArray()[B

    move-result-object v2

    :try_start_1
    const-string v4, "SHA1"

    invoke-static {v4}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v4

    if-eqz v4, :cond_1

    invoke-virtual {v4, v2}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object v2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    array-length v5, v2

    :goto_1
    if-ge v3, v5, :cond_0

    aget-byte v6, v2, v3

    and-int/lit16 v6, v6, 0xff

    or-int/lit16 v6, v6, 0x100

    invoke-static {v6}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x3

    const/4 v8, 0x1

    invoke-virtual {v6, v8, v7}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_0
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v2

    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_1
    :goto_2
    iput-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->f:Ljava/lang/String;

    :cond_2
    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->b:Lcom/czhj/devicehelper/oaId/interfaces/d;

    check-cast v1, Lcom/czhj/devicehelper/oaId/interfaces/d$a$a;

    iget-object v2, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->f:Ljava/lang/String;

    invoke-virtual {v1, v0, v2, p1}, Lcom/czhj/devicehelper/oaId/interfaces/d$a$a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private a()Z
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->e:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    const-string v2, "com.heytap.openid"

    invoke-virtual {v1, v2, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v1

    if-nez v1, :cond_0

    return v0

    :cond_0
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1c

    if-lt v2, v3, :cond_1

    invoke-virtual {v1}, Landroid/content/pm/PackageInfo;->getLongVersionCode()J

    move-result-wide v1

    goto :goto_0

    :cond_1
    iget v1, v1, Landroid/content/pm/PackageInfo;->versionCode:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    int-to-long v1, v1

    :goto_0
    const-wide/16 v3, 0x1

    cmp-long v1, v1, v3

    if-gez v1, :cond_2

    return v0

    :cond_2
    const/4 v0, 0x1

    return v0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return v0
.end method


# virtual methods
.method public a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    .locals 4

    invoke-direct {p0}, Lcom/czhj/devicehelper/oaId/helpers/f;->a()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_1

    return-void

    :cond_1
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    new-instance v1, Landroid/content/ComponentName;

    const-string v2, "com.heytap.openid"

    const-string v3, "com.heytap.openid.IdentifyService"

    invoke-direct {v1, v2, v3}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    const-string v1, "action.com.heytap.openid.OPEN_ID_SERVICE"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->e:Landroid/content/Context;

    iget-object v2, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->d:Landroid/content/ServiceConnection;

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v2, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    if-eqz v0, :cond_3

    :try_start_0
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->c:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/IBinder;

    invoke-static {v0}, Lcom/czhj/devicehelper/oaId/interfaces/d$a;->a(Landroid/os/IBinder;)Lcom/czhj/devicehelper/oaId/interfaces/d;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->b:Lcom/czhj/devicehelper/oaId/interfaces/d;

    if-eqz v0, :cond_2

    const-string v0, "OUID"

    invoke-direct {p0, v0}, Lcom/czhj/devicehelper/oaId/helpers/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz p1, :cond_2

    invoke-interface {p1, v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->e:Landroid/content/Context;

    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->d:Landroid/content/ServiceConnection;

    invoke-virtual {p1, v0}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    goto :goto_1

    :catchall_1
    move-exception p1

    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->e:Landroid/content/Context;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/f;->d:Landroid/content/ServiceConnection;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    throw p1

    :cond_3
    :goto_1
    return-void
.end method
