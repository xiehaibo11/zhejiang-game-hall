.class public Lcom/tkay/core/common/c/m;
.super Lcom/tkay/core/common/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/c/m$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/c/a<",
        "Lcom/tkay/core/common/a/i;",
        ">;"
    }
.end annotation


# static fields
.field private static volatile c:Lcom/tkay/core/common/c/m;


# instance fields
.field private final b:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/tkay/core/common/c/b;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/a;-><init>(Lcom/tkay/core/common/c/b;)V

    .line 16
    const-class p1, Lcom/tkay/core/common/c/m;

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/c/m;->b:Ljava/lang/String;

    return-void
.end method

.method public static a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/m;
    .locals 2

    .line 25
    sget-object v0, Lcom/tkay/core/common/c/m;->c:Lcom/tkay/core/common/c/m;

    if-nez v0, :cond_1

    .line 26
    const-class v0, Lcom/tkay/core/common/c/k;

    monitor-enter v0

    .line 27
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/c/m;->c:Lcom/tkay/core/common/c/m;

    if-nez v1, :cond_0

    .line 28
    new-instance v1, Lcom/tkay/core/common/c/m;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/c/m;-><init>(Lcom/tkay/core/common/c/b;)V

    sput-object v1, Lcom/tkay/core/common/c/m;->c:Lcom/tkay/core/common/c/m;

    .line 30
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 32
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/c/m;->c:Lcom/tkay/core/common/c/m;

    return-object p0
.end method

.method private d(Ljava/lang/String;)V
    .locals 9

    const/4 v0, 0x0

    .line 177
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/m;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "video_res_cache_info"

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    .line 182
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "logDBCurItemNumber "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ":"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0}, Landroid/database/Cursor;->getCount()I

    move-result p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 187
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    return-void

    :catchall_0
    move-exception p1

    .line 184
    :try_start_1
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "logDBCurItemNumber fail:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v0, :cond_0

    .line 187
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_0
    return-void

    :catchall_1
    move-exception p1

    if-eqz v0, :cond_1

    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    .line 189
    :cond_1
    throw p1
.end method

.method private e(Ljava/lang/String;)Z
    .locals 11

    .line 206
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    .line 211
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/m;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "video_res_cache_info"

    const-string v4, "video_url"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "video_url=?"

    const/4 v10, 0x1

    new-array v6, v10, [Ljava/lang/String;

    aput-object p1, v6, v1

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 216
    invoke-interface {v0}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_2

    .line 217
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_1

    .line 223
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_1
    return v10

    :cond_2
    if-eqz v0, :cond_3

    goto :goto_0

    :catchall_0
    if-eqz v0, :cond_3

    :goto_0
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_3
    return v1
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Lcom/tkay/core/common/a/i;
    .locals 9

    const/4 v0, 0x0

    .line 65
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/m;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "video_res_cache_info"

    const/4 v3, 0x0

    const-string v4, "video_url=?"

    const/4 v5, 0x1

    new-array v5, v5, [Ljava/lang/String;

    const/4 v6, 0x0

    aput-object p1, v5, v6

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 70
    :try_start_1
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 71
    new-instance v2, Lcom/tkay/core/common/a/i;

    invoke-direct {v2}, Lcom/tkay/core/common/a/i;-><init>()V

    .line 72
    invoke-virtual {v2, p1}, Lcom/tkay/core/common/a/i;->a(Ljava/lang/String;)V

    const-string p1, "file_path"

    .line 73
    invoke-interface {v1, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {v1, p1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Lcom/tkay/core/common/a/i;->b(Ljava/lang/String;)V

    const-string p1, "ready_rate"

    .line 74
    invoke-interface {v1, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {v1, p1}, Landroid/database/Cursor;->getInt(I)I

    move-result p1

    invoke-virtual {v2, p1}, Lcom/tkay/core/common/a/i;->a(I)V

    const-string p1, "download_size"

    .line 75
    invoke-interface {v1, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {v1, p1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Lcom/tkay/core/common/a/i;->b(J)V

    const-string p1, "total_size"

    .line 76
    invoke-interface {v1, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {v1, p1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Lcom/tkay/core/common/a/i;->a(J)V

    const-string p1, "update_time"

    .line 77
    invoke-interface {v1, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {v1, p1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Lcom/tkay/core/common/a/i;->c(J)V

    .line 78
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v1, :cond_0

    .line 84
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    :cond_0
    return-object v2

    :cond_1
    if-eqz v1, :cond_2

    goto :goto_0

    :catchall_0
    move-object v1, v0

    :catchall_1
    if-eqz v1, :cond_2

    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    :cond_2
    return-object v0
.end method

.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;JJI)V
    .locals 2

    monitor-enter p0

    .line 36
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v0, :cond_0

    goto :goto_0

    .line 40
    :cond_0
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v1, "video_url"

    .line 41
    invoke-virtual {v0, v1, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "file_path"

    .line 42
    invoke-virtual {v0, v1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "ready_rate"

    .line 43
    invoke-static {p7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p7

    invoke-virtual {v0, p2, p7}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p2, "download_size"

    .line 44
    invoke-static {p5, p6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p5

    invoke-virtual {v0, p2, p5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const-string p2, "total_size"

    .line 45
    invoke-static {p3, p4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const-string p2, "update_time"

    .line 46
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p3

    invoke-static {p3, p4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 48
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/m;->e(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_1

    const-string p2, "video_url = ? "

    .line 51
    invoke-virtual {p0}, Lcom/tkay/core/common/c/m;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p3

    const-string p4, "video_res_cache_info"

    const/4 p5, 0x1

    new-array p5, p5, [Ljava/lang/String;

    const/4 p6, 0x0

    aput-object p1, p5, p6

    invoke-virtual {p3, p4, v0, p2, p5}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 52
    monitor-exit p0

    return-void

    .line 54
    :cond_1
    :try_start_2
    invoke-virtual {p0}, Lcom/tkay/core/common/c/m;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string p2, "video_res_cache_info"

    const/4 p3, 0x0

    invoke-virtual {p1, p2, p3, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 58
    monitor-exit p0

    return-void

    .line 59
    :catchall_0
    monitor-exit p0

    return-void

    .line 37
    :cond_2
    :goto_0
    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final b(Ljava/lang/String;)V
    .locals 6

    .line 91
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 95
    :cond_0
    :try_start_0
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v1, "update_time"

    .line 96
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const-string v1, "video_url = ? "

    .line 99
    invoke-virtual {p0}, Lcom/tkay/core/common/c/m;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "video_res_cache_info"

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/String;

    const/4 v5, 0x0

    aput-object p1, v4, v5

    invoke-virtual {v2, v3, v0, v1, v4}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final c()J
    .locals 4

    const/4 v0, 0x0

    .line 108
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/m;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "SELECT sum(download_size) FROM video_res_cache_info"

    invoke-virtual {v1, v2, v0}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    .line 110
    invoke-interface {v0}, Landroid/database/Cursor;->moveToNext()Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v1, 0x0

    .line 111
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v1

    .line 112
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 119
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_0
    return-wide v1

    :cond_1
    if-eqz v0, :cond_2

    :goto_0
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    goto :goto_1

    :catchall_0
    move-exception v1

    .line 116
    :try_start_1
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "getDownloadedVideoSize fail:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v0, :cond_2

    goto :goto_0

    :cond_2
    :goto_1
    const-wide/16 v0, 0x0

    return-wide v0

    :catchall_1
    move-exception v1

    if-eqz v0, :cond_3

    .line 119
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    .line 121
    :cond_3
    throw v1
.end method

.method public final c(Ljava/lang/String;)V
    .locals 5

    .line 194
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 198
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/m;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "video_res_cache_info"

    const-string v2, "video_url=?"

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    aput-object p1, v3, v4

    invoke-virtual {v0, v1, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 201
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "removeVideoResCacheInfo fail:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ",videoUrl:"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final d()Ljava/util/List;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/a/i;",
            ">;"
        }
    .end annotation

    const-string v0, "update_time"

    .line 126
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x0

    .line 132
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/m;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    const-string v4, "video_res_cache_info"

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    const-string v10, "update_time DESC"

    invoke-virtual/range {v3 .. v10}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v2

    .line 137
    invoke-interface {v2}, Landroid/database/Cursor;->getCount()I

    move-result v3

    if-lez v3, :cond_1

    .line 138
    invoke-interface {v2}, Landroid/database/Cursor;->getCount()I

    move-result v3

    int-to-double v3, v3

    const-wide/high16 v5, 0x3ff0000000000000L    # 1.0

    mul-double/2addr v3, v5

    add-double/2addr v3, v5

    const-wide/high16 v5, 0x4000000000000000L    # 2.0

    div-double/2addr v3, v5

    invoke-static {v3, v4}, Ljava/lang/Math;->round(D)J

    move-result-wide v3

    long-to-int v3, v3

    const/4 v4, 0x1

    sub-int/2addr v3, v4

    .line 139
    invoke-interface {v2, v3}, Landroid/database/Cursor;->moveToPosition(I)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 140
    invoke-interface {v2, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v2, v3}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v5

    .line 142
    :cond_0
    new-instance v3, Lcom/tkay/core/common/a/i;

    invoke-direct {v3}, Lcom/tkay/core/common/a/i;-><init>()V

    const-string v7, "video_url"

    .line 143
    invoke-interface {v2, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    invoke-interface {v2, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v7}, Lcom/tkay/core/common/a/i;->a(Ljava/lang/String;)V

    const-string v7, "file_path"

    .line 144
    invoke-interface {v2, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    invoke-interface {v2, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v7}, Lcom/tkay/core/common/a/i;->b(Ljava/lang/String;)V

    const-string v7, "ready_rate"

    .line 145
    invoke-interface {v2, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    invoke-interface {v2, v7}, Landroid/database/Cursor;->getInt(I)I

    move-result v7

    invoke-virtual {v3, v7}, Lcom/tkay/core/common/a/i;->a(I)V

    const-string v7, "download_size"

    .line 146
    invoke-interface {v2, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    invoke-interface {v2, v7}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v7

    invoke-virtual {v3, v7, v8}, Lcom/tkay/core/common/a/i;->b(J)V

    const-string v7, "total_size"

    .line 147
    invoke-interface {v2, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    invoke-interface {v2, v7}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v7

    invoke-virtual {v3, v7, v8}, Lcom/tkay/core/common/a/i;->a(J)V

    .line 148
    invoke-interface {v2, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    invoke-interface {v2, v7}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v7

    invoke-virtual {v3, v7, v8}, Lcom/tkay/core/common/a/i;->c(J)V

    .line 149
    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 150
    invoke-interface {v2}, Landroid/database/Cursor;->moveToNext()Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v3, :cond_0

    .line 153
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/core/common/c/m;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v3, "video_res_cache_info"

    const-string v7, "update_time<=?"

    new-array v4, v4, [Ljava/lang/String;

    const/4 v8, 0x0

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v8

    invoke-virtual {v0, v3, v7, v4}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 159
    :try_start_2
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "removeHalfVideoInfoByUpdateTime fail:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_1
    :goto_0
    if-eqz v2, :cond_2

    .line 168
    :goto_1
    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    goto :goto_2

    :catchall_1
    move-exception v0

    .line 165
    :try_start_3
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "removeHalfVideoResCacheInfoByUpdateTime fail:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz v2, :cond_2

    goto :goto_1

    :cond_2
    :goto_2
    return-object v1

    :catchall_2
    move-exception v0

    if-eqz v2, :cond_3

    .line 168
    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    .line 170
    :cond_3
    throw v0
.end method
