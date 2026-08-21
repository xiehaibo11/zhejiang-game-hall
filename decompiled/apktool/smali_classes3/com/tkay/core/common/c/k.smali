.class public Lcom/tkay/core/common/c/k;
.super Lcom/tkay/core/common/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/c/k$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/c/a<",
        "Lcom/tkay/core/common/a/h;",
        ">;"
    }
.end annotation


# static fields
.field private static volatile c:Lcom/tkay/core/common/c/k;


# instance fields
.field private final b:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/tkay/core/common/c/b;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/a;-><init>(Lcom/tkay/core/common/c/b;)V

    .line 21
    const-class p1, Lcom/tkay/core/common/c/k;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/c/k;->b:Ljava/lang/String;

    return-void
.end method

.method public static a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/k;
    .locals 2

    .line 30
    sget-object v0, Lcom/tkay/core/common/c/k;->c:Lcom/tkay/core/common/c/k;

    if-nez v0, :cond_1

    .line 31
    const-class v0, Lcom/tkay/core/common/c/k;

    monitor-enter v0

    .line 32
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/c/k;->c:Lcom/tkay/core/common/c/k;

    if-nez v1, :cond_0

    .line 33
    new-instance v1, Lcom/tkay/core/common/c/k;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/c/k;-><init>(Lcom/tkay/core/common/c/b;)V

    sput-object v1, Lcom/tkay/core/common/c/k;->c:Lcom/tkay/core/common/c/k;

    .line 35
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 37
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/c/k;->c:Lcom/tkay/core/common/c/k;

    return-object p0
.end method

.method private declared-synchronized b(Lcom/tkay/core/common/a/h;)Z
    .locals 13

    monitor-enter p0

    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 121
    monitor-exit p0

    return v0

    :cond_0
    const/4 v1, 0x0

    .line 125
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->c()I

    move-result v2

    const/16 v3, 0x43

    const/4 v4, 0x1

    if-ne v2, v3, :cond_1

    .line 126
    invoke-virtual {p0}, Lcom/tkay/core/common/c/k;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v5

    const-string v6, "offer_data_cache"

    const-string v2, "offer_data"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v7

    const-string v8, "adsource_id=?"

    new-array v9, v4, [Ljava/lang/String;

    .line 129
    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->b()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v9, v0

    const/4 v10, 0x0

    const/4 v11, 0x0

    const/4 v12, 0x0

    .line 126
    invoke-virtual/range {v5 .. v12}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    goto :goto_0

    .line 132
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/core/common/c/k;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v5

    const-string v6, "offer_data_cache"

    const-string v2, "offer_data"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v7

    const-string v8, "bid_id=?"

    new-array v9, v4, [Ljava/lang/String;

    .line 135
    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->a()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v9, v0

    const/4 v10, 0x0

    const/4 v11, 0x0

    const/4 v12, 0x0

    .line 132
    invoke-virtual/range {v5 .. v12}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    :goto_0
    move-object v1, p1

    if-eqz v1, :cond_3

    .line 138
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_3

    .line 139
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_2

    .line 145
    :try_start_1
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 140
    :cond_2
    monitor-exit p0

    return v4

    :cond_3
    if-eqz v1, :cond_4

    goto :goto_1

    :catchall_0
    if-eqz v1, :cond_4

    .line 145
    :goto_1
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1

    .line 148
    :cond_4
    :goto_2
    monitor-exit p0

    return v0
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/tkay/core/common/a/h;)J
    .locals 8

    monitor-enter p0

    .line 58
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/k;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 v1, -0x1

    if-nez v0, :cond_0

    .line 59
    monitor-exit p0

    return-wide v1

    .line 62
    :cond_0
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "bid_id"

    .line 63
    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "adsource_id"

    .line 64
    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "network_firm_id"

    .line 65
    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "offer_data"

    .line 66
    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->d()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 68
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/k;->b(Lcom/tkay/core/common/a/h;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 69
    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->c()I

    move-result v3

    const/16 v4, 0x43

    const/4 v5, 0x0

    const/4 v6, 0x1

    if-ne v3, v4, :cond_1

    .line 70
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "OfferDataCache update(Directly) new BidId:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ",old adSourceId:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "adsource_id = ? "

    .line 72
    invoke-virtual {p0}, Lcom/tkay/core/common/c/k;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v4

    const-string v7, "offer_data_cache"

    new-array v6, v6, [Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->b()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v6, v5

    invoke-virtual {v4, v7, v0, v3, v6}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    int-to-long v0, p1

    monitor-exit p0

    return-wide v0

    .line 74
    :cond_1
    :try_start_2
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "OfferDataCache update(Adx) BidId:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "bid_id = ? "

    .line 76
    invoke-virtual {p0}, Lcom/tkay/core/common/c/k;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v4

    const-string v7, "offer_data_cache"

    new-array v6, v6, [Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->a()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v6, v5

    invoke-virtual {v4, v7, v0, v3, v6}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    int-to-long v0, p1

    monitor-exit p0

    return-wide v0

    .line 80
    :cond_2
    :try_start_3
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "OfferDataCache insert BidId:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ",adSourceId:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/a/h;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 81
    invoke-virtual {p0}, Lcom/tkay/core/common/c/k;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v3, "offer_data_cache"

    const/4 v4, 0x0

    invoke-virtual {p1, v3, v4, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v0
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit p0

    return-wide v0

    .line 88
    :catch_0
    monitor-exit p0

    return-wide v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/lang/String;)V
    .locals 5

    monitor-enter p0

    :try_start_0
    const-string v0, "bid_id = ? "

    .line 44
    invoke-virtual {p0}, Lcom/tkay/core/common/c/k;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "offer_data_cache"

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    aput-object p1, v3, v4

    invoke-virtual {v1, v2, v0, v3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 52
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    const-string v0, "Error_SQL_DELETE"

    .line 48
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, p1, v1}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 54
    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b(Ljava/lang/String;)Ljava/lang/String;
    .locals 9

    monitor-enter p0

    .line 95
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/k;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "offer_data_cache"

    const-string v2, "offer_data"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2

    const-string v3, "bid_id=?"

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/String;

    const/4 v8, 0x0

    aput-object p1, v4, v8

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-virtual/range {v0 .. v7}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_1

    .line 101
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v0

    if-lez v0, :cond_1

    .line 102
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    .line 103
    invoke-interface {p1, v8}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 104
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p1, :cond_0

    .line 112
    :try_start_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 106
    :cond_0
    monitor-exit p0

    return-object v0

    :cond_1
    if-eqz p1, :cond_2

    .line 112
    :goto_0
    :try_start_3
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    goto :goto_1

    :catchall_0
    const/4 p1, 0x0

    :catchall_1
    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    :goto_1
    const-string p1, ""
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 116
    monitor-exit p0

    return-object p1

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method
