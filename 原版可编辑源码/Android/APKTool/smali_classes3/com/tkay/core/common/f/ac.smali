.class public final Lcom/tkay/core/common/f/ac;
.super Ljava/lang/Object;


# instance fields
.field final a:Ljava/lang/Object;

.field private b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private c:Lcom/tkay/core/common/f/c;

.field private d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f;",
            ">;"
        }
    .end annotation
.end field

.field private f:Z

.field private g:Ljava/lang/String;

.field private h:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 19
    iput-object v0, p0, Lcom/tkay/core/common/f/ac;->g:Ljava/lang/String;

    .line 21
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/f/ac;->a:Ljava/lang/Object;

    .line 25
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/common/f/ac;->e:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Lcom/tkay/core/common/f;
    .locals 1

    .line 33
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->e:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f;

    return-object p1
.end method

.method public final a()Ljava/lang/Object;
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->a:Ljava/lang/Object;

    return-object v0
.end method

.method public final a(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 61
    new-instance v0, Lcom/tkay/core/common/f/c;

    invoke-virtual {p1}, Lcom/tkay/core/api/TYAdInfo;->getAdsourceId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/core/api/TYAdInfo;->getShowId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/tkay/core/api/TYAdInfo;->getNetworkFirmId()I

    move-result p1

    invoke-direct {v0, v1, v2, p1}, Lcom/tkay/core/common/f/c;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    iput-object v0, p0, Lcom/tkay/core/common/f/ac;->c:Lcom/tkay/core/common/f/c;

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 63
    iput-object p1, p0, Lcom/tkay/core/common/f/ac;->c:Lcom/tkay/core/common/f/c;

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/common/f;)V
    .locals 1

    .line 37
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->e:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 2

    .line 49
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->b:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 50
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/common/f/ac;->b:Ljava/util/Map;

    .line 52
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->b:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 75
    monitor-enter p0

    .line 76
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->d:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 77
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/common/f/ac;->d:Ljava/util/Map;

    .line 79
    :cond_0
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 80
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->d:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    :catchall_0
    move-exception p1

    .line 79
    monitor-exit p0

    throw p1
.end method

.method public final a(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 45
    iput-object p1, p0, Lcom/tkay/core/common/f/ac;->b:Ljava/util/Map;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 84
    iput-boolean p1, p0, Lcom/tkay/core/common/f/ac;->f:Z

    return-void
.end method

.method public final a([Ljava/lang/Object;)V
    .locals 0

    .line 96
    invoke-static {p1}, Lcom/tkay/core/common/l/h;->a([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/f/ac;->g:Ljava/lang/String;

    return-void
.end method

.method public final b(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->d:Ljava/util/Map;

    if-nez v0, :cond_0

    const-string p1, ""

    return-object p1

    .line 71
    :cond_0
    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1
.end method

.method public final b()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 41
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->b:Ljava/util/Map;

    return-object v0
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 100
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->h:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 101
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/common/f/ac;->h:Ljava/util/Map;

    .line 103
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->h:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final c()Lcom/tkay/core/common/f/c;
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->c:Lcom/tkay/core/common/f/c;

    return-object v0
.end method

.method public final c(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 107
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->h:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 108
    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final d()Z
    .locals 1

    .line 88
    iget-boolean v0, p0, Lcom/tkay/core/common/f/ac;->f:Z

    return v0
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 92
    iget-object v0, p0, Lcom/tkay/core/common/f/ac;->g:Ljava/lang/String;

    return-object v0
.end method
