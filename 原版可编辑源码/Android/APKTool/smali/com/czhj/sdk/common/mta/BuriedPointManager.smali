.class public Lcom/czhj/sdk/common/mta/BuriedPointManager;
.super Ljava/lang/Object;


# static fields
.field private static final a:I = 0x7a120

.field private static f:Lcom/czhj/sdk/common/mta/BuriedPointManager;


# instance fields
.field private final b:Ljava/util/concurrent/locks/ReadWriteLock;

.field private c:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private volatile e:Z

.field private g:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private h:Landroid/database/sqlite/SQLiteDatabase;

.field private i:I

.field private j:Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    invoke-direct {v0}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;-><init>()V

    iput-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->c:Ljava/util/HashMap;

    iput-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->g:Ljava/util/Set;

    return-void
.end method

.method static synthetic a(Lcom/czhj/sdk/common/mta/BuriedPointManager;)Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;
    .locals 0

    iget-object p0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->j:Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;

    return-object p0
.end method

.method private declared-synchronized a(I)Ljava/util/HashMap;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    :try_start_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v1, 0x0

    :try_start_1
    iget-object v2, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    const-string v3, "select * from point where item not null order by point_id"

    invoke-virtual {v2, v3, v1}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_3

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v3

    if-eqz v3, :cond_3

    const-string v3, "item"

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    const-string v4, "point_id"

    invoke-interface {v1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    const-string v5, "encryption"

    invoke-interface {v1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    :goto_0
    if-ge v2, p1, :cond_3

    invoke-interface {v1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v6

    invoke-interface {v1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v7

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-interface {v1, v5}, Landroid/database/Cursor;->getInt(I)I

    move-result v8

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_1

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    const/4 v9, 0x1

    if-ne v8, v9, :cond_0

    const-string v8, "sigandroid_mtadb"

    invoke-static {v6, v8}, Lcom/czhj/sdk/common/utils/AESUtil;->DecryptString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_1

    const-string v8, "sigandroid_mtadb"

    invoke-static {v6, v8}, Lcom/czhj/sdk/common/utils/AESUtil;->DecryptString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    :cond_0
    invoke-virtual {v0, v7, v6}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v6
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v6, :cond_2

    goto :goto_1

    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_3
    :goto_1
    if-eqz v1, :cond_4

    :goto_2
    :try_start_2
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_3

    :catchall_0
    move-exception p1

    :try_start_3
    const-string v2, "getlogs fail"

    invoke-static {v2, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v1, :cond_4

    goto :goto_2

    :cond_4
    :goto_3
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    if-eqz v1, :cond_5

    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    :cond_5
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic a(Lcom/czhj/sdk/common/mta/BuriedPointManager;Ljava/util/HashMap;)Ljava/util/HashMap;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->c:Ljava/util/HashMap;

    return-object p1
.end method

.method private a()V
    .locals 5

    :try_start_0
    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    const-string v1, "point"

    invoke-static {v0, v1}, Landroid/database/DatabaseUtils;->queryNumEntries(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J

    move-result-wide v0

    const-wide/32 v2, 0x7a120

    cmp-long v4, v0, v2

    if-gtz v4, :cond_0

    return-void

    :cond_0
    sub-long/2addr v0, v2

    invoke-direct {p0, v0, v1}, Lcom/czhj/sdk/common/mta/BuriedPointManager;->a(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    :try_start_1
    const-string v1, "clearLogDB fail"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :goto_0
    return-void

    :catchall_1
    move-exception v0

    throw v0
.end method

.method private a(J)V
    .locals 5

    const-string v0, "point"

    :try_start_0
    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    invoke-static {v1, v0}, Landroid/database/DatabaseUtils;->queryNumEntries(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J

    move-result-wide v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "begin numRows "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "delete from "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " where point_id in ( "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " select point_id from "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " order by point_id "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, " limit "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " )"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    invoke-static {p1, v0}, Landroid/database/DatabaseUtils;->queryNumEntries(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J

    move-result-wide p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "end numRows "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    :try_start_1
    const-string p2, "clearLogDB fail"

    invoke-static {p2, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :goto_0
    return-void

    :catchall_1
    move-exception p1

    throw p1
.end method

.method private a(Ljava/lang/String;Z)V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->e:Z

    new-instance v0, Lcom/czhj/sdk/common/mta/BuriedPointManager$3;

    invoke-direct {v0, p0, p2}, Lcom/czhj/sdk/common/mta/BuriedPointManager$3;-><init>(Lcom/czhj/sdk/common/mta/BuriedPointManager;Z)V

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/network/BuriedPointRequest;->BuriedPointSend(Ljava/lang/String;Lcom/czhj/sdk/common/network/BuriedPointRequest$RequestListener;)V

    return-void
.end method

.method private a(Ljava/util/Set;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Set<",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    const-string v0, "point"

    :try_start_0
    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-nez v1, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    invoke-static {v1, v0}, Landroid/database/DatabaseUtils;->queryNumEntries(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J

    move-result-wide v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "begin numRows "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "delete from "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " where point_id in ( "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-nez v2, :cond_1

    const-string p1, " )"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    invoke-static {p1, v0}, Landroid/database/DatabaseUtils;->queryNumEntries(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J

    move-result-wide v0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "end numRows "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    const/16 v2, 0x2c

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/16 v2, 0x20

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    :try_start_1
    const-string v0, "clearLogDB fail"

    invoke-static {v0, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :goto_1
    return-void

    :catchall_1
    move-exception p1

    throw p1
.end method

.method static synthetic a(Lcom/czhj/sdk/common/mta/BuriedPointManager;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->e:Z

    return p1
.end method

.method private b()V
    .locals 5

    const-string v0, "point"

    :try_start_0
    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    invoke-static {v1, v0}, Landroid/database/DatabaseUtils;->queryNumEntries(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J

    move-result-wide v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "begin numRows "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "delete from "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " where item is null"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    invoke-static {v1, v0}, Landroid/database/DatabaseUtils;->queryNumEntries(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J

    move-result-wide v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "end numRows "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    :try_start_1
    const-string v1, "clearLogDB fail"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :goto_0
    return-void

    :catchall_1
    move-exception v0

    throw v0
.end method

.method static synthetic b(Lcom/czhj/sdk/common/mta/BuriedPointManager;)V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/sdk/common/mta/BuriedPointManager;->b()V

    return-void
.end method

.method private c()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    if-eqz v1, :cond_1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    iput v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->i:I

    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, ","

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_1
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic c(Lcom/czhj/sdk/common/mta/BuriedPointManager;)V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/sdk/common/mta/BuriedPointManager;->a()V

    return-void
.end method

.method private d()V
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->writeLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->lock()V

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->c:Ljava/util/HashMap;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/util/HashMap;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->c:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/czhj/sdk/common/mta/BuriedPointManager;->a(Ljava/util/Set;)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->e:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->c:Ljava/util/HashMap;

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/ReadWriteLock;->writeLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-void
.end method

.method static synthetic d(Lcom/czhj/sdk/common/mta/BuriedPointManager;)V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d()V

    return-void
.end method

.method public static deflateAndBase64(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    new-instance v1, Ljava/util/zip/DeflaterOutputStream;

    invoke-direct {v1, v0}, Ljava/util/zip/DeflaterOutputStream;-><init>(Ljava/io/OutputStream;)V

    const-string v2, "UTF-8"

    invoke-static {v2}, Ljava/nio/charset/Charset;->forName(Ljava/lang/String;)Ljava/nio/charset/Charset;

    move-result-object v2

    invoke-virtual {p0, v2}, Ljava/lang/String;->getBytes(Ljava/nio/charset/Charset;)[B

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/util/zip/DeflaterOutputStream;->write([B)V

    invoke-virtual {v1}, Ljava/util/zip/DeflaterOutputStream;->flush()V

    invoke-virtual {v1}, Ljava/util/zip/DeflaterOutputStream;->close()V

    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p0

    const/4 v0, 0x2

    invoke-static {p0, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p0

    :cond_1
    :goto_0
    return-object p0
.end method

.method private e()V
    .locals 3

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    iget v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->i:I

    if-le v0, v1, :cond_0

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    add-int/lit8 v2, v2, -0x1

    invoke-interface {v0, v1, v2}, Ljava/util/List;->subList(II)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    :goto_0
    const/4 v0, 0x0

    iput v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->i:I

    :cond_1
    return-void
.end method

.method public static getInstance()Lcom/czhj/sdk/common/mta/BuriedPointManager;
    .locals 2

    const-class v0, Lcom/czhj/sdk/common/mta/BuriedPointManager;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/czhj/sdk/common/mta/BuriedPointManager;->f:Lcom/czhj/sdk/common/mta/BuriedPointManager;

    if-nez v1, :cond_0

    new-instance v1, Lcom/czhj/sdk/common/mta/BuriedPointManager;

    invoke-direct {v1}, Lcom/czhj/sdk/common/mta/BuriedPointManager;-><init>()V

    sput-object v1, Lcom/czhj/sdk/common/mta/BuriedPointManager;->f:Lcom/czhj/sdk/common/mta/BuriedPointManager;

    :cond_0
    sget-object v1, Lcom/czhj/sdk/common/mta/BuriedPointManager;->f:Lcom/czhj/sdk/common/mta/BuriedPointManager;

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method


# virtual methods
.method public addWaitSend(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    iput-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    :cond_0
    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->d:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public clearLogDB()V
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getInstance()Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;

    move-result-object v0

    new-instance v1, Lcom/czhj/sdk/common/mta/BuriedPointManager$2;

    invoke-direct {v1, p0}, Lcom/czhj/sdk/common/mta/BuriedPointManager$2;-><init>(Lcom/czhj/sdk/common/mta/BuriedPointManager;)V

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->submit(Ljava/lang/Runnable;)V

    return-void
.end method

.method public getLogBlackList()Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->g:Ljava/util/Set;

    return-object v0
.end method

.method public sendPoint()Ljava/lang/String;
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v1}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    iget-boolean v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->e:Z

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->c:Ljava/util/HashMap;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->c:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->size()I

    move-result v1

    if-lez v1, :cond_0

    goto :goto_0

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/czhj/sdk/common/models/Config;->sharedInstance()Lcom/czhj/sdk/common/models/Config;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/Config;->getMax_send_log_records()I

    move-result v2

    invoke-direct {p0, v2}, Lcom/czhj/sdk/common/mta/BuriedPointManager;->a(I)Ljava/util/HashMap;

    move-result-object v2

    iput-object v2, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->c:Ljava/util/HashMap;

    invoke-virtual {v2}, Ljava/util/HashMap;->size()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_2

    :cond_1
    :goto_0
    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v1}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-object v0

    :cond_2
    :try_start_1
    const-string v2, "["

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->c:Ljava/util/HashMap;

    invoke-virtual {v2}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_3
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    const-string v3, ","

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_4
    const-string v2, "]"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "_batch_value="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "_batch_value: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "BPLog_Count: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->c:Ljava/util/HashMap;

    invoke-virtual {v3}, Ljava/util/HashMap;->size()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {v2}, Lcom/czhj/sdk/common/mta/BuriedPointManager;->deflateAndBase64(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/common/mta/PointEntitySuper;->toURLEncoded(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    invoke-direct {p0, v0, v1}, Lcom/czhj/sdk/common/mta/BuriedPointManager;->a(Ljava/lang/String;Z)V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catch_0
    move-exception v1

    :try_start_3
    invoke-virtual {v1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v1

    :try_start_4
    const-string v2, "sendPoint fail "

    invoke-static {v2, v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :goto_2
    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v1}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    return-object v0

    :catchall_1
    move-exception v0

    iget-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->b:Ljava/util/concurrent/locks/ReadWriteLock;

    invoke-interface {v1}, Ljava/util/concurrent/locks/ReadWriteLock;->readLock()Ljava/util/concurrent/locks/Lock;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V

    throw v0
.end method

.method public start()V
    .locals 4

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->j:Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;

    if-nez v0, :cond_1

    :cond_0
    invoke-static {}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->getInstance()Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->h:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/mta/BuriedPointManager;->clearLogDB()V

    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "sendLog"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    new-instance v1, Lcom/czhj/sdk/common/mta/BuriedPointManager$1;

    new-instance v2, Landroid/os/Handler;

    invoke-direct {v2, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    invoke-direct {v1, p0, v2}, Lcom/czhj/sdk/common/mta/BuriedPointManager$1;-><init>(Lcom/czhj/sdk/common/mta/BuriedPointManager;Landroid/os/Handler;)V

    iput-object v1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager;->j:Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;

    invoke-static {}, Lcom/czhj/sdk/common/models/Config;->sharedInstance()Lcom/czhj/sdk/common/models/Config;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/models/Config;->getSend_log_interval()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v2, v0

    invoke-virtual {v1, v2, v3}, Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;->startRepeating(J)V

    :cond_1
    return-void
.end method
