.class final Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView$1;
.super Landroid/support/v4/view/ViewPager$SimpleOnPageChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ir:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView$1;->ir:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

    invoke-direct {p0}, Landroid/support/v4/view/ViewPager$SimpleOnPageChangeListener;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageSelected(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView$1;->ir:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

    invoke-static {v0, p1}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->a(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;I)I

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView$1;->ir:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->a(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;)I

    move-result p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView$1;->ir:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->b(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;)I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView$1;->ir:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->c(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;)Landroid/widget/ImageView;

    move-result-object p1

    const/high16 v0, 0x3f000000    # 0.5f

    :goto_0
    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setAlpha(F)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView$1;->ir:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->d(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;)Landroid/widget/ImageView;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setAlpha(F)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView$1;->ir:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->c(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;)Landroid/widget/ImageView;

    move-result-object p1

    const/high16 v0, 0x3f800000    # 1.0f

    goto :goto_0
.end method
