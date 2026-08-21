.class public final Lcom/kwad/components/ad/reward/n;
.super Ljava/lang/Object;


# direct methods
.method public static a(ILcom/kwad/components/ad/reward/j;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/reward/n$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/reward/n$1;-><init>(ILcom/kwad/components/ad/reward/j;)V

    const/4 v1, 0x1

    if-ne p0, v1, :cond_0

    invoke-static {p1}, Lcom/kwad/components/ad/reward/n;->n(Lcom/kwad/components/ad/reward/j;)Lcom/kwad/sdk/core/network/p;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void

    :cond_0
    const/4 v1, 0x2

    if-ne p0, v1, :cond_1

    invoke-static {p1}, Lcom/kwad/components/ad/reward/n;->o(Lcom/kwad/components/ad/reward/j;)Lcom/kwad/sdk/core/network/p;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    :cond_1
    return-void
.end method

.method public static a(Lcom/kwad/components/ad/reward/j;JJJ)V
    .locals 7

    invoke-static {p0}, Lcom/kwad/components/ad/reward/n;->p(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    const-wide/16 v1, 0x0

    if-eqz v0, :cond_0

    iget-object v3, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v3

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/a;->cH(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v3

    goto :goto_0

    :cond_0
    move-wide v3, v1

    :goto_0
    iget-boolean v5, p0, Lcom/kwad/components/ad/reward/j;->ps:Z

    if-nez v5, :cond_2

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->mCheckExposureResult:Z

    if-eqz v0, :cond_2

    const-wide/16 v5, 0x320

    sub-long/2addr p3, v5

    sub-long/2addr p3, p5

    sub-long/2addr p3, v3

    cmp-long p1, p1, p3

    if-lez p1, :cond_2

    cmp-long p1, v3, v1

    if-lez p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cI(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    const/4 p2, 0x1

    if-eqz p1, :cond_1

    iput p2, p0, Lcom/kwad/components/ad/reward/j;->pr:I

    const/4 p1, 0x2

    invoke-static {p1, p0}, Lcom/kwad/components/ad/reward/n;->a(ILcom/kwad/components/ad/reward/j;)V

    goto :goto_1

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->onRewardVerify()V

    :goto_1
    iput-boolean p2, p0, Lcom/kwad/components/ad/reward/j;->ps:Z

    :cond_2
    return-void
.end method

.method private static n(Lcom/kwad/components/ad/reward/j;)Lcom/kwad/sdk/core/network/p;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/components/ad/reward/j;",
            ")",
            "Lcom/kwad/sdk/core/network/p<",
            "Lcom/kwad/components/core/p/d;",
            "Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;",
            ">;"
        }
    .end annotation

    new-instance v0, Lcom/kwad/components/ad/reward/n$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/n$2;-><init>(Lcom/kwad/components/ad/reward/j;)V

    return-object v0
.end method

.method private static o(Lcom/kwad/components/ad/reward/j;)Lcom/kwad/sdk/core/network/p;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/components/ad/reward/j;",
            ")",
            "Lcom/kwad/sdk/core/network/p<",
            "Lcom/kwad/components/core/p/d;",
            "Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;",
            ">;"
        }
    .end annotation

    new-instance v0, Lcom/kwad/components/ad/reward/n$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/n$3;-><init>(Lcom/kwad/components/ad/reward/j;)V

    return-object v0
.end method

.method private static p(Lcom/kwad/components/ad/reward/j;)Z
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->ps:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    iget-object p0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cJ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    return v1
.end method
