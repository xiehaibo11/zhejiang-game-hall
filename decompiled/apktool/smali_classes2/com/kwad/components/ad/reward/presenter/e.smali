.class public final Lcom/kwad/components/ad/reward/presenter/e;
.super Ljava/lang/Object;


# static fields
.field private static sd:J


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private static R(Ljava/lang/String;)Z
    .locals 4

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gO()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    const-string v0, "isEnable false"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gN()I

    move-result v0

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "JumpDirectMaxCount "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {p0, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-gtz v0, :cond_1

    return v1

    :cond_1
    invoke-static {}, Lcom/kwad/components/ad/reward/g/a;->cI()I

    move-result p0

    if-lt p0, v0, :cond_2

    return v1

    :cond_2
    const/4 p0, 0x0

    return p0
.end method

.method private static a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$b;)V
    .locals 8

    iget-object v3, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v4, p0, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->V(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v1

    const-wide/16 v5, 0x0

    cmp-long v5, v1, v5

    if-lez v5, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    int-to-long v5, v0

    cmp-long v0, v5, v1

    if-lez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v5, "\u89c2\u770b\u89c6\u9891"

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "s\u5373\u53ef\u83b7\u53d6\u5956\u52b1"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, "\u89c2\u770b\u5b8c\u6574\u89c6\u9891\u5373\u53ef\u83b7\u53d6\u5956\u52b1"

    :goto_0
    invoke-static {p0, v0}, Lcom/kwad/components/ad/reward/k;->a(Lcom/kwad/components/ad/reward/j;Ljava/lang/String;)Lcom/kwad/components/ad/reward/k$c;

    move-result-object v6

    new-instance v7, Lcom/kwad/components/ad/reward/presenter/e$5;

    move-object v0, v7

    move-object v1, p0

    move-object v2, v6

    move-object v5, p1

    invoke-direct/range {v0 .. v5}, Lcom/kwad/components/ad/reward/presenter/e$5;-><init>(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/components/ad/reward/k$b;)V

    invoke-static {p0, v6, v7}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)V

    return-void
.end method

.method public static a(Lcom/kwad/components/ad/reward/j;Z)V
    .locals 8

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    iget-boolean v2, p0, Lcom/kwad/components/ad/reward/j;->pj:Z

    if-nez v2, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    const-wide/16 v2, 0x0

    invoke-interface {p1, v2, v3}, Lcom/kwad/components/ad/reward/e/b;->onVideoSkipToEnd(J)V

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bF(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->q(Lcom/kwad/components/ad/reward/j;)V

    return-void

    :cond_0
    iget-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pl:Z

    if-eqz p1, :cond_1

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->s(Lcom/kwad/components/ad/reward/j;)V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/report/a;->i(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->release()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->fR()V

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->v(Lcom/kwad/components/ad/reward/j;)V

    return-void

    :cond_2
    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->r(Lcom/kwad/components/ad/reward/j;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->gc()Z

    move-result v2

    const/4 v3, 0x1

    if-nez v2, :cond_3

    iget-object v2, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/e;->x(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v2

    if-eqz v2, :cond_3

    move v2, v3

    goto :goto_0

    :cond_3
    const/4 v2, 0x0

    :goto_0
    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e;->r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v4

    if-nez v4, :cond_b

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_b

    iget-wide v4, p0, Lcom/kwad/components/ad/reward/j;->pF:J

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v6

    cmp-long v0, v4, v6

    if-gez v0, :cond_4

    goto :goto_3

    :cond_4
    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->pz:Z

    if-eqz v0, :cond_5

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->hw()V

    return-void

    :cond_5
    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->pG:Z

    if-nez v0, :cond_8

    iget-wide v4, p0, Lcom/kwad/components/ad/reward/j;->pF:J

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v6

    cmp-long v0, v4, v6

    if-ltz v0, :cond_6

    goto :goto_1

    :cond_6
    if-eqz p1, :cond_7

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->hw()V

    :cond_7
    return-void

    :cond_8
    :goto_1
    iget-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pG:Z

    if-eqz p1, :cond_9

    const/4 p1, 0x2

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/j;->K(I)V

    goto :goto_2

    :cond_9
    invoke-virtual {p0, v3}, Lcom/kwad/components/ad/reward/j;->K(I)V

    :goto_2
    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->z(Lcom/kwad/components/ad/reward/j;)V

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_a

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->q(Lcom/kwad/components/ad/reward/j;)V

    return-void

    :cond_a
    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->s(Lcom/kwad/components/ad/reward/j;)V

    invoke-static {p0}, Lcom/kwad/components/ad/reward/m;->m(Lcom/kwad/components/ad/reward/j;)V

    return-void

    :cond_b
    :goto_3
    if-eqz v2, :cond_c

    new-instance p1, Lcom/kwad/components/ad/reward/presenter/e$1;

    invoke-direct {p1, v1, p0}, Lcom/kwad/components/ad/reward/presenter/e$1;-><init>(Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/ad/reward/j;)V

    invoke-static {p0, p1}, Lcom/kwad/components/ad/reward/presenter/e;->a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$b;)V

    return-void

    :cond_c
    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_d

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->q(Lcom/kwad/components/ad/reward/j;)V

    return-void

    :cond_d
    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->s(Lcom/kwad/components/ad/reward/j;)V

    invoke-static {p0}, Lcom/kwad/components/ad/reward/m;->m(Lcom/kwad/components/ad/reward/j;)V

    return-void
.end method

.method private static a(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    const-string p1, "is playable return"

    :goto_0
    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    :cond_0
    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string p1, "is not Download type"

    goto :goto_0

    :cond_1
    invoke-static {p2}, Lcom/kwad/components/ad/reward/a/b;->k(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/response/b/d;->f(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)Z

    move-result p1

    if-eqz p1, :cond_2

    const-string p1, "isRewardLaunchAppTask"

    goto :goto_0

    :cond_2
    invoke-static {p2}, Lcom/kwad/components/ad/reward/j;->g(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_3

    const-string p1, "is Aggregation return"

    goto :goto_0

    :cond_3
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->q(Lcom/kwad/components/ad/reward/j;)V

    return-void
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->t(Lcom/kwad/components/ad/reward/j;)V

    return-void
.end method

.method static synthetic j(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->y(Lcom/kwad/components/ad/reward/j;)V

    return-void
.end method

.method private static q(Lcom/kwad/components/ad/reward/j;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/e$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/e$2;-><init>(Lcom/kwad/components/ad/reward/j;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static r(Lcom/kwad/components/ad/reward/j;)V
    .locals 8

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/j;->pE:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    const-wide/16 v4, 0x3e8

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-wide v6, p0, Lcom/kwad/components/ad/reward/j;->pE:J

    div-long/2addr v6, v4

    long-to-int v0, v6

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    iget-wide v6, p0, Lcom/kwad/components/ad/reward/j;->pF:J

    cmp-long v2, v6, v2

    if-eqz v2, :cond_1

    iget-wide v1, p0, Lcom/kwad/components/ad/reward/j;->pF:J

    div-long/2addr v1, v4

    long-to-int v1, v1

    :cond_1
    new-instance v2, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v2}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    const/16 v3, 0x45

    iput v3, v2, Lcom/kwad/sdk/core/report/z$b;->asV:I

    iput v0, v2, Lcom/kwad/sdk/core/report/z$b;->atl:I

    iput v1, v2, Lcom/kwad/sdk/core/report/z$b;->atm:I

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v1, 0x8d

    iget-object p0, p0, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    invoke-static {v0, v1, v2, p0}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V

    return-void
.end method

.method private static r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/a/b;->k(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/d;->f(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)Z

    move-result p0

    return p0
.end method

.method public static s(Lcom/kwad/components/ad/reward/j;)V
    .locals 3

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->po:Z

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->gd()V

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/h;->A(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/e$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/e$3;-><init>(Lcom/kwad/components/ad/reward/j;)V

    const-wide/16 v1, 0xc8

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    return-void

    :cond_0
    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->t(Lcom/kwad/components/ad/reward/j;)V

    return-void
.end method

.method private static s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p0

    return p0
.end method

.method private static t(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/l/d;->skipToEnd()V

    return-void
.end method

.method public static u(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->y(Lcom/kwad/components/ad/reward/j;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->hw()V

    return-void
.end method

.method public static v(Lcom/kwad/components/ad/reward/j;)V
    .locals 10

    const-string v0, "openAppMarket"

    const-string v1, "tryOpenAppMarket"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sget-wide v3, Lcom/kwad/components/ad/reward/presenter/e;->sd:J

    sub-long v3, v1, v3

    const-wide/16 v5, 0x12c

    cmp-long v3, v3, v5

    if-gez v3, :cond_0

    const-string p0, "\u8fde\u7eed\u70b9\u51fb"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    sput-wide v1, Lcom/kwad/components/ad/reward/presenter/e;->sd:J

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e;->R(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-void

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object p0, p0, Lcom/kwad/components/ad/reward/j;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/reward/presenter/e;->a(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v3

    if-eqz v3, :cond_2

    return-void

    :cond_2
    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->cz(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "tryOpenMiAppStore url\uff1a"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v4, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v4}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v5, 0xb6

    invoke-virtual {v4, v5}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v4

    const/16 v5, 0x8

    invoke-virtual {v4, v5}, Lcom/kwad/sdk/core/report/j;->cp(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v4

    invoke-static {p0, v3, v1}, Lcom/kwad/sdk/utils/d;->a(Landroid/content/Context;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v6

    const/4 v7, 0x0

    const-string v8, "autoLaunchMarket"

    const-string v9, "native_id"

    if-eqz v6, :cond_3

    invoke-static {v1, v9, v8, v4, v7}, Lcom/kwad/components/ad/reward/i/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    const/4 v0, 0x1

    invoke-static {v1, v0, v5}, Lcom/kwad/sdk/core/report/a;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;II)V

    invoke-static {p0}, Lcom/kwad/components/ad/reward/g/a;->J(Landroid/content/Context;)V

    return-void

    :cond_3
    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-static {p0, v3, v2}, Lcom/kwad/sdk/utils/d;->f(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-static {v1, v9, v8, v4, v7}, Lcom/kwad/components/ad/reward/i/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    const/4 v0, 0x0

    invoke-static {v1, v0, v5}, Lcom/kwad/sdk/core/report/a;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;II)V

    invoke-static {p0}, Lcom/kwad/components/ad/reward/g/a;->J(Landroid/content/Context;)V

    return-void

    :cond_4
    const-string p0, "tryOpenMiAppStore failed"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static w(Lcom/kwad/components/ad/reward/j;)V
    .locals 7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    iget-boolean v2, p0, Lcom/kwad/components/ad/reward/j;->pj:Z

    if-nez v2, :cond_1

    :cond_0
    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->y(Lcom/kwad/components/ad/reward/j;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->hw()V

    return-void

    :cond_1
    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e;->r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v2

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-nez v2, :cond_6

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_1

    :cond_2
    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    iget-boolean v2, p0, Lcom/kwad/components/ad/reward/j;->pG:Z

    if-nez v2, :cond_4

    iget-wide v5, p0, Lcom/kwad/components/ad/reward/j;->pF:J

    cmp-long v0, v5, v0

    if-ltz v0, :cond_3

    goto :goto_0

    :cond_3
    move v3, v4

    :cond_4
    :goto_0
    if-eqz v3, :cond_5

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->z(Lcom/kwad/components/ad/reward/j;)V

    :cond_5
    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->y(Lcom/kwad/components/ad/reward/j;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->hw()V

    goto :goto_3

    :cond_6
    :goto_1
    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->r(Lcom/kwad/components/ad/reward/j;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->gc()Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e;->x(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_7

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->po:Z

    if-nez v0, :cond_7

    goto :goto_2

    :cond_7
    move v3, v4

    :goto_2
    if-eqz v3, :cond_0

    invoke-static {p0}, Lcom/kwad/components/ad/reward/presenter/e;->x(Lcom/kwad/components/ad/reward/j;)V

    :goto_3
    return-void
.end method

.method private static x(Lcom/kwad/components/ad/reward/j;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    invoke-static {p0, v1}, Lcom/kwad/components/ad/reward/k;->a(Lcom/kwad/components/ad/reward/j;Ljava/lang/String;)Lcom/kwad/components/ad/reward/k$c;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/ad/reward/presenter/e$4;

    invoke-direct {v2, p0, v0}, Lcom/kwad/components/ad/reward/presenter/e$4;-><init>(Lcom/kwad/components/ad/reward/j;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {p0, v1, v2}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)V

    return-void
.end method

.method private static x(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ac(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    return p0
.end method

.method private static y(Lcom/kwad/components/ad/reward/j;)V
    .locals 1

    iget-object p0, p0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    const/4 v0, 0x0

    invoke-interface {p0, v0}, Lcom/kwad/components/ad/reward/e/b;->h(Z)V

    return-void
.end method

.method private static z(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p0}, Lcom/kwad/components/ad/reward/e/b;->onRewardVerify()V

    return-void
.end method
