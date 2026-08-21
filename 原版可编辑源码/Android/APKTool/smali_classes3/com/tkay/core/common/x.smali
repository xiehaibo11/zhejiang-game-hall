.class public Lcom/tkay/core/common/x;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/x$a;
    }
.end annotation


# static fields
.field private static volatile a:Lcom/tkay/core/common/x;


# instance fields
.field private b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/x$a;",
            ">;"
        }
    .end annotation
.end field

.field private final c:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "Waterfall_Final"

    .line 30
    iput-object v0, p0, Lcom/tkay/core/common/x;->c:Ljava/lang/String;

    .line 34
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/x;->b:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public static a()Lcom/tkay/core/common/x;
    .locals 2

    .line 38
    sget-object v0, Lcom/tkay/core/common/x;->a:Lcom/tkay/core/common/x;

    if-nez v0, :cond_1

    .line 39
    const-class v0, Lcom/tkay/core/common/x;

    monitor-enter v0

    .line 40
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/x;->a:Lcom/tkay/core/common/x;

    if-nez v1, :cond_0

    .line 41
    new-instance v1, Lcom/tkay/core/common/x;

    invoke-direct {v1}, Lcom/tkay/core/common/x;-><init>()V

    sput-object v1, Lcom/tkay/core/common/x;->a:Lcom/tkay/core/common/x;

    .line 42
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 44
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/x;->a:Lcom/tkay/core/common/x;

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation

    .line 151
    iget-object v0, p0, Lcom/tkay/core/common/x;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/x$a;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 152
    iget-object v2, v0, Lcom/tkay/core/common/x$a;->a:Ljava/lang/String;

    invoke-static {v0, v2}, Lcom/tkay/core/common/x$a;->c(Lcom/tkay/core/common/x$a;Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, v1

    :goto_0
    if-nez v0, :cond_2

    .line 154
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 156
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->G()Ljava/util/List;

    move-result-object p1

    return-object p1

    :cond_1
    return-object v1

    .line 166
    :cond_2
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 167
    invoke-interface {p1, v0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    return-object p1
.end method

.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    monitor-enter p0

    .line 136
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/x;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/x$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_0

    .line 138
    monitor-exit p0

    return-void

    .line 140
    :cond_0
    :try_start_1
    invoke-static {p1, p2}, Lcom/tkay/core/common/x$a;->b(Lcom/tkay/core/common/x$a;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 141
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/core/c/d;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 55
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/x;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/x$a;

    if-nez v0, :cond_0

    .line 57
    new-instance v0, Lcom/tkay/core/common/x$a;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/x$a;-><init>(Lcom/tkay/core/common/x;)V

    .line 1237
    :cond_0
    iget-object v1, v0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/x$a$a;

    if-eqz v1, :cond_1

    .line 1346
    iget-boolean v1, v1, Lcom/tkay/core/common/x$a$a;->c:Z

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    .line 2209
    :goto_0
    new-instance v2, Lcom/tkay/core/common/x$a$a;

    invoke-direct {v2, v0}, Lcom/tkay/core/common/x$a$a;-><init>(Lcom/tkay/core/common/x$a;)V

    .line 2210
    iput-object p3, v2, Lcom/tkay/core/common/x$a$a;->a:Lcom/tkay/core/c/d;

    .line 2212
    new-instance p3, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {p3}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    .line 2213
    invoke-virtual {p3, p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->addAll(Ljava/util/Collection;)Z

    .line 2214
    iput-object p3, v2, Lcom/tkay/core/common/x$a$a;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 2216
    iget-object p3, v0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p3, p2, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 69
    iput-object p2, v0, Lcom/tkay/core/common/x$a;->a:Ljava/lang/String;

    .line 70
    iget-object p3, p0, Lcom/tkay/core/common/x;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p3, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 73
    invoke-static {v0, p2}, Lcom/tkay/core/common/x$a;->a(Lcom/tkay/core/common/x$a;Ljava/lang/String;)V

    if-eqz v1, :cond_2

    .line 76
    invoke-static {v0, p2}, Lcom/tkay/core/common/x$a;->b(Lcom/tkay/core/common/x$a;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 78
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V
    .locals 2

    monitor-enter p0

    .line 117
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/x;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/x$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_0

    .line 119
    monitor-exit p0

    return-void

    .line 122
    :cond_0
    :try_start_1
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 123
    invoke-interface {v0, p3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 125
    invoke-static {p1, p2, v0}, Lcom/tkay/core/common/x$a;->a(Lcom/tkay/core/common/x$a;Ljava/lang/String;Ljava/util/List;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 127
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 90
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/x;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/x$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_0

    .line 92
    monitor-exit p0

    return-void

    .line 95
    :cond_0
    :try_start_1
    invoke-interface {p3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p3

    :cond_1
    :goto_0
    invoke-interface {p3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/aj;

    .line 3248
    iget-object v1, p1, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/x$a$a;

    if-eqz v1, :cond_1

    .line 3250
    invoke-static {v1, v0}, Lcom/tkay/core/common/x$a$a;->a(Lcom/tkay/core/common/x$a$a;Lcom/tkay/core/common/f/aj;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 103
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final b(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 187
    iget-object v0, p0, Lcom/tkay/core/common/x;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/x$a;

    if-eqz p1, :cond_0

    .line 189
    iget-object p1, p1, Lcom/tkay/core/common/x$a;->a:Ljava/lang/String;

    return-object p1

    :cond_0
    const-string p1, ""

    return-object p1
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation

    .line 179
    iget-object v0, p0, Lcom/tkay/core/common/x;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/x$a;

    if-eqz p1, :cond_0

    .line 181
    invoke-static {p1, p2}, Lcom/tkay/core/common/x$a;->c(Lcom/tkay/core/common/x$a;Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final declared-synchronized b(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 106
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/x;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/x$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 108
    monitor-exit p0

    return-void

    .line 111
    :cond_0
    :try_start_1
    invoke-static {v0, p2, p3}, Lcom/tkay/core/common/x$a;->a(Lcom/tkay/core/common/x$a;Ljava/lang/String;Ljava/util/List;)V

    .line 113
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 114
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
