.class public Lcom/mbridge/msdk/foundation/db/d;
.super Lcom/mbridge/msdk/foundation/db/a;
.source "CampaignClickTimeDao.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/mbridge/msdk/foundation/db/a<",
        "Lcom/mbridge/msdk/foundation/entity/e;",
        ">;"
    }
.end annotation


# static fields
.field private static a:Lcom/mbridge/msdk/foundation/db/d;


# direct methods
.method private constructor <init>(Lcom/mbridge/msdk/foundation/db/h;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/a;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/d;
    .locals 2

    .line 26
    sget-object v0, Lcom/mbridge/msdk/foundation/db/d;->a:Lcom/mbridge/msdk/foundation/db/d;

    if-nez v0, :cond_1

    .line 27
    const-class v0, Lcom/mbridge/msdk/foundation/db/d;

    monitor-enter v0

    .line 28
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/db/d;->a:Lcom/mbridge/msdk/foundation/db/d;

    if-nez v1, :cond_0

    .line 29
    new-instance v1, Lcom/mbridge/msdk/foundation/db/d;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/db/d;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    sput-object v1, Lcom/mbridge/msdk/foundation/db/d;->a:Lcom/mbridge/msdk/foundation/db/d;

    .line 31
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 33
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/db/d;->a:Lcom/mbridge/msdk/foundation/db/d;

    return-object p0
.end method


# virtual methods
.method public final declared-synchronized a()I
    .locals 4

    monitor-enter p0

    const/4 v0, 0x0

    const/4 v1, 0x0

    :try_start_0
    const-string v2, "select count(*) from click_time"

    .line 183
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/d;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    invoke-virtual {v3, v2, v0}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 185
    invoke-interface {v0}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 186
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    if-eqz v0, :cond_1

    .line 193
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

    .line 190
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 197
    :cond_1
    :goto_1
    monitor-exit p0

    return v1

    :goto_2
    if-eqz v0, :cond_2

    .line 193
    :try_start_3
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    .line 195
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
    .locals 27
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/e;",
            ">;"
        }
    .end annotation

    move/from16 v0, p1

    monitor-enter p0

    .line 77
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "select * from click_time LIMIT "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 80
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/foundation/db/d;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v3, 0x0

    if-nez v2, :cond_0

    .line 81
    monitor-exit p0

    return-object v3

    .line 84
    :cond_0
    :try_start_1
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/foundation/db/d;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    invoke-virtual {v2, v1, v3}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v1, :cond_4

    .line 85
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result v2

    if-lez v2, :cond_4

    .line 86
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const/4 v4, 0x0

    move v5, v4

    .line 88
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v6

    if-eqz v6, :cond_2

    if-lt v5, v0, :cond_1

    goto/16 :goto_1

    :cond_1
    add-int/lit8 v5, v5, 0x1

    const-string v6, "id"

    .line 93
    invoke-interface {v1, v6}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v6

    invoke-interface {v1, v6}, Landroid/database/Cursor;->getInt(I)I

    move-result v6

    const-string v7, "campaignId"

    .line 95
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 94
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v11

    const-string v7, "click_type"

    .line 97
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 96
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getInt(I)I

    move-result v19

    const-string v7, "click_duration"

    .line 99
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 98
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v12

    const-string v7, "last_url"

    .line 101
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 100
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v13

    const-string v7, "type"

    .line 102
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    invoke-interface {v1, v7}, Landroid/database/Cursor;->getInt(I)I

    move-result v18

    const-string v7, "code"

    .line 103
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    invoke-interface {v1, v7}, Landroid/database/Cursor;->getInt(I)I

    move-result v14

    const-string v7, "header"

    .line 105
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 104
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v16

    const-string v7, "exception"

    .line 107
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 106
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v15

    const-string v7, "content"

    .line 109
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 108
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v17

    const-string v7, "unit_id"

    .line 111
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 110
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v20

    const-string v7, "rid"

    .line 112
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    invoke-interface {v1, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v9

    const-string v7, "rid_n"

    .line 113
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    invoke-interface {v1, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v10

    const-string v7, "landing_type"

    .line 115
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 114
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getInt(I)I

    move-result v21

    const-string v7, "link_type"

    .line 117
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 116
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getInt(I)I

    move-result v22

    const-string v7, "network_type"

    .line 119
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 118
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getInt(I)I

    move-result v24

    const-string v7, "network_str"

    .line 121
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 120
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v26

    const-string v7, "market_result"

    .line 123
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 122
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getInt(I)I

    move-result v25

    const-string v7, "click_time"

    .line 125
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v7

    .line 124
    invoke-interface {v1, v7}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v23

    .line 126
    new-instance v7, Lcom/mbridge/msdk/foundation/entity/e;

    move-object v8, v7

    invoke-direct/range {v8 .. v26}, Lcom/mbridge/msdk/foundation/entity/e;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;IILjava/lang/String;IILjava/lang/String;)V

    .line 130
    invoke-interface {v2, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 131
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/foundation/db/d;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v7

    const-string v8, "click_time"

    const-string v9, "id = ?"

    const/4 v10, 0x1

    new-array v10, v10, [Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v10, v4

    invoke-virtual {v7, v8, v9, v10}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto/16 :goto_0

    :cond_2
    :goto_1
    if-eqz v1, :cond_3

    .line 141
    :try_start_3
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 135
    :cond_3
    monitor-exit p0

    return-object v2

    :catch_0
    move-exception v0

    goto :goto_3

    :cond_4
    if-eqz v1, :cond_5

    .line 141
    :goto_2
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_4

    :catchall_0
    move-exception v0

    goto :goto_5

    :catch_1
    move-exception v0

    move-object v1, v3

    .line 138
    :goto_3
    :try_start_5
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    if-eqz v1, :cond_5

    goto :goto_2

    .line 145
    :cond_5
    :goto_4
    monitor-exit p0

    return-object v3

    :catchall_1
    move-exception v0

    move-object v3, v1

    :goto_5
    if-eqz v3, :cond_6

    .line 141
    :try_start_6
    invoke-interface {v3}, Landroid/database/Cursor;->close()V

    .line 143
    :cond_6
    throw v0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :catchall_2
    move-exception v0

    monitor-exit p0

    throw v0
.end method
