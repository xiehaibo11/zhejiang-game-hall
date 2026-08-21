.class public final Lcom/tkay/core/common/b/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/b/c$c;,
        Lcom/tkay/core/common/b/c$b;,
        Lcom/tkay/core/common/b/c$a;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;)Lcom/tkay/core/common/b/c$a;
    .locals 4

    .line 48
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-eq v0, v1, :cond_1

    .line 53
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const-string v1, "com.android.vending"

    const/4 v2, 0x0

    .line 54
    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 59
    new-instance v0, Lcom/tkay/core/common/b/c$b;

    invoke-direct {v0, p0, v2}, Lcom/tkay/core/common/b/c$b;-><init>(Lcom/tkay/core/common/b/c;B)V

    .line 60
    new-instance v1, Landroid/content/Intent;

    const-string v3, "com.google.android.gms.ads.identifier.service.START"

    invoke-direct {v1, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v3, "com.google.android.gms"

    .line 61
    invoke-virtual {v1, v3}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 62
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v3

    invoke-virtual {v3, v1, v2}, Landroid/content/pm/PackageManager;->queryIntentServices(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 63
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_0

    const/4 v2, 0x1

    .line 64
    invoke-virtual {p1, v1, v0, v2}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 66
    :try_start_1
    new-instance v1, Lcom/tkay/core/common/b/c$c;

    invoke-virtual {v0}, Lcom/tkay/core/common/b/c$b;->a()Landroid/os/IBinder;

    move-result-object v2

    invoke-direct {v1, p0, v2}, Lcom/tkay/core/common/b/c$c;-><init>(Lcom/tkay/core/common/b/c;Landroid/os/IBinder;)V

    .line 67
    new-instance v2, Lcom/tkay/core/common/b/c$a;

    invoke-virtual {v1}, Lcom/tkay/core/common/b/c$c;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1}, Lcom/tkay/core/common/b/c$c;->b()Z

    move-result v1

    invoke-direct {v2, p0, v3, v1}, Lcom/tkay/core/common/b/c$a;-><init>(Lcom/tkay/core/common/b/c;Ljava/lang/String;Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 73
    :try_start_2
    invoke-virtual {p1, v0}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    return-object v2

    :catchall_1
    move-exception v1

    .line 70
    :try_start_3
    throw v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :catchall_2
    move-exception v1

    .line 73
    :try_start_4
    invoke-virtual {p1, v0}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    .line 78
    :catchall_3
    throw v1

    .line 81
    :cond_0
    new-instance p1, Ljava/io/IOException;

    const-string v0, "Google Play connection failed"

    invoke-direct {p1, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1

    :catch_0
    move-exception p1

    .line 56
    throw p1

    .line 49
    :cond_1
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "Cannot be called from the main thread"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method
