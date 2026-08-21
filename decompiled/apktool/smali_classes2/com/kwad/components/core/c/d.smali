.class public Lcom/kwad/components/core/c/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/c/c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/c/d$c;,
        Lcom/kwad/components/core/c/d$a;,
        Lcom/kwad/components/core/c/d$b;,
        Lcom/kwad/components/core/c/d$e;,
        Lcom/kwad/components/core/c/d$f;,
        Lcom/kwad/components/core/c/d$d;
    }
.end annotation


# static fields
.field private static volatile Ij:Lcom/kwad/components/core/c/d; = null

.field private static Ik:Z = true


# instance fields
.field private Ii:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/kwad/components/core/c/c;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/c/d;->Ii:Landroid/util/SparseArray;

    new-instance v1, Lcom/kwad/components/core/c/d$f;

    invoke-direct {v1}, Lcom/kwad/components/core/c/d$f;-><init>()V

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseArray;->append(ILjava/lang/Object;)V

    iget-object v0, p0, Lcom/kwad/components/core/c/d;->Ii:Landroid/util/SparseArray;

    new-instance v1, Lcom/kwad/components/core/c/d$e;

    invoke-direct {v1}, Lcom/kwad/components/core/c/d$e;-><init>()V

    const/4 v2, 0x2

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseArray;->append(ILjava/lang/Object;)V

    iget-object v0, p0, Lcom/kwad/components/core/c/d;->Ii:Landroid/util/SparseArray;

    new-instance v1, Lcom/kwad/components/core/c/d$d;

    invoke-direct {v1}, Lcom/kwad/components/core/c/d$d;-><init>()V

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseArray;->append(ILjava/lang/Object;)V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/g/c;)Lcom/kwad/components/core/p/a;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Lcom/kwad/components/core/p/a;",
            ">(",
            "Lcom/kwad/sdk/g/c<",
            "TT;>;)TT;"
        }
    .end annotation

    invoke-interface {p0}, Lcom/kwad/sdk/g/c;->get()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/core/p/a;

    return-object p0
.end method

.method private static varargs a([Ljava/util/List;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    array-length v1, p0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_1

    aget-object v4, p0, v3

    invoke-interface {v0, v4}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    new-instance p0, Lcom/kwad/components/core/c/d$a;

    invoke-direct {p0, v2}, Lcom/kwad/components/core/c/d$a;-><init>(B)V

    invoke-static {v0, p0}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    new-instance p0, Ljava/util/ArrayList;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    new-instance v1, Ljava/util/HashSet;

    invoke-direct {v1}, Ljava/util/HashSet;-><init>()V

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    invoke-interface {v1, v5}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_2

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    invoke-interface {p0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_3
    return-object p0
.end method

.method private static a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/sdk/core/network/p;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/components/core/p/a/a;",
            "Lcom/kwad/sdk/core/network/p<",
            "Lcom/kwad/components/core/p/a;",
            "Lcom/kwad/components/core/response/model/AdResultData;",
            ">;)V"
        }
    .end annotation

    new-instance v0, Lcom/kwad/components/core/c/d$1;

    iget-object v1, p0, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    invoke-direct {v0, v1, p0}, Lcom/kwad/components/core/c/d$1;-><init>(Lcom/kwad/components/core/p/a/b;Lcom/kwad/components/core/p/a/a;)V

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/c/d;)Z
    .locals 0

    invoke-static {}, Lcom/kwad/components/core/c/d;->mk()Z

    move-result p0

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/core/c/d;)Lcom/kwad/components/core/c/c;
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/c/d;->ml()Lcom/kwad/components/core/c/c;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/sdk/g/c;)Lcom/kwad/components/core/p/a;
    .locals 0

    invoke-static {p0}, Lcom/kwad/components/core/c/d;->a(Lcom/kwad/sdk/g/c;)Lcom/kwad/components/core/p/a;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b([Ljava/util/List;)Ljava/util/List;
    .locals 0

    invoke-static {p0}, Lcom/kwad/components/core/c/d;->a([Ljava/util/List;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/core/p/a/a;Lcom/kwad/sdk/core/network/p;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/components/core/c/d;->a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/sdk/core/network/p;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/core/c/d;)Landroid/util/SparseArray;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/c/d;->Ii:Landroid/util/SparseArray;

    return-object p0
.end method

.method private static d(Lcom/kwad/components/core/p/a/a;)Lcom/kwad/components/core/response/model/AdResultData;
    .locals 8

    invoke-static {}, Lcom/kwad/components/core/c/a;->mg()Lcom/kwad/components/core/c/a;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/core/p/a/a;->getAdNum()I

    move-result v2

    invoke-virtual {p0}, Lcom/kwad/components/core/p/a/a;->getPosId()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0}, Lcom/kwad/components/core/p/a/a;->getPosId()J

    move-result-wide v4

    invoke-static {v4, v5}, Lcom/kwad/components/core/c/e;->p(J)Lcom/kwad/components/core/c/e;

    move-result-object p0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    const-wide/16 v6, 0x3e8

    div-long/2addr v4, v6

    invoke-virtual {p0}, Lcom/kwad/components/core/c/e;->mr()I

    move-result p0

    invoke-virtual {v0, v3, v4, v5, p0}, Lcom/kwad/components/core/c/a;->b(Ljava/lang/String;JI)Ljava/util/List;

    move-result-object p0

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zT()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p0}, Lcom/kwad/components/core/c/d;->h(Ljava/util/List;)V

    :cond_1
    if-eqz p0, :cond_2

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    invoke-static {p0}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    invoke-static {v0, v2}, Ljava/lang/Math;->min(II)I

    move-result v0

    invoke-interface {p0, v1, v0}, Ljava/util/List;->subList(II)Ljava/util/List;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/core/c/g;->i(Ljava/util/List;)Lcom/kwad/components/core/response/model/AdResultData;

    move-result-object p0

    return-object p0

    :cond_2
    return-object v1
.end method

.method static synthetic e(Lcom/kwad/components/core/p/a/a;)Lcom/kwad/components/core/response/model/AdResultData;
    .locals 0

    invoke-static {p0}, Lcom/kwad/components/core/c/d;->d(Lcom/kwad/components/core/p/a/a;)Lcom/kwad/components/core/response/model/AdResultData;

    move-result-object p0

    return-object p0
.end method

.method private static h(Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/components/core/c/g;",
            ">;)V"
        }
    .end annotation

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/c/g;

    invoke-static {}, Lcom/kwad/components/core/c/f;->mu()Lcom/kwad/components/core/c/f;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/c/f;->a(Lcom/kwad/components/core/c/g;)Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "filterByMemCached contain: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/kwad/components/core/c/g;->mB()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AdCacheFetcherHolder"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {p0}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    :cond_2
    return-void
.end method

.method public static mj()Lcom/kwad/components/core/c/d;
    .locals 2

    sget-object v0, Lcom/kwad/components/core/c/d;->Ij:Lcom/kwad/components/core/c/d;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/core/c/d;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/core/c/d;->Ij:Lcom/kwad/components/core/c/d;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/c/d;

    invoke-direct {v1}, Lcom/kwad/components/core/c/d;-><init>()V

    sput-object v1, Lcom/kwad/components/core/c/d;->Ij:Lcom/kwad/components/core/c/d;

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
    sget-object v0, Lcom/kwad/components/core/c/d;->Ij:Lcom/kwad/components/core/c/d;

    return-object v0
.end method

.method private static mk()Z
    .locals 2

    sget-boolean v0, Lcom/kwad/components/core/c/d;->Ik:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    :try_start_0
    const-string v0, "com.kwad.devTools.PosConfigFetcher"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/components/core/c/d;->Ik:Z
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    sput-boolean v1, Lcom/kwad/components/core/c/d;->Ik:Z

    :goto_0
    sget-boolean v0, Lcom/kwad/components/core/c/d;->Ik:Z

    return v0
.end method

.method private ml()Lcom/kwad/components/core/c/c;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/c/d;->Ii:Landroid/util/SparseArray;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/c/c;

    return-object v0
.end method


# virtual methods
.method public final c(Lcom/kwad/components/core/p/a/a;)V
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->CW()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/c/d$2;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/core/c/d$2;-><init>(Lcom/kwad/components/core/c/d;Lcom/kwad/components/core/p/a/a;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    return-void
.end method
