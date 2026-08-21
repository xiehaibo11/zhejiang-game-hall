.class public final Lcom/kwad/components/ad/reward/presenter/g;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/sdk/b/a;


# instance fields
.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final S(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aF(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_3

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->onRewardVerify()V

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->pause()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j;->fR()V

    :cond_3
    return-void
.end method

.method public final ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {}, Lcom/kwad/sdk/b/b;->yB()Lcom/kwad/sdk/b/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/b/b;->a(Lcom/kwad/sdk/b/a;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/sdk/b/b;->yB()Lcom/kwad/sdk/b/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/b/b;->b(Lcom/kwad/sdk/b/a;)V

    return-void
.end method
