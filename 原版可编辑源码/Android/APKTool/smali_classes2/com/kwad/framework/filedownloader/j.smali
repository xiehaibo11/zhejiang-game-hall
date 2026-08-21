.class public final Lcom/kwad/framework/filedownloader/j;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/j$b;,
        Lcom/kwad/framework/filedownloader/j$a;
    }
.end annotation


# static fields
.field static abd:I = 0xa

.field static abe:I = 0x5


# instance fields
.field private final aaZ:Ljava/util/concurrent/Executor;

.field private final aba:Ljava/util/concurrent/LinkedBlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/LinkedBlockingQueue<",
            "Lcom/kwad/framework/filedownloader/t;",
            ">;"
        }
    .end annotation
.end field

.field private final abb:Ljava/lang/Object;

.field private final abc:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/kwad/framework/filedownloader/t;",
            ">;"
        }
    .end annotation
.end field

.field private final handler:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x5

    const-string v1, "BlockCompleted"

    invoke-static {v0, v1}, Lcom/kwad/framework/filedownloader/f/b;->j(ILjava/lang/String;)Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/j;->aaZ:Ljava/util/concurrent/Executor;

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/j;->abb:Ljava/lang/Object;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/j;->abc:Ljava/util/ArrayList;

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    new-instance v2, Lcom/kwad/framework/filedownloader/j$b;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Lcom/kwad/framework/filedownloader/j$b;-><init>(B)V

    invoke-direct {v0, v1, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;Landroid/os/Handler$Callback;)V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/j;->handler:Landroid/os/Handler;

    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v0}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/j;->aba:Ljava/util/concurrent/LinkedBlockingQueue;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/j;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/framework/filedownloader/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/j;->push()V

    return-void
.end method

.method private a(Lcom/kwad/framework/filedownloader/t;Z)V
    .locals 2

    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/t;->tK()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/t;->tJ()V

    return-void

    :cond_0
    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/t;->tL()Z

    move-result p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/j;->aaZ:Ljava/util/concurrent/Executor;

    new-instance v0, Lcom/kwad/framework/filedownloader/j$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/framework/filedownloader/j$1;-><init>(Lcom/kwad/framework/filedownloader/j;Lcom/kwad/framework/filedownloader/t;)V

    invoke-interface {p2, v0}, Ljava/util/concurrent/Executor;->execute(Ljava/lang/Runnable;)V

    return-void

    :cond_1
    invoke-static {}, Lcom/kwad/framework/filedownloader/j;->tG()Z

    move-result p2

    if-nez p2, :cond_3

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/j;->aba:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {p2}, Ljava/util/concurrent/LinkedBlockingQueue;->isEmpty()Z

    move-result p2

    if-nez p2, :cond_3

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/j;->abb:Ljava/lang/Object;

    monitor-enter p2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/j;->aba:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/j;->aba:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/framework/filedownloader/t;

    invoke-direct {p0, v1}, Lcom/kwad/framework/filedownloader/j;->b(Lcom/kwad/framework/filedownloader/t;)V

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/j;->aba:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->clear()V

    monitor-exit p2

    goto :goto_1

    :catchall_0
    move-exception p1

    monitor-exit p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_3
    :goto_1
    invoke-static {}, Lcom/kwad/framework/filedownloader/j;->tG()Z

    move-result p2

    if-nez p2, :cond_4

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/j;->b(Lcom/kwad/framework/filedownloader/t;)V

    return-void

    :cond_4
    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/j;->c(Lcom/kwad/framework/filedownloader/t;)V

    return-void
.end method

.method private b(Lcom/kwad/framework/filedownloader/t;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/j;->handler:Landroid/os/Handler;

    const/4 v1, 0x1

    invoke-virtual {v0, v1, p1}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private c(Lcom/kwad/framework/filedownloader/t;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/j;->abb:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/j;->aba:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v1, p1}, Ljava/util/concurrent/LinkedBlockingQueue;->offer(Ljava/lang/Object;)Z

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/j;->push()V

    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method private push()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/j;->abb:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/j;->abc:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/j;->aba:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v1}, Ljava/util/concurrent/LinkedBlockingQueue;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    monitor-exit v0

    return-void

    :cond_1
    invoke-static {}, Lcom/kwad/framework/filedownloader/j;->tG()Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/j;->aba:Ljava/util/concurrent/LinkedBlockingQueue;

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/j;->abc:Ljava/util/ArrayList;

    invoke-virtual {v1, v3}, Ljava/util/concurrent/LinkedBlockingQueue;->drainTo(Ljava/util/Collection;)I

    goto :goto_1

    :cond_2
    sget v1, Lcom/kwad/framework/filedownloader/j;->abd:I

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/j;->aba:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v3}, Ljava/util/concurrent/LinkedBlockingQueue;->size()I

    move-result v3

    sget v4, Lcom/kwad/framework/filedownloader/j;->abe:I

    invoke-static {v3, v4}, Ljava/lang/Math;->min(II)I

    move-result v3

    :goto_0
    if-ge v2, v3, :cond_3

    iget-object v4, p0, Lcom/kwad/framework/filedownloader/j;->abc:Ljava/util/ArrayList;

    iget-object v5, p0, Lcom/kwad/framework/filedownloader/j;->aba:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v5}, Ljava/util/concurrent/LinkedBlockingQueue;->remove()Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_3
    move v2, v1

    :goto_1
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/j;->handler:Landroid/os/Handler;

    const/4 v1, 0x2

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/j;->abc:Ljava/util/ArrayList;

    invoke-virtual {v0, v1, v3}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object v1

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    return-void

    :catchall_0
    move-exception v1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method public static tF()Lcom/kwad/framework/filedownloader/j;
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/j$a;->tH()Lcom/kwad/framework/filedownloader/j;

    move-result-object v0

    return-object v0
.end method

.method private static tG()Z
    .locals 1

    sget v0, Lcom/kwad/framework/filedownloader/j;->abd:I

    if-lez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method final a(Lcom/kwad/framework/filedownloader/t;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/framework/filedownloader/j;->a(Lcom/kwad/framework/filedownloader/t;Z)V

    return-void
.end method
