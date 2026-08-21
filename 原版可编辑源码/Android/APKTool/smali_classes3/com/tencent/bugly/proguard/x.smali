.class public final Lcom/tencent/bugly/proguard/x;
.super Landroid/database/sqlite/SQLiteOpenHelper;
.source "BUGLY"


# static fields
.field public static a:Ljava/lang/String; = "bugly_db"

.field public static b:I = 0x10


# instance fields
.field protected c:Landroid/content/Context;

.field private d:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tencent/bugly/proguard/o;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/tencent/bugly/proguard/o;",
            ">;)V"
        }
    .end annotation

    .line 68
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/tencent/bugly/proguard/x;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sget v1, Lcom/tencent/bugly/proguard/x;->b:I

    const/4 v2, 0x0

    invoke-direct {p0, p1, v0, v2, v1}, Landroid/database/sqlite/SQLiteOpenHelper;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V

    .line 70
    iput-object p1, p0, Lcom/tencent/bugly/proguard/x;->c:Landroid/content/Context;

    .line 71
    iput-object p2, p0, Lcom/tencent/bugly/proguard/x;->d:Ljava/util/List;

    return-void
.end method

.method private declared-synchronized a(Landroid/database/sqlite/SQLiteDatabase;)Z
    .locals 5

    monitor-enter p0

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "t_lr"

    const-string v2, "t_ui"

    const-string v3, "t_pf"

    .line 194
    filled-new-array {v1, v2, v3}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    :goto_0
    const/4 v3, 0x3

    if-ge v2, v3, :cond_0

    .line 197
    aget-object v3, v1, v2

    const-string v4, "DROP TABLE IF EXISTS "

    .line 198
    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    new-array v4, v0, [Ljava/lang/String;

    invoke-virtual {p1, v3, v4}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 200
    :cond_0
    monitor-exit p0

    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 202
    :try_start_1
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 203
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 205
    :cond_1
    monitor-exit p0

    return v0

    :goto_1
    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final declared-synchronized getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;
    .locals 7

    monitor-enter p0

    const/4 v0, 0x0

    const/4 v1, 0x0

    const/4 v2, 0x0

    :goto_0
    if-nez v0, :cond_1

    const/4 v3, 0x5

    if-ge v2, v3, :cond_1

    add-int/lit8 v2, v2, 0x1

    .line 269
    :try_start_0
    invoke-super {p0}, Landroid/database/sqlite/SQLiteOpenHelper;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    goto :goto_1

    :catch_0
    :try_start_1
    const-string v4, "[Database] Try to get db(count: %d)."

    const/4 v5, 0x1

    .line 271
    new-array v5, v5, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v1

    invoke-static {v4, v5}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    if-ne v2, v3, :cond_0

    const-string v3, "[Database] Failed to get db."

    .line 273
    new-array v4, v1, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_0
    const-wide/16 v3, 0xc8

    .line 276
    :try_start_2
    invoke-static {v3, v4}, Ljava/lang/Thread;->sleep(J)V
    :try_end_2
    .catch Ljava/lang/InterruptedException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_1
    move-exception v3

    .line 278
    :try_start_3
    invoke-virtual {v3}, Ljava/lang/InterruptedException;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    :goto_1
    monitor-exit p0

    throw v0

    .line 282
    :cond_1
    monitor-exit p0

    return-object v0
.end method

.method public final declared-synchronized getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;
    .locals 7

    monitor-enter p0

    const/4 v0, 0x0

    const/4 v1, 0x0

    const/4 v2, 0x0

    :goto_0
    if-nez v0, :cond_1

    const/4 v3, 0x5

    if-ge v2, v3, :cond_1

    add-int/lit8 v2, v2, 0x1

    .line 293
    :try_start_0
    invoke-super {p0}, Landroid/database/sqlite/SQLiteOpenHelper;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catch_0
    :try_start_1
    const-string v4, "[Database] Try to get db(count: %d)."

    const/4 v5, 0x1

    .line 295
    new-array v5, v5, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v1

    invoke-static {v4, v5}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    if-ne v2, v3, :cond_0

    const-string v3, "[Database] Failed to get db."

    .line 297
    new-array v4, v1, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_0
    const-wide/16 v3, 0xc8

    .line 301
    :try_start_2
    invoke-static {v3, v4}, Ljava/lang/Thread;->sleep(J)V
    :try_end_2
    .catch Ljava/lang/InterruptedException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_1
    move-exception v3

    .line 303
    :try_start_3
    invoke-virtual {v3}, Ljava/lang/InterruptedException;->printStackTrace()V

    goto :goto_0

    :cond_1
    if-nez v0, :cond_2

    const-string v2, "[Database] db error delay error record 1min."

    .line 309
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v2, v1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0

    .line 311
    :cond_2
    :goto_1
    monitor-exit p0

    return-object v0
.end method

.method public final declared-synchronized onCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 4

    monitor-enter p0

    .line 79
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v1, 0x0

    .line 82
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->setLength(I)V

    const-string v2, " CREATE TABLE IF NOT EXISTS t_ui ( _id INTEGER PRIMARY KEY , _tm int , _ut int , _tp int , _dt blob , _pc text ) "

    .line 83
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 89
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 90
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;[Ljava/lang/Object;)V

    .line 93
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->setLength(I)V

    const-string v2, " CREATE TABLE IF NOT EXISTS t_lr ( _id INTEGER PRIMARY KEY , _tp int , _tm int , _pc text , _th text , _dt blob ) "

    .line 94
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 100
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 101
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;[Ljava/lang/Object;)V

    .line 104
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->setLength(I)V

    const-string v2, " CREATE TABLE IF NOT EXISTS t_pf ( _id integer , _tp text , _tm int , _dt blob,primary key(_id,_tp )) "

    .line 105
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 110
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 111
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;[Ljava/lang/Object;)V

    .line 114
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->setLength(I)V

    const-string v2, " CREATE TABLE IF NOT EXISTS t_cr ( _id INTEGER PRIMARY KEY , _tm int , _s1 text , _up int , _me int , _uc int , _dt blob ) "

    .line 115
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 122
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 123
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;[Ljava/lang/Object;)V

    .line 127
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->setLength(I)V

    const-string v2, " CREATE TABLE IF NOT EXISTS dl_1002 (_id integer primary key autoincrement, _dUrl varchar(100), _sFile varchar(100), _sLen INTEGER, _tLen INTEGER, _MD5 varchar(100), _DLTIME INTEGER)"

    .line 128
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 133
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 134
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;[Ljava/lang/Object;)V

    .line 137
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->setLength(I)V

    const-string v2, "CREATE TABLE IF NOT EXISTS ge_1002 (_id integer primary key autoincrement, _time INTEGER, _datas blob)"

    .line 138
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 141
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 142
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;[Ljava/lang/Object;)V

    .line 145
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->setLength(I)V

    const-string v2, " CREATE TABLE IF NOT EXISTS st_1002 ( _id integer , _tp text , _tm int , _dt blob,primary key(_id,_tp )) "

    .line 146
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 151
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 152
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;[Ljava/lang/Object;)V

    .line 155
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->setLength(I)V

    const-string v2, " CREATE TABLE IF NOT EXISTS t_sla ( _id TEXT NOT NULL , _tm INTEGER NOT NULL , _dt TEXT NOT NULL , PRIMARY KEY(_id) ) "

    .line 156
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 163
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 164
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 165
    new-array v1, v1, [Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_2

    :catch_0
    move-exception v0

    .line 167
    :try_start_1
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 168
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 172
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/x;->d:Ljava/util/List;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v0, :cond_1

    .line 173
    monitor-exit p0

    return-void

    .line 175
    :cond_1
    :try_start_2
    iget-object v0, p0, Lcom/tencent/bugly/proguard/x;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tencent/bugly/proguard/o;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 177
    :try_start_3
    invoke-virtual {v1, p1}, Lcom/tencent/bugly/proguard/o;->onDbCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    :try_end_3
    .catch Ljava/lang/Throwable; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_1

    :catch_1
    move-exception v1

    .line 179
    :try_start_4
    invoke-static {v1}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 180
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_1

    .line 184
    :cond_3
    monitor-exit p0

    return-void

    :goto_2
    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized onDowngrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 5
    .annotation build Landroid/annotation/TargetApi;
        value = 0xb
    .end annotation

    monitor-enter p0

    .line 237
    :try_start_0
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->c()I

    move-result v0

    const/16 v1, 0xb

    if-lt v0, v1, :cond_3

    const-string v0, "[Database] Downgrade %d to %d drop tables."

    const/4 v1, 0x2

    .line 238
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const/4 v2, 0x1

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v1, v2

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 239
    iget-object v0, p0, Lcom/tencent/bugly/proguard/x;->d:Ljava/util/List;

    if-eqz v0, :cond_1

    .line 240
    iget-object v0, p0, Lcom/tencent/bugly/proguard/x;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tencent/bugly/proguard/o;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 242
    :try_start_1
    invoke-virtual {v1, p1, p2, p3}, Lcom/tencent/bugly/proguard/o;->onDbDowngrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 244
    :try_start_2
    invoke-static {v1}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 245
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    .line 250
    :cond_1
    invoke-direct {p0, p1}, Lcom/tencent/bugly/proguard/x;->a(Landroid/database/sqlite/SQLiteDatabase;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 251
    invoke-virtual {p0, p1}, Lcom/tencent/bugly/proguard/x;->onCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-void

    :cond_2
    :try_start_3
    const-string p1, "[Database] Failed to drop, delete db."

    .line 253
    new-array p2, v3, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 254
    iget-object p1, p0, Lcom/tencent/bugly/proguard/x;->c:Landroid/content/Context;

    sget-object p2, Lcom/tencent/bugly/proguard/x;->a:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/content/Context;->getDatabasePath(Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 255
    invoke-virtual {p1}, Ljava/io/File;->canWrite()Z

    move-result p2

    if-eqz p2, :cond_3

    .line 256
    invoke-virtual {p1}, Ljava/io/File;->delete()Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 260
    :cond_3
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 5

    monitor-enter p0

    :try_start_0
    const-string v0, "[Database] Upgrade %d to %d , drop tables!"

    const/4 v1, 0x2

    .line 211
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const/4 v2, 0x1

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v1, v2

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 212
    iget-object v0, p0, Lcom/tencent/bugly/proguard/x;->d:Ljava/util/List;

    if-eqz v0, :cond_1

    .line 213
    iget-object v0, p0, Lcom/tencent/bugly/proguard/x;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tencent/bugly/proguard/o;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 215
    :try_start_1
    invoke-virtual {v1, p1, p2, p3}, Lcom/tencent/bugly/proguard/o;->onDbUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 217
    :try_start_2
    invoke-static {v1}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 218
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    .line 223
    :cond_1
    invoke-direct {p0, p1}, Lcom/tencent/bugly/proguard/x;->a(Landroid/database/sqlite/SQLiteDatabase;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 224
    invoke-virtual {p0, p1}, Lcom/tencent/bugly/proguard/x;->onCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-void

    :cond_2
    :try_start_3
    const-string p1, "[Database] Failed to drop, delete db."

    .line 226
    new-array p2, v3, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 227
    iget-object p1, p0, Lcom/tencent/bugly/proguard/x;->c:Landroid/content/Context;

    sget-object p2, Lcom/tencent/bugly/proguard/x;->a:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/content/Context;->getDatabasePath(Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 228
    invoke-virtual {p1}, Ljava/io/File;->canWrite()Z

    move-result p2

    if-eqz p2, :cond_3

    .line 229
    invoke-virtual {p1}, Ljava/io/File;->delete()Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 232
    :cond_3
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
