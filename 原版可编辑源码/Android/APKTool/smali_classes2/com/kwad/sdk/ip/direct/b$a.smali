.class final Lcom/kwad/sdk/ip/direct/b$a;
.super Ljava/lang/Thread;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/ip/direct/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# instance fields
.field aCC:Ljava/nio/channels/Selector;

.field aCD:Ljava/util/LinkedList;

.field volatile aCE:Z


# direct methods
.method constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCD:Ljava/util/LinkedList;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCE:Z

    invoke-static {}, Ljava/nio/channels/Selector;->open()Ljava/nio/channels/Selector;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCC:Ljava/nio/channels/Selector;

    const-string v0, "Connector"

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/ip/direct/b$a;->setName(Ljava/lang/String;)V

    return-void
.end method

.method private FX()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCD:Ljava/util/LinkedList;

    monitor-enter v0

    :goto_0
    :try_start_0
    iget-object v1, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCD:Ljava/util/LinkedList;

    invoke-virtual {v1}, Ljava/util/LinkedList;->size()I

    move-result v1

    if-lez v1, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCD:Ljava/util/LinkedList;

    invoke-virtual {v1}, Ljava/util/LinkedList;->removeFirst()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/ip/direct/b$b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iget-object v2, v1, Lcom/kwad/sdk/ip/direct/b$b;->aCG:Ljava/nio/channels/SocketChannel;

    iget-object v3, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCC:Ljava/nio/channels/Selector;

    const/16 v4, 0x8

    invoke-virtual {v2, v3, v4, v1}, Ljava/nio/channels/SocketChannel;->register(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    :try_start_2
    iget-object v3, v1, Lcom/kwad/sdk/ip/direct/b$b;->aCG:Ljava/nio/channels/SocketChannel;

    invoke-virtual {v3}, Ljava/nio/channels/SocketChannel;->close()V

    iput-object v2, v1, Lcom/kwad/sdk/ip/direct/b$b;->aCH:Ljava/lang/Throwable;

    goto :goto_0

    :cond_0
    monitor-exit v0

    return-void

    :catchall_1
    move-exception v1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw v1
.end method

.method private FY()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCC:Ljava/nio/channels/Selector;

    invoke-virtual {v0}, Ljava/nio/channels/Selector;->selectedKeys()Ljava/util/Set;

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

    check-cast v1, Ljava/nio/channels/SelectionKey;

    invoke-interface {v0}, Ljava/util/Iterator;->remove()V

    invoke-virtual {v1}, Ljava/nio/channels/SelectionKey;->attachment()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/ip/direct/b$b;

    invoke-virtual {v1}, Ljava/nio/channels/SelectionKey;->channel()Ljava/nio/channels/SelectableChannel;

    move-result-object v3

    check-cast v3, Ljava/nio/channels/SocketChannel;

    :try_start_0
    invoke-virtual {v3}, Ljava/nio/channels/SocketChannel;->finishConnect()Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-virtual {v1}, Ljava/nio/channels/SelectionKey;->cancel()V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    iput-wide v4, v2, Lcom/kwad/sdk/ip/direct/b$b;->aCK:J

    invoke-virtual {v3}, Ljava/nio/channels/SocketChannel;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-static {v3}, Lcom/kwad/sdk/utils/bj;->c(Ljava/io/Closeable;)V

    iput-object v1, v2, Lcom/kwad/sdk/ip/direct/b$b;->aCH:Ljava/lang/Throwable;

    goto :goto_0

    :cond_1
    return-void
.end method


# virtual methods
.method final a(Lcom/kwad/sdk/ip/direct/b$b;)V
    .locals 4

    :try_start_0
    invoke-static {}, Ljava/nio/channels/SocketChannel;->open()Ljava/nio/channels/SocketChannel;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    const/4 v1, 0x0

    :try_start_1
    invoke-virtual {v0, v1}, Ljava/nio/channels/SocketChannel;->configureBlocking(Z)Ljava/nio/channels/SelectableChannel;

    iget-object v1, p1, Lcom/kwad/sdk/ip/direct/b$b;->aCF:Ljava/net/InetSocketAddress;

    invoke-virtual {v0, v1}, Ljava/nio/channels/SocketChannel;->connect(Ljava/net/SocketAddress;)Z

    move-result v1

    iput-object v0, p1, Lcom/kwad/sdk/ip/direct/b$b;->aCG:Ljava/nio/channels/SocketChannel;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iput-wide v2, p1, Lcom/kwad/sdk/ip/direct/b$b;->aCJ:J

    if-eqz v1, :cond_0

    iget-wide v1, p1, Lcom/kwad/sdk/ip/direct/b$b;->aCJ:J

    iput-wide v1, p1, Lcom/kwad/sdk/ip/direct/b$b;->aCK:J

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->c(Ljava/io/Closeable;)V

    goto :goto_1

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCD:Ljava/util/LinkedList;

    monitor-enter v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :try_start_2
    iget-object v2, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCD:Ljava/util/LinkedList;

    invoke-virtual {v2, p1}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    monitor-exit v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :try_start_3
    iget-object p1, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCC:Ljava/nio/channels/Selector;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz p1, :cond_1

    :try_start_4
    iget-object p1, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCC:Ljava/nio/channels/Selector;

    invoke-virtual {p1}, Ljava/nio/channels/Selector;->wakeup()Ljava/nio/channels/Selector;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_1

    :catchall_0
    :cond_1
    return-void

    :catchall_1
    move-exception v2

    :try_start_5
    monitor-exit v1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :try_start_6
    throw v2
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :catchall_2
    move-exception v1

    goto :goto_0

    :catchall_3
    move-exception v1

    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->c(Ljava/io/Closeable;)V

    iput-object v1, p1, Lcom/kwad/sdk/ip/direct/b$b;->aCH:Ljava/lang/Throwable;

    :goto_1
    return-void
.end method

.method public final run()V
    .locals 1

    :cond_0
    :goto_0
    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCC:Ljava/nio/channels/Selector;

    invoke-virtual {v0}, Ljava/nio/channels/Selector;->select()I

    move-result v0

    if-lez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/sdk/ip/direct/b$a;->FY()V

    :cond_1
    invoke-direct {p0}, Lcom/kwad/sdk/ip/direct/b$a;->FX()V

    iget-boolean v0, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCE:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCC:Ljava/nio/channels/Selector;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_2

    :try_start_1
    iget-object v0, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCC:Ljava/nio/channels/Selector;

    invoke-virtual {v0}, Ljava/nio/channels/Selector;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catch_0
    :cond_2
    return-void

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0
.end method

.method final shutdown()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCE:Z

    iget-object v0, p0, Lcom/kwad/sdk/ip/direct/b$a;->aCC:Ljava/nio/channels/Selector;

    if-eqz v0, :cond_0

    :try_start_0
    invoke-virtual {v0}, Ljava/nio/channels/Selector;->wakeup()Ljava/nio/channels/Selector;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
