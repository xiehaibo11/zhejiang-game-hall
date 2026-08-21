.class public final Lcom/kwad/components/ad/interstitial/aggregate/a;
.super Landroid/support/v4/view/PagerAdapter;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/interstitial/aggregate/a$a;,
        Lcom/kwad/components/ad/interstitial/aggregate/a$b;
    }
.end annotation


# instance fields
.field private final dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

.field private final hG:Lcom/kwad/components/ad/interstitial/d;

.field private final hH:Z

.field private hI:Lcom/kwad/components/ad/interstitial/aggregate/a$b;

.field private hJ:Lcom/kwad/components/ad/interstitial/aggregate/a$a;

.field private final hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

.field private final mAdTemplateList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/interstitial/d;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V
    .locals 1

    invoke-direct {p0}, Landroid/support/v4/view/PagerAdapter;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->mAdTemplateList:Ljava/util/List;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->hG:Lcom/kwad/components/ad/interstitial/d;

    iput-object p3, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    iput-object p4, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cd(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    :goto_0
    iput-boolean p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->hH:Z

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/aggregate/a;)Lcom/kwad/components/ad/interstitial/aggregate/a$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->hJ:Lcom/kwad/components/ad/interstitial/aggregate/a$a;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/interstitial/aggregate/a$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->hJ:Lcom/kwad/components/ad/interstitial/aggregate/a$a;

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/interstitial/aggregate/a$b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->hI:Lcom/kwad/components/ad/interstitial/aggregate/a$b;

    return-void
.end method

.method public final destroyItem(Landroid/view/ViewGroup;ILjava/lang/Object;)V
    .locals 0

    instance-of p2, p3, Landroid/view/View;

    if-eqz p2, :cond_0

    check-cast p3, Landroid/view/View;

    invoke-virtual {p1, p3}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public final getCount()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->mAdTemplateList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    return v0
.end method

.method public final instantiateItem(Landroid/view/ViewGroup;I)Ljava/lang/Object;
    .locals 4

    new-instance v0, Lcom/kwad/components/ad/interstitial/f/c;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/interstitial/f/c;-><init>(Landroid/content/Context;)V

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    const/4 p1, 0x1

    if-lez p2, :cond_0

    move v1, p1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/f/c;->setAggregateAdView(Z)V

    if-nez p2, :cond_1

    new-instance v1, Lcom/kwad/components/ad/interstitial/aggregate/a$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/aggregate/a$1;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/a;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/f/c;->setAdConvertListener(Lcom/kwad/components/ad/interstitial/d/c$a;)V

    :cond_1
    if-lez p2, :cond_3

    const/4 v1, 0x7

    if-ne p2, p1, :cond_2

    iget-boolean p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->hH:Z

    if-eqz p1, :cond_2

    const/16 v1, 0x8

    :cond_2
    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/f/c;->setAggregateShowTriggerType(I)V

    :cond_3
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->mAdTemplateList:Ljava/util/List;

    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->hG:Lcom/kwad/components/ad/interstitial/d;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-virtual {v0, p1, v1, v2, v3}, Lcom/kwad/components/ad/interstitial/f/c;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/interstitial/d;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->hI:Lcom/kwad/components/ad/interstitial/aggregate/a$b;

    if-eqz p1, :cond_4

    invoke-interface {p1, v0, p2}, Lcom/kwad/components/ad/interstitial/aggregate/a$b;->a(Lcom/kwad/components/ad/interstitial/f/c;I)V

    :cond_4
    return-object v0
.end method

.method public final isViewFromObject(Landroid/view/View;Ljava/lang/Object;)Z
    .locals 0

    if-ne p1, p2, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final setAdTemplateList(Ljava/util/List;)V
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

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->mAdTemplateList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/a;->mAdTemplateList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    :cond_0
    return-void
.end method
