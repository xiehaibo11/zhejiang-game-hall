.class final Lcom/kwad/framework/filedownloader/k;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/t;


# instance fields
.field private abi:Lcom/kwad/framework/filedownloader/a$a;

.field private abj:Lcom/kwad/framework/filedownloader/a$c;

.field private abk:Ljava/util/Queue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Lcom/kwad/framework/filedownloader/message/MessageSnapshot;",
            ">;"
        }
    .end annotation
.end field

.field private abl:Z


# direct methods
.method constructor <init>(Lcom/kwad/framework/filedownloader/a$a;Lcom/kwad/framework/filedownloader/a$c;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/k;->abl:Z

    invoke-direct {p0, p1, p2}, Lcom/kwad/framework/filedownloader/k;->a(Lcom/kwad/framework/filedownloader/a$a;Lcom/kwad/framework/filedownloader/a$c;)V

    return-void
.end method

.method private a(Lcom/kwad/framework/filedownloader/a$a;Lcom/kwad/framework/filedownloader/a$c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    iput-object p2, p0, Lcom/kwad/framework/filedownloader/k;->abj:Lcom/kwad/framework/filedownloader/a$c;

    new-instance p1, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {p1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/k;->abk:Ljava/util/Queue;

    return-void
.end method

.method private aX(I)V
    .locals 3

    invoke-static {p1}, Lcom/kwad/framework/filedownloader/d/d;->bA(I)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/k;->abk:Ljava/util/Queue;

    invoke-interface {p1}, Ljava/util/Queue;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/k;->abk:Ljava/util/Queue;

    invoke-interface {p1}, Ljava/util/Queue;->peek()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

    const/4 v0, 0x4

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const/4 v1, 0x1

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->getId()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v0, v1

    const/4 v1, 0x2

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/k;->abk:Ljava/util/Queue;

    invoke-interface {v2}, Ljava/util/Queue;->size()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v0, v1

    const/4 v1, 0x3

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->sX()B

    move-result p1

    invoke-static {p1}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p1

    aput-object p1, v0, v1

    const-string p1, "the messenger[%s](with id[%d]) has already accomplished all his job, but there still are some messages in parcel queue[%d] queue-top-status[%d]"

    invoke-static {p0, p1, v0}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    :cond_1
    return-void
.end method

.method private o(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 3

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    aput-object v2, v0, v1

    const-string v1, "notify completed %s"

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abj:Lcom/kwad/framework/filedownloader/a$c;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a$c;->to()V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/k;->p(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-void
.end method

.method private p(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    if-nez v0, :cond_1

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->getId()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v0, v1

    const/4 v1, 0x1

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->sX()B

    move-result p1

    invoke-static {p1}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p1

    aput-object p1, v0, v1

    const-string p1, "occur this case, it would be the host task of this messenger has been over(paused/warn/completed/error) on the other thread before receiving the snapshot(id[%d], status[%d])"

    invoke-static {p0, p1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    return-void

    :cond_1
    iget-boolean v1, p0, Lcom/kwad/framework/filedownloader/k;->abl:Z

    if-nez v1, :cond_3

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a;->sU()Lcom/kwad/framework/filedownloader/i;

    move-result-object v0

    if-nez v0, :cond_2

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abk:Ljava/util/Queue;

    invoke-interface {v0, p1}, Ljava/util/Queue;->offer(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/kwad/framework/filedownloader/j;->tF()Lcom/kwad/framework/filedownloader/j;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/framework/filedownloader/j;->a(Lcom/kwad/framework/filedownloader/t;)V

    return-void

    :cond_3
    :goto_0
    invoke-static {}, Lcom/kwad/framework/filedownloader/l;->isValid()Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a$a;->tm()Z

    move-result v0

    if-eqz v0, :cond_5

    :cond_4
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->sX()B

    move-result v0

    const/4 v1, 0x4

    if-ne v0, v1, :cond_5

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abj:Lcom/kwad/framework/filedownloader/a$c;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a$c;->to()V

    :cond_5
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->sX()B

    move-result p1

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/k;->aX(I)V

    return-void
.end method


# virtual methods
.method public final b(Lcom/kwad/framework/filedownloader/a$a;Lcom/kwad/framework/filedownloader/a$c;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    if-nez v0, :cond_0

    invoke-direct {p0, p1, p2}, Lcom/kwad/framework/filedownloader/k;->a(Lcom/kwad/framework/filedownloader/a$a;Lcom/kwad/framework/filedownloader/a$c;)V

    return-void

    :cond_0
    new-instance p2, Ljava/lang/IllegalStateException;

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const-string p1, "the messenger is working, can\'t re-appointment for %s"

    invoke-static {p1, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, p1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p2
.end method

.method public final f(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 3

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    aput-object v2, v0, v1

    const-string v1, "notify pending %s"

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/k;->p(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-void
.end method

.method public final g(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 3

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    aput-object v2, v0, v1

    const-string v1, "notify started %s"

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/k;->p(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-void
.end method

.method public final h(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 3

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    aput-object v2, v0, v1

    const-string v1, "notify connected %s"

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/k;->p(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-void
.end method

.method public final i(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 7

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object v0

    sget-boolean v1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz v1, :cond_0

    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/Object;

    aput-object v0, v1, v3

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a;->sV()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v1, v2

    const/4 v4, 0x2

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a;->sW()J

    move-result-wide v5

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    aput-object v5, v1, v4

    const-string v4, "notify progress %s %d %d"

    invoke-static {p0, v4, v1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a;->sR()I

    move-result v0

    if-gtz v0, :cond_2

    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_1

    new-array p1, v2, [Ljava/lang/Object;

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    aput-object v0, p1, v3

    const-string v0, "notify progress but client not request notify %s"

    invoke-static {p0, v0, p1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    return-void

    :cond_2
    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/k;->p(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-void
.end method

.method public final j(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 3

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    aput-object v2, v0, v1

    const/4 v1, 0x1

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    const-string v1, "notify block completed %s %s"

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/k;->p(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-void
.end method

.method public final k(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 4

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object v0

    const/4 v1, 0x4

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    aput-object v3, v1, v2

    const/4 v2, 0x1

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a;->ta()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x2

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a;->tb()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x3

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a;->sZ()Ljava/lang/Throwable;

    move-result-object v0

    aput-object v0, v1, v2

    const-string v0, "notify retry %s %d %d %s"

    invoke-static {p0, v0, v1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/k;->p(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-void
.end method

.method public final l(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 3

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    aput-object v2, v0, v1

    const-string v1, "notify warn %s"

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abj:Lcom/kwad/framework/filedownloader/a$c;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a$c;->to()V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/k;->p(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-void
.end method

.method public final m(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 3

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    aput-object v2, v0, v1

    const/4 v1, 0x1

    invoke-interface {v2}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object v2

    invoke-interface {v2}, Lcom/kwad/framework/filedownloader/a;->sZ()Ljava/lang/Throwable;

    move-result-object v2

    aput-object v2, v0, v1

    const-string v1, "notify error %s %s"

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abj:Lcom/kwad/framework/filedownloader/a$c;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a$c;->to()V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/k;->p(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-void
.end method

.method public final n(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    .locals 3

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    aput-object v2, v0, v1

    const-string v1, "notify paused %s"

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abj:Lcom/kwad/framework/filedownloader/a$c;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a$c;->to()V

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/k;->p(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-void
.end method

.method public final tI()Z
    .locals 4

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    new-array v0, v2, [Ljava/lang/Object;

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    aput-object v3, v0, v1

    const-string v3, "notify begin %s"

    invoke-static {p0, v3, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    if-nez v0, :cond_1

    new-array v0, v2, [Ljava/lang/Object;

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/k;->abk:Ljava/util/Queue;

    invoke-interface {v2}, Ljava/util/Queue;->size()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v0, v1

    const-string v2, "can\'t begin the task, the holder fo the messenger is nil, %d"

    invoke-static {p0, v2, v0}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    return v1

    :cond_1
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abj:Lcom/kwad/framework/filedownloader/a$c;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a$c;->onBegin()V

    return v2
.end method

.method public final tJ()V
    .locals 9

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/k;->abl:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abk:Ljava/util/Queue;

    invoke-interface {v0}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->sX()B

    move-result v1

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    if-nez v2, :cond_1

    return-void

    :cond_1
    invoke-interface {v2}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object v4

    invoke-interface {v4}, Lcom/kwad/framework/filedownloader/a;->sU()Lcom/kwad/framework/filedownloader/i;

    move-result-object v3

    invoke-interface {v2}, Lcom/kwad/framework/filedownloader/a$a;->tg()Lcom/kwad/framework/filedownloader/x$a;

    move-result-object v2

    invoke-direct {p0, v1}, Lcom/kwad/framework/filedownloader/k;->aX(I)V

    if-nez v3, :cond_2

    return-void

    :cond_2
    const/4 v5, 0x4

    if-ne v1, v5, :cond_3

    :try_start_0
    invoke-virtual {v3, v4}, Lcom/kwad/framework/filedownloader/i;->b(Lcom/kwad/framework/filedownloader/a;)V

    check-cast v0, Lcom/kwad/framework/filedownloader/message/a;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/message/a;->uY()Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/kwad/framework/filedownloader/k;->o(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-interface {v2, v0}, Lcom/kwad/framework/filedownloader/x$a;->g(Ljava/lang/Throwable;)Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/kwad/framework/filedownloader/k;->m(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    return-void

    :cond_3
    const/4 v2, 0x0

    instance-of v5, v3, Lcom/kwad/framework/filedownloader/g;

    if-eqz v5, :cond_4

    move-object v2, v3

    check-cast v2, Lcom/kwad/framework/filedownloader/g;

    :cond_4
    const/4 v5, -0x4

    if-eq v1, v5, :cond_12

    const/4 v5, -0x3

    if-eq v1, v5, :cond_11

    const/4 v5, -0x2

    if-eq v1, v5, :cond_f

    const/4 v5, -0x1

    if-eq v1, v5, :cond_e

    const/4 v5, 0x1

    if-eq v1, v5, :cond_c

    const/4 v5, 0x2

    if-eq v1, v5, :cond_a

    const/4 v5, 0x3

    if-eq v1, v5, :cond_8

    const/4 v5, 0x5

    if-eq v1, v5, :cond_6

    const/4 v0, 0x6

    if-eq v1, v0, :cond_5

    goto/16 :goto_0

    :cond_5
    invoke-virtual {v3, v4}, Lcom/kwad/framework/filedownloader/i;->a(Lcom/kwad/framework/filedownloader/a;)V

    return-void

    :cond_6
    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->ve()Ljava/lang/Throwable;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->tb()I

    if-eqz v2, :cond_7

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->vd()J

    return-void

    :cond_7
    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->uZ()I

    return-void

    :cond_8
    if-eqz v2, :cond_9

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->vd()J

    return-void

    :cond_9
    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->uZ()I

    move-result v0

    invoke-interface {v4}, Lcom/kwad/framework/filedownloader/a;->getSmallFileTotalBytes()I

    move-result v1

    invoke-virtual {v3, v4, v0, v1}, Lcom/kwad/framework/filedownloader/i;->b(Lcom/kwad/framework/filedownloader/a;II)V

    return-void

    :cond_a
    if-eqz v2, :cond_b

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->getEtag()Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->uR()Z

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->vb()J

    return-void

    :cond_b
    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->getEtag()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->uR()Z

    move-result v6

    invoke-interface {v4}, Lcom/kwad/framework/filedownloader/a;->getSmallFileSoFarBytes()I

    move-result v7

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->va()I

    move-result v8

    invoke-virtual/range {v3 .. v8}, Lcom/kwad/framework/filedownloader/i;->a(Lcom/kwad/framework/filedownloader/a;Ljava/lang/String;ZII)V

    return-void

    :cond_c
    if-eqz v2, :cond_d

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->vd()J

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->vb()J

    return-void

    :cond_d
    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->uZ()I

    move-result v1

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->va()I

    move-result v0

    invoke-virtual {v3, v4, v1, v0}, Lcom/kwad/framework/filedownloader/i;->a(Lcom/kwad/framework/filedownloader/a;II)V

    return-void

    :cond_e
    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->ve()Ljava/lang/Throwable;

    move-result-object v0

    invoke-virtual {v3, v4, v0}, Lcom/kwad/framework/filedownloader/i;->a(Lcom/kwad/framework/filedownloader/a;Ljava/lang/Throwable;)V

    return-void

    :cond_f
    if-eqz v2, :cond_10

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->vd()J

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->vb()J

    return-void

    :cond_10
    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->uZ()I

    move-result v1

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->va()I

    move-result v0

    invoke-virtual {v3, v4, v1, v0}, Lcom/kwad/framework/filedownloader/i;->c(Lcom/kwad/framework/filedownloader/a;II)V

    return-void

    :cond_11
    invoke-virtual {v3, v4}, Lcom/kwad/framework/filedownloader/i;->c(Lcom/kwad/framework/filedownloader/a;)V

    return-void

    :cond_12
    invoke-virtual {v3, v4}, Lcom/kwad/framework/filedownloader/i;->d(Lcom/kwad/framework/filedownloader/a;)V

    :goto_0
    return-void
.end method

.method public final tK()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a;->tc()Z

    move-result v0

    return v0
.end method

.method public final tL()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/k;->abk:Ljava/util/Queue;

    invoke-interface {v0}, Ljava/util/Queue;->peek()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->sX()B

    move-result v0

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final tM()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/k;->abl:Z

    return-void
.end method

.method public final toString()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/k;->abi:Lcom/kwad/framework/filedownloader/a$a;

    if-nez v1, :cond_0

    const/4 v1, -0x1

    goto :goto_0

    :cond_0
    invoke-interface {v1}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object v1

    invoke-interface {v1}, Lcom/kwad/framework/filedownloader/a;->getId()I

    move-result v1

    :goto_0
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const/4 v1, 0x1

    invoke-super {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    const-string v1, "%d:%s"

    invoke-static {v1, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
