.class public Lcom/tkay/basead/ui/CountDownView;
.super Landroid/view/View;


# instance fields
.field private a:Landroid/graphics/Paint;

.field private b:Landroid/graphics/Paint;

.field private c:Landroid/graphics/Paint;

.field private d:F

.field private e:F

.field private f:I

.field private g:I

.field private h:I

.field private i:I

.field private j:I

.field private k:I

.field private l:Landroid/graphics/RectF;

.field private m:F

.field private n:Ljava/lang/String;

.field private o:Landroid/graphics/Rect;

.field private p:I

.field private q:F

.field private r:Landroid/graphics/Paint$FontMetrics;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 47
    invoke-direct {p0, p1, v0}, Lcom/tkay/basead/ui/CountDownView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 2

    .line 51
    invoke-direct {p0, p1, p2}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 1057
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p2

    const/4 v0, 0x1

    const/high16 v1, 0x40200000    # 2.5f

    invoke-static {v0, v1, p2}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result p2

    iput p2, p0, Lcom/tkay/basead/ui/CountDownView;->d:F

    .line 1058
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    const/high16 p2, 0x41200000    # 10.0f

    invoke-static {v0, p2, p1}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result p1

    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->e:F

    const-string p1, "#66000000"

    .line 1061
    invoke-static {p1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->f:I

    const-string p1, "#CC000000"

    .line 1062
    invoke-static {p1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->g:I

    const/4 p1, -0x1

    .line 1063
    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->h:I

    .line 1064
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    .line 1065
    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 1066
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    sget-object p2, Landroid/graphics/Paint$Cap;->ROUND:Landroid/graphics/Paint$Cap;

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setStrokeCap(Landroid/graphics/Paint$Cap;)V

    .line 1067
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    sget-object p2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 1068
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    iget p2, p0, Lcom/tkay/basead/ui/CountDownView;->d:F

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 1070
    new-instance p1, Landroid/graphics/Paint;

    iget-object p2, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    invoke-direct {p1, p2}, Landroid/graphics/Paint;-><init>(Landroid/graphics/Paint;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->b:Landroid/graphics/Paint;

    .line 1071
    iget p2, p0, Lcom/tkay/basead/ui/CountDownView;->f:I

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setColor(I)V

    .line 1072
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->b:Landroid/graphics/Paint;

    sget-object p2, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 1074
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->c:Landroid/graphics/Paint;

    .line 1075
    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 1076
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->c:Landroid/graphics/Paint;

    iget p2, p0, Lcom/tkay/basead/ui/CountDownView;->e:F

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setTextSize(F)V

    .line 1077
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->c:Landroid/graphics/Paint;

    iget p2, p0, Lcom/tkay/basead/ui/CountDownView;->h:I

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setColor(I)V

    .line 1079
    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->l:Landroid/graphics/RectF;

    .line 1080
    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->o:Landroid/graphics/Rect;

    return-void
.end method

.method private a()V
    .locals 5

    .line 94
    iget v0, p0, Lcom/tkay/basead/ui/CountDownView;->d:F

    const/high16 v1, 0x3f000000    # 0.5f

    mul-float/2addr v0, v1

    .line 96
    iget-object v1, p0, Lcom/tkay/basead/ui/CountDownView;->l:Landroid/graphics/RectF;

    const/4 v2, 0x0

    add-float/2addr v2, v0

    iget v3, p0, Lcom/tkay/basead/ui/CountDownView;->i:I

    int-to-float v3, v3

    sub-float/2addr v3, v0

    iget v4, p0, Lcom/tkay/basead/ui/CountDownView;->j:I

    int-to-float v4, v4

    sub-float/2addr v4, v0

    invoke-virtual {v1, v2, v2, v3, v4}, Landroid/graphics/RectF;->set(FFFF)V

    .line 97
    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->l:Landroid/graphics/RectF;

    invoke-virtual {v0}, Landroid/graphics/RectF;->width()F

    move-result v0

    float-to-int v0, v0

    shr-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/tkay/basead/ui/CountDownView;->k:I

    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 3

    .line 57
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    const/4 v1, 0x1

    const/high16 v2, 0x40200000    # 2.5f

    invoke-static {v1, v2, v0}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result v0

    iput v0, p0, Lcom/tkay/basead/ui/CountDownView;->d:F

    .line 58
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    const/high16 v0, 0x41200000    # 10.0f

    invoke-static {v1, v0, p1}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result p1

    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->e:F

    const-string p1, "#66000000"

    .line 61
    invoke-static {p1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->f:I

    const-string p1, "#CC000000"

    .line 62
    invoke-static {p1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->g:I

    const/4 p1, -0x1

    .line 63
    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->h:I

    .line 64
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    .line 65
    invoke-virtual {p1, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 66
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    sget-object v0, Landroid/graphics/Paint$Cap;->ROUND:Landroid/graphics/Paint$Cap;

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setStrokeCap(Landroid/graphics/Paint$Cap;)V

    .line 67
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    sget-object v0, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 68
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    iget v0, p0, Lcom/tkay/basead/ui/CountDownView;->d:F

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 70
    new-instance p1, Landroid/graphics/Paint;

    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    invoke-direct {p1, v0}, Landroid/graphics/Paint;-><init>(Landroid/graphics/Paint;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->b:Landroid/graphics/Paint;

    .line 71
    iget v0, p0, Lcom/tkay/basead/ui/CountDownView;->f:I

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setColor(I)V

    .line 72
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->b:Landroid/graphics/Paint;

    sget-object v0, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 74
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->c:Landroid/graphics/Paint;

    .line 75
    invoke-virtual {p1, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 76
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->c:Landroid/graphics/Paint;

    iget v0, p0, Lcom/tkay/basead/ui/CountDownView;->e:F

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setTextSize(F)V

    .line 77
    iget-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->c:Landroid/graphics/Paint;

    iget v0, p0, Lcom/tkay/basead/ui/CountDownView;->h:I

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setColor(I)V

    .line 79
    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->l:Landroid/graphics/RectF;

    .line 80
    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->o:Landroid/graphics/Rect;

    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 8

    .line 128
    invoke-super {p0, p1}, Landroid/view/View;->onDraw(Landroid/graphics/Canvas;)V

    .line 130
    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->l:Landroid/graphics/RectF;

    invoke-virtual {v0}, Landroid/graphics/RectF;->centerX()F

    move-result v0

    iget-object v1, p0, Lcom/tkay/basead/ui/CountDownView;->l:Landroid/graphics/RectF;

    invoke-virtual {v1}, Landroid/graphics/RectF;->centerY()F

    move-result v1

    iget v2, p0, Lcom/tkay/basead/ui/CountDownView;->k:I

    int-to-float v2, v2

    iget-object v3, p0, Lcom/tkay/basead/ui/CountDownView;->b:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1, v2, v3}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    .line 132
    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    iget v1, p0, Lcom/tkay/basead/ui/CountDownView;->g:I

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    .line 133
    iget-object v3, p0, Lcom/tkay/basead/ui/CountDownView;->l:Landroid/graphics/RectF;

    iget-object v7, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    const/4 v4, 0x0

    const/high16 v5, 0x43b40000    # 360.0f

    const/4 v6, 0x0

    move-object v2, p1

    invoke-virtual/range {v2 .. v7}, Landroid/graphics/Canvas;->drawArc(Landroid/graphics/RectF;FFZLandroid/graphics/Paint;)V

    .line 135
    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    iget v1, p0, Lcom/tkay/basead/ui/CountDownView;->h:I

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    .line 136
    iget-object v3, p0, Lcom/tkay/basead/ui/CountDownView;->l:Landroid/graphics/RectF;

    iget v5, p0, Lcom/tkay/basead/ui/CountDownView;->m:F

    iget-object v7, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    const/high16 v4, -0x3d4c0000    # -90.0f

    invoke-virtual/range {v2 .. v7}, Landroid/graphics/Canvas;->drawArc(Landroid/graphics/RectF;FFZLandroid/graphics/Paint;)V

    .line 138
    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->n:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 139
    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->c:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/tkay/basead/ui/CountDownView;->n:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v3

    iget-object v4, p0, Lcom/tkay/basead/ui/CountDownView;->o:Landroid/graphics/Rect;

    invoke-virtual {v0, v1, v2, v3, v4}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    .line 140
    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->c:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/tkay/basead/ui/CountDownView;->n:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->measureText(Ljava/lang/String;)F

    move-result v0

    iput v0, p0, Lcom/tkay/basead/ui/CountDownView;->q:F

    .line 141
    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->c:Landroid/graphics/Paint;

    invoke-virtual {v0}, Landroid/graphics/Paint;->getFontMetrics()Landroid/graphics/Paint$FontMetrics;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->r:Landroid/graphics/Paint$FontMetrics;

    .line 142
    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->n:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/basead/ui/CountDownView;->l:Landroid/graphics/RectF;

    invoke-virtual {v1}, Landroid/graphics/RectF;->centerX()F

    move-result v1

    iget v2, p0, Lcom/tkay/basead/ui/CountDownView;->q:F

    const/high16 v3, 0x40000000    # 2.0f

    div-float/2addr v2, v3

    sub-float/2addr v1, v2

    iget-object v2, p0, Lcom/tkay/basead/ui/CountDownView;->l:Landroid/graphics/RectF;

    .line 143
    invoke-virtual {v2}, Landroid/graphics/RectF;->centerY()F

    move-result v2

    iget-object v4, p0, Lcom/tkay/basead/ui/CountDownView;->r:Landroid/graphics/Paint$FontMetrics;

    iget v4, v4, Landroid/graphics/Paint$FontMetrics;->bottom:F

    iget-object v5, p0, Lcom/tkay/basead/ui/CountDownView;->r:Landroid/graphics/Paint$FontMetrics;

    iget v5, v5, Landroid/graphics/Paint$FontMetrics;->top:F

    sub-float/2addr v4, v5

    div-float/2addr v4, v3

    iget-object v3, p0, Lcom/tkay/basead/ui/CountDownView;->r:Landroid/graphics/Paint$FontMetrics;

    iget v3, v3, Landroid/graphics/Paint$FontMetrics;->bottom:F

    sub-float/2addr v4, v3

    add-float/2addr v2, v4

    iget-object v3, p0, Lcom/tkay/basead/ui/CountDownView;->c:Landroid/graphics/Paint;

    .line 142
    invoke-virtual {p1, v0, v1, v2, v3}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    :cond_0
    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 0

    .line 85
    invoke-super {p0, p1, p2, p3, p4}, Landroid/view/View;->onSizeChanged(IIII)V

    .line 87
    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->i:I

    .line 88
    iput p2, p0, Lcom/tkay/basead/ui/CountDownView;->j:I

    .line 90
    invoke-direct {p0}, Lcom/tkay/basead/ui/CountDownView;->a()V

    return-void
.end method

.method public refresh(I)V
    .locals 5

    int-to-float v0, p1

    const/high16 v1, 0x3f800000    # 1.0f

    mul-float/2addr v0, v1

    .line 106
    iget v1, p0, Lcom/tkay/basead/ui/CountDownView;->p:I

    int-to-float v1, v1

    div-float/2addr v0, v1

    const/high16 v1, 0x43b40000    # 360.0f

    mul-float/2addr v0, v1

    iput v0, p0, Lcom/tkay/basead/ui/CountDownView;->m:F

    .line 107
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/tkay/basead/ui/CountDownView;->p:I

    sub-int/2addr v1, p1

    int-to-double v1, v1

    const-wide v3, 0x408f400000000000L    # 1000.0

    div-double/2addr v1, v3

    invoke-static {v1, v2}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v1

    double-to-int p1, v1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->n:Ljava/lang/String;

    .line 108
    invoke-virtual {p0}, Lcom/tkay/basead/ui/CountDownView;->invalidate()V

    return-void
.end method

.method public setBgColor(I)V
    .locals 1

    .line 112
    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->f:I

    .line 113
    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->b:Landroid/graphics/Paint;

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setColor(I)V

    return-void
.end method

.method public setDuration(I)V
    .locals 1

    .line 101
    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->p:I

    .line 102
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    div-int/lit16 p1, p1, 0x3e8

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/CountDownView;->n:Ljava/lang/String;

    return-void
.end method

.method public setThickInPx(I)V
    .locals 1

    int-to-float p1, p1

    .line 121
    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->d:F

    .line 122
    iget-object v0, p0, Lcom/tkay/basead/ui/CountDownView;->a:Landroid/graphics/Paint;

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 123
    invoke-direct {p0}, Lcom/tkay/basead/ui/CountDownView;->a()V

    return-void
.end method

.method public setUnderRingColor(I)V
    .locals 0

    .line 117
    iput p1, p0, Lcom/tkay/basead/ui/CountDownView;->g:I

    return-void
.end method
