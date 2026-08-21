.class final Lcom/kwad/sdk/core/threads/GlobalThreadPools$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/threads/GlobalThreadPools;->Da()Ljava/util/concurrent/ScheduledExecutorService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final De()Ljava/util/concurrent/ExecutorService;
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$d;

    const/4 v1, 0x5

    const-string v2, "async-schedule"

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$d;-><init>(ILjava/lang/String;)V

    new-instance v1, Lcom/kwad/sdk/core/threads/a/a;

    const/4 v2, 0x1

    invoke-direct {v1, v2, v0}, Lcom/kwad/sdk/core/threads/a/a;-><init>(ILjava/util/concurrent/ThreadFactory;)V

    return-object v1
.end method
