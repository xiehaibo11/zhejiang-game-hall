.class public final Lcom/tkay/basead/b/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/b/c$a;
    }
.end annotation


# static fields
.field private static a:Lcom/tkay/basead/b/c;


# instance fields
.field private b:Landroid/content/Context;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 27
    iput-object p1, p0, Lcom/tkay/basead/b/c;->b:Landroid/content/Context;

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/basead/b/c;
    .locals 1

    .line 31
    sget-object v0, Lcom/tkay/basead/b/c;->a:Lcom/tkay/basead/b/c;

    if-nez v0, :cond_0

    .line 32
    new-instance v0, Lcom/tkay/basead/b/c;

    invoke-direct {v0, p0}, Lcom/tkay/basead/b/c;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/tkay/basead/b/c;->a:Lcom/tkay/basead/b/c;

    .line 34
    :cond_0
    sget-object p0, Lcom/tkay/basead/b/c;->a:Lcom/tkay/basead/b/c;

    return-object p0
.end method

.method private static a(Landroid/database/Cursor;)Lcom/tkay/basead/c/c;
    .locals 3

    .line 183
    new-instance v0, Lcom/tkay/basead/c/c;

    invoke-direct {v0}, Lcom/tkay/basead/c/c;-><init>()V

    const-string v1, "offer_id"

    .line 184
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/basead/c/c;->a:Ljava/lang/String;

    const-string v1, "show_num"

    .line 185
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1

    iput v1, v0, Lcom/tkay/basead/c/c;->d:I

    const-string v1, "show_time"

    .line 186
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v1

    iput-wide v1, v0, Lcom/tkay/basead/c/c;->e:J

    const-string v1, "record_date"

    .line 187
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/basead/c/c;->f:Ljava/lang/String;

    const-string v1, "offer_cap"

    .line 188
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1

    iput v1, v0, Lcom/tkay/basead/c/c;->b:I

    const-string v1, "offer_pacing"

    .line 189
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v1

    iput-wide v1, v0, Lcom/tkay/basead/c/c;->c:J

    return-object v0
.end method

.method private declared-synchronized d(Ljava/lang/String;)Z
    .locals 10

    monitor-enter p0

    .line 160
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/b/c;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/b/b;->a(Landroid/content/Context;)Lcom/tkay/basead/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/basead/b/b;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "my_offer_cap_pacing"

    const-string v0, "offer_id"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v3

    const-string v4, "offer_id=?"

    const/4 v0, 0x1

    new-array v5, v0, [Ljava/lang/String;

    const/4 v9, 0x0

    aput-object p1, v5, v9

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 164
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v1

    if-lez v1, :cond_0

    .line 165
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 166
    monitor-exit p0

    return v0

    :cond_0
    if-eqz p1, :cond_1

    .line 169
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 171
    :cond_1
    monitor-exit p0

    return v9

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/tkay/basead/c/c;)J
    .locals 6

    monitor-enter p0

    .line 124
    :try_start_0
    monitor-enter p0

    if-nez p1, :cond_0

    const-wide/16 v0, 0x0

    .line 127
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    monitor-exit p0

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    .line 129
    :try_start_1
    iget-object v2, p0, Lcom/tkay/basead/b/c;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/basead/b/b;->a(Landroid/content/Context;)Lcom/tkay/basead/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/basead/b/b;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v2, :cond_1

    .line 130
    :try_start_2
    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-wide v0

    .line 133
    :cond_1
    :try_start_3
    new-instance v2, Landroid/content/ContentValues;

    invoke-direct {v2}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "offer_id"

    .line 134
    iget-object v4, p1, Lcom/tkay/basead/c/c;->a:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "show_num"

    .line 135
    iget v4, p1, Lcom/tkay/basead/c/c;->d:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "show_time"

    .line 136
    iget-wide v4, p1, Lcom/tkay/basead/c/c;->e:J

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const-string v3, "record_date"

    .line 137
    iget-object v4, p1, Lcom/tkay/basead/c/c;->f:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "offer_cap"

    .line 138
    iget v4, p1, Lcom/tkay/basead/c/c;->b:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "offer_pacing"

    .line 139
    iget-wide v4, p1, Lcom/tkay/basead/c/c;->c:J

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 142
    iget-object v3, p1, Lcom/tkay/basead/c/c;->a:Ljava/lang/String;

    invoke-direct {p0, v3}, Lcom/tkay/basead/b/c;->d(Ljava/lang/String;)Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_2

    .line 143
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v5, "offer_id = \'"

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p1, p1, Lcom/tkay/basead/c/c;->a:Ljava/lang/String;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 144
    iget-object v3, p0, Lcom/tkay/basead/b/c;->b:Landroid/content/Context;

    invoke-static {v3}, Lcom/tkay/basead/b/b;->a(Landroid/content/Context;)Lcom/tkay/basead/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/basead/b/b;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    const-string v5, "my_offer_cap_pacing"

    invoke-virtual {v3, v5, v2, p1, v4}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    int-to-long v0, p1

    :try_start_4
    monitor-exit p0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit p0

    return-wide v0

    .line 147
    :cond_2
    :try_start_5
    iget-object p1, p0, Lcom/tkay/basead/b/c;->b:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/basead/b/b;->a(Landroid/content/Context;)Lcom/tkay/basead/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/basead/b/b;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v3, "my_offer_cap_pacing"

    invoke-virtual {p1, v3, v4, v2}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v0
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    :try_start_6
    monitor-exit p0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    monitor-exit p0

    return-wide v0

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 150
    :try_start_7
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 153
    monitor-exit p0
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    monitor-exit p0

    return-wide v0

    .line 154
    :goto_0
    :try_start_8
    monitor-exit p0

    throw p1
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/lang/String;)Lcom/tkay/basead/c/c;
    .locals 10

    monitor-enter p0

    const/4 v0, 0x0

    .line 44
    :try_start_0
    iget-object v1, p0, Lcom/tkay/basead/b/c;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/basead/b/b;->a(Landroid/content/Context;)Lcom/tkay/basead/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/basead/b/b;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "my_offer_cap_pacing"

    const/4 v4, 0x0

    const-string v5, "offer_id=?"

    const/4 v1, 0x1

    new-array v6, v1, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p1, v6, v1

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_1

    .line 47
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v1

    if-lez v1, :cond_1

    .line 48
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    .line 49
    invoke-static {p1}, Lcom/tkay/basead/b/c;->a(Landroid/database/Cursor;)Lcom/tkay/basead/c/c;

    move-result-object v1

    .line 50
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p1, :cond_0

    .line 60
    :try_start_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 51
    :cond_0
    monitor-exit p0

    return-object v1

    :cond_1
    if-eqz p1, :cond_3

    goto :goto_1

    :catchall_0
    move-object p1, v0

    :catchall_1
    if-eqz p1, :cond_3

    .line 60
    :goto_0
    :try_start_3
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_2

    :catch_0
    move-object p1, v0

    .line 55
    :catch_1
    :try_start_4
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    if-eqz p1, :cond_3

    goto :goto_1

    :catchall_2
    move-exception v0

    if-eqz p1, :cond_2

    .line 60
    :try_start_5
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    .line 62
    :cond_2
    throw v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    :catch_2
    move-object p1, v0

    :catch_3
    if-eqz p1, :cond_3

    :goto_1
    goto :goto_0

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1

    .line 63
    :cond_3
    :goto_2
    monitor-exit p0

    return-object v0
.end method

.method public final declared-synchronized b(Ljava/lang/String;)Ljava/util/List;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/basead/c/c;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    const/4 v0, 0x0

    .line 79
    :try_start_0
    iget-object v1, p0, Lcom/tkay/basead/b/c;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/basead/b/b;->a(Landroid/content/Context;)Lcom/tkay/basead/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/basead/b/b;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "my_offer_cap_pacing"

    const/4 v4, 0x0

    const-string v5, "offer_cap <= show_num AND record_date=? AND offer_cap !=?"

    const/4 v1, 0x2

    new-array v6, v1, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p1, v6, v1

    const/4 p1, 0x1

    const-string v1, "-1"

    aput-object v1, v6, p1

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_2

    .line 82
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v1

    if-lez v1, :cond_2

    .line 83
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 84
    :goto_0
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 85
    invoke-static {p1}, Lcom/tkay/basead/b/c;->a(Landroid/database/Cursor;)Lcom/tkay/basead/c/c;

    move-result-object v2

    .line 86
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 89
    :cond_0
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p1, :cond_1

    .line 99
    :try_start_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 90
    :cond_1
    monitor-exit p0

    return-object v1

    :cond_2
    if-eqz p1, :cond_4

    goto :goto_2

    :catchall_0
    move-object p1, v0

    :catchall_1
    if-eqz p1, :cond_4

    .line 99
    :goto_1
    :try_start_3
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_3

    :catch_0
    move-object p1, v0

    .line 94
    :catch_1
    :try_start_4
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    if-eqz p1, :cond_4

    goto :goto_2

    :catchall_2
    move-exception v0

    if-eqz p1, :cond_3

    .line 99
    :try_start_5
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    .line 101
    :cond_3
    throw v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    :catch_2
    move-object p1, v0

    :catch_3
    if-eqz p1, :cond_4

    :goto_2
    goto :goto_1

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1

    .line 102
    :cond_4
    :goto_3
    monitor-exit p0

    return-object v0
.end method

.method public final declared-synchronized c(Ljava/lang/String;)V
    .locals 3

    monitor-enter p0

    .line 111
    :try_start_0
    monitor-enter p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 113
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "record_date != \'"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 114
    iget-object v0, p0, Lcom/tkay/basead/b/c;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/b/b;->a(Landroid/content/Context;)Lcom/tkay/basead/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/basead/b/b;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v0, :cond_0

    .line 115
    :try_start_2
    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-void

    .line 117
    :cond_0
    :try_start_3
    iget-object v0, p0, Lcom/tkay/basead/b/c;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/b/b;->a(Landroid/content/Context;)Lcom/tkay/basead/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/basead/b/b;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "my_offer_cap_pacing"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p1, v2}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    .line 120
    :catch_0
    :goto_0
    :try_start_4
    monitor-exit p0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit p0

    return-void

    :goto_1
    :try_start_5
    monitor-exit p0

    throw p1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method
