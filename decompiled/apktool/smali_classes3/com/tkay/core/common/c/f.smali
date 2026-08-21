.class public Lcom/tkay/core/common/c/f;
.super Lcom/tkay/core/common/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/c/f$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/c/a<",
        "Lcom/tkay/core/common/a/f;",
        ">;"
    }
.end annotation


# static fields
.field private static volatile d:Lcom/tkay/core/common/c/f;


# instance fields
.field private final b:Ljava/lang/String;

.field private final c:J


# direct methods
.method private constructor <init>(Lcom/tkay/core/common/c/b;)V
    .locals 2

    .line 25
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/a;-><init>(Lcom/tkay/core/common/c/b;)V

    .line 18
    const-class p1, Lcom/tkay/core/common/c/f;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/c/f;->b:Ljava/lang/String;

    const-wide/32 v0, 0x5265c00

    .line 20
    iput-wide v0, p0, Lcom/tkay/core/common/c/f;->c:J

    return-void
.end method

.method private declared-synchronized a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/a/f;
    .locals 10

    monitor-enter p0

    const/4 v0, 0x0

    .line 105
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/f;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "dsp_offer_show_record"

    const/4 v3, 0x0

    const-string v4, "dsp_id = ?  AND dsp_offer_id = ? "

    const/4 v5, 0x2

    new-array v5, v5, [Ljava/lang/String;

    const/4 v9, 0x0

    aput-object p1, v5, v9

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

    .line 107
    :try_start_1
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/f;->a(Landroid/database/Cursor;)Ljava/util/List;

    move-result-object p2

    .line 108
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    .line 109
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 110
    invoke-interface {p2, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/a/f;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p1, :cond_0

    .line 124
    :try_start_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 110
    :cond_0
    monitor-exit p0

    return-object p2

    :cond_1
    if-eqz p1, :cond_3

    goto :goto_1

    :catchall_0
    move-object p1, v0

    :catchall_1
    if-eqz p1, :cond_3

    .line 124
    :goto_0
    :try_start_3
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_2

    :catch_0
    move-object p1, v0

    .line 117
    :catch_1
    :try_start_4
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    if-eqz p1, :cond_3

    goto :goto_1

    :catchall_2
    move-exception p2

    if-eqz p1, :cond_2

    .line 124
    :try_start_5
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    .line 126
    :cond_2
    throw p2
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

    .line 127
    :cond_3
    :goto_2
    monitor-exit p0

    return-object v0
.end method

.method public static a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/f;
    .locals 2

    .line 29
    sget-object v0, Lcom/tkay/core/common/c/f;->d:Lcom/tkay/core/common/c/f;

    if-nez v0, :cond_1

    .line 30
    const-class v0, Lcom/tkay/core/common/c/f;

    monitor-enter v0

    .line 31
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/c/f;->d:Lcom/tkay/core/common/c/f;

    if-nez v1, :cond_0

    .line 32
    new-instance v1, Lcom/tkay/core/common/c/f;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/c/f;-><init>(Lcom/tkay/core/common/c/b;)V

    sput-object v1, Lcom/tkay/core/common/c/f;->d:Lcom/tkay/core/common/c/f;

    .line 34
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 36
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/c/f;->d:Lcom/tkay/core/common/c/f;

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
            "Lcom/tkay/core/common/a/f;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 131
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p1, :cond_0

    .line 132
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-lez v1, :cond_0

    .line 134
    :goto_0
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 135
    new-instance v1, Lcom/tkay/core/common/a/f;

    invoke-direct {v1}, Lcom/tkay/core/common/a/f;-><init>()V

    const-string v2, "dsp_id"

    .line 136
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/a/f;->a(Ljava/lang/String;)V

    const-string v2, "dsp_offer_id"

    .line 137
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/a/f;->b(Ljava/lang/String;)V

    const-string v2, "show_limit"

    .line 138
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/a/f;->a(I)V

    const-string v2, "show_count"

    .line 139
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/a/f;->b(I)V

    .line 140
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 148
    :catchall_0
    :cond_0
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/tkay/core/common/a/f;)J
    .locals 6

    monitor-enter p0

    .line 40
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/f;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 v1, -0x1

    if-nez v0, :cond_0

    .line 41
    monitor-exit p0

    return-wide v1

    .line 44
    :cond_0
    :try_start_1
    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->c()I

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-gtz v0, :cond_1

    .line 45
    monitor-exit p0

    return-wide v1

    .line 47
    :cond_1
    :try_start_2
    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->b()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v0, v3}, Lcom/tkay/core/common/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/a/f;

    move-result-object v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-nez v0, :cond_2

    .line 50
    :try_start_3
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "dsp_id"

    .line 51
    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "dsp_offer_id"

    .line 52
    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "show_limit"

    .line 53
    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->c()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "show_count"

    const/4 v4, 0x0

    .line 54
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v3, "create_time"

    .line 55
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const-string v3, "last_update_time"

    .line 56
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 57
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "insertDspOfferShowRecord--insert dspid:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ",dspOfferId:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 58
    invoke-virtual {p0}, Lcom/tkay/core/common/c/f;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v3, "dsp_offer_show_record"

    const/4 v4, 0x0

    invoke-virtual {p1, v3, v4, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v0
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit p0

    return-wide v0

    .line 60
    :cond_2
    :try_start_4
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "insertDspOfferShowRecord--had inserted...,dspid:"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",dspOfferId:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 67
    :catch_0
    monitor-exit p0

    return-wide v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(I)Ljava/util/List;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/a/d;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 152
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-gtz p1, :cond_0

    .line 154
    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 158
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/core/common/c/f;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "dsp_offer_show_record"

    const/4 v4, 0x0

    const-string v5, "show_count > show_limit"

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "last_update_time DESC"

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v10

    invoke-virtual/range {v2 .. v10}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    .line 162
    invoke-direct {p0, v1}, Lcom/tkay/core/common/c/f;->a(Landroid/database/Cursor;)Ljava/util/List;

    move-result-object p1

    .line 163
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "get limit show cap record list size:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 164
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 165
    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v1, :cond_2

    .line 178
    :goto_0
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_1

    :catchall_0
    if-eqz v1, :cond_2

    goto :goto_0

    .line 171
    :catch_0
    :try_start_3
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v1, :cond_2

    goto :goto_0

    :catchall_1
    move-exception p1

    if-eqz v1, :cond_1

    .line 178
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 180
    :cond_1
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :catch_1
    if-eqz v1, :cond_2

    goto :goto_0

    .line 181
    :cond_2
    :goto_1
    monitor-exit p0

    return-object v0

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b(Lcom/tkay/core/common/a/f;)J
    .locals 10

    monitor-enter p0

    .line 71
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/f;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 v1, -0x1

    if-nez v0, :cond_0

    .line 72
    monitor-exit p0

    return-wide v1

    .line 75
    :cond_0
    :try_start_1
    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->c()I

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-gtz v0, :cond_1

    .line 76
    monitor-exit p0

    return-wide v1

    .line 78
    :cond_1
    :try_start_2
    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->b()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v0, v3}, Lcom/tkay/core/common/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/a/f;

    move-result-object v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v0, :cond_2

    .line 81
    :try_start_3
    new-instance v3, Landroid/content/ContentValues;

    invoke-direct {v3}, Landroid/content/ContentValues;-><init>()V

    const-string v4, "dsp_id"

    .line 82
    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->a()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "dsp_offer_id"

    .line 83
    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->b()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "show_limit"

    .line 84
    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->c()I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v4, "show_count"

    .line 85
    invoke-virtual {v0}, Lcom/tkay/core/common/a/f;->d()I

    move-result v5

    const/4 v6, 0x1

    add-int/2addr v5, v6

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v4, "last_update_time"

    .line 86
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    invoke-static {v7, v8}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 87
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "updateDspOfferShowRecord--update dspid:"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->a()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ",dspOfferId:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 88
    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->b()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ",cur show count:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/core/common/a/f;->d()I

    move-result v0

    add-int/2addr v0, v6

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ",limit show cap:"

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->c()I

    move-result v0

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "dsp_id = ? and dsp_offer_id = ? "

    .line 91
    invoke-virtual {p0}, Lcom/tkay/core/common/c/f;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v4

    const-string v5, "dsp_offer_show_record"

    const/4 v7, 0x2

    new-array v7, v7, [Ljava/lang/String;

    const/4 v8, 0x0

    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->a()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v7, v8

    invoke-virtual {p1}, Lcom/tkay/core/common/a/f;->b()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v7, v6

    invoke-virtual {v4, v5, v3, v0, v7}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    int-to-long v0, p1

    monitor-exit p0

    return-wide v0

    .line 99
    :catch_0
    :cond_2
    monitor-exit p0

    return-wide v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final c()V
    .locals 5

    .line 186
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "create_time < "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-wide/32 v3, 0x5265c00

    sub-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 187
    invoke-virtual {p0}, Lcom/tkay/core/common/c/f;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    if-nez v1, :cond_0

    return-void

    .line 190
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/f;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    const-string v2, "dsp_offer_show_record"

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v0, v3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method
