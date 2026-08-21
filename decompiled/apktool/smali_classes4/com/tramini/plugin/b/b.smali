.class public Lcom/tramini/plugin/b/b;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;

.field private static volatile b:Lcom/tramini/plugin/b/b;

.field private static c:Lcom/tramini/plugin/b/a;


# instance fields
.field private d:Landroid/content/Context;

.field private e:Z

.field private f:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 26
    const-class v0, Lcom/tramini/plugin/b/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tramini/plugin/b/b;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 29
    sput-object v0, Lcom/tramini/plugin/b/b;->c:Lcom/tramini/plugin/b/a;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, -0x1

    .line 33
    iput-wide v0, p0, Lcom/tramini/plugin/b/b;->f:J

    .line 36
    iput-object p1, p0, Lcom/tramini/plugin/b/b;->d:Landroid/content/Context;

    const/4 p1, 0x0

    .line 37
    iput-boolean p1, p0, Lcom/tramini/plugin/b/b;->e:Z

    return-void
.end method

.method static synthetic a(Lcom/tramini/plugin/b/b;J)J
    .locals 0

    .line 24
    iput-wide p1, p0, Lcom/tramini/plugin/b/b;->f:J

    return-wide p1
.end method

.method static synthetic a(Lcom/tramini/plugin/b/b;)Landroid/content/Context;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/tramini/plugin/b/b;->d:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic a(Lcom/tramini/plugin/b/a;)Lcom/tramini/plugin/b/a;
    .locals 0

    .line 24
    sput-object p0, Lcom/tramini/plugin/b/b;->c:Lcom/tramini/plugin/b/a;

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Lcom/tramini/plugin/b/b;
    .locals 2

    .line 41
    sget-object v0, Lcom/tramini/plugin/b/b;->b:Lcom/tramini/plugin/b/b;

    if-nez v0, :cond_1

    .line 42
    const-class v0, Lcom/tramini/plugin/b/b;

    monitor-enter v0

    .line 43
    :try_start_0
    sget-object v1, Lcom/tramini/plugin/b/b;->b:Lcom/tramini/plugin/b/b;

    if-nez v1, :cond_0

    .line 44
    new-instance v1, Lcom/tramini/plugin/b/b;

    invoke-direct {v1, p0}, Lcom/tramini/plugin/b/b;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tramini/plugin/b/b;->b:Lcom/tramini/plugin/b/b;

    .line 45
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 47
    :cond_1
    :goto_0
    sget-object p0, Lcom/tramini/plugin/b/b;->b:Lcom/tramini/plugin/b/b;

    return-object p0
.end method

.method private a(Lcom/tramini/plugin/a/d/b;)V
    .locals 2

    .line 113
    iget-boolean v0, p0, Lcom/tramini/plugin/b/b;->e:Z

    if-eqz v0, :cond_0

    return-void

    .line 117
    :cond_0
    sget-object v0, Lcom/tramini/plugin/a/g/c;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 121
    :cond_1
    new-instance v0, Lcom/tramini/plugin/a/d/d;

    invoke-direct {v0}, Lcom/tramini/plugin/a/d/d;-><init>()V

    const/4 v1, 0x0

    .line 122
    invoke-virtual {v0, v1, p1}, Lcom/tramini/plugin/a/d/d;->a(ILcom/tramini/plugin/a/d/b;)V

    return-void
.end method

.method static synthetic a(Lcom/tramini/plugin/b/b;Z)Z
    .locals 0

    .line 24
    iput-boolean p1, p0, Lcom/tramini/plugin/b/b;->e:Z

    return p1
.end method

.method static synthetic b(Lcom/tramini/plugin/b/b;)J
    .locals 2

    .line 24
    iget-wide v0, p0, Lcom/tramini/plugin/b/b;->f:J

    return-wide v0
.end method

.method public static b(Landroid/content/Context;)Lcom/tramini/plugin/b/a;
    .locals 3

    const-string v0, "tramini"

    const-string v1, "P_SY"

    const-string v2, ""

    .line 102
    invoke-static {p0, v0, v1, v2}, Lcom/tramini/plugin/a/g/i;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 103
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 104
    invoke-static {p0}, Lcom/tramini/plugin/a/g/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 105
    invoke-static {p0}, Lcom/tramini/plugin/b/a;->a(Ljava/lang/String;)Lcom/tramini/plugin/b/a;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/tramini/plugin/a/d/c;)V
    .locals 2

    .line 129
    new-instance v0, Lcom/tramini/plugin/b/b$1;

    invoke-direct {v0, p0, p1}, Lcom/tramini/plugin/b/b$1;-><init>(Lcom/tramini/plugin/b/b;Lcom/tramini/plugin/a/d/c;)V

    .line 1113
    iget-boolean p1, p0, Lcom/tramini/plugin/b/b;->e:Z

    if-nez p1, :cond_0

    .line 1117
    sget-object p1, Lcom/tramini/plugin/a/g/c;->a:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 1121
    new-instance p1, Lcom/tramini/plugin/a/d/d;

    invoke-direct {p1}, Lcom/tramini/plugin/a/d/d;-><init>()V

    const/4 v1, 0x0

    .line 1122
    invoke-virtual {p1, v1, v0}, Lcom/tramini/plugin/a/d/d;->a(ILcom/tramini/plugin/a/d/b;)V

    :cond_0
    return-void
.end method

.method public final a()Z
    .locals 4

    .line 56
    iget-wide v0, p0, Lcom/tramini/plugin/b/b;->f:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_0

    .line 57
    iget-object v0, p0, Lcom/tramini/plugin/b/b;->d:Landroid/content/Context;

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "tramini"

    const-string v3, "P_UD_TE"

    invoke-static {v0, v2, v3, v1}, Lcom/tramini/plugin/a/g/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tramini/plugin/b/b;->f:J

    .line 60
    :cond_0
    invoke-virtual {p0}, Lcom/tramini/plugin/b/b;->b()Lcom/tramini/plugin/b/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 62
    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->c()J

    move-result-wide v0

    .line 64
    iget-wide v2, p0, Lcom/tramini/plugin/b/b;->f:J

    add-long/2addr v2, v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    cmp-long v0, v2, v0

    if-lez v0, :cond_1

    const/4 v0, 0x0

    return v0

    :cond_1
    const/4 v0, 0x1

    return v0
.end method

.method public final declared-synchronized b()Lcom/tramini/plugin/b/a;
    .locals 2

    monitor-enter p0

    .line 77
    :try_start_0
    sget-object v0, Lcom/tramini/plugin/b/b;->c:Lcom/tramini/plugin/b/a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_1

    .line 79
    :try_start_1
    iget-object v0, p0, Lcom/tramini/plugin/b/b;->d:Landroid/content/Context;

    if-nez v0, :cond_0

    .line 80
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tramini/plugin/a/a/c;->b()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tramini/plugin/b/b;->d:Landroid/content/Context;

    .line 82
    :cond_0
    iget-object v0, p0, Lcom/tramini/plugin/b/b;->d:Landroid/content/Context;

    invoke-static {v0}, Lcom/tramini/plugin/b/b;->b(Landroid/content/Context;)Lcom/tramini/plugin/b/a;

    move-result-object v0

    sput-object v0, Lcom/tramini/plugin/b/b;->c:Lcom/tramini/plugin/b/a;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 90
    :catch_0
    :try_start_2
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v0

    sget-object v1, Lcom/tramini/plugin/b/b;->c:Lcom/tramini/plugin/b/a;

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/a/c;->a(Lcom/tramini/plugin/b/a;)V

    .line 92
    :cond_1
    sget-object v0, Lcom/tramini/plugin/b/b;->c:Lcom/tramini/plugin/b/a;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
