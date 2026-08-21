.class public final Lcom/kwad/components/ad/splashscreen/c/a/c;
.super Lcom/kwad/components/ad/splashscreen/c/e;

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/kwad/sdk/widget/c;


# instance fields
.field private Ej:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;

.field private Ek:Landroid/view/ViewGroup;

.field private El:Landroid/view/ViewGroup;

.field private Em:Landroid/widget/ImageView;

.field private En:Landroid/widget/TextView;

.field private Eo:Landroid/widget/TextView;

.field private Ep:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$a;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/a/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/a/c$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/a/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Ep:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method private s(Landroid/view/View;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Ek:Landroid/view/ViewGroup;

    const/4 v1, 0x2

    if-ne p1, v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    const/16 v2, 0x68

    invoke-virtual {v0, v1, p1, v2, v1}, Lcom/kwad/components/ad/splashscreen/h;->c(ILandroid/content/Context;II)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->El:Landroid/view/ViewGroup;

    if-ne p1, v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    const/16 v2, 0x1a

    const/4 v3, 0x1

    invoke-virtual {v0, v1, p1, v2, v3}, Lcom/kwad/components/ad/splashscreen/h;->c(ILandroid/content/Context;II)V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Em:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    const/16 v2, 0xf

    invoke-virtual {v0, v1, p1, v2, v1}, Lcom/kwad/components/ad/splashscreen/h;->c(ILandroid/content/Context;II)V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->En:Landroid/widget/TextView;

    if-ne p1, v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    const/16 v2, 0x10

    invoke-virtual {v0, v1, p1, v2, v1}, Lcom/kwad/components/ad/splashscreen/h;->c(ILandroid/content/Context;II)V

    return-void

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Eo:Landroid/widget/TextView;

    if-ne p1, v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    const/16 v2, 0x11

    invoke-virtual {v0, v1, p1, v2, v1}, Lcom/kwad/components/ad/splashscreen/h;->c(ILandroid/content/Context;II)V

    :cond_4
    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/c/a/c;->s(Landroid/view/View;)V

    return-void
.end method

.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Ej:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Ep:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->setOnViewClickListener(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->El:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->El:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->El:Landroid/view/ViewGroup;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->cL(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Ek:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Em:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->En:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Eo:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->El:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Ek:Landroid/view/ViewGroup;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->El:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Em:Landroid/widget/ImageView;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->El:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->En:Landroid/widget/TextView;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->El:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Eo:Landroid/widget/TextView;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    :cond_0
    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 0

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/c/a/c;->s(Landroid/view/View;)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_close_root:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Ej:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_end_card_giftbox_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Ek:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_endcard_actionbar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->El:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_icon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Em:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_appname:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->En:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_appdesc:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c;->Eo:Landroid/widget/TextView;

    return-void
.end method
