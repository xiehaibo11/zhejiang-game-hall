.class public Lcom/igexin/push/extension/distribution/basic/e/a;
.super Landroid/database/sqlite/SQLiteOpenHelper;


# instance fields
.field a:Landroid/database/sqlite/SQLiteDatabase;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 3

    const/4 v0, 0x0

    const-string v1, "pushext.db"

    const/4 v2, 0x4

    invoke-direct {p0, p1, v1, v0, v2}, Landroid/database/sqlite/SQLiteOpenHelper;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "delete from "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " where "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private a([Ljava/lang/String;[Ljava/lang/String;I)Ljava/lang/String;
    .locals 6

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    array-length v1, p1

    const-string v2, "\'"

    const-string v3, " = \'"

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-ne v1, v5, :cond_1

    move v1, v4

    :goto_0
    if-ge v1, p3, :cond_3

    aget-object v5, p1, v4

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, p2, v1

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v5, p3, -0x1

    if-ge v1, v5, :cond_0

    const-string v5, " or "

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    if-ge v4, p3, :cond_3

    aget-object v1, p1, v4

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v1, p2, v4

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v1, p3, -0x1

    if-ge v4, v1, :cond_2

    const-string v1, " and "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    :cond_3
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public a(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;
    .locals 1

    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/e/a;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    :try_start_0
    invoke-virtual {v0, p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method public a(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;
    .locals 8

    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/e/a;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    invoke-virtual/range {v0 .. v7}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    return-object p1
.end method

.method public a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;
    .locals 11

    move-object v1, p0

    move-object v0, p2

    move-object v6, p3

    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/e/a;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    iput-object v2, v1, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v2}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    const/4 v10, 0x0

    if-nez v0, :cond_0

    :try_start_0
    iget-object v2, v1, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v3, p1

    move-object v4, p4

    move-object/from16 v9, p5

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    :goto_0
    move-object v10, v0

    goto :goto_1

    :cond_0
    array-length v2, v0

    const/4 v3, 0x1

    if-ne v2, v3, :cond_2

    array-length v2, v6

    if-ne v2, v3, :cond_1

    iget-object v2, v1, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v4, 0x0

    aget-object v0, v0, v4

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " = ? "

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v3, p1

    move-object v4, p4

    move-object v6, p3

    move-object/from16 v9, p5

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    goto :goto_0

    :cond_1
    iget-object v2, v1, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    array-length v3, v6

    invoke-direct {p0, p2, p3, v3}, Lcom/igexin/push/extension/distribution/basic/e/a;->a([Ljava/lang/String;[Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v3, p1

    move-object v4, p4

    move-object/from16 v9, p5

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    goto :goto_0

    :cond_2
    iget-object v2, v1, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    array-length v3, v0

    invoke-direct {p0, p2, p3, v3}, Lcom/igexin/push/extension/distribution/basic/e/a;->a([Ljava/lang/String;[Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v3, p1

    move-object v4, p4

    move-object/from16 v9, p5

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    goto :goto_0

    :goto_1
    iget-object v0, v1, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    iget-object v2, v1, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v2}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    throw v0

    :catch_0
    :goto_2
    iget-object v0, v1, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    return-object v10
.end method

.method public a(Ljava/lang/String;Landroid/content/ContentValues;)V
    .locals 2

    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/e/a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1, p2}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    iget-object p2, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {p2}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    throw p1

    :catch_0
    :goto_0
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)V
    .locals 1

    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/e/a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    :try_start_0
    invoke-virtual {v0, p1, p2, p3}, Landroid/database/sqlite/SQLiteDatabase;->replace(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V
    .locals 3

    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/e/a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    if-nez p2, :cond_0

    :try_start_0
    iget-object p2, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    const/4 p3, 0x0

    invoke-virtual {p2, p1, p3, p3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    goto :goto_1

    :cond_0
    array-length v0, p2

    const/4 v1, 0x1

    if-ne v0, v1, :cond_2

    array-length v0, p3

    if-ne v0, v1, :cond_1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v2, 0x0

    aget-object p2, p2, v2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " = ?"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2, p3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    array-length v1, p3

    invoke-direct {p0, p2, p3, v1}, Lcom/igexin/push/extension/distribution/basic/e/a;->a([Ljava/lang/String;[Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p2

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/extension/distribution/basic/e/a;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    invoke-virtual {v0, p1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    array-length v1, p2

    invoke-direct {p0, p2, p3, v1}, Lcom/igexin/push/extension/distribution/basic/e/a;->a([Ljava/lang/String;[Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p2

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/extension/distribution/basic/e/a;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :goto_1
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    iget-object p2, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {p2}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    throw p1

    :catch_0
    :goto_2
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    return-void
.end method

.method public close()V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/a;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public onCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    :try_start_0
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    const-string v0, "create table if not exists image(id integer primary key autoincrement, imageurl text, imagesrc text, taskid text, createtime bigint)"

    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    throw v0

    :catch_0
    :goto_0
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    :try_start_1
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    const-string v0, "create table if not exists message(id integer primary key autoincrement,messageid text,taskid text,appid text,info text,msgextra blob,key text,createtime integer)"

    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    throw v0

    :catch_1
    :goto_1
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    :try_start_2
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    const-string v0, "create table if not exists sc(id integer primary key autoincrement, title text, value text)"

    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v0

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    throw v0

    :catch_2
    :goto_2
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    :try_start_3
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    const-string v0, "create table if not exists extconfig (key integer primary key, value text)"

    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_3

    :catchall_3
    move-exception v0

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    throw v0

    :catch_3
    :goto_3
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    return-void
.end method

.method public onDowngrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    invoke-virtual {p0, p1, p3, p2}, Lcom/igexin/push/extension/distribution/basic/e/a;->onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V

    return-void
.end method

.method public onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    :try_start_0
    const-string p2, "drop table if exists image"

    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :try_start_1
    const-string p2, "drop table if exists message"

    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :try_start_2
    const-string p2, "drop table if exists sc"

    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    :try_start_3
    const-string p2, "drop table if exists extconfig"

    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    :catch_3
    invoke-virtual {p0, p1}, Lcom/igexin/push/extension/distribution/basic/e/a;->onCreate(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method
