.class final Lcom/kwad/components/ad/interstitial/d/i$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/i;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kY:Lcom/kwad/components/ad/interstitial/d/i;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/i;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final dY()V
    .locals 2

    const-string v0, "InterstitialVerticalSwipe"

    const-string v1, "onDownSwiped: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->a(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/i;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->aG(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setTranslationY(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/i;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/c;->cS()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->d(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/i;->c(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->b(Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;)V

    return-void
.end method

.method public final dZ()V
    .locals 3

    const-string v0, "InterstitialVerticalSwipe"

    const-string v1, "onTopSwiped: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->b(Lcom/kwad/components/ad/interstitial/d/i;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->a(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setAllCorner(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->e(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->f(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/components/core/page/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/page/c;->requestLayout()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->f(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/components/core/page/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/page/c;->oD()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->a(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->requestLayout()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->e(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    const/16 v1, 0x46

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/utils/ac$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/i;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/i;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClicked()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$4;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/i;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/c;->cT()V

    return-void
.end method
