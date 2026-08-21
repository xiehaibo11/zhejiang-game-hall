.class final Lcom/kwad/components/ad/interstitial/aggregate/b$3;
.super Landroid/support/v4/view/ViewPager$SimpleOnPageChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/aggregate/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

.field private hX:I


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-direct {p0}, Landroid/support/v4/view/ViewPager$SimpleOnPageChangeListener;-><init>()V

    const/4 p1, 0x0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hX:I

    return-void
.end method


# virtual methods
.method public final onPageScrolled(IFI)V
    .locals 0

    const/4 p1, 0x0

    cmpl-float p1, p2, p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->t(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;->getVisibility()I

    move-result p1

    const/16 p2, 0x8

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->t(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;->clearAnimation()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->t(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;->setVisibility(I)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->u(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->u(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;->clearAnimation()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->u(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public final onPageSelected(I)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->a(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->x(I)Lcom/kwad/components/ad/interstitial/f/c;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/f/c;->es()V

    :cond_0
    iget v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hX:I

    if-eq v0, p1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->f(Lcom/kwad/components/ad/interstitial/aggregate/b;)Ljava/util/List;

    move-result-object v0

    iget v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hX:I

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-wide/16 v1, -0x1

    const/4 v3, 0x0

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;JLorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->a(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    move-result-object v0

    iget v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hX:I

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->x(I)Lcom/kwad/components/ad/interstitial/f/c;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/f/c;->et()V

    :cond_1
    iput p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$3;->hX:I

    return-void
.end method
