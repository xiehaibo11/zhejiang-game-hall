.class public Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;
.super Landroid/database/sqlite/SQLiteOpenHelper;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;
    }
.end annotation


# static fields
.field public static final DB_ERROR_BAD_INPUT:J = -0x2L

.field public static final DB_WRITE_ERROR:J = -0x1L

.field public static final TABLE_POINT:Ljava/lang/String; = "point"

.field private static a:Ljava/lang/String; = "sigmob_mta.db"

.field private static final b:I = 0x9

.field private static c:Ljava/lang/String; = "CREATE TABLE point ( point_id integer  primary key  ,item text , encryption int);\n"

.field private static final d:J = -0x6L

.field private static final e:J = -0x5L

.field private static final f:J = -0x4L

.field private static final g:J

.field private static h:Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;

.field private static i:Landroid/database/sqlite/SQLiteDatabase;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 3

    sget-object v0, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->a:Ljava/lang/String;

    const/4 v1, 0x0

    const/16 v2, 0x9

    invoke-direct {p0, p1, v0, v1, v2}, Landroid/database/sqlite/SQLiteOpenHelper;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V

    return-void
.end method

.method private static a(Landroid/database/sqlite/SQLiteDatabase;)J
    .locals 2

    if-nez p0, :cond_0

    const-wide/16 v0, -0x6

    return-wide v0

    :cond_0
    invoke-virtual {p0}, Landroid/database/sqlite/SQLiteDatabase;->isOpen()Z

    move-result v0

    if-nez v0, :cond_1

    const-wide/16 v0, -0x5

    return-wide v0

    :cond_1
    invoke-virtual {p0}, Landroid/database/sqlite/SQLiteDatabase;->isReadOnly()Z

    move-result p0

    if-eqz p0, :cond_2

    const-wide/16 v0, -0x4

    return-wide v0

    :cond_2
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method private a(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "alter table "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, " drop column "

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    return-void
.end method

.method private a(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "alter table "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p4, " add "

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " "

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    return-void
.end method

.method private b(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    const-string v0, "DROP TABLE IF EXISTS point"

    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->onCreate(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method

.method public static getInstance()Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->h:Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;

    return-object v0
.end method

.method public static initialize(Landroid/content/Context;)V
    .locals 2

    sget-object v0, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->h:Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;

    if-nez v0, :cond_1

    const-class v0, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->h:Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;

    if-nez v1, :cond_0

    new-instance v1, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;

    invoke-direct {v1, p0}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->h:Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_1
    :goto_0
    return-void
.end method

.method public static insert(Landroid/database/sqlite/SQLiteDatabase;Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;)V
    .locals 5

    invoke-virtual {p0}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    const/4 v0, 0x1

    :try_start_0
    iget-object v1, p1, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;->b:Ljava/lang/String;

    invoke-virtual {p0, v1}, Landroid/database/sqlite/SQLiteDatabase;->compileStatement(Ljava/lang/String;)Landroid/database/sqlite/SQLiteStatement;

    move-result-object v1

    move v2, v0

    :goto_0
    iget-object v3, p1, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;->d:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-gt v2, v3, :cond_5

    iget-object v3, p1, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;->d:Ljava/util/List;

    add-int/lit8 v4, v2, -0x1

    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    iget-object v4, p1, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;->c:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-nez v3, :cond_1

    :cond_0
    invoke-virtual {v1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindNull(I)V

    goto :goto_1

    :cond_1
    instance-of v4, v3, Ljava/lang/String;

    if-eqz v4, :cond_2

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    goto :goto_1

    :cond_2
    instance-of v4, v3, Ljava/lang/Double;

    if-eqz v4, :cond_3

    check-cast v3, Ljava/lang/Double;

    invoke-virtual {v3}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v3

    invoke-virtual {v1, v2, v3, v4}, Landroid/database/sqlite/SQLiteStatement;->bindDouble(ID)V

    goto :goto_1

    :cond_3
    instance-of v4, v3, Ljava/lang/Number;

    if-eqz v4, :cond_4

    check-cast v3, Ljava/lang/Number;

    invoke-virtual {v3}, Ljava/lang/Number;->longValue()J

    move-result-wide v3

    invoke-virtual {v1, v2, v3, v4}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    goto :goto_1

    :cond_4
    instance-of v4, v3, [B

    if-eqz v4, :cond_0

    check-cast v3, [B

    invoke-virtual {v1, v2, v3}, Landroid/database/sqlite/SQLiteStatement;->bindBlob(I[B)V

    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_5
    invoke-virtual {v1}, Landroid/database/sqlite/SQLiteStatement;->execute()V

    invoke-virtual {p0}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {p0}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    if-eqz p2, :cond_8

    invoke-interface {p2, p0}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;->onFailed(Ljava/lang/Throwable;)V

    goto :goto_3

    :catchall_1
    move-exception p1

    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    if-eqz p2, :cond_6

    invoke-interface {p2, p1}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;->onFailed(Ljava/lang/Throwable;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    :cond_6
    :try_start_3
    invoke-virtual {p0}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    if-eqz p2, :cond_7

    invoke-interface {p2, p0}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;->onFailed(Ljava/lang/Throwable;)V

    :cond_7
    :goto_2
    const/4 v0, 0x0

    :cond_8
    :goto_3
    if-eqz v0, :cond_9

    if-eqz p2, :cond_9

    invoke-interface {p2}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;->onSuccess()V

    :cond_9
    return-void

    :catchall_3
    move-exception p1

    :try_start_4
    invoke-virtual {p0}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    goto :goto_4

    :catchall_4
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    if-eqz p2, :cond_a

    invoke-interface {p2, p0}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;->onFailed(Ljava/lang/Throwable;)V

    :cond_a
    :goto_4
    throw p1
.end method


# virtual methods
.method public clearDb()V
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->b(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method

.method public onCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    return-void
.end method

.method public onDowngrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 3

    const-class v0, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Downgrading database from version "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " to "

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ", which will destroy all old data"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->b(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method

.method public onOpen(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    invoke-super {p0, p1}, Landroid/database/sqlite/SQLiteOpenHelper;->onOpen(Landroid/database/sqlite/SQLiteDatabase;)V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_0

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;->setWriteAheadLoggingEnabled(Z)V

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->enableWriteAheadLogging()Z

    :goto_0
    return-void
.end method

.method public onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 3

    const-class v0, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Upgrading database from version "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " to "

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ", which will destroy all old data"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    const/16 p2, 0x8

    if-le p3, p2, :cond_0

    const-string p2, "ALTER TABLE point ADD COLUMN \'encryption\' int "

    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public transactionWriteExecSQL(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;)V
    .locals 2

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    const/4 v0, 0x0

    :try_start_0
    new-array v1, v0, [Ljava/lang/Object;

    invoke-virtual {p1, p2, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v0, 0x1

    :cond_0
    :goto_0
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    goto :goto_1

    :catchall_0
    move-exception p2

    :try_start_1
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    if-eqz p3, :cond_0

    invoke-interface {p3, p2}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;->onFailed(Ljava/lang/Throwable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_0

    :goto_1
    if-eqz v0, :cond_1

    if-eqz p3, :cond_1

    invoke-interface {p3}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;->onSuccess()V

    :cond_1
    return-void

    :catchall_1
    move-exception p2

    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    throw p2
.end method
