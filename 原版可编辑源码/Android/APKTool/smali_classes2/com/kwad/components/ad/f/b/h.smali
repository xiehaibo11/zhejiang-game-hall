.class public final Lcom/kwad/components/ad/f/b/h;
.super Lcom/kwad/components/ad/f/a/a;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private no:Landroid/view/ViewGroup;

.field private np:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/a/a;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/b/h;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/h;->eP()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/f/b/h;)Lcom/kwad/components/ad/f/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/b/h;->mV:Lcom/kwad/components/ad/f/a/b;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/f/b/h;)Lcom/kwad/components/ad/f/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/b/h;->mV:Lcom/kwad/components/ad/f/a/b;

    return-object p0
.end method

.method private eP()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/h;->np:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/h;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/f/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/h;->no:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/h;->no:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    return-void
.end method

.method private eR()V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/h;->no:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/h;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/f/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/f/b/h$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/f/b/h$2;-><init>(Lcom/kwad/components/ad/f/b/h;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method private notifyAdClick()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/h;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mE:Lcom/kwad/components/ad/f/d$a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/h;->no:Landroid/view/ViewGroup;

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/f/d$a;->l(Landroid/view/View;)V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->ah()V

    new-instance v0, Lcom/kwad/components/ad/f/b/h$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/b/h$1;-><init>(Lcom/kwad/components/ad/f/b/h;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/h;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/h;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/h;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/f/c/a;->a(Lcom/kwad/components/core/video/k;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/h;->no:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/h;->eR()V

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/h;->notifyAdClick()V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_complete_h5_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/h;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/h;->no:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_h5_open:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/h;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/h;->np:Landroid/widget/TextView;

    return-void
.end method
