.class public Lcom/igexin/push/extension/distribution/basic/e/b;
.super Landroid/database/sqlite/SQLiteOpenHelper;


# instance fields
.field a:Landroid/database/sqlite/SQLiteDatabase;

.field private b:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 3

    const/4 v0, 0x0

    const-string v1, "pushsdk.db"

    const/4 v2, 0x5

    invoke-direct {p0, p1, v1, v0, v2}, Landroid/database/sqlite/SQLiteOpenHelper;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->a:Landroid/database/sqlite/SQLiteDatabase;

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->b:Z

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
.method public a(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)V
    .locals 1

    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/e/b;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->a:Landroid/database/sqlite/SQLiteDatabase;

    :try_start_0
    invoke-virtual {v0, p1, p2, p3}, Landroid/database/sqlite/SQLiteDatabase;->replace(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V
    .locals 3

    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/e/b;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    if-nez p2, :cond_0

    :try_start_0
    iget-object p2, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->a:Landroid/database/sqlite/SQLiteDatabase;

    const/4 p3, 0x0

    invoke-virtual {p2, p1, p3, p3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    goto :goto_1

    :cond_0
    array-length v0, p2

    const/4 v1, 0x1

    if-ne v0, v1, :cond_2

    array-length v0, p3

    if-ne v0, v1, :cond_1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->a:Landroid/database/sqlite/SQLiteDatabase;

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
    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->a:Landroid/database/sqlite/SQLiteDatabase;

    array-length v1, p3

    invoke-direct {p0, p2, p3, v1}, Lcom/igexin/push/extension/distribution/basic/e/b;->a([Ljava/lang/String;[Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p2

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/extension/distribution/basic/e/b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    invoke-virtual {v0, p1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->a:Landroid/database/sqlite/SQLiteDatabase;

    array-length v1, p2

    invoke-direct {p0, p2, p3, v1}, Lcom/igexin/push/extension/distribution/basic/e/b;->a([Ljava/lang/String;[Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p2

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/extension/distribution/basic/e/b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :goto_1
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    iget-object p2, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {p2}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    throw p1

    :catch_0
    :goto_2
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    return-void
.end method

.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->b:Z

    return v0
.end method

.method public onCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->b:Z

    return-void
.end method

.method public onDowngrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->b:Z

    return-void
.end method

.method public onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/e/b;->b:Z

    return-void
.end method
