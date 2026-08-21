.class public Lcom/mbridge/msdk/foundation/db/q;
.super Lcom/mbridge/msdk/foundation/db/a;
.source "SettingCampaignDao.java"


# static fields
.field private static a:Lcom/mbridge/msdk/foundation/db/q;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Lcom/mbridge/msdk/foundation/db/h;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/a;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/q;
    .locals 2

    .line 25
    sget-object v0, Lcom/mbridge/msdk/foundation/db/q;->a:Lcom/mbridge/msdk/foundation/db/q;

    if-nez v0, :cond_1

    .line 26
    const-class v0, Lcom/mbridge/msdk/foundation/db/q;

    monitor-enter v0

    .line 27
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/db/q;->a:Lcom/mbridge/msdk/foundation/db/q;

    if-nez v1, :cond_0

    .line 28
    new-instance v1, Lcom/mbridge/msdk/foundation/db/q;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/db/q;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    sput-object v1, Lcom/mbridge/msdk/foundation/db/q;->a:Lcom/mbridge/msdk/foundation/db/q;

    .line 30
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 32
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/db/q;->a:Lcom/mbridge/msdk/foundation/db/q;

    return-object p0
.end method


# virtual methods
.method public final declared-synchronized a()I
    .locals 10

    monitor-enter p0

    :try_start_0
    const-string v0, " count(*) "

    .line 36
    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v0, 0x0

    const/4 v9, 0x0

    .line 41
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/q;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "settingCampaign"

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 43
    invoke-interface {v0}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 44
    invoke-interface {v0, v9}, Landroid/database/Cursor;->getInt(I)I

    move-result v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move v9, v1

    :cond_0
    if-eqz v0, :cond_1

    .line 51
    :goto_0
    :try_start_2
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_0
    move-exception v1

    goto :goto_2

    :catch_0
    move-exception v1

    .line 48
    :try_start_3
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 55
    :cond_1
    :goto_1
    monitor-exit p0

    return v9

    :goto_2
    if-eqz v0, :cond_2

    .line 51
    :try_start_4
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    .line 53
    :cond_2
    throw v1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(Ljava/lang/String;)I
    .locals 4

    monitor-enter p0

    const/4 v0, -0x1

    :try_start_0
    const-string v1, "id=?"

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/String;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    .line 73
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/q;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_0

    .line 74
    monitor-exit p0

    return v0

    .line 76
    :cond_0
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/q;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v3, "settingCampaign"

    invoke-virtual {p1, v3, v1, v2}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 79
    :catch_0
    monitor-exit p0

    return v0
.end method

.method public final declared-synchronized a(Lcom/mbridge/msdk/foundation/entity/n;)J
    .locals 5

    monitor-enter p0

    const-wide/16 v0, -0x1

    .line 140
    :try_start_0
    new-instance v2, Landroid/content/ContentValues;

    invoke-direct {v2}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "url"

    .line 141
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/n;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "method"

    .line 142
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/n;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "data"

    .line 143
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/n;->d()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "iex"

    .line 144
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/n;->a()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, v3, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/q;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_0

    .line 146
    monitor-exit p0

    return-wide v0

    .line 148
    :cond_0
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/q;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v3, "settingCampaign"

    const/4 v4, 0x0

    invoke-virtual {p1, v3, v4, v2}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-wide v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 151
    :catch_0
    monitor-exit p0

    return-wide v0
.end method

.method public final declared-synchronized b()I
    .locals 4

    monitor-enter p0

    const/4 v0, -0x1

    .line 60
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/q;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_0

    .line 61
    monitor-exit p0

    return v0

    .line 63
    :cond_0
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/q;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "settingCampaign"

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3, v3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0

    .line 66
    :catch_0
    monitor-exit p0

    return v0
.end method

.method public final declared-synchronized b(Ljava/lang/String;)I
    .locals 4

    monitor-enter p0

    const/4 v0, -0x1

    :try_start_0
    const-string v1, "iex=?"

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/String;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    .line 86
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/q;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_0

    .line 87
    monitor-exit p0

    return v0

    .line 89
    :cond_0
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/q;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v3, "settingCampaign"

    invoke-virtual {p1, v3, v1, v2}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 92
    :catch_0
    monitor-exit p0

    return v0
.end method

.method public final declared-synchronized c()Ljava/util/List;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/n;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "select * from settingCampaign ORDER BY iex LIMIT 3"

    .line 114
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/q;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    invoke-virtual {v2, v1, v0}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_1

    .line 115
    :try_start_1
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result v2

    if-lez v2, :cond_1

    .line 116
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 117
    :goto_0
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "url"

    .line 118
    invoke-interface {v1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {v1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    const-string v0, "data"

    .line 119
    invoke-interface {v1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {v1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v6

    const-string v0, "method"

    .line 120
    invoke-interface {v1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {v1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v5

    const-string v0, "iex"

    .line 121
    invoke-interface {v1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {v1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v7

    const-string v0, "id"

    .line 122
    invoke-interface {v1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {v1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v8

    .line 123
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/n;

    move-object v3, v0

    invoke-direct/range {v3 .. v8}, Lcom/mbridge/msdk/foundation/entity/n;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    .line 124
    invoke-interface {v2, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :cond_0
    move-object v0, v2

    goto :goto_1

    :catch_0
    move-exception v0

    goto :goto_2

    :catch_1
    move-exception v2

    move-object v9, v2

    move-object v2, v0

    move-object v0, v9

    goto :goto_2

    :cond_1
    :goto_1
    if-eqz v1, :cond_3

    .line 131
    :try_start_3
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_3

    :catchall_0
    move-exception v1

    move-object v9, v1

    move-object v1, v0

    move-object v0, v9

    goto :goto_4

    :catch_2
    move-exception v1

    move-object v2, v0

    move-object v0, v1

    move-object v1, v2

    .line 128
    :goto_2
    :try_start_4
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v1, :cond_2

    .line 131
    :try_start_5
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    :cond_2
    move-object v0, v2

    .line 134
    :cond_3
    :goto_3
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception v0

    :goto_4
    if-eqz v1, :cond_4

    .line 131
    :try_start_6
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 133
    :cond_4
    throw v0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :catchall_2
    move-exception v0

    monitor-exit p0

    throw v0
.end method
