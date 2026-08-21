.class public final Lcom/kwad/components/core/c/d$e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/c/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "e"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final c(Lcom/kwad/components/core/p/a/a;)V
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->CW()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/c/d$e$1;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/core/c/d$e$1;-><init>(Lcom/kwad/components/core/c/d$e;Lcom/kwad/components/core/p/a/a;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    return-void
.end method
