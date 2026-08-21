.class final Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/aggregate/c$1;->a(Lcom/kwad/components/core/response/model/AdResultData;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ic:Lcom/kwad/components/ad/interstitial/aggregate/c$1;

.field final synthetic ie:Lcom/kwad/components/core/response/model/AdResultData;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/aggregate/c$1;Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;->ic:Lcom/kwad/components/ad/interstitial/aggregate/c$1;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-virtual {v1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v2, :cond_0

    iget-object v3, v2, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-nez v3, :cond_1

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;->ic:Lcom/kwad/components/ad/interstitial/aggregate/c$1;

    iget-object v3, v3, Lcom/kwad/components/ad/interstitial/aggregate/c$1;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-object v3, v2, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    :cond_1
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    new-instance v1, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2$1;

    invoke-direct {v1, p0, v0}, Lcom/kwad/components/ad/interstitial/aggregate/c$1$2$1;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/c$1$2;Ljava/util/List;)V

    invoke-static {v1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
