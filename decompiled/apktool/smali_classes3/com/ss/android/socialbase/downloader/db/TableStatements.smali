.class public Lcom/ss/android/socialbase/downloader/db/TableStatements;
.super Ljava/lang/Object;


# instance fields
.field private final allColumns:[Ljava/lang/String;

.field private final database:Landroid/database/sqlite/SQLiteDatabase;

.field private deleteStatement:Landroid/database/sqlite/SQLiteStatement;

.field private insertOrReplaceStatement:Landroid/database/sqlite/SQLiteStatement;

.field private insertStatement:Landroid/database/sqlite/SQLiteStatement;

.field private final pkColumns:[Ljava/lang/String;

.field private final tableName:Ljava/lang/String;

.field private updateStatement:Landroid/database/sqlite/SQLiteStatement;


# direct methods
.method public constructor <init>(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 27
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->database:Landroid/database/sqlite/SQLiteDatabase;

    .line 28
    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->tableName:Ljava/lang/String;

    .line 29
    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->allColumns:[Ljava/lang/String;

    .line 30
    iput-object p4, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->pkColumns:[Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getDeleteStatement()Landroid/database/sqlite/SQLiteStatement;
    .locals 2

    .line 50
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->deleteStatement:Landroid/database/sqlite/SQLiteStatement;

    if-nez v0, :cond_1

    .line 51
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->tableName:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->pkColumns:[Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/SqlUtils;->createSqlDelete(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 52
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v1, v0}, Landroid/database/sqlite/SQLiteDatabase;->compileStatement(Ljava/lang/String;)Landroid/database/sqlite/SQLiteStatement;

    move-result-object v0

    .line 53
    monitor-enter p0

    .line 54
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->deleteStatement:Landroid/database/sqlite/SQLiteStatement;

    if-nez v1, :cond_0

    .line 55
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->deleteStatement:Landroid/database/sqlite/SQLiteStatement;

    .line 57
    :cond_0
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 58
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->deleteStatement:Landroid/database/sqlite/SQLiteStatement;

    if-eq v1, v0, :cond_1

    .line 59
    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteStatement;->close()V

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 57
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0

    .line 62
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->deleteStatement:Landroid/database/sqlite/SQLiteStatement;

    return-object v0
.end method

.method public getInsertOrReplaceStatement()Landroid/database/sqlite/SQLiteStatement;
    .locals 3

    .line 82
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->insertOrReplaceStatement:Landroid/database/sqlite/SQLiteStatement;

    if-nez v0, :cond_1

    .line 83
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->tableName:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->allColumns:[Ljava/lang/String;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->pkColumns:[Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/utils/SqlUtils;->createSqlInsertOrReplace(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 84
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v1, v0}, Landroid/database/sqlite/SQLiteDatabase;->compileStatement(Ljava/lang/String;)Landroid/database/sqlite/SQLiteStatement;

    move-result-object v0

    .line 85
    monitor-enter p0

    .line 86
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->insertOrReplaceStatement:Landroid/database/sqlite/SQLiteStatement;

    if-nez v1, :cond_0

    .line 87
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->insertOrReplaceStatement:Landroid/database/sqlite/SQLiteStatement;

    .line 89
    :cond_0
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 90
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->insertOrReplaceStatement:Landroid/database/sqlite/SQLiteStatement;

    if-eq v1, v0, :cond_1

    .line 91
    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteStatement;->close()V

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 89
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0

    .line 94
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->insertOrReplaceStatement:Landroid/database/sqlite/SQLiteStatement;

    return-object v0
.end method

.method public getInsertStatement()Landroid/database/sqlite/SQLiteStatement;
    .locals 3

    .line 34
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->insertStatement:Landroid/database/sqlite/SQLiteStatement;

    if-nez v0, :cond_1

    .line 35
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->tableName:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->allColumns:[Ljava/lang/String;

    const-string v2, "INSERT INTO "

    invoke-static {v2, v0, v1}, Lcom/ss/android/socialbase/downloader/utils/SqlUtils;->createSqlInsert(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 36
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v1, v0}, Landroid/database/sqlite/SQLiteDatabase;->compileStatement(Ljava/lang/String;)Landroid/database/sqlite/SQLiteStatement;

    move-result-object v0

    .line 37
    monitor-enter p0

    .line 38
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->insertStatement:Landroid/database/sqlite/SQLiteStatement;

    if-nez v1, :cond_0

    .line 39
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->insertStatement:Landroid/database/sqlite/SQLiteStatement;

    .line 41
    :cond_0
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 42
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->insertStatement:Landroid/database/sqlite/SQLiteStatement;

    if-eq v1, v0, :cond_1

    .line 43
    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteStatement;->close()V

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 41
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0

    .line 46
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->insertStatement:Landroid/database/sqlite/SQLiteStatement;

    return-object v0
.end method

.method public getUpdateStatement()Landroid/database/sqlite/SQLiteStatement;
    .locals 3

    .line 66
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->updateStatement:Landroid/database/sqlite/SQLiteStatement;

    if-nez v0, :cond_1

    .line 67
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->tableName:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->allColumns:[Ljava/lang/String;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->pkColumns:[Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/utils/SqlUtils;->createSqlUpdate(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 68
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v1, v0}, Landroid/database/sqlite/SQLiteDatabase;->compileStatement(Ljava/lang/String;)Landroid/database/sqlite/SQLiteStatement;

    move-result-object v0

    .line 69
    monitor-enter p0

    .line 70
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->updateStatement:Landroid/database/sqlite/SQLiteStatement;

    if-nez v1, :cond_0

    .line 71
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->updateStatement:Landroid/database/sqlite/SQLiteStatement;

    .line 73
    :cond_0
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 74
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->updateStatement:Landroid/database/sqlite/SQLiteStatement;

    if-eq v1, v0, :cond_1

    .line 75
    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteStatement;->close()V

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 73
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0

    .line 78
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/TableStatements;->updateStatement:Landroid/database/sqlite/SQLiteStatement;

    return-object v0
.end method
