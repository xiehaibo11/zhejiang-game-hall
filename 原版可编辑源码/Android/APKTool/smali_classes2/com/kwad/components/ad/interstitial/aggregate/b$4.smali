.class final Lcom/kwad/components/ad/interstitial/aggregate/b$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/interstitial/aggregate/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/aggregate/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/interstitial/d;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic hW:Lcom/kwad/components/ad/interstitial/aggregate/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$4;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final cl()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$4;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->b(Lcom/kwad/components/ad/interstitial/aggregate/b;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$4;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->c(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/animation/ValueAnimator;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$4;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->c(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/animation/ValueAnimator;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$4;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->d(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->setPlayProgressListener(Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$4;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->d(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$4;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->a(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->setScrollable(Z)V

    :cond_1
    return-void
.end method
