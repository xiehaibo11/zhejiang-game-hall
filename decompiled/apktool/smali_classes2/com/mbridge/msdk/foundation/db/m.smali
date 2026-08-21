.class public Lcom/mbridge/msdk/foundation/db/m;
.super Lcom/mbridge/msdk/foundation/db/a;
.source "LoadTimeDao.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/mbridge/msdk/foundation/db/a<",
        "Lcom/mbridge/msdk/foundation/entity/j;",
        ">;"
    }
.end annotation


# static fields
.field private static a:Lcom/mbridge/msdk/foundation/db/m;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Lcom/mbridge/msdk/foundation/db/h;)V
    .locals 0

    .line 16
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/a;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/m;
    .locals 2

    .line 20
    sget-object v0, Lcom/mbridge/msdk/foundation/db/m;->a:Lcom/mbridge/msdk/foundation/db/m;

    if-nez v0, :cond_1

    .line 21
    const-class v0, Lcom/mbridge/msdk/foundation/db/m;

    monitor-enter v0

    .line 22
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/db/m;->a:Lcom/mbridge/msdk/foundation/db/m;

    if-nez v1, :cond_0

    .line 23
    new-instance v1, Lcom/mbridge/msdk/foundation/db/m;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/db/m;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    sput-object v1, Lcom/mbridge/msdk/foundation/db/m;->a:Lcom/mbridge/msdk/foundation/db/m;

    .line 26
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 28
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/db/m;->a:Lcom/mbridge/msdk/foundation/db/m;

    return-object p0
.end method


# virtual methods
.method public final declared-synchronized a()I
    .locals 4

    monitor-enter p0

    const/4 v0, 0x0

    const/4 v1, 0x0

    :try_start_0
    const-string v2, "select count(*) from load_stat"

    .line 42
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/m;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    invoke-virtual {v3, v2, v0}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 44
    invoke-interface {v0}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 45
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    if-eqz v0, :cond_1

    .line 52
    :goto_0
    :try_start_1
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_0
    move-exception v1

    goto :goto_2

    :catch_0
    move-exception v2

    .line 49
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 56
    :cond_1
    :goto_1
    monitor-exit p0

    return v1

    :goto_2
    if-eqz v0, :cond_2

    .line 52
    :try_start_3
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    .line 54
    :cond_2
    throw v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(I)Ljava/util/List;
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/j;",
            ">;"
        }
    .end annotation

    move/from16 v0, p1

    monitor-enter p0

    .line 61
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "select * from load_stat LIMIT "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v2, 0x0

    .line 65
    :try_start_1
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/foundation/db/m;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    invoke-virtual {v3, v1, v2}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v1, :cond_3

    .line 66
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result v3

    if-lez v3, :cond_3

    .line 67
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const/4 v2, 0x0

    move v4, v2

    .line 69
    :cond_0
    :goto_0
    :try_start_3
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v5

    if-eqz v5, :cond_2

    if-lt v4, v0, :cond_1

    goto/16 :goto_1

    :cond_1
    add-int/lit8 v4, v4, 0x1

    const-string v5, "ad_source_id"

    .line 75
    invoke-interface {v1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    invoke-interface {v1, v5}, Landroid/database/Cursor;->getInt(I)I

    move-result v7

    const-string v5, "time"

    .line 76
    invoke-interface {v1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    invoke-interface {v1, v5}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v8

    const-string v5, "adNum"

    .line 77
    invoke-interface {v1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    invoke-interface {v1, v5}, Landroid/database/Cursor;->getInt(I)I

    move-result v9

    const-string v5, "unitId"

    .line 79
    invoke-interface {v1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    .line 78
    invoke-interface {v1, v5}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v10

    const-string v5, "fb"

    .line 80
    invoke-interface {v1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    invoke-interface {v1, v5}, Landroid/database/Cursor;->getInt(I)I

    move-result v11

    const-string v5, "timeout"

    .line 81
    invoke-interface {v1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    invoke-interface {v1, v5}, Landroid/database/Cursor;->getInt(I)I

    move-result v12

    const-string v5, "network_type"

    .line 82
    invoke-interface {v1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    invoke-interface {v1, v5}, Landroid/database/Cursor;->getInt(I)I

    move-result v13

    const-string v5, "network_type_str"

    .line 83
    invoke-interface {v1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    invoke-interface {v1, v5}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v5

    const-string v6, "hb"

    .line 84
    invoke-interface {v1, v6}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v6

    invoke-interface {v1, v6}, Landroid/database/Cursor;->getInt(I)I

    move-result v14

    .line 85
    new-instance v15, Lcom/mbridge/msdk/foundation/entity/j;

    move-object v6, v15

    invoke-direct/range {v6 .. v13}, Lcom/mbridge/msdk/foundation/entity/j;-><init>(ILjava/lang/String;ILjava/lang/String;III)V

    .line 86
    invoke-virtual {v15, v5}, Lcom/mbridge/msdk/foundation/entity/j;->c(Ljava/lang/String;)V

    .line 87
    invoke-virtual {v15, v14}, Lcom/mbridge/msdk/foundation/entity/j;->a(I)V

    .line 88
    invoke-interface {v3, v15}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const-string v5, "id"

    .line 89
    invoke-interface {v1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    invoke-interface {v1, v5}, Landroid/database/Cursor;->getInt(I)I

    move-result v5

    .line 90
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/foundation/db/m;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v6

    if-eqz v6, :cond_0

    .line 91
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/foundation/db/m;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v6

    const-string v7, "load_stat"

    const-string v8, "id = ?"

    const/4 v9, 0x1

    new-array v9, v9, [Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ""

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v9, v2

    invoke-virtual {v6, v7, v8, v9}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto/16 :goto_0

    :cond_2
    :goto_1
    move-object v2, v3

    goto :goto_3

    :catch_0
    move-exception v0

    goto :goto_2

    :catchall_0
    move-exception v0

    move-object v2, v1

    goto :goto_6

    :catch_1
    move-exception v0

    move-object v3, v2

    :goto_2
    move-object v2, v1

    goto :goto_4

    :cond_3
    :goto_3
    if-eqz v1, :cond_5

    .line 100
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_5

    :catchall_1
    move-exception v0

    goto :goto_6

    :catch_2
    move-exception v0

    move-object v3, v2

    .line 97
    :goto_4
    :try_start_5
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    if-eqz v2, :cond_4

    .line 100
    :try_start_6
    invoke-interface {v2}, Landroid/database/Cursor;->close()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :cond_4
    move-object v2, v3

    .line 103
    :cond_5
    :goto_5
    monitor-exit p0

    return-object v2

    :goto_6
    if-eqz v2, :cond_6

    .line 100
    :try_start_7
    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    .line 102
    :cond_6
    throw v0
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    :catchall_2
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(Lcom/mbridge/msdk/foundation/entity/j;)V
    .locals 3

    monitor-enter p0

    .line 114
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/m;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 115
    monitor-exit p0

    return-void

    .line 117
    :cond_0
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v1, "time"

    .line 118
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/j;->c()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "ad_source_id"

    .line 119
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/j;->b()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "adNum"

    .line 120
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/j;->d()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "unitId"

    .line 121
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/j;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "fb"

    .line 122
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/j;->f()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "hb"

    .line 123
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/j;->a()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "timeout"

    .line 124
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/j;->g()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "network_type"

    .line 125
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/j;->h()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "network_type_str"

    .line 126
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/j;->i()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 128
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/m;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v1, "load_stat"

    const/4 v2, 0x0

    invoke-virtual {p1, v1, v2, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 129
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
