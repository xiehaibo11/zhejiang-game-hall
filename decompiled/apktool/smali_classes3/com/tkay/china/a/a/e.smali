.class public final Lcom/tkay/china/a/a/e;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    iput-object p1, p0, Lcom/tkay/china/a/a/e;->a:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/china/a/a;)V
    .locals 8

    const/4 v0, 0x0

    .line 27
    :try_start_0
    iget-object v1, p0, Lcom/tkay/china/a/a/e;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    const-string v2, "com.meizu.flyme.openidsdk"

    invoke-virtual {v1, v2, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 29
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    const-string v1, "content://com.meizu.flyme.openidsdk/"

    .line 32
    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    .line 33
    iget-object v1, p0, Lcom/tkay/china/a/a/e;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const/4 v1, 0x0

    .line 37
    :try_start_1
    move-object v4, v1

    check-cast v4, [Ljava/lang/String;

    move-object v5, v1

    check-cast v5, Ljava/lang/String;

    const-string v6, "oaid"

    filled-new-array {v6}, [Ljava/lang/String;

    move-result-object v6

    move-object v7, v1

    check-cast v7, Ljava/lang/String;

    invoke-virtual/range {v2 .. v7}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v2

    if-nez v2, :cond_0

    goto :goto_1

    .line 42
    :cond_0
    invoke-interface {v2}, Landroid/database/Cursor;->isClosed()Z

    move-result v3

    if-eqz v3, :cond_1

    goto :goto_1

    .line 45
    :cond_1
    invoke-interface {v2}, Landroid/database/Cursor;->moveToFirst()Z

    const-string v3, "value"

    .line 46
    invoke-interface {v2, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    if-lez v3, :cond_2

    .line 48
    invoke-interface {v2, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 55
    :cond_2
    :goto_1
    invoke-interface {p1, v1, v0}, Lcom/tkay/china/a/a;->a(Ljava/lang/String;Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v2, :cond_3

    .line 60
    :try_start_2
    invoke-interface {v2}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception v0

    .line 65
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 68
    :catch_0
    :cond_3
    :goto_2
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 70
    invoke-interface {p1}, Lcom/tkay/china/a/a;->a()V

    :cond_4
    return-void
.end method
