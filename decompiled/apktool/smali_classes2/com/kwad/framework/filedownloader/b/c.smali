.class public final Lcom/kwad/framework/filedownloader/b/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/b/a;


# instance fields
.field private final abN:Lcom/kwad/framework/filedownloader/b/b;

.field private final abO:Lcom/kwad/framework/filedownloader/b/d;

.field private final abP:J

.field private volatile abQ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private abR:Ljava/util/concurrent/atomic/AtomicInteger;

.field private volatile abS:Ljava/lang/Thread;

.field private handler:Landroid/os/Handler;


# direct methods
.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abQ:Ljava/util/List;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abR:Ljava/util/concurrent/atomic/AtomicInteger;

    new-instance v0, Lcom/kwad/framework/filedownloader/b/b;

    invoke-direct {v0}, Lcom/kwad/framework/filedownloader/b/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    new-instance v0, Lcom/kwad/framework/filedownloader/b/d;

    invoke-direct {v0}, Lcom/kwad/framework/filedownloader/b/d;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/e;->vO()Lcom/kwad/framework/filedownloader/f/e;

    move-result-object v0

    iget-wide v0, v0, Lcom/kwad/framework/filedownloader/f/e;->aeK:J

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abP:J

    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "RemitHandoverToDB"

    invoke-static {v1}, Lcom/kwad/framework/filedownloader/f/f;->bs(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0xa

    invoke-direct {v0, v1, v2}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    new-instance v1, Landroid/os/Handler;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    new-instance v2, Lcom/kwad/framework/filedownloader/b/c$1;

    invoke-direct {v2, p0}, Lcom/kwad/framework/filedownloader/b/c$1;-><init>(Lcom/kwad/framework/filedownloader/b/c;)V

    invoke-direct {v1, v0, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;Landroid/os/Handler$Callback;)V

    iput-object v1, p0, Lcom/kwad/framework/filedownloader/b/c;->handler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic a(Lcom/kwad/framework/filedownloader/b/c;)Ljava/lang/Thread;
    .locals 0

    iget-object p0, p0, Lcom/kwad/framework/filedownloader/b/c;->abS:Ljava/lang/Thread;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/framework/filedownloader/b/c;Ljava/lang/Thread;)Ljava/lang/Thread;
    .locals 0

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/b/c;->abS:Ljava/lang/Thread;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/framework/filedownloader/b/c;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bk(I)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/framework/filedownloader/b/c;)Ljava/util/concurrent/atomic/AtomicInteger;
    .locals 0

    iget-object p0, p0, Lcom/kwad/framework/filedownloader/b/c;->abR:Ljava/util/concurrent/atomic/AtomicInteger;

    return-object p0
.end method

.method private bk(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v1, p1}, Lcom/kwad/framework/filedownloader/b/b;->bf(I)Lcom/kwad/framework/filedownloader/d/c;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/framework/filedownloader/b/d;->b(Lcom/kwad/framework/filedownloader/d/c;)V

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/b;->bg(I)Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v1, p1}, Lcom/kwad/framework/filedownloader/b/d;->bh(I)V

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/framework/filedownloader/d/a;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v1, v0}, Lcom/kwad/framework/filedownloader/b/d;->a(Lcom/kwad/framework/filedownloader/d/a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private bl(I)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abQ:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method private bm(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->handler:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->removeMessages(I)V

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abR:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-ne v0, p1, :cond_0

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/b/c;->abS:Ljava/lang/Thread;

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/b/c;->handler:Landroid/os/Handler;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    invoke-static {}, Ljava/util/concurrent/locks/LockSupport;->park()V

    return-void

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bk(I)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/framework/filedownloader/b/c;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/framework/filedownloader/b/c;->abQ:Ljava/util/List;

    return-object p0
.end method


# virtual methods
.method public final a(IIJ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/kwad/framework/filedownloader/b/b;->a(IIJ)V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/kwad/framework/filedownloader/b/d;->a(IIJ)V

    return-void
.end method

.method public final a(IJLjava/lang/String;Ljava/lang/String;)V
    .locals 7

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    move v1, p1

    move-wide v2, p2

    move-object v4, p4

    move-object v5, p5

    invoke-virtual/range {v0 .. v5}, Lcom/kwad/framework/filedownloader/b/b;->a(IJLjava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    move v2, p1

    move-wide v3, p2

    move-object v5, p4

    move-object v6, p5

    invoke-virtual/range {v1 .. v6}, Lcom/kwad/framework/filedownloader/b/d;->a(IJLjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(ILjava/lang/String;JJI)V
    .locals 10

    move-object v0, p0

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    move v2, p1

    move-object v3, p2

    move-wide v4, p3

    move-wide v6, p5

    move/from16 v8, p7

    invoke-virtual/range {v1 .. v8}, Lcom/kwad/framework/filedownloader/b/b;->a(ILjava/lang/String;JJI)V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    :cond_0
    iget-object v2, v0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    move v3, p1

    move-object v4, p2

    move-wide v5, p3

    move-wide v7, p5

    move/from16 v9, p7

    invoke-virtual/range {v2 .. v9}, Lcom/kwad/framework/filedownloader/b/d;->a(ILjava/lang/String;JJI)V

    return-void
.end method

.method public final a(ILjava/lang/Throwable;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/framework/filedownloader/b/b;->a(ILjava/lang/Throwable;)V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/framework/filedownloader/b/d;->a(ILjava/lang/Throwable;)V

    return-void
.end method

.method public final a(ILjava/lang/Throwable;J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/kwad/framework/filedownloader/b/b;->a(ILjava/lang/Throwable;J)V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bm(I)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/kwad/framework/filedownloader/b/d;->a(ILjava/lang/Throwable;J)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/b/c;->abQ:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {p2, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/framework/filedownloader/d/a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/b;->a(Lcom/kwad/framework/filedownloader/d/a;)V

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/a;->getId()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/d;->a(Lcom/kwad/framework/filedownloader/d/a;)V

    return-void
.end method

.method public final b(Lcom/kwad/framework/filedownloader/d/c;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/b;->b(Lcom/kwad/framework/filedownloader/d/c;)V

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/d;->b(Lcom/kwad/framework/filedownloader/d/c;)V

    return-void
.end method

.method public final be(I)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->handler:Landroid/os/Handler;

    iget-wide v1, p0, Lcom/kwad/framework/filedownloader/b/c;->abP:J

    invoke-virtual {v0, p1, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void
.end method

.method public final bf(I)Lcom/kwad/framework/filedownloader/d/c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/b;->bf(I)Lcom/kwad/framework/filedownloader/d/c;

    move-result-object p1

    return-object p1
.end method

.method public final bg(I)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/kwad/framework/filedownloader/d/a;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/b;->bg(I)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public final bh(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/b;->bh(I)V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/d;->bh(I)V

    return-void
.end method

.method public final bi(I)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/d;->bi(I)Z

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/b;->bi(I)Z

    move-result p1

    return p1
.end method

.method public final bj(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/b;->bj(I)V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/b/d;->bj(I)V

    return-void
.end method

.method public final c(IJ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1, p2, p3}, Lcom/kwad/framework/filedownloader/b/b;->c(IJ)V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1, p2, p3}, Lcom/kwad/framework/filedownloader/b/d;->c(IJ)V

    return-void
.end method

.method public final clear()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/b/b;->clear()V

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/b/d;->clear()V

    return-void
.end method

.method public final d(IJ)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1, p2, p3}, Lcom/kwad/framework/filedownloader/b/b;->d(IJ)V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->handler:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->removeMessages(I)V

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abR:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-ne v0, p1, :cond_1

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abS:Ljava/lang/Thread;

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->handler:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    invoke-static {}, Ljava/util/concurrent/locks/LockSupport;->park()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1, p2, p3}, Lcom/kwad/framework/filedownloader/b/d;->d(IJ)V

    :cond_1
    iget-object p2, p0, Lcom/kwad/framework/filedownloader/b/c;->abQ:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {p2, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final e(IJ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1, p2, p3}, Lcom/kwad/framework/filedownloader/b/b;->e(IJ)V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bm(I)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1, p2, p3}, Lcom/kwad/framework/filedownloader/b/d;->e(IJ)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/b/c;->abQ:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {p2, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final q(II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/framework/filedownloader/b/b;->q(II)V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/c;->bl(I)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/framework/filedownloader/b/d;->q(II)V

    return-void
.end method

.method public final uh()Lcom/kwad/framework/filedownloader/b/a$a;
    .locals 3

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/c;->abO:Lcom/kwad/framework/filedownloader/b/d;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    iget-object v1, v1, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/b/c;->abN:Lcom/kwad/framework/filedownloader/b/b;

    iget-object v2, v2, Lcom/kwad/framework/filedownloader/b/b;->abL:Landroid/util/SparseArray;

    invoke-virtual {v0, v1, v2}, Lcom/kwad/framework/filedownloader/b/d;->a(Landroid/util/SparseArray;Landroid/util/SparseArray;)Lcom/kwad/framework/filedownloader/b/a$a;

    move-result-object v0

    return-object v0
.end method
