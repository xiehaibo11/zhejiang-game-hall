.class public Lcom/bianfeng/ymnsdk/sysfunc/helpers/MeizuDeviceIDHelper;
.super Ljava/lang/Object;
.source "MeizuDeviceIDHelper.java"


# instance fields
.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 19
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/MeizuDeviceIDHelper;->mContext:Landroid/content/Context;

    return-void
.end method

.method private getOaid(Landroid/database/Cursor;)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 64
    :cond_0
    invoke-interface {p1}, Landroid/database/Cursor;->isClosed()Z

    move-result v1

    if-eqz v1, :cond_1

    return-object v0

    .line 67
    :cond_1
    invoke-interface {p1}, Landroid/database/Cursor;->moveToFirst()Z

    const-string v1, "value"

    .line 68
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    if-lez v1, :cond_2

    .line 70
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    :cond_2
    const-string v1, "code"

    .line 72
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    if-lez v1, :cond_3

    .line 74
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getInt(I)I

    :cond_3
    const-string v1, "expired"

    .line 76
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    if-lez v1, :cond_4

    .line 78
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getLong(I)J

    :cond_4
    return-object v0
.end method


# virtual methods
.method public getMeizuID(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    .locals 7

    .line 25
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/MeizuDeviceIDHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const-string v1, "com.meizu.flyme.openidsdk"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    const-string v1, "Wooo"

    const-string v2, "intentForID getMEIZID service not found;"

    .line 28
    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 29
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    const-string v0, "content://com.meizu.flyme.openidsdk/"

    .line 31
    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    .line 34
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/MeizuDeviceIDHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    const/4 v3, 0x0

    const/4 v4, 0x0

    :try_start_1
    const-string v0, "oaid"

    .line 36
    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    invoke-virtual/range {v1 .. v6}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    .line 37
    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/MeizuDeviceIDHelper;->getOaid(Landroid/database/Cursor;)Ljava/lang/String;

    move-result-object v1

    if-eqz p1, :cond_0

    .line 40
    invoke-interface {p1, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    .line 42
    :cond_0
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    if-eqz p1, :cond_1

    const-string v1, ""

    .line 46
    invoke-interface {p1, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    .line 49
    :cond_1
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    return-void
.end method
