.class public final Lcom/kwad/components/ad/draw/b/b/b;
.super Lcom/kwad/components/ad/draw/a/a;


# instance fields
.field private ce:Landroid/view/ViewGroup;

.field private cv:Lcom/kwad/components/ad/draw/b/b/a$a;

.field private cy:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

.field private cz:Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/a/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/draw/b/b/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/b/b$1;-><init>(Lcom/kwad/components/ad/draw/b/b/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cv:Lcom/kwad/components/ad/draw/b/b/a$a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/b/b/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/b;->ao()V

    return-void
.end method

.method private ao()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/b;->aq()V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/b;->ar()V

    return-void
.end method

.method private aq()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->ce:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cy:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v2, Lcom/kwad/components/ad/draw/b/b/b$2;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/draw/b/b/b$2;-><init>(Lcom/kwad/components/ad/draw/b/b/b;)V

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cy:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cy:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->aM()V

    return-void
.end method

.method private ar()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->ce:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cz:Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v2, Lcom/kwad/components/ad/draw/b/b/b$3;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/draw/b/b/b$3;-><init>(Lcom/kwad/components/ad/draw/b/b/b;)V

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cz:Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cz:Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->aM()V

    return-void
.end method

.method private as()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/draw/a/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    const/16 v2, 0x1d

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/utils/ac$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;->onAdClicked()V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/draw/b/b/b;)Landroid/view/ViewGroup;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/b/b;->ce:Landroid/view/ViewGroup;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/draw/b/b/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/b;->as()V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bX:Lcom/kwad/components/ad/draw/b/b/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/b;->cv:Lcom/kwad/components/ad/draw/b/b/a$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/b/b/a;->a(Lcom/kwad/components/ad/draw/b/b/a$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cy:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cz:Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->setVisibility(I)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_normal_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->ce:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_card_app_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cy:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_card_h5_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cz:Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cy:Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardApp;->release()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->cz:Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->release()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bX:Lcom/kwad/components/ad/draw/b/b/a;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/b/b/a;->a(Lcom/kwad/components/ad/draw/b/b/a$a;)V

    return-void
.end method
