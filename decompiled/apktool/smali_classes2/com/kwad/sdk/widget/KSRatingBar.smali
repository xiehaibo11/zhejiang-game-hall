.class public Lcom/kwad/sdk/widget/KSRatingBar;
.super Landroid/widget/LinearLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/widget/KSRatingBar$a;
    }
.end annotation


# instance fields
.field private aLT:Z

.field private aLU:Z

.field private aLV:I

.field private aLW:I

.field private aLX:Lcom/kwad/sdk/widget/KSRatingBar$a;

.field private aLY:F

.field private aLZ:F

.field private aMa:F

.field private aMb:Landroid/graphics/drawable/Drawable;

.field private aMc:Landroid/graphics/drawable/Drawable;

.field private aMd:Landroid/graphics/drawable/Drawable;

.field private aMe:Z

.field private y:I


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 4

    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/widget/KSRatingBar;->y:I

    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMe:Z

    invoke-virtual {p0, v1}, Lcom/kwad/sdk/widget/KSRatingBar;->setOrientation(I)V

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/KSRatingBar;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    sget v3, Lcom/kwad/sdk/R$drawable;->ksad_reward_apk_stars_divider:I

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/kwad/sdk/widget/KSRatingBar;->setDividerDrawable(Landroid/graphics/drawable/Drawable;)V

    const/4 v2, 0x2

    invoke-virtual {p0, v2}, Lcom/kwad/sdk/widget/KSRatingBar;->setShowDividers(I)V

    sget-object v2, Lcom/kwad/sdk/R$styleable;->ksad_KSRatingBar:[I

    invoke-virtual {p1, p2, v2}, Landroid/content/Context;->obtainStyledAttributes(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;

    move-result-object p2

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSRatingBar_ksad_starHalf:I

    invoke-virtual {p2, v2}, Landroid/content/res/TypedArray;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v2

    iput-object v2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMd:Landroid/graphics/drawable/Drawable;

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSRatingBar_ksad_starEmpty:I

    invoke-virtual {p2, v2}, Landroid/content/res/TypedArray;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v2

    iput-object v2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMb:Landroid/graphics/drawable/Drawable;

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSRatingBar_ksad_starFill:I

    invoke-virtual {p2, v2}, Landroid/content/res/TypedArray;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v2

    iput-object v2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMc:Landroid/graphics/drawable/Drawable;

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSRatingBar_ksad_starImageWidth:I

    const/high16 v3, 0x42700000    # 60.0f

    invoke-virtual {p2, v2, v3}, Landroid/content/res/TypedArray;->getDimension(IF)F

    move-result v2

    iput v2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLY:F

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSRatingBar_ksad_starImageHeight:I

    const/high16 v3, 0x42f00000    # 120.0f

    invoke-virtual {p2, v2, v3}, Landroid/content/res/TypedArray;->getDimension(IF)F

    move-result v2

    iput v2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLZ:F

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSRatingBar_ksad_starImagePadding:I

    const/high16 v3, 0x41700000    # 15.0f

    invoke-virtual {p2, v2, v3}, Landroid/content/res/TypedArray;->getDimension(IF)F

    move-result v2

    iput v2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMa:F

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSRatingBar_ksad_totalStarCount:I

    const/4 v3, 0x5

    invoke-virtual {p2, v2, v3}, Landroid/content/res/TypedArray;->getInteger(II)I

    move-result v2

    iput v2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLV:I

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSRatingBar_ksad_starCount:I

    invoke-virtual {p2, v2, v3}, Landroid/content/res/TypedArray;->getInteger(II)I

    move-result v2

    iput v2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLW:I

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_KSRatingBar_ksad_clickable:I

    invoke-virtual {p2, v2, v0}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLT:Z

    sget v0, Lcom/kwad/sdk/R$styleable;->ksad_KSRatingBar_ksad_halfstart:I

    invoke-virtual {p2, v0, v1}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result p2

    iput-boolean p2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLU:Z

    :goto_0
    iget p2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLV:I

    if-ge v1, p2, :cond_0

    iget-boolean p2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMe:Z

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/widget/KSRatingBar;->w(Landroid/content/Context;Z)Landroid/widget/ImageView;

    move-result-object p2

    new-instance v0, Lcom/kwad/sdk/widget/KSRatingBar$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/widget/KSRatingBar$1;-><init>(Lcom/kwad/sdk/widget/KSRatingBar;)V

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {p0, p2}, Lcom/kwad/sdk/widget/KSRatingBar;->addView(Landroid/view/View;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    iget p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLW:I

    int-to-float p1, p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/widget/KSRatingBar;->setStar(F)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/sdk/widget/KSRatingBar;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLT:Z

    return p0
.end method

.method static synthetic b(Lcom/kwad/sdk/widget/KSRatingBar;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLU:Z

    return p0
.end method

.method static synthetic c(Lcom/kwad/sdk/widget/KSRatingBar;)I
    .locals 0

    iget p0, p0, Lcom/kwad/sdk/widget/KSRatingBar;->y:I

    return p0
.end method

.method static synthetic d(Lcom/kwad/sdk/widget/KSRatingBar;)Lcom/kwad/sdk/widget/KSRatingBar$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLX:Lcom/kwad/sdk/widget/KSRatingBar$a;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/sdk/widget/KSRatingBar;)I
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/widget/KSRatingBar;->y:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->y:I

    return v0
.end method

.method private w(Landroid/content/Context;Z)Landroid/widget/ImageView;
    .locals 3

    new-instance v0, Landroid/widget/ImageView;

    invoke-direct {v0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    iget v1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLY:F

    invoke-static {v1}, Ljava/lang/Math;->round(F)I

    move-result v1

    iget v2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLZ:F

    invoke-static {v2}, Ljava/lang/Math;->round(F)I

    move-result v2

    invoke-direct {p1, v1, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMa:F

    invoke-static {p1}, Ljava/lang/Math;->round(F)I

    move-result p1

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1, p1, v1}, Landroid/widget/ImageView;->setPadding(IIII)V

    if-eqz p2, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMb:Landroid/graphics/drawable/Drawable;

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMc:Landroid/graphics/drawable/Drawable;

    :goto_0
    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    return-object v0
.end method


# virtual methods
.method public setImagePadding(F)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMa:F

    return-void
.end method

.method public setOnRatingChangeListener(Lcom/kwad/sdk/widget/KSRatingBar$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLX:Lcom/kwad/sdk/widget/KSRatingBar$a;

    return-void
.end method

.method public setStar(F)V
    .locals 6

    float-to-int v0, p1

    new-instance v1, Ljava/math/BigDecimal;

    invoke-static {p1}, Ljava/lang/Float;->toString(F)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1}, Ljava/math/BigDecimal;-><init>(Ljava/lang/String;)V

    new-instance p1, Ljava/math/BigDecimal;

    invoke-static {v0}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v2

    invoke-direct {p1, v2}, Ljava/math/BigDecimal;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/math/BigDecimal;->subtract(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;

    move-result-object p1

    invoke-virtual {p1}, Ljava/math/BigDecimal;->floatValue()F

    move-result p1

    iget v1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLV:I

    if-le v0, v1, :cond_0

    int-to-float v1, v1

    goto :goto_0

    :cond_0
    int-to-float v1, v0

    :goto_0
    const/4 v2, 0x0

    cmpg-float v3, v1, v2

    if-gez v3, :cond_1

    move v1, v2

    :cond_1
    const/4 v3, 0x0

    :goto_1
    int-to-float v4, v3

    cmpg-float v4, v4, v1

    if-gez v4, :cond_2

    invoke-virtual {p0, v3}, Lcom/kwad/sdk/widget/KSRatingBar;->getChildAt(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/ImageView;

    iget-object v5, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMc:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v4, v5}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_2
    cmpl-float p1, p1, v2

    if-lez p1, :cond_4

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/widget/KSRatingBar;->getChildAt(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMd:Landroid/graphics/drawable/Drawable;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    iget p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLV:I

    add-int/lit8 p1, p1, -0x1

    :goto_2
    int-to-float v0, p1

    const/high16 v2, 0x3f800000    # 1.0f

    add-float/2addr v2, v1

    cmpl-float v0, v0, v2

    if-ltz v0, :cond_3

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/widget/KSRatingBar;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iget-object v2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMb:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    add-int/lit8 p1, p1, -0x1

    goto :goto_2

    :cond_3
    return-void

    :cond_4
    iget p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLV:I

    add-int/lit8 p1, p1, -0x1

    :goto_3
    int-to-float v0, p1

    cmpl-float v0, v0, v1

    if-ltz v0, :cond_5

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/widget/KSRatingBar;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iget-object v2, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMb:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    add-int/lit8 p1, p1, -0x1

    goto :goto_3

    :cond_5
    return-void
.end method

.method public setStarEmptyDrawable(Landroid/graphics/drawable/Drawable;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMb:Landroid/graphics/drawable/Drawable;

    return-void
.end method

.method public setStarFillDrawable(Landroid/graphics/drawable/Drawable;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMc:Landroid/graphics/drawable/Drawable;

    return-void
.end method

.method public setStarHalfDrawable(Landroid/graphics/drawable/Drawable;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aMd:Landroid/graphics/drawable/Drawable;

    return-void
.end method

.method public setStarImageHeight(F)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLZ:F

    return-void
.end method

.method public setStarImageWidth(F)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLY:F

    return-void
.end method

.method public setTotalStarCount(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLV:I

    return-void
.end method

.method public setmClickable(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/KSRatingBar;->aLT:Z

    return-void
.end method
