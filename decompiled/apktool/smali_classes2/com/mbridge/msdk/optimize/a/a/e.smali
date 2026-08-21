.class public final Lcom/mbridge/msdk/optimize/a/a/e;
.super Ljava/lang/Object;
.source "OnePlusDeviceHelper.java"


# instance fields
.field public a:Ljava/lang/String;

.field b:Lcom/mbridge/msdk/optimize/a/b/c;

.field c:Landroid/content/ServiceConnection;

.field private d:Landroid/content/Context;

.field private e:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "OUID"

    .line 26
    iput-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/e;->a:Ljava/lang/String;

    .line 106
    new-instance v0, Lcom/mbridge/msdk/optimize/a/a/e$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/optimize/a/a/e$1;-><init>(Lcom/mbridge/msdk/optimize/a/a/e;)V

    iput-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/e;->c:Landroid/content/ServiceConnection;

    .line 31
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/e;->d:Landroid/content/Context;

    return-void
.end method

.method private a(Ljava/lang/String;)Ljava/lang/String;
    .locals 9

    .line 71
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/e;->d:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    .line 72
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/e;->e:Ljava/lang/String;

    if-nez v1, :cond_2

    const/4 v1, 0x0

    .line 75
    :try_start_0
    iget-object v2, p0, Lcom/mbridge/msdk/optimize/a/a/e;->d:Landroid/content/Context;

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

    .line 78
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    move-object v2, v1

    :goto_0
    if-eqz v2, :cond_1

    .line 82
    array-length v3, v2

    if-lez v3, :cond_1

    const/4 v3, 0x0

    .line 83
    aget-object v2, v2, v3

    invoke-virtual {v2}, Landroid/content/pm/Signature;->toByteArray()[B

    move-result-object v2

    :try_start_1
    const-string v4, "SHA1"

    .line 85
    invoke-static {v4}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 87
    invoke-virtual {v4, v2}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object v2

    .line 88
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    .line 89
    array-length v5, v2

    :goto_1
    if-ge v3, v5, :cond_0

    aget-byte v6, v2, v3

    and-int/lit16 v6, v6, 0xff

    or-int/lit16 v6, v6, 0x100

    .line 90
    invoke-static {v6}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x3

    const/4 v8, 0x1

    invoke-virtual {v6, v8, v7}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 92
    :cond_0
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    :catch_1
    move-exception v2

    .line 96
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 99
    :cond_1
    :goto_2
    iput-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/e;->e:Ljava/lang/String;

    .line 102
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/e;->b:Lcom/mbridge/msdk/optimize/a/b/c;

    check-cast v1, Lcom/mbridge/msdk/optimize/a/b/c$a$a;

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/a/a/e;->e:Ljava/lang/String;

    invoke-virtual {v1, v0, v2, p1}, Lcom/mbridge/msdk/optimize/a/b/c$a$a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/optimize/a/b;)Ljava/lang/String;
    .locals 4

    .line 39
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-eq v0, v1, :cond_2

    .line 43
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 44
    new-instance v1, Landroid/content/ComponentName;

    const-string v2, "com.heytap.openid"

    const-string v3, "com.heytap.openid.IdentifyService"

    invoke-direct {v1, v2, v3}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    const-string v1, "action.com.heytap.openid.OPEN_ID_SERVICE"

    .line 45
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 47
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/e;->d:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/a/a/e;->c:Landroid/content/ServiceConnection;

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v2, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    if-eqz v0, :cond_0

    const-wide/16 v0, 0xbb8

    .line 49
    :try_start_0
    invoke-static {v0, v1}, Landroid/os/SystemClock;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 51
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 53
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/e;->b:Lcom/mbridge/msdk/optimize/a/b/c;

    if-eqz v0, :cond_0

    const-string v0, "OUID"

    .line 54
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/optimize/a/a/e;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "DUID"

    .line 55
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/optimize/a/a/e;->a(Ljava/lang/String;)Ljava/lang/String;

    const-string v1, "AUID"

    .line 56
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/optimize/a/a/e;->a(Ljava/lang/String;)Ljava/lang/String;

    if-eqz p1, :cond_1

    const/4 v1, 0x0

    .line 60
    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/optimize/a/b;->a(Ljava/lang/String;Z)V

    goto :goto_1

    :cond_0
    const/4 v0, 0x0

    :cond_1
    :goto_1
    return-object v0

    .line 40
    :cond_2
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "Cannot run on MainThread"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method
