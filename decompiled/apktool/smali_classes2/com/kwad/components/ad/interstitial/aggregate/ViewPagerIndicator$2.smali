.class final Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator$2;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->cx()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic iJ:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator$2;->iJ:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator$2;->iJ:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->a(Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;Z)Z

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator$2;->iJ:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->a(Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;)Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator$a;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator$2;->iJ:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->a(Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;)Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator$a;->cs()V

    :cond_0
    return-void
.end method
