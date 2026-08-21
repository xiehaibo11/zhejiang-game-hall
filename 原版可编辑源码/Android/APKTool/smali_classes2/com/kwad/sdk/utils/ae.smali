.class public final Lcom/kwad/sdk/utils/ae;
.super Ljava/lang/Object;


# static fields
.field private static aIN:Ljava/lang/String;

.field private static aIO:Z


# direct methods
.method public static ch(Landroid/content/Context;)Ljava/lang/String;
    .locals 8

    sget-object v0, Lcom/kwad/sdk/utils/ae;->aIN:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    sget-boolean v0, Lcom/kwad/sdk/utils/ae;->aIO:Z

    if-nez v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/utils/as;->IT()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    const-string v1, "content://com.xiaomi.market.provider.DirectMailProvider"

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-virtual/range {v2 .. v7}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ae;->k(Landroid/database/Cursor;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/kwad/sdk/utils/ae;->aIN:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    sget-object p0, Lcom/kwad/sdk/utils/ae;->aIN:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    sput-boolean p0, Lcom/kwad/sdk/utils/ae;->aIO:Z

    sget-object p0, Lcom/kwad/sdk/utils/ae;->aIN:Ljava/lang/String;

    return-object p0

    :cond_1
    :goto_0
    sget-object p0, Lcom/kwad/sdk/utils/ae;->aIN:Ljava/lang/String;

    return-object p0
.end method

.method private static k(Landroid/database/Cursor;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    if-eqz p0, :cond_3

    invoke-interface {p0}, Landroid/database/Cursor;->isClosed()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-interface {p0}, Landroid/database/Cursor;->moveToFirst()Z

    const-string v1, "support"

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    if-lez v1, :cond_1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1

    if-nez v1, :cond_1

    return-object v0

    :cond_1
    const-string v1, "detailStyle"

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    if-lez v1, :cond_2

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    :cond_2
    return-object v0

    :cond_3
    :goto_0
    const-string p0, "MiMarketHelper"

    const-string v1, "cursor is null"

    invoke-static {p0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method
