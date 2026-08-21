.class public final Lcom/kwad/sdk/core/report/aa;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Lcom/kwad/sdk/core/report/g;",
        "R::",
        "Lcom/kwad/sdk/core/network/g;",
        ">",
        "Ljava/lang/Object;",
        "Ljava/lang/Runnable;"
    }
.end annotation


# instance fields
.field protected final aqE:Lcom/kwad/sdk/core/report/o;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/sdk/core/report/o<",
            "TT;>;"
        }
    .end annotation
.end field

.field protected final atG:Lcom/kwad/sdk/core/report/c;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/sdk/core/report/c<",
            "TT;TR;>;"
        }
    .end annotation
.end field

.field protected final atH:Ljava/util/concurrent/atomic/AtomicInteger;

.field protected final mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/report/o;Lcom/kwad/sdk/core/report/c;Ljava/util/concurrent/atomic/AtomicInteger;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/kwad/sdk/core/report/o<",
            "TT;>;",
            "Lcom/kwad/sdk/core/report/c<",
            "TT;TR;>;",
            "Ljava/util/concurrent/atomic/AtomicInteger;",
            ")V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/report/aa;->mContext:Landroid/content/Context;

    iput-object p2, p0, Lcom/kwad/sdk/core/report/aa;->aqE:Lcom/kwad/sdk/core/report/o;

    iput-object p3, p0, Lcom/kwad/sdk/core/report/aa;->atG:Lcom/kwad/sdk/core/report/c;

    iput-object p4, p0, Lcom/kwad/sdk/core/report/aa;->atH:Ljava/util/concurrent/atomic/AtomicInteger;

    return-void
.end method

.method private Cq()V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/core/report/aa;->aqE:Lcom/kwad/sdk/core/report/o;

    invoke-interface {v0}, Lcom/kwad/sdk/core/report/o;->BX()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/report/aa;->w(Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    const-class v1, Lcom/kwad/sdk/service/a/d;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/d;

    invoke-interface {v1, v0}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    return-void
.end method

.method private w(Ljava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "TT;>;)V"
        }
    .end annotation

    const/16 v0, 0xc8

    invoke-static {p1, v0}, Lcom/kwad/sdk/utils/z;->d(Ljava/util/List;I)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    new-instance v1, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v2, 0x0

    invoke-direct {v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    :goto_0
    if-ge v2, v0, :cond_0

    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/List;

    iget-object v4, p0, Lcom/kwad/sdk/core/report/aa;->atG:Lcom/kwad/sdk/core/report/c;

    invoke-virtual {v4, v3, v1}, Lcom/kwad/sdk/core/report/c;->a(Ljava/util/List;Ljava/util/concurrent/atomic/AtomicBoolean;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/aa;->atH:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-gtz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/report/aa;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isNetworkConnected(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/aa;->Cq()V

    :cond_0
    return-void
.end method
