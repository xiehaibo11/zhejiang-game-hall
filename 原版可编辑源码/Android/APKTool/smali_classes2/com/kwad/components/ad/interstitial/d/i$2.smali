.class final Lcom/kwad/components/ad/interstitial/d/i$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/i;->initContentView()V
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    const-string p1, "InterstitialVerticalSwipe"

    const-string v0, "mGuideButtonLayout click: "

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/i;->b(Lcom/kwad/components/ad/interstitial/d/i;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/i;->a(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->setAllCorner(Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/i;->e(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/i;->f(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/components/core/page/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/page/c;->requestLayout()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/i;->f(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/components/core/page/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/page/c;->oD()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/i;->a(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/widget/KSFrameLayout;->requestLayout()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/i;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c;->cT()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/i;->d(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/i;->c(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->b(Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/i;->e(Lcom/kwad/components/ad/interstitial/d/i;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/16 v0, 0x6e

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/utils/ac$a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/i;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$2;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/i;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClicked()V

    :cond_0
    return-void
.end method
