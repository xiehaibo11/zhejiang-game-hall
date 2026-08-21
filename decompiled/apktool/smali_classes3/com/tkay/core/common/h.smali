.class public abstract Lcom/tkay/core/common/h;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/h$a;
    }
.end annotation


# instance fields
.field A:I

.field B:I

.field C:Ljava/lang/Object;

.field D:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field E:D

.field F:Lcom/tkay/core/common/f/aj;

.field protected G:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/m/d;",
            ">;"
        }
    .end annotation
.end field

.field H:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field protected I:Ljava/lang/Runnable;

.field protected J:Ljava/lang/Runnable;

.field K:Lcom/tkay/core/common/m/h;

.field L:Lcom/tkay/core/common/m/f;

.field protected M:Ljava/lang/Runnable;

.field N:Lcom/tkay/core/common/f/aj;

.field O:D

.field P:Z

.field Q:Lcom/tkay/core/common/f/aj;

.field R:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field S:Z

.field private final T:Ljava/lang/String;

.field protected a:Landroid/content/Context;

.field protected b:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field protected c:I

.field protected d:Ljava/lang/String;

.field protected e:Lcom/tkay/core/c/d;

.field protected f:Ljava/lang/String;

.field protected g:Ljava/lang/String;

.field h:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field i:Lcom/tkay/core/common/f/d;

.field protected j:Lcom/tkay/core/common/j;

.field protected k:I

.field protected l:Lcom/tkay/core/common/b/b;

.field m:Z

.field n:Z

.field protected o:Z

.field p:Z

.field q:Z

.field r:Z

.field s:Z

.field t:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field u:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field v:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field w:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/m/e;",
            ">;"
        }
    .end annotation
.end field

.field x:Ljava/lang/String;

.field y:Lcom/tkay/core/api/AdError;

.field z:J


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 4

    .line 217
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 66
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/h;->T:Ljava/lang/String;

    const-string v0, ""

    .line 71
    iput-object v0, p0, Lcom/tkay/core/common/h;->d:Ljava/lang/String;

    const/4 v1, 0x0

    .line 78
    iput v1, p0, Lcom/tkay/core/common/h;->k:I

    .line 80
    iput-boolean v1, p0, Lcom/tkay/core/common/h;->m:Z

    .line 83
    iput-boolean v1, p0, Lcom/tkay/core/common/h;->n:Z

    .line 84
    iput-boolean v1, p0, Lcom/tkay/core/common/h;->o:Z

    .line 91
    iput-boolean v1, p0, Lcom/tkay/core/common/h;->r:Z

    .line 92
    iput-boolean v1, p0, Lcom/tkay/core/common/h;->s:Z

    .line 112
    new-instance v2, Ljava/lang/Object;

    invoke-direct {v2}, Ljava/lang/Object;-><init>()V

    iput-object v2, p0, Lcom/tkay/core/common/h;->C:Ljava/lang/Object;

    const-wide/high16 v2, -0x4010000000000000L    # -1.0

    .line 117
    iput-wide v2, p0, Lcom/tkay/core/common/h;->E:D

    const/4 v2, 0x0

    .line 129
    iput-object v2, p0, Lcom/tkay/core/common/h;->I:Ljava/lang/Runnable;

    .line 140
    new-instance v2, Lcom/tkay/core/common/h$1;

    invoke-direct {v2, p0}, Lcom/tkay/core/common/h$1;-><init>(Lcom/tkay/core/common/h;)V

    iput-object v2, p0, Lcom/tkay/core/common/h;->M:Ljava/lang/Runnable;

    .line 2026
    iput-boolean v1, p0, Lcom/tkay/core/common/h;->P:Z

    .line 2158
    iput-boolean v1, p0, Lcom/tkay/core/common/h;->S:Z

    .line 218
    new-instance v1, Ljava/lang/ref/WeakReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v1, p0, Lcom/tkay/core/common/h;->b:Ljava/lang/ref/WeakReference;

    .line 219
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    .line 221
    new-instance p1, Ljava/util/ArrayList;

    const/4 v1, 0x2

    invoke-direct {p1, v1}, Ljava/util/ArrayList;-><init>(I)V

    invoke-static {p1}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    const-string p1, "4001"

    .line 224
    invoke-static {p1, v0, v0}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h;->y:Lcom/tkay/core/api/AdError;

    .line 226
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object p1, p0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    .line 229
    new-instance p1, Ljava/util/ArrayList;

    const/4 v0, 0x3

    invoke-direct {p1, v0}, Ljava/util/ArrayList;-><init>(I)V

    invoke-static {p1}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h;->H:Ljava/util/List;

    .line 232
    new-instance p1, Lcom/tkay/core/common/m/h;

    invoke-direct {p1}, Lcom/tkay/core/common/m/h;-><init>()V

    iput-object p1, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    return-void
.end method

.method private declared-synchronized A()Z
    .locals 2

    monitor-enter p0

    .line 1927
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "hasFinishAllRequest:isFinishBidding: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/tkay/core/common/h;->m:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 1928
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "hasFinishAllRequest:requestWaitingPool: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1929
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "hasFinishAllRequest:requestingPool: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1930
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "hasFinishAllRequest:defaultRequestWaitingPool: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->v:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1932
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "hasFinishAllRequest:showCapWaitingPool: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1934
    iget-object v0, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/h;->v:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    .line 1935
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    monitor-exit p0

    return v0

    :cond_0
    const/4 v0, 0x0

    .line 1934
    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized B()Z
    .locals 1

    monitor-enter p0

    .line 1939
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    monitor-exit p0

    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private C()Z
    .locals 3

    .line 2139
    iget-object v0, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->k()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    iget v0, p0, Lcom/tkay/core/common/h;->k:I

    const/16 v2, 0x8

    if-eq v0, v2, :cond_0

    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/v;->e(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private a(ILjava/util/List;Lcom/tkay/core/common/k$a;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Lcom/tkay/core/common/k$a;",
            ")V"
        }
    .end annotation

    .line 1740
    iget-object v0, p0, Lcom/tkay/core/common/h;->N:Lcom/tkay/core/common/f/aj;

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/core/common/h;->H:Ljava/util/List;

    invoke-static {v0}, Lcom/tkay/core/common/l/t;->a(Ljava/util/List;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    .line 1742
    :goto_1
    new-instance v1, Lcom/tkay/core/common/f/ag;

    invoke-direct {v1}, Lcom/tkay/core/common/f/ag;-><init>()V

    .line 1743
    iget-object v2, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iput-object v2, v1, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    .line 1744
    iget-object v2, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    iput-object v2, v1, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    .line 1745
    iget-object v2, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    iput-object v2, v1, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    .line 1746
    iget-object v2, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iput-object v2, v1, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    .line 1747
    iget-object v2, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v2}, Lcom/tkay/core/c/d;->Y()I

    move-result v2

    iput v2, v1, Lcom/tkay/core/common/f/ag;->f:I

    .line 1748
    iget-object v2, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v2}, Lcom/tkay/core/c/d;->I()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/tkay/core/common/f/ag;->g:J

    .line 1749
    iget-object v2, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v2}, Lcom/tkay/core/c/d;->A()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/tkay/core/common/f/ag;->h:J

    .line 1750
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    iget-object v2, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-static {v2, v0}, Lcom/tkay/core/common/i;->a(Lcom/tkay/core/c/d;Z)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/core/common/f/ag;->m:Ljava/lang/String;

    .line 1751
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    iget-object v2, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-static {v2}, Lcom/tkay/core/common/i;->a(Lcom/tkay/core/c/d;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/core/common/f/ag;->p:Ljava/lang/String;

    .line 1752
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    iget-object v2, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-static {v2}, Lcom/tkay/core/common/i;->b(Lcom/tkay/core/c/d;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/core/common/f/ag;->q:Ljava/lang/String;

    .line 1753
    iput-object p2, v1, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    .line 1754
    iget-object p2, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    iput-object p2, v1, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    .line 1755
    iget-object p2, p0, Lcom/tkay/core/common/h;->i:Lcom/tkay/core/common/f/d;

    iput-object p2, v1, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    .line 1756
    iget-object p2, p0, Lcom/tkay/core/common/h;->h:Ljava/util/Map;

    iput-object p2, v1, Lcom/tkay/core/common/f/ag;->r:Ljava/util/Map;

    .line 1757
    iget-object p2, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {p2}, Lcom/tkay/core/common/m/f;->g()Lcom/tkay/core/common/f/am;

    move-result-object p2

    iput-object p2, v1, Lcom/tkay/core/common/f/ag;->x:Lcom/tkay/core/common/f/am;

    .line 1758
    iget-object p2, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {p2}, Lcom/tkay/core/common/m/f;->h()Lcom/tkay/core/common/f/ae;

    move-result-object p2

    iput-object p2, v1, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    .line 1760
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object p2

    iget-object v2, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    invoke-virtual {p2, v2, v3}, Lcom/tkay/core/common/x;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object p2

    if-nez p2, :cond_2

    .line 1763
    new-instance p2, Ljava/util/ArrayList;

    const/4 v2, 0x4

    invoke-direct {p2, v2}, Ljava/util/ArrayList;-><init>(I)V

    iput-object p2, v1, Lcom/tkay/core/common/f/ag;->k:Ljava/util/List;

    goto :goto_2

    .line 1765
    :cond_2
    iput-object p2, v1, Lcom/tkay/core/common/f/ag;->k:Ljava/util/List;

    .line 1767
    :goto_2
    iput-boolean v0, v1, Lcom/tkay/core/common/f/ag;->n:Z

    .line 1768
    iput p1, v1, Lcom/tkay/core/common/f/ag;->v:I

    .line 1769
    iget-object p1, p0, Lcom/tkay/core/common/h;->N:Lcom/tkay/core/common/f/aj;

    iput-object p1, v1, Lcom/tkay/core/common/f/ag;->u:Lcom/tkay/core/common/f/aj;

    .line 1770
    iget-object p1, p0, Lcom/tkay/core/common/h;->Q:Lcom/tkay/core/common/f/aj;

    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide p1

    iput-wide p1, v1, Lcom/tkay/core/common/f/ag;->w:D

    .line 1772
    new-instance p1, Lcom/tkay/core/b/h;

    invoke-direct {p1, v1}, Lcom/tkay/core/b/h;-><init>(Lcom/tkay/core/common/f/ag;)V

    .line 1773
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p2

    invoke-interface {p1, p2}, Lcom/tkay/core/common/k$b;->a(Z)V

    .line 1775
    new-instance p2, Lcom/tkay/core/common/h$8;

    invoke-direct {p2, p0, p3}, Lcom/tkay/core/common/h$8;-><init>(Lcom/tkay/core/common/h;Lcom/tkay/core/common/k$a;)V

    invoke-interface {p1, p2}, Lcom/tkay/core/common/k$b;->a(Lcom/tkay/core/common/k$a;)V

    return-void
.end method

.method private a(J)V
    .locals 2

    .line 663
    iget-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 665
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    invoke-virtual {v0, v1, p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    :cond_0
    return-void
.end method

.method private a(Lcom/tkay/core/common/f/aj;)V
    .locals 11

    if-eqz p1, :cond_2

    .line 298
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->K()I

    move-result v0

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_1

    .line 301
    :cond_0
    iget-object v2, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/core/common/h;->d:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    const/4 v7, 0x1

    iget v8, p0, Lcom/tkay/core/common/h;->k:I

    iget v9, p0, Lcom/tkay/core/common/h;->c:I

    iget-object v0, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    if-eqz v0, :cond_1

    iget-object v0, v0, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    move-object v10, v0

    const-string v6, ""

    invoke-static/range {v2 .. v10}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 303
    iget-object v1, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    const/4 v2, 0x1

    invoke-static {p1, v0, v1, v2}, Lcom/tkay/core/common/m/f;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;Z)V

    :cond_2
    :goto_1
    return-void
.end method

.method private declared-synchronized a(Lcom/tkay/core/common/f/aj;I)V
    .locals 1

    monitor-enter p0

    const/4 v0, 0x2

    if-eq p2, v0, :cond_0

    .line 407
    :try_start_0
    iget-object p2, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    goto :goto_0

    .line 403
    :cond_0
    iget-object p2, p0, Lcom/tkay/core/common/h;->v:Ljava/util/List;

    .line 412
    :goto_0
    monitor-enter p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v0, 0x0

    .line 414
    :try_start_1
    invoke-static {p2, p1, v0}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V

    .line 419
    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    :try_start_2
    monitor-exit p2

    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private a(Lcom/tkay/core/common/f/d;)V
    .locals 0

    .line 241
    iput-object p1, p0, Lcom/tkay/core/common/h;->i:Lcom/tkay/core/common/f/d;

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V
    .locals 1

    .line 993
    iget-object v0, p0, Lcom/tkay/core/common/h;->l:Lcom/tkay/core/common/b/b;

    if-eqz v0, :cond_0

    .line 995
    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/common/b/b;->b(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/h;)V
    .locals 0

    .line 65
    invoke-direct {p0}, Lcom/tkay/core/common/h;->j()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 65
    invoke-direct {p0, p1}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/f/aj;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/aj;I)V
    .locals 0

    .line 65
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/f/aj;I)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/d;)V
    .locals 0

    .line 8979
    iget-object p0, p0, Lcom/tkay/core/common/h;->l:Lcom/tkay/core/common/b/b;

    if-eqz p0, :cond_0

    .line 8981
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/b/b;->c(Lcom/tkay/core/common/f/d;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/h;Lcom/tkay/core/common/m/d;Lcom/tkay/core/common/f/d;)V
    .locals 2

    .line 8896
    new-instance v0, Lcom/tkay/core/common/m/c;

    invoke-direct {v0}, Lcom/tkay/core/common/m/c;-><init>()V

    .line 8897
    iget-object v1, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->a:Landroid/content/Context;

    .line 8898
    iget-object v1, p0, Lcom/tkay/core/common/h;->b:Ljava/lang/ref/WeakReference;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->b:Ljava/lang/ref/WeakReference;

    .line 8899
    iget-object v1, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->c:Ljava/lang/String;

    .line 8900
    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->d:Ljava/lang/String;

    .line 8901
    iget-object v1, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->e:Lcom/tkay/core/c/d;

    .line 8902
    iget-object v1, p0, Lcom/tkay/core/common/h;->h:Ljava/util/Map;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->f:Ljava/util/Map;

    .line 8903
    iget v1, p0, Lcom/tkay/core/common/h;->A:I

    iput v1, v0, Lcom/tkay/core/common/m/c;->g:I

    .line 8904
    iput-object p2, v0, Lcom/tkay/core/common/m/c;->h:Lcom/tkay/core/common/f/d;

    .line 8906
    invoke-virtual {p1, v0}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/common/m/c;)V

    .line 8908
    new-instance p2, Lcom/tkay/core/common/h$5;

    invoke-direct {p2, p0}, Lcom/tkay/core/common/h$5;-><init>(Lcom/tkay/core/common/h;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/common/m/b;)V

    .line 8964
    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->b()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/h;Ljava/lang/String;)V
    .locals 0

    .line 65
    invoke-direct {p0, p1}, Lcom/tkay/core/common/h;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/h;Ljava/lang/String;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 65
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/core/common/h;->a(Ljava/lang/String;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/h;Ljava/util/List;I)V
    .locals 0

    .line 65
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/h;->a(Ljava/util/List;I)V

    return-void
.end method

.method private a(Lcom/tkay/core/common/m/d;)V
    .locals 4

    .line 1228
    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->e()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1230
    iget-object v1, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    const/4 v2, -0x1

    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->f()I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/m/f;->a(II)V

    .line 1233
    :cond_0
    invoke-direct {p0, p1}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/m/d;)V

    .line 1235
    invoke-direct {p0}, Lcom/tkay/core/common/h;->r()V

    if-nez v0, :cond_1

    return-void

    .line 1245
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/f;->d()I

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/tkay/core/common/h;->r:Z

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/core/common/h;->m:Z

    if-eqz v0, :cond_3

    .line 1246
    :cond_2
    invoke-direct {p0}, Lcom/tkay/core/common/h;->v()Z

    .line 1249
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "checkToRequestNextAdSource: try to call next AdSource.||"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->f()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1251
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->f()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/m/f;->a(I)V

    .line 1253
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->f()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/m/f;->b(I)Ljava/util/List;

    move-result-object v0

    .line 1266
    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->f()I

    move-result p1

    invoke-direct {p0, v0, p1}, Lcom/tkay/core/common/h;->a(Ljava/util/List;I)V

    .line 1268
    invoke-direct {p0}, Lcom/tkay/core/common/h;->l()V

    return-void
.end method

.method private a(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;)V
    .locals 8

    .line 1178
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkPlacementId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p4, p2}, Lcom/tkay/core/common/f/d;->g(Ljava/lang/String;)V

    .line 1185
    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->f()I

    move-result p1

    const-wide/16 v0, 0x0

    const/4 p2, 0x2

    if-eq p1, p2, :cond_0

    invoke-static {p3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v2

    goto :goto_0

    :cond_0
    move-wide v2, v0

    .line 1186
    :goto_0
    iget-wide v4, p0, Lcom/tkay/core/common/h;->E:D

    cmpl-double p1, v2, v4

    if-lez p1, :cond_1

    .line 1187
    iput-wide v2, p0, Lcom/tkay/core/common/h;->E:D

    .line 1190
    :cond_1
    invoke-direct {p0, p3}, Lcom/tkay/core/common/h;->d(Lcom/tkay/core/common/f/aj;)V

    .line 1193
    iget-object p1, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    if-nez p1, :cond_2

    .line 1194
    iput-object p3, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    .line 1196
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object p1

    iget-object v4, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    invoke-virtual {p1, v4, v5}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    goto :goto_1

    .line 1198
    :cond_2
    invoke-static {p3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v4

    .line 1199
    iget-object p1, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v6

    cmpl-double p1, v4, v6

    if-lez p1, :cond_3

    .line 1200
    iput-object p3, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    .line 1201
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object p1

    iget-object v4, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    invoke-virtual {p1, v4, v5}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    .line 1206
    :cond_3
    :goto_1
    iget-object p1, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {p1, p3}, Lcom/tkay/core/common/m/f;->b(Lcom/tkay/core/common/f/aj;)V

    .line 1210
    iget-wide v4, p0, Lcom/tkay/core/common/h;->O:D

    cmpl-double p1, v4, v0

    if-lez p1, :cond_5

    cmpg-double p1, v4, v2

    if-gez p1, :cond_4

    .line 5612
    iput p2, p4, Lcom/tkay/core/common/f/d;->s:I

    goto :goto_2

    :cond_4
    const/4 p1, 0x1

    .line 6612
    iput p1, p4, Lcom/tkay/core/common/f/d;->s:I

    goto :goto_2

    :cond_5
    const/4 p1, 0x0

    .line 7612
    iput p1, p4, Lcom/tkay/core/common/f/d;->s:I

    .line 1222
    :goto_2
    iget-object p1, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iget-object p2, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object p4, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    const/4 v0, 0x0

    invoke-static {p1, p2, p4, p3, v0}, Lcom/tkay/core/common/m/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/aj;)V

    return-void
.end method

.method private a(Lcom/tkay/core/common/m/d;Lcom/tkay/core/common/f/d;)V
    .locals 2

    .line 896
    new-instance v0, Lcom/tkay/core/common/m/c;

    invoke-direct {v0}, Lcom/tkay/core/common/m/c;-><init>()V

    .line 897
    iget-object v1, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->a:Landroid/content/Context;

    .line 898
    iget-object v1, p0, Lcom/tkay/core/common/h;->b:Ljava/lang/ref/WeakReference;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->b:Ljava/lang/ref/WeakReference;

    .line 899
    iget-object v1, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->c:Ljava/lang/String;

    .line 900
    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->d:Ljava/lang/String;

    .line 901
    iget-object v1, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->e:Lcom/tkay/core/c/d;

    .line 902
    iget-object v1, p0, Lcom/tkay/core/common/h;->h:Ljava/util/Map;

    iput-object v1, v0, Lcom/tkay/core/common/m/c;->f:Ljava/util/Map;

    .line 903
    iget v1, p0, Lcom/tkay/core/common/h;->A:I

    iput v1, v0, Lcom/tkay/core/common/m/c;->g:I

    .line 904
    iput-object p2, v0, Lcom/tkay/core/common/m/c;->h:Lcom/tkay/core/common/f/d;

    .line 906
    invoke-virtual {p1, v0}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/common/m/c;)V

    .line 908
    new-instance p2, Lcom/tkay/core/common/h$5;

    invoke-direct {p2, p0}, Lcom/tkay/core/common/h$5;-><init>(Lcom/tkay/core/common/h;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/common/m/b;)V

    .line 964
    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->b()V

    return-void
.end method

.method private declared-synchronized a(Ljava/lang/String;)V
    .locals 1

    monitor-enter p0

    .line 1913
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->b()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 1914
    monitor-exit p0

    return-void

    .line 1919
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/m/d;

    .line 1922
    invoke-direct {p0, p1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/m/d;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1923
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized a(Ljava/lang/String;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
    .locals 2

    monitor-enter p0

    .line 1007
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/m/d;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_0

    .line 1012
    monitor-exit p0

    return-void

    .line 1015
    :cond_0
    :try_start_1
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;)V

    .line 1017
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "[Enter] onCacheAdLoaded: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->aa()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1019
    invoke-direct {p0, p3}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/f/aj;)V

    .line 1021
    invoke-direct {p0}, Lcom/tkay/core/common/h;->t()V

    .line 1027
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object p2

    invoke-direct {p0, p2}, Lcom/tkay/core/common/h;->c(Lcom/tkay/core/common/f/d;)V

    .line 1031
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/m/d;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1032
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 2161
    iput-object p1, p0, Lcom/tkay/core/common/h;->R:Ljava/util/List;

    return-void
.end method

.method private declared-synchronized a(Ljava/util/List;I)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;I)V"
        }
    .end annotation

    monitor-enter p0

    .line 333
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->b()Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->c()Z

    move-result v0

    if-nez v0, :cond_2

    if-eqz p1, :cond_2

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 341
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 343
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "addAdSourceToRequestingPool:start to request:  requesting size:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 344
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/aj;

    .line 345
    invoke-direct {p0, v0, p2}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/f/aj;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 348
    :cond_1
    monitor-exit p0

    return-void

    .line 334
    :cond_2
    :goto_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private a(Ljava/util/Map;)V
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

    .line 237
    iput-object p1, p0, Lcom/tkay/core/common/h;->h:Ljava/util/Map;

    return-void
.end method

.method private b(Ljava/lang/String;)Lcom/tkay/core/common/f/aj;
    .locals 1

    .line 2079
    iget-object v0, p0, Lcom/tkay/core/common/h;->D:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_0

    .line 2080
    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/aj;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private b(J)V
    .locals 2

    .line 1949
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->M:Ljava/lang/Runnable;

    invoke-virtual {v0, v1, p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method private declared-synchronized b(Lcom/tkay/core/common/f/aj;)V
    .locals 1

    monitor-enter p0

    .line 450
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 455
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private b(Lcom/tkay/core/common/f/aj;I)V
    .locals 8

    .line 703
    new-instance v5, Lcom/tkay/core/common/m/d;

    invoke-direct {v5, p1, p2}, Lcom/tkay/core/common/m/d;-><init>(Lcom/tkay/core/common/f/aj;I)V

    .line 704
    invoke-virtual {v5}, Lcom/tkay/core/common/m/d;->a()Ljava/lang/String;

    move-result-object v2

    .line 706
    iget-object v0, p0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    invoke-interface {v0, v2, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 709
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    const/4 v1, 0x1

    invoke-virtual {v0, v1, p2}, Lcom/tkay/core/common/m/f;->a(II)V

    .line 710
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v6

    new-instance v7, Lcom/tkay/core/common/h$4;

    move-object v0, v7

    move-object v1, p0

    move-object v3, p1

    move v4, p2

    invoke-direct/range {v0 .. v5}, Lcom/tkay/core/common/h$4;-><init>(Lcom/tkay/core/common/h;Ljava/lang/String;Lcom/tkay/core/common/f/aj;ILcom/tkay/core/common/m/d;)V

    invoke-virtual {v6, v7}, Lcom/tkay/core/common/l/b/a;->b(Ljava/lang/Runnable;)V

    return-void
.end method

.method private b(Lcom/tkay/core/common/f/d;)V
    .locals 1

    .line 979
    iget-object v0, p0, Lcom/tkay/core/common/h;->l:Lcom/tkay/core/common/b/b;

    if-eqz v0, :cond_0

    .line 981
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/b/b;->c(Lcom/tkay/core/common/f/d;)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/core/common/h;)V
    .locals 0

    .line 65
    invoke-direct {p0}, Lcom/tkay/core/common/h;->o()V

    return-void
.end method

.method static synthetic b(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 65
    invoke-direct {p0, p1}, Lcom/tkay/core/common/h;->d(Lcom/tkay/core/common/f/aj;)V

    return-void
.end method

.method private b(Lcom/tkay/core/common/m/d;)V
    .locals 2

    .line 1274
    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->d()Ljava/lang/Boolean;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->d()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 1285
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->f()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    return-void

    .line 1289
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/core/common/m/d;->d()Ljava/lang/Boolean;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_2

    .line 1290
    iget p1, p0, Lcom/tkay/core/common/h;->B:I

    add-int/2addr p1, v0

    iput p1, p0, Lcom/tkay/core/common/h;->B:I

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/core/common/h;)Ljava/lang/String;
    .locals 0

    .line 65
    iget-object p0, p0, Lcom/tkay/core/common/h;->T:Ljava/lang/String;

    return-object p0
.end method

.method private c(Lcom/tkay/core/common/f/aj;)V
    .locals 2

    .line 563
    iget-object v0, p0, Lcom/tkay/core/common/h;->D:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_0

    .line 564
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/h;->D:Ljava/util/concurrent/ConcurrentHashMap;

    .line 567
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->D:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private c(Lcom/tkay/core/common/f/d;)V
    .locals 1

    .line 986
    iget-object v0, p0, Lcom/tkay/core/common/h;->l:Lcom/tkay/core/common/b/b;

    if-eqz v0, :cond_0

    .line 988
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/b/b;->d(Lcom/tkay/core/common/f/d;)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 65
    invoke-direct {p0, p1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/f/aj;)V

    return-void
.end method

.method static synthetic c(I)Z
    .locals 1

    const/4 v0, 0x3

    if-eq p0, v0, :cond_1

    const/4 v0, 0x5

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private d(Lcom/tkay/core/common/f/aj;)V
    .locals 4

    if-nez p1, :cond_0

    return-void

    .line 2168
    :cond_0
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    .line 2170
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v2

    const/4 v3, 0x1

    if-ne v2, v3, :cond_1

    const-wide v2, 0x40c3880000000000L    # 10000.0

    cmpl-double v2, v0, v2

    if-nez v2, :cond_1

    .line 2174
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 2179
    iget-wide v0, v2, Lcom/tkay/core/common/f/l;->o:D

    .line 2182
    :cond_1
    iget-object v2, p0, Lcom/tkay/core/common/h;->Q:Lcom/tkay/core/common/f/aj;

    invoke-static {v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v2

    cmpl-double v0, v0, v2

    if-lez v0, :cond_2

    .line 2183
    iput-object p1, p0, Lcom/tkay/core/common/h;->Q:Lcom/tkay/core/common/f/aj;

    :cond_2
    return-void
.end method

.method static synthetic d(Lcom/tkay/core/common/h;)V
    .locals 0

    .line 65
    invoke-direct {p0}, Lcom/tkay/core/common/h;->r()V

    return-void
.end method

.method private static d(I)Z
    .locals 1

    const/4 v0, 0x3

    if-eq p0, v0, :cond_1

    const/4 v0, 0x5

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private declared-synchronized e(I)V
    .locals 3

    monitor-enter p0

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    .line 430
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/f;->e()I

    move-result v0

    goto :goto_0

    .line 426
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/f;->f()I

    move-result v0

    :goto_0
    if-nez v0, :cond_1

    .line 437
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "checkToAddAdSourceToRequestingPool: vail requesting num: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " | requestFrom: "

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 439
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/m/f;->b(I)Ljava/util/List;

    move-result-object v0

    invoke-direct {p0, v0, p1}, Lcom/tkay/core/common/h;->a(Ljava/util/List;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 441
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic e(Lcom/tkay/core/common/h;)V
    .locals 0

    .line 65
    invoke-direct {p0}, Lcom/tkay/core/common/h;->l()V

    return-void
.end method

.method private f(I)I
    .locals 1

    if-lez p1, :cond_0

    return p1

    .line 2147
    :cond_0
    iget p1, p0, Lcom/tkay/core/common/h;->B:I

    iget-object v0, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->an()I

    move-result v0

    if-ge p1, v0, :cond_1

    const/4 p1, 0x5

    return p1

    :cond_1
    const/4 p1, 0x2

    return p1
.end method

.method private declared-synchronized j()V
    .locals 3

    monitor-enter p0

    .line 153
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":filled timeup to check cache."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 154
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/core/common/f/a;

    move-result-object v0

    const/4 v1, 0x1

    .line 155
    iput-boolean v1, p0, Lcom/tkay/core/common/h;->s:Z

    .line 156
    iget-boolean v1, p0, Lcom/tkay/core/common/h;->o:Z

    if-nez v1, :cond_1

    if-eqz v0, :cond_1

    .line 157
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ":filled timeup to check cache exist."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 158
    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 159
    :goto_0
    invoke-direct {p0, v0}, Lcom/tkay/core/common/h;->d(Lcom/tkay/core/common/f/aj;)V

    const/16 v0, 0x9

    .line 160
    invoke-virtual {p0, v0}, Lcom/tkay/core/common/h;->b(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 161
    monitor-exit p0

    return-void

    .line 162
    :cond_1
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":filled timeup to check no cache, do nothing."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 164
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized k()V
    .locals 4

    monitor-enter p0

    .line 263
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->p:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    if-nez v0, :cond_0

    .line 264
    monitor-exit p0

    return-void

    .line 269
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    monitor-enter v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    .line 270
    :try_start_2
    iget-object v1, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_1
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/aj;

    if-eqz v2, :cond_1

    .line 271
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 272
    invoke-direct {p0, v2}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/f/aj;)V

    goto :goto_0

    .line 275
    :cond_2
    iget-object v1, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 276
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 278
    :try_start_3
    iget-object v0, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    monitor-enter v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    .line 279
    :try_start_4
    iget-object v1, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_3
    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/m/e;

    if-eqz v2, :cond_3

    .line 280
    invoke-virtual {v2}, Lcom/tkay/core/common/m/e;->a()Lcom/tkay/core/common/f/aj;

    move-result-object v3

    if-eqz v3, :cond_3

    invoke-virtual {v2}, Lcom/tkay/core/common/m/e;->a()Lcom/tkay/core/common/f/aj;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v3

    if-eqz v3, :cond_3

    .line 281
    invoke-virtual {v2}, Lcom/tkay/core/common/m/e;->a()Lcom/tkay/core/common/f/aj;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/f/aj;)V

    goto :goto_1

    .line 284
    :cond_4
    iget-object v1, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 285
    monitor-exit v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 287
    :try_start_5
    iget-object v0, p0, Lcom/tkay/core/common/h;->v:Ljava/util/List;

    monitor-enter v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    .line 288
    :try_start_6
    iget-object v1, p0, Lcom/tkay/core/common/h;->v:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 289
    monitor-exit v0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v1

    :try_start_7
    monitor-exit v0

    throw v1

    :catchall_1
    move-exception v1

    .line 285
    monitor-exit v0

    throw v1

    :catchall_2
    move-exception v1

    .line 276
    monitor-exit v0

    throw v1
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    :catchall_3
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized l()V
    .locals 9

    monitor-enter p0

    .line 360
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    const/4 v1, 0x0

    .line 2343
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/m/f;->a(Z)D

    move-result-wide v2

    .line 361
    invoke-direct {p0}, Lcom/tkay/core/common/h;->s()D

    move-result-wide v4

    .line 363
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v6, "checkWaterfallStatus: vail requesting num: "

    invoke-direct {v0, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v6, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v6}, Lcom/tkay/core/common/m/f;->d()I

    move-result v6

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 364
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v6, "checkWaterfallStatus:isFinishBidding:"

    invoke-direct {v0, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v6, p0, Lcom/tkay/core/common/h;->m:Z

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 365
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v6, "checkWaterfallStatus:currentCacheNum >= mStrategy.getCachedOffersNum():"

    invoke-direct {v0, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v6, p0, Lcom/tkay/core/common/h;->B:I

    iget-object v7, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v7}, Lcom/tkay/core/c/d;->an()I

    move-result v7

    const/4 v8, 0x1

    if-lt v6, v7, :cond_0

    move v6, v8

    goto :goto_0

    :cond_0
    move v6, v1

    :goto_0
    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 366
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v6, "checkWaterfallStatus:getCacheLowestPrice() > getWaitingResponseMaxPrice():"

    invoke-direct {v0, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    cmpl-double v2, v2, v4

    if-lez v2, :cond_1

    move v1, v8

    :cond_1
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 367
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "checkWaterfallStatus:requestHasShow:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/m/h;->c()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 368
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "checkWaterfallStatus:hasLongTimeout:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/m/h;->b()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 370
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->m:Z

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/tkay/core/common/h;->B:I

    iget-object v1, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->an()I

    move-result v1

    if-lt v0, v1, :cond_2

    if-gez v2, :cond_3

    :cond_2
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    .line 371
    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->c()Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->b()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 372
    :cond_3
    iput-boolean v8, p0, Lcom/tkay/core/common/h;->p:Z

    .line 373
    invoke-direct {p0}, Lcom/tkay/core/common/h;->k()V

    .line 375
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/f;->d()I

    move-result v0

    if-nez v0, :cond_4

    .line 377
    iget-object v0, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/core/common/m/f;->a(Landroid/content/Context;Ljava/lang/String;)V

    .line 380
    invoke-direct {p0}, Lcom/tkay/core/common/h;->q()V

    .line 385
    :cond_4
    invoke-direct {p0}, Lcom/tkay/core/common/h;->p()V

    .line 388
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->p:Z

    if-nez v0, :cond_5

    invoke-direct {p0}, Lcom/tkay/core/common/h;->A()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 389
    :cond_5
    invoke-direct {p0}, Lcom/tkay/core/common/h;->q()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 391
    :cond_6
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private m()V
    .locals 4

    .line 642
    iget-object v0, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->n()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    .line 643
    new-instance v0, Lcom/tkay/core/common/h$2;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/h$2;-><init>(Lcom/tkay/core/common/h;)V

    iput-object v0, p0, Lcom/tkay/core/common/h;->I:Ljava/lang/Runnable;

    .line 655
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ": start filled count down."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 656
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->I:Ljava/lang/Runnable;

    iget-object v2, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v2}, Lcom/tkay/core/c/d;->n()J

    move-result-wide v2

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void

    .line 658
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ": no filled count down."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method private n()Ljava/lang/Runnable;
    .locals 1

    .line 670
    new-instance v0, Lcom/tkay/core/common/h$3;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/h$3;-><init>(Lcom/tkay/core/common/h;)V

    return-object v0
.end method

.method private declared-synchronized o()V
    .locals 3

    monitor-enter p0

    .line 679
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->o:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/h;->v:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    .line 681
    iput-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    .line 683
    iget-object v0, p0, Lcom/tkay/core/common/h;->v:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/aj;

    .line 684
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "handleDefaultAdSourceRequest: startLoadDefaultAdSource:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->aa()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 686
    iget-object v1, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 688
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "handleDefaultAdSourceRequest:start to request: waiting size:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/core/common/h;->v:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "; requesting size:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v2}, Lcom/tkay/core/common/m/f;->f()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/4 v1, 0x2

    .line 689
    invoke-direct {p0, v0, v1}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/f/aj;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 691
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized p()V
    .locals 7

    monitor-enter p0

    .line 1105
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->g()Z

    move-result v0

    if-nez v0, :cond_8

    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->e()Z

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_1

    .line 1109
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->b()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-eqz v0, :cond_1

    .line 1111
    monitor-exit p0

    return-void

    :cond_1
    const/4 v0, 0x0

    .line 1115
    :try_start_1
    iget-boolean v1, p0, Lcom/tkay/core/common/h;->m:Z

    if-eqz v1, :cond_6

    iget-object v1, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    if-eqz v1, :cond_6

    iget-object v1, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v1

    if-eqz v1, :cond_6

    .line 1116
    iget-object v0, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    .line 1118
    iget-object v2, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    monitor-enter v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 1119
    :try_start_2
    iget-object v3, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_2
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/aj;

    .line 1121
    invoke-static {v4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v5

    cmpl-double v5, v5, v0

    if-lez v5, :cond_2

    .line 1122
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "tryToSendWinNotice(), do not send win: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->aa()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1123
    monitor-exit v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    monitor-exit p0

    return-void

    .line 1126
    :cond_3
    :try_start_3
    monitor-exit v2

    .line 1128
    iget-object v2, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    monitor-enter v2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 1129
    :try_start_4
    iget-object v3, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_4
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_5

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/m/e;

    .line 1130
    invoke-virtual {v4}, Lcom/tkay/core/common/m/e;->a()Lcom/tkay/core/common/f/aj;

    move-result-object v4

    .line 1131
    invoke-static {v4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v5

    cmpl-double v5, v5, v0

    if-lez v5, :cond_4

    .line 1132
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "tryToSendWinNotice(), do not send win: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->aa()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1133
    monitor-exit v2
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit p0

    return-void

    .line 1136
    :cond_5
    :try_start_5
    monitor-exit v2

    const/4 v0, 0x1

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit v2

    throw v0

    :catchall_1
    move-exception v0

    .line 1126
    monitor-exit v2

    throw v0

    :cond_6
    :goto_0
    if-eqz v0, :cond_7

    .line 1142
    iget-object v0, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 1144
    iget-object v1, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/m/h;->h()V

    .line 1145
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "tryToSendWinNotice(), send win notice: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->aa()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1146
    iget-object v1, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/aj;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    .line 1154
    :cond_7
    monitor-exit p0

    return-void

    .line 1106
    :cond_8
    :goto_1
    :try_start_6
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "tryToSendWinNotice(), mHasSendWinNotice: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/m/h;->g()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", mHasHBAdSource: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/m/h;->e()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    .line 1107
    monitor-exit p0

    return-void

    :catchall_2
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized q()V
    .locals 10

    monitor-enter p0

    .line 1159
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->e()Z

    move-result v0

    if-nez v0, :cond_0

    .line 1160
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "tryToSendLossNotice(), mHasHBAdSource: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/m/h;->e()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1161
    monitor-exit p0

    return-void

    .line 1163
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->b()Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v0, :cond_1

    .line 1165
    monitor-exit p0

    return-void

    .line 1168
    :cond_1
    :try_start_2
    iget-object v1, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/core/common/h;->d:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    const-string v5, ""

    const/4 v6, 0x1

    iget v7, p0, Lcom/tkay/core/common/h;->k:I

    iget v8, p0, Lcom/tkay/core/common/h;->c:I

    iget-object v0, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    iget-object v0, v0, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    :goto_0
    move-object v9, v0

    invoke-static/range {v1 .. v9}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 1171
    iget-object v1, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    iget-object v2, p0, Lcom/tkay/core/common/h;->F:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v1, v0, v2}, Lcom/tkay/core/common/m/f;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 1172
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized r()V
    .locals 6

    monitor-enter p0

    .line 1303
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/core/common/h;->s()D

    move-result-wide v0

    .line 1315
    iget-wide v2, p0, Lcom/tkay/core/common/h;->E:D

    const-wide/16 v4, 0x0

    cmpl-double v2, v2, v4

    if-ltz v2, :cond_4

    .line 1316
    iget-boolean v2, p0, Lcom/tkay/core/common/h;->m:Z

    if-nez v2, :cond_0

    iget-boolean v2, p0, Lcom/tkay/core/common/h;->r:Z

    if-eqz v2, :cond_1

    :cond_0
    iget-wide v2, p0, Lcom/tkay/core/common/h;->E:D

    cmpl-double v0, v2, v0

    if-gez v0, :cond_2

    :cond_1
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->s:Z

    if-eqz v0, :cond_7

    .line 1317
    :cond_2
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->o:Z

    if-nez v0, :cond_3

    const/4 v0, -0x1

    .line 1321
    invoke-virtual {p0, v0}, Lcom/tkay/core/common/h;->b(I)V

    .line 1323
    :cond_3
    invoke-direct {p0}, Lcom/tkay/core/common/h;->w()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    .line 1326
    :cond_4
    :try_start_1
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->m:Z

    if-eqz v0, :cond_7

    .line 7850
    iget-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    if-eqz v0, :cond_5

    invoke-direct {p0}, Lcom/tkay/core/common/h;->B()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 7851
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    .line 7853
    iget-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    const/4 v0, 0x0

    .line 7854
    iput-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_5
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_6

    .line 1332
    monitor-exit p0

    return-void

    .line 1335
    :cond_6
    :try_start_2
    invoke-direct {p0}, Lcom/tkay/core/common/h;->A()Z

    move-result v0

    if-eqz v0, :cond_7

    iget-boolean v0, p0, Lcom/tkay/core/common/h;->o:Z

    if-nez v0, :cond_7

    .line 1339
    invoke-direct {p0}, Lcom/tkay/core/common/h;->z()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 1345
    :cond_7
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private s()D
    .locals 9

    .line 1350
    iget-object v0, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->b()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x2

    if-ne v0, v2, :cond_3

    .line 1352
    iget-object v0, p0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    monitor-enter v0

    .line 1353
    :try_start_0
    iget-object v2, p0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    move-object v3, v1

    if-eqz v2, :cond_2

    .line 1355
    :cond_0
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    .line 1356
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    .line 1357
    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/m/d;

    if-eqz v4, :cond_0

    .line 1359
    invoke-virtual {v4}, Lcom/tkay/core/common/m/d;->g()Z

    move-result v5

    if-nez v5, :cond_0

    .line 1362
    invoke-virtual {v4}, Lcom/tkay/core/common/m/d;->h()Lcom/tkay/core/common/f/aj;

    move-result-object v4

    if-eqz v4, :cond_0

    if-nez v3, :cond_1

    :goto_1
    move-object v3, v4

    goto :goto_0

    .line 1369
    :cond_1
    invoke-static {v4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v5

    invoke-static {v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v7

    cmpl-double v5, v5, v7

    if-lez v5, :cond_0

    goto :goto_1

    .line 1375
    :cond_2
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    :cond_3
    move-object v3, v1

    .line 1378
    :goto_2
    iget-object v0, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v2, 0x0

    if-lez v0, :cond_4

    iget-object v0, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/aj;

    goto :goto_3

    :cond_4
    move-object v0, v1

    .line 1380
    :goto_3
    iget-object v4, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    monitor-enter v4

    .line 1381
    :try_start_1
    iget-object v5, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v5

    if-lez v5, :cond_5

    .line 1382
    iget-object v5, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    invoke-interface {v5, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/m/e;

    if-eqz v2, :cond_5

    .line 1384
    invoke-virtual {v2}, Lcom/tkay/core/common/m/e;->a()Lcom/tkay/core/common/f/aj;

    move-result-object v1

    .line 1387
    :cond_5
    monitor-exit v4
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1390
    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v4

    invoke-static {v1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    invoke-static {v4, v5, v0, v1}, Ljava/lang/Math;->max(DD)D

    move-result-wide v0

    .line 1391
    invoke-static {v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v2

    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->max(DD)D

    move-result-wide v0

    return-wide v0

    :catchall_1
    move-exception v0

    .line 1387
    monitor-exit v4

    throw v0
.end method

.method private declared-synchronized t()V
    .locals 2

    monitor-enter p0

    .line 1396
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->v:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 1397
    iget-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 1398
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    const/4 v0, 0x0

    .line 1399
    iput-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1401
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private u()V
    .locals 1

    .line 1469
    invoke-direct {p0}, Lcom/tkay/core/common/h;->v()Z

    .line 1470
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->P:Z

    if-nez v0, :cond_0

    .line 1471
    invoke-virtual {p0}, Lcom/tkay/core/common/h;->h()V

    :cond_0
    return-void
.end method

.method private declared-synchronized v()Z
    .locals 4

    monitor-enter p0

    .line 1477
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->R:Ljava/util/List;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/core/common/h;->R:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 1482
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->c()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_1

    .line 1483
    monitor-exit p0

    return v1

    .line 1486
    :cond_1
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->f()V

    const/4 v0, 0x1

    .line 1487
    iput-boolean v0, p0, Lcom/tkay/core/common/h;->S:Z

    .line 1489
    new-instance v1, Ljava/util/ArrayList;

    const/4 v2, 0x3

    invoke-direct {v1, v2}, Ljava/util/ArrayList;-><init>(I)V

    .line 1490
    iget-object v2, p0, Lcom/tkay/core/common/h;->R:Ljava/util/List;

    invoke-interface {v1, v2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 1491
    iget-object v2, p0, Lcom/tkay/core/common/h;->R:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->clear()V

    const/16 v2, 0x8

    .line 1494
    new-instance v3, Lcom/tkay/core/common/h$6;

    invoke-direct {v3, p0}, Lcom/tkay/core/common/h$6;-><init>(Lcom/tkay/core/common/h;)V

    invoke-direct {p0, v2, v1, v3}, Lcom/tkay/core/common/h;->a(ILjava/util/List;Lcom/tkay/core/common/k$a;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1526
    monitor-exit p0

    return v0

    .line 1479
    :cond_2
    :goto_0
    monitor-exit p0

    return v1

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized w()V
    .locals 3

    monitor-enter p0

    .line 1531
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->m:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 1533
    monitor-exit p0

    return-void

    .line 1535
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->c()Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v0, :cond_1

    .line 1537
    monitor-exit p0

    return-void

    .line 1540
    :cond_1
    :try_start_2
    iget-object v0, p0, Lcom/tkay/core/common/h;->H:Ljava/util/List;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/tkay/core/common/h;->H:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_2

    goto :goto_0

    .line 1545
    :cond_2
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->q:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v0, :cond_3

    .line 1547
    monitor-exit p0

    return-void

    :cond_3
    const/4 v0, 0x1

    .line 1550
    :try_start_3
    iput-boolean v0, p0, Lcom/tkay/core/common/h;->q:Z

    const/4 v0, 0x7

    .line 1554
    iget-object v1, p0, Lcom/tkay/core/common/h;->H:Ljava/util/List;

    new-instance v2, Lcom/tkay/core/common/h$7;

    invoke-direct {v2, p0}, Lcom/tkay/core/common/h$7;-><init>(Lcom/tkay/core/common/h;)V

    invoke-direct {p0, v0, v1, v2}, Lcom/tkay/core/common/h;->a(ILjava/util/List;Lcom/tkay/core/common/k$a;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 1737
    monitor-exit p0

    return-void

    .line 1542
    :cond_4
    :goto_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private x()Z
    .locals 2

    .line 1850
    iget-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/tkay/core/common/h;->B()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1851
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    .line 1853
    iget-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    const/4 v0, 0x0

    .line 1854
    iput-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private y()V
    .locals 13

    const/4 v0, 0x1

    .line 1865
    iput-boolean v0, p0, Lcom/tkay/core/common/h;->o:Z

    const/4 v1, 0x0

    .line 1866
    iput-boolean v1, p0, Lcom/tkay/core/common/h;->n:Z

    .line 1868
    iget-object v2, p0, Lcom/tkay/core/common/h;->M:Ljava/lang/Runnable;

    if-eqz v2, :cond_0

    .line 1870
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/h;->M:Ljava/lang/Runnable;

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    .line 1873
    :cond_0
    iget-object v4, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/core/common/h;->d:Ljava/lang/String;

    iget-object v7, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    iget-object v8, p0, Lcom/tkay/core/common/h;->x:Ljava/lang/String;

    invoke-virtual {v7}, Lcom/tkay/core/c/d;->m()I

    move-result v9

    iget v10, p0, Lcom/tkay/core/common/h;->k:I

    iget v11, p0, Lcom/tkay/core/common/h;->c:I

    iget-object v2, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    if-eqz v2, :cond_1

    iget-object v2, v2, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    goto :goto_0

    :cond_1
    const/4 v2, 0x0

    :goto_0
    move-object v12, v2

    invoke-static/range {v4 .. v12}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v2

    .line 1874
    iget-object v3, p0, Lcom/tkay/core/common/h;->y:Lcom/tkay/core/api/AdError;

    invoke-static {v2, v3}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    .line 1876
    iget-boolean v2, p0, Lcom/tkay/core/common/h;->P:Z

    if-nez v2, :cond_4

    .line 8139
    iget-object v2, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v2}, Lcom/tkay/core/c/d;->k()I

    move-result v2

    const/16 v3, 0x8

    if-ne v2, v0, :cond_2

    iget v2, p0, Lcom/tkay/core/common/h;->k:I

    if-eq v2, v3, :cond_2

    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    iget-object v4, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v2, v4}, Lcom/tkay/core/common/v;->e(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_2

    goto :goto_1

    :cond_2
    move v0, v1

    :goto_1
    if-eqz v0, :cond_3

    .line 1878
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v4}, Lcom/tkay/core/c/d;->Y()I

    move-result v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v4

    if-eqz v4, :cond_4

    .line 1879
    iget-object v0, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    if-eqz v0, :cond_4

    .line 1880
    iput v3, v0, Lcom/tkay/core/common/j;->d:I

    .line 1881
    iget-object v5, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->Y()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    iget-object v7, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v8, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    const/4 v9, 0x0

    invoke-virtual/range {v4 .. v9}, Lcom/tkay/core/common/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/j;Lcom/tkay/core/common/b/a;)V

    goto :goto_2

    .line 1884
    :cond_3
    iget-object v0, p0, Lcom/tkay/core/common/h;->y:Lcom/tkay/core/api/AdError;

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/api/AdError;)V

    .line 1889
    :cond_4
    :goto_2
    invoke-virtual {p0}, Lcom/tkay/core/common/h;->f()V

    return-void
.end method

.method private z()V
    .locals 3

    .line 1895
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/core/common/f/a;

    move-result-object v0

    if-eqz v0, :cond_0

    const/16 v0, 0x9

    .line 1896
    invoke-virtual {p0, v0}, Lcom/tkay/core/common/h;->b(I)V

    return-void

    .line 1899
    :cond_0
    invoke-direct {p0}, Lcom/tkay/core/common/h;->v()Z

    move-result v0

    if-nez v0, :cond_1

    .line 1901
    invoke-direct {p0}, Lcom/tkay/core/common/h;->y()V

    :cond_1
    return-void
.end method


# virtual methods
.method protected final declared-synchronized a()V
    .locals 3

    monitor-enter p0

    .line 183
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->a()V

    .line 187
    iget-object v0, p0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 188
    :try_start_1
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v2, p0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    invoke-direct {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(Ljava/util/Map;)V

    .line 189
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 192
    :try_start_2
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 193
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/m/d;

    if-eqz v1, :cond_0

    .line 196
    invoke-virtual {v1}, Lcom/tkay/core/common/m/d;->c()V

    goto :goto_0

    .line 201
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->o:Z

    if-nez v0, :cond_2

    const/4 v0, 0x1

    .line 202
    iput-boolean v0, p0, Lcom/tkay/core/common/h;->o:Z

    .line 203
    invoke-direct {p0}, Lcom/tkay/core/common/h;->z()V

    .line 209
    :cond_2
    invoke-direct {p0}, Lcom/tkay/core/common/h;->l()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 210
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v1

    .line 189
    :try_start_3
    monitor-exit v0

    throw v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(DLcom/tkay/core/common/f/aj;)V
    .locals 2

    monitor-enter p0

    .line 1967
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->g()Z

    move-result v0

    if-nez v0, :cond_0

    if-eqz p3, :cond_0

    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result p3

    if-eqz p3, :cond_0

    .line 1968
    iget-object p3, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {p3}, Lcom/tkay/core/common/m/h;->h()V

    .line 1971
    :cond_0
    iget-wide v0, p0, Lcom/tkay/core/common/h;->O:D

    cmpl-double p3, p1, v0

    if-lez p3, :cond_1

    .line 1972
    iput-wide p1, p0, Lcom/tkay/core/common/h;->O:D

    .line 1975
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->Y()I

    move-result p1

    if-eqz p1, :cond_4

    const/4 p2, 0x2

    if-eq p1, p2, :cond_4

    .line 1983
    iget-object p1, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/m/h;->d()V

    .line 1985
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->Y()I

    move-result v0

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p2, p3}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 1987
    iget-object p2, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f;->b(Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    const-string p1, "AdManage is null--notifyimpression"

    .line 1989
    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "Id:"

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p3, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, "--format:"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {p3}, Lcom/tkay/core/c/d;->Y()I

    move-result p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p2, p3}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 1992
    :goto_0
    iget-boolean p1, p0, Lcom/tkay/core/common/h;->o:Z

    if-nez p1, :cond_3

    const/16 p1, 0xa

    .line 1993
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/h;->b(I)V

    .line 1996
    :cond_3
    invoke-direct {p0}, Lcom/tkay/core/common/h;->l()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1999
    monitor-exit p0

    return-void

    .line 1978
    :cond_4
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(I)V
    .locals 0

    .line 253
    iput p1, p0, Lcom/tkay/core/common/h;->k:I

    return-void
.end method

.method public a(Lcom/tkay/core/api/AdError;)V
    .locals 4

    .line 2062
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "placementId:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ";result_callback:fail;loadType:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/core/common/h;->k:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ";"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Mediation"

    invoke-static {v1, v0}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2065
    iget-object v0, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/w;->a(Landroid/content/Context;)Lcom/tkay/core/common/w;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/w;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 2067
    iget-object v0, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/core/common/j;->f:Lcom/tkay/core/common/b/a;

    if-eqz v0, :cond_0

    .line 2068
    iget-object v0, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    iget-object v0, v0, Lcom/tkay/core/common/j;->f:Lcom/tkay/core/common/b/a;

    invoke-interface {v0, p1}, Lcom/tkay/core/common/b/a;->onAdLoadFail(Lcom/tkay/core/api/AdError;)V

    .line 2069
    iget-object p1, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/tkay/core/common/j;->f:Lcom/tkay/core/common/b/a;

    :cond_0
    return-void
.end method

.method public abstract a(Lcom/tkay/core/api/TYBaseAdAdapter;)V
.end method

.method public final a(Lcom/tkay/core/common/b/b;)V
    .locals 0

    .line 245
    iput-object p1, p0, Lcom/tkay/core/common/h;->l:Lcom/tkay/core/common/b/b;

    return-void
.end method

.method public final a(Lcom/tkay/core/common/j;)V
    .locals 0

    .line 249
    iput-object p1, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    return-void
.end method

.method protected final a(Lcom/tkay/core/common/m/g;)V
    .locals 1

    .line 578
    new-instance v0, Lcom/tkay/core/common/m/f;

    invoke-direct {v0, p1}, Lcom/tkay/core/common/m/f;-><init>(Lcom/tkay/core/common/m/g;)V

    iput-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    .line 580
    invoke-virtual {v0}, Lcom/tkay/core/common/m/f;->a()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    .line 581
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/f;->b()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    .line 584
    iget-boolean v0, p1, Lcom/tkay/core/common/m/g;->e:Z

    iput-boolean v0, p0, Lcom/tkay/core/common/h;->m:Z

    .line 585
    iget-object v0, p1, Lcom/tkay/core/common/m/g;->b:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    .line 586
    iget-object v0, p1, Lcom/tkay/core/common/m/g;->a:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    .line 587
    iget-object v0, p1, Lcom/tkay/core/common/m/g;->c:Lcom/tkay/core/c/d;

    iput-object v0, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    .line 588
    iget v0, p1, Lcom/tkay/core/common/m/g;->f:I

    iput v0, p0, Lcom/tkay/core/common/h;->c:I

    .line 590
    iget-object p1, p1, Lcom/tkay/core/common/m/g;->d:Ljava/util/List;

    invoke-static {p1}, Lcom/tkay/core/common/m/f;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h;->x:Ljava/lang/String;

    return-void
.end method

.method public final declared-synchronized a(Ljava/lang/String;Lcom/tkay/core/api/TYBaseAdAdapter;Ljava/util/List;)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Lcom/tkay/core/api/TYBaseAdAdapter;",
            "Ljava/util/List<",
            "+",
            "Lcom/tkay/core/api/BaseAd;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    if-eqz p2, :cond_0

    .line 1043
    :try_start_0
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    .line 1045
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/m/d;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_1

    .line 1050
    monitor-exit p0

    return-void

    .line 1053
    :cond_1
    :try_start_1
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 1054
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v1

    .line 1056
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "[Enter] onAdLoaded(): "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->aa()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1058
    invoke-direct {p0, v1}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/f/aj;)V

    .line 1060
    invoke-direct {p0}, Lcom/tkay/core/common/h;->t()V

    .line 1064
    invoke-direct {p0, p1, p2, v1, v0}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;)V

    .line 1066
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->B()J

    move-result-wide v2

    const-wide/16 v4, -0x1

    cmp-long v2, v2, v4

    if-eqz v2, :cond_2

    .line 1067
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->J()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-lez v2, :cond_2

    .line 1068
    invoke-static {v0}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;)V

    .line 1073
    :cond_2
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/tkay/core/common/h;->c(Lcom/tkay/core/common/f/d;)V

    .line 1078
    iget-object v2, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v2

    const/4 v3, 0x2

    invoke-virtual {v2, v3, v0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 1082
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->p()J

    move-result-wide v9

    .line 1083
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->z()I

    move-result v6

    move-object v7, p2

    move-object v8, p3

    invoke-virtual/range {v4 .. v10}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;ILcom/tkay/core/api/TYBaseAdAdapter;Ljava/util/List;J)Lcom/tkay/core/common/f/ak;

    .line 1086
    sget-object p3, Lcom/tkay/core/common/b/f$i;->b:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, p3, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 1090
    iget-boolean p3, p0, Lcom/tkay/core/common/h;->P:Z

    if-nez p3, :cond_3

    iget-object p3, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {p3}, Lcom/tkay/core/common/m/h;->c()Z

    move-result p3

    if-nez p3, :cond_3

    .line 1091
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object p3

    iget-object v0, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v3}, Lcom/tkay/core/c/d;->Y()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p3, v0, v2}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v4

    if-eqz v4, :cond_3

    .line 1092
    iget-object p3, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {p3}, Lcom/tkay/core/c/d;->U()I

    move-result p3

    if-lez p3, :cond_3

    .line 1093
    iget-object v8, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v6

    .line 5364
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    new-instance v0, Lcom/tkay/core/common/f$4;

    move-object v3, v0

    move-object v5, p2

    invoke-direct/range {v3 .. v8}, Lcom/tkay/core/common/f$4;-><init>(Lcom/tkay/core/common/f;Lcom/tkay/core/api/TYBaseAdAdapter;DLjava/lang/String;)V

    invoke-virtual {p3, v0}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    .line 1099
    :cond_3
    invoke-direct {p0, p1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/m/d;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1101
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method protected declared-synchronized a(Ljava/lang/String;Lcom/tkay/core/common/m/a;)V
    .locals 8

    monitor-enter p0

    .line 1806
    :try_start_0
    iget-object v0, p2, Lcom/tkay/core/common/m/a;->d:Lcom/tkay/core/common/f/d;

    .line 1807
    iget-object v1, p2, Lcom/tkay/core/common/m/a;->e:Lcom/tkay/core/common/f/aj;

    .line 1808
    iget-object v2, p2, Lcom/tkay/core/common/m/a;->b:Lcom/tkay/core/api/AdError;

    .line 1809
    iget-wide v3, p2, Lcom/tkay/core/common/m/a;->c:J

    .line 1812
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v5

    .line 1813
    iget-object v6, p0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    invoke-interface {v6, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/m/d;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_0

    .line 1818
    monitor-exit p0

    return-void

    .line 1821
    :cond_0
    :try_start_1
    new-instance v6, Ljava/lang/StringBuilder;

    const-string v7, "[Enter] onAdError(): "

    invoke-direct {v6, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->aa()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1824
    invoke-direct {p0, v1}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/f/aj;)V

    .line 1827
    iget-object v1, p0, Lcom/tkay/core/common/h;->y:Lcom/tkay/core/api/AdError;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v6

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->T()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v5, v6, v7, v2}, Lcom/tkay/core/api/AdError;->putNetworkErrorMsg(Ljava/lang/String;ILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    .line 1829
    iget p2, p2, Lcom/tkay/core/common/m/a;->a:I

    invoke-static {v0, p2, v2, v3, v4}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;J)V

    const-wide/16 v5, 0x0

    cmp-long p2, v3, v5

    if-lez p2, :cond_2

    .line 7993
    iget-object p2, p0, Lcom/tkay/core/common/h;->l:Lcom/tkay/core/common/b/b;

    if-eqz p2, :cond_1

    .line 7995
    iget-object p2, p0, Lcom/tkay/core/common/h;->l:Lcom/tkay/core/common/b/b;

    invoke-virtual {p2, v0, v2}, Lcom/tkay/core/common/b/b;->b(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    .line 1838
    :cond_1
    sget-object p2, Lcom/tkay/core/common/b/f$i;->b:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    invoke-virtual {v2}, Lcom/tkay/core/api/AdError;->printStackTrace()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, p2, v1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 1844
    :cond_2
    invoke-direct {p0, p1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/m/d;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1845
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 468
    iget-object v0, p0, Lcom/tkay/core/common/h;->C:Ljava/lang/Object;

    monitor-enter v0

    if-eqz p2, :cond_0

    .line 472
    :try_start_0
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/aj;

    const-string v2, "4001"

    const-string v3, ""

    .line 473
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->z()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v3, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v2

    .line 474
    iget-object v3, p0, Lcom/tkay/core/common/h;->y:Lcom/tkay/core/api/AdError;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v5

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v4, v5, v1, v2}, Lcom/tkay/core/api/AdError;->putNetworkErrorMsg(Ljava/lang/String;ILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    goto :goto_0

    :catchall_0
    move-exception p1

    goto/16 :goto_7

    :cond_0
    if-eqz p3, :cond_1

    .line 481
    iget-object p2, p0, Lcom/tkay/core/common/h;->H:Ljava/util/List;

    invoke-interface {p2, p3}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    :cond_1
    if-eqz p1, :cond_c

    .line 490
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p2

    if-nez p2, :cond_2

    goto/16 :goto_6

    .line 494
    :cond_2
    iget-object p2, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {p2}, Lcom/tkay/core/common/m/h;->f()V

    const/4 p2, 0x0

    .line 497
    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/core/common/f/aj;

    .line 499
    iget-object v1, p0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-static {p3, v1}, Lcom/tkay/core/common/m/f;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/m/h;)Z

    move-result v1

    .line 501
    iget-object v2, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v2, p3}, Lcom/tkay/core/common/m/f;->c(Lcom/tkay/core/common/f/aj;)Z

    move-result v2

    const/4 v3, 0x0

    if-nez v1, :cond_3

    if-eqz v2, :cond_9

    .line 504
    :cond_3
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "isAdvanceRequest: "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v5, ", cutInLine: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 506
    iget-boolean v4, p0, Lcom/tkay/core/common/h;->o:Z

    if-nez v4, :cond_4

    const-string v4, "1"

    :goto_1
    move-object v10, v4

    goto :goto_2

    .line 509
    :cond_4
    iget-boolean v4, p0, Lcom/tkay/core/common/h;->n:Z

    if-eqz v4, :cond_5

    const-string v4, "2"

    goto :goto_1

    :cond_5
    const-string v4, "3"

    goto :goto_1

    :goto_2
    const-string v4, "1"

    if-eqz v1, :cond_6

    const-string v1, "1"

    :goto_3
    move-object v11, v1

    goto :goto_4

    :cond_6
    if-eqz v2, :cond_7

    const-string v1, "2"

    goto :goto_3

    :cond_7
    move-object v11, v4

    .line 519
    :goto_4
    iget-object v5, p0, Lcom/tkay/core/common/h;->i:Lcom/tkay/core/common/f/d;

    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v6

    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v7

    invoke-static {p3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v8

    invoke-static/range {v5 .. v11}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILjava/lang/String;DLjava/lang/String;Ljava/lang/String;)V

    .line 523
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->Z()Z

    move-result v1

    if-eqz v1, :cond_8

    .line 524
    iput-object p3, p0, Lcom/tkay/core/common/h;->N:Lcom/tkay/core/common/f/aj;

    .line 528
    :cond_8
    iget-object v1, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v1, p3}, Lcom/tkay/core/common/m/f;->a(Lcom/tkay/core/common/f/aj;)V

    .line 530
    invoke-interface {p1, p2}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    .line 533
    iget-object p2, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {p2, p3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 536
    iget-object p2, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    invoke-static {p2, v1, v2, v3, p3}, Lcom/tkay/core/common/m/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/aj;)V

    const/4 p2, 0x3

    .line 541
    invoke-direct {p0, p3, p2}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/f/aj;I)V

    .line 545
    :cond_9
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_5
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_b

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/aj;

    .line 548
    iget-object p3, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {p3, p2}, Lcom/tkay/core/common/m/f;->a(Lcom/tkay/core/common/f/aj;)V

    .line 551
    iget-object p3, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    invoke-static {p3, v1, v2, v3, p2}, Lcom/tkay/core/common/m/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/aj;)V

    .line 2563
    iget-object p3, p0, Lcom/tkay/core/common/h;->D:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez p3, :cond_a

    .line 2564
    new-instance p3, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p3}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object p3, p0, Lcom/tkay/core/common/h;->D:Ljava/util/concurrent/ConcurrentHashMap;

    .line 2567
    :cond_a
    iget-object p3, p0, Lcom/tkay/core/common/h;->D:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p3, v1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p3, 0x1

    .line 555
    invoke-direct {p0, p2, p3}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/f/aj;I)V

    goto :goto_5

    .line 557
    :cond_b
    monitor-exit v0

    return-void

    .line 491
    :cond_c
    :goto_6
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 557
    :goto_7
    monitor-exit v0

    throw p1
.end method

.method protected final b()V
    .locals 7

    .line 604
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/f;->c()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/h;->v:Ljava/util/List;

    const-wide/16 v1, 0x0

    if-eqz v0, :cond_1

    .line 605
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 606
    iget-object v0, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->p()J

    move-result-wide v3

    .line 608
    iget-object v0, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/core/common/h;->m:Z

    if-eqz v0, :cond_0

    move-wide v3, v1

    .line 2670
    :cond_0
    new-instance v0, Lcom/tkay/core/common/h$3;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/h$3;-><init>(Lcom/tkay/core/common/h;)V

    .line 612
    iput-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    goto :goto_0

    :cond_1
    const-wide/16 v3, 0x3e8

    .line 616
    :goto_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    iput-wide v5, p0, Lcom/tkay/core/common/h;->z:J

    .line 618
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ": start waterfall."

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3642
    iget-object v0, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->n()J

    move-result-wide v5

    cmp-long v0, v5, v1

    if-lez v0, :cond_2

    .line 3643
    new-instance v0, Lcom/tkay/core/common/h$2;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/h$2;-><init>(Lcom/tkay/core/common/h;)V

    iput-object v0, p0, Lcom/tkay/core/common/h;->I:Ljava/lang/Runnable;

    .line 3655
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ": start filled count down."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3656
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->I:Ljava/lang/Runnable;

    iget-object v2, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v2}, Lcom/tkay/core/c/d;->n()J

    move-result-wide v5

    invoke-virtual {v0, v1, v5, v6}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    goto :goto_1

    .line 3658
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ": no filled count down."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 623
    :goto_1
    iget-object v0, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->S()J

    move-result-wide v0

    .line 3949
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    iget-object v5, p0, Lcom/tkay/core/common/h;->M:Ljava/lang/Runnable;

    invoke-virtual {v2, v5, v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    .line 627
    iget-object v0, p0, Lcom/tkay/core/common/h;->v:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/tkay/core/common/h;->m:Z

    if-eqz v0, :cond_3

    .line 628
    invoke-direct {p0}, Lcom/tkay/core/common/h;->v()Z

    .line 632
    :cond_3
    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/f;->i()Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x1

    .line 635
    invoke-direct {p0, v0, v1}, Lcom/tkay/core/common/h;->a(Ljava/util/List;I)V

    .line 4663
    iget-object v0, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    if-eqz v0, :cond_4

    .line 4665
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->J:Ljava/lang/Runnable;

    invoke-virtual {v0, v1, v3, v4}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    :cond_4
    return-void
.end method

.method public final b(I)V
    .locals 17

    move-object/from16 v0, p0

    move/from16 v1, p1

    .line 1408
    iget-object v2, v0, Lcom/tkay/core/common/h;->I:Ljava/lang/Runnable;

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    .line 1409
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, v0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ":remove filled countdown."

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1410
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    iget-object v4, v0, Lcom/tkay/core/common/h;->I:Ljava/lang/Runnable;

    invoke-virtual {v2, v4}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    .line 1411
    iput-object v3, v0, Lcom/tkay/core/common/h;->I:Ljava/lang/Runnable;

    :cond_0
    const/4 v2, 0x5

    const/16 v4, 0xa

    const/4 v5, 0x1

    if-eq v1, v2, :cond_1

    const/16 v2, 0x9

    if-eq v1, v2, :cond_1

    if-eq v1, v4, :cond_1

    const/4 v2, 0x0

    goto :goto_0

    :cond_1
    move v2, v5

    .line 1435
    :goto_0
    iput-boolean v5, v0, Lcom/tkay/core/common/h;->o:Z

    .line 1436
    iput-boolean v5, v0, Lcom/tkay/core/common/h;->n:Z

    .line 1438
    iget-object v6, v0, Lcom/tkay/core/common/h;->M:Ljava/lang/Runnable;

    if-eqz v6, :cond_2

    .line 1440
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    iget-object v7, v0, Lcom/tkay/core/common/h;->M:Ljava/lang/Runnable;

    invoke-virtual {v6, v7}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    .line 1443
    :cond_2
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v6

    iget-wide v8, v0, Lcom/tkay/core/common/h;->z:J

    sub-long/2addr v6, v8

    .line 1444
    iget-object v8, v0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    iget-object v9, v0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v10, v0, Lcom/tkay/core/common/h;->d:Ljava/lang/String;

    iget-object v11, v0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    iget-object v12, v0, Lcom/tkay/core/common/h;->x:Ljava/lang/String;

    invoke-virtual {v11}, Lcom/tkay/core/c/d;->m()I

    move-result v13

    iget v14, v0, Lcom/tkay/core/common/h;->k:I

    iget v15, v0, Lcom/tkay/core/common/h;->c:I

    iget-object v3, v0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    if-eqz v3, :cond_3

    iget-object v3, v3, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    move-object/from16 v16, v3

    goto :goto_1

    :cond_3
    const/16 v16, 0x0

    :goto_1
    invoke-static/range {v8 .. v16}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v3

    .line 1445
    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/d;->a(Z)V

    .line 1446
    invoke-virtual {v3, v6, v7}, Lcom/tkay/core/common/f/d;->d(J)V

    if-eqz v2, :cond_4

    .line 1448
    invoke-virtual {v3, v1}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 1452
    :cond_4
    iget-object v2, v0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v2

    const/16 v5, 0xc

    invoke-virtual {v2, v5, v3}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 1454
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    iget-object v3, v0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, v0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v6}, Lcom/tkay/core/c/d;->Y()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v3, v5}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v2

    if-eqz v2, :cond_5

    if-eq v1, v4, :cond_5

    .line 1456
    iget-object v1, v0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->V()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/tkay/core/common/f;->a(Ljava/lang/String;)V

    .line 1460
    :cond_5
    iget-object v1, v0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iget-object v2, v0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-static {v1, v2}, Lcom/tkay/core/common/m/f;->a(Landroid/content/Context;Ljava/lang/String;)V

    .line 1463
    invoke-direct/range {p0 .. p0}, Lcom/tkay/core/common/h;->u()V

    return-void
.end method

.method public final c()Z
    .locals 1

    .line 1955
    iget-boolean v0, p0, Lcom/tkay/core/common/h;->o:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/core/common/h;->m:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/h;->t:Ljava/util/List;

    .line 1956
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/f;->d()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final d()V
    .locals 1

    const/4 v0, 0x1

    .line 2003
    iput-boolean v0, p0, Lcom/tkay/core/common/h;->r:Z

    .line 2004
    invoke-direct {p0}, Lcom/tkay/core/common/h;->r()V

    return-void
.end method

.method public final e()V
    .locals 2

    .line 2011
    iget-object v0, p0, Lcom/tkay/core/common/h;->C:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x1

    .line 2013
    :try_start_0
    iput-boolean v1, p0, Lcom/tkay/core/common/h;->m:Z

    .line 2014
    iput-boolean v1, p0, Lcom/tkay/core/common/h;->r:Z

    .line 2017
    invoke-direct {p0}, Lcom/tkay/core/common/h;->r()V

    .line 2020
    invoke-direct {p0}, Lcom/tkay/core/common/h;->l()V

    .line 2021
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public final f()V
    .locals 4

    const/4 v0, 0x1

    .line 2029
    iput-boolean v0, p0, Lcom/tkay/core/common/h;->P:Z

    .line 2030
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v3}, Lcom/tkay/core/c/d;->Y()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2032
    iget-object v1, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f;->b(Ljava/lang/String;)V

    return-void

    .line 2034
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Id:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "--format:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->Y()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v1

    const-string v2, "AdManage is null--notifycancel"

    invoke-static {v2, v0, v1}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public g()V
    .locals 2

    .line 2040
    iget-object v0, p0, Lcom/tkay/core/common/h;->M:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 2042
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->M:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public h()V
    .locals 4

    .line 2050
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "placementId:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ";result_callback:success;loadType:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/core/common/h;->k:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ";"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Mediation"

    invoke-static {v1, v0}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2053
    iget-object v0, p0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/w;->a(Landroid/content/Context;)Lcom/tkay/core/common/w;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/w;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 2055
    iget-object v0, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/core/common/j;->f:Lcom/tkay/core/common/b/a;

    if-eqz v0, :cond_0

    .line 2056
    iget-object v0, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    iget-object v0, v0, Lcom/tkay/core/common/j;->f:Lcom/tkay/core/common/b/a;

    invoke-interface {v0}, Lcom/tkay/core/common/b/a;->onAdLoaded()V

    .line 2057
    iget-object v0, p0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/core/common/j;->f:Lcom/tkay/core/common/b/a;

    :cond_0
    return-void
.end method

.method public final i()V
    .locals 8

    .line 2090
    iget-object v0, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    monitor-enter v0

    .line 2091
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 2092
    iget-object v1, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/m/e;

    .line 2093
    invoke-virtual {v1}, Lcom/tkay/core/common/m/e;->a()Lcom/tkay/core/common/f/aj;

    move-result-object v1

    .line 2096
    iget-boolean v2, p0, Lcom/tkay/core/common/h;->o:Z

    if-eqz v2, :cond_0

    iget v2, p0, Lcom/tkay/core/common/h;->B:I

    iget-object v3, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    .line 2097
    invoke-virtual {v3}, Lcom/tkay/core/c/d;->an()I

    move-result v3

    if-lt v2, v3, :cond_0

    .line 2098
    invoke-static {v1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v2

    iget-wide v4, p0, Lcom/tkay/core/common/h;->E:D

    cmpl-double v2, v2, v4

    if-lez v2, :cond_1

    .line 2099
    :cond_0
    iget-object v2, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const/4 v2, 0x4

    .line 2100
    invoke-direct {p0, v1, v2}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/f/aj;I)V

    .line 2104
    :cond_1
    iget-object v1, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_7

    .line 2105
    iget-object v1, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_2
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_7

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/m/e;

    .line 2106
    invoke-virtual {v2}, Lcom/tkay/core/common/m/e;->a()Lcom/tkay/core/common/f/aj;

    move-result-object v3

    .line 2107
    iget-boolean v4, p0, Lcom/tkay/core/common/h;->o:Z

    if-eqz v4, :cond_3

    iget v4, p0, Lcom/tkay/core/common/h;->B:I

    iget-object v5, p0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    .line 2108
    invoke-virtual {v5}, Lcom/tkay/core/c/d;->an()I

    move-result v5

    if-lt v4, v5, :cond_3

    .line 2109
    invoke-static {v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v4

    iget-wide v6, p0, Lcom/tkay/core/common/h;->E:D

    cmpl-double v4, v4, v6

    if-lez v4, :cond_2

    .line 2111
    :cond_3
    invoke-virtual {v2}, Lcom/tkay/core/common/m/e;->b()I

    move-result v2

    const/4 v4, 0x1

    if-eq v2, v4, :cond_6

    const/4 v4, 0x2

    if-eq v2, v4, :cond_5

    const/4 v4, 0x3

    if-eq v2, v4, :cond_4

    goto :goto_0

    .line 2124
    :cond_4
    iget-object v2, p0, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 2125
    invoke-direct {p0, v3, v4}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/f/aj;I)V

    goto :goto_0

    .line 2119
    :cond_5
    invoke-direct {p0, v3, v4}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/f/aj;I)V

    .line 2120
    invoke-direct {p0, v2}, Lcom/tkay/core/common/h;->e(I)V

    goto :goto_0

    .line 2115
    :cond_6
    invoke-direct {p0, v3, v4}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/f/aj;I)V

    .line 2116
    invoke-direct {p0, v2}, Lcom/tkay/core/common/h;->e(I)V

    goto :goto_0

    .line 2133
    :cond_7
    iget-object v1, p0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 2134
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2135
    invoke-direct {p0}, Lcom/tkay/core/common/h;->l()V

    return-void

    :catchall_0
    move-exception v1

    .line 2134
    monitor-exit v0

    throw v1
.end method
