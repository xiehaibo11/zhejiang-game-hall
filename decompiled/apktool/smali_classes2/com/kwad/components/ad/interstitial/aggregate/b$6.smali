.class final Lcom/kwad/components/ad/interstitial/aggregate/b$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/interstitial/aggregate/c$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/aggregate/b;->cm()V
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onInterstitialAdLoad(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->f(Lcom/kwad/components/ad/interstitial/aggregate/b;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->g(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->f(Lcom/kwad/components/ad/interstitial/aggregate/b;)Ljava/util/List;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/interstitial/aggregate/a;->setAdTemplateList(Ljava/util/List;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->g(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/aggregate/a;->notifyDataSetChanged()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->a(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->f(Lcom/kwad/components/ad/interstitial/aggregate/b;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->setOffscreenPageLimit(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->a(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->h(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/support/v4/view/ViewPager$OnPageChangeListener;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->addOnPageChangeListener(Landroid/support/v4/view/ViewPager$OnPageChangeListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->i(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->d(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->a(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->setViewPager(Landroid/support/v4/view/ViewPager;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->d(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->k(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/core/widget/a/b;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->j(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/sdk/core/h/c;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/widget/a/b;->a(Lcom/kwad/sdk/core/h/c;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b$6;->hW:Lcom/kwad/components/ad/interstitial/aggregate/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->l(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/b/a;->J(Landroid/content/Context;)V

    :cond_0
    return-void
.end method
