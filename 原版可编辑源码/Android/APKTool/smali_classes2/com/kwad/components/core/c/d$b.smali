.class Lcom/kwad/components/core/c/d$b;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/c/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/components/core/p/a;",
        "Lcom/kwad/components/core/response/model/AdResultData;",
        ">;"
    }
.end annotation


# instance fields
.field private Ip:Lcom/kwad/components/core/p/a/a;


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/p/a/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/c/d$b;->Ip:Lcom/kwad/components/core/p/a/a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/c/d$b;Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/core/c/d$b;->f(Lcom/kwad/components/core/response/model/AdResultData;)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/p/a;Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/core/network/p;->onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V

    invoke-static {}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->CW()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/core/c/d$b$1;

    invoke-direct {v0, p0, p2}, Lcom/kwad/components/core/c/d$b$1;-><init>(Lcom/kwad/components/core/c/d$b;Lcom/kwad/components/core/response/model/AdResultData;)V

    invoke-interface {p1, v0}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    iget-object p1, p0, Lcom/kwad/components/core/c/d$b;->Ip:Lcom/kwad/components/core/p/a/a;

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/core/c/d$b;->a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/components/core/response/model/AdResultData;)Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/c/d$b;->Ip:Lcom/kwad/components/core/p/a/a;

    const/4 v0, 0x0

    invoke-static {p1, p2, v0}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/components/core/response/model/AdResultData;Z)V

    :cond_0
    return-void
.end method

.method private static f(Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getProceedTemplateList()Ljava/util/List;

    move-result-object v0

    invoke-static {}, Lcom/kwad/components/core/c/a;->mg()Lcom/kwad/components/core/c/a;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_0

    const/4 v2, 0x0

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getPosId()J

    move-result-wide v2

    invoke-static {v2, v3}, Lcom/kwad/components/core/c/e;->p(J)Lcom/kwad/components/core/c/e;

    move-result-object v2

    invoke-virtual {v1}, Lcom/kwad/components/core/c/a;->mh()V

    invoke-static {v2, p0}, Lcom/kwad/components/core/c/g;->a(Lcom/kwad/components/core/c/e;Lcom/kwad/components/core/response/model/AdResultData;)Ljava/util/List;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/kwad/components/core/c/a;->g(Ljava/util/List;)V

    invoke-static {v0}, Lcom/kwad/components/core/c/e;->I(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/c/e;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/kwad/components/core/c/a;->a(Lcom/kwad/components/core/c/e;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public a(Lcom/kwad/components/core/p/a;ILjava/lang/String;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/core/network/p;->onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/core/c/d$b;->Ip:Lcom/kwad/components/core/p/a/a;

    const/4 v0, 0x0

    invoke-static {p1, p2, p3, v0}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;ILjava/lang/String;Z)V

    return-void
.end method

.method protected a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/components/core/response/model/AdResultData;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/p/a;

    invoke-virtual {p0, p1, p2, p3}, Lcom/kwad/components/core/c/d$b;->a(Lcom/kwad/components/core/p/a;ILjava/lang/String;)V

    return-void
.end method

.method public synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/p/a;

    check-cast p2, Lcom/kwad/components/core/response/model/AdResultData;

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/c/d$b;->a(Lcom/kwad/components/core/p/a;Lcom/kwad/components/core/response/model/AdResultData;)V

    return-void
.end method
