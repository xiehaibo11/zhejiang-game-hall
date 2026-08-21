.class public Lcom/kwad/components/core/c/f;
.super Ljava/lang/Object;


# static fields
.field private static volatile IJ:Lcom/kwad/components/core/c/f;


# instance fields
.field private II:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Ljava/lang/Object;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/c/f;->II:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method private static K(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->bZ(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v2

    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, "-"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static b(Lcom/kwad/components/core/c/g;)Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/c/g;->mv()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/core/c/g;->mB()Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "-"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static mu()Lcom/kwad/components/core/c/f;
    .locals 2

    sget-object v0, Lcom/kwad/components/core/c/f;->IJ:Lcom/kwad/components/core/c/f;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/core/c/f;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/core/c/f;->IJ:Lcom/kwad/components/core/c/f;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/c/f;

    invoke-direct {v1}, Lcom/kwad/components/core/c/f;-><init>()V

    sput-object v1, Lcom/kwad/components/core/c/f;->IJ:Lcom/kwad/components/core/c/f;

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
    sget-object v0, Lcom/kwad/components/core/c/f;->IJ:Lcom/kwad/components/core/c/f;

    return-object v0
.end method


# virtual methods
.method public final J(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    invoke-static {p1}, Lcom/kwad/components/core/c/f;->K(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/core/c/f;->II:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Lcom/kwad/components/core/c/g;)Z
    .locals 4

    invoke-static {p1}, Lcom/kwad/components/core/c/f;->b(Lcom/kwad/components/core/c/g;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "contains key: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AdMemCachePool"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/c/f;->II:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    const/4 v2, 0x0

    if-nez v0, :cond_0

    return v2

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/c/f;->II:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/ref/WeakReference;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    const/4 v2, 0x1

    :cond_1
    if-eqz v2, :cond_2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "contains ad: "

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return v2
.end method

.method public final add(Ljava/lang/Object;)V
    .locals 3

    instance-of v0, p1, Lcom/kwad/components/core/internal/api/a;

    if-eqz v0, :cond_0

    move-object v0, p1

    check-cast v0, Lcom/kwad/components/core/internal/api/a;

    invoke-interface {v0}, Lcom/kwad/components/core/internal/api/a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/c/f;->K(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/c/f;->II:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v2, Ljava/lang/ref/WeakReference;

    invoke-direct {v2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v1, v0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method
