.class public final Lcom/tkay/core/b/c;
.super Ljava/lang/Object;


# static fields
.field private static h:Lcom/tkay/core/b/c;


# instance fields
.field a:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/l;",
            ">;"
        }
    .end annotation
.end field

.field b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/b/j;",
            ">;"
        }
    .end annotation
.end field

.field c:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field d:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;>;"
        }
    .end annotation
.end field

.field e:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field f:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private final g:Ljava/lang/String;

.field private i:Lcom/tkay/core/api/MediationBidManager;


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 47
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/c;->g:Ljava/lang/String;

    .line 48
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/b/c;->a:Ljava/util/concurrent/ConcurrentHashMap;

    .line 49
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x5

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/b/c;->b:Ljava/util/concurrent/ConcurrentHashMap;

    .line 50
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/b/c;->c:Ljava/util/concurrent/ConcurrentHashMap;

    .line 51
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/b/c;->f:Ljava/util/List;

    return-void
.end method

.method public static a()Lcom/tkay/core/b/c;
    .locals 1

    .line 55
    sget-object v0, Lcom/tkay/core/b/c;->h:Lcom/tkay/core/b/c;

    if-nez v0, :cond_0

    .line 56
    new-instance v0, Lcom/tkay/core/b/c;

    invoke-direct {v0}, Lcom/tkay/core/b/c;-><init>()V

    sput-object v0, Lcom/tkay/core/b/c;->h:Lcom/tkay/core/b/c;

    .line 58
    :cond_0
    sget-object v0, Lcom/tkay/core/b/c;->h:Lcom/tkay/core/b/c;

    return-object v0
.end method

.method private a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/l;)V
    .locals 2

    .line 62
    iget-object v0, p0, Lcom/tkay/core/b/c;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 66
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v0

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v0

    const/4 v1, 0x7

    if-ne v0, v1, :cond_1

    .line 67
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, p2}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Lcom/tkay/core/common/f/l;)V

    :cond_1
    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/tkay/core/common/f/l;)V
    .locals 2

    .line 76
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/core/common/f/l;->c()Ljava/lang/String;

    move-result-object p1

    const-string v1, "tkay_hb_cache_file"

    invoke-static {v0, v1, p0, p1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static b(Ljava/lang/String;)V
    .locals 2

    .line 84
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const-string v1, "tkay_hb_cache_file"

    invoke-static {v0, v1, p0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private c(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/b/j;
    .locals 1

    if-eqz p1, :cond_0

    .line 135
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v0

    iget-object v0, v0, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object p1

    iget-object p1, p1, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {p0, v0, p1}, Lcom/tkay/core/b/c;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/b/j;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private d(Lcom/tkay/core/common/f/aj;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 155
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 157
    iget-object v0, p1, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object p1, p1, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {p0, v0, p1}, Lcom/tkay/core/b/c;->c(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private d(Ljava/lang/String;)V
    .locals 2

    .line 181
    iget-object v0, p0, Lcom/tkay/core/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_0

    .line 182
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    .line 184
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_c2sfirstStatus"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private e(Ljava/lang/String;)Z
    .locals 2

    .line 188
    iget-object v0, p0, Lcom/tkay/core/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_c2sfirstStatus"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    return p1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    return p1
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)D
    .locals 2

    .line 126
    iget-object v0, p0, Lcom/tkay/core/b/c;->b:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/b/j;

    if-eqz p1, :cond_0

    .line 128
    iget-wide p1, p1, Lcom/tkay/core/b/j;->c:D

    return-wide p1

    :cond_0
    const-wide/16 p1, 0x0

    return-wide p1
.end method

.method public final a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;
    .locals 5

    .line 88
    iget-object v0, p0, Lcom/tkay/core/b/c;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/l;

    if-nez v0, :cond_2

    .line 93
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v1

    const/4 v2, 0x3

    if-eq v1, v2, :cond_0

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v1

    const/4 v2, 0x7

    if-ne v1, v2, :cond_2

    .line 94
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v2

    const-string v3, "tkay_hb_cache_file"

    const-string v4, ""

    invoke-static {v1, v3, v2, v4}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 95
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 96
    invoke-static {v1}, Lcom/tkay/core/common/f/l;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/l;

    move-result-object v0

    :cond_1
    if-eqz v0, :cond_2

    .line 99
    iget-object v1, p0, Lcom/tkay/core/b/c;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    return-object v0
.end method

.method public final a(I)V
    .locals 3

    .line 204
    iget-object v0, p0, Lcom/tkay/core/b/c;->f:Ljava/util/List;

    monitor-enter v0

    .line 205
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/b/c;->f:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 206
    iget-object v1, p0, Lcom/tkay/core/b/c;->f:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 208
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method

.method public final a(Lcom/tkay/core/api/MediationBidManager;)V
    .locals 0

    .line 107
    iput-object p1, p0, Lcom/tkay/core/b/c;->i:Lcom/tkay/core/api/MediationBidManager;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 72
    iget-object v0, p0, Lcom/tkay/core/b/c;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V
    .locals 1

    .line 196
    iget-object v0, p0, Lcom/tkay/core/b/c;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/b/j;)V
    .locals 2

    .line 146
    iget-object v0, p0, Lcom/tkay/core/b/c;->b:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final b(Lcom/tkay/core/common/f/aj;)D
    .locals 2

    if-eqz p1, :cond_0

    .line 117
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 119
    iget-object v0, v0, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Ljava/lang/String;)D

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public final b()Lcom/tkay/core/api/MediationBidManager;
    .locals 1

    .line 111
    iget-object v0, p0, Lcom/tkay/core/b/c;->i:Lcom/tkay/core/api/MediationBidManager;

    return-object v0
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/b/j;
    .locals 2

    .line 141
    iget-object v0, p0, Lcom/tkay/core/b/c;->b:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/b/j;

    return-object p1
.end method

.method public final b(I)Z
    .locals 2

    .line 212
    iget-object v0, p0, Lcom/tkay/core/b/c;->f:Ljava/util/List;

    monitor-enter v0

    .line 213
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/b/c;->f:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v1, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    .line 214
    monitor-exit v0

    throw p1
.end method

.method public final c(Ljava/lang/String;)Lcom/tkay/core/common/f/aj;
    .locals 1

    .line 200
    iget-object v0, p0, Lcom/tkay/core/b/c;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/aj;

    return-object p1
.end method

.method public final c(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 150
    iget-object v0, p0, Lcom/tkay/core/b/c;->b:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
