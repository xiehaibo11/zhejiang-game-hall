.class final Lcom/kwad/components/ad/reward/presenter/b/b$3;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/b/b;->hV()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/components/core/liveEnd/a;",
        "Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic tN:Lcom/kwad/components/ad/reward/presenter/b/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/b/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/components/core/liveEnd/a;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/network/p;->onStartRequest(Lcom/kwad/sdk/core/network/g;)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/liveEnd/a;ILjava/lang/String;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/core/network/p;->onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/liveEnd/a;Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/core/network/p;->onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V

    iget-object p1, p2, Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;->mQLivePushEndInfo:Lcom/kwad/components/ad/reward/model/AdLiveEndResultData$AdLivePushEndInfo;

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/b/b;->m(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;

    invoke-direct {v0, p0, p2}, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;-><init>(Lcom/kwad/components/ad/reward/presenter/b/b$3;Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;)V

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->post(Ljava/lang/Runnable;)Z

    return-void
.end method


# virtual methods
.method public final synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/liveEnd/a;

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/components/ad/reward/presenter/b/b$3;->a(Lcom/kwad/components/core/liveEnd/a;ILjava/lang/String;)V

    return-void
.end method

.method public final synthetic onStartRequest(Lcom/kwad/sdk/core/network/g;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/liveEnd/a;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/b/b$3;->a(Lcom/kwad/components/core/liveEnd/a;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/liveEnd/a;

    check-cast p2, Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/b/b$3;->a(Lcom/kwad/components/core/liveEnd/a;Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;)V

    return-void
.end method
