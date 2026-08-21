.class public Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;
.super Ljava/lang/Object;
.source "OppoDeviceIDHelper.java"


# instance fields
.field private mContext:Landroid/content/Context;

.field public oaid:Ljava/lang/String;

.field oppoIDInterface:Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface;

.field serviceConnection:Landroid/content/ServiceConnection;

.field private sign:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "OUID"

    .line 26
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->oaid:Ljava/lang/String;

    .line 109
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper$1;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    .line 31
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->mContext:Landroid/content/Context;

    return-void
.end method

.method private isSupportOppo()Z
    .locals 6

    .line 125
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const-string v1, "com.heytap.openid"

    const/4 v2, 0x0

    .line 128
    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v0

    if-nez v0, :cond_0

    return v2

    .line 133
    :cond_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1c

    if-lt v1, v3, :cond_1

    .line 134
    invoke-virtual {v0}, Landroid/content/pm/PackageInfo;->getLongVersionCode()J

    move-result-wide v0

    goto :goto_0

    .line 137
    :cond_1
    iget v0, v0, Landroid/content/pm/PackageInfo;->versionCode:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    int-to-long v0, v0

    :goto_0
    const-wide/16 v3, 0x1

    cmp-long v5, v0, v3

    if-gez v5, :cond_2

    return v2

    :catch_0
    move-exception v0

    .line 144
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    const/4 v0, 0x1

    return v0
.end method

.method private realoGetIds(Ljava/lang/String;)Ljava/lang/String;
    .locals 9

    .line 74
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    .line 75
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->sign:Ljava/lang/String;

    if-nez v1, :cond_2

    const/4 v1, 0x0

    .line 78
    :try_start_0
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->mContext:Landroid/content/Context;

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

    .line 81
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    move-object v2, v1

    :goto_0
    if-eqz v2, :cond_1

    .line 85
    array-length v3, v2

    if-lez v3, :cond_1

    const/4 v3, 0x0

    .line 86
    aget-object v2, v2, v3

    invoke-virtual {v2}, Landroid/content/pm/Signature;->toByteArray()[B

    move-result-object v2

    :try_start_1
    const-string v4, "SHA1"

    .line 88
    invoke-static {v4}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 90
    invoke-virtual {v4, v2}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object v2

    .line 91
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    .line 92
    array-length v5, v2

    :goto_1
    if-ge v3, v5, :cond_0

    aget-byte v6, v2, v3

    and-int/lit16 v6, v6, 0xff

    or-int/lit16 v6, v6, 0x100

    .line 93
    invoke-static {v6}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x3

    const/4 v8, 0x1

    invoke-virtual {v6, v8, v7}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 95
    :cond_0
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    :catch_1
    move-exception v2

    .line 99
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 102
    :cond_1
    :goto_2
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->sign:Ljava/lang/String;

    .line 105
    :cond_2
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->oppoIDInterface:Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface;

    check-cast v1, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface$up$down;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->sign:Ljava/lang/String;

    invoke-virtual {v1, v0, v2, p1}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface$up$down;->getSerID(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public getID(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)Ljava/lang/String;
    .locals 4

    .line 39
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-eq v0, v1, :cond_4

    .line 43
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 44
    new-instance v1, Landroid/content/ComponentName;

    const-string v2, "com.heytap.openid"

    const-string v3, "com.heytap.openid.IdentifyService"

    invoke-direct {v1, v2, v3}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    const-string v1, "android.intent.action.OPEN_ID"

    .line 45
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 47
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v2, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_1

    .line 48
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->oppoIDInterface:Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface;

    if-eqz v0, :cond_0

    const-string v0, "OUID"

    .line 49
    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->realoGetIds(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "DUID"

    .line 50
    invoke-direct {p0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->realoGetIds(Ljava/lang/String;)Ljava/lang/String;

    const-string v1, "AUID"

    .line 51
    invoke-direct {p0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->realoGetIds(Ljava/lang/String;)Ljava/lang/String;

    if-eqz p1, :cond_3

    .line 55
    invoke-interface {p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    goto :goto_1

    :cond_0
    if-eqz p1, :cond_2

    .line 59
    invoke-interface {p1, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    if-eqz p1, :cond_2

    .line 64
    invoke-interface {p1, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_2
    :goto_0
    const/4 v0, 0x0

    :cond_3
    :goto_1
    return-object v0

    .line 40
    :cond_4
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "Cannot run on MainThread"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method
