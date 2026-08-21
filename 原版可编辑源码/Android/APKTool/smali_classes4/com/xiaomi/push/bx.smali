.class public Lcom/xiaomi/push/bx;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/xiaomi/push/bx;


# instance fields
.field private a:Landroid/content/Context;

.field private a:Lcom/xiaomi/push/al$a;

.field private a:Lcom/xiaomi/push/cm;

.field private a:Lcom/xiaomi/push/cn;

.field private final a:Ljava/lang/String;

.field private b:Lcom/xiaomi/push/al$a;

.field private final b:Ljava/lang/String;

.field private c:Lcom/xiaomi/push/al$a;

.field private final c:Ljava/lang/String;

.field private final d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "push_stat_sp"

    iput-object v0, p0, Lcom/xiaomi/push/bx;->a:Ljava/lang/String;

    const-string v0, "upload_time"

    iput-object v0, p0, Lcom/xiaomi/push/bx;->b:Ljava/lang/String;

    const-string v0, "delete_time"

    iput-object v0, p0, Lcom/xiaomi/push/bx;->c:Ljava/lang/String;

    const-string v0, "check_time"

    iput-object v0, p0, Lcom/xiaomi/push/bx;->d:Ljava/lang/String;

    new-instance v0, Lcom/xiaomi/push/by;

    invoke-direct {v0, p0}, Lcom/xiaomi/push/by;-><init>(Lcom/xiaomi/push/bx;)V

    iput-object v0, p0, Lcom/xiaomi/push/bx;->a:Lcom/xiaomi/push/al$a;

    new-instance v0, Lcom/xiaomi/push/bz;

    invoke-direct {v0, p0}, Lcom/xiaomi/push/bz;-><init>(Lcom/xiaomi/push/bx;)V

    iput-object v0, p0, Lcom/xiaomi/push/bx;->b:Lcom/xiaomi/push/al$a;

    new-instance v0, Lcom/xiaomi/push/ca;

    invoke-direct {v0, p0}, Lcom/xiaomi/push/ca;-><init>(Lcom/xiaomi/push/bx;)V

    iput-object v0, p0, Lcom/xiaomi/push/bx;->c:Lcom/xiaomi/push/al$a;

    iput-object p1, p0, Lcom/xiaomi/push/bx;->a:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/xiaomi/push/bx;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/xiaomi/push/bx;->a:Landroid/content/Context;

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Lcom/xiaomi/push/bx;
    .locals 2

    sget-object v0, Lcom/xiaomi/push/bx;->a:Lcom/xiaomi/push/bx;

    if-nez v0, :cond_1

    const-class v0, Lcom/xiaomi/push/bx;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/xiaomi/push/bx;->a:Lcom/xiaomi/push/bx;

    if-nez v1, :cond_0

    new-instance v1, Lcom/xiaomi/push/bx;

    invoke-direct {v1, p0}, Lcom/xiaomi/push/bx;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/xiaomi/push/bx;->a:Lcom/xiaomi/push/bx;

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
    sget-object p0, Lcom/xiaomi/push/bx;->a:Lcom/xiaomi/push/bx;

    return-object p0
.end method

.method static synthetic a(Lcom/xiaomi/push/bx;)Lcom/xiaomi/push/cn;
    .locals 0

    iget-object p0, p0, Lcom/xiaomi/push/bx;->a:Lcom/xiaomi/push/cn;

    return-object p0
.end method

.method static synthetic a(Lcom/xiaomi/push/bx;)Ljava/lang/String;
    .locals 0

    invoke-direct {p0}, Lcom/xiaomi/push/bx;->c()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/xiaomi/push/bx;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/xiaomi/push/bx;->b(Ljava/lang/String;)V

    return-void
.end method

.method private a()Z
    .locals 3

    iget-object v0, p0, Lcom/xiaomi/push/bx;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/xiaomi/push/service/ba;->a(Landroid/content/Context;)Lcom/xiaomi/push/service/ba;

    move-result-object v0

    sget-object v1, Lcom/xiaomi/push/ho;->bn:Lcom/xiaomi/push/ho;

    invoke-virtual {v1}, Lcom/xiaomi/push/ho;->a()I

    move-result v1

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/xiaomi/push/service/ba;->a(IZ)Z

    move-result v0

    return v0
.end method

.method private b(Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/xiaomi/push/bx;->a:Landroid/content/Context;

    const-string v1, "push_stat_sp"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-interface {v0, p1, v1, v2}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    invoke-static {v0}, Lcom/xiaomi/push/t;->a(Landroid/content/SharedPreferences$Editor;)V

    return-void
.end method

.method private c()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/bx;->a:Landroid/content/Context;

    sget-object v1, Lcom/xiaomi/push/cb;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/content/Context;->getDatabasePath(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/bx;->e:Ljava/lang/String;

    return-object v0
.end method

.method public a(Lcom/xiaomi/push/cj$a;)V
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/bx;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/xiaomi/push/cj;->a(Landroid/content/Context;)Lcom/xiaomi/push/cj;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/xiaomi/push/cj;->a(Lcom/xiaomi/push/cj$a;)V

    return-void
.end method

.method public a(Lcom/xiaomi/push/hn;)V
    .locals 2

    invoke-direct {p0}, Lcom/xiaomi/push/bx;->a()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->e()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/service/bz;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    invoke-direct {p0}, Lcom/xiaomi/push/bx;->c()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/xiaomi/push/bx;->a:Landroid/content/Context;

    invoke-static {v1, v0, p1}, Lcom/xiaomi/push/cg;->a(Landroid/content/Context;Ljava/lang/String;Lcom/xiaomi/push/hn;)Lcom/xiaomi/push/cg;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/xiaomi/push/bx;->a(Lcom/xiaomi/push/cj$a;)V

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 1

    invoke-direct {p0}, Lcom/xiaomi/push/bx;->a()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/xiaomi/push/bx;->a:Landroid/content/Context;

    invoke-static {v0, p1}, Lcom/xiaomi/push/co;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/xiaomi/push/hn;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/xiaomi/push/bx;->a(Lcom/xiaomi/push/hn;)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;)V
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/bx;->a:Lcom/xiaomi/push/cm;

    if-eqz v0, :cond_1

    invoke-virtual {p3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p3

    if-eqz p3, :cond_0

    iget-object p3, p0, Lcom/xiaomi/push/bx;->a:Lcom/xiaomi/push/cm;

    iget-object v0, p0, Lcom/xiaomi/push/bx;->a:Landroid/content/Context;

    invoke-interface {p3, v0, p2, p1}, Lcom/xiaomi/push/cm;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    iget-object p3, p0, Lcom/xiaomi/push/bx;->a:Lcom/xiaomi/push/cm;

    iget-object v0, p0, Lcom/xiaomi/push/bx;->a:Landroid/content/Context;

    invoke-interface {p3, v0, p2, p1}, Lcom/xiaomi/push/cm;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/bx;->f:Ljava/lang/String;

    return-object v0
.end method
