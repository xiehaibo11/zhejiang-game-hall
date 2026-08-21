.class public Lcom/kwad/components/core/widget/KSCornerButton;
.super Landroid/widget/Button;


# instance fields
.field private mViewRCHelper:Lcom/kwad/sdk/widget/h;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/core/widget/KSCornerButton;->a(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/Button;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/widget/KSCornerButton;->a(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/Button;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/widget/KSCornerButton;->a(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/Button;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/widget/KSCornerButton;->a(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private a(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 4

    new-instance v0, Lcom/kwad/sdk/widget/h$a;

    invoke-direct {v0}, Lcom/kwad/sdk/widget/h$a;-><init>()V

    sget-object v1, Lcom/kwad/sdk/R$styleable;->ksad_KSCornerImageView:[I

    invoke-virtual {p1, p2, v1}, Landroid/content/Context;->obtainStyledAttributes(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSCornerImageView_ksad_leftTopCorner:I

    const/4 v3, 0x1

    invoke-virtual {v1, v2, v3}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v2

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/widget/h$a;->bS(Z)Lcom/kwad/sdk/widget/h$a;

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSCornerImageView_ksad_topRightCorner:I

    invoke-virtual {v1, v2, v3}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v2

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/widget/h$a;->bT(Z)Lcom/kwad/sdk/widget/h$a;

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSCornerImageView_ksad_rightBottomCorner:I

    invoke-virtual {v1, v2, v3}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v2

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/widget/h$a;->bU(Z)Lcom/kwad/sdk/widget/h$a;

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSCornerImageView_ksad_bottomLeftCorner:I

    invoke-virtual {v1, v2, v3}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v2

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/widget/h$a;->bV(Z)Lcom/kwad/sdk/widget/h$a;

    invoke-virtual {v1}, Landroid/content/res/TypedArray;->recycle()V

    new-instance v1, Lcom/kwad/sdk/widget/h;

    invoke-direct {v1, v0}, Lcom/kwad/sdk/widget/h;-><init>(Lcom/kwad/sdk/widget/h$a;)V

    iput-object v1, p0, Lcom/kwad/components/core/widget/KSCornerButton;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v1, p1, p2}, Lcom/kwad/sdk/widget/h;->initAttrs(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method protected dispatchDraw(Landroid/graphics/Canvas;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/widget/KSCornerButton;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/h;->beforeDispatchDraw(Landroid/graphics/Canvas;)V

    invoke-super {p0, p1}, Landroid/widget/Button;->dispatchDraw(Landroid/graphics/Canvas;)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/KSCornerButton;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/h;->afterDispatchDraw(Landroid/graphics/Canvas;)V

    return-void
.end method

.method public draw(Landroid/graphics/Canvas;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/widget/KSCornerButton;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/h;->beforeDraw(Landroid/graphics/Canvas;)V

    invoke-super {p0, p1}, Landroid/widget/Button;->draw(Landroid/graphics/Canvas;)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/KSCornerButton;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/h;->afterDraw(Landroid/graphics/Canvas;)V

    return-void
.end method

.method public getCornerConf()Lcom/kwad/sdk/widget/h$a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/widget/KSCornerButton;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/h;->getCornerConf()Lcom/kwad/sdk/widget/h$a;

    move-result-object v0

    return-object v0
.end method

.method protected onSizeChanged(IIII)V
    .locals 0

    invoke-super {p0, p1, p2, p3, p4}, Landroid/widget/Button;->onSizeChanged(IIII)V

    iget-object p3, p0, Lcom/kwad/components/core/widget/KSCornerButton;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {p3, p1, p2}, Lcom/kwad/sdk/widget/h;->onSizeChanged(II)V

    return-void
.end method

.method public setRadius(F)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/widget/KSCornerButton;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/h;->setRadius(F)V

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KSCornerButton;->postInvalidate()V

    return-void
.end method
