.class final Lcom/kwad/components/ad/interstitial/d/e$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kG:Lcom/kwad/components/ad/interstitial/d/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final dC()V
    .locals 2

    const-string v0, "InterstitialHorizontalSwipe"

    const-string v1, "onRightSwiped: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->a(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setTranslationX(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/c;->cS()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->d(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/e;->c(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;->b(Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;)V

    return-void
.end method

.method public final dD()V
    .locals 3

    const-string v0, "InterstitialHorizontalSwipe"

    const-string v1, "onLeftSwiped: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->b(Lcom/kwad/components/ad/interstitial/d/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->a(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setAllCorner(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->e(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->f(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/components/core/page/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/page/c;->requestLayout()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->f(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/components/core/page/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/page/c;->oD()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->a(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->requestLayout()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->e(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    const/16 v1, 0x4a

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/utils/ac$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClicked()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$4;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/c;->cT()V

    return-void
.end method
