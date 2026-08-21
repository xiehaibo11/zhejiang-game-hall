.class public Lcom/bianfeng/datafunsdk/l;
.super Ljava/lang/Object;
.source "BaseDBTask.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;",
        "Ljava/lang/Object<",
        "TT;>;"
    }
.end annotation


# instance fields
.field public a:Landroid/database/sqlite/SQLiteDatabase;

.field public b:Z

.field public c:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "TT;>;"
        }
    .end annotation
.end field

.field public d:Ljava/lang/String;

.field public e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/reflect/Field;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/bianfeng/datafunsdk/l;->b:Z

    .line 9
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/datafunsdk/l;->b()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 11
    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)I
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)I"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/datafunsdk/n;
        }
    .end annotation

    .line 85
    const-class v0, Lcom/bianfeng/datafunsdk/l;

    monitor-enter v0

    .line 87
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/datafunsdk/l;->c()V

    .line 88
    iget-object v1, p0, Lcom/bianfeng/datafunsdk/l;->e:Ljava/util/Map;

    const-string v2, "_id"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/reflect/Field;

    .line 89
    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 90
    invoke-virtual {v1, p1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    .line 92
    iget-object v1, p0, Lcom/bianfeng/datafunsdk/l;->a:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v3, p0, Lcom/bianfeng/datafunsdk/l;->d:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v4, "_id=?"

    :try_start_1
    new-array v2, v2, [Ljava/lang/String;

    const/4 v5, 0x0

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v2, v5

    invoke-virtual {v1, v3, v4, v2}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    monitor-exit v0

    return p1

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    const-string v1, "delete\u51fa\u73b0\u5f02\u5e38"

    .line 94
    invoke-static {v1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 95
    new-instance v1, Lcom/bianfeng/datafunsdk/n;

    invoke-direct {v1, p1}, Lcom/bianfeng/datafunsdk/n;-><init>(Ljava/lang/Throwable;)V

    throw v1

    .line 97
    :goto_0
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p1
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "TT;>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/datafunsdk/n;
        }
    .end annotation

    .line 49
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 51
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/datafunsdk/l;->c()V

    .line 52
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u95f4\u9694\u65f6\u95f4fromData: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ",toData:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 53
    iget-object v2, p0, Lcom/bianfeng/datafunsdk/l;->a:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v3, p0, Lcom/bianfeng/datafunsdk/l;->d:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v4, 0x0

    const-string v5, "db_datafun_dataTime between ? and ?"

    const/4 v1, 0x2

    :try_start_1
    new-array v6, v1, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p1, v6, v1

    const/4 p1, 0x1

    aput-object p2, v6, p1

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    const-string v10, "100"

    invoke-virtual/range {v2 .. v10}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p2

    .line 55
    :goto_0
    invoke-interface {p2}, Landroid/database/Cursor;->moveToNext()Z

    move-result v1

    if-eqz v1, :cond_6

    .line 56
    iget-object v1, p0, Lcom/bianfeng/datafunsdk/l;->c:Ljava/lang/Class;

    invoke-virtual {v1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v1

    .line 57
    iget-object v2, p0, Lcom/bianfeng/datafunsdk/l;->e:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_5

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 59
    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 60
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/reflect/Field;

    .line 62
    invoke-virtual {v3, p1}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 63
    invoke-virtual {v3}, Ljava/lang/reflect/Field;->getType()Ljava/lang/Class;

    move-result-object v5

    .line 64
    invoke-interface {p2, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    .line 65
    const-class v6, Ljava/lang/String;

    if-ne v6, v5, :cond_0

    .line 66
    invoke-interface {p2, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v1, v4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    goto :goto_1

    .line 67
    :cond_0
    sget-object v6, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    if-ne v6, v5, :cond_1

    .line 68
    invoke-interface {p2, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v1, v4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    goto :goto_1

    .line 69
    :cond_1
    sget-object v6, Ljava/lang/Double;->TYPE:Ljava/lang/Class;

    if-ne v6, v5, :cond_2

    .line 70
    invoke-interface {p2, v4}, Landroid/database/Cursor;->getDouble(I)D

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v4

    invoke-virtual {v3, v1, v4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    goto :goto_1

    .line 71
    :cond_2
    sget-object v6, Ljava/lang/Long;->TYPE:Ljava/lang/Class;

    if-ne v6, v5, :cond_3

    .line 72
    invoke-interface {p2, v4}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v3, v1, v4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    goto :goto_1

    .line 73
    :cond_3
    const-class v6, [B

    if-ne v6, v5, :cond_4

    .line 74
    invoke-interface {p2, v4}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v4

    invoke-virtual {v3, v1, v4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    goto :goto_1

    :cond_4
    const-string v3, "\u4e0d\u5b58\u5728\u8be5\u6570\u636e\u7c7b\u578b"

    .line 76
    invoke-static {v3}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    goto :goto_1

    .line 80
    :cond_5
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_0

    .line 82
    :cond_6
    invoke-interface {p2}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object v0

    :catch_0
    move-exception p1

    .line 84
    new-instance p2, Lcom/bianfeng/datafunsdk/n;

    invoke-direct {p2, p1}, Lcom/bianfeng/datafunsdk/n;-><init>(Ljava/lang/Throwable;)V

    throw p2
.end method

.method public final a()Z
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/datafunsdk/n;
        }
    .end annotation

    .line 18
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/l;->c:Ljava/lang/Class;

    const-class v1, Lcom/bianfeng/datafunsdk/c;

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/datafunsdk/c;

    invoke-interface {v0}, Lcom/bianfeng/datafunsdk/c;->value()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/l;->d:Ljava/lang/String;

    .line 19
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/l;->c:Ljava/lang/Class;

    invoke-virtual {v0}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v0

    .line 20
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 21
    const-string v2, "_id "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, "INTEGER PRIMARY KEY autoincrement"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 22
    array-length v2, v0

    const/4 v3, 0x0

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v2, :cond_6

    aget-object v5, v0, v4

    .line 23
    invoke-virtual {v5}, Ljava/lang/reflect/Field;->getType()Ljava/lang/Class;

    move-result-object v6

    .line 24
    const-class v7, Lcom/bianfeng/datafunsdk/b;

    invoke-virtual {v5, v7}, Ljava/lang/reflect/Field;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/datafunsdk/b;

    if-nez v5, :cond_0

    goto :goto_1

    .line 28
    :cond_0
    invoke-interface {v5}, Lcom/bianfeng/datafunsdk/b;->value()Ljava/lang/String;

    move-result-object v5

    .line 29
    const-class v7, Ljava/lang/String;

    const-string v8, ","

    if-ne v7, v6, :cond_1

    .line 30
    invoke-virtual {v1, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v5, " TEXT"

    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_1

    .line 31
    :cond_1
    sget-object v7, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    if-ne v7, v6, :cond_2

    .line 32
    invoke-virtual {v1, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v5, " INTEGER"

    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_1

    .line 33
    :cond_2
    sget-object v7, Ljava/lang/Double;->TYPE:Ljava/lang/Class;

    if-ne v7, v6, :cond_3

    .line 34
    invoke-virtual {v1, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v5, " DOUBLE"

    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_1

    .line 35
    :cond_3
    sget-object v7, Ljava/lang/Long;->TYPE:Ljava/lang/Class;

    if-ne v7, v6, :cond_4

    .line 36
    invoke-virtual {v1, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v5, " LONG"

    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_1

    .line 37
    :cond_4
    const-class v7, [B

    if-ne v7, v6, :cond_5

    .line 38
    invoke-virtual {v1, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v5, " BLOB"

    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_1

    :cond_5
    nop

    .line 40
    const-string v5, "\u4e0d\u5b58\u5728\u8be5\u6570\u636e\u7c7b\u578b"

    invoke-static {v5}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    :goto_1
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_6
    const/4 v0, 0x2

    .line 43
    new-array v0, v0, [Ljava/lang/Object;

    iget-object v2, p0, Lcom/bianfeng/datafunsdk/l;->d:Ljava/lang/String;

    aput-object v2, v0, v3

    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    const-string v1, "CREATE TABLE IF NOT EXISTS %s (%s)"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 45
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/datafunsdk/l;->a:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v2

    :catch_0
    move-exception v0

    .line 48
    new-instance v1, Lcom/bianfeng/datafunsdk/n;

    invoke-direct {v1, v0}, Lcom/bianfeng/datafunsdk/n;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public declared-synchronized a(Ljava/lang/Class;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "TT;>;)Z"
        }
    .end annotation

    monitor-enter p0

    .line 1
    :try_start_0
    iget-boolean v0, p0, Lcom/bianfeng/datafunsdk/l;->b:Z

    if-nez v0, :cond_2

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/l;->a:Landroid/database/sqlite/SQLiteDatabase;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    monitor-exit p0

    return v1

    .line 5
    :cond_0
    :try_start_1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/l;->c:Ljava/lang/Class;

    .line 6
    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->isOpen()Z

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez p1, :cond_1

    monitor-exit p0

    return v1

    .line 10
    :cond_1
    :try_start_2
    invoke-virtual {p0}, Lcom/bianfeng/datafunsdk/l;->a()Z
    :try_end_2
    .catch Lcom/bianfeng/datafunsdk/n; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const/4 p1, 0x1

    .line 14
    :try_start_3
    iput-boolean p1, p0, Lcom/bianfeng/datafunsdk/l;->b:Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    :catch_0
    move-exception p1

    monitor-exit p0

    return v1

    .line 16
    :cond_2
    :goto_0
    :try_start_4
    invoke-virtual {p0}, Lcom/bianfeng/datafunsdk/l;->d()V

    .line 17
    iget-boolean p1, p0, Lcom/bianfeng/datafunsdk/l;->b:Z
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit p0

    return p1

    .line 0
    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public b(Ljava/lang/Object;)Ljava/lang/Long;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)",
            "Ljava/lang/Long;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/datafunsdk/n;
        }
    .end annotation

    .line 5
    invoke-virtual {p0}, Lcom/bianfeng/datafunsdk/l;->c()V

    .line 6
    const-class v0, Lcom/bianfeng/datafunsdk/l;

    monitor-enter v0

    .line 8
    :try_start_0
    new-instance v1, Landroid/content/ContentValues;

    invoke-direct {v1}, Landroid/content/ContentValues;-><init>()V

    .line 9
    iget-object v2, p0, Lcom/bianfeng/datafunsdk/l;->e:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_6

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 10
    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 11
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/reflect/Field;

    const/4 v5, 0x1

    .line 12
    invoke-virtual {v3, v5}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    const-string v5, "_id"

    .line 13
    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    goto :goto_0

    .line 16
    :cond_0
    invoke-virtual {v3}, Ljava/lang/reflect/Field;->getType()Ljava/lang/Class;

    move-result-object v5

    .line 17
    const-class v6, Ljava/lang/String;

    if-ne v6, v5, :cond_1

    .line 18
    invoke-virtual {v3, p1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v4, v3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 19
    :cond_1
    sget-object v6, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    if-ne v6, v5, :cond_2

    .line 20
    invoke-virtual {v3, p1}, Ljava/lang/reflect/Field;->getInt(Ljava/lang/Object;)I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v4, v3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    goto :goto_0

    .line 21
    :cond_2
    sget-object v6, Ljava/lang/Double;->TYPE:Ljava/lang/Class;

    if-ne v6, v5, :cond_3

    .line 22
    invoke-virtual {v3, p1}, Ljava/lang/reflect/Field;->getDouble(Ljava/lang/Object;)D

    move-result-wide v5

    invoke-static {v5, v6}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v3

    invoke-virtual {v1, v4, v3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Double;)V

    goto :goto_0

    .line 23
    :cond_3
    sget-object v6, Ljava/lang/Long;->TYPE:Ljava/lang/Class;

    if-ne v6, v5, :cond_4

    .line 24
    invoke-virtual {v3, p1}, Ljava/lang/reflect/Field;->getLong(Ljava/lang/Object;)J

    move-result-wide v5

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v1, v4, v3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    goto :goto_0

    .line 25
    :cond_4
    const-class v6, [B

    if-ne v6, v5, :cond_5

    .line 26
    invoke-virtual {v3, p1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [B

    invoke-static {v3}, Ljava/util/Arrays;->toString([B)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v4, v3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_5
    const-string v3, "\u4e0d\u5b58\u5728\u8be5\u6570\u636e\u7c7b\u578b"

    .line 28
    invoke-static {v3}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    goto/16 :goto_0

    .line 31
    :cond_6
    iget-object p1, p0, Lcom/bianfeng/datafunsdk/l;->a:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v2, p0, Lcom/bianfeng/datafunsdk/l;->d:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {p1, v2, v3, v1}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v1

    .line 32
    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    monitor-exit v0

    return-object p1

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 34
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u63d2\u5165\u7684\u5f02\u5e38"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 35
    new-instance v1, Lcom/bianfeng/datafunsdk/n;

    invoke-direct {v1, p1}, Lcom/bianfeng/datafunsdk/n;-><init>(Ljava/lang/Throwable;)V

    throw v1

    .line 37
    :goto_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public final b()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/datafunsdk/n;
        }
    .end annotation

    .line 1
    const/4 v0, 0x0

    :try_start_0
    sget-object v1, Lcom/bianfeng/datafunsdk/m;->a:Ljava/lang/String;

    invoke-static {v1}, Lcom/bianfeng/datafunsdk/v;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v0}, Landroid/database/sqlite/SQLiteDatabase;->openOrCreateDatabase(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/datafunsdk/l;->a:Landroid/database/sqlite/SQLiteDatabase;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v1

    .line 3
    iput-object v0, p0, Lcom/bianfeng/datafunsdk/l;->a:Landroid/database/sqlite/SQLiteDatabase;

    .line 4
    new-instance v0, Lcom/bianfeng/datafunsdk/n;

    invoke-direct {v0, v1}, Lcom/bianfeng/datafunsdk/n;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method

.method public final c()V
    .locals 2

    .line 1
    invoke-static {}, Lcom/bianfeng/datafunsdk/y;->a()I

    move-result v0

    .line 2
    sget-object v1, Lcom/bianfeng/datafunsdk/g;->c:Lcom/bianfeng/datafunsdk/g;

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    if-ne v0, v1, :cond_0

    .line 4
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/datafunsdk/l;->b()V
    :try_end_0
    .catch Lcom/bianfeng/datafunsdk/n; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 6
    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    const/4 v0, 0x0

    .line 8
    iput-boolean v0, p0, Lcom/bianfeng/datafunsdk/l;->b:Z

    .line 9
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/l;->c:Ljava/lang/Class;

    invoke-virtual {p0, v0}, Lcom/bianfeng/datafunsdk/l;->a(Ljava/lang/Class;)Z

    .line 10
    sget-object v0, Lcom/bianfeng/datafunsdk/g;->a:Lcom/bianfeng/datafunsdk/g;

    invoke-virtual {v0}, Ljava/lang/Enum;->ordinal()I

    move-result v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/y;->a(I)V

    :cond_0
    return-void
.end method

.method public final d()V
    .locals 11

    .line 1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/l;->e:Ljava/util/Map;

    .line 2
    iget-object v1, p0, Lcom/bianfeng/datafunsdk/l;->a:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v2, p0, Lcom/bianfeng/datafunsdk/l;->d:Ljava/lang/String;

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    .line 3
    invoke-interface {v0}, Landroid/database/Cursor;->getColumnNames()[Ljava/lang/String;

    move-result-object v0

    .line 4
    iget-object v1, p0, Lcom/bianfeng/datafunsdk/l;->c:Ljava/lang/Class;

    invoke-virtual {v1}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v1

    .line 5
    array-length v2, v0

    const/4 v3, 0x0

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v2, :cond_4

    aget-object v5, v0, v4

    .line 6
    const-string v6, "_id"

    invoke-virtual {v6, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_0

    goto :goto_3

    .line 9
    :cond_0
    array-length v7, v1

    const/4 v8, 0x0

    :goto_1
    if-ge v8, v7, :cond_3

    aget-object v9, v1, v8

    .line 10
    const-class v10, Lcom/bianfeng/datafunsdk/b;

    invoke-virtual {v9, v10}, Ljava/lang/reflect/Field;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v10

    check-cast v10, Lcom/bianfeng/datafunsdk/b;

    if-nez v10, :cond_1

    .line 12
    iget-object v10, p0, Lcom/bianfeng/datafunsdk/l;->e:Ljava/util/Map;

    invoke-interface {v10, v6, v9}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    .line 15
    :cond_1
    invoke-interface {v10}, Lcom/bianfeng/datafunsdk/b;->value()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v5, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_2

    .line 16
    iget-object v10, p0, Lcom/bianfeng/datafunsdk/l;->e:Ljava/util/Map;

    invoke-interface {v10, v5, v9}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    :goto_2
    add-int/lit8 v8, v8, 0x1

    goto :goto_1

    :cond_3
    :goto_3
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_4
    return-void
.end method
