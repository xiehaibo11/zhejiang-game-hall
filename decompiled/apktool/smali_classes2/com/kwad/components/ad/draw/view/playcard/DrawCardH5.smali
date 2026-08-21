.class public Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;
.super Landroid/widget/FrameLayout;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5$a;
    }
.end annotation


# instance fields
.field private dk:Landroid/animation/ValueAnimator;

.field private dm:Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5$a;

.field private dn:Landroid/widget/ImageView;

.field private do:Landroid/widget/TextView;

.field private dp:Landroid/widget/TextView;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mContext:Landroid/content/Context;

.field private mHeight:I

.field private mLogoView:Lcom/kwad/components/core/widget/KsLogoView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->D(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->D(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->D(Landroid/content/Context;)V

    return-void
.end method

.method private D(Landroid/content/Context;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mContext:Landroid/content/Context;

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_draw_card_h5:I

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_card_close:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dn:Landroid/widget/ImageView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_card_ad_desc:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->do:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_card_h5_open_btn:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dp:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_draw_h5_logo:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;)Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dm:Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5$a;

    return-object p0
.end method

.method private aE()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dk:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->removeAllListeners()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dk:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    :cond_0
    return-void
.end method

.method private aO()V
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mHeight:I

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->d(II)V

    return-void
.end method

.method private d(II)V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->aE()V

    invoke-static {p0, p1, p2}, Lcom/kwad/components/core/t/m;->b(Landroid/view/View;II)Landroid/animation/ValueAnimator;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dk:Landroid/animation/ValueAnimator;

    new-instance p2, Landroid/view/animation/DecelerateInterpolator;

    const/high16 v0, 0x40000000    # 2.0f

    invoke-direct {p2, v0}, Landroid/view/animation/DecelerateInterpolator;-><init>(F)V

    invoke-virtual {p1, p2}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dk:Landroid/animation/ValueAnimator;

    const-wide/16 v0, 0x12c

    invoke-virtual {p1, v0, v1}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dk:Landroid/animation/ValueAnimator;

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->start()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5$a;)V
    .locals 2

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object p2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dm:Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5$a;

    iget-object p2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->do:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dp:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dn:Landroid/widget/ImageView;

    invoke-virtual {p2, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dp:Landroid/widget/TextView;

    invoke-virtual {p2, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-virtual {p0, p0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/sdk/utils/k;->getScreenWidth(Landroid/content/Context;)I

    move-result p1

    iget-object p2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mContext:Landroid/content/Context;

    const/high16 v0, 0x41800000    # 16.0f

    invoke-static {p2, v0}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p2

    mul-int/lit8 p2, p2, 0x2

    sub-int/2addr p1, p2

    iget-object p2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mContext:Landroid/content/Context;

    const/high16 v0, 0x41200000    # 10.0f

    invoke-static {p2, v0}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p2

    mul-int/lit8 p2, p2, 0x2

    sub-int/2addr p1, p2

    const/high16 p2, -0x80000000

    invoke-static {p1, p2}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result p1

    const/4 p2, 0x0

    invoke-static {p2, p2}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result p2

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->do:Landroid/widget/TextView;

    invoke-virtual {v0, p1, p2}, Landroid/widget/TextView;->measure(II)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mContext:Landroid/content/Context;

    const/high16 p2, 0x42c80000    # 100.0f

    invoke-static {p1, p2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p1

    iget-object p2, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->do:Landroid/widget/TextView;

    invoke-virtual {p2}, Landroid/widget/TextView;->getMeasuredHeight()I

    move-result p2

    add-int/2addr p1, p2

    iput p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mHeight:I

    return-void
.end method

.method public final aM()V
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mHeight:I

    const/4 v1, 0x0

    invoke-direct {p0, v1, v0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->d(II)V

    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dn:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->aO()V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->dm:Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5$a;

    if-eqz p1, :cond_1

    invoke-interface {p1}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5$a;->at()V

    return-void

    :cond_0
    new-instance p1, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5$1;-><init>(Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    :cond_1
    return-void
.end method

.method public final release()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/view/playcard/DrawCardH5;->aE()V

    return-void
.end method
