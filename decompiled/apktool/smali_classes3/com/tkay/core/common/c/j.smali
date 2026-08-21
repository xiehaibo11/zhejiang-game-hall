.class public Lcom/tkay/core/common/c/j;
.super Lcom/tkay/core/common/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/c/j$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/c/a<",
        "Lcom/tkay/core/common/f/w;",
        ">;"
    }
.end annotation


# static fields
.field private static c:Lcom/tkay/core/common/c/j;


# instance fields
.field private final b:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/tkay/core/common/c/b;)V
    .locals 0

    .line 27
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/a;-><init>(Lcom/tkay/core/common/c/b;)V

    .line 22
    const-class p1, Lcom/tkay/core/common/c/j;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/c/j;->b:Ljava/lang/String;

    return-void
.end method

.method private declared-synchronized a(Lcom/tkay/core/common/f/w;)J
    .locals 9

    monitor-enter p0

    .line 160
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/j;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 v1, -0x1

    if-eqz v0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    .line 164
    :cond_0
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "type"

    .line 165
    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->e()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "unit_id"

    .line 166
    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "click_count"

    .line 167
    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->d()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "show_count"

    .line 168
    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->c()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "expire_time"

    .line 169
    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->b()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const-string v3, "type = ? and unit_id = ?"

    .line 173
    invoke-virtual {p0}, Lcom/tkay/core/common/c/j;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v4

    const-string v5, "offer_action_record"

    const/4 v6, 0x2

    new-array v6, v6, [Ljava/lang/String;

    const/4 v7, 0x0

    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->e()I

    move-result v8

    invoke-static {v8}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v8

    aput-object v8, v6, v7

    const/4 v7, 0x1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->a()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v6, v7

    invoke-virtual {v4, v5, v0, v3, v6}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    int-to-long v0, p1

    monitor-exit p0

    return-wide v0

    .line 180
    :catch_0
    monitor-exit p0

    return-wide v1

    .line 161
    :cond_1
    :goto_0
    monitor-exit p0

    return-wide v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public static a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/j;
    .locals 2

    .line 31
    sget-object v0, Lcom/tkay/core/common/c/j;->c:Lcom/tkay/core/common/c/j;

    if-nez v0, :cond_1

    .line 32
    const-class v0, Lcom/tkay/core/common/c/j;

    monitor-enter v0

    .line 33
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/c/j;->c:Lcom/tkay/core/common/c/j;

    if-nez v1, :cond_0

    .line 34
    new-instance v1, Lcom/tkay/core/common/c/j;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/c/j;-><init>(Lcom/tkay/core/common/c/b;)V

    sput-object v1, Lcom/tkay/core/common/c/j;->c:Lcom/tkay/core/common/c/j;

    .line 36
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 38
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/c/j;->c:Lcom/tkay/core/common/c/j;

    return-object p0
.end method

.method private declared-synchronized a(ILjava/lang/String;)Lcom/tkay/core/common/f/w;
    .locals 9

    monitor-enter p0

    const/4 v0, 0x0

    .line 219
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/j;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "offer_action_record"

    const/4 v3, 0x0

    const-string v4, "type=? and unit_id = ?"

    const/4 v5, 0x2

    new-array v5, v5, [Ljava/lang/String;

    const/4 v6, 0x0

    .line 221
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    aput-object v7, v5, v6

    const/4 v6, 0x1

    aput-object p2, v5, v6

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    .line 219
    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_1

    .line 223
    :try_start_1
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result v2

    if-lez v2, :cond_1

    .line 224
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    .line 225
    new-instance v2, Lcom/tkay/core/common/f/w;

    invoke-direct {v2, p1, p2}, Lcom/tkay/core/common/f/w;-><init>(ILjava/lang/String;)V

    const-string p1, "click_count"

    .line 226
    invoke-interface {v1, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {v1, p1}, Landroid/database/Cursor;->getInt(I)I

    move-result p1

    invoke-virtual {v2, p1}, Lcom/tkay/core/common/f/w;->b(I)V

    const-string p1, "show_count"

    .line 227
    invoke-interface {v1, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {v1, p1}, Landroid/database/Cursor;->getInt(I)I

    move-result p1

    invoke-virtual {v2, p1}, Lcom/tkay/core/common/f/w;->a(I)V

    const-string p1, "expire_time"

    .line 228
    invoke-interface {v1, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {v1, p1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide p1

    invoke-virtual {v2, p1, p2}, Lcom/tkay/core/common/f/w;->a(J)V

    .line 229
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v1, :cond_0

    .line 245
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 230
    :cond_0
    monitor-exit p0

    return-object v2

    :cond_1
    if-eqz v1, :cond_2

    .line 245
    :try_start_3
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    .line 232
    :cond_2
    monitor-exit p0

    return-object v0

    :catchall_0
    move-object v1, v0

    :catchall_1
    if-eqz v1, :cond_4

    goto :goto_1

    :catch_0
    move-object v1, v0

    .line 238
    :catch_1
    :try_start_4
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    if-eqz v1, :cond_4

    .line 245
    :goto_0
    :try_start_5
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    goto :goto_2

    :catchall_2
    move-exception p1

    if-eqz v1, :cond_3

    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 247
    :cond_3
    throw p1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    :catch_2
    move-object v1, v0

    :catch_3
    if-eqz v1, :cond_4

    :goto_1
    goto :goto_0

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1

    .line 248
    :cond_4
    :goto_2
    monitor-exit p0

    return-object v0
.end method

.method private declared-synchronized b(Ljava/lang/String;ILjava/lang/String;)J
    .locals 5

    monitor-enter p0

    .line 184
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/j;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 v1, -0x1

    if-nez v0, :cond_0

    .line 185
    monitor-exit p0

    return-wide v1

    .line 188
    :cond_0
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "adsource_id"

    .line 189
    invoke-virtual {v0, v3, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "type"

    .line 190
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v0, p1, v3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p1, "unit_id"

    .line 191
    invoke-virtual {v0, p1, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 192
    invoke-direct {p0, p2, p3}, Lcom/tkay/core/common/c/j;->a(ILjava/lang/String;)Lcom/tkay/core/common/f/w;

    move-result-object p1

    if-eqz p1, :cond_1

    const-string p2, "click_count"

    .line 194
    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->d()I

    move-result p3

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p2, "show_count"

    .line 195
    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->c()I

    move-result p3

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p2, "expire_time"

    .line 196
    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->b()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {v0, p2, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    goto :goto_0

    :cond_1
    const-string p1, "click_count"

    const/4 p2, 0x0

    .line 198
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p3

    invoke-virtual {v0, p1, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p1, "show_count"

    .line 199
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p1, "expire_time"

    const/4 p2, -0x1

    .line 200
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 204
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/j;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string p2, "offer_action_record"

    const/4 p3, 0x0

    invoke-virtual {p1, p2, p3, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-wide p1

    .line 210
    :catch_0
    monitor-exit p0

    return-wide v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private static b(I)Ljava/lang/String;
    .locals 3

    if-lez p0, :cond_1

    .line 150
    new-instance v0, Ljava/lang/StringBuilder;

    mul-int/lit8 v1, p0, 0x2

    const/4 v2, 0x1

    sub-int/2addr v1, v2

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(I)V

    const-string v1, "?"

    .line 151
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_0
    if-ge v2, p0, :cond_0

    const-string v1, ",?"

    .line 153
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 155
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 148
    :cond_1
    new-instance p0, Ljava/lang/RuntimeException;

    const-string v0, "No placeholders"

    invoke-direct {p0, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method private b(ILjava/lang/String;)Z
    .locals 9

    .line 255
    invoke-virtual {p0}, Lcom/tkay/core/common/c/j;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const/4 v1, 0x2

    new-array v4, v1, [Ljava/lang/String;

    .line 257
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const/4 v8, 0x0

    aput-object p1, v4, v8

    const/4 p1, 0x1

    aput-object p2, v4, p1

    const-string v1, "offer_action_record"

    const/4 v2, 0x0

    const-string v3, "type = ? and unit_id = ?"

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    .line 255
    invoke-virtual/range {v0 .. v7}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 259
    invoke-interface {p2}, Landroid/database/Cursor;->getCount()I

    move-result v0

    if-lez v0, :cond_0

    .line 260
    invoke-interface {p2}, Landroid/database/Cursor;->close()V

    return p1

    :cond_0
    if-eqz p2, :cond_1

    .line 264
    invoke-interface {p2}, Landroid/database/Cursor;->close()V

    :cond_1
    return v8
.end method

.method private c(Ljava/lang/String;ILjava/lang/String;)Z
    .locals 9

    .line 275
    invoke-virtual {p0}, Lcom/tkay/core/common/c/j;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const/4 v1, 0x3

    new-array v4, v1, [Ljava/lang/String;

    const/4 v8, 0x0

    aput-object p1, v4, v8

    .line 276
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x1

    aput-object p1, v4, p2

    const/4 p1, 0x2

    aput-object p3, v4, p1

    const-string v1, "offer_action_record"

    const/4 v2, 0x0

    const-string v3, "adsource_id = ? and type = ? and unit_id = ?"

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    .line 275
    invoke-virtual/range {v0 .. v7}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 277
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result p3

    if-lez p3, :cond_0

    .line 278
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    return p2

    :cond_0
    if-eqz p1, :cond_1

    .line 282
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    :cond_1
    return v8
.end method


# virtual methods
.method public final declared-synchronized a(I)Ljava/util/List;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/w;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 66
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v1, 0x0

    .line 73
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/core/common/c/j;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "offer_action_record"

    const/4 v4, 0x0

    const-string v5, "type = ? and expire_time > ?"

    const/4 v6, 0x2

    new-array v6, v6, [Ljava/lang/String;

    const/4 v7, 0x0

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v8

    aput-object v8, v6, v7

    const/4 v7, 0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    invoke-static {v8, v9}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v8

    aput-object v8, v6, v7

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 74
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result v2

    if-lez v2, :cond_0

    .line 75
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 76
    new-instance v2, Lcom/tkay/core/common/f/w;

    const-string v3, "unit_id"

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, p1, v3}, Lcom/tkay/core/common/f/w;-><init>(ILjava/lang/String;)V

    const-string v3, "click_count"

    .line 77
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getInt(I)I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/f/w;->b(I)V

    const-string v3, "show_count"

    .line 78
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getInt(I)I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/f/w;->a(I)V

    const-string v3, "expire_time"

    .line 79
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Lcom/tkay/core/common/f/w;->a(J)V

    .line 80
    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :cond_0
    if-eqz v1, :cond_2

    .line 95
    :goto_1
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_2

    :catchall_0
    if-eqz v1, :cond_2

    goto :goto_1

    .line 88
    :catch_0
    :try_start_3
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v1, :cond_2

    goto :goto_1

    :catchall_1
    move-exception p1

    if-eqz v1, :cond_1

    .line 95
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 97
    :cond_1
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :catch_1
    if-eqz v1, :cond_2

    goto :goto_1

    .line 98
    :cond_2
    :goto_2
    monitor-exit p0

    return-object v0

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/util/List;I)Ljava/util/List;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;I)",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/w;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 102
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 103
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "SELECT * FROM offer_action_record WHERE adsource_id IN ("

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 104
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    invoke-static {v2}, Lcom/tkay/core/common/c/j;->b(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ") and type = ? and expire_time > ?"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v1, 0x0

    .line 109
    :try_start_1
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    add-int/lit8 v2, v2, 0x2

    new-array v7, v2, [Ljava/lang/String;

    .line 110
    invoke-interface {p1, v7}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    .line 111
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v7, v2

    .line 112
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    add-int/lit8 v2, v2, 0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v7, v2

    .line 115
    invoke-virtual {p0}, Lcom/tkay/core/common/c/j;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    const-string v4, "offer_action_record"

    const/4 v5, 0x0

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v6, "adsource_id IN ("

    invoke-direct {v2, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 116
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    invoke-static {p1}, Lcom/tkay/core/common/c/j;->b(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ") and type = ? and expire_time > ?"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    .line 115
    invoke-virtual/range {v3 .. v10}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 119
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_0

    .line 120
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 121
    new-instance p1, Lcom/tkay/core/common/f/w;

    const-string v2, "unit_id"

    invoke-interface {v1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-direct {p1, p2, v2}, Lcom/tkay/core/common/f/w;-><init>(ILjava/lang/String;)V

    const-string v2, "click_count"

    .line 122
    invoke-interface {v1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    invoke-virtual {p1, v2}, Lcom/tkay/core/common/f/w;->b(I)V

    const-string v2, "show_count"

    .line 123
    invoke-interface {v1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    invoke-virtual {p1, v2}, Lcom/tkay/core/common/f/w;->a(I)V

    const-string v2, "expire_time"

    .line 124
    invoke-interface {v1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v1, v2}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v2

    invoke-virtual {p1, v2, v3}, Lcom/tkay/core/common/f/w;->a(J)V

    .line 125
    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :cond_0
    if-eqz v1, :cond_2

    .line 140
    :goto_1
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_2

    :catchall_0
    if-eqz v1, :cond_2

    goto :goto_1

    .line 133
    :catch_0
    :try_start_3
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v1, :cond_2

    goto :goto_1

    :catchall_1
    move-exception p1

    if-eqz v1, :cond_1

    .line 140
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 142
    :cond_1
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :catch_1
    if-eqz v1, :cond_2

    goto :goto_1

    .line 143
    :cond_2
    :goto_2
    monitor-exit p0

    return-object v0

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(ILjava/lang/String;II)V
    .locals 0

    monitor-enter p0

    .line 42
    :try_start_0
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/c/j;->a(ILjava/lang/String;)Lcom/tkay/core/common/f/w;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 44
    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->d()I

    move-result p2

    add-int/2addr p2, p3

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/w;->b(I)V

    .line 45
    invoke-virtual {p1}, Lcom/tkay/core/common/f/w;->c()I

    move-result p2

    add-int/2addr p2, p4

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/w;->a(I)V

    .line 46
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/j;->a(Lcom/tkay/core/common/f/w;)J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 48
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(ILjava/lang/String;J)V
    .locals 2

    monitor-enter p0

    .line 51
    :try_start_0
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/c/j;->a(ILjava/lang/String;)Lcom/tkay/core/common/f/w;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 53
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    add-long/2addr v0, p3

    invoke-virtual {p1, v0, v1}, Lcom/tkay/core/common/f/w;->a(J)V

    .line 54
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/j;->a(Lcom/tkay/core/common/f/w;)J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 56
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/lang/String;ILjava/lang/String;)V
    .locals 10

    monitor-enter p0

    .line 1275
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/j;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "offer_action_record"

    const/4 v2, 0x0

    const-string v3, "adsource_id = ? and type = ? and unit_id = ?"

    const/4 v4, 0x3

    new-array v4, v4, [Ljava/lang/String;

    const/4 v8, 0x0

    aput-object p1, v4, v8

    .line 1276
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    const/4 v9, 0x1

    aput-object v5, v4, v9

    const/4 v5, 0x2

    aput-object p3, v4, v5

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    .line 1275
    invoke-virtual/range {v0 .. v7}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1277
    invoke-interface {v0}, Landroid/database/Cursor;->getCount()I

    move-result v1

    if-lez v1, :cond_0

    .line 1278
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    move v8, v9

    goto :goto_0

    :cond_0
    if-eqz v0, :cond_1

    .line 1282
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_1
    :goto_0
    if-nez v8, :cond_2

    .line 60
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/core/common/c/j;->b(Ljava/lang/String;ILjava/lang/String;)J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 62
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
