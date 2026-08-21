.class public final Lcom/kwad/components/ad/KsAdLoadManager;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/KsAdLoadManager$Holder;
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/KsAdLoadManager;-><init>()V

    return-void
.end method

.method public static M()Lcom/kwad/components/ad/KsAdLoadManager;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/KsAdLoadManager$Holder;->INSTANCE:Lcom/kwad/components/ad/KsAdLoadManager$Holder;

    invoke-static {v0}, Lcom/kwad/components/ad/KsAdLoadManager$Holder;->access$100(Lcom/kwad/components/ad/KsAdLoadManager$Holder;)Lcom/kwad/components/ad/KsAdLoadManager;

    move-result-object v0

    return-object v0
.end method

.method public static a(Lcom/kwad/components/core/p/a/a;)V
    .locals 1

    invoke-static {p0}, Lcom/kwad/components/ad/adbit/c;->b(Lcom/kwad/components/core/p/a/a;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/components/core/c/d;->mj()Lcom/kwad/components/core/c/d;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/c/d;->c(Lcom/kwad/components/core/p/a/a;)V

    return-void
.end method


# virtual methods
.method public final declared-synchronized a(Ljava/lang/Object;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(TT;)V"
        }
    .end annotation

    monitor-enter p0

    :try_start_0
    invoke-static {}, Lcom/kwad/components/core/c/f;->mu()Lcom/kwad/components/core/c/f;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/c/f;->add(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/util/List<",
            "TT;>;)V"
        }
    .end annotation

    monitor-enter p0

    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    invoke-static {}, Lcom/kwad/components/core/c/f;->mu()Lcom/kwad/components/core/c/f;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/c/f;->add(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
