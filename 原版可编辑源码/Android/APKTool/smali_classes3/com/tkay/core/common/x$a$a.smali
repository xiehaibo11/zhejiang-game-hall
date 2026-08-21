.class final Lcom/tkay/core/common/x$a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/x$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "a"
.end annotation


# instance fields
.field a:Lcom/tkay/core/c/d;

.field b:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field c:Z

.field final synthetic d:Lcom/tkay/core/common/x$a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/x$a;)V
    .locals 0

    .line 294
    iput-object p1, p0, Lcom/tkay/core/common/x$a$a;->d:Lcom/tkay/core/common/x$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation

    .line 300
    iget-object v0, p0, Lcom/tkay/core/common/x$a$a;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object v0
.end method

.method private declared-synchronized a(Lcom/tkay/core/common/f/aj;)V
    .locals 2

    monitor-enter p0

    .line 305
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/x$a$a;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 v1, 0x1

    invoke-static {v0, p1, v1}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 330
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic a(Lcom/tkay/core/common/x$a$a;)V
    .locals 0

    .line 294
    invoke-direct {p0}, Lcom/tkay/core/common/x$a$a;->b()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/x$a$a;Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 294
    invoke-direct {p0, p1}, Lcom/tkay/core/common/x$a$a;->a(Lcom/tkay/core/common/f/aj;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/x$a$a;Ljava/util/List;)V
    .locals 0

    .line 294
    invoke-direct {p0, p1}, Lcom/tkay/core/common/x$a$a;->a(Ljava/util/List;)V

    return-void
.end method

.method private declared-synchronized a(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 333
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/x$a$a;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/x$a$a;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 334
    iget-object v0, p0, Lcom/tkay/core/common/x$a$a;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->removeAll(Ljava/util/Collection;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 336
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private static synthetic b(Lcom/tkay/core/common/x$a$a;)Ljava/util/List;
    .locals 0

    .line 1300
    iget-object p0, p0, Lcom/tkay/core/common/x$a$a;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object p0
.end method

.method private declared-synchronized b()V
    .locals 1

    monitor-enter p0

    .line 339
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/core/common/x$a$a;->c:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 340
    monitor-exit p0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 342
    :try_start_1
    iput-boolean v0, p0, Lcom/tkay/core/common/x$a$a;->c:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 343
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private c()Z
    .locals 1

    .line 346
    iget-boolean v0, p0, Lcom/tkay/core/common/x$a$a;->c:Z

    return v0
.end method

.method private static synthetic c(Lcom/tkay/core/common/x$a$a;)Z
    .locals 0

    .line 1346
    iget-boolean p0, p0, Lcom/tkay/core/common/x$a$a;->c:Z

    return p0
.end method
