.class public Lcom/reyun/tracking/b/a/e;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/reyun/tracking/b/a/e;->a:Landroid/content/Context;

    return-void
.end method

.method private a(Landroid/database/Cursor;)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    invoke-interface {p1}, Landroid/database/Cursor;->isClosed()Z

    move-result v1

    if-eqz v1, :cond_1

    return-object v0

    :cond_1
    invoke-interface {p1}, Landroid/database/Cursor;->moveToFirst()Z

    const-string v1, "value"

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    if-lez v1, :cond_2

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    :cond_2
    const-string v1, "code"

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    if-lez v1, :cond_3

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getInt(I)I

    :cond_3
    const-string v1, "expired"

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    if-lez v1, :cond_4

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getLong(I)J

    :cond_4
    return-object v0
.end method


# virtual methods
.method public a(Lcom/reyun/tracking/b/d;)V
    .locals 8

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/reyun/tracking/b/a/e;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    const-string v2, "com.meizu.flyme.openidsdk"

    invoke-virtual {v1, v2, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    const-string v1, "content://com.meizu.flyme.openidsdk/"

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    iget-object v1, p0, Lcom/reyun/tracking/b/a/e;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const/4 v4, 0x0

    const/4 v5, 0x0

    :try_start_1
    const-string v1, "oaid"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x0

    invoke-virtual/range {v2 .. v7}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/reyun/tracking/b/a/e;->a(Landroid/database/Cursor;)Ljava/lang/String;

    move-result-object v2

    if-eqz p1, :cond_0

    invoke-interface {p1, v2, v0}, Lcom/reyun/tracking/b/d;->a(Ljava/lang/String;Z)V

    :cond_0
    if-eqz v1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method
