.class final Lcom/kwad/components/core/offline/init/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/IAsync;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final execute(Ljava/lang/Runnable;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final runOnDefaultExecutor(Ljava/lang/Runnable;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final runOnUiThread(Ljava/lang/Runnable;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final runOnUiThreadDelay(Ljava/lang/Runnable;J)V
    .locals 0

    invoke-static {p1, p2, p3}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    return-void
.end method

.method public final schedule(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)V
    .locals 0

    invoke-static {p1, p2, p3, p4}, Lcom/kwad/sdk/utils/g;->schedule(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)V

    return-void
.end method
