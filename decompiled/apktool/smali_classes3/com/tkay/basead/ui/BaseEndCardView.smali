.class public abstract Lcom/tkay/basead/ui/BaseEndCardView;
.super Landroid/widget/RelativeLayout;


# instance fields
.field protected a:Ljava/lang/String;

.field protected b:Lcom/tkay/core/common/f/h;

.field protected c:Lcom/tkay/core/common/f/i;

.field protected d:Lcom/tkay/core/common/f/j;

.field private e:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)V
    .locals 0

    .line 25
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 15
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseEndCardView;->a:Ljava/lang/String;

    const/4 p1, 0x0

    .line 26
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->setWillNotDraw(Z)V

    .line 28
    iput-object p2, p0, Lcom/tkay/basead/ui/BaseEndCardView;->b:Lcom/tkay/core/common/f/h;

    .line 29
    iput-object p3, p0, Lcom/tkay/basead/ui/BaseEndCardView;->c:Lcom/tkay/core/common/f/i;

    .line 30
    iget-object p1, p3, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseEndCardView;->d:Lcom/tkay/core/common/f/j;

    return-void
.end method

.method private static a(II)Landroid/graphics/RectF;
    .locals 4

    .line 59
    div-int/lit8 p0, p0, 0x2

    int-to-float v0, p1

    const/high16 v1, 0x3f800000    # 1.0f

    mul-float/2addr v1, v0

    float-to-int v1, v1

    .line 62
    new-instance v2, Landroid/graphics/RectF;

    invoke-direct {v2}, Landroid/graphics/RectF;-><init>()V

    sub-int v3, p0, v1

    int-to-float v3, v3

    .line 64
    iput v3, v2, Landroid/graphics/RectF;->left:F

    mul-int/lit8 v3, v1, 0x2

    sub-int/2addr p1, v3

    int-to-float p1, p1

    .line 65
    iput p1, v2, Landroid/graphics/RectF;->top:F

    add-int/2addr p0, v1

    int-to-float p0, p0

    .line 66
    iput p0, v2, Landroid/graphics/RectF;->right:F

    .line 67
    iput v0, v2, Landroid/graphics/RectF;->bottom:F

    return-object v2
.end method


# virtual methods
.method protected abstract a()V
.end method

.method public draw(Landroid/graphics/Canvas;)V
    .locals 9

    .line 42
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseEndCardView;->e:Z

    if-eqz v0, :cond_0

    const/4 v2, 0x0

    const/4 v3, 0x0

    .line 43
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseEndCardView;->getWidth()I

    move-result v0

    int-to-float v4, v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseEndCardView;->getHeight()I

    move-result v0

    int-to-float v5, v0

    const/4 v6, 0x0

    const/16 v7, 0x1f

    move-object v1, p1

    invoke-virtual/range {v1 .. v7}, Landroid/graphics/Canvas;->saveLayer(FFFFLandroid/graphics/Paint;I)I

    move-result v0

    .line 44
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->draw(Landroid/graphics/Canvas;)V

    .line 45
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseEndCardView;->getWidth()I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseEndCardView;->getHeight()I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseEndCardView;->getWidth()I

    move-result v3

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseEndCardView;->getHeight()I

    move-result v4

    .line 1059
    div-int/lit8 v3, v3, 0x2

    int-to-float v5, v4

    const/high16 v6, 0x3f800000    # 1.0f

    mul-float/2addr v6, v5

    float-to-int v6, v6

    .line 1062
    new-instance v7, Landroid/graphics/RectF;

    invoke-direct {v7}, Landroid/graphics/RectF;-><init>()V

    sub-int v8, v3, v6

    int-to-float v8, v8

    .line 1064
    iput v8, v7, Landroid/graphics/RectF;->left:F

    mul-int/lit8 v8, v6, 0x2

    sub-int/2addr v4, v8

    int-to-float v4, v4

    .line 1065
    iput v4, v7, Landroid/graphics/RectF;->top:F

    add-int/2addr v3, v6

    int-to-float v3, v3

    .line 1066
    iput v3, v7, Landroid/graphics/RectF;->right:F

    .line 1067
    iput v5, v7, Landroid/graphics/RectF;->bottom:F

    .line 45
    invoke-static {p1, v1, v2, v7}, Lcom/tkay/core/common/l/u;->a(Landroid/graphics/Canvas;IILandroid/graphics/RectF;)V

    .line 46
    invoke-virtual {p1, v0}, Landroid/graphics/Canvas;->restoreToCount(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 54
    :catch_0
    :cond_0
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->draw(Landroid/graphics/Canvas;)V

    return-void
.end method

.method public setNeedArc(Z)V
    .locals 0

    .line 35
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseEndCardView;->e:Z

    .line 36
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseEndCardView;->invalidate()V

    return-void
.end method
