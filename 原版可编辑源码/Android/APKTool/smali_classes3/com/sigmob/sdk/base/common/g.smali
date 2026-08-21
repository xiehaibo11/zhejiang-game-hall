.class public Lcom/sigmob/sdk/base/common/g;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/common/g$a;
    }
.end annotation


# static fields
.field private static final serialVersionUID:J = 0x1L


# instance fields
.field private final a:Lcom/sigmob/sdk/base/common/g$a;

.field private final b:Ljava/lang/String;

.field private final c:Lcom/sigmob/sdk/base/common/a;

.field private final d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/Long;

.field private g:Ljava/lang/Long;

.field private h:Ljava/lang/Integer;

.field private i:Ljava/lang/Integer;

.field private j:Ljava/lang/String;

.field private k:Z


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/base/common/g$a;Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/common/a;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p5, p0, Lcom/sigmob/sdk/base/common/g;->d:Ljava/lang/String;

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/g;->a:Lcom/sigmob/sdk/base/common/g$a;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/g;->j:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/common/g;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/sigmob/sdk/base/common/g;->c:Lcom/sigmob/sdk/base/common/a;

    const-string p1, "native"

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/g;->e:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/common/g$a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    const/4 v4, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v5, p4

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/base/common/g;-><init>(Lcom/sigmob/sdk/base/common/g$a;Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/common/a;Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/g$a;->a:Lcom/sigmob/sdk/base/common/g$a;

    invoke-direct {p0, v0, p1, p2, p3}, Lcom/sigmob/sdk/base/common/g;-><init>(Lcom/sigmob/sdk/base/common/g$a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static a()Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable;
    .locals 5

    new-instance v0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;-><init>()V

    const-string v1, "tracks"

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->setTableName(Ljava/lang/String;)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;

    const-string v1, "long"

    const-string v2, "id"

    invoke-virtual {v0, v2, v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->setPrimaryKey(Ljava/lang/String;Ljava/lang/String;)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->autoincrement(Z)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;

    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    const-string v3, "text"

    const-string v4, "url"

    invoke-interface {v2, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "event"

    invoke-interface {v2, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "request_id"

    invoke-interface {v2, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "timestamp"

    invoke-interface {v2, v4, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "source"

    invoke-interface {v2, v1, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "retryNum"

    const-string v3, "int"

    invoke-interface {v2, v1, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v0, v2}, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->setColumns(Ljava/util/Map;)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;

    invoke-virtual {v0}, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->build()Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable;

    move-result-object v0

    return-object v0
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/g;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/g;->b:Ljava/lang/String;

    return-object p0
.end method

.method public static a(IJ)Ljava/util/List;
    .locals 21
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(IJ)",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/common/g;",
            ">;"
        }
    .end annotation

    move/from16 v1, p0

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const/4 v3, 0x0

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/db/a;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "select * from tracks where timestamp > "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    sub-long v5, v5, p1

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v5, " order by id desc limit "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4, v3}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v3

    const/4 v0, 0x0

    if-eqz v3, :cond_4

    invoke-interface {v3}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v4

    if-eqz v4, :cond_4

    const-string v4, "url"

    invoke-interface {v3, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    const-string v5, "id"

    invoke-interface {v3, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    const-string v6, "event"

    invoke-interface {v3, v6}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v6

    const-string v7, "request_id"

    invoke-interface {v3, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    const-string v8, "timestamp"

    invoke-interface {v3, v8}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v8

    const-string v9, "source"

    invoke-interface {v3, v9}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v9

    const-string v10, "retryNum"

    invoke-interface {v3, v10}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v10
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    move v11, v0

    :goto_0
    if-ge v11, v1, :cond_4

    :try_start_1
    invoke-interface {v3, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-interface {v3, v5}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v12

    invoke-static {v12, v13}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v12

    invoke-interface {v3, v6}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v13

    invoke-interface {v3, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v14

    invoke-interface {v3, v8}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v15

    invoke-static/range {v15 .. v16}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v15

    invoke-interface {v3, v9}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v3, v10}, Landroid/database/Cursor;->getInt(I)I

    move-result v16

    invoke-static/range {v16 .. v16}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v17

    if-nez v17, :cond_2

    invoke-virtual {v12}, Ljava/lang/Long;->longValue()J

    move-result-wide v17

    const-wide/16 v19, 0x0

    cmp-long v17, v17, v19

    if-ltz v17, :cond_2

    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v17

    if-nez v17, :cond_2

    invoke-static {v14}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v17
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v17, :cond_0

    goto :goto_1

    :cond_0
    move/from16 p1, v4

    :try_start_2
    new-instance v4, Lcom/sigmob/sdk/base/common/g;

    invoke-direct {v4, v0, v13, v14}, Lcom/sigmob/sdk/base/common/g;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v4, v12}, Lcom/sigmob/sdk/base/common/g;->b(Ljava/lang/Long;)V

    invoke-virtual/range {v16 .. v16}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-direct {v4, v0}, Lcom/sigmob/sdk/base/common/g;->a(I)V

    invoke-virtual {v4, v15}, Lcom/sigmob/sdk/base/common/g;->a(Ljava/lang/Long;)V

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {v4, v1}, Lcom/sigmob/sdk/base/common/g;->a(Ljava/lang/String;)V

    :cond_1
    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v0

    goto :goto_2

    :cond_2
    :goto_1
    move/from16 p1, v4

    goto :goto_4

    :catchall_1
    move-exception v0

    move/from16 p1, v4

    :goto_2
    :try_start_3
    const-string v1, "getAdTrackList error"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_3
    invoke-interface {v3}, Landroid/database/Cursor;->moveToNext()Z

    move-result v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-nez v0, :cond_3

    goto :goto_5

    :cond_3
    add-int/lit8 v11, v11, 0x1

    :goto_4
    move/from16 v1, p0

    move/from16 v4, p1

    goto/16 :goto_0

    :cond_4
    :goto_5
    if-eqz v3, :cond_5

    goto :goto_6

    :catchall_2
    move-exception v0

    :try_start_4
    const-string v1, "getlogs fail"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    if-eqz v3, :cond_5

    :goto_6
    invoke-interface {v3}, Landroid/database/Cursor;->close()V

    :cond_5
    return-object v2

    :catchall_3
    move-exception v0

    if-eqz v3, :cond_6

    invoke-interface {v3}, Landroid/database/Cursor;->close()V

    :cond_6
    throw v0
.end method

.method private a(I)V
    .locals 0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/g;->i:Ljava/lang/Integer;

    return-void
.end method

.method public static a(J)V
    .locals 3

    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "timestamp < "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sub-long/2addr v1, p0

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {}, Lcom/czhj/sdk/common/Database/DBOperator;->getInstance()Lcom/czhj/sdk/common/Database/DBOperator;

    move-result-object p1

    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/db/a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "tracks"

    new-instance v2, Lcom/sigmob/sdk/base/common/g$1;

    invoke-direct {v2}, Lcom/sigmob/sdk/base/common/g$1;-><init>()V

    invoke-virtual {p1, v0, v1, p0, v2}, Lcom/czhj/sdk/common/Database/DBOperator;->delete(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/Database/SQLiteLisenter;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    const-string p1, "cleanExpiredAdTracker error"

    invoke-static {p1, p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/common/g;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/g;->j:Ljava/lang/String;

    return-object p0
.end method

.method public static b(J)V
    .locals 5

    const-wide/16 v0, 0x0

    const/4 v2, 0x0

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/db/a;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    const-string v4, "select * from tracks"

    invoke-virtual {v3, v4, v2}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-eqz v4, :cond_0

    :try_start_1
    invoke-interface {v4}, Landroid/database/Cursor;->getCount()I

    move-result v0

    int-to-long v0, v0

    invoke-interface {v4}, Landroid/database/Cursor;->close()V

    move-object v4, v2

    goto :goto_0

    :catchall_0
    move-exception p0

    move-object v2, v4

    goto/16 :goto_3

    :cond_0
    :goto_0
    cmp-long v0, v0, p0

    if-lez v0, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "select * from tracks order by id desc limit "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v3, p0, v2}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    const-string p1, "id"

    invoke-interface {p0, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    if-eqz p0, :cond_2

    invoke-interface {p0}, Landroid/database/Cursor;->moveToLast()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p0, p1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-interface {p0}, Landroid/database/Cursor;->close()V

    move-object p0, v2

    move-object v2, p1

    goto :goto_1

    :cond_1
    move-object p0, v4

    :cond_2
    :goto_1
    if-eqz v2, :cond_3

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "id <\'"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, "\'"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {}, Lcom/czhj/sdk/common/Database/DBOperator;->getInstance()Lcom/czhj/sdk/common/Database/DBOperator;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/db/a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "tracks"

    new-instance v3, Lcom/sigmob/sdk/base/common/g$2;

    invoke-direct {v3}, Lcom/sigmob/sdk/base/common/g$2;-><init>()V

    invoke-virtual {v0, v1, v2, p1, v3}, Lcom/czhj/sdk/common/Database/DBOperator;->delete(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/Database/SQLiteLisenter;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception p1

    move-object v2, p0

    move-object p0, p1

    goto :goto_3

    :cond_3
    :goto_2
    if-eqz p0, :cond_4

    invoke-interface {p0}, Landroid/database/Cursor;->close()V

    goto :goto_4

    :catchall_2
    move-exception p0

    :goto_3
    :try_start_3
    const-string p1, "cleanLimitAdTracker "

    invoke-static {p1, p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    if-eqz v2, :cond_4

    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    :cond_4
    :goto_4
    return-void

    :catchall_3
    move-exception p0

    if-eqz v2, :cond_5

    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    :cond_5
    throw p0
.end method

.method private b(Ljava/lang/Long;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/g;->f:Ljava/lang/Long;

    return-void
.end method

.method static synthetic c(Lcom/sigmob/sdk/base/common/g;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/g;->d:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/base/common/g;)Ljava/lang/Long;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/g;->f:Ljava/lang/Long;

    return-object p0
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/db/a$a;)V
    .locals 5

    :try_start_0
    new-instance v0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;-><init>()V

    const-string v1, "tracks"

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->setTableName(Ljava/lang/String;)V

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const-string v2, "url"

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/g;->j:Ljava/lang/String;

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "request_id"

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/g;->d:Ljava/lang/String;

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "event"

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/g;->b:Ljava/lang/String;

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "source"

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/g;->e:Ljava/lang/String;

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "retryNum"

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/g;->i:Ljava/lang/Integer;

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "timestamp"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->setColumnValues(Ljava/util/Map;)V

    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v1

    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/db/a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    invoke-virtual {v0}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->build()Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;

    move-result-object v0

    new-instance v3, Lcom/sigmob/sdk/base/common/g$3;

    invoke-direct {v3, p0, p1}, Lcom/sigmob/sdk/base/common/g$3;-><init>(Lcom/sigmob/sdk/base/common/g;Lcom/sigmob/sdk/base/db/a$a;)V

    invoke-virtual {v1, v2, v0, v3}, Lcom/sigmob/sdk/base/db/a;->a(Landroid/database/sqlite/SQLiteDatabase;Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;Lcom/sigmob/sdk/base/db/a$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public a(Ljava/lang/Integer;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/g;->h:Ljava/lang/Integer;

    return-void
.end method

.method public a(Ljava/lang/Long;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/g;->g:Ljava/lang/Long;

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/g;->e:Ljava/lang/String;

    return-void
.end method

.method public b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->e:Ljava/lang/String;

    return-object v0
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/g;->j:Ljava/lang/String;

    return-void
.end method

.method public c()I
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->i:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public d()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->i:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/g;->i:Ljava/lang/Integer;

    return-void
.end method

.method public e()V
    .locals 4

    :try_start_0
    new-instance v0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;-><init>()V

    const-string v1, "tracks"

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->setTableName(Ljava/lang/String;)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, " where id="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/g;->f:Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->setWhere(Ljava/lang/String;)V

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const-string v2, "retryNum"

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/g;->i:Ljava/lang/Integer;

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->setColumnValues(Ljava/util/Map;)V

    invoke-virtual {v0}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->build()Lcom/czhj/sdk/common/Database/SQLiteBuider$Update;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update;->getSql()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v1

    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/db/a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v0, v3}, Lcom/sigmob/sdk/base/db/a;->a(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Lcom/sigmob/sdk/base/db/a$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public f()Ljava/lang/Long;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->f:Ljava/lang/Long;

    return-object v0
.end method

.method public g()V
    .locals 5

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->f:Ljava/lang/Long;

    if-nez v0, :cond_0

    return-void

    :cond_0
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "id =\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/g;->f:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/czhj/sdk/common/Database/DBOperator;->getInstance()Lcom/czhj/sdk/common/Database/DBOperator;

    move-result-object v1

    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/db/a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "tracks"

    new-instance v4, Lcom/sigmob/sdk/base/common/g$4;

    invoke-direct {v4, p0}, Lcom/sigmob/sdk/base/common/g$4;-><init>(Lcom/sigmob/sdk/base/common/g;)V

    invoke-virtual {v1, v2, v3, v0, v4}, Lcom/czhj/sdk/common/Database/DBOperator;->delete(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/Database/SQLiteLisenter;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public h()J
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->g:Ljava/lang/Long;

    if-nez v0, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    return-wide v0
.end method

.method public i()Lcom/sigmob/sdk/base/common/g$a;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->a:Lcom/sigmob/sdk/base/common/g$a;

    return-object v0
.end method

.method public j()Ljava/lang/Integer;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->h:Ljava/lang/Integer;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method public k()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->j:Ljava/lang/String;

    return-object v0
.end method

.method public l()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/common/g;->k:Z

    return-void
.end method

.method public m()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/common/g;->k:Z

    return v0
.end method

.method public n()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->b:Ljava/lang/String;

    return-object v0
.end method

.method public o()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->d:Ljava/lang/String;

    return-object v0
.end method

.method public p()Lcom/sigmob/sdk/base/common/a;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g;->c:Lcom/sigmob/sdk/base/common/a;

    return-object v0
.end method
