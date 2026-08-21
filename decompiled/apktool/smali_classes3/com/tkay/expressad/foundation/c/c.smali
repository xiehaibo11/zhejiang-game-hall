.class public Lcom/tkay/expressad/foundation/c/c;
.super Lcom/tkay/expressad/foundation/c/b;


# static fields
.field private static volatile a:Lcom/tkay/expressad/foundation/c/c;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 14
    invoke-direct {p0, p1}, Lcom/tkay/expressad/foundation/c/b;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/c/c;
    .locals 2

    .line 18
    sget-object v0, Lcom/tkay/expressad/foundation/c/c;->a:Lcom/tkay/expressad/foundation/c/c;

    if-nez v0, :cond_1

    .line 19
    const-class v0, Lcom/tkay/expressad/foundation/c/c;

    monitor-enter v0

    .line 20
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/foundation/c/c;->a:Lcom/tkay/expressad/foundation/c/c;

    if-nez v1, :cond_0

    .line 21
    new-instance v1, Lcom/tkay/expressad/foundation/c/c;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {v1, p0}, Lcom/tkay/expressad/foundation/c/c;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/expressad/foundation/c/c;->a:Lcom/tkay/expressad/foundation/c/c;

    .line 22
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 25
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/expressad/foundation/c/c;->a:Lcom/tkay/expressad/foundation/c/c;

    return-object p0
.end method

.method private static c(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    :try_start_0
    const-string v0, "DROP TABLE IF EXISTS \'campaign\'"

    .line 87
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'frequence\'"

    .line 90
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'campaignclick\'"

    .line 92
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'click_time\'"

    .line 95
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'load_stat\'"

    .line 97
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'fq_info\'"

    .line 102
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'dailyplaycap\'"

    .line 104
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'display_resource_type\'"

    .line 106
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'unit_id\'"

    .line 108
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'c_replace_temp\'"

    .line 110
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 112
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_0

    .line 113
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-void
.end method

.method private static f()V
    .locals 0

    return-void
.end method


# virtual methods
.method protected final a(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    .line 46
    invoke-static {p1}, Lcom/tkay/expressad/foundation/c/c;->c(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method

.method protected final b(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    .line 121
    invoke-static {p1}, Lcom/tkay/expressad/foundation/c/c;->c(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method

.method protected final c()Ljava/lang/String;
    .locals 1

    const-string v0, "tkay_expressad.db"

    return-object v0
.end method

.method protected final d()I
    .locals 1

    const/16 v0, 0x43

    return v0
.end method

.method protected final e()V
    .locals 0

    return-void
.end method
