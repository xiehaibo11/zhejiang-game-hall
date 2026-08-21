.class public abstract Lcom/kwad/components/ad/reward/widget/tailframe/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/widget/c;


# instance fields
.field protected Bo:Landroid/view/View;

.field protected Bp:Landroid/widget/ImageView;

.field private Bq:Lcom/kwad/components/ad/widget/tailframe/appbar/a;

.field private Br:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;

.field private Bs:Lcom/kwad/components/ad/reward/widget/tailframe/b;

.field private Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

.field private Bu:Landroid/view/View;

.field private Bv:I

.field private dC:Landroid/widget/TextView;

.field protected mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field protected mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field protected mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

.field private mReportExtData:Lorg/json/JSONObject;

.field private qx:Lcom/kwad/components/ad/reward/j;


# direct methods
.method public constructor <init>(I)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bv:I

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/widget/tailframe/a;)Lcom/kwad/components/ad/widget/tailframe/appbar/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bq:Lcom/kwad/components/ad/widget/tailframe/appbar/a;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/widget/tailframe/a;)Lcom/kwad/components/core/page/widget/TextProgressBar;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

    return-object p0
.end method

.method private b(Landroid/view/View;Z)V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    const/4 v1, 0x2

    const/4 v2, 0x1

    if-eqz v0, :cond_2

    if-eqz p2, :cond_0

    move p2, v2

    goto :goto_0

    :cond_0
    const/16 p2, 0x99

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bo:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bu:Landroid/view/View;

    if-ne p1, v4, :cond_1

    move v1, v2

    :cond_1
    invoke-virtual {v0, v2, v3, p2, v1}, Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;II)V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

    if-ne p1, v0, :cond_4

    :goto_1
    move v1, v2

    goto :goto_2

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->dC:Landroid/widget/TextView;

    if-ne p1, v0, :cond_4

    goto :goto_1

    :cond_4
    :goto_2
    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v0, v3}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v3, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v3}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-object v3, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, v3}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    const/4 v3, 0x0

    if-ne v1, v2, :cond_5

    move v4, v2

    goto :goto_3

    :cond_5
    move v4, v3

    :goto_3
    invoke-virtual {v0, v4}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-object v4, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

    if-ne p1, v4, :cond_6

    goto :goto_4

    :cond_6
    move v2, v3

    :goto_4
    invoke-virtual {v0, v2}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/reward/widget/tailframe/a$2;

    invoke-direct {v0, p0, p2}, Lcom/kwad/components/ad/reward/widget/tailframe/a$2;-><init>(Lcom/kwad/components/ad/reward/widget/tailframe/a;Z)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method private bindDownloadListener()V
    .locals 4

    new-instance v0, Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mReportExtData:Lorg/json/JSONObject;

    new-instance v3, Lcom/kwad/components/ad/reward/widget/tailframe/a$1;

    invoke-direct {v3, p0}, Lcom/kwad/components/ad/reward/widget/tailframe/a$1;-><init>(Lcom/kwad/components/ad/reward/widget/tailframe/a;)V

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/widget/tailframe/a;)Lcom/kwad/components/ad/reward/widget/tailframe/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bs:Lcom/kwad/components/ad/reward/widget/tailframe/b;

    return-object p0
.end method

.method private km()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bo:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iput-object v1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-void
.end method

.method private ko()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Br:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v3}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Br:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;->getH5OpenBtn()Landroid/widget/TextView;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->dC:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setClickable(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Br:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;->setVisibility(I)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->dC:Landroid/widget/TextView;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    return-void

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bq:Lcom/kwad/components/ad/widget/tailframe/appbar/a;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v3}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bq:Lcom/kwad/components/ad/widget/tailframe/appbar/a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bq:Lcom/kwad/components/ad/widget/tailframe/appbar/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->getTextProgressBar()Lcom/kwad/components/core/page/widget/TextProgressBar;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setClickable(Z)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->bindDownloadListener()V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bq:Lcom/kwad/components/ad/widget/tailframe/appbar/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->getBtnInstallContainer()Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bu:Landroid/view/View;

    invoke-virtual {v0, v2}, Landroid/view/View;->setClickable(Z)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bu:Landroid/view/View;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    return-void
.end method


# virtual methods
.method public D(Landroid/content/Context;)V
    .locals 3

    iget v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bv:I

    const/4 v1, 0x0

    const/4 v2, 0x0

    invoke-static {p1, v0, v1, v2}, Lcom/kwad/sdk/m/l;->a(Landroid/content/Context;ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bo:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_thumb_img:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bp:Landroid/widget/ImageView;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bo:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_tf_logo:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bo:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_app_tail_frame:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/ad/widget/tailframe/appbar/a;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bq:Lcom/kwad/components/ad/widget/tailframe/appbar/a;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bo:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_h5_tail_frame:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Br:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;

    return-void
.end method

.method public final a(Landroid/view/View;)V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->b(Landroid/view/View;Z)V

    return-void
.end method

.method public a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/components/ad/reward/widget/tailframe/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mReportExtData:Lorg/json/JSONObject;

    iput-object p3, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bs:Lcom/kwad/components/ad/reward/widget/tailframe/b;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->ko()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bo:Landroid/view/View;

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Landroid/view/View;->setClickable(Z)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bo:Landroid/view/View;

    invoke-direct {p1, p2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->b(Landroid/view/View;Z)V

    :cond_0
    return-void
.end method

.method public final d(ZZ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Br:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;->e(ZZ)V

    return-void
.end method

.method public final destroy()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bq:Lcom/kwad/components/ad/widget/tailframe/appbar/a;

    const/16 v1, 0x8

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->kq()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bq:Lcom/kwad/components/ad/widget/tailframe/appbar/a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->setVisibility(I)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Br:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;->kq()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Br:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;->setVisibility(I)V

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->km()V

    return-void
.end method

.method public final jV()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bq:Lcom/kwad/components/ad/widget/tailframe/appbar/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->kq()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Br:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameBarH5View;->kq()V

    :cond_1
    return-void
.end method

.method public final kn()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->Bo:Landroid/view/View;

    return-object v0
.end method

.method public final setCallerContext(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-void
.end method
