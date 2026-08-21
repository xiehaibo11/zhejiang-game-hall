.class public final Lcom/kwad/components/ad/reward/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/b$a;
    }
.end annotation


# instance fields
.field private final oo:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/kwad/components/ad/reward/e/h;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/b;->oo:Ljava/util/Set;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/b;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/b;Lcom/kwad/components/core/playable/PlayableSource;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/b;->c(Lcom/kwad/components/core/playable/PlayableSource;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/b;Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V

    return-void
.end method

.method private b(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b;->oo:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/b;->oo:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/reward/e/h;

    invoke-interface {v1, p1, p2}, Lcom/kwad/components/ad/reward/e/h;->a(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private c(Lcom/kwad/components/core/playable/PlayableSource;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/b;->oo:Ljava/util/Set;

    invoke-interface {p1}, Ljava/util/Set;->size()I

    move-result p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/b;->oo:Ljava/util/Set;

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/e/h;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/h;->bT()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static fp()Lcom/kwad/components/ad/reward/b;
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/reward/b$a;->fs()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    return-object v0
.end method

.method private fr()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b;->oo:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/b;->oo:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/reward/e/h;

    invoke-interface {v1}, Lcom/kwad/components/ad/reward/e/h;->bS()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private static isMainThread()Z
    .locals 2

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/e/h;)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b;->oo:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/components/core/playable/PlayableSource;)V
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0}, Lcom/kwad/components/ad/reward/b;->c(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/reward/e/h;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b;->oo:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/core/playable/PlayableSource;)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->isMainThread()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/b;->c(Lcom/kwad/components/core/playable/PlayableSource;)V

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/components/ad/reward/b$3;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/reward/b$3;-><init>(Lcom/kwad/components/ad/reward/b;Lcom/kwad/components/core/playable/PlayableSource;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final c(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->isMainThread()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/components/ad/reward/b$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/components/ad/reward/b$1;-><init>(Lcom/kwad/components/ad/reward/b;Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final fq()V
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->isMainThread()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/b;->fr()V

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/components/ad/reward/b$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/b$2;-><init>(Lcom/kwad/components/ad/reward/b;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
