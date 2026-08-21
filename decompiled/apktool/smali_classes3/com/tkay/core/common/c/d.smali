.class public Lcom/tkay/core/common/c/d;
.super Lcom/tkay/core/common/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/c/d$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/c/a<",
        "Lcom/tkay/core/common/f/af;",
        ">;"
    }
.end annotation


# static fields
.field private static final b:Ljava/lang/String;

.field private static volatile c:Lcom/tkay/core/common/c/d;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 22
    const-class v0, Lcom/tkay/core/common/c/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/c/d;->b:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Lcom/tkay/core/common/c/b;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/a;-><init>(Lcom/tkay/core/common/c/b;)V

    return-void
.end method

.method private declared-synchronized a(Lcom/tkay/core/common/f/af;)J
    .locals 9

    monitor-enter p0

    .line 77
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 v1, -0x1

    if-eqz v0, :cond_2

    if-nez p1, :cond_0

    goto :goto_0

    .line 81
    :cond_0
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "key"

    .line 82
    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "type"

    .line 83
    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "value"

    .line 84
    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->d()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "lastupdatetime"

    .line 85
    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 86
    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->b()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->c()Ljava/lang/String;

    move-result-object v5

    invoke-direct {p0, v3, v4, v5}, Lcom/tkay/core/common/c/d;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    const-string v3, "key = ? AND type = ? AND lastupdatetime = ?  "

    .line 89
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v4

    const-string v5, "sdkconfig"

    const/4 v6, 0x3

    new-array v6, v6, [Ljava/lang/String;

    const/4 v7, 0x0

    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->b()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v6, v7

    const/4 v7, 0x1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->c()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v6, v7

    const/4 v7, 0x2

    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->a()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v6, v7

    invoke-virtual {v4, v5, v0, v3, v6}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    int-to-long v0, p1

    monitor-exit p0

    return-wide v0

    .line 92
    :cond_1
    :try_start_2
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v3, "sdkconfig"

    const/4 v4, 0x0

    invoke-virtual {p1, v3, v4, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-wide v0

    .line 99
    :catch_0
    monitor-exit p0

    return-wide v1

    .line 78
    :cond_2
    :goto_0
    monitor-exit p0

    return-wide v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public static a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/d;
    .locals 2

    .line 31
    sget-object v0, Lcom/tkay/core/common/c/d;->c:Lcom/tkay/core/common/c/d;

    if-nez v0, :cond_1

    .line 32
    const-class v0, Lcom/tkay/core/common/c/d;

    monitor-enter v0

    .line 33
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/c/d;->c:Lcom/tkay/core/common/c/d;

    if-nez v1, :cond_0

    .line 34
    new-instance v1, Lcom/tkay/core/common/c/d;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/c/d;-><init>(Lcom/tkay/core/common/c/b;)V

    sput-object v1, Lcom/tkay/core/common/c/d;->c:Lcom/tkay/core/common/c/d;

    .line 36
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 38
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/c/d;->c:Lcom/tkay/core/common/c/d;

    return-object p0
.end method

.method private declared-synchronized a(Landroid/database/Cursor;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/database/Cursor;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/af;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    if-eqz p1, :cond_1

    .line 201
    :try_start_0
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v0

    if-lez v0, :cond_1

    .line 202
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 204
    :goto_0
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 205
    new-instance v1, Lcom/tkay/core/common/f/af;

    invoke-direct {v1}, Lcom/tkay/core/common/f/af;-><init>()V

    const-string v2, "key"

    .line 206
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/af;->b(Ljava/lang/String;)V

    const-string v2, "type"

    .line 207
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/af;->c(Ljava/lang/String;)V

    const-string v2, "value"

    .line 208
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/af;->d(Ljava/lang/String;)V

    const-string v2, "lastupdatetime"

    .line 209
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/af;->a(Ljava/lang/String;)V

    .line 210
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 212
    :cond_0
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 213
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    :cond_1
    const/4 p1, 0x0

    .line 215
    monitor-exit p0

    return-object p1
.end method

.method private declared-synchronized a(Ljava/lang/String;)V
    .locals 5

    monitor-enter p0

    .line 223
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 224
    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    const-string v0, "lastupdatetime< ? and type = ?"

    .line 227
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "sdkconfig"

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    aput-object p1, v3, v4

    const/4 p1, 0x1

    sget-object v4, Lcom/tkay/core/common/f/af$a;->a:Ljava/lang/String;

    aput-object v4, v3, p1

    invoke-virtual {v1, v2, v0, v3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 232
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 233
    :catch_0
    monitor-exit p0

    return-void
.end method

.method private declared-synchronized b(Ljava/lang/String;)Ljava/util/List;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/af;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    const/4 v0, 0x0

    .line 342
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "sdkconfig"

    const/4 v3, 0x0

    const-string v4, "type = ?"

    const/4 v5, 0x1

    new-array v5, v5, [Ljava/lang/String;

    const/4 v6, 0x0

    aput-object p1, v5, v6

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 344
    :try_start_1
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/d;->a(Landroid/database/Cursor;)Ljava/util/List;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p1, :cond_0

    .line 357
    :try_start_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 344
    :cond_0
    monitor-exit p0

    return-object v0

    :catchall_0
    move-object p1, v0

    :catchall_1
    if-eqz p1, :cond_2

    goto :goto_1

    :catch_0
    move-object p1, v0

    .line 350
    :catch_1
    :try_start_3
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz p1, :cond_2

    .line 357
    :goto_0
    :try_start_4
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    goto :goto_2

    :catchall_2
    move-exception v0

    if-eqz p1, :cond_1

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    .line 359
    :cond_1
    throw v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :catch_2
    move-object p1, v0

    :catch_3
    if-eqz p1, :cond_2

    :goto_1
    goto :goto_0

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1

    .line 360
    :cond_2
    :goto_2
    monitor-exit p0

    return-object v0
.end method

.method private declared-synchronized b(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 9

    monitor-enter p0

    .line 108
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "sdkconfig"

    const-string v2, "key"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2

    const-string v3, "key=? AND type=?"

    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/String;

    const/4 v8, 0x0

    aput-object p1, v4, v8

    const/4 p1, 0x1

    aput-object p2, v4, p1

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-virtual/range {v0 .. v7}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 110
    invoke-interface {p2}, Landroid/database/Cursor;->getCount()I

    move-result v0

    if-lez v0, :cond_0

    .line 111
    invoke-interface {p2}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 112
    monitor-exit p0

    return p1

    :cond_0
    if-eqz p2, :cond_1

    .line 115
    :try_start_1
    invoke-interface {p2}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 117
    :cond_1
    monitor-exit p0

    return v8

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 9

    monitor-enter p0

    .line 128
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "sdkconfig"

    const-string v2, "key"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2

    const-string v3, "key=? AND type=? AND lastupdatetime=?"

    const/4 v4, 0x3

    new-array v4, v4, [Ljava/lang/String;

    const/4 v8, 0x0

    aput-object p1, v4, v8

    const/4 p1, 0x1

    aput-object p3, v4, p1

    const/4 p3, 0x2

    aput-object p2, v4, p3

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-virtual/range {v0 .. v7}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 133
    invoke-interface {p2}, Landroid/database/Cursor;->getCount()I

    move-result p3

    if-lez p3, :cond_0

    .line 134
    invoke-interface {p2}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 135
    monitor-exit p0

    return p1

    :cond_0
    if-eqz p2, :cond_1

    .line 138
    :try_start_1
    invoke-interface {p2}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 140
    :cond_1
    monitor-exit p0

    return v8

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/af;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    const/4 v0, 0x0

    .line 245
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "sdkconfig"

    const/4 v3, 0x0

    const-string v4, "key = ? and type = ? and lastupdatetime = ?"

    const/4 v5, 0x3

    new-array v5, v5, [Ljava/lang/String;

    const/4 v6, 0x0

    aput-object p1, v5, v6

    const/4 p1, 0x1

    aput-object p3, v5, p1

    const/4 p1, 0x2

    aput-object p2, v5, p1

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 247
    :try_start_1
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/d;->a(Landroid/database/Cursor;)Ljava/util/List;

    move-result-object p2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p1, :cond_0

    .line 260
    :try_start_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 247
    :cond_0
    monitor-exit p0

    return-object p2

    :catchall_0
    move-object p1, v0

    :catchall_1
    if-eqz p1, :cond_2

    goto :goto_1

    :catch_0
    move-object p1, v0

    .line 253
    :catch_1
    :try_start_3
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz p1, :cond_2

    .line 260
    :goto_0
    :try_start_4
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    goto :goto_2

    :catchall_2
    move-exception p2

    if-eqz p1, :cond_1

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    .line 262
    :cond_1
    throw p2
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :catch_2
    move-object p1, v0

    :catch_3
    if-eqz p1, :cond_2

    :goto_1
    goto :goto_0

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1

    .line 263
    :cond_2
    :goto_2
    monitor-exit p0

    return-object v0
.end method

.method private declared-synchronized c(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    monitor-enter p0

    .line 180
    :try_start_0
    sget-object v0, Lcom/tkay/core/common/f/af$a;->a:Ljava/lang/String;

    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/core/common/c/d;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 181
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 183
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/af;

    .line 184
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2}, Lcom/tkay/core/common/f/af;->d()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    add-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/tkay/core/common/f/af;->d(Ljava/lang/String;)V

    .line 185
    invoke-direct {p0, p2}, Lcom/tkay/core/common/c/d;->a(Lcom/tkay/core/common/f/af;)J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 186
    :cond_0
    monitor-exit p0

    return-void

    .line 189
    :cond_1
    :try_start_1
    new-instance v0, Lcom/tkay/core/common/f/af;

    invoke-direct {v0}, Lcom/tkay/core/common/f/af;-><init>()V

    .line 190
    invoke-virtual {v0, p2}, Lcom/tkay/core/common/f/af;->a(Ljava/lang/String;)V

    const-string p2, "1"

    .line 191
    invoke-virtual {v0, p2}, Lcom/tkay/core/common/f/af;->d(Ljava/lang/String;)V

    .line 192
    sget-object p2, Lcom/tkay/core/common/f/af$a;->a:Ljava/lang/String;

    invoke-virtual {v0, p2}, Lcom/tkay/core/common/f/af;->c(Ljava/lang/String;)V

    .line 193
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/af;->b(Ljava/lang/String;)V

    .line 194
    invoke-direct {p0, v0}, Lcom/tkay/core/common/c/d;->a(Lcom/tkay/core/common/f/af;)J
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 198
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized d(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/af;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    const/4 v0, 0x0

    .line 311
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "sdkconfig"

    const/4 v3, 0x0

    const-string v4, "key != ? and type = ?"

    const/4 v5, 0x2

    new-array v5, v5, [Ljava/lang/String;

    const/4 v6, 0x0

    aput-object p1, v5, v6

    const/4 p1, 0x1

    aput-object p2, v5, p1

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 313
    :try_start_1
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/d;->a(Landroid/database/Cursor;)Ljava/util/List;

    move-result-object p2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p1, :cond_0

    .line 326
    :try_start_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 313
    :cond_0
    monitor-exit p0

    return-object p2

    :catchall_0
    move-object p1, v0

    :catchall_1
    if-eqz p1, :cond_2

    goto :goto_1

    :catch_0
    move-object p1, v0

    .line 319
    :catch_1
    :try_start_3
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz p1, :cond_2

    .line 326
    :goto_0
    :try_start_4
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    goto :goto_2

    :catchall_2
    move-exception p2

    if-eqz p1, :cond_1

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    .line 328
    :cond_1
    throw p2
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :catch_2
    move-object p1, v0

    :catch_3
    if-eqz p1, :cond_2

    :goto_1
    goto :goto_0

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1

    .line 329
    :cond_2
    :goto_2
    monitor-exit p0

    return-object v0
.end method


# virtual methods
.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)J
    .locals 7

    monitor-enter p0

    .line 50
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 v1, -0x1

    if-nez v0, :cond_0

    .line 51
    monitor-exit p0

    return-wide v1

    .line 55
    :cond_0
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "key"

    .line 56
    invoke-virtual {v0, v3, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "type"

    .line 57
    invoke-virtual {v0, v3, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "value"

    .line 58
    invoke-virtual {v0, v3, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "lastupdatetime"

    .line 59
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-virtual {v3, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, p2, v3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 60
    invoke-direct {p0, p1, p3}, Lcom/tkay/core/common/c/d;->b(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_1

    const-string p2, "key = ? AND type = ?"

    .line 63
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    const-string v4, "sdkconfig"

    const/4 v5, 0x2

    new-array v5, v5, [Ljava/lang/String;

    const/4 v6, 0x0

    aput-object p1, v5, v6

    const/4 p1, 0x1

    aput-object p3, v5, p1

    invoke-virtual {v3, v4, v0, p2, v5}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    int-to-long p1, p1

    monitor-exit p0

    return-wide p1

    .line 66
    :cond_1
    :try_start_2
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string p2, "sdkconfig"

    const/4 p3, 0x0

    invoke-virtual {p1, p2, p3, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-wide p1

    .line 73
    :catch_0
    monitor-exit p0

    return-wide v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/af;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    const/4 v0, 0x0

    .line 277
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/d;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "sdkconfig"

    const/4 v3, 0x0

    const-string v4, "key = ? and type = ?"

    const/4 v5, 0x2

    new-array v5, v5, [Ljava/lang/String;

    const/4 v6, 0x0

    aput-object p1, v5, v6

    const/4 p1, 0x1

    aput-object p2, v5, p1

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 280
    :try_start_1
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/d;->a(Landroid/database/Cursor;)Ljava/util/List;

    move-result-object p2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p1, :cond_0

    .line 293
    :try_start_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 280
    :cond_0
    monitor-exit p0

    return-object p2

    :catchall_0
    move-object p1, v0

    :catchall_1
    if-eqz p1, :cond_2

    goto :goto_1

    :catch_0
    move-object p1, v0

    .line 286
    :catch_1
    :try_start_3
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz p1, :cond_2

    .line 293
    :goto_0
    :try_start_4
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    goto :goto_2

    :catchall_2
    move-exception p2

    if-eqz p1, :cond_1

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    .line 295
    :cond_1
    throw p2
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :catch_2
    move-object p1, v0

    :catch_3
    if-eqz p1, :cond_2

    :goto_1
    goto :goto_0

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1

    .line 296
    :cond_2
    :goto_2
    monitor-exit p0

    return-object v0
.end method
