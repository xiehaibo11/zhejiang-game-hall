.class final Lcom/kwad/components/core/c/d$e$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/c/d$e;->c(Lcom/kwad/components/core/p/a/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Is:Lcom/kwad/components/core/c/d$e;

.field final synthetic bv:Lcom/kwad/components/core/p/a/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/c/d$e;Lcom/kwad/components/core/p/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/c/d$e$1;->Is:Lcom/kwad/components/core/c/d$e;

    iput-object p2, p0, Lcom/kwad/components/core/c/d$e$1;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/c/d$e$1;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-static {v0}, Lcom/kwad/components/core/c/d;->e(Lcom/kwad/components/core/p/a/a;)Lcom/kwad/components/core/response/model/AdResultData;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/response/model/AdResultData;->isAdResultDataEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/c/d$e$1;->bv:Lcom/kwad/components/core/p/a/a;

    const/4 v2, 0x1

    invoke-static {v1, v0, v2}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/components/core/response/model/AdResultData;Z)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/c/d$e$1;->bv:Lcom/kwad/components/core/p/a/a;

    new-instance v1, Lcom/kwad/components/core/c/d$b;

    invoke-direct {v1, v0}, Lcom/kwad/components/core/c/d$b;-><init>(Lcom/kwad/components/core/p/a/a;)V

    invoke-static {v0, v1}, Lcom/kwad/components/core/c/d;->b(Lcom/kwad/components/core/p/a/a;Lcom/kwad/sdk/core/network/p;)V

    return-void
.end method
