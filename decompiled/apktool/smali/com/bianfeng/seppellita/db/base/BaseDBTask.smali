.class public Lcom/bianfeng/seppellita/db/base/BaseDBTask;
.super Ljava/lang/Object;
.source "BaseDBTask.java"

# interfaces
.implements Lcom/bianfeng/seppellita/db/base/IDBTask;


# instance fields
.field private database:Landroid/database/sqlite/SQLiteDatabase;

.field private init:Z

.field private selectMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private tableName:Ljava/lang/String;

.field private values:Landroid/content/ContentValues;


# direct methods
.method protected constructor <init>()V
    .locals 1

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 26
    iput-boolean v0, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->init:Z

    const-string v0, "db_seppellita_bean"

    .line 27
    iput-object v0, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->tableName:Ljava/lang/String;

    .line 28
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    .line 29
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->values:Landroid/content/ContentValues;

    .line 33
    :try_start_0
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->createDb()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 35
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private autoCreateTable()Z
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/seppellita/exception/SeppellitaException;
        }
    .end annotation

    .line 73
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    const-string v1, "_id "

    .line 74
    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v1, "INTEGER PRIMARY KEY autoincrement"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v1, ","

    .line 75
    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, "db_seppellita_data"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, " TEXT"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 76
    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v3, "db_seppellita_dataTime"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 77
    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v1, "db_seppellita_time"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v1, " LONG"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    .line 78
    iget-object v2, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->tableName:Ljava/lang/String;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x1

    aput-object v0, v1, v2

    const-string v0, "CREATE TABLE IF NOT EXISTS %s (%s)"

    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 80
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v2

    :catch_0
    move-exception v0

    .line 83
    new-instance v1, Lcom/bianfeng/seppellita/exception/SeppellitaException;

    invoke-direct {v1, v0}, Lcom/bianfeng/seppellita/exception/SeppellitaException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method private createDb()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/seppellita/exception/SeppellitaException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 41
    :try_start_0
    sget-object v1, Lcom/bianfeng/seppellita/db/base/DBName;->db_name:Ljava/lang/String;

    invoke-static {v1}, Lcom/bianfeng/seppellita/utils/SeppellitaFileUtils;->getDbPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v0}, Landroid/database/sqlite/SQLiteDatabase;->openOrCreateDatabase(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->database:Landroid/database/sqlite/SQLiteDatabase;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v1

    .line 43
    iput-object v0, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->database:Landroid/database/sqlite/SQLiteDatabase;

    .line 44
    new-instance v0, Lcom/bianfeng/seppellita/exception/SeppellitaException;

    invoke-direct {v0, v1}, Lcom/bianfeng/seppellita/exception/SeppellitaException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method

.method private initAfterDel()V
    .locals 2

    .line 88
    invoke-static {}, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->getDelDb()I

    move-result v0

    .line 89
    sget-object v1, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->DELED:Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->ordinal()I

    move-result v1

    if-ne v0, v1, :cond_0

    .line 91
    :try_start_0
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->createDb()V
    :try_end_0
    .catch Lcom/bianfeng/seppellita/exception/SeppellitaException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 93
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/exception/SeppellitaException;->printStackTrace()V

    :goto_0
    const/4 v0, 0x0

    .line 95
    iput-boolean v0, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->init:Z

    .line 96
    invoke-virtual {p0}, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->init()Z

    .line 97
    sget-object v0, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->NO_NEED_DEL:Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->ordinal()I

    move-result v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->putDelDb(I)V

    :cond_0
    return-void
.end method


# virtual methods
.method public delete(Ljava/lang/String;)I
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/seppellita/exception/SeppellitaException;
        }
    .end annotation

    .line 184
    const-class v0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;

    monitor-enter v0

    .line 186
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->database:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v2, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->tableName:Ljava/lang/String;

    const-string v3, "_id=?"

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/String;

    const/4 v5, 0x0

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v4, v5

    invoke-virtual {v1, v2, v3, v4}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    monitor-exit v0

    return p1

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    const-string v1, "delete\u51fa\u73b0\u5f02\u5e38"

    .line 188
    invoke-static {v1}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 189
    new-instance v1, Lcom/bianfeng/seppellita/exception/SeppellitaException;

    invoke-direct {v1, p1}, Lcom/bianfeng/seppellita/exception/SeppellitaException;-><init>(Ljava/lang/Throwable;)V

    throw v1

    .line 191
    :goto_0
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public deleteBeforeData(Ljava/lang/String;)I
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/seppellita/exception/SeppellitaException;
        }
    .end annotation

    .line 196
    const-class v0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;

    monitor-enter v0

    .line 198
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->database:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v2, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->tableName:Ljava/lang/String;

    const-string v3, "db_seppellita_dataTime < ?"

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/String;

    const/4 v5, 0x0

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v4, v5

    invoke-virtual {v1, v2, v3, v4}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    monitor-exit v0

    return p1

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    const-string v1, "delete\u51fa\u73b0\u5f02\u5e38"

    .line 200
    invoke-static {v1}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 201
    new-instance v1, Lcom/bianfeng/seppellita/exception/SeppellitaException;

    invoke-direct {v1, p1}, Lcom/bianfeng/seppellita/exception/SeppellitaException;-><init>(Ljava/lang/Throwable;)V

    throw v1

    .line 203
    :goto_0
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method protected declared-synchronized init()Z
    .locals 2

    monitor-enter p0

    .line 49
    :try_start_0
    iget-boolean v0, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->init:Z

    if-nez v0, :cond_2

    .line 50
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->database:Landroid/database/sqlite/SQLiteDatabase;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 51
    monitor-exit p0

    return v1

    .line 53
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->isOpen()Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v0, :cond_1

    .line 54
    monitor-exit p0

    return v1

    .line 57
    :cond_1
    :try_start_2
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->autoCreateTable()Z
    :try_end_2
    .catch Lcom/bianfeng/seppellita/exception/SeppellitaException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const/4 v0, 0x1

    .line 61
    :try_start_3
    iput-boolean v0, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->init:Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    .line 59
    :catch_0
    monitor-exit p0

    return v1

    .line 63
    :cond_2
    :goto_0
    :try_start_4
    iget-boolean v0, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->init:Z
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public insert(Ljava/lang/String;JLjava/lang/String;)Ljava/lang/Long;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/seppellita/exception/SeppellitaException;
        }
    .end annotation

    .line 103
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->initAfterDel()V

    .line 105
    const-class v0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;

    monitor-enter v0

    .line 108
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->values:Landroid/content/ContentValues;

    invoke-virtual {v1}, Landroid/content/ContentValues;->clear()V

    .line 109
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->values:Landroid/content/ContentValues;

    const-string v2, "db_seppellita_data"

    invoke-virtual {v1, v2, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 110
    iget-object p1, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->values:Landroid/content/ContentValues;

    const-string v1, "db_seppellita_dataTime"

    invoke-virtual {p1, v1, p4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 111
    iget-object p1, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->values:Landroid/content/ContentValues;

    const-string p4, "db_seppellita_time"

    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    invoke-virtual {p1, p4, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 112
    iget-object p1, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->database:Landroid/database/sqlite/SQLiteDatabase;

    iget-object p2, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->tableName:Ljava/lang/String;

    const/4 p3, 0x0

    iget-object p4, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->values:Landroid/content/ContentValues;

    invoke-virtual {p1, p2, p3, p4}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide p1

    .line 114
    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    monitor-exit v0

    return-object p1

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 116
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "\u63d2\u5165\u7684\u5f02\u5e38"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 117
    new-instance p2, Lcom/bianfeng/seppellita/exception/SeppellitaException;

    invoke-direct {p2, p1}, Lcom/bianfeng/seppellita/exception/SeppellitaException;-><init>(Ljava/lang/Throwable;)V

    throw p2

    .line 119
    :goto_0
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public select()Ljava/util/List;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/seppellita/exception/SeppellitaException;
        }
    .end annotation

    .line 124
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 126
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    monitor-enter v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 127
    :try_start_1
    iget-object v2, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->clear()V

    .line 128
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->initAfterDel()V

    .line 129
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->database:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v4, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->tableName:Ljava/lang/String;

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    invoke-virtual/range {v3 .. v10}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v2

    .line 130
    :goto_0
    invoke-interface {v2}, Landroid/database/Cursor;->moveToNext()Z

    move-result v3

    if-eqz v3, :cond_0

    const/4 v3, 0x0

    .line 131
    invoke-interface {v2, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    .line 132
    invoke-interface {v2, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x2

    .line 133
    invoke-interface {v2, v5}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x3

    .line 134
    invoke-interface {v2, v6}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v6

    .line 135
    iget-object v7, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    const-string v8, "id"

    invoke-interface {v7, v8, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 136
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    const-string v7, "db_seppellita_data"

    invoke-interface {v3, v7, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 137
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    const-string v4, "db_seppellita_dataTime"

    invoke-interface {v3, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 138
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    const-string v4, "db_seppellita_time"

    invoke-interface {v3, v4, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 140
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    invoke-static {v3}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 141
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    invoke-interface {v3}, Ljava/util/Map;->clear()V

    goto :goto_0

    .line 143
    :cond_0
    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    .line 144
    monitor-exit v1

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    move-exception v0

    .line 146
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "select:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 147
    new-instance v1, Lcom/bianfeng/seppellita/exception/SeppellitaException;

    invoke-direct {v1, v0}, Lcom/bianfeng/seppellita/exception/SeppellitaException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public select(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
    .locals 13
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/seppellita/exception/SeppellitaException;
        }
    .end annotation

    .line 154
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 156
    :try_start_0
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->initAfterDel()V

    .line 157
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    monitor-enter v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 158
    :try_start_1
    iget-object v2, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->clear()V

    .line 159
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->initAfterDel()V

    .line 160
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->database:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v4, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->tableName:Ljava/lang/String;

    const/4 v5, 0x0

    const-string v6, "db_seppellita_dataTime between ? and ?"

    const/4 v2, 0x2

    new-array v7, v2, [Ljava/lang/String;

    const/4 v12, 0x0

    aput-object p1, v7, v12

    const/4 p1, 0x1

    aput-object p2, v7, p1

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    const-string v11, "800"

    invoke-virtual/range {v3 .. v11}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p2

    .line 162
    :goto_0
    invoke-interface {p2}, Landroid/database/Cursor;->moveToNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 163
    invoke-interface {p2, v12}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    .line 164
    invoke-interface {p2, p1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 165
    invoke-interface {p2, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x3

    .line 166
    invoke-interface {p2, v6}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v6

    .line 167
    iget-object v7, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    const-string v8, "id"

    invoke-interface {v7, v8, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 168
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    const-string v7, "db_seppellita_data"

    invoke-interface {v3, v7, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 169
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    const-string v4, "db_seppellita_dataTime"

    invoke-interface {v3, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 170
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    const-string v4, "db_seppellita_time"

    invoke-interface {v3, v4, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 171
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    invoke-static {v3}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 172
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/base/BaseDBTask;->selectMap:Ljava/util/Map;

    invoke-interface {v3}, Ljava/util/Map;->clear()V

    goto :goto_0

    .line 174
    :cond_0
    invoke-interface {p2}, Landroid/database/Cursor;->close()V

    .line 175
    monitor-exit v1

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    move-exception p1

    .line 177
    new-instance p2, Lcom/bianfeng/seppellita/exception/SeppellitaException;

    invoke-direct {p2, p1}, Lcom/bianfeng/seppellita/exception/SeppellitaException;-><init>(Ljava/lang/Throwable;)V

    throw p2
.end method
