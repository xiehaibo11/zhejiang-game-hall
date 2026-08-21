.class public Lcom/kwad/components/ad/widget/DownloadProgressView;
.super Landroid/widget/FrameLayout;


# instance fields
.field protected Hm:Landroid/widget/TextView;

.field private Hn:I

.field private Ho:I

.field private Hp:I

.field private Hq:I

.field private Hr:Landroid/graphics/drawable/Drawable;

.field private Hs:Landroid/graphics/drawable/Drawable;

.field private Ht:Ljava/lang/String;

.field protected cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

.field private final cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

.field protected mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field protected mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/widget/DownloadProgressView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/ad/widget/DownloadProgressView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 1

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v0

    invoke-direct {p0, v0, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    new-instance p3, Lcom/kwad/components/ad/widget/DownloadProgressView$2;

    invoke-direct {p3, p0}, Lcom/kwad/components/ad/widget/DownloadProgressView$2;-><init>(Lcom/kwad/components/ad/widget/DownloadProgressView;)V

    iput-object p3, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/widget/DownloadProgressView;->initAttrs(Landroid/content/Context;Landroid/util/AttributeSet;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/widget/DownloadProgressView;->initView()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/widget/DownloadProgressView;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Ht:Ljava/lang/String;

    return-object p0
.end method

.method private initAttrs(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 2

    sget-object v0, Lcom/kwad/sdk/R$styleable;->ksad_DownloadProgressView:[I

    invoke-virtual {p1, p2, v0}, Landroid/content/Context;->obtainStyledAttributes(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;

    move-result-object p1

    sget p2, Lcom/kwad/sdk/R$styleable;->ksad_DownloadProgressView_ksad_downloadTextColor:I

    const v0, -0x1c99a

    invoke-virtual {p1, p2, v0}, Landroid/content/res/TypedArray;->getColor(II)I

    move-result p2

    iput p2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hn:I

    sget p2, Lcom/kwad/sdk/R$styleable;->ksad_DownloadProgressView_ksad_downloadLeftTextColor:I

    const/4 v1, -0x1

    invoke-virtual {p1, p2, v1}, Landroid/content/res/TypedArray;->getColor(II)I

    move-result p2

    iput p2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Ho:I

    sget p2, Lcom/kwad/sdk/R$styleable;->ksad_DownloadProgressView_ksad_downloadRightTextColor:I

    invoke-virtual {p1, p2, v0}, Landroid/content/res/TypedArray;->getColor(II)I

    move-result p2

    iput p2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hp:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/widget/DownloadProgressView;->getContext()Landroid/content/Context;

    move-result-object p2

    const/high16 v0, 0x41300000    # 11.0f

    invoke-static {p2, v0}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p2

    sget v0, Lcom/kwad/sdk/R$styleable;->ksad_DownloadProgressView_ksad_downloadTextSize:I

    invoke-virtual {p1, v0, p2}, Landroid/content/res/TypedArray;->getDimensionPixelSize(II)I

    move-result p2

    iput p2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hq:I

    sget p2, Lcom/kwad/sdk/R$styleable;->ksad_DownloadProgressView_ksad_progressDrawable:I

    invoke-virtual {p1, p2}, Landroid/content/res/TypedArray;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hr:Landroid/graphics/drawable/Drawable;

    if-nez p2, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/widget/DownloadProgressView;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    sget v0, Lcom/kwad/sdk/R$drawable;->ksad_feed_download_progress:I

    invoke-virtual {p2, v0}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hr:Landroid/graphics/drawable/Drawable;

    :cond_0
    sget p2, Lcom/kwad/sdk/R$styleable;->ksad_DownloadProgressView_ksad_backgroundDrawable:I

    invoke-virtual {p1, p2}, Landroid/content/res/TypedArray;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hs:Landroid/graphics/drawable/Drawable;

    if-nez p2, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/ad/widget/DownloadProgressView;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    sget v0, Lcom/kwad/sdk/R$drawable;->ksad_feed_app_download_before_bg:I

    invoke-virtual {p2, v0}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hs:Landroid/graphics/drawable/Drawable;

    :cond_1
    sget p2, Lcom/kwad/sdk/R$styleable;->ksad_DownloadProgressView_ksad_downloadingFormat:I

    invoke-virtual {p1, p2}, Landroid/content/res/TypedArray;->getString(I)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Ht:Ljava/lang/String;

    if-nez p2, :cond_2

    const-string p2, "\u4e0b\u8f7d\u4e2d  %s%%"

    iput-object p2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Ht:Ljava/lang/String;

    :cond_2
    invoke-virtual {p1}, Landroid/content/res/TypedArray;->recycle()V

    return-void
.end method

.method private initView()V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/widget/DownloadProgressView;->getContext()Landroid/content/Context;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$layout;->ksad_download_progress_layout:I

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_progress_bar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/DownloadProgressView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/page/widget/TextProgressBar;

    iput-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    iget v1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hq:I

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setTextDimen(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    iget v1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Ho:I

    iget v2, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hp:I

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setTextColor(II)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    iget-object v1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hr:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setProgressDrawable(Landroid/graphics/drawable/Drawable;)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_normal_text:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/DownloadProgressView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    iget v1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hn:I

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    iget v1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hq:I

    int-to-float v1, v1

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1}, Landroid/widget/TextView;->setTextSize(IF)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hs:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_foreground_cover:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/DownloadProgressView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/widget/DownloadProgressView$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/widget/DownloadProgressView$1;-><init>(Lcom/kwad/components/ad/widget/DownloadProgressView;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method


# virtual methods
.method public final H(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cX:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->Hm:Landroid/widget/TextView;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    return-void
.end method

.method public getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/widget/DownloadProgressView;->cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    return-object v0
.end method
