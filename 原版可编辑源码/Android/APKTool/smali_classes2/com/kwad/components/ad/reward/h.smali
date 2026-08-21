.class public final Lcom/kwad/components/ad/reward/h;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/h$b;,
        Lcom/kwad/components/ad/reward/h$a;
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

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/h;-><init>()V

    return-void
.end method

.method public static fG()Lcom/kwad/components/ad/reward/h;
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/reward/h$a;->fH()Lcom/kwad/components/ad/reward/h;

    move-result-object v0

    return-object v0
.end method

.method private static q(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/h$b;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/h$b;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/h$b;->fI()V

    return-void
.end method


# virtual methods
.method public final p(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    const-string v0, "RewardCallbackVerifyHelper"

    const-string v1, "handleRewardVerify"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bD(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p1}, Lcom/kwad/components/ad/reward/h;->q(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void

    :cond_0
    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/q;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;)V

    return-void
.end method
