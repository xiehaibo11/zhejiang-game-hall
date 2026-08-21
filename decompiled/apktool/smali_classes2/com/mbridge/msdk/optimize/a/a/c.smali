.class public final Lcom/mbridge/msdk/optimize/a/a/c;
.super Ljava/lang/Object;
.source "MeizuDeviceHelper.java"


# instance fields
.field private a:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/c;->a:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/optimize/a/b;)V
    .locals 8

    const/4 v0, 0x0

    .line 41
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/c;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    const-string v2, "com.meizu.flyme.openidsdk"

    invoke-virtual {v1, v2, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 43
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    const-string v1, "content://com.meizu.flyme.openidsdk/"

    .line 45
    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    .line 48
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/c;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const/4 v4, 0x0

    const/4 v5, 0x0

    :try_start_1
    const-string v1, "oaid"

    .line 50
    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x0

    invoke-virtual/range {v2 .. v7}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    goto :goto_1

    .line 1071
    :cond_0
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v3

    if-eqz v3, :cond_1

    goto :goto_1

    .line 1074
    :cond_1
    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    const-string v3, "value"

    .line 1075
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    if-lez v3, :cond_2

    .line 1077
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    :cond_2
    const-string v3, "code"

    .line 1079
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    if-lez v3, :cond_3

    .line 1081
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getInt(I)I

    :cond_3
    const-string v3, "expired"

    .line 1083
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    if-lez v3, :cond_4

    .line 1085
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getLong(I)J

    :cond_4
    :goto_1
    if-eqz p1, :cond_5

    .line 54
    invoke-interface {p1, v2, v0}, Lcom/mbridge/msdk/optimize/a/b;->a(Ljava/lang/String;Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_5
    if-eqz v1, :cond_6

    .line 58
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 62
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :catch_1
    :cond_6
    :goto_2
    return-void
.end method
