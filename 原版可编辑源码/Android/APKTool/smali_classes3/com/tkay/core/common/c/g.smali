.class public Lcom/tkay/core/common/c/g;
.super Lcom/tkay/core/common/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/c/g$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/c/a<",
        "Lcom/tkay/core/common/f/n;",
        ">;"
    }
.end annotation


# static fields
.field private static final b:Ljava/lang/String;

.field private static c:Lcom/tkay/core/common/c/g;


# instance fields
.field private d:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 21
    const-class v0, Lcom/tkay/core/common/c/g;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/c/g;->b:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Lcom/tkay/core/common/c/b;)V
    .locals 0

    .line 27
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/a;-><init>(Lcom/tkay/core/common/c/b;)V

    const/16 p1, 0x3e8

    .line 24
    iput p1, p0, Lcom/tkay/core/common/c/g;->d:I

    return-void
.end method

.method public static a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/g;
    .locals 2

    .line 32
    sget-object v0, Lcom/tkay/core/common/c/g;->c:Lcom/tkay/core/common/c/g;

    if-nez v0, :cond_1

    .line 33
    const-class v0, Lcom/tkay/core/common/c/g;

    monitor-enter v0

    .line 34
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/c/g;->c:Lcom/tkay/core/common/c/g;

    if-nez v1, :cond_0

    .line 35
    new-instance v1, Lcom/tkay/core/common/c/g;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/c/g;-><init>(Lcom/tkay/core/common/c/b;)V

    sput-object v1, Lcom/tkay/core/common/c/g;->c:Lcom/tkay/core/common/c/g;

    .line 37
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 39
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/c/g;->c:Lcom/tkay/core/common/c/g;

    return-object p0
.end method

.method private declared-synchronized d()V
    .locals 3

    monitor-enter p0

    .line 44
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/g;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 45
    monitor-exit p0

    return-void

    .line 47
    :cond_0
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/core/common/c/g;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "request_info"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2, v2}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 49
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0

    .line 50
    :catch_0
    monitor-exit p0

    return-void
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/tkay/core/common/f/n;)J
    .locals 11

    monitor-enter p0

    .line 53
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/g;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const-wide/16 v1, -0x1

    if-nez v0, :cond_0

    .line 54
    monitor-exit p0

    return-wide v1

    :cond_0
    const/4 v0, 0x0

    .line 59
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/core/common/c/g;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    const-string v4, "request_info"

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    invoke-virtual/range {v3 .. v10}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v3
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 60
    :try_start_2
    invoke-interface {v3}, Landroid/database/Cursor;->getCount()I

    move-result v4

    iget v5, p0, Lcom/tkay/core/common/c/g;->d:I

    if-lt v4, v5, :cond_1

    .line 61
    invoke-direct {p0}, Lcom/tkay/core/common/c/g;->d()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_1
    if-eqz v3, :cond_3

    .line 68
    :goto_0
    :try_start_3
    invoke-interface {v3}, Landroid/database/Cursor;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_2

    :catchall_0
    move-exception p1

    move-object v0, v3

    goto :goto_1

    :catchall_1
    move-exception p1

    :goto_1
    if-eqz v0, :cond_2

    :try_start_4
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    .line 75
    :catch_0
    :cond_2
    :try_start_5
    throw p1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    :catch_1
    move-object v3, v0

    :catch_2
    if-eqz v3, :cond_3

    goto :goto_0

    .line 78
    :catch_3
    :cond_3
    :goto_2
    :try_start_6
    new-instance v3, Landroid/content/ContentValues;

    invoke-direct {v3}, Landroid/content/ContentValues;-><init>()V

    const-string v4, "id"

    .line 79
    iget-object v5, p1, Lcom/tkay/core/common/f/n;->a:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "req_type"

    .line 80
    iget v5, p1, Lcom/tkay/core/common/f/n;->b:I

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v4, "req_url"

    .line 81
    iget-object v5, p1, Lcom/tkay/core/common/f/n;->d:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "req_head"

    .line 82
    iget-object v5, p1, Lcom/tkay/core/common/f/n;->c:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "req_content"

    .line 83
    iget-object v5, p1, Lcom/tkay/core/common/f/n;->e:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "time"

    .line 84
    iget-wide v5, p1, Lcom/tkay/core/common/f/n;->f:J

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const-string v4, "extra"

    .line 85
    iget-object p1, p1, Lcom/tkay/core/common/f/n;->g:Ljava/lang/String;

    invoke-virtual {v3, v4, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 87
    invoke-virtual {p0}, Lcom/tkay/core/common/c/g;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v4, "request_info"

    invoke-virtual {p1, v4, v0, v3}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v0
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_4
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    monitor-exit p0

    return-wide v0

    .line 90
    :catch_4
    monitor-exit p0

    return-wide v1

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b(Lcom/tkay/core/common/f/n;)I
    .locals 6

    monitor-enter p0

    .line 94
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/g;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v1, -0x1

    if-eqz v0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    .line 98
    :cond_0
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/core/common/c/g;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v2, "request_info"

    const-string v3, "id=?"

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/String;

    const/4 v5, 0x0

    iget-object p1, p1, Lcom/tkay/core/common/f/n;->a:Ljava/lang/String;

    aput-object p1, v4, v5

    invoke-virtual {v0, v2, v3, v4}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return p1

    .line 100
    :catchall_0
    monitor-exit p0

    return v1

    .line 95
    :cond_1
    :goto_0
    monitor-exit p0

    return v1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized c()Ljava/util/List;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/n;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    const/4 v0, 0x0

    .line 109
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/g;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "request_info"

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const-string v8, "time"

    const-string v9, "10"

    invoke-virtual/range {v1 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_2

    .line 111
    :try_start_1
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result v2

    if-lez v2, :cond_2

    .line 112
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 114
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 115
    new-instance v3, Lcom/tkay/core/common/f/n;

    invoke-direct {v3}, Lcom/tkay/core/common/f/n;-><init>()V

    const-string v4, "id"

    .line 116
    invoke-interface {v1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {v1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/core/common/f/n;->a:Ljava/lang/String;

    const-string v4, "req_type"

    .line 117
    invoke-interface {v1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {v1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    iput v4, v3, Lcom/tkay/core/common/f/n;->b:I

    const-string v4, "req_url"

    .line 118
    invoke-interface {v1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {v1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/core/common/f/n;->d:Ljava/lang/String;

    const-string v4, "req_head"

    .line 119
    invoke-interface {v1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {v1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/core/common/f/n;->c:Ljava/lang/String;

    const-string v4, "req_content"

    .line 120
    invoke-interface {v1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {v1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/core/common/f/n;->e:Ljava/lang/String;

    const-string v4, "time"

    .line 121
    invoke-interface {v1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {v1, v4}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v4

    iput-wide v4, v3, Lcom/tkay/core/common/f/n;->f:J

    const-string v4, "extra"

    .line 122
    invoke-interface {v1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {v1, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/core/common/f/n;->g:Ljava/lang/String;

    .line 124
    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 126
    :cond_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v1, :cond_1

    .line 142
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 127
    :cond_1
    monitor-exit p0

    return-object v2

    :cond_2
    if-eqz v1, :cond_3

    .line 142
    :try_start_3
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    .line 129
    :cond_3
    monitor-exit p0

    return-object v0

    :catchall_0
    move-object v1, v0

    :catchall_1
    if-eqz v1, :cond_5

    goto :goto_2

    :catch_0
    move-object v1, v0

    .line 135
    :catch_1
    :try_start_4
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    if-eqz v1, :cond_5

    .line 142
    :goto_1
    :try_start_5
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    goto :goto_3

    :catchall_2
    move-exception v0

    if-eqz v1, :cond_4

    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 144
    :cond_4
    throw v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    :catch_2
    move-object v1, v0

    :catch_3
    if-eqz v1, :cond_5

    :goto_2
    goto :goto_1

    :catchall_3
    move-exception v0

    monitor-exit p0

    throw v0

    .line 145
    :cond_5
    :goto_3
    monitor-exit p0

    return-object v0
.end method
