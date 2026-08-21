.class final Lcom/kwad/components/ad/interstitial/d/e$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/e;->initContentView()V
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    const-string p1, "InterstitialHorizontalSwipe"

    const-string v0, "mGuideButtonLayout click: "

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->b(Lcom/kwad/components/ad/interstitial/d/e;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->a(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->setAllCorner(Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->e(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->f(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/components/core/page/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/page/c;->requestLayout()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->f(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/components/core/page/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/page/c;->oD()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->a(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/widget/KSFrameLayout;->requestLayout()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c;->cT()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->e(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/16 v0, 0x6e

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/utils/ac$a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClicked()V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/e;->d(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e$2;->kG:Lcom/kwad/components/ad/interstitial/d/e;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/e;->c(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;->b(Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;)V

    return-void
.end method
