.class public Lcom/mbridge/msdk/foundation/db/t;
.super Lcom/mbridge/msdk/foundation/db/a;
.source "VideoReportDataDao.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/mbridge/msdk/foundation/db/a<",
        "Lcom/mbridge/msdk/foundation/entity/p;",
        ">;"
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String;

.field private static b:Lcom/mbridge/msdk/foundation/db/t;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 23
    const-class v0, Lcom/mbridge/msdk/foundation/db/t;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/db/t;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 29
    sput-object v0, Lcom/mbridge/msdk/foundation/db/t;->b:Lcom/mbridge/msdk/foundation/db/t;

    return-void
.end method

.method private constructor <init>(Lcom/mbridge/msdk/foundation/db/h;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/a;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;
    .locals 2

    .line 32
    sget-object v0, Lcom/mbridge/msdk/foundation/db/t;->b:Lcom/mbridge/msdk/foundation/db/t;

    if-nez v0, :cond_1

    .line 33
    const-class v0, Lcom/mbridge/msdk/foundation/db/t;

    monitor-enter v0

    .line 34
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/db/t;->b:Lcom/mbridge/msdk/foundation/db/t;

    if-nez v1, :cond_0

    .line 35
    new-instance v1, Lcom/mbridge/msdk/foundation/db/t;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/db/t;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    sput-object v1, Lcom/mbridge/msdk/foundation/db/t;->b:Lcom/mbridge/msdk/foundation/db/t;

    .line 37
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 39
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/db/t;->b:Lcom/mbridge/msdk/foundation/db/t;

    return-object p0
.end method


# virtual methods
.method public final declared-synchronized a()I
    .locals 4

    monitor-enter p0

    const/4 v0, 0x0

    const/4 v1, 0x0

    :try_start_0
    const-string v2, "select count(*) from reward_report"

    .line 199
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/t;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    invoke-virtual {v3, v2, v0}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 201
    invoke-interface {v0}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 202
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    if-eqz v0, :cond_1

    .line 210
    :goto_0
    :try_start_1
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_0
    move-exception v1

    goto :goto_2

    :catch_0
    move-exception v2

    .line 206
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 215
    :catch_1
    :cond_1
    :goto_1
    monitor-exit p0

    return v1

    :goto_2
    if-eqz v0, :cond_2

    .line 210
    :try_start_3
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 213
    :catch_2
    :cond_2
    :try_start_4
    throw v1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(Lcom/mbridge/msdk/foundation/entity/p;)J
    .locals 4

    monitor-enter p0

    if-eqz p1, :cond_d

    .line 278
    :try_start_0
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v1, "key"

    .line 279
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "networkType"

    .line 280
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->v()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "network_str"

    .line 281
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->w()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "isCompleteView"

    .line 282
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->x()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "watchedMillis"

    .line 283
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->p()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "videoLength"

    .line 284
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->q()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 285
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->r()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "offerUrl"

    .line 286
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->r()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 288
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->s()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "reason"

    .line 289
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->s()Ljava/lang/String;

    move-result-object v2

    const-string v3, "utf-8"

    invoke-static {v2, v3}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    const-string v1, "result"

    .line 291
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->y()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "duration"

    .line 292
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->t()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "videoSize"

    .line 293
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->u()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const-string v1, "type"

    .line 294
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->g()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 295
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->f()Ljava/lang/String;

    move-result-object v1

    .line 296
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    const-string v2, "endcard_url"

    .line 297
    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 299
    :cond_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->e()Ljava/lang/String;

    move-result-object v1

    .line 300
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    const-string v2, "video_url"

    .line 301
    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 303
    :cond_3
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->k()Ljava/lang/String;

    move-result-object v1

    .line 304
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    const-string v2, "rid"

    .line 305
    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 307
    :cond_4
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->l()Ljava/lang/String;

    move-result-object v1

    .line 308
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    const-string v2, "rid_n"

    .line 309
    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 311
    :cond_5
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->i()Ljava/lang/String;

    move-result-object v1

    .line 312
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    const-string v2, "template_url"

    .line 313
    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 316
    :cond_6
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->d()Ljava/lang/String;

    move-result-object v1

    .line 317
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    const-string v2, "image_url"

    .line 318
    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 320
    :cond_7
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->h()Ljava/lang/String;

    move-result-object v1

    .line 321
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_8

    const-string v2, "ad_type"

    const-string v3, "utf-8"

    .line 322
    invoke-static {v1, v3}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    const-string v1, "unitId"

    .line 324
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->m()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "campaignId"

    .line 325
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->n()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "2000039"

    .line 326
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_9

    .line 327
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/entity/p;->f(Lcom/mbridge/msdk/foundation/entity/p;)Ljava/lang/String;

    move-result-object v1

    .line 328
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_9

    const-string v2, "h5_click_data"

    .line 329
    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 333
    :cond_9
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->a()Ljava/lang/String;

    move-result-object v1

    .line 334
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_a

    const-string v2, "resource_type"

    const-string v3, "utf-8"

    .line 335
    invoke-static {v1, v3}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 338
    :cond_a
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->b()Ljava/lang/String;

    move-result-object v1

    .line 339
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_b

    const-string v2, "device_id"

    const-string v3, "utf-8"

    .line 340
    invoke-static {v1, v3}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 343
    :cond_b
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->c()Ljava/lang/String;

    move-result-object v1

    .line 344
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_c

    const-string v2, "creative"

    const-string v3, "utf-8"

    .line 345
    invoke-static {v1, v3}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    const-string v1, "adspace_t"

    .line 348
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/p;->j()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 351
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/t;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v1, "reward_report"

    const/4 v2, 0x0

    invoke-virtual {p1, v1, v2, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-wide v0

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 354
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 355
    sget-object v0, Lcom/mbridge/msdk/foundation/db/t;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :goto_0
    monitor-exit p0

    throw p1

    :cond_d
    :goto_1
    const-wide/16 v0, -0x1

    .line 357
    monitor-exit p0

    return-wide v0
.end method

.method public final declared-synchronized a(Ljava/lang/String;)Ljava/util/List;
    .locals 25
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/p;",
            ">;"
        }
    .end annotation

    move-object/from16 v0, p1

    monitor-enter p0

    .line 47
    :try_start_0
    invoke-static/range {p1 .. p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_7

    if-nez v1, :cond_f

    .line 51
    :try_start_1
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/foundation/db/t;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "reward_report"

    const/4 v4, 0x0

    const-string v5, "key=?"

    const/4 v11, 0x1

    new-array v6, v11, [Ljava/lang/String;

    const/4 v12, 0x0

    aput-object v0, v6, v12

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v13
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_7
    .catchall {:try_start_1 .. :try_end_1} :catchall_5

    if-eqz v13, :cond_d

    .line 53
    :try_start_2
    invoke-interface {v13}, Landroid/database/Cursor;->getCount()I

    move-result v1

    if-lez v1, :cond_d

    .line 54
    new-instance v14, Ljava/util/ArrayList;

    invoke-direct {v14}, Ljava/util/ArrayList;-><init>()V

    .line 55
    :goto_0
    invoke-interface {v13}, Landroid/database/Cursor;->moveToNext()Z

    move-result v1

    if-eqz v1, :cond_b

    const-string v1, "key"

    .line 56
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    const-string v1, "networkType"

    .line 57
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    const-string v1, "network_str"

    .line 58
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v7

    const-string v1, "isCompleteView"

    .line 59
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getInt(I)I

    const-string v1, "watchedMillis"

    .line 60
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getInt(I)I

    const-string v1, "videoLength"

    .line 61
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v18

    const-string v1, "offerUrl"

    .line 62
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v5

    const-string v1, "reason"

    .line 63
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v8

    const-string v1, "result"

    .line 64
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v6

    const-string v1, "duration"

    .line 65
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v21

    const-string v1, "videoSize"

    .line 66
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v22

    const-string v1, "campaignId"

    .line 68
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v9

    const-string v1, "video_url"

    .line 70
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "unitId"

    .line 72
    invoke-interface {v13, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v13, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v15

    const-string v2, "rid"

    .line 73
    invoke-interface {v13, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v13, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    const-string v10, "rid_n"

    .line 74
    invoke-interface {v13, v10}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v10

    invoke-interface {v13, v10}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v10

    const-string v12, "ad_type"

    .line 75
    invoke-interface {v13, v12}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v12

    invoke-interface {v13, v12}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v12

    const-string v11, "resource_type"

    .line 76
    invoke-interface {v13, v11}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v11

    invoke-interface {v13, v11}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v11

    move-object/from16 v16, v2

    const-string v2, "device_id"

    .line 77
    invoke-interface {v13, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v13, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v17, v2

    const-string v2, "creative"

    .line 78
    invoke-interface {v13, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v13, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v19, v2

    const-string v2, "adspace_t"

    .line 79
    invoke-interface {v13, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v13, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    move/from16 v20, v2

    const-string v2, "2000021"

    .line 82
    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_6
    .catchall {:try_start_2 .. :try_end_2} :catchall_4

    if-eqz v2, :cond_0

    .line 83
    :try_start_3
    new-instance v11, Lcom/mbridge/msdk/foundation/entity/p;

    move-object/from16 v12, v16

    move-object v2, v11

    move-object v6, v8

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 85
    invoke-virtual {v11, v9}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 86
    invoke-virtual {v11, v1}, Lcom/mbridge/msdk/foundation/entity/p;->e(Ljava/lang/String;)V

    .line 87
    invoke-virtual {v11, v12}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 88
    invoke-virtual {v11, v10}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 89
    invoke-virtual {v11, v15}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_6

    move-object v7, v13

    move-object/from16 v24, v14

    goto/16 :goto_3

    :catch_0
    move-exception v0

    goto/16 :goto_7

    :cond_0
    move-object/from16 v2, v16

    move-object/from16 v16, v15

    :try_start_4
    const-string v15, "2000022"

    .line 90
    invoke-virtual {v0, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v15
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_6
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    if-eqz v15, :cond_1

    .line 91
    :try_start_5
    new-instance v11, Lcom/mbridge/msdk/foundation/entity/p;

    move-object/from16 v24, v14

    move-object/from16 v14, v16

    move-object v15, v11

    move-object/from16 v16, v3

    move/from16 v17, v4

    move-object/from16 v19, v5

    move/from16 v20, v6

    move-object/from16 v23, v7

    invoke-direct/range {v15 .. v23}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;IILjava/lang/String;ILjava/lang/String;ILjava/lang/String;)V

    .line 94
    invoke-virtual {v11, v9}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 95
    invoke-virtual {v11, v1}, Lcom/mbridge/msdk/foundation/entity/p;->e(Ljava/lang/String;)V

    .line 96
    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 97
    invoke-virtual {v11, v14}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 98
    invoke-virtual {v11, v8}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 99
    invoke-virtual {v11, v10}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 100
    invoke-virtual {v11, v12}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_6

    goto :goto_1

    :cond_1
    move-object/from16 v24, v14

    move-object/from16 v14, v16

    :try_start_6
    const-string v1, "2000025"

    .line 101
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    if-eqz v1, :cond_2

    .line 102
    :try_start_7
    new-instance v11, Lcom/mbridge/msdk/foundation/entity/p;

    move-object v15, v11

    move-object/from16 v16, v3

    move/from16 v17, v4

    move-object/from16 v19, v5

    move/from16 v20, v6

    move-object/from16 v23, v7

    invoke-direct/range {v15 .. v23}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;IILjava/lang/String;ILjava/lang/String;ILjava/lang/String;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_0
    .catchall {:try_start_7 .. :try_end_7} :catchall_6

    :goto_1
    move-object v7, v13

    goto/16 :goto_3

    :cond_2
    :try_start_8
    const-string v1, "2000024"

    .line 104
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_6
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    if-eqz v1, :cond_3

    .line 105
    :try_start_9
    new-instance v11, Lcom/mbridge/msdk/foundation/entity/p;

    move-object v2, v11

    move-object v6, v8

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_0
    .catchall {:try_start_9 .. :try_end_9} :catchall_6

    goto :goto_1

    :cond_3
    :try_start_a
    const-string v1, "2000039"

    .line 106
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_6
    .catchall {:try_start_a .. :try_end_a} :catchall_4

    if-eqz v1, :cond_4

    :try_start_b
    const-string v1, "h5_click_data"

    .line 107
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 108
    new-instance v11, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v11, v1}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;)V
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_0
    .catchall {:try_start_b .. :try_end_b} :catchall_6

    goto :goto_1

    :cond_4
    :try_start_c
    const-string v1, "2000043"

    .line 109
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_6
    .catchall {:try_start_c .. :try_end_c} :catchall_4

    if-eqz v1, :cond_6

    :try_start_d
    const-string v1, "type"

    .line 110
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v15

    const-string v1, "endcard_url"

    .line 111
    invoke-interface {v13, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v13, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v5

    .line 113
    new-instance v7, Lcom/mbridge/msdk/foundation/entity/p;
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_2
    .catchall {:try_start_d .. :try_end_d} :catchall_1

    move-object v1, v7

    move-object v4, v2

    move-object/from16 v16, v13

    move-object/from16 v3, v17

    move-object/from16 v13, v19

    move/from16 v0, v20

    move-object/from16 v2, p1

    move-object v13, v3

    move v3, v6

    move-object v6, v4

    move-object/from16 v4, v21

    move-object/from16 v17, v13

    move-object v13, v6

    move-object v6, v9

    move-object/from16 v18, v11

    move-object v11, v7

    move-object v7, v14

    move-object v14, v9

    move-object v9, v15

    :try_start_e
    invoke-direct/range {v1 .. v9}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 114
    invoke-virtual {v11, v13}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 115
    invoke-virtual {v11, v10}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 116
    invoke-static {v14}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 117
    invoke-virtual {v11, v14}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 119
    :cond_5
    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/foundation/entity/p;->b(I)V

    .line 120
    invoke-virtual {v11, v12}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    move-object/from16 v1, v18

    .line 121
    invoke-virtual {v11, v1}, Lcom/mbridge/msdk/foundation/entity/p;->a(Ljava/lang/String;)V

    move-object/from16 v2, v17

    .line 122
    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/foundation/entity/p;->b(Ljava/lang/String;)V

    move-object/from16 v3, v19

    .line 123
    invoke-virtual {v11, v3}, Lcom/mbridge/msdk/foundation/entity/p;->c(Ljava/lang/String;)V
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_1
    .catchall {:try_start_e .. :try_end_e} :catchall_0

    move-object/from16 v0, p1

    move-object/from16 v7, v16

    goto/16 :goto_3

    :catchall_0
    move-exception v0

    goto :goto_2

    :catch_1
    move-exception v0

    move-object/from16 v13, v16

    goto/16 :goto_7

    :catchall_1
    move-exception v0

    move-object/from16 v16, v13

    :goto_2
    move-object/from16 v10, v16

    goto/16 :goto_8

    :catch_2
    move-exception v0

    move-object/from16 v16, v13

    goto/16 :goto_7

    :cond_6
    move-object v5, v9

    move-object v1, v11

    move-object/from16 v16, v13

    move-object/from16 v3, v19

    move/from16 v0, v20

    move-object v13, v2

    move-object/from16 v2, v17

    :try_start_f
    const-string v7, "2000045"

    move v9, v0

    move-object/from16 v0, p1

    .line 125
    invoke-virtual {v7, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_7

    .line 126
    new-instance v11, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v11}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 127
    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 128
    invoke-virtual {v11, v4}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 129
    invoke-virtual {v11, v6}, Lcom/mbridge/msdk/foundation/entity/p;->d(I)V

    .line 130
    invoke-virtual {v11, v5}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    const-string v1, "template_url"
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_4
    .catchall {:try_start_f .. :try_end_f} :catchall_3

    move-object/from16 v7, v16

    .line 131
    :try_start_10
    invoke-interface {v7, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v7, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 132
    invoke-virtual {v11, v1}, Lcom/mbridge/msdk/foundation/entity/p;->i(Ljava/lang/String;)V

    .line 133
    invoke-virtual {v11, v8}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 134
    invoke-virtual {v11, v13}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 135
    invoke-virtual {v11, v10}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 136
    invoke-virtual {v11, v14}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    goto :goto_3

    :cond_7
    move-object/from16 v7, v16

    const-string v11, "2000044"

    .line 137
    invoke-virtual {v11, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_8

    .line 138
    new-instance v11, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v11}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 139
    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 140
    invoke-virtual {v11, v4}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 141
    invoke-virtual {v11, v5}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    const-string v1, "image_url"

    .line 142
    invoke-interface {v7, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v7, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 143
    invoke-virtual {v11, v1}, Lcom/mbridge/msdk/foundation/entity/p;->d(Ljava/lang/String;)V

    .line 144
    invoke-virtual {v11, v8}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 145
    invoke-virtual {v11, v13}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 146
    invoke-virtual {v11, v10}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 147
    invoke-virtual {v11, v14}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    goto :goto_3

    :cond_8
    const-string v11, "2000054"

    .line 148
    invoke-virtual {v11, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_9

    .line 149
    new-instance v11, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v11}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 150
    invoke-virtual {v11, v0}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 151
    invoke-virtual {v11, v1}, Lcom/mbridge/msdk/foundation/entity/p;->a(Ljava/lang/String;)V

    .line 152
    invoke-virtual {v11, v14}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 153
    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/foundation/entity/p;->b(Ljava/lang/String;)V

    .line 154
    invoke-virtual {v11, v12}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    .line 155
    invoke-virtual {v11, v5}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 156
    invoke-virtual {v11, v13}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 157
    invoke-virtual {v11, v10}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 158
    invoke-virtual {v11, v6}, Lcom/mbridge/msdk/foundation/entity/p;->d(I)V

    .line 159
    invoke-virtual {v11, v8}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 160
    invoke-virtual {v11, v4}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 161
    invoke-virtual {v11, v3}, Lcom/mbridge/msdk/foundation/entity/p;->c(Ljava/lang/String;)V

    .line 162
    invoke-virtual {v11, v9}, Lcom/mbridge/msdk/foundation/entity/p;->b(I)V

    goto :goto_3

    :cond_9
    const/4 v11, 0x0

    :goto_3
    if-eqz v11, :cond_a

    move-object/from16 v1, v24

    .line 165
    invoke-interface {v1, v11}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_4

    :cond_a
    move-object/from16 v1, v24

    :goto_4
    const-string v2, "id"

    .line 167
    invoke-interface {v7, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v7, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    .line 168
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/foundation/db/t;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    const-string v4, "reward_report"

    const-string v5, "id = ?"

    const/4 v6, 0x1

    new-array v8, v6, [Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v9, 0x0

    aput-object v2, v8, v9

    invoke-virtual {v3, v4, v5, v8}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_10
    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_10} :catch_3
    .catchall {:try_start_10 .. :try_end_10} :catchall_2

    move-object v14, v1

    move v11, v6

    move-object v13, v7

    move v12, v9

    goto/16 :goto_0

    :catchall_2
    move-exception v0

    goto :goto_6

    :catch_3
    move-exception v0

    :goto_5
    move-object v13, v7

    goto :goto_7

    :catchall_3
    move-exception v0

    move-object/from16 v7, v16

    goto :goto_6

    :catch_4
    move-exception v0

    move-object/from16 v7, v16

    goto :goto_5

    :cond_b
    move-object v7, v13

    move-object v1, v14

    if-eqz v7, :cond_c

    .line 179
    :try_start_11
    invoke-interface {v7}, Landroid/database/Cursor;->close()V
    :try_end_11
    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_11} :catch_5
    .catchall {:try_start_11 .. :try_end_11} :catchall_7

    .line 171
    :catch_5
    :cond_c
    monitor-exit p0

    return-object v1

    :catchall_4
    move-exception v0

    move-object v7, v13

    :goto_6
    move-object v10, v7

    goto :goto_8

    :catch_6
    move-exception v0

    move-object v7, v13

    goto :goto_7

    :cond_d
    move-object v7, v13

    if-eqz v7, :cond_f

    .line 179
    :try_start_12
    invoke-interface {v7}, Landroid/database/Cursor;->close()V
    :try_end_12
    .catch Ljava/lang/Exception; {:try_start_12 .. :try_end_12} :catch_9
    .catchall {:try_start_12 .. :try_end_12} :catchall_7

    goto :goto_9

    :catchall_5
    move-exception v0

    const/4 v10, 0x0

    goto :goto_8

    :catch_7
    move-exception v0

    const/4 v13, 0x0

    .line 174
    :goto_7
    :try_start_13
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 175
    sget-object v1, Lcom/mbridge/msdk/foundation/db/t;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_13
    .catchall {:try_start_13 .. :try_end_13} :catchall_6

    if-eqz v13, :cond_f

    .line 179
    :try_start_14
    invoke-interface {v13}, Landroid/database/Cursor;->close()V
    :try_end_14
    .catch Ljava/lang/Exception; {:try_start_14 .. :try_end_14} :catch_9
    .catchall {:try_start_14 .. :try_end_14} :catchall_7

    goto :goto_9

    :catchall_6
    move-exception v0

    move-object v10, v13

    :goto_8
    if-eqz v10, :cond_e

    :try_start_15
    invoke-interface {v10}, Landroid/database/Cursor;->close()V
    :try_end_15
    .catch Ljava/lang/Exception; {:try_start_15 .. :try_end_15} :catch_8
    .catchall {:try_start_15 .. :try_end_15} :catchall_7

    .line 182
    :catch_8
    :cond_e
    :try_start_16
    throw v0
    :try_end_16
    .catchall {:try_start_16 .. :try_end_16} :catchall_7

    .line 185
    :catch_9
    :cond_f
    :goto_9
    monitor-exit p0

    const/4 v1, 0x0

    return-object v1

    :catchall_7
    move-exception v0

    monitor-exit p0

    throw v0
.end method
