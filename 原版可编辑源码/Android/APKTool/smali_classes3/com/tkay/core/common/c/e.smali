.class public Lcom/tkay/core/common/c/e;
.super Lcom/tkay/core/common/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/c/e$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/c/a<",
        "Lcom/tkay/core/common/a/e;",
        ">;"
    }
.end annotation


# static fields
.field private static volatile c:Lcom/tkay/core/common/c/e;


# instance fields
.field private final b:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/tkay/core/common/c/b;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/a;-><init>(Lcom/tkay/core/common/c/b;)V

    .line 16
    const-class p1, Lcom/tkay/core/common/c/e;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/c/e;->b:Ljava/lang/String;

    return-void
.end method

.method public static a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/e;
    .locals 2

    .line 25
    sget-object v0, Lcom/tkay/core/common/c/e;->c:Lcom/tkay/core/common/c/e;

    if-nez v0, :cond_1

    .line 26
    const-class v0, Lcom/tkay/core/common/c/e;

    monitor-enter v0

    .line 27
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/c/e;->c:Lcom/tkay/core/common/c/e;

    if-nez v1, :cond_0

    .line 28
    new-instance v1, Lcom/tkay/core/common/c/e;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/c/e;-><init>(Lcom/tkay/core/common/c/b;)V

    sput-object v1, Lcom/tkay/core/common/c/e;->c:Lcom/tkay/core/common/c/e;

    .line 30
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 32
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/c/e;->c:Lcom/tkay/core/common/c/e;

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
            "Lcom/tkay/core/common/a/e;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 121
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p1, :cond_0

    .line 122
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-lez v1, :cond_0

    .line 124
    :goto_0
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 125
    new-instance v1, Lcom/tkay/core/common/a/e;

    invoke-direct {v1}, Lcom/tkay/core/common/a/e;-><init>()V

    const-string v2, "dsp_id"

    .line 126
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/a/e;->a(Ljava/lang/String;)V

    const-string v2, "dsp_offer_id"

    .line 127
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/a/e;->b(Ljava/lang/String;)V

    const-string v2, "package_name"

    .line 128
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/a/e;->c(Ljava/lang/String;)V

    .line 129
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 137
    :catchall_0
    :cond_0
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized a(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 10

    monitor-enter p0

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 65
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/e;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "dsp_offer_install_record"

    const/4 v4, 0x0

    const-string v5, "dsp_id = ?  AND dsp_offer_id = ? "

    const/4 v6, 0x2

    new-array v6, v6, [Ljava/lang/String;

    aput-object p1, v6, v0

    const/4 p1, 0x1

    aput-object p2, v6, p1

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 67
    invoke-interface {v1}, Landroid/database/Cursor;->getCount()I

    move-result p2

    if-lez p2, :cond_1

    .line 68
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    .line 83
    :try_start_1
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 69
    :cond_0
    monitor-exit p0

    return p1

    :cond_1
    if-eqz v1, :cond_3

    goto :goto_1

    :catchall_0
    if-eqz v1, :cond_3

    .line 83
    :goto_0
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_2

    .line 76
    :catch_0
    :try_start_3
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v1, :cond_3

    goto :goto_1

    :catchall_1
    move-exception p1

    if-eqz v1, :cond_2

    .line 83
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 85
    :cond_2
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :catch_1
    if-eqz v1, :cond_3

    :goto_1
    goto :goto_0

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1

    .line 86
    :cond_3
    :goto_2
    monitor-exit p0

    return v0
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/tkay/core/common/a/e;)J
    .locals 6

    monitor-enter p0

    .line 36
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/c/e;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 v1, -0x1

    if-nez v0, :cond_0

    .line 37
    monitor-exit p0

    return-wide v1

    .line 39
    :cond_0
    :try_start_1
    invoke-virtual {p1}, Lcom/tkay/core/common/a/e;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/core/common/a/e;->b()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v0, v3}, Lcom/tkay/core/common/c/e;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v0, :cond_1

    .line 41
    :try_start_2
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "dsp_id"

    .line 42
    invoke-virtual {p1}, Lcom/tkay/core/common/a/e;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "dsp_offer_id"

    .line 43
    invoke-virtual {p1}, Lcom/tkay/core/common/a/e;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "package_name"

    .line 44
    invoke-virtual {p1}, Lcom/tkay/core/common/a/e;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "last_update_time"

    .line 45
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 47
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "insertDspOfferInstallRecord--insert,dspid:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/a/e;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ",dspoferrId:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 48
    invoke-virtual {p1}, Lcom/tkay/core/common/a/e;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ",packagename:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/a/e;->c()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 49
    invoke-virtual {p0}, Lcom/tkay/core/common/c/e;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v3, "dsp_offer_install_record"

    const/4 v4, 0x0

    invoke-virtual {p1, v3, v4, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-wide v0

    .line 56
    :cond_1
    :try_start_3
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "insertDspOfferInstallRecord--had inserted...,dspid:"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/a/e;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",dspoferrId:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 57
    invoke-virtual {p1}, Lcom/tkay/core/common/a/e;->b()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",packagename:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/a/e;->c()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 59
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

    .line 90
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-gtz p1, :cond_0

    .line 92
    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 96
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/core/common/c/e;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    const-string v3, "dsp_offer_install_record"

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "last_update_time DESC"

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v10

    invoke-virtual/range {v2 .. v10}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    .line 98
    invoke-direct {p0, v1}, Lcom/tkay/core/common/c/e;->a(Landroid/database/Cursor;)Ljava/util/List;

    move-result-object p1

    .line 99
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 100
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "get limit install record list size:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 101
    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v1, :cond_2

    .line 114
    :goto_0
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_1

    :catchall_0
    if-eqz v1, :cond_2

    goto :goto_0

    .line 107
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

    .line 114
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    .line 116
    :cond_1
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :catch_1
    if-eqz v1, :cond_2

    goto :goto_0

    .line 117
    :cond_2
    :goto_1
    monitor-exit p0

    return-object v0

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method
