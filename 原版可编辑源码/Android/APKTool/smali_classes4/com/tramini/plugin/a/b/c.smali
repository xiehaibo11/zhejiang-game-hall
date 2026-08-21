.class public Lcom/tramini/plugin/a/b/c;
.super Lcom/tramini/plugin/a/b/b;


# static fields
.field private static a:Lcom/tramini/plugin/a/b/c;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 20
    invoke-direct {p0, p1}, Lcom/tramini/plugin/a/b/b;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/tramini/plugin/a/b/c;
    .locals 2

    .line 24
    sget-object v0, Lcom/tramini/plugin/a/b/c;->a:Lcom/tramini/plugin/a/b/c;

    if-nez v0, :cond_0

    .line 25
    const-class v0, Lcom/tramini/plugin/a/b/c;

    monitor-enter v0

    .line 26
    :try_start_0
    new-instance v1, Lcom/tramini/plugin/a/b/c;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {v1, p0}, Lcom/tramini/plugin/a/b/c;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tramini/plugin/a/b/c;->a:Lcom/tramini/plugin/a/b/c;

    .line 27
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 30
    :cond_0
    :goto_0
    sget-object p0, Lcom/tramini/plugin/a/b/c;->a:Lcom/tramini/plugin/a/b/c;

    return-object p0
.end method

.method private h()V
    .locals 2

    .line 65
    :try_start_0
    invoke-virtual {p0}, Lcom/tramini/plugin/a/b/c;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "DROP TABLE IF EXISTS \'il\'"

    invoke-virtual {v0, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    .line 66
    invoke-virtual {p0}, Lcom/tramini/plugin/a/b/c;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "DROP TABLE IF EXISTS \'il_all\'"

    invoke-virtual {v0, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method


# virtual methods
.method protected final c()Ljava/lang/String;
    .locals 1

    const-string v0, "tramini.db"

    return-object v0
.end method

.method protected final d()I
    .locals 1

    const/4 v0, 0x2

    return v0
.end method

.method protected final e()V
    .locals 0

    return-void
.end method

.method protected final f()V
    .locals 0

    return-void
.end method

.method protected final g()V
    .locals 0

    return-void
.end method
