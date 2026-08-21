.class public Lcom/tkay/core/common/c/l;
.super Lcom/tkay/core/common/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/c/l$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/c/a<",
        "Lcom/tkay/core/common/f/ad;",
        ">;"
    }
.end annotation


# static fields
.field private static volatile c:Lcom/tkay/core/common/c/l;


# instance fields
.field private final b:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/tkay/core/common/c/b;)V
    .locals 0

    .line 29
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/a;-><init>(Lcom/tkay/core/common/c/b;)V

    .line 24
    const-class p1, Lcom/tkay/core/common/c/l;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/c/l;->b:Ljava/lang/String;

    return-void
.end method

.method public static a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/l;
    .locals 2

    .line 33
    sget-object v0, Lcom/tkay/core/common/c/l;->c:Lcom/tkay/core/common/c/l;

    if-nez v0, :cond_1

    .line 34
    const-class v0, Lcom/tkay/core/common/c/l;

    monitor-enter v0

    .line 35
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/c/l;->c:Lcom/tkay/core/common/c/l;

    if-nez v1, :cond_0

    .line 36
    new-instance v1, Lcom/tkay/core/common/c/l;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/c/l;-><init>(Lcom/tkay/core/common/c/b;)V

    sput-object v1, Lcom/tkay/core/common/c/l;->c:Lcom/tkay/core/common/c/l;

    .line 38
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 40
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/c/l;->c:Lcom/tkay/core/common/c/l;

    return-object p0
.end method

.method private static a(Landroid/database/Cursor;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ad;
    .locals 6

    if-eqz p0, :cond_4

    .line 236
    invoke-interface {p0}, Landroid/database/Cursor;->getCount()I

    move-result v0

    if-lez v0, :cond_4

    .line 237
    new-instance v0, Lcom/tkay/core/common/f/ad;

    invoke-direct {v0}, Lcom/tkay/core/common/f/ad;-><init>()V

    .line 238
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v1, v0, Lcom/tkay/core/common/f/ad;->f:Ljava/util/concurrent/ConcurrentHashMap;

    .line 239
    :goto_0
    invoke-interface {p0}, Landroid/database/Cursor;->moveToNext()Z

    move-result v1

    if-eqz v1, :cond_3

    const-string v1, "format"

    .line 241
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1

    iput v1, v0, Lcom/tkay/core/common/f/ad;->a:I

    const-string v1, "placement_id"

    .line 242
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/ad;->b:Ljava/lang/String;

    .line 244
    new-instance v1, Lcom/tkay/core/common/f/ad$a;

    invoke-direct {v1}, Lcom/tkay/core/common/f/ad$a;-><init>()V

    const-string v2, "adsource_id"

    .line 245
    invoke-interface {p0, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p0, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    const-string v2, "hour_time"

    .line 246
    invoke-interface {p0, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p0, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    const-string v2, "date_time"

    .line 247
    invoke-interface {p0, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p0, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    .line 250
    iget-object v2, v1, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    invoke-static {v2, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x0

    if-nez v2, :cond_0

    .line 251
    iput v3, v1, Lcom/tkay/core/common/f/ad$a;->e:I

    goto :goto_1

    :cond_0
    const-string v2, "hour_imp"

    .line 253
    invoke-interface {p0, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p0, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    iput v2, v1, Lcom/tkay/core/common/f/ad$a;->e:I

    .line 255
    :goto_1
    iget v2, v0, Lcom/tkay/core/common/f/ad;->d:I

    iget v4, v1, Lcom/tkay/core/common/f/ad$a;->e:I

    add-int/2addr v2, v4

    iput v2, v0, Lcom/tkay/core/common/f/ad;->d:I

    .line 258
    iget-object v2, v1, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    invoke-static {v2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 259
    iput v3, v1, Lcom/tkay/core/common/f/ad$a;->d:I

    goto :goto_2

    :cond_1
    const-string v2, "date_imp"

    .line 261
    invoke-interface {p0, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p0, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    iput v2, v1, Lcom/tkay/core/common/f/ad$a;->d:I

    .line 263
    :goto_2
    iget v2, v0, Lcom/tkay/core/common/f/ad;->c:I

    iget v3, v1, Lcom/tkay/core/common/f/ad$a;->d:I

    add-int/2addr v2, v3

    iput v2, v0, Lcom/tkay/core/common/f/ad;->c:I

    const-string v2, "show_time"

    .line 266
    invoke-interface {p0, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p0, v2}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v2

    iput-wide v2, v1, Lcom/tkay/core/common/f/ad$a;->f:J

    .line 267
    iget-wide v2, v1, Lcom/tkay/core/common/f/ad$a;->f:J

    iget-wide v4, v0, Lcom/tkay/core/common/f/ad;->e:J

    cmp-long v2, v2, v4

    if-ltz v2, :cond_2

    .line 268
    iget-wide v2, v1, Lcom/tkay/core/common/f/ad$a;->f:J

    iput-wide v2, v0, Lcom/tkay/core/common/f/ad;->e:J

    .line 271
    :cond_2
    iget-object v2, v0, Lcom/tkay/core/common/f/ad;->f:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v3, v1, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    invoke-virtual {v2, v3, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_0

    :cond_3
    return-object v0

    :cond_4
    const/4 p0, 0x0

    return-object p0
.end method

.method private static b(Landroid/database/Cursor;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ad$a;
    .locals 2

    if-eqz p0, :cond_2

    .line 287
    invoke-interface {p0}, Landroid/database/Cursor;->getCount()I

    move-result v0

    if-lez v0, :cond_2

    .line 288
    invoke-interface {p0}, Landroid/database/Cursor;->moveToNext()Z

    .line 289
    new-instance v0, Lcom/tkay/core/common/f/ad$a;

    invoke-direct {v0}, Lcom/tkay/core/common/f/ad$a;-><init>()V

    const-string v1, "adsource_id"

    .line 290
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    const-string v1, "hour_time"

    .line 291
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    const-string v1, "date_time"

    .line 292
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    .line 295
    iget-object v1, v0, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    invoke-static {v1, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 v1, 0x0

    if-nez p2, :cond_0

    .line 296
    iput v1, v0, Lcom/tkay/core/common/f/ad$a;->e:I

    goto :goto_0

    :cond_0
    const-string p2, "hour_imp"

    .line 298
    invoke-interface {p0, p2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p2

    invoke-interface {p0, p2}, Landroid/database/Cursor;->getInt(I)I

    move-result p2

    iput p2, v0, Lcom/tkay/core/common/f/ad$a;->e:I

    .line 302
    :goto_0
    iget-object p2, v0, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    invoke-static {p2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 303
    iput v1, v0, Lcom/tkay/core/common/f/ad$a;->d:I

    goto :goto_1

    :cond_1
    const-string p1, "date_imp"

    .line 305
    invoke-interface {p0, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {p0, p1}, Landroid/database/Cursor;->getInt(I)I

    move-result p1

    iput p1, v0, Lcom/tkay/core/common/f/ad$a;->d:I

    :goto_1
    const-string p1, "show_time"

    .line 309
    invoke-interface {p0, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {p0, p1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide p0

    iput-wide p0, v0, Lcom/tkay/core/common/f/ad$a;->f:J

    return-object v0

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method

.method private b(Ljava/lang/String;)Z
    .locals 10

    .line 210
    invoke-virtual {p0}, Lcom/tkay/core/common/c/l;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "adsource_id"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v2

    const/4 v8, 0x1

    new-array v4, v8, [Ljava/lang/String;

    const/4 v9, 0x0

    aput-object p1, v4, v9

    const-string v1, "placement_ad_impression"

    const-string v3, "adsource_id=?"

    const-string v5, "adsource_id"

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-virtual/range {v0 .. v7}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 215
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v0

    if-lez v0, :cond_0

    .line 216
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    return v8

    :cond_0
    if-eqz p1, :cond_1

    .line 220
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    :cond_1
    return v9
.end method


# virtual methods
.method public final declared-synchronized a(ILjava/lang/String;Lcom/tkay/core/common/f/ad$a;)J
    .locals 12

    monitor-enter p0

    .line 177
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/l;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 v1, -0x1

    if-eqz v0, :cond_4

    if-nez p3, :cond_0

    goto/16 :goto_1

    .line 181
    :cond_0
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "format"

    .line 182
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v0, v3, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p1, "placement_id"

    .line 183
    invoke-virtual {v0, p1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "adsource_id"

    .line 184
    iget-object p2, p3, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    invoke-virtual {v0, p1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "hour_time"

    .line 185
    iget-object p2, p3, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    invoke-virtual {v0, p1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "hour_imp"

    .line 186
    iget p2, p3, Lcom/tkay/core/common/f/ad$a;->e:I

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p1, "date_time"

    .line 187
    iget-object p2, p3, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    invoke-virtual {v0, p1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "date_imp"

    .line 188
    iget p2, p3, Lcom/tkay/core/common/f/ad$a;->d:I

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p1, "show_time"

    .line 189
    iget-wide v3, p3, Lcom/tkay/core/common/f/ad$a;->f:J

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 191
    iget-object p1, p3, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    .line 2210
    invoke-virtual {p0}, Lcom/tkay/core/common/c/l;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    const-string v4, "placement_ad_impression"

    const-string p2, "adsource_id"

    filled-new-array {p2}, [Ljava/lang/String;

    move-result-object v5

    const-string v6, "adsource_id=?"

    const/4 p2, 0x1

    new-array v7, p2, [Ljava/lang/String;

    const/4 v11, 0x0

    aput-object p1, v7, v11

    const-string v8, "adsource_id"

    const/4 v9, 0x0

    const/4 v10, 0x0

    invoke-virtual/range {v3 .. v10}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 2215
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v3

    if-lez v3, :cond_1

    .line 2216
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    move p1, p2

    goto :goto_0

    :cond_1
    if-eqz p1, :cond_2

    .line 2220
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    :cond_2
    move p1, v11

    :goto_0
    if-eqz p1, :cond_3

    const-string p1, "adsource_id = ? "

    .line 194
    invoke-virtual {p0}, Lcom/tkay/core/common/c/l;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    const-string v4, "placement_ad_impression"

    new-array p2, p2, [Ljava/lang/String;

    iget-object p3, p3, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    aput-object p3, p2, v11

    invoke-virtual {v3, v4, v0, p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    int-to-long p1, p1

    monitor-exit p0

    return-wide p1

    .line 197
    :cond_3
    :try_start_2
    invoke-virtual {p0}, Lcom/tkay/core/common/c/l;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string p2, "placement_ad_impression"

    const/4 p3, 0x0

    invoke-virtual {p1, p2, p3, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-wide p1

    .line 204
    :catch_0
    monitor-exit p0

    return-wide v1

    .line 178
    :cond_4
    :goto_1
    monitor-exit p0

    return-wide v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ad$a;
    .locals 10

    monitor-enter p0

    const/4 v0, 0x0

    .line 152
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/l;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "placement_ad_impression"

    const/4 v3, 0x0

    const-string v4, "adsource_id=? AND placement_id=?"

    const/4 v5, 0x2

    new-array v5, v5, [Ljava/lang/String;

    const/4 v9, 0x0

    aput-object p2, v5, v9

    const/4 p2, 0x1

    aput-object p1, v5, p2

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_2

    .line 1287
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result p2

    if-lez p2, :cond_2

    .line 1288
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    .line 1289
    new-instance p2, Lcom/tkay/core/common/f/ad$a;

    invoke-direct {p2}, Lcom/tkay/core/common/f/ad$a;-><init>()V

    const-string v1, "adsource_id"

    .line 1290
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p2, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    const-string v1, "hour_time"

    .line 1291
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p2, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    const-string v1, "date_time"

    .line 1292
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p2, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    .line 1295
    iget-object v1, p2, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    invoke-static {v1, p4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p4

    if-nez p4, :cond_0

    .line 1296
    iput v9, p2, Lcom/tkay/core/common/f/ad$a;->e:I

    goto :goto_0

    :cond_0
    const-string p4, "hour_imp"

    .line 1298
    invoke-interface {p1, p4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p4

    invoke-interface {p1, p4}, Landroid/database/Cursor;->getInt(I)I

    move-result p4

    iput p4, p2, Lcom/tkay/core/common/f/ad$a;->e:I

    .line 1302
    :goto_0
    iget-object p4, p2, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    invoke-static {p4, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_1

    .line 1303
    iput v9, p2, Lcom/tkay/core/common/f/ad$a;->d:I

    goto :goto_1

    :cond_1
    const-string p3, "date_imp"

    .line 1305
    invoke-interface {p1, p3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p3

    invoke-interface {p1, p3}, Landroid/database/Cursor;->getInt(I)I

    move-result p3

    iput p3, p2, Lcom/tkay/core/common/f/ad$a;->d:I

    :goto_1
    const-string p3, "show_time"

    .line 1309
    invoke-interface {p1, p3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p3

    invoke-interface {p1, p3}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide p3

    iput-wide p3, p2, Lcom/tkay/core/common/f/ad$a;->f:J

    goto :goto_2

    :cond_2
    move-object p2, v0

    .line 155
    :goto_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p1, :cond_3

    .line 169
    :try_start_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 156
    :cond_3
    monitor-exit p0

    return-object p2

    :catchall_0
    move-object p1, v0

    :catchall_1
    if-eqz p1, :cond_5

    goto :goto_4

    :catch_0
    move-object p1, v0

    .line 162
    :catch_1
    :try_start_3
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz p1, :cond_5

    .line 169
    :goto_3
    :try_start_4
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    goto :goto_5

    :catchall_2
    move-exception p2

    if-eqz p1, :cond_4

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    .line 171
    :cond_4
    throw p2
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :catch_2
    move-object p1, v0

    :catch_3
    if-eqz p1, :cond_5

    :goto_4
    goto :goto_3

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1

    .line 172
    :cond_5
    :goto_5
    monitor-exit p0

    return-object v0
.end method

.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ad;
    .locals 10

    monitor-enter p0

    const/4 v0, 0x0

    .line 123
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/l;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "placement_ad_impression"

    const/4 v3, 0x0

    const-string v4, "placement_id=?"

    const/4 v5, 0x1

    new-array v5, v5, [Ljava/lang/String;

    const/4 v9, 0x0

    aput-object p1, v5, v9

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_3

    .line 1236
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v1

    if-lez v1, :cond_3

    .line 1237
    new-instance v1, Lcom/tkay/core/common/f/ad;

    invoke-direct {v1}, Lcom/tkay/core/common/f/ad;-><init>()V

    .line 1238
    new-instance v2, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v2, v1, Lcom/tkay/core/common/f/ad;->f:Ljava/util/concurrent/ConcurrentHashMap;

    .line 1239
    :goto_0
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    if-eqz v2, :cond_4

    const-string v2, "format"

    .line 1241
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    iput v2, v1, Lcom/tkay/core/common/f/ad;->a:I

    const-string v2, "placement_id"

    .line 1242
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/core/common/f/ad;->b:Ljava/lang/String;

    .line 1244
    new-instance v2, Lcom/tkay/core/common/f/ad$a;

    invoke-direct {v2}, Lcom/tkay/core/common/f/ad$a;-><init>()V

    const-string v3, "adsource_id"

    .line 1245
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {p1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    const-string v3, "hour_time"

    .line 1246
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {p1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    const-string v3, "date_time"

    .line 1247
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {p1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    .line 1250
    iget-object v3, v2, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    invoke-static {v3, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 1251
    iput v9, v2, Lcom/tkay/core/common/f/ad$a;->e:I

    goto :goto_1

    :cond_0
    const-string v3, "hour_imp"

    .line 1253
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {p1, v3}, Landroid/database/Cursor;->getInt(I)I

    move-result v3

    iput v3, v2, Lcom/tkay/core/common/f/ad$a;->e:I

    .line 1255
    :goto_1
    iget v3, v1, Lcom/tkay/core/common/f/ad;->d:I

    iget v4, v2, Lcom/tkay/core/common/f/ad$a;->e:I

    add-int/2addr v3, v4

    iput v3, v1, Lcom/tkay/core/common/f/ad;->d:I

    .line 1258
    iget-object v3, v2, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    invoke-static {v3, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 1259
    iput v9, v2, Lcom/tkay/core/common/f/ad$a;->d:I

    goto :goto_2

    :cond_1
    const-string v3, "date_imp"

    .line 1261
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {p1, v3}, Landroid/database/Cursor;->getInt(I)I

    move-result v3

    iput v3, v2, Lcom/tkay/core/common/f/ad$a;->d:I

    .line 1263
    :goto_2
    iget v3, v1, Lcom/tkay/core/common/f/ad;->c:I

    iget v4, v2, Lcom/tkay/core/common/f/ad$a;->d:I

    add-int/2addr v3, v4

    iput v3, v1, Lcom/tkay/core/common/f/ad;->c:I

    const-string v3, "show_time"

    .line 1266
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {p1, v3}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v3

    iput-wide v3, v2, Lcom/tkay/core/common/f/ad$a;->f:J

    .line 1267
    iget-wide v3, v2, Lcom/tkay/core/common/f/ad$a;->f:J

    iget-wide v5, v1, Lcom/tkay/core/common/f/ad;->e:J

    cmp-long v3, v3, v5

    if-ltz v3, :cond_2

    .line 1268
    iget-wide v3, v2, Lcom/tkay/core/common/f/ad$a;->f:J

    iput-wide v3, v1, Lcom/tkay/core/common/f/ad;->e:J

    .line 1271
    :cond_2
    iget-object v3, v1, Lcom/tkay/core/common/f/ad;->f:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v4, v2, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    invoke-virtual {v3, v4, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_0

    :cond_3
    move-object v1, v0

    .line 126
    :cond_4
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p1, :cond_5

    .line 140
    :try_start_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 127
    :cond_5
    monitor-exit p0

    return-object v1

    :catchall_0
    move-object p1, v0

    :catchall_1
    if-eqz p1, :cond_7

    goto :goto_4

    :catch_0
    move-object p1, v0

    .line 133
    :catch_1
    :try_start_3
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz p1, :cond_7

    .line 140
    :goto_3
    :try_start_4
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    goto :goto_5

    :catchall_2
    move-exception p2

    if-eqz p1, :cond_6

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    .line 142
    :cond_6
    throw p2
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :catch_2
    move-object p1, v0

    :catch_3
    if-eqz p1, :cond_7

    :goto_4
    goto :goto_3

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1

    .line 143
    :cond_7
    :goto_5
    monitor-exit p0

    return-object v0
.end method

.method public final declared-synchronized a(ILjava/lang/String;Ljava/lang/String;)Ljava/util/Map;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/ad;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 45
    :try_start_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v1, 0x0

    .line 52
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/core/common/c/l;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "placement_ad_impression"

    const/4 v4, 0x0

    const-string v5, "format=?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const/4 v10, 0x0

    aput-object p1, v6, v10

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 54
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_6

    .line 55
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result p1

    if-eqz p1, :cond_4

    const-string p1, "placement_id"

    .line 56
    invoke-interface {v1, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {v1, p1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1

    .line 57
    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/ad;

    if-nez v2, :cond_0

    .line 60
    new-instance v2, Lcom/tkay/core/common/f/ad;

    invoke-direct {v2}, Lcom/tkay/core/common/f/ad;-><init>()V

    .line 61
    iput-object p1, v2, Lcom/tkay/core/common/f/ad;->b:Ljava/lang/String;

    const-string v3, "format"

    .line 62
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getInt(I)I

    move-result v3

    iput v3, v2, Lcom/tkay/core/common/f/ad;->a:I

    .line 63
    new-instance v3, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v3}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v3, v2, Lcom/tkay/core/common/f/ad;->f:Ljava/util/concurrent/ConcurrentHashMap;

    .line 64
    invoke-virtual {v0, p1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 67
    :cond_0
    new-instance p1, Lcom/tkay/core/common/f/ad$a;

    invoke-direct {p1}, Lcom/tkay/core/common/f/ad$a;-><init>()V

    const-string v3, "adsource_id"

    .line 68
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p1, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    const-string v3, "hour_time"

    .line 69
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p1, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    const-string v3, "date_time"

    .line 70
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p1, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    .line 73
    iget-object v3, p1, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    invoke-static {v3, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 74
    iput v10, p1, Lcom/tkay/core/common/f/ad$a;->e:I

    goto :goto_1

    :cond_1
    const-string v3, "hour_imp"

    .line 76
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getInt(I)I

    move-result v3

    iput v3, p1, Lcom/tkay/core/common/f/ad$a;->e:I

    .line 78
    :goto_1
    iget v3, v2, Lcom/tkay/core/common/f/ad;->d:I

    iget v4, p1, Lcom/tkay/core/common/f/ad$a;->e:I

    add-int/2addr v3, v4

    iput v3, v2, Lcom/tkay/core/common/f/ad;->d:I

    .line 81
    iget-object v3, p1, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    invoke-static {v3, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    .line 82
    iput v10, p1, Lcom/tkay/core/common/f/ad$a;->d:I

    goto :goto_2

    :cond_2
    const-string v3, "date_imp"

    .line 84
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getInt(I)I

    move-result v3

    iput v3, p1, Lcom/tkay/core/common/f/ad$a;->d:I

    .line 86
    :goto_2
    iget v3, v2, Lcom/tkay/core/common/f/ad;->c:I

    iget v4, p1, Lcom/tkay/core/common/f/ad$a;->d:I

    add-int/2addr v3, v4

    iput v3, v2, Lcom/tkay/core/common/f/ad;->c:I

    const-string v3, "show_time"

    .line 89
    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v3

    iput-wide v3, p1, Lcom/tkay/core/common/f/ad$a;->f:J

    .line 90
    iget-wide v3, p1, Lcom/tkay/core/common/f/ad$a;->f:J

    iget-wide v5, v2, Lcom/tkay/core/common/f/ad;->e:J

    cmp-long v3, v3, v5

    if-ltz v3, :cond_3

    .line 91
    iget-wide v3, p1, Lcom/tkay/core/common/f/ad$a;->f:J

    iput-wide v3, v2, Lcom/tkay/core/common/f/ad;->e:J

    .line 94
    :cond_3
    iget-object v2, v2, Lcom/tkay/core/common/f/ad;->f:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v3, p1, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    invoke-virtual {v2, v3, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_0

    .line 96
    :cond_4
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v1, :cond_5

    .line 111
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 97
    :cond_5
    monitor-exit p0

    return-object v0

    :cond_6
    if-eqz v1, :cond_8

    .line 111
    :goto_3
    :try_start_3
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_4

    :catchall_0
    if-eqz v1, :cond_8

    goto :goto_3

    .line 104
    :catch_0
    :try_start_4
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v1, :cond_8

    goto :goto_3

    :catchall_1
    move-exception p1

    if-eqz v1, :cond_7

    .line 111
    :try_start_5
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 113
    :cond_7
    throw p1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    :catch_1
    if-eqz v1, :cond_8

    goto :goto_3

    .line 114
    :cond_8
    :goto_4
    monitor-exit p0

    return-object v0

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Ljava/lang/String;)V
    .locals 3

    .line 322
    monitor-enter p0

    .line 324
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "date_time!=\'"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 325
    invoke-virtual {p0}, Lcom/tkay/core/common/c/l;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 326
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    .line 328
    :cond_0
    :try_start_2
    invoke-virtual {p0}, Lcom/tkay/core/common/c/l;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "placement_ad_impression"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p1, v2}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    .line 331
    :catch_0
    :goto_0
    :try_start_3
    monitor-exit p0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    return-void

    :goto_1
    monitor-exit p0

    throw p1
.end method
