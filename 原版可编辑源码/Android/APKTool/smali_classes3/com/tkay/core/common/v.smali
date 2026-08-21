.class public Lcom/tkay/core/common/v;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/tkay/core/common/v;


# instance fields
.field private b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/ac;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 25
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x4

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/common/v;->b:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public static a()Lcom/tkay/core/common/v;
    .locals 2

    .line 29
    sget-object v0, Lcom/tkay/core/common/v;->a:Lcom/tkay/core/common/v;

    if-nez v0, :cond_1

    .line 30
    const-class v0, Lcom/tkay/core/common/v;

    monitor-enter v0

    .line 31
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/v;->a:Lcom/tkay/core/common/v;

    if-nez v1, :cond_0

    .line 32
    new-instance v1, Lcom/tkay/core/common/v;

    invoke-direct {v1}, Lcom/tkay/core/common/v;-><init>()V

    sput-object v1, Lcom/tkay/core/common/v;->a:Lcom/tkay/core/common/v;

    .line 33
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 35
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/v;->a:Lcom/tkay/core/common/v;

    return-object v0
.end method

.method private declared-synchronized a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V
    .locals 0

    monitor-enter p0

    .line 88
    :try_start_0
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 89
    invoke-virtual {p1, p2, p3}, Lcom/tkay/core/common/f/ac;->a(Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 90
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;
    .locals 2

    monitor-enter p0

    .line 39
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/v;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/ac;

    if-nez v0, :cond_0

    .line 41
    new-instance v0, Lcom/tkay/core/common/f/ac;

    invoke-direct {v0}, Lcom/tkay/core/common/f/ac;-><init>()V

    .line 42
    iget-object v1, p0, Lcom/tkay/core/common/v;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 44
    :cond_0
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;
    .locals 0

    .line 53
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 54
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/ac;->a(Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/lang/String;)Ljava/lang/Object;
    .locals 0

    .line 48
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 49
    invoke-virtual {p1}, Lcom/tkay/core/common/f/ac;->a()Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/lang/String;I)Ljava/lang/String;
    .locals 0

    .line 143
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 144
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/ac;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/lang/String;ILjava/lang/String;)V
    .locals 0

    .line 138
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 139
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2, p3}, Lcom/tkay/core/common/f/ac;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    .line 93
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 94
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/ac;->a(Lcom/tkay/core/api/TYAdInfo;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f;)V
    .locals 0

    .line 58
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 59
    invoke-virtual {p1, p2, p3}, Lcom/tkay/core/common/f/ac;->a(Ljava/lang/String;Lcom/tkay/core/common/f;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 108
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 109
    invoke-virtual {p1, p2, p3}, Lcom/tkay/core/common/f/ac;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final declared-synchronized a(Ljava/lang/String;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    const/4 v0, 0x0

    if-eqz p2, :cond_0

    .line 67
    :try_start_0
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1, p2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, v1

    .line 73
    :catchall_0
    :cond_0
    :try_start_1
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 74
    invoke-virtual {p1, v0}, Lcom/tkay/core/common/f/ac;->a(Ljava/util/Map;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 75
    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Ljava/lang/String;Z)V
    .locals 0

    .line 123
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 124
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/ac;->a(Z)V

    return-void
.end method

.method public final a(Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 0

    .line 128
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 129
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/ac;->a([Ljava/lang/Object;)V

    return-void
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 113
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 114
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/ac;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final declared-synchronized b(Ljava/lang/String;)Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 78
    :try_start_0
    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    .line 79
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 80
    invoke-virtual {p1}, Lcom/tkay/core/common/f/ac;->b()Ljava/util/Map;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 82
    invoke-interface {v0, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 84
    :cond_0
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final c(Ljava/lang/String;)Lcom/tkay/core/common/f/c;
    .locals 0

    .line 98
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 99
    invoke-virtual {p1}, Lcom/tkay/core/common/f/ac;->c()Lcom/tkay/core/common/f/c;

    move-result-object p1

    return-object p1
.end method

.method public final d(Ljava/lang/String;)V
    .locals 1

    .line 103
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    const/4 v0, 0x0

    .line 104
    invoke-virtual {p1, v0}, Lcom/tkay/core/common/f/ac;->a(Lcom/tkay/core/api/TYAdInfo;)V

    return-void
.end method

.method public final e(Ljava/lang/String;)Z
    .locals 0

    .line 118
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 119
    invoke-virtual {p1}, Lcom/tkay/core/common/f/ac;->d()Z

    move-result p1

    return p1
.end method

.method public final f(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 133
    invoke-direct {p0, p1}, Lcom/tkay/core/common/v;->g(Ljava/lang/String;)Lcom/tkay/core/common/f/ac;

    move-result-object p1

    .line 134
    invoke-virtual {p1}, Lcom/tkay/core/common/f/ac;->e()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method
