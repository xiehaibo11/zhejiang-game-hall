.class public final Lcom/tkay/china/a/a/k;
.super Ljava/lang/Object;


# instance fields
.field a:Ljava/lang/String;

.field private b:Landroid/content/Context;

.field private c:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 16
    iput-boolean v0, p0, Lcom/tkay/china/a/a/k;->c:Z

    const/4 v0, 0x0

    .line 17
    iput-object v0, p0, Lcom/tkay/china/a/a/k;->a:Ljava/lang/String;

    .line 20
    iput-object p1, p0, Lcom/tkay/china/a/a/k;->b:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 8

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "content://com.vivo.vms.IdProvider/IdentifierId/OAID"

    .line 27
    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    .line 28
    iget-object v1, p0, Lcom/tkay/china/a/a/k;->b:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    move-object v4, v0

    check-cast v4, [Ljava/lang/String;

    move-object v5, v0

    check-cast v5, Ljava/lang/String;

    move-object v6, v0

    check-cast v6, [Ljava/lang/String;

    move-object v7, v0

    check-cast v7, Ljava/lang/String;

    invoke-virtual/range {v2 .. v7}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 30
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, "value"

    .line 31
    invoke-interface {v1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 34
    :cond_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 39
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    :catch_0
    move-exception v1

    .line 37
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-object v0
.end method
