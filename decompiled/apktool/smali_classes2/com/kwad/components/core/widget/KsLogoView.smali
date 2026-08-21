.class public Lcom/kwad/components/core/widget/KsLogoView;
.super Landroid/widget/LinearLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/widget/KsLogoView$a;
    }
.end annotation


# instance fields
.field private YV:Z

.field YW:Landroid/widget/TextView;

.field YX:Landroid/widget/ImageView;

.field private YY:Lcom/kwad/components/core/widget/KsLogoView$a;

.field private ei:Lcom/kwad/sdk/core/imageloader/core/listener/SimpleImageLoadingListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/core/widget/KsLogoView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/core/widget/KsLogoView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    new-instance p1, Lcom/kwad/components/core/widget/KsLogoView$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/core/widget/KsLogoView$1;-><init>(Lcom/kwad/components/core/widget/KsLogoView;)V

    iput-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView;->ei:Lcom/kwad/sdk/core/imageloader/core/listener/SimpleImageLoadingListener;

    invoke-direct {p0}, Lcom/kwad/components/core/widget/KsLogoView;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Z)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    new-instance p1, Lcom/kwad/components/core/widget/KsLogoView$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/core/widget/KsLogoView$1;-><init>(Lcom/kwad/components/core/widget/KsLogoView;)V

    iput-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView;->ei:Lcom/kwad/sdk/core/imageloader/core/listener/SimpleImageLoadingListener;

    if-eqz p2, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    sget p2, Lcom/kwad/sdk/R$drawable;->ksad_splash_logo_bg:I

    invoke-virtual {p1, p2}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/KsLogoView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/core/widget/KsLogoView;->init()V

    return-void
.end method

.method public static a(Lcom/kwad/components/core/widget/KsLogoView;)Landroid/graphics/Bitmap;
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getTextView()Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/TextView;->getPaint()Landroid/text/TextPaint;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getVisibility()I

    move-result v2

    const/4 v3, 0x0

    if-nez v2, :cond_0

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    invoke-interface {v2}, Ljava/lang/CharSequence;->length()I

    move-result v2

    if-lez v2, :cond_0

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    invoke-interface {v2}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/text/TextPaint;->measureText(Ljava/lang/String;)F

    move-result v1

    float-to-double v1, v1

    invoke-static {v1, v2}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v1

    double-to-int v1, v1

    invoke-virtual {v0}, Landroid/widget/TextView;->getPaddingLeft()I

    move-result v2

    add-int/2addr v1, v2

    invoke-virtual {v0}, Landroid/widget/TextView;->getPaddingRight()I

    move-result v0

    add-int/2addr v1, v0

    goto :goto_0

    :cond_0
    move v1, v3

    :goto_0
    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getIcon()Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v2, 0x41900000    # 18.0f

    invoke-static {v0, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v0

    goto :goto_1

    :cond_1
    move v0, v3

    :goto_1
    add-int/2addr v1, v0

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v2, 0x41800000    # 16.0f

    invoke-static {v0, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v0

    invoke-virtual {p0, v1, v0}, Lcom/kwad/components/core/widget/KsLogoView;->measure(II)V

    invoke-virtual {p0, v3, v3, v1, v0}, Lcom/kwad/components/core/widget/KsLogoView;->layout(IIII)V

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getWidth()I

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getHeight()I

    move-result v1

    sget-object v2, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {v0, v1, v2}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v0

    new-instance v1, Landroid/graphics/Canvas;

    invoke-direct {v1, v0}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    invoke-virtual {v1, v3}, Landroid/graphics/Canvas;->drawColor(I)V

    invoke-virtual {p0, v1}, Lcom/kwad/components/core/widget/KsLogoView;->draw(Landroid/graphics/Canvas;)V

    return-object v0
.end method

.method static synthetic b(Lcom/kwad/components/core/widget/KsLogoView;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/widget/KsLogoView;->su()V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/core/widget/KsLogoView;)Lcom/kwad/components/core/widget/KsLogoView$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/widget/KsLogoView;->YY:Lcom/kwad/components/core/widget/KsLogoView$a;

    return-object p0
.end method

.method private init()V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getContext()Landroid/content/Context;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$layout;->ksad_logo_layout:I

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_logo_text:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/widget/KsLogoView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/core/widget/KsLogoView;->YW:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_logo_icon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/widget/KsLogoView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/core/widget/KsLogoView;->YX:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iput-boolean v0, p0, Lcom/kwad/components/core/widget/KsLogoView;->YV:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/widget/KsLogoView;->YX:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$drawable;->ksad_logo_gray:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/KsLogoView;->YW:Landroid/widget/TextView;

    const v1, -0x636364

    :goto_1
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/widget/KsLogoView;->YX:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$drawable;->ksad_logo_white:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/KsLogoView;->YW:Landroid/widget/TextView;

    const v1, -0x66000001

    goto :goto_1
.end method

.method private su()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsLogoView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    iget-boolean v1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YV:Z

    if-eqz v1, :cond_0

    sget v1, Lcom/kwad/sdk/R$drawable;->ksad_logo_gray:I

    goto :goto_0

    :cond_0
    sget v1, Lcom/kwad/sdk/R$drawable;->ksad_logo_white:I

    :goto_0
    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YX:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    return-void
.end method


# virtual methods
.method public final aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 6

    sget v0, Lcom/kwad/sdk/R$id;->ksad_logo_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/widget/KsLogoView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    iget-boolean v2, p0, Lcom/kwad/components/core/widget/KsLogoView;->YV:Z

    if-eqz v2, :cond_0

    iget-object v2, v1, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v2, v2, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adGrayMarkIcon:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object v2, v1, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v2, v2, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adMarkIcon:Ljava/lang/String;

    :goto_0
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_1

    iget-object v3, v1, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v3, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceDescription:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YW:Landroid/widget/TextView;

    invoke-virtual {p1, v4}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YW:Landroid/widget/TextView;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->av(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YX:Landroid/widget/ImageView;

    invoke-virtual {p1, v4}, Landroid/widget/ImageView;->setVisibility(I)V

    invoke-direct {p0}, Lcom/kwad/components/core/widget/KsLogoView;->su()V

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YY:Lcom/kwad/components/core/widget/KsLogoView$a;

    if-eqz p1, :cond_4

    :goto_1
    invoke-interface {p1}, Lcom/kwad/components/core/widget/KsLogoView$a;->kh()V

    goto :goto_3

    :cond_1
    iget-object v3, v1, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v3, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceDescription:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/16 v5, 0x8

    if-nez v3, :cond_2

    iget-object v3, p0, Lcom/kwad/components/core/widget/KsLogoView;->YW:Landroid/widget/TextView;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->av(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YW:Landroid/widget/TextView;

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setVisibility(I)V

    goto :goto_2

    :cond_2
    iget-object v1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YW:Landroid/widget/TextView;

    invoke-virtual {v1, v5}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YW:Landroid/widget/TextView;

    const-string v3, ""

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :goto_2
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    iget-object v1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YX:Landroid/widget/ImageView;

    iget-object v3, p0, Lcom/kwad/components/core/widget/KsLogoView;->ei:Lcom/kwad/sdk/core/imageloader/core/listener/SimpleImageLoadingListener;

    invoke-static {v1, v2, p1, v3}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadFeeImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;)V

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YX:Landroid/widget/ImageView;

    invoke-virtual {p1, v4}, Landroid/widget/ImageView;->setVisibility(I)V

    goto :goto_3

    :cond_3
    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YX:Landroid/widget/ImageView;

    invoke-virtual {p1, v5}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YX:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YY:Lcom/kwad/components/core/widget/KsLogoView$a;

    if-eqz p1, :cond_4

    goto :goto_1

    :cond_4
    :goto_3
    invoke-virtual {v0, v4}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method

.method public getIcon()Landroid/widget/ImageView;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/widget/KsLogoView;->YX:Landroid/widget/ImageView;

    return-object v0
.end method

.method public getTextView()Landroid/widget/TextView;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/widget/KsLogoView;->YW:Landroid/widget/TextView;

    return-object v0
.end method

.method public setLogoLoadFinishListener(Lcom/kwad/components/core/widget/KsLogoView$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView;->YY:Lcom/kwad/components/core/widget/KsLogoView$a;

    return-void
.end method
