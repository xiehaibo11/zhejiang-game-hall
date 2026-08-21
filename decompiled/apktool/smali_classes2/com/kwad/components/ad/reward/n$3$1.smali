.class final Lcom/kwad/components/ad/reward/n$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/n$3;->a(Lcom/kwad/components/core/p/d;Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic qu:Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;

.field final synthetic qw:Lcom/kwad/components/ad/reward/n$3;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/n$3;Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/n$3$1;->qw:Lcom/kwad/components/ad/reward/n$3;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/n$3$1;->qu:Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/n$3$1;->qu:Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;

    iget v0, v0, Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;->result:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/n$3$1;->qw:Lcom/kwad/components/ad/reward/n$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/n$3;->oB:Lcom/kwad/components/ad/reward/j;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/n$3$1;->qw:Lcom/kwad/components/ad/reward/n$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/n$3;->oB:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x2

    :goto_0
    iput v1, v0, Lcom/kwad/components/ad/reward/j;->pr:I

    iget-object v0, p0, Lcom/kwad/components/ad/reward/n$3$1;->qw:Lcom/kwad/components/ad/reward/n$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/n$3;->oB:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->onRewardVerify()V

    return-void
.end method
