.class public final Lcom/tkay/expressad/exoplayer/k/v;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/k/v$a;
    }
.end annotation


# instance fields
.field private final a:Ljava/lang/Object;

.field private final b:Ljava/util/PriorityQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/PriorityQueue<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private c:I


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 49
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 43
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/k/v;->a:Ljava/lang/Object;

    .line 50
    new-instance v0, Ljava/util/PriorityQueue;

    invoke-static {}, Ljava/util/Collections;->reverseOrder()Ljava/util/Comparator;

    move-result-object v1

    const/16 v2, 0xa

    invoke-direct {v0, v2, v1}, Ljava/util/PriorityQueue;-><init>(ILjava/util/Comparator;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/k/v;->b:Ljava/util/PriorityQueue;

    const/high16 v0, -0x80000000

    .line 51
    iput v0, p0, Lcom/tkay/expressad/exoplayer/k/v;->c:I

    return-void
.end method

.method private b(I)Z
    .locals 2

    .line 87
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/v;->a:Ljava/lang/Object;

    monitor-enter v0

    .line 88
    :try_start_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->c:I

    if-ne v1, p1, :cond_0

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

    .line 89
    monitor-exit v0

    throw p1
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 60
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/v;->a:Ljava/lang/Object;

    monitor-enter v0

    .line 61
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->b:Ljava/util/PriorityQueue;

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/PriorityQueue;->add(Ljava/lang/Object;)Z

    .line 62
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->c:I

    invoke-static {v1, v2}, Ljava/lang/Math;->max(II)I

    move-result v1

    iput v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->c:I

    .line 63
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public final a(I)V
    .locals 3

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/v;->a:Ljava/lang/Object;

    monitor-enter v0

    .line 100
    :try_start_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->c:I

    if-ne v1, p1, :cond_0

    .line 103
    monitor-exit v0

    return-void

    .line 101
    :cond_0
    new-instance v1, Lcom/tkay/expressad/exoplayer/k/v$a;

    iget v2, p0, Lcom/tkay/expressad/exoplayer/k/v;->c:I

    invoke-direct {v1, p1, v2}, Lcom/tkay/expressad/exoplayer/k/v$a;-><init>(II)V

    throw v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    move-exception p1

    .line 103
    monitor-exit v0

    throw p1
.end method

.method public final b()V
    .locals 2

    .line 73
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/v;->a:Ljava/lang/Object;

    monitor-enter v0

    .line 74
    :goto_0
    :try_start_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->c:I

    if-eqz v1, :cond_0

    .line 75
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->a:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->wait()V

    goto :goto_0

    .line 77
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public final c()V
    .locals 3

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/v;->a:Ljava/lang/Object;

    monitor-enter v0

    .line 113
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->b:Ljava/util/PriorityQueue;

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/PriorityQueue;->remove(Ljava/lang/Object;)Z

    .line 114
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->b:Ljava/util/PriorityQueue;

    invoke-virtual {v1}, Ljava/util/PriorityQueue;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    const/high16 v1, -0x80000000

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->b:Ljava/util/PriorityQueue;

    invoke-virtual {v1}, Ljava/util/PriorityQueue;->peek()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    :goto_0
    iput v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->c:I

    .line 115
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k/v;->a:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->notifyAll()V

    .line 116
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method
