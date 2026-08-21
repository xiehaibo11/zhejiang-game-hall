.class final Lcom/kwad/components/ad/interstitial/aggregate/b$2;
.super Lcom/kwad/sdk/core/h/d;


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


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-direct {p0}, Lcom/kwad/sdk/core/h/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final aK()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/core/h/d;->aK()V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-ge v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->v(Lcom/kwad/components/ad/interstitial/aggregate/b;)Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->d(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->d(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->cz()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->c(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/animation/ValueAnimator;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->c(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/animation/ValueAnimator;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->resume()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->b(Lcom/kwad/components/ad/interstitial/aggregate/b;Z)Z

    :cond_3
    return-void
.end method

.method public final aL()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/core/h/d;->aL()V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-ge v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->v(Lcom/kwad/components/ad/interstitial/aggregate/b;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->d(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->d(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->cy()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->c(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/animation/ValueAnimator;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->c(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/animation/ValueAnimator;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->pause()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$2;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->b(Lcom/kwad/components/ad/interstitial/aggregate/b;Z)Z

    :cond_3
    return-void
.end method
