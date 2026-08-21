.class final Lcom/kwad/components/ad/reward/n$2;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/n;->n(Lcom/kwad/components/ad/reward/j;)Lcom/kwad/sdk/core/network/p;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/components/core/p/d;",
        "Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic oB:Lcom/kwad/components/ad/reward/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/n$2;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/components/core/p/d;)V
    .locals 2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p1, Lcom/kwad/components/core/p/d;->PD:J

    iget-object p1, p0, Lcom/kwad/components/ad/reward/n$2;->oB:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/check/a;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/p/d;ILjava/lang/String;)V
    .locals 10

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/core/network/p;->onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    new-instance v0, Lcom/kwad/components/ad/reward/n$2$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/n$2$2;-><init>(Lcom/kwad/components/ad/reward/n$2;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p1, Lcom/kwad/components/core/p/d;->PD:J

    sub-long v6, v0, v2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/n$2;->oB:Lcom/kwad/components/ad/reward/j;

    iget-object v4, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v5, 0x1

    move v8, p2

    move-object v9, p3

    invoke-static/range {v4 .. v9}, Lcom/kwad/components/ad/reward/check/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJILjava/lang/String;)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/p/d;Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;)V
    .locals 10

    new-instance v0, Lcom/kwad/components/ad/reward/n$2$1;

    invoke-direct {v0, p0, p2}, Lcom/kwad/components/ad/reward/n$2$1;-><init>(Lcom/kwad/components/ad/reward/n$2;Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p1, Lcom/kwad/components/core/p/d;->PD:J

    sub-long v6, v0, v2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/n$2;->oB:Lcom/kwad/components/ad/reward/j;

    iget-object v4, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget v8, p2, Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;->result:I

    iget-object v9, p2, Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;->errorMsg:Ljava/lang/String;

    const/4 v5, 0x1

    invoke-static/range {v4 .. v9}, Lcom/kwad/components/ad/reward/check/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJILjava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/p/d;

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/components/ad/reward/n$2;->a(Lcom/kwad/components/core/p/d;ILjava/lang/String;)V

    return-void
.end method

.method public final synthetic onStartRequest(Lcom/kwad/sdk/core/network/g;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/p/d;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/n$2;->a(Lcom/kwad/components/core/p/d;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/p/d;

    check-cast p2, Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/n$2;->a(Lcom/kwad/components/core/p/d;Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;)V

    return-void
.end method
