.class public final Lcom/kwad/components/core/offline/init/b;
.super Ljava/lang/Object;


# static fields
.field private static final IP:Ljava/util/concurrent/atomic/AtomicBoolean;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>()V

    sput-object v0, Lcom/kwad/components/core/offline/init/b;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method public static ah(Landroid/content/Context;)V
    .locals 0
    .annotation runtime Lcom/ksad/annotation/invoker/ForInvoker;
        methodId = "initOC"
    .end annotation

    invoke-static {p0}, Lcom/kwad/components/offline/adLive/a;->am(Landroid/content/Context;)V

    invoke-static {p0}, Lcom/kwad/components/offline/obiwan/a;->am(Landroid/content/Context;)V

    invoke-static {p0}, Lcom/kwad/components/offline/tk/b;->am(Landroid/content/Context;)V

    return-void
.end method

.method public static init(Landroid/content/Context;)V
    .locals 2

    sget-object v0, Lcom/kwad/components/core/offline/init/b;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    sget-object v0, Lcom/kwad/components/core/offline/init/b;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    invoke-static {}, Lcom/kwad/components/offline/api/OfflineHostProvider;->get()Lcom/kwad/components/offline/api/OfflineHostProvider;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/offline/init/a/g;

    invoke-direct {v1}, Lcom/kwad/components/core/offline/init/a/g;-><init>()V

    invoke-virtual {v0, p0, v1}, Lcom/kwad/components/offline/api/OfflineHostProvider;->init(Landroid/content/Context;Lcom/kwad/components/offline/api/core/IOfflineHostApi;)V

    new-instance v0, Lcom/kwad/components/core/offline/init/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/offline/init/b$1;-><init>(Landroid/content/Context;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method
