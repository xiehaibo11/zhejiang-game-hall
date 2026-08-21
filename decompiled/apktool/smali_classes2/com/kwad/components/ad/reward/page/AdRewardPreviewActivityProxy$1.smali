.class final Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->initView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$1;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 4

    sget-object p1, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz p1, :cond_0

    :try_start_0
    sget-object p1, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoPlayEnd()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$1;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$000(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/4 v0, 0x1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$1;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v1

    const/4 v3, 0x0

    invoke-static {p1, v0, v1, v2, v3}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJLorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$1;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->finish()V

    return-void
.end method
