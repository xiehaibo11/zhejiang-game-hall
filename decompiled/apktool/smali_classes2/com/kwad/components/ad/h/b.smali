.class public Lcom/kwad/components/ad/h/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/internal/api/b;


# static fields
.field private static final nN:Ljava/lang/Object;

.field private static volatile nO:Lcom/kwad/components/ad/h/b;


# instance fields
.field private nP:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private nQ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/h/c;",
            ">;"
        }
    .end annotation
.end field

.field private nR:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lcom/kwad/components/core/internal/api/a;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private nS:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lcom/kwad/components/core/n/c;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private nT:Lcom/kwad/components/core/n/i;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/kwad/components/ad/h/b;->nN:Ljava/lang/Object;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/h/b;->nP:Ljava/util/Set;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/h/b;->nQ:Ljava/util/List;

    new-instance v0, Ljava/util/WeakHashMap;

    invoke-direct {v0}, Ljava/util/WeakHashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/h/b;->nR:Ljava/util/Map;

    new-instance v0, Ljava/util/WeakHashMap;

    invoke-direct {v0}, Ljava/util/WeakHashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/h/b;->nS:Ljava/util/Map;

    new-instance v0, Lcom/kwad/components/ad/h/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/h/b$1;-><init>(Lcom/kwad/components/ad/h/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/h/b;->nT:Lcom/kwad/components/core/n/i;

    invoke-static {}, Lcom/kwad/components/core/n/h;->py()Lcom/kwad/components/core/n/h;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/h/b;->nT:Lcom/kwad/components/core/n/i;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/n/h;->a(Lcom/kwad/components/core/n/i;)V

    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nP:Ljava/util/Set;

    const/4 v1, 0x2

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nP:Ljava/util/Set;

    const/4 v1, 0x3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nP:Ljava/util/Set;

    const/16 v1, 0xd

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nP:Ljava/util/Set;

    const/4 v1, 0x6

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/h/b;)Ljava/util/Map;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/h/b;->nS:Ljava/util/Map;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/h/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/h/b;->fb()V

    return-void
.end method

.method private e(Lcom/kwad/components/core/internal/api/a;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nR:Ljava/util/Map;

    sget-object v1, Lcom/kwad/components/ad/h/b;->nN:Ljava/lang/Object;

    invoke-interface {v0, p1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p1}, Lcom/kwad/components/ad/h/b;->g(Lcom/kwad/components/core/internal/api/a;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/h/c;

    invoke-direct {v0, p1}, Lcom/kwad/components/ad/h/c;-><init>(Lcom/kwad/components/core/internal/api/a;)V

    invoke-virtual {v0}, Lcom/kwad/components/ad/h/c;->fe()V

    iget-object p1, p0, Lcom/kwad/components/ad/h/b;->nQ:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method private f(Lcom/kwad/components/core/internal/api/a;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nR:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nQ:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/h/c;

    invoke-virtual {v1, p1}, Lcom/kwad/components/ad/h/c;->d(Lcom/kwad/components/core/internal/api/a;)V

    goto :goto_0

    :cond_0
    invoke-interface {p1}, Lcom/kwad/components/core/internal/api/a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/h/b;->n(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/h/b;->fb()V

    :cond_1
    return-void
.end method

.method public static fa()Lcom/kwad/components/ad/h/b;
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/h/b;->nO:Lcom/kwad/components/ad/h/b;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/ad/h/b;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/ad/h/b;->nO:Lcom/kwad/components/ad/h/b;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/ad/h/b;

    invoke-direct {v1}, Lcom/kwad/components/ad/h/b;-><init>()V

    sput-object v1, Lcom/kwad/components/ad/h/b;->nO:Lcom/kwad/components/ad/h/b;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/kwad/components/ad/h/b;->nO:Lcom/kwad/components/ad/h/b;

    return-object v0
.end method

.method private declared-synchronized fb()V
    .locals 4

    monitor-enter p0

    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/h/b;->fc()Z

    move-result v0

    const-string v1, "KsAdGlobalWatcher"

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "checkCurrentPage noSDKPage: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nQ:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/h/c;

    invoke-virtual {v1}, Lcom/kwad/components/ad/h/c;->fg()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method static synthetic fd()Ljava/lang/Object;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/h/b;->nN:Ljava/lang/Object;

    return-object v0
.end method

.method private static g(Lcom/kwad/components/core/internal/api/a;)Z
    .locals 1

    invoke-interface {p0}, Lcom/kwad/components/core/internal/api/a;->ae()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    invoke-interface {p0}, Lcom/kwad/components/core/internal/api/a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cD(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    return p0
.end method

.method private n(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    iget p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->adStyle:I

    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nP:Ljava/util/Set;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result p1

    return p1
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/h/c;)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nQ:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/components/core/internal/api/a;)V
    .locals 0

    if-eqz p1, :cond_0

    invoke-interface {p1, p0}, Lcom/kwad/components/core/internal/api/a;->a(Lcom/kwad/components/core/internal/api/b;)V

    :cond_0
    return-void
.end method

.method public final b(Lcom/kwad/components/core/internal/api/a;)V
    .locals 0

    if-eqz p1, :cond_0

    invoke-interface {p1, p0}, Lcom/kwad/components/core/internal/api/a;->b(Lcom/kwad/components/core/internal/api/b;)V

    :cond_0
    return-void
.end method

.method public final c(Lcom/kwad/components/core/internal/api/a;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/h/b;->e(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method

.method public final d(Lcom/kwad/components/core/internal/api/a;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/h/b;->f(Lcom/kwad/components/core/internal/api/a;)V

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/h/b;->b(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method

.method public final declared-synchronized fc()Z
    .locals 2

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nR:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/internal/api/a;

    invoke-interface {v1}, Lcom/kwad/components/core/internal/api/a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/h/b;->n(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    const/4 v0, 0x0

    monitor-exit p0

    return v0

    :cond_1
    :try_start_1
    iget-object v0, p0, Lcom/kwad/components/ad/h/b;->nS:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
