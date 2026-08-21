.class public final Lcom/mbridge/msdk/foundation/db/e;
.super Lcom/mbridge/msdk/foundation/db/a;
.source "CampaignDAIDao.java"


# static fields
.field private static a:Lcom/mbridge/msdk/foundation/db/e;


# instance fields
.field private b:I


# direct methods
.method private constructor <init>(Lcom/mbridge/msdk/foundation/db/h;)V
    .locals 0

    .line 19
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/a;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    const/16 p1, 0x64

    .line 15
    iput p1, p0, Lcom/mbridge/msdk/foundation/db/e;->b:I

    return-void
.end method

.method public static declared-synchronized a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/e;
    .locals 3

    const-class v0, Lcom/mbridge/msdk/foundation/db/e;

    monitor-enter v0

    .line 23
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/db/e;->a:Lcom/mbridge/msdk/foundation/db/e;

    if-nez v1, :cond_1

    .line 24
    const-class v1, Lcom/mbridge/msdk/foundation/db/c;

    monitor-enter v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 25
    :try_start_1
    sget-object v2, Lcom/mbridge/msdk/foundation/db/e;->a:Lcom/mbridge/msdk/foundation/db/e;

    if-nez v2, :cond_0

    .line 26
    new-instance v2, Lcom/mbridge/msdk/foundation/db/e;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/foundation/db/e;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    sput-object v2, Lcom/mbridge/msdk/foundation/db/e;->a:Lcom/mbridge/msdk/foundation/db/e;

    .line 28
    :cond_0
    monitor-exit v1

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p0

    .line 30
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/db/e;->a:Lcom/mbridge/msdk/foundation/db/e;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    monitor-exit v0

    return-object p0

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private declared-synchronized m(Ljava/lang/String;)Z
    .locals 3

    monitor-enter p0

    .line 455
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SELECT id FROM campaignDAIDao WHERE unique_key=\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 459
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    invoke-virtual {v2, p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 460
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_0

    .line 461
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    const/4 p1, 0x1

    move v0, p1

    goto :goto_0

    :cond_0
    if-eqz v1, :cond_1

    .line 465
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_1
    :goto_0
    if-eqz v1, :cond_2

    .line 472
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_2

    .line 473
    :goto_1
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_3

    :catch_0
    move-exception p1

    .line 470
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_2

    .line 472
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-nez p1, :cond_2

    goto :goto_1

    .line 476
    :cond_2
    :goto_2
    monitor-exit p0

    return v0

    :goto_3
    if-eqz v1, :cond_3

    .line 472
    :try_start_5
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_3

    .line 473
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 475
    :cond_3
    throw p1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final declared-synchronized a()Lcom/mbridge/msdk/foundation/entity/f;
    .locals 13

    monitor-enter p0

    .line 178
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 179
    monitor-exit p0

    return-object v1

    .line 183
    :cond_0
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "save_path"

    const-string v5, "url"

    const-string v6, "unique_key"

    const-string v7, "rid"

    const-string v8, "package_name"

    const-string v9, "rid_n"

    const-string v10, "id"

    const-string v11, "unitid"

    filled-new-array/range {v4 .. v11}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "status = ?"

    const-string v0, "10"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v0, :cond_1

    .line 184
    :try_start_2
    invoke-interface {v0}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v0}, Landroid/database/Cursor;->getCount()I

    move-result v2

    if-lez v2, :cond_1

    .line 185
    new-instance v2, Lcom/mbridge/msdk/foundation/entity/f;

    invoke-direct {v2}, Lcom/mbridge/msdk/foundation/entity/f;-><init>()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const/4 v1, 0x0

    .line 186
    :try_start_3
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/entity/f;->a(Ljava/lang/String;)V

    const/4 v1, 0x1

    .line 187
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/entity/f;->b(Ljava/lang/String;)V

    const/4 v1, 0x2

    .line 188
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/entity/f;->c(Ljava/lang/String;)V

    const/4 v1, 0x3

    .line 189
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/entity/f;->d(Ljava/lang/String;)V

    const/4 v1, 0x4

    .line 190
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/entity/f;->e(Ljava/lang/String;)V

    const/4 v1, 0x5

    .line 191
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/entity/f;->f(Ljava/lang/String;)V

    const/4 v1, 0x6

    .line 192
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/entity/f;->h(Ljava/lang/String;)V

    const/4 v1, 0x7

    .line 193
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/entity/f;->g(Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    move-object v1, v2

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_1

    :catch_1
    move-exception v2

    move-object v12, v2

    move-object v2, v1

    move-object v1, v12

    goto :goto_1

    :cond_1
    :goto_0
    if-eqz v0, :cond_3

    .line 198
    :try_start_4
    invoke-interface {v0}, Landroid/database/Cursor;->isClosed()Z

    move-result v2

    if-nez v2, :cond_3

    .line 199
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_2

    :catchall_0
    move-exception v0

    move-object v12, v1

    move-object v1, v0

    move-object v0, v12

    goto :goto_3

    :catch_2
    move-exception v0

    move-object v2, v1

    move-object v1, v0

    move-object v0, v2

    .line 196
    :goto_1
    :try_start_5
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    if-eqz v0, :cond_2

    .line 198
    :try_start_6
    invoke-interface {v0}, Landroid/database/Cursor;->isClosed()Z

    move-result v1

    if-nez v1, :cond_2

    .line 199
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :cond_2
    move-object v1, v2

    .line 202
    :cond_3
    :goto_2
    monitor-exit p0

    return-object v1

    :catchall_1
    move-exception v1

    :goto_3
    if-eqz v0, :cond_4

    .line 198
    :try_start_7
    invoke-interface {v0}, Landroid/database/Cursor;->isClosed()Z

    move-result v2

    if-nez v2, :cond_4

    .line 199
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    .line 201
    :cond_4
    throw v1
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    :catchall_2
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 4

    monitor-enter p0

    if-eqz p1, :cond_1

    .line 35
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 37
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 38
    monitor-exit p0

    return-void

    .line 40
    :cond_0
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v1, "unique_key"

    .line 41
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "id"

    .line 42
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "atat_type"

    .line 43
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAtatType()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "ntbarpasbl"

    .line 44
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNtbarpasbl()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "ntbarpt"

    .line 45
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNtbarpt()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "package_name"

    .line 46
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "rid"

    .line 47
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "rid_n"

    .line 48
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "unitid"

    .line 49
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "url"

    .line 50
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "status"

    const/4 v2, -0x1

    .line 51
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "progress"

    .line 52
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "save_path"

    const-string v2, ""

    .line 53
    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "app_name"

    .line 54
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 55
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v1, "campaignDAIDao"

    const/4 v2, 0x0

    invoke-virtual {p1, v1, v2, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 57
    :cond_1
    :goto_0
    monitor-exit p0

    return-void
.end method

.method public final declared-synchronized a(Ljava/lang/String;)V
    .locals 1

    monitor-enter p0

    const/16 v0, 0xa

    .line 102
    :try_start_0
    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/foundation/db/e;->a(Ljava/lang/String;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 103
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/lang/String;I)V
    .locals 3

    monitor-enter p0

    .line 107
    :try_start_0
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 108
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 109
    monitor-exit p0

    return-void

    .line 111
    :cond_0
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "unique_key = \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 112
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    if-eqz p2, :cond_1

    const-string v1, "status"

    .line 114
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {v0, v1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 116
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p2

    const-string v1, "campaignDAIDao"

    const/4 v2, 0x0

    invoke-virtual {p2, v1, v0, p1, v2}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 118
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    monitor-enter p0

    .line 83
    :try_start_0
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 84
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 85
    monitor-exit p0

    return-void

    .line 87
    :cond_0
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "unique_key = \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 88
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    .line 89
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "url"

    .line 90
    invoke-virtual {v0, v1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 92
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p2

    const-string v1, "campaignDAIDao"

    const/4 v2, 0x0

    invoke-virtual {p2, v1, v0, p1, v2}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 94
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b(Ljava/lang/String;)Ljava/lang/String;
    .locals 11

    monitor-enter p0

    :try_start_0
    const-string v0, ""

    .line 155
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 156
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_0

    .line 157
    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 161
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "url"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "unique_key = ?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    const/4 v10, 0x0

    aput-object p1, v6, v10

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 162
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 163
    invoke-interface {v1, v10}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v0, p1

    :cond_1
    if-eqz v1, :cond_3

    .line 168
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    .line 169
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 166
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_3

    .line 168
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    :goto_1
    if-eqz v1, :cond_2

    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_2

    .line 169
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 171
    :cond_2
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 173
    :cond_3
    :goto_2
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b(Ljava/lang/String;I)V
    .locals 3

    monitor-enter p0

    if-gtz p2, :cond_0

    .line 122
    :try_start_0
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 123
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_1

    .line 124
    monitor-exit p0

    return-void

    .line 126
    :cond_1
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "unique_key = \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 127
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    if-lez p2, :cond_2

    const-string v1, "progress"

    .line 130
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {v0, v1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 131
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p2

    const-string v1, "campaignDAIDao"

    const/4 v2, 0x0

    invoke-virtual {p2, v1, v0, p1, v2}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 135
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    monitor-enter p0

    .line 138
    :try_start_0
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 139
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 140
    monitor-exit p0

    return-void

    .line 142
    :cond_0
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "unique_key = \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 143
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    .line 144
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "save_path"

    .line 145
    invoke-virtual {v0, v1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 147
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p2

    const-string v1, "campaignDAIDao"

    const/4 v2, 0x0

    invoke-virtual {p2, v1, v0, p1, v2}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 149
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized c(Ljava/lang/String;)I
    .locals 10

    monitor-enter p0

    .line 207
    :try_start_0
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    .line 208
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_0

    .line 209
    monitor-exit p0

    return v1

    :cond_0
    const/4 v0, 0x0

    .line 213
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "status"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "unique_key = ?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    aput-object p1, v6, v1

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 214
    invoke-interface {v0}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_1

    invoke-interface {v0}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 215
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move v1, p1

    :cond_1
    if-eqz v0, :cond_3

    .line 220
    :try_start_2
    invoke-interface {v0}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    .line 221
    :goto_0
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 218
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v0, :cond_3

    .line 220
    :try_start_4
    invoke-interface {v0}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    :goto_1
    if-eqz v0, :cond_2

    invoke-interface {v0}, Landroid/database/Cursor;->isClosed()Z

    move-result v1

    if-nez v1, :cond_2

    .line 221
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    .line 223
    :cond_2
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 225
    :cond_3
    :goto_2
    monitor-exit p0

    return v1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized d(Ljava/lang/String;)Ljava/lang/String;
    .locals 11

    monitor-enter p0

    :try_start_0
    const-string v0, ""

    .line 230
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 231
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_0

    .line 232
    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 236
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "rid"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "unique_key = ?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    const/4 v10, 0x0

    aput-object p1, v6, v10

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 237
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 238
    invoke-interface {v1, v10}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v0, p1

    :cond_1
    if-eqz v1, :cond_3

    .line 243
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    .line 244
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 241
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_3

    .line 243
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    :goto_1
    if-eqz v1, :cond_2

    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_2

    .line 244
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 246
    :cond_2
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 248
    :cond_3
    :goto_2
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized e(Ljava/lang/String;)Ljava/lang/String;
    .locals 11

    monitor-enter p0

    :try_start_0
    const-string v0, ""

    .line 253
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 254
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_0

    .line 255
    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 259
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "rid_n"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "unique_key = ?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    const/4 v10, 0x0

    aput-object p1, v6, v10

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 260
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 261
    invoke-interface {v1, v10}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v0, p1

    :cond_1
    if-eqz v1, :cond_3

    .line 266
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    .line 267
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 264
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_3

    .line 266
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    :goto_1
    if-eqz v1, :cond_2

    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_2

    .line 267
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 269
    :cond_2
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 271
    :cond_3
    :goto_2
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized f(Ljava/lang/String;)Ljava/lang/String;
    .locals 11

    monitor-enter p0

    :try_start_0
    const-string v0, ""

    .line 276
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 277
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_0

    .line 278
    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 282
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "unitid"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "unique_key = ?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    const/4 v10, 0x0

    aput-object p1, v6, v10

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 283
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 284
    invoke-interface {v1, v10}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v0, p1

    :cond_1
    if-eqz v1, :cond_3

    .line 289
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    .line 290
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 287
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_3

    .line 289
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    :goto_1
    if-eqz v1, :cond_2

    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_2

    .line 290
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 292
    :cond_2
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 294
    :cond_3
    :goto_2
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized g(Ljava/lang/String;)Ljava/lang/String;
    .locals 11

    monitor-enter p0

    :try_start_0
    const-string v0, ""

    .line 299
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 300
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_0

    .line 301
    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 305
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "id"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "unique_key = ?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    const/4 v10, 0x0

    aput-object p1, v6, v10

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 306
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 307
    invoke-interface {v1, v10}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v0, p1

    :cond_1
    if-eqz v1, :cond_3

    .line 312
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    .line 313
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 310
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_3

    .line 312
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    :goto_1
    if-eqz v1, :cond_2

    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_2

    .line 313
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 315
    :cond_2
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 317
    :cond_3
    :goto_2
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized h(Ljava/lang/String;)Ljava/lang/String;
    .locals 11

    monitor-enter p0

    :try_start_0
    const-string v0, ""

    .line 345
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 346
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_0

    .line 347
    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 351
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "package_name"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "unique_key = ?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    const/4 v10, 0x0

    aput-object p1, v6, v10

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 352
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 353
    invoke-interface {v1, v10}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v0, p1

    :cond_1
    if-eqz v1, :cond_3

    .line 358
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    .line 359
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 356
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_3

    .line 358
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    :goto_1
    if-eqz v1, :cond_2

    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_2

    .line 359
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 361
    :cond_2
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 363
    :cond_3
    :goto_2
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized i(Ljava/lang/String;)Ljava/lang/String;
    .locals 11

    monitor-enter p0

    :try_start_0
    const-string v0, ""

    .line 367
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->m(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 368
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_0

    .line 369
    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 373
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "save_path"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "unique_key = ?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    const/4 v10, 0x0

    aput-object p1, v6, v10

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 374
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 375
    invoke-interface {v1, v10}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v0, p1

    :cond_1
    if-eqz v1, :cond_3

    .line 380
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    .line 381
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 378
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_3

    .line 380
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    :goto_1
    if-eqz v1, :cond_2

    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_2

    .line 381
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 383
    :cond_2
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 385
    :cond_3
    :goto_2
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized j(Ljava/lang/String;)I
    .locals 11

    monitor-enter p0

    const/4 v0, -0x2

    .line 390
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_0

    .line 391
    monitor-exit p0

    return v0

    :cond_0
    const/4 v1, 0x0

    .line 395
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "atat_type"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "package_name = ?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    const/4 v10, 0x0

    aput-object p1, v6, v10

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 396
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 397
    invoke-interface {v1, v10}, Landroid/database/Cursor;->getInt(I)I

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move v0, p1

    :cond_1
    if-eqz v1, :cond_2

    .line 402
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_2

    .line 403
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_0
    move-exception p1

    goto :goto_2

    :catch_0
    move-exception p1

    .line 400
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_2

    .line 402
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-nez p1, :cond_2

    goto :goto_0

    .line 406
    :cond_2
    :goto_1
    monitor-exit p0

    return v0

    :goto_2
    if-eqz v1, :cond_3

    .line 402
    :try_start_5
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_3

    .line 403
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 405
    :cond_3
    throw p1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized k(Ljava/lang/String;)Ljava/lang/String;
    .locals 11

    monitor-enter p0

    :try_start_0
    const-string v0, ""

    .line 412
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_0

    .line 413
    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 417
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "app_name"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "package_name = ?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    const/4 v10, 0x0

    aput-object p1, v6, v10

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 418
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 419
    invoke-interface {v1, v10}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v0, p1

    :cond_1
    if-eqz v1, :cond_2

    .line 424
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_2

    .line 425
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_0
    move-exception p1

    goto :goto_2

    :catch_0
    move-exception p1

    .line 422
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_2

    .line 424
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-nez p1, :cond_2

    goto :goto_0

    .line 428
    :cond_2
    :goto_1
    monitor-exit p0

    return-object v0

    :goto_2
    if-eqz v1, :cond_3

    .line 424
    :try_start_5
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_3

    .line 425
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 427
    :cond_3
    throw p1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized l(Ljava/lang/String;)Ljava/lang/String;
    .locals 11

    monitor-enter p0

    :try_start_0
    const-string v0, ""

    .line 434
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_0

    .line 435
    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 439
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/e;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "campaignDAIDao"

    const-string v4, "unique_key"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "package_name = ?"

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    const/4 v10, 0x0

    aput-object p1, v6, v10

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "unique_key"

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 440
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    if-lez p1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 441
    invoke-interface {v1, v10}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v0, p1

    :cond_1
    if-eqz v1, :cond_2

    .line 446
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_2

    .line 447
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_0
    move-exception p1

    goto :goto_2

    :catch_0
    move-exception p1

    .line 444
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_2

    .line 446
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-nez p1, :cond_2

    goto :goto_0

    .line 450
    :cond_2
    :goto_1
    monitor-exit p0

    return-object v0

    :goto_2
    if-eqz v1, :cond_3

    .line 446
    :try_start_5
    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_3

    .line 447
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 449
    :cond_3
    throw p1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method
