.class public final Lcom/tkay/expressad/videocommon/b/n;
.super Ljava/lang/Object;


# static fields
.field private static final c:Ljava/lang/String; = "UnitCacheCtroller"


# instance fields
.field a:Lcom/tkay/expressad/d/c;

.field b:Lcom/tkay/expressad/d/c;

.field private d:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private e:Z

.field private f:Lcom/tkay/expressad/videocommon/d/b;

.field private g:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/d/b;",
            ">;"
        }
    .end annotation
.end field

.field private h:Lcom/tkay/expressad/videocommon/b/d;

.field private i:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;>;"
        }
    .end annotation
.end field

.field private j:Landroid/content/Context;

.field private k:Ljava/util/concurrent/ExecutorService;

.field private l:J

.field private m:Ljava/lang/String;

.field private n:Lcom/tkay/expressad/videocommon/e/d;

.field private o:I

.field private p:I

.field private q:Lcom/tkay/expressad/d/c;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/ExecutorService;Ljava/lang/String;I)V
    .locals 3

    .line 110
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    const/4 v0, 0x1

    .line 45
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/n;->e:Z

    .line 49
    new-instance v1, Lcom/tkay/expressad/videocommon/b/n$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/videocommon/b/n$1;-><init>(Lcom/tkay/expressad/videocommon/b/n;)V

    iput-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->h:Lcom/tkay/expressad/videocommon/b/d;

    .line 66
    new-instance v1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    const-wide/16 v1, 0xe10

    .line 72
    iput-wide v1, p0, Lcom/tkay/expressad/videocommon/b/n;->l:J

    const/4 v1, 0x2

    .line 81
    iput v1, p0, Lcom/tkay/expressad/videocommon/b/n;->o:I

    .line 92
    iput v0, p0, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/4 v0, 0x0

    .line 93
    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    .line 94
    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    .line 111
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->j:Landroid/content/Context;

    .line 113
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 114
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 116
    :cond_0
    iput-object p2, p0, Lcom/tkay/expressad/videocommon/b/n;->k:Ljava/util/concurrent/ExecutorService;

    .line 117
    iput-object p3, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    .line 118
    iput p4, p0, Lcom/tkay/expressad/videocommon/b/n;->p:I

    .line 119
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/videocommon/b/n;->b(Ljava/util/List;)V

    return-void
.end method

.method public constructor <init>(Ljava/util/List;Ljava/util/concurrent/ExecutorService;Ljava/lang/String;I)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Ljava/util/concurrent/ExecutorService;",
            "Ljava/lang/String;",
            "I)V"
        }
    .end annotation

    .line 98
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    const/4 v0, 0x1

    .line 45
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/n;->e:Z

    .line 49
    new-instance v1, Lcom/tkay/expressad/videocommon/b/n$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/videocommon/b/n$1;-><init>(Lcom/tkay/expressad/videocommon/b/n;)V

    iput-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->h:Lcom/tkay/expressad/videocommon/b/d;

    .line 66
    new-instance v1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    const-wide/16 v1, 0xe10

    .line 72
    iput-wide v1, p0, Lcom/tkay/expressad/videocommon/b/n;->l:J

    const/4 v1, 0x2

    .line 81
    iput v1, p0, Lcom/tkay/expressad/videocommon/b/n;->o:I

    .line 92
    iput v0, p0, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/4 v0, 0x0

    .line 93
    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    .line 94
    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    .line 99
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->j:Landroid/content/Context;

    .line 101
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 102
    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 104
    :cond_0
    iput-object p2, p0, Lcom/tkay/expressad/videocommon/b/n;->k:Ljava/util/concurrent/ExecutorService;

    .line 105
    iput-object p3, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    .line 106
    iput p4, p0, Lcom/tkay/expressad/videocommon/b/n;->p:I

    .line 107
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/videocommon/b/n;->b(Ljava/util/List;)V

    return-void
.end method

.method private static declared-synchronized a(Lcom/tkay/expressad/videocommon/b/a;)V
    .locals 4

    const-class v0, Lcom/tkay/expressad/videocommon/b/n;

    monitor-enter v0

    const/4 v1, 0x0

    if-eqz p0, :cond_0

    .line 794
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    goto :goto_1

    :cond_0
    :goto_0
    if-nez v1, :cond_1

    .line 797
    monitor-exit v0

    return-void

    .line 799
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v2

    const/16 v3, 0x5e

    if-eq v2, v3, :cond_2

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v1

    const/16 v2, 0x11f

    if-ne v1, v2, :cond_3

    .line 800
    :cond_2
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/b/n;->c(Lcom/tkay/expressad/videocommon/b/a;)Ljava/lang/String;

    move-result-object v1

    .line 801
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/videocommon/b/a;->a(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 803
    :cond_3
    monitor-exit v0

    return-void

    :goto_1
    monitor-exit v0

    throw p0
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)Z
    .locals 3

    .line 954
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 956
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 957
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/videocommon/b/j;->d(Ljava/lang/String;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x1

    return p1
.end method

.method private static a(Lcom/tkay/expressad/videocommon/b/a;I)Z
    .locals 8

    .line 758
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/a;->p()J

    move-result-wide v0

    .line 759
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/a;->f()J

    move-result-wide v2

    .line 760
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/a;->a()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const/4 v5, 0x1

    if-eqz v4, :cond_0

    return v5

    :cond_0
    if-nez p1, :cond_1

    .line 766
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    if-eqz p1, :cond_2

    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 767
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;)V

    return v5

    :cond_1
    const-wide/16 v6, 0x0

    cmp-long v4, v2, v6

    if-lez v4, :cond_2

    const-wide/16 v6, 0x64

    mul-long/2addr v0, v6

    int-to-long v6, p1

    mul-long/2addr v2, v6

    cmp-long p1, v0, v2

    if-ltz p1, :cond_2

    .line 772
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;)V

    return v5

    :cond_2
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/videocommon/b/n;)Z
    .locals 1

    const/4 v0, 0x1

    .line 38
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/n;->e:Z

    return v0
.end method

.method private static a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 3

    .line 885
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 886
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    const/4 v2, 0x2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    return v1

    .line 892
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 893
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/t;->f(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    return v1

    .line 898
    :cond_1
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    return v1

    .line 902
    :cond_2
    invoke-static {p0, p1}, Lcom/tkay/expressad/videocommon/b/n;->b(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_3

    return v1

    :catchall_0
    move-exception p0

    .line 908
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_3
    const/4 p0, 0x0

    return p0
.end method

.method private static a(Ljava/util/concurrent/CopyOnWriteArrayList;)Z
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;>;)Z"
        }
    .end annotation

    .line 1037
    :try_start_0
    invoke-virtual {p0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 1041
    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 1042
    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1043
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 1044
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/b/a;

    .line 1045
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    return v2

    :catchall_0
    move-exception p0

    .line 1052
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_2

    .line 1053
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    const/4 p0, 0x0

    return p0
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;)I
    .locals 2

    const/4 v0, -0x1

    if-eqz p1, :cond_1

    .line 548
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result v1

    if-eq v1, v0, :cond_0

    .line 549
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result v0

    goto :goto_0

    .line 552
    :cond_0
    invoke-direct {p0, p1}, Lcom/tkay/expressad/videocommon/b/n;->d(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v0

    :cond_1
    :goto_0
    return v0
.end method

.method static synthetic b(Lcom/tkay/expressad/videocommon/b/n;)Lcom/tkay/expressad/videocommon/d/b;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/expressad/videocommon/b/n;->f:Lcom/tkay/expressad/videocommon/d/b;

    return-object p0
.end method

.method private static declared-synchronized b(Lcom/tkay/expressad/videocommon/b/a;)Ljava/lang/String;
    .locals 1

    const-class v0, Lcom/tkay/expressad/videocommon/b/n;

    monitor-enter v0

    .line 1060
    :try_start_0
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/b/n;->c(Lcom/tkay/expressad/videocommon/b/a;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private b(Ljava/util/List;)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_14

    .line 148
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_7

    .line 152
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/n;->f()V

    .line 153
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/n;->e()V

    .line 155
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/16 v1, 0x5e

    const/16 v2, 0x11f

    const/4 v3, 0x1

    if-eq v0, v3, :cond_9

    if-eq v0, v2, :cond_5

    const/16 v4, 0x12a

    if-eq v0, v4, :cond_3

    if-eq v0, v1, :cond_5

    const/16 v4, 0x5f

    if-eq v0, v4, :cond_1

    goto/16 :goto_0

    .line 189
    :cond_1
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_b

    .line 190
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    .line 191
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v4, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v0, v4}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    if-nez v0, :cond_2

    .line 193
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/d/c;->d(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    :cond_2
    if-eqz v0, :cond_b

    .line 196
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->i()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/tkay/expressad/videocommon/b/n;->l:J

    .line 197
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->m()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/videocommon/b/n;->o:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_0

    :catch_0
    return-void

    .line 175
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v4, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v0, v4}, Lcom/tkay/expressad/d/b;->d(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    if-nez v0, :cond_4

    .line 177
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v4, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v0, v4}, Lcom/tkay/expressad/d/b;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    .line 179
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    if-eqz v0, :cond_b

    .line 180
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->i()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/tkay/expressad/videocommon/b/n;->l:J

    .line 181
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->m()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/videocommon/b/n;->o:I

    goto/16 :goto_0

    .line 209
    :cond_5
    :try_start_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object v0

    if-nez v0, :cond_6

    .line 211
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->c()Lcom/tkay/expressad/videocommon/e/a;

    :cond_6
    if-eqz v0, :cond_7

    .line 214
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/a;->e()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/tkay/expressad/videocommon/b/n;->l:J

    .line 216
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_8

    .line 217
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-virtual {v0, v4, v5}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->n:Lcom/tkay/expressad/videocommon/e/d;

    .line 219
    :cond_8
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->n:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v0, :cond_b

    .line 220
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->n:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->F()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/videocommon/b/n;->o:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    return-void

    .line 159
    :cond_9
    :try_start_2
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_b

    .line 160
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v4, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v0, v4}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    if-nez v0, :cond_a

    .line 162
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/d/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    .line 164
    :cond_a
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    if-eqz v0, :cond_b

    .line 165
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->i()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/tkay/expressad/videocommon/b/n;->l:J

    .line 166
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->m()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/videocommon/b/n;->o:I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    :cond_b
    :goto_0
    const/4 v0, 0x0

    move v4, v0

    .line 230
    :goto_1
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v5

    if-ge v4, v5, :cond_13

    .line 231
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v5, :cond_12

    .line 235
    iget v6, p0, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-eq v6, v1, :cond_d

    if-ne v6, v2, :cond_c

    goto :goto_2

    .line 238
    :cond_c
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->B()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    goto :goto_3

    .line 236
    :cond_d
    :goto_2
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 240
    :goto_3
    invoke-static {v5}, Lcom/tkay/expressad/videocommon/b/n;->c(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v7

    if-nez v7, :cond_e

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_12

    .line 243
    :cond_e
    iget-object v7, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v7, :cond_12

    .line 244
    monitor-enter v7

    move v8, v0

    .line 248
    :goto_4
    :try_start_3
    iget-object v9, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v9}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v9

    if-ge v8, v9, :cond_10

    .line 249
    iget-object v9, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v9, v8}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/util/Map;

    if-eqz v9, :cond_f

    .line 251
    invoke-interface {v9, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_f

    .line 254
    invoke-interface {v9, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/tkay/expressad/videocommon/b/a;

    .line 255
    invoke-virtual {v10, v5}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 256
    iget v11, p0, Lcom/tkay/expressad/videocommon/b/n;->o:I

    invoke-virtual {v10, v11}, Lcom/tkay/expressad/videocommon/b/a;->a(I)V

    .line 257
    invoke-virtual {v10, v0}, Lcom/tkay/expressad/videocommon/b/a;->a(Z)V

    .line 258
    invoke-interface {v9, v6}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 259
    invoke-interface {v9, v6, v10}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 260
    iget-object v10, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v10, v8, v9}, Ljava/util/concurrent/CopyOnWriteArrayList;->set(ILjava/lang/Object;)Ljava/lang/Object;

    move v8, v3

    goto :goto_5

    :cond_f
    add-int/lit8 v8, v8, 0x1

    goto :goto_4

    :cond_10
    move v8, v0

    :goto_5
    if-nez v8, :cond_11

    .line 267
    new-instance v8, Lcom/tkay/expressad/videocommon/b/a;

    iget-object v9, p0, Lcom/tkay/expressad/videocommon/b/n;->j:Landroid/content/Context;

    iget-object v10, p0, Lcom/tkay/expressad/videocommon/b/n;->k:Ljava/util/concurrent/ExecutorService;

    iget-object v11, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-direct {v8, v9, v5, v10, v11}, Lcom/tkay/expressad/videocommon/b/a;-><init>(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/ExecutorService;Ljava/lang/String;)V

    .line 268
    iget v5, p0, Lcom/tkay/expressad/videocommon/b/n;->o:I

    invoke-virtual {v8, v5}, Lcom/tkay/expressad/videocommon/b/a;->a(I)V

    .line 269
    iget v5, p0, Lcom/tkay/expressad/videocommon/b/n;->p:I

    invoke-virtual {v8, v5}, Lcom/tkay/expressad/videocommon/b/a;->e(I)V

    .line 270
    new-instance v5, Ljava/util/HashMap;

    invoke-direct {v5}, Ljava/util/HashMap;-><init>()V

    .line 271
    invoke-interface {v5, v6, v8}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 272
    iget-object v6, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v6, v5}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 277
    :catchall_0
    :cond_11
    :try_start_4
    monitor-exit v7
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    goto :goto_6

    :catchall_1
    move-exception p1

    monitor-exit v7

    throw p1

    :cond_12
    :goto_6
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_1

    .line 281
    :cond_13
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    if-eqz p1, :cond_14

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_14

    .line 282
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    :catch_2
    :cond_14
    :goto_7
    return-void
.end method

.method private static b(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)Z
    .locals 3

    .line 968
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    .line 972
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 973
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    return v1

    .line 981
    :cond_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->av()I

    move-result p0

    if-nez p0, :cond_2

    .line 982
    new-instance p0, Ljava/lang/StringBuilder;

    const-string v0, "check template download state:"

    invoke-direct {p0, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 984
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    if-nez p0, :cond_2

    const/4 p0, 0x0

    return p0

    :cond_2
    return v1
.end method

.method private static b(Lcom/tkay/expressad/videocommon/b/a;I)Z
    .locals 0

    .line 874
    invoke-static {p0, p1}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;I)Z

    move-result p0

    return p0
.end method

.method private static b(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 2

    .line 922
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_5

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 927
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->av()I

    move-result v0

    if-ne v0, v1, :cond_1

    .line 928
    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/n;->c(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v0

    if-nez v0, :cond_1

    return v1

    .line 933
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 934
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object p1

    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    return v1

    .line 941
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_3

    return v1

    .line 4030
    :cond_3
    sget-object p1, Lcom/tkay/expressad/videocommon/b/h$a;->a:Lcom/tkay/expressad/videocommon/b/h;

    .line 945
    invoke-virtual {p1, p0}, Lcom/tkay/expressad/videocommon/b/h;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_4

    return v1

    :cond_4
    const/4 p0, 0x0

    return p0

    :cond_5
    :goto_0
    return v1
.end method

.method private static declared-synchronized c(Lcom/tkay/expressad/videocommon/b/a;)Ljava/lang/String;
    .locals 6

    const-class v0, Lcom/tkay/expressad/videocommon/b/n;

    monitor-enter v0

    if-nez p0, :cond_0

    :try_start_0
    const-string p0, ""
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1065
    monitor-exit v0

    return-object p0

    .line 1067
    :cond_0
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1069
    :try_start_2
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v2

    const/4 v3, 0x5

    if-ne v2, v3, :cond_1

    .line 1070
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/a;->e()Ljava/lang/String;

    move-result-object p0

    .line 1071
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    new-instance v2, Ljava/io/File;

    invoke-direct {v2, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->length()J

    move-result-wide v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-lez v2, :cond_1

    move-object v1, p0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 1076
    :try_start_3
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 1078
    :cond_1
    :goto_0
    monitor-exit v0

    return-object v1

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method static synthetic c(Lcom/tkay/expressad/videocommon/b/n;)Ljava/util/concurrent/ConcurrentHashMap;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/expressad/videocommon/b/n;->g:Ljava/util/concurrent/ConcurrentHashMap;

    return-object p0
.end method

.method private static c(Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 1

    if-eqz p0, :cond_0

    .line 1374
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :catchall_0
    move-exception p0

    .line 1378
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_0

    .line 1379
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private d(Lcom/tkay/expressad/foundation/d/c;)I
    .locals 3

    .line 1419
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    const/16 v1, 0x12a

    if-ne v0, v1, :cond_1

    .line 1420
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    if-nez p1, :cond_0

    .line 1421
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    .line 1423
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/d/c;->f()I

    move-result p1

    return p1

    .line 1424
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result p1

    const/16 v0, 0x2a

    if-ne p1, v0, :cond_2

    .line 1425
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/n;->h()I

    move-result p1

    return p1

    .line 1427
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->n:Lcom/tkay/expressad/videocommon/e/d;

    if-nez p1, :cond_3

    .line 1428
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object p1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->n:Lcom/tkay/expressad/videocommon/e/d;

    .line 1430
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->n:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->v()I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    .line 1433
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const/16 p1, 0x64

    return p1
.end method

.method private e()V
    .locals 13

    .line 291
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_4

    .line 293
    :try_start_0
    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 294
    :try_start_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const/4 v3, 0x0

    .line 296
    :goto_0
    iget-object v4, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v4

    if-ge v3, v4, :cond_3

    .line 298
    iget-object v4, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v4, v3}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map;

    .line 300
    invoke-interface {v4}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v5

    invoke-interface {v5}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v5

    .line 301
    :cond_0
    :goto_1
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_2

    .line 303
    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/Map$Entry;

    .line 304
    invoke-interface {v6}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/tkay/expressad/videocommon/b/a;

    if-eqz v6, :cond_0

    .line 308
    invoke-virtual {v6}, Lcom/tkay/expressad/videocommon/b/a;->c()J

    move-result-wide v7

    sub-long v7, v1, v7

    .line 309
    iget-wide v9, p0, Lcom/tkay/expressad/videocommon/b/n;->l:J

    const-wide/16 v11, 0x3e8

    mul-long/2addr v9, v11

    cmp-long v7, v7, v9

    const/4 v8, 0x1

    if-lez v7, :cond_1

    .line 310
    invoke-virtual {v6}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v7

    if-ne v7, v8, :cond_1

    .line 311
    invoke-virtual {v6}, Lcom/tkay/expressad/videocommon/b/a;->j()V

    .line 312
    iget v7, p0, Lcom/tkay/expressad/videocommon/b/n;->o:I

    invoke-virtual {v6, v7}, Lcom/tkay/expressad/videocommon/b/a;->a(I)V

    .line 314
    iget-object v7, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v7, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, -0x1

    .line 318
    :cond_1
    invoke-virtual {v6}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v7

    if-eq v7, v8, :cond_0

    invoke-virtual {v6}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v7

    const/4 v8, 0x5

    if-eq v7, v8, :cond_0

    invoke-virtual {v6}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v6

    if-eqz v6, :cond_0

    .line 320
    iget-object v6, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v6, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, -0x1

    goto :goto_1

    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 325
    :cond_3
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    :try_start_2
    monitor-exit v0

    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception v0

    .line 327
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_4
    return-void
.end method

.method private f()V
    .locals 6

    .line 335
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_3

    .line 337
    :try_start_0
    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v1, 0x0

    .line 338
    :goto_0
    :try_start_1
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 339
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    .line 340
    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    .line 341
    :cond_0
    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 342
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    .line 343
    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/videocommon/b/a;

    if-eqz v4, :cond_0

    .line 344
    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v5

    if-eqz v5, :cond_0

    .line 347
    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/b/a;->b()Z

    move-result v5

    if-eqz v5, :cond_0

    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/b/a;->d()Z

    move-result v5

    if-eqz v5, :cond_0

    .line 348
    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/b/a;->o()V

    .line 349
    iget-object v4, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v4, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, -0x1

    goto :goto_1

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 355
    :cond_2
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    :try_start_2
    monitor-exit v0

    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    :cond_3
    return-void
.end method

.method private static g()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method private h()I
    .locals 2

    const/16 v0, 0x64

    .line 1388
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    if-eqz v1, :cond_0

    .line 1389
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/d/c;->f()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return v0
.end method


# virtual methods
.method public final a(IZ)Lcom/tkay/expressad/videocommon/b/a;
    .locals 21

    move-object/from16 v1, p0

    move/from16 v0, p2

    .line 560
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "isReady unitID "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, v1, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " ad_type "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 561
    iget-object v2, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v2, :cond_1b

    .line 562
    monitor-enter v2

    .line 586
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    const/4 v6, 0x0

    .line 587
    :goto_0
    iget-object v7, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v7}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v7

    if-ge v6, v7, :cond_1a

    .line 588
    iget-object v7, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v7, v6}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/Map;

    .line 589
    invoke-interface {v7}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v8

    invoke-interface {v8}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v8

    .line 590
    :cond_0
    :goto_1
    invoke-interface {v8}, Ljava/util/Iterator;->hasNext()Z

    move-result v9

    if-eqz v9, :cond_19

    .line 591
    invoke-interface {v8}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/util/Map$Entry;

    .line 592
    invoke-interface {v9}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/tkay/expressad/videocommon/b/a;

    if-eqz v9, :cond_18

    .line 593
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v10

    if-nez v10, :cond_1

    goto/16 :goto_5

    .line 598
    :cond_1
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v10

    if-eqz v0, :cond_2

    .line 611
    invoke-virtual {v10}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v11

    if-eqz v11, :cond_3

    :cond_2
    if-nez v0, :cond_4

    invoke-virtual {v10}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v11

    if-eqz v11, :cond_4

    .line 612
    :cond_3
    new-instance v9, Ljava/lang/StringBuilder;

    const-string v11, "UnitCache isReady ==== isBidCampaign = "

    invoke-direct {v9, v11}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v9, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v11, " campaign.isBidCampaign() = "

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    goto/16 :goto_5

    .line 615
    :cond_4
    invoke-virtual {v10}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v11

    .line 616
    invoke-virtual {v10}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v12

    const-string v13, ""

    if-eqz v10, :cond_5

    .line 618
    invoke-virtual {v10}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v14

    if-eqz v14, :cond_5

    .line 619
    invoke-virtual {v10}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v13

    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v13

    .line 621
    :cond_5
    invoke-virtual {v10}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    .line 623
    iget v14, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/16 v15, 0x11f

    const/16 v3, 0x5e

    if-eq v14, v3, :cond_6

    move/from16 v14, p1

    if-ne v14, v15, :cond_a

    goto :goto_2

    :cond_6
    move/from16 v14, p1

    .line 624
    :goto_2
    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_7

    const-string v15, "cmpt=1"

    invoke-virtual {v13, v15}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v15

    if-nez v15, :cond_7

    invoke-static {v10, v13}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)Z

    move-result v13

    if-eqz v13, :cond_0

    .line 630
    :cond_7
    invoke-static {v11, v10}, Lcom/tkay/expressad/videocommon/b/n;->b(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v13

    if-eqz v13, :cond_a

    .line 631
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->b()Z

    move-result v13

    if-eqz v13, :cond_8

    .line 632
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->o()V

    goto/16 :goto_1

    .line 637
    :cond_8
    invoke-static {v12}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v12
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v12, :cond_9

    .line 640
    :try_start_1
    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object v9

    .line 644
    :cond_9
    :try_start_2
    invoke-direct {v1, v10}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v12

    invoke-static {v9, v12}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;I)Z

    move-result v12
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v12, :cond_a

    .line 646
    :try_start_3
    monitor-exit v2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    return-object v9

    .line 653
    :cond_a
    :try_start_4
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->m()Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    .line 654
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v13

    .line 658
    iget v15, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/16 v3, 0x12a

    if-ne v15, v3, :cond_b

    .line 659
    invoke-direct {v1, v10}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v3

    invoke-static {v9, v3}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;I)Z

    move-result v3
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    if-eqz v3, :cond_b

    .line 660
    :try_start_5
    monitor-exit v2
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    return-object v9

    :cond_b
    const/4 v3, 0x5

    const/16 v15, 0x5f

    if-ne v13, v3, :cond_f

    .line 667
    :try_start_6
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->b()Z

    move-result v3

    if-eqz v3, :cond_c

    .line 668
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->o()V

    .line 669
    iget-object v3, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v3, v7}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    :goto_3
    add-int/lit8 v6, v6, -0x1

    goto/16 :goto_1

    :cond_c
    if-nez v12, :cond_d

    .line 675
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->l()V

    .line 677
    iget v3, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-ne v3, v15, :cond_0

    .line 678
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "isready ==========done but isEffectivePath:"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " is feed"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_0
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 679
    :try_start_7
    monitor-exit v2
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    return-object v9

    .line 684
    :cond_d
    :try_start_8
    invoke-static {v11, v10}, Lcom/tkay/expressad/videocommon/b/n;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v0
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_0
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    if-eqz v0, :cond_e

    .line 686
    :try_start_9
    monitor-exit v2
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    return-object v9

    .line 689
    :cond_e
    monitor-exit v2

    const/4 v2, 0x0

    return-object v2

    .line 691
    :cond_f
    :try_start_a
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->c()J

    move-result-wide v17

    .line 692
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v3

    const/4 v12, 0x1

    if-ne v3, v12, :cond_10

    sub-long v17, v4, v17

    move v3, v13

    .line 693
    iget-wide v12, v1, Lcom/tkay/expressad/videocommon/b/n;->l:J

    const-wide/16 v19, 0x3e8

    mul-long v12, v12, v19

    cmp-long v12, v17, v12

    if-lez v12, :cond_11

    .line 694
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->j()V

    .line 696
    iget-object v12, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v12, v7}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v6, v6, -0x1

    .line 698
    iget v12, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/4 v13, 0x1

    if-eq v12, v13, :cond_0

    iget v12, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/16 v13, 0x5e

    if-ne v12, v13, :cond_11

    goto/16 :goto_1

    :cond_10
    move v3, v13

    .line 706
    :cond_11
    iget v12, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-ne v12, v15, :cond_13

    .line 707
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->b()Z

    move-result v3

    if-eqz v3, :cond_12

    .line 708
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->o()V

    .line 709
    iget-object v3, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v3, v7}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    goto :goto_3

    .line 713
    :cond_12
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "==========isready ad_type is :"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v3, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_0
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    .line 714
    :try_start_b
    monitor-exit v2
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_0

    return-object v9

    :cond_13
    const/4 v12, 0x4

    if-eq v3, v12, :cond_17

    const/4 v12, 0x2

    if-ne v3, v12, :cond_14

    goto :goto_4

    :cond_14
    const/4 v12, 0x1

    if-ne v3, v12, :cond_15

    .line 725
    :try_start_c
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/b/a;->b()Z

    move-result v3

    if-nez v3, :cond_0

    .line 729
    sget-boolean v3, Lcom/tkay/expressad/b;->p:Z

    if-nez v3, :cond_15

    .line 730
    invoke-direct {v1, v10}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v3

    invoke-static {v9, v3}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;I)Z

    move-result v3

    if-eqz v3, :cond_15

    invoke-static {v11, v10}, Lcom/tkay/expressad/videocommon/b/n;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v3

    if-eqz v3, :cond_15

    .line 731
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "isready  IS_DOWANLOAD_FINSH_PLAY is :"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-boolean v3, Lcom/tkay/expressad/b;->p:Z

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_0
    .catchall {:try_start_c .. :try_end_c} :catchall_0

    .line 732
    :try_start_d
    monitor-exit v2
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_0

    return-object v9

    .line 736
    :cond_15
    :try_start_e
    iget v3, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/16 v12, 0x5e

    if-eq v3, v12, :cond_16

    iget v3, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/16 v12, 0x11f

    if-ne v3, v12, :cond_0

    .line 737
    :cond_16
    invoke-direct {v1, v10}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v3

    invoke-static {v9, v3}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;I)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-static {v11, v10}, Lcom/tkay/expressad/videocommon/b/n;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v3
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_0
    .catchall {:try_start_e .. :try_end_e} :catchall_0

    if-eqz v3, :cond_0

    .line 738
    :try_start_f
    monitor-exit v2
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_0

    return-object v9

    .line 717
    :cond_17
    :goto_4
    :try_start_10
    iget-object v3, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v3, v7}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z
    :try_end_10
    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_10} :catch_0
    .catchall {:try_start_10 .. :try_end_10} :catchall_0

    goto/16 :goto_3

    :cond_18
    :goto_5
    move/from16 v14, p1

    goto/16 :goto_1

    :cond_19
    move/from16 v14, p1

    add-int/lit8 v6, v6, 0x1

    goto/16 :goto_0

    :catchall_0
    move-exception v0

    goto :goto_6

    :catch_0
    move-exception v0

    .line 744
    :try_start_11
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 746
    :cond_1a
    monitor-exit v2
    :try_end_11
    .catchall {:try_start_11 .. :try_end_11} :catchall_0

    goto :goto_7

    :goto_6
    monitor-exit v2

    throw v0

    :cond_1b
    :goto_7
    const/4 v2, 0x0

    return-object v2
.end method

.method public final a(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/a;
    .locals 4

    .line 1012
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_2

    .line 1013
    monitor-enter v0

    .line 1015
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    if-eqz v2, :cond_0

    .line 1016
    invoke-interface {v2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1017
    invoke-interface {v2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/videocommon/b/a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 1023
    monitor-exit v0

    throw p1

    :catchall_1
    :cond_1
    monitor-exit v0

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method

.method public final a(ZLjava/util/List;)Ljava/util/List;
    .locals 21
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;"
        }
    .end annotation

    move-object/from16 v1, p0

    move/from16 v0, p1

    .line 381
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 383
    iget-object v3, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v3, :cond_18

    .line 384
    monitor-enter v3

    .line 387
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    const/4 v7, 0x0

    .line 388
    :goto_0
    iget-object v8, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v8}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v8

    if-ge v7, v8, :cond_17

    .line 389
    iget-object v8, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v8, v7}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/util/Map;

    .line 390
    invoke-interface {v8}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v9

    invoke-interface {v9}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v9

    .line 391
    :goto_1
    invoke-interface {v9}, Ljava/util/Iterator;->hasNext()Z

    move-result v10

    if-eqz v10, :cond_16

    .line 392
    invoke-interface {v9}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/util/Map$Entry;

    .line 393
    invoke-interface {v10}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/tkay/expressad/videocommon/b/a;

    if-eqz v10, :cond_14

    .line 394
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v11

    if-nez v11, :cond_0

    goto/16 :goto_5

    .line 399
    :cond_0
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v11

    .line 403
    invoke-interface/range {p2 .. p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v12

    const/4 v13, 0x0

    :cond_1
    :goto_2
    invoke-interface {v12}, Ljava/util/Iterator;->hasNext()Z

    move-result v14

    if-eqz v14, :cond_2

    invoke-interface {v12}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v11, :cond_1

    if-eqz v14, :cond_1

    .line 404
    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v16

    invoke-static/range {v16 .. v16}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_1

    invoke-virtual {v14}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v16

    invoke-static/range {v16 .. v16}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_1

    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v14}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v6, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_1

    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v14}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v6, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_1

    const/4 v13, 0x1

    goto :goto_2

    :cond_2
    if-eqz v13, :cond_14

    if-eqz v0, :cond_3

    .line 414
    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v6

    if-eqz v6, :cond_4

    :cond_3
    if-nez v0, :cond_5

    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v6

    if-eqz v6, :cond_5

    .line 415
    :cond_4
    new-instance v6, Ljava/lang/StringBuilder;

    const-string v10, "UnitCache isReady ==== isBidCampaign = "

    invoke-direct {v6, v10}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v10, " campaign.isBidCampaign() = "

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v10

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    goto/16 :goto_5

    .line 419
    :cond_5
    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v6

    .line 420
    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v12

    const-string v13, ""

    if-eqz v11, :cond_6

    .line 422
    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v14

    if-eqz v14, :cond_6

    .line 423
    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v13

    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v13

    .line 425
    :cond_6
    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    .line 428
    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_7

    const-string v14, "cmpt=1"

    invoke-virtual {v13, v14}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_7

    invoke-static {v11, v13}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)Z

    move-result v13

    if-eqz v13, :cond_14

    .line 434
    :cond_7
    invoke-static {v6, v11}, Lcom/tkay/expressad/videocommon/b/n;->b(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v13

    if-eqz v13, :cond_a

    .line 435
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->b()Z

    move-result v13

    if-eqz v13, :cond_8

    .line 436
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->o()V

    goto/16 :goto_5

    .line 441
    :cond_8
    invoke-static {v12}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v12

    if-eqz v12, :cond_9

    .line 444
    invoke-interface {v2, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_5

    .line 449
    :cond_9
    invoke-direct {v1, v11}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v12

    .line 1874
    invoke-static {v10, v12}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;I)Z

    move-result v12

    if-eqz v12, :cond_a

    .line 451
    invoke-interface {v2, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_5

    .line 459
    :cond_a
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->m()Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    .line 460
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v13

    const/4 v14, 0x5

    if-ne v13, v14, :cond_e

    .line 466
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->b()Z

    move-result v13

    if-eqz v13, :cond_b

    .line 467
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->o()V

    .line 468
    iget-object v6, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v6, v8}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v7, v7, -0x1

    goto/16 :goto_1

    :cond_b
    if-nez v12, :cond_c

    .line 474
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->l()V

    goto/16 :goto_5

    .line 484
    :cond_c
    invoke-static {v6, v11}, Lcom/tkay/expressad/videocommon/b/n;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v6

    if-eqz v6, :cond_d

    .line 486
    invoke-interface {v2, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto/16 :goto_5

    :cond_d
    const/4 v0, 0x0

    .line 490
    :try_start_1
    monitor-exit v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object v0

    .line 492
    :cond_e
    :try_start_2
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->c()J

    move-result-wide v14

    .line 493
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v12

    const/4 v0, 0x1

    if-ne v12, v0, :cond_f

    sub-long v14, v4, v14

    move-wide/from16 v17, v4

    .line 494
    iget-wide v4, v1, Lcom/tkay/expressad/videocommon/b/n;->l:J

    const-wide/16 v19, 0x3e8

    mul-long v4, v4, v19

    cmp-long v0, v14, v4

    if-lez v0, :cond_10

    .line 495
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->j()V

    .line 497
    iget-object v0, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v8}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    goto :goto_4

    :cond_f
    move-wide/from16 v17, v4

    :cond_10
    const/4 v0, 0x4

    if-eq v13, v0, :cond_13

    const/4 v0, 0x2

    if-ne v13, v0, :cond_11

    goto :goto_3

    :cond_11
    const/4 v0, 0x1

    if-ne v13, v0, :cond_12

    .line 516
    invoke-virtual {v10}, Lcom/tkay/expressad/videocommon/b/a;->b()Z

    move-result v0

    if-nez v0, :cond_15

    .line 520
    sget-boolean v0, Lcom/tkay/expressad/b;->p:Z

    if-nez v0, :cond_12

    .line 521
    invoke-direct {v1, v11}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v0

    .line 2874
    invoke-static {v10, v0}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;I)Z

    move-result v0

    if-eqz v0, :cond_12

    .line 521
    invoke-static {v6, v11}, Lcom/tkay/expressad/videocommon/b/n;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v0

    if-eqz v0, :cond_12

    .line 522
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v4, "isready  IS_DOWANLOAD_FINSH_PLAY is :"

    invoke-direct {v0, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-boolean v4, Lcom/tkay/expressad/b;->p:Z

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 523
    invoke-interface {v2, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_6

    .line 529
    :cond_12
    invoke-direct {v1, v11}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v0

    .line 3874
    invoke-static {v10, v0}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;I)Z

    move-result v0

    if-eqz v0, :cond_15

    .line 529
    invoke-static {v6, v11}, Lcom/tkay/expressad/videocommon/b/n;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v0

    if-eqz v0, :cond_15

    .line 530
    invoke-interface {v2, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_6

    .line 508
    :cond_13
    :goto_3
    iget-object v0, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v8}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :goto_4
    add-int/lit8 v7, v7, -0x1

    goto :goto_6

    :cond_14
    :goto_5
    move-wide/from16 v17, v4

    :cond_15
    :goto_6
    move/from16 v0, p1

    move-wide/from16 v4, v17

    goto/16 :goto_1

    :cond_16
    move-wide/from16 v17, v4

    add-int/lit8 v7, v7, 0x1

    move/from16 v0, p1

    goto/16 :goto_0

    :catchall_0
    move-exception v0

    goto :goto_7

    :catch_0
    move-exception v0

    .line 537
    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 539
    :cond_17
    monitor-exit v3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_8

    :goto_7
    monitor-exit v3

    throw v0

    :cond_18
    :goto_8
    return-object v2
.end method

.method public final a()V
    .locals 16

    move-object/from16 v1, p0

    .line 1086
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/videocommon/b/n;->e()V

    .line 1088
    iget-object v2, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v2, :cond_19

    .line 1089
    monitor-enter v2

    .line 1090
    :try_start_0
    iget-object v0, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/n;->a(Ljava/util/concurrent/CopyOnWriteArrayList;)Z

    move-result v0

    const/4 v3, 0x1

    if-nez v0, :cond_0

    .line 1091
    iput-boolean v3, v1, Lcom/tkay/expressad/videocommon/b/n;->e:Z

    .line 1094
    :cond_0
    iget-object v0, v1, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_18

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map;

    if-eqz v4, :cond_1

    .line 1099
    invoke-interface {v4}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v4

    .line 1100
    :cond_2
    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_1

    .line 1101
    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/Map$Entry;

    .line 1102
    invoke-interface {v5}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/videocommon/b/a;

    if-eqz v5, :cond_2

    .line 1106
    invoke-virtual {v5}, Lcom/tkay/expressad/videocommon/b/a;->b()Z

    move-result v6

    if-nez v6, :cond_2

    .line 1109
    iget v6, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/16 v7, 0x5f

    if-ne v6, v7, :cond_3

    .line 1110
    iput-boolean v3, v1, Lcom/tkay/expressad/videocommon/b/n;->e:Z

    .line 1112
    :cond_3
    invoke-virtual {v5}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v6

    .line 1113
    invoke-virtual {v5}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v8

    .line 1119
    new-instance v9, Lcom/tkay/expressad/videocommon/b/n$2;

    invoke-direct {v9, v1, v8}, Lcom/tkay/expressad/videocommon/b/n$2;-><init>(Lcom/tkay/expressad/videocommon/b/n;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v5, v9}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/d/b;)V

    .line 1158
    invoke-direct {v1, v8}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v9

    .line 1159
    iget v10, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-ne v10, v3, :cond_5

    .line 1160
    iget-object v9, v1, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    if-nez v9, :cond_4

    .line 1161
    iget-object v9, v1, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v9}, Lcom/tkay/expressad/d/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v9

    iput-object v9, v1, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    .line 1163
    :cond_4
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/videocommon/b/n;->h()I

    move-result v9

    .line 1165
    :cond_5
    invoke-virtual {v5, v9}, Lcom/tkay/expressad/videocommon/b/a;->d(I)V

    .line 1168
    iget v10, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/16 v11, 0x5e

    const/16 v12, 0x12a

    const/16 v13, 0x11f

    if-eq v10, v11, :cond_a

    iget v10, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-eq v10, v13, :cond_a

    iget v10, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-ne v10, v7, :cond_6

    goto :goto_2

    .line 1176
    :cond_6
    iget v10, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-ne v10, v12, :cond_8

    .line 1177
    iget-object v10, v1, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    if-nez v10, :cond_7

    .line 1178
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v10

    invoke-virtual {v10}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v10

    iget-object v15, v1, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v10, v15}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v10

    iput-object v10, v1, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    .line 1180
    :cond_7
    iget-object v10, v1, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    if-eqz v10, :cond_8

    .line 1181
    iget-object v10, v1, Lcom/tkay/expressad/videocommon/b/n;->b:Lcom/tkay/expressad/d/c;

    invoke-virtual {v10}, Lcom/tkay/expressad/d/c;->g()I

    move-result v10

    goto :goto_1

    :cond_8
    const/4 v10, 0x0

    .line 1185
    :goto_1
    iget v15, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-ne v15, v3, :cond_e

    .line 1186
    iget-object v15, v1, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    if-nez v15, :cond_9

    .line 1187
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v15

    invoke-virtual {v15}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v15

    iget-object v14, v1, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    invoke-static {v15, v14}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v14

    iput-object v14, v1, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    .line 1189
    :cond_9
    iget-object v14, v1, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    if-eqz v14, :cond_e

    .line 1190
    iget-object v10, v1, Lcom/tkay/expressad/videocommon/b/n;->a:Lcom/tkay/expressad/d/c;

    invoke-virtual {v10}, Lcom/tkay/expressad/d/c;->g()I

    move-result v10

    goto :goto_4

    .line 1169
    :cond_a
    :goto_2
    iget-object v10, v1, Lcom/tkay/expressad/videocommon/b/n;->n:Lcom/tkay/expressad/videocommon/e/d;

    if-nez v10, :cond_c

    .line 1170
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v10

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v14

    invoke-virtual {v14}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v14

    iget-object v15, v1, Lcom/tkay/expressad/videocommon/b/n;->m:Ljava/lang/String;

    iget v7, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-ne v7, v13, :cond_b

    move v7, v3

    goto :goto_3

    :cond_b
    const/4 v7, 0x0

    :goto_3
    invoke-virtual {v10, v14, v15, v7}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v7

    iput-object v7, v1, Lcom/tkay/expressad/videocommon/b/n;->n:Lcom/tkay/expressad/videocommon/e/d;

    .line 1172
    :cond_c
    iget-object v7, v1, Lcom/tkay/expressad/videocommon/b/n;->n:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v7, :cond_d

    .line 1173
    iget-object v7, v1, Lcom/tkay/expressad/videocommon/b/n;->n:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v7}, Lcom/tkay/expressad/videocommon/e/d;->x()I

    move-result v10

    goto :goto_4

    :cond_d
    const/4 v10, 0x0

    .line 1194
    :cond_e
    :goto_4
    invoke-virtual {v5, v10}, Lcom/tkay/expressad/videocommon/b/a;->b(I)V

    if-eqz v8, :cond_f

    .line 1195
    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->aC()I

    move-result v7

    goto :goto_5

    :cond_f
    move v7, v3

    .line 1196
    :goto_5
    invoke-virtual {v5, v7}, Lcom/tkay/expressad/videocommon/b/a;->c(I)V

    .line 1197
    new-instance v14, Ljava/lang/StringBuilder;

    const-string v15, "ready_rate : "

    invoke-direct {v14, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, " cd_rate : "

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, " videoCtnType : "

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1199
    invoke-direct {v1, v8}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v7

    invoke-static {v5, v7}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;I)Z

    move-result v7

    if-eqz v7, :cond_12

    .line 1200
    iget-object v7, v1, Lcom/tkay/expressad/videocommon/b/n;->f:Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v7, :cond_11

    iget v7, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/16 v10, 0x129

    if-eq v7, v10, :cond_10

    iget v7, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-ne v7, v12, :cond_11

    .line 1201
    :cond_10
    iget-object v7, v1, Lcom/tkay/expressad/videocommon/b/n;->f:Lcom/tkay/expressad/videocommon/d/b;

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v10

    invoke-interface {v7, v10}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;)V

    .line 1204
    :cond_11
    iget-object v7, v1, Lcom/tkay/expressad/videocommon/b/n;->g:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v7, :cond_12

    iget-object v7, v1, Lcom/tkay/expressad/videocommon/b/n;->g:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v7}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v7

    if-lez v7, :cond_12

    .line 1205
    iget-object v7, v1, Lcom/tkay/expressad/videocommon/b/n;->g:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v7, v10}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v7, :cond_12

    if-eqz v8, :cond_12

    .line 1207
    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v8

    invoke-interface {v7, v8}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;)V

    :cond_12
    if-eq v6, v3, :cond_2

    const/4 v7, 0x5

    if-eq v6, v7, :cond_2

    const/4 v7, 0x4

    if-eq v6, v7, :cond_2

    const/4 v7, 0x2

    if-eq v6, v7, :cond_13

    .line 1219
    iget-boolean v6, v1, Lcom/tkay/expressad/videocommon/b/n;->e:Z

    if-eqz v6, :cond_2

    .line 1222
    :cond_13
    iget-object v6, v1, Lcom/tkay/expressad/videocommon/b/n;->h:Lcom/tkay/expressad/videocommon/b/d;

    invoke-virtual {v5, v6}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/d;)V

    .line 1224
    invoke-static {v5, v9}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/b/a;I)Z

    move-result v6

    if-eqz v6, :cond_15

    .line 1225
    iget v6, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-eq v6, v11, :cond_14

    iget v6, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-ne v6, v13, :cond_2

    .line 1226
    :cond_14
    invoke-virtual {v5}, Lcom/tkay/expressad/videocommon/b/a;->h()V

    goto/16 :goto_0

    .line 1229
    :cond_15
    iget v6, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-eq v6, v3, :cond_16

    iget v6, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    const/16 v7, 0x5f

    if-eq v6, v7, :cond_16

    iget v6, v1, Lcom/tkay/expressad/videocommon/b/n;->p:I

    if-ne v6, v12, :cond_17

    :cond_16
    const/4 v6, 0x0

    .line 1230
    iput-boolean v6, v1, Lcom/tkay/expressad/videocommon/b/n;->e:Z

    .line 1232
    :cond_17
    invoke-virtual {v5}, Lcom/tkay/expressad/videocommon/b/a;->h()V

    goto/16 :goto_0

    .line 1237
    :cond_18
    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit v2

    throw v0

    :cond_19
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 141
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 142
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 144
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/videocommon/b/n;->b(Ljava/util/List;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/videocommon/d/b;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->f:Lcom/tkay/expressad/videocommon/d/b;

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/d/b;)V
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->g:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_0

    .line 128
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->g:Ljava/util/concurrent/ConcurrentHashMap;

    .line 130
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->g:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 134
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 135
    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 137
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/videocommon/b/n;->b(Ljava/util/List;)V

    return-void
.end method

.method public final b(IZ)Lcom/tkay/expressad/videocommon/b/a;
    .locals 0

    .line 1004
    :try_start_0
    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/videocommon/b/n;->a(IZ)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 1006
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const/4 p1, 0x0

    return-object p1
.end method

.method public final b()V
    .locals 8

    .line 1244
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_5

    .line 1245
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1246
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    if-eqz v2, :cond_0

    .line 1251
    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    .line 1252
    :cond_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1253
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 1254
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/videocommon/b/a;

    if-eqz v3, :cond_1

    .line 1258
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v4

    const/4 v5, 0x1

    if-eq v4, v5, :cond_1

    const/4 v5, 0x5

    if-eq v4, v5, :cond_1

    .line 1260
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->a()I

    move-result v5

    const/16 v6, 0x9

    const/4 v7, 0x2

    if-eq v5, v6, :cond_2

    .line 1262
    iget v5, p0, Lcom/tkay/expressad/videocommon/b/n;->o:I

    if-ne v5, v7, :cond_2

    .line 1264
    monitor-exit v0

    return-void

    :cond_2
    if-eq v4, v7, :cond_3

    if-nez v4, :cond_1

    .line 1268
    :cond_3
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/b/a;->h()V

    .line 1269
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    .line 1274
    :cond_4
    :try_start_2
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    :cond_5
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 5

    .line 1399
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    monitor-enter v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1400
    :try_start_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v1

    if-lez v1, :cond_2

    .line 1401
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    if-eqz v2, :cond_0

    .line 1403
    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_1
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    if-eqz v4, :cond_1

    .line 1404
    invoke-interface {v4}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/CharSequence;

    invoke-static {v4, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 1405
    iget-object v4, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v4, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    goto :goto_0

    .line 1411
    :cond_2
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    :try_start_2
    monitor-exit v0

    throw p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    return-void
.end method

.method public final c()V
    .locals 7

    .line 1283
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_3

    .line 1286
    :try_start_0
    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1287
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    if-eqz v2, :cond_0

    .line 1291
    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    .line 1292
    :cond_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_0

    .line 1293
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    .line 1294
    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/videocommon/b/a;

    if-eqz v4, :cond_1

    .line 1298
    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v5

    const/4 v6, 0x1

    if-ne v5, v6, :cond_1

    .line 1302
    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/b/a;->j()V

    .line 1304
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 1305
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    .line 1309
    :cond_2
    :try_start_2
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    :cond_3
    return-void
.end method

.method public final d()V
    .locals 4

    .line 1339
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_4

    .line 1342
    :try_start_0
    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1343
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    if-nez v2, :cond_1

    .line 1345
    monitor-exit v0

    return-void

    .line 1347
    :cond_1
    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    .line 1348
    :cond_2
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1349
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 1350
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/videocommon/b/a;

    if-eqz v3, :cond_2

    .line 1354
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/b/a;->o()V

    goto :goto_0

    .line 1358
    :cond_3
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    .line 1359
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    :try_start_2
    monitor-exit v0

    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 1366
    :catchall_1
    :cond_4
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    if-eqz v0, :cond_5

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_5

    .line 1367
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    :cond_5
    return-void
.end method
