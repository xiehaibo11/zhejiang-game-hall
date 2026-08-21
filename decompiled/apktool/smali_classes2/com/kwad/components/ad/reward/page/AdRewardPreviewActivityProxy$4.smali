.class final Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


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

    iput-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 5

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getX()F

    move-result p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1100(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getX()F

    move-result v0

    cmpl-float p1, p1, v0

    const/4 v0, 0x0

    if-lez p1, :cond_0

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getX()F

    move-result p1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1100(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/widget/ImageView;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/ImageView;->getX()F

    move-result v1

    sub-float/2addr p1, v1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1100(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/widget/ImageView;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/ImageView;->getWidth()I

    move-result v1

    int-to-float v1, v1

    cmpg-float p1, p1, v1

    if-gez p1, :cond_0

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getY()F

    move-result p1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1100(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/widget/ImageView;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/ImageView;->getY()F

    move-result v1

    cmpl-float p1, p1, v1

    if-lez p1, :cond_0

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getY()F

    move-result p1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1100(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/widget/ImageView;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/ImageView;->getY()F

    move-result v1

    sub-float/2addr p1, v1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1100(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/widget/ImageView;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/ImageView;->getHeight()I

    move-result v1

    int-to-float v1, v1

    cmpg-float p1, p1, v1

    if-gez p1, :cond_0

    const-string p1, "AdRewardPreviewActivityProxy"

    const-string p2, "onClick backIcon"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v0

    :cond_0
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    invoke-static {p1, v1, v2}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1202(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;J)J

    goto :goto_0

    :cond_1
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_3

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide p1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1200(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)J

    move-result-wide v1

    sub-long/2addr p1, v1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1200(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-lez v1, :cond_2

    const-wide/16 v1, 0x3c

    cmp-long v1, p1, v1

    if-lez v1, :cond_2

    const-wide/16 v1, 0x1f4

    cmp-long p1, p1, v1

    if-gez p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$000(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/16 p2, 0x48

    iget-object v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1300(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-static {p1, p2, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/utils/ac$a;)V

    sget-object p1, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz p1, :cond_2

    sget-object p1, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onAdClicked()V

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$4;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {p1, v3, v4}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1202(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;J)J

    :cond_3
    :goto_0
    return v0
.end method
