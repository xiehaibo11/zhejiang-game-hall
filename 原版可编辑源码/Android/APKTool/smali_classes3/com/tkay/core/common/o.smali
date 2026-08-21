.class public abstract Lcom/tkay/core/common/o;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Lcom/tkay/core/common/f/p;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field final a:Ljava/lang/String;

.field b:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "TT;>;"
        }
    .end annotation
.end field

.field protected c:Landroid/os/CountDownTimer;

.field d:Ljava/lang/String;

.field protected e:Landroid/content/Context;


# direct methods
.method protected constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 30
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/o;->a:Ljava/lang/String;

    .line 32
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/o;->b:Ljava/util/ArrayList;

    .line 41
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/o;->e:Landroid/content/Context;

    .line 42
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/o;->d:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/o;)V
    .locals 1

    const/4 v0, 0x1

    .line 29
    invoke-direct {p0, v0}, Lcom/tkay/core/common/o;->a(Z)V

    return-void
.end method

.method private declared-synchronized a(Z)V
    .locals 3

    monitor-enter p0

    if-eqz p1, :cond_1

    .line 92
    :try_start_0
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 93
    iget-object v0, p0, Lcom/tkay/core/common/o;->b:Ljava/util/ArrayList;

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    .line 94
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 95
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/o;->a(Ljava/util/List;)V

    .line 97
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/common/o;->b:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->clear()V

    goto :goto_1

    .line 99
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/common/o;->e:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/core/common/o;->d:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object p1

    .line 100
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 101
    iget-object v1, p0, Lcom/tkay/core/common/o;->b:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    invoke-virtual {p1}, Lcom/tkay/core/c/a;->Y()I

    move-result v2

    if-lt v1, v2, :cond_3

    .line 102
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->Y()I

    move-result p1

    add-int/lit8 p1, p1, -0x1

    :goto_0
    if-ltz p1, :cond_2

    .line 103
    iget-object v1, p0, Lcom/tkay/core/common/o;->b:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/p;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 104
    iget-object v1, p0, Lcom/tkay/core/common/o;->b:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    add-int/lit8 p1, p1, -0x1

    goto :goto_0

    .line 106
    :cond_2
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result p1

    if-lez p1, :cond_3

    .line 107
    invoke-virtual {p0, v0}, Lcom/tkay/core/common/o;->a(Ljava/util/List;)V

    .line 112
    :cond_3
    :goto_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance v0, Lcom/tkay/core/common/o$2;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/o$2;-><init>(Lcom/tkay/core/common/o;)V

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 123
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/tkay/core/common/f/p;Z)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;Z)V"
        }
    .end annotation

    monitor-enter p0

    const/4 v0, 0x1

    if-eqz p2, :cond_0

    .line 48
    :try_start_0
    iget-object p2, p0, Lcom/tkay/core/common/o;->b:Ljava/util/ArrayList;

    invoke-virtual {p2, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 49
    invoke-direct {p0, v0}, Lcom/tkay/core/common/o;->a(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    .line 51
    :cond_0
    :try_start_1
    iget-object p2, p0, Lcom/tkay/core/common/o;->e:Landroid/content/Context;

    invoke-static {p2}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object p2

    iget-object v1, p0, Lcom/tkay/core/common/o;->d:Ljava/lang/String;

    invoke-virtual {p2, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object p2

    const/4 v1, 0x0

    .line 53
    iget-object v2, p0, Lcom/tkay/core/common/o;->b:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 54
    invoke-virtual {p2}, Lcom/tkay/core/c/a;->aa()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-lez v2, :cond_2

    .line 55
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v2, Lcom/tkay/core/common/o$1;

    invoke-direct {v2, p0, p2}, Lcom/tkay/core/common/o$1;-><init>(Lcom/tkay/core/common/o;Lcom/tkay/core/c/a;)V

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    :cond_1
    move v0, v1

    .line 82
    :cond_2
    iget-object p2, p0, Lcom/tkay/core/common/o;->b:Ljava/util/ArrayList;

    invoke-virtual {p2, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 83
    invoke-direct {p0, v0}, Lcom/tkay/core/common/o;->a(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 85
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method protected abstract a(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "TT;>;)V"
        }
    .end annotation
.end method
