.class public Lcom/tkay/core/common/a/j;
.super Ljava/lang/Object;


# static fields
.field private static volatile b:Lcom/tkay/core/common/a/j;


# instance fields
.field final a:Ljava/lang/String;

.field private c:Lcom/tkay/core/common/c/m;

.field private d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private e:J

.field private f:J


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    const-class v0, Lcom/tkay/core/common/a/j;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/a/j;->a:Ljava/lang/String;

    const-wide/32 v0, 0xc800000

    .line 26
    iput-wide v0, p0, Lcom/tkay/core/common/a/j;->e:J

    const-wide/16 v0, 0x0

    .line 27
    iput-wide v0, p0, Lcom/tkay/core/common/a/j;->f:J

    .line 30
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/m;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/m;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/a/j;->c:Lcom/tkay/core/common/c/m;

    .line 31
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/a/j;->d:Ljava/util/Map;

    .line 32
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->d(I)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/a/j;->e:J

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/a/j;J)J
    .locals 0

    .line 19
    iput-wide p1, p0, Lcom/tkay/core/common/a/j;->f:J

    return-wide p1
.end method

.method public static a()Lcom/tkay/core/common/a/j;
    .locals 2

    .line 36
    sget-object v0, Lcom/tkay/core/common/a/j;->b:Lcom/tkay/core/common/a/j;

    if-nez v0, :cond_1

    .line 37
    const-class v0, Lcom/tkay/core/common/a/j;

    monitor-enter v0

    .line 38
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/a/j;->b:Lcom/tkay/core/common/a/j;

    if-nez v1, :cond_0

    .line 39
    new-instance v1, Lcom/tkay/core/common/a/j;

    invoke-direct {v1}, Lcom/tkay/core/common/a/j;-><init>()V

    sput-object v1, Lcom/tkay/core/common/a/j;->b:Lcom/tkay/core/common/a/j;

    .line 40
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 42
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/a/j;->b:Lcom/tkay/core/common/a/j;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/core/common/a/j;)Lcom/tkay/core/common/c/m;
    .locals 0

    .line 19
    iget-object p0, p0, Lcom/tkay/core/common/a/j;->c:Lcom/tkay/core/common/c/m;

    return-object p0
.end method

.method private a(Lcom/tkay/core/common/a/i;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 88
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/a/j$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/a/j$2;-><init>(Lcom/tkay/core/common/a/j;Lcom/tkay/core/common/a/i;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/core/common/a/j;)J
    .locals 2

    .line 19
    iget-wide v0, p0, Lcom/tkay/core/common/a/j;->f:J

    return-wide v0
.end method

.method static synthetic c(Lcom/tkay/core/common/a/j;)J
    .locals 2

    .line 19
    iget-wide v0, p0, Lcom/tkay/core/common/a/j;->e:J

    return-wide v0
.end method

.method static synthetic d(Lcom/tkay/core/common/a/j;)Ljava/util/Map;
    .locals 0

    .line 19
    iget-object p0, p0, Lcom/tkay/core/common/a/j;->d:Ljava/util/Map;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Lcom/tkay/core/common/a/i;
    .locals 1

    .line 116
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 119
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/a/j;->c:Lcom/tkay/core/common/c/m;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/c/m;->a(Ljava/lang/String;)Lcom/tkay/core/common/a/i;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;JJIZ)V
    .locals 12

    move-object v9, p0

    .line 104
    iget-object v0, v9, Lcom/tkay/core/common/a/j;->d:Ljava/util/Map;

    invoke-static/range {p7 .. p7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    move-object v2, p1

    invoke-interface {v0, p1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    if-eqz p8, :cond_0

    .line 106
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v10

    new-instance v11, Lcom/tkay/core/common/a/j$3;

    move-object v0, v11

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-wide v4, p3

    move-wide/from16 v6, p5

    move/from16 v8, p7

    invoke-direct/range {v0 .. v8}, Lcom/tkay/core/common/a/j$3;-><init>(Lcom/tkay/core/common/a/j;Ljava/lang/String;Ljava/lang/String;JJI)V

    invoke-virtual {v10, v11}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public final declared-synchronized a(Ljava/lang/String;I)Z
    .locals 0

    monitor-enter p0

    .line 123
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/a/j;->b(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-lt p1, p2, :cond_0

    const/4 p1, 0x1

    .line 124
    :goto_0
    monitor-exit p0

    return p1

    :cond_0
    const/4 p1, 0x0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b(Ljava/lang/String;)I
    .locals 6

    monitor-enter p0

    .line 128
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/a/j;->d:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/a/j;->d:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 129
    iget-object v0, p0, Lcom/tkay/core/common/a/j;->d:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return p1

    .line 131
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/common/a/j;->c:Lcom/tkay/core/common/c/m;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/c/m;->a(Ljava/lang/String;)Lcom/tkay/core/common/a/i;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    .line 132
    invoke-virtual {v0}, Lcom/tkay/core/common/a/i;->c()I

    move-result v2

    if-lez v2, :cond_3

    .line 133
    new-instance v2, Ljava/io/File;

    invoke-virtual {v0}, Lcom/tkay/core/common/a/i;->b()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 139
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->length()J

    move-result-wide v2

    invoke-virtual {v0}, Lcom/tkay/core/common/a/i;->e()J

    move-result-wide v4

    cmp-long v2, v2, v4

    if-ltz v2, :cond_1

    .line 140
    iget-object v1, p0, Lcom/tkay/core/common/a/j;->d:Ljava/util/Map;

    invoke-virtual {v0}, Lcom/tkay/core/common/a/i;->c()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, p1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 142
    iget-object v1, p0, Lcom/tkay/core/common/a/j;->c:Lcom/tkay/core/common/c/m;

    invoke-virtual {v1, p1}, Lcom/tkay/core/common/c/m;->b(Ljava/lang/String;)V

    .line 144
    invoke-virtual {v0}, Lcom/tkay/core/common/a/i;->c()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return p1

    :cond_1
    if-eqz v0, :cond_2

    .line 1088
    :try_start_2
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    new-instance v2, Lcom/tkay/core/common/a/j$2;

    invoke-direct {v2, p0, v0}, Lcom/tkay/core/common/a/j$2;-><init>(Lcom/tkay/core/common/a/j;Lcom/tkay/core/common/a/i;)V

    invoke-virtual {p1, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 147
    :cond_2
    monitor-exit p0

    return v1

    .line 150
    :cond_3
    monitor-exit p0

    return v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final b()V
    .locals 2

    .line 47
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/a/j$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/a/j$1;-><init>(Lcom/tkay/core/common/a/j;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final c()J
    .locals 2

    .line 154
    iget-wide v0, p0, Lcom/tkay/core/common/a/j;->e:J

    return-wide v0
.end method

.method public final d()J
    .locals 2

    .line 158
    iget-wide v0, p0, Lcom/tkay/core/common/a/j;->f:J

    return-wide v0
.end method
