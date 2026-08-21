.class public final Lcom/kwad/components/core/e/a/e;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/e/a/e$a;
    }
.end annotation


# instance fields
.field private final IV:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/e/a/b;",
            ">;"
        }
    .end annotation
.end field

.field private final IW:Ljava/util/Stack;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Stack<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation
.end field

.field private final IX:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private final IY:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final TAG:Ljava/lang/String;

.field private final ol:Ljava/util/concurrent/atomic/AtomicBoolean;


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "InstalledActivateManager"

    iput-object v0, p0, Lcom/kwad/components/core/e/a/e;->TAG:Ljava/lang/String;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/e/a/e;->IV:Ljava/util/List;

    new-instance v0, Ljava/util/Stack;

    invoke-direct {v0}, Ljava/util/Stack;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/e/a/e;->IW:Ljava/util/Stack;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/e/a/e;->ol:Ljava/util/concurrent/atomic/AtomicBoolean;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/e/a/e;->IX:Ljava/util/concurrent/atomic/AtomicBoolean;

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/e/a/e;->IY:Ljava/util/Set;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/e/a/e;-><init>()V

    return-void
.end method

.method private M(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->IX:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    const-string v1, "InstalledActivateManager"

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->ol:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "showInstalledActivate"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->IX:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    new-instance v0, Lcom/kwad/components/core/e/a/e$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/e/a/e$1;-><init>(Lcom/kwad/components/core/e/a/e;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->bR(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    return-void

    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "mLoadDisable: "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/components/core/e/a/e;->ol:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, ", mLoadDisable: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/kwad/components/core/e/a/e;->IX:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->IW:Ljava/util/Stack;

    invoke-virtual {v0, p1}, Ljava/util/Stack;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private N(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/e/a/e$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/e/a/e$2;-><init>(Lcom/kwad/components/core/e/a/e;)V

    invoke-static {p1, v0}, Lcom/kwad/components/core/e/a/e;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/a/b;)Z

    move-result p1

    if-nez p1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/core/e/a/e;->mO()V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/e/a/e;)Ljava/util/concurrent/atomic/AtomicBoolean;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/e/a/e;->IX:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/core/e/a/e;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/e/a/e;->N(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/a/b;)Z
    .locals 2

    const-string v0, "InstalledActivateManager"

    const-string v1, "showToActivityWindow"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/components/core/e/a/h;

    invoke-direct {v0}, Lcom/kwad/components/core/e/a/h;-><init>()V

    invoke-virtual {v0, p0, p1}, Lcom/kwad/components/core/e/a/h;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/a/b;)Z

    move-result p0

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/core/e/a/e;)Ljava/util/Set;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/e/a/e;->IY:Ljava/util/Set;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/core/e/a/e;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/e/a/e;->mO()V

    return-void
.end method

.method public static mN()Lcom/kwad/components/core/e/a/e;
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/e/a/e$a;->mR()Lcom/kwad/components/core/e/a/e;

    move-result-object v0

    return-object v0
.end method

.method private declared-synchronized mO()V
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->IW:Ljava/util/Stack;

    invoke-virtual {v0}, Ljava/util/Stack;->isEmpty()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->IW:Ljava/util/Stack;

    invoke-virtual {v0}, Ljava/util/Stack;->pop()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0, v0}, Lcom/kwad/components/core/e/a/e;->M(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method public final declared-synchronized L(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    monitor-enter p0

    :try_start_0
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->bQ(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/core/e/a/e;->IY:Ljava/util/Set;

    invoke-interface {v1, v0}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/core/e/a/e;->IY:Ljava/util/Set;

    invoke-interface {v1, v0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    invoke-direct {p0, p1}, Lcom/kwad/components/core/e/a/e;->M(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :cond_1
    :goto_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Lcom/kwad/components/core/e/a/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->IV:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/core/e/a/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->IV:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final en()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->ol:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->IV:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/e/a/b;

    invoke-interface {v1}, Lcom/kwad/components/core/e/a/b;->fh()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final es()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->ol:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->IV:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/e/a/b;

    invoke-interface {v1}, Lcom/kwad/components/core/e/a/b;->mL()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final isShowing()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e;->ol:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0
.end method
