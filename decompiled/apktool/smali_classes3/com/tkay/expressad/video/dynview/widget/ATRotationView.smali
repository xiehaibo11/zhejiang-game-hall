.class public Lcom/tkay/expressad/video/dynview/widget/ATRotationView;
.super Landroid/widget/FrameLayout;


# instance fields
.field a:Ljava/lang/Runnable;

.field private b:Landroid/graphics/Camera;

.field private c:Landroid/graphics/Matrix;

.field private d:I

.field private e:I

.field private f:I

.field private g:I

.field private h:I

.field private i:I

.field private j:I

.field private k:I

.field private l:F

.field private m:F

.field private n:Z

.field private o:Z

.field private p:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 34
    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    const/16 p1, 0x28

    .line 19
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    const/16 p1, 0x14

    .line 20
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->g:I

    const/4 p1, 0x0

    .line 21
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    .line 22
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    .line 24
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->k:I

    const/high16 v0, 0x3f000000    # 0.5f

    .line 26
    iput v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->l:F

    const v0, 0x3f666666    # 0.9f

    .line 27
    iput v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->m:F

    const/4 v0, 0x1

    .line 29
    iput-boolean v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->n:Z

    .line 30
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->o:Z

    .line 31
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->p:Z

    .line 135
    new-instance p1, Lcom/tkay/expressad/video/dynview/widget/ATRotationView$1;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView$1;-><init>(Lcom/tkay/expressad/video/dynview/widget/ATRotationView;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a:Ljava/lang/Runnable;

    .line 35
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 39
    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/16 p1, 0x28

    .line 19
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    const/16 p1, 0x14

    .line 20
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->g:I

    const/4 p1, 0x0

    .line 21
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    .line 22
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    .line 24
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->k:I

    const/high16 p2, 0x3f000000    # 0.5f

    .line 26
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->l:F

    const p2, 0x3f666666    # 0.9f

    .line 27
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->m:F

    const/4 p2, 0x1

    .line 29
    iput-boolean p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->n:Z

    .line 30
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->o:Z

    .line 31
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->p:Z

    .line 135
    new-instance p1, Lcom/tkay/expressad/video/dynview/widget/ATRotationView$1;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView$1;-><init>(Lcom/tkay/expressad/video/dynview/widget/ATRotationView;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a:Ljava/lang/Runnable;

    .line 40
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 44
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/16 p1, 0x28

    .line 19
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    const/16 p1, 0x14

    .line 20
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->g:I

    const/4 p1, 0x0

    .line 21
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    .line 22
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    .line 24
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->k:I

    const/high16 p2, 0x3f000000    # 0.5f

    .line 26
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->l:F

    const p2, 0x3f666666    # 0.9f

    .line 27
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->m:F

    const/4 p2, 0x1

    .line 29
    iput-boolean p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->n:Z

    .line 30
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->o:Z

    .line 31
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->p:Z

    .line 135
    new-instance p1, Lcom/tkay/expressad/video/dynview/widget/ATRotationView$1;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView$1;-><init>(Lcom/tkay/expressad/video/dynview/widget/ATRotationView;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a:Ljava/lang/Runnable;

    .line 45
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a()V

    return-void
.end method

.method private a(I)I
    .locals 2

    const/4 v0, 0x2

    if-eqz p1, :cond_5

    const/4 v1, 0x1

    if-eq p1, v1, :cond_3

    if-eq p1, v0, :cond_1

    const/4 v0, 0x3

    if-eq p1, v0, :cond_0

    const/4 p1, 0x0

    goto :goto_2

    .line 236
    :cond_0
    iget p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    goto :goto_2

    .line 230
    :cond_1
    iget-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->p:Z

    if-eqz p1, :cond_2

    .line 231
    iget p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    goto :goto_1

    .line 233
    :cond_2
    iget p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    goto :goto_0

    .line 224
    :cond_3
    iget-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->p:Z

    if-eqz p1, :cond_4

    .line 225
    iget p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    :goto_0
    add-int/2addr p1, v1

    goto :goto_2

    .line 227
    :cond_4
    iget p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    :goto_1
    sub-int/2addr p1, v1

    goto :goto_2

    .line 218
    :cond_5
    iget-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->p:Z

    if-eqz p1, :cond_6

    .line 219
    iget p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    sub-int/2addr p1, v0

    goto :goto_2

    .line 221
    :cond_6
    iget p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    add-int/2addr p1, v0

    .line 239
    :goto_2
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getChildCount()I

    move-result v0

    rem-int/2addr p1, v0

    if-ltz p1, :cond_7

    return p1

    .line 243
    :cond_7
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getChildCount()I

    move-result v0

    add-int/2addr p1, v0

    return p1
.end method

.method private a()V
    .locals 1

    .line 49
    new-instance v0, Landroid/graphics/Camera;

    invoke-direct {v0}, Landroid/graphics/Camera;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    .line 50
    new-instance v0, Landroid/graphics/Matrix;

    invoke-direct {v0}, Landroid/graphics/Matrix;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->c:Landroid/graphics/Matrix;

    const/4 v0, 0x0

    .line 51
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->setWillNotDraw(Z)V

    return-void
.end method

.method private a(III)V
    .locals 2

    neg-int p1, p1

    int-to-float p1, p1

    const/high16 v0, 0x40000000    # 2.0f

    div-float/2addr p1, v0

    const/4 v0, 0x0

    if-eqz p3, :cond_3

    const/4 v1, 0x1

    if-eq p3, v1, :cond_2

    const/4 v1, 0x2

    if-eq p3, v1, :cond_1

    const/4 p1, 0x3

    if-eq p3, p1, :cond_0

    goto :goto_0

    .line 167
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p1, v0}, Landroid/graphics/Camera;->rotateX(F)V

    :goto_0
    return-void

    .line 161
    :cond_1
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p3, v0, p1, v0}, Landroid/graphics/Camera;->translate(FFF)V

    .line 162
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    neg-int p2, p2

    int-to-float p2, p2

    invoke-virtual {p3, p2}, Landroid/graphics/Camera;->rotateX(F)V

    .line 163
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p2, v0, p1, v0}, Landroid/graphics/Camera;->translate(FFF)V

    return-void

    .line 155
    :cond_2
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p3, v0, p1, v0}, Landroid/graphics/Camera;->translate(FFF)V

    .line 156
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    int-to-float p2, p2

    invoke-virtual {p3, p2}, Landroid/graphics/Camera;->rotateX(F)V

    .line 157
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p2, v0, p1, v0}, Landroid/graphics/Camera;->translate(FFF)V

    return-void

    .line 146
    :cond_3
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p3, v0, p1, v0}, Landroid/graphics/Camera;->translate(FFF)V

    .line 147
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    neg-int p2, p2

    int-to-float p2, p2

    invoke-virtual {p3, p2}, Landroid/graphics/Camera;->rotateX(F)V

    .line 148
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p3, v0, p1, v0}, Landroid/graphics/Camera;->translate(FFF)V

    .line 149
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p3, v0, p1, v0}, Landroid/graphics/Camera;->translate(FFF)V

    .line 150
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p3, p2}, Landroid/graphics/Camera;->rotateX(F)V

    .line 151
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p2, v0, p1, v0}, Landroid/graphics/Camera;->translate(FFF)V

    return-void
.end method

.method private a(Landroid/graphics/Canvas;)V
    .locals 6

    .line 83
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getWidth()I

    move-result v0

    const/4 v1, 0x2

    div-int/2addr v0, v1

    .line 84
    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->e:I

    mul-int/2addr v2, v3

    div-int/2addr v2, v1

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    div-int/2addr v2, v3

    const/4 v3, 0x0

    .line 86
    invoke-direct {p0, p1, v2, v0, v3}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    const/4 v3, 0x1

    .line 87
    invoke-direct {p0, p1, v2, v0, v3}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    .line 88
    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    invoke-static {v3}, Ljava/lang/Math;->abs(I)I

    move-result v3

    iget v4, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    div-int/2addr v4, v1

    const/4 v5, 0x3

    if-le v3, v4, :cond_0

    .line 89
    invoke-direct {p0, p1, v2, v0, v5}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    .line 90
    invoke-direct {p0, p1, v2, v0, v1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    return-void

    .line 92
    :cond_0
    invoke-direct {p0, p1, v2, v0, v1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    .line 93
    invoke-direct {p0, p1, v2, v0, v5}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    return-void
.end method

.method private a(Landroid/graphics/Canvas;III)V
    .locals 4

    .line 186
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 187
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {v0}, Landroid/graphics/Camera;->save()V

    .line 188
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->c:Landroid/graphics/Matrix;

    invoke-virtual {v0}, Landroid/graphics/Matrix;->reset()V

    .line 189
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    int-to-float v1, p2

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1, v2}, Landroid/graphics/Camera;->translate(FFF)V

    .line 190
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    int-to-float v3, v3

    invoke-virtual {v0, v3}, Landroid/graphics/Camera;->rotateX(F)V

    .line 191
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {v0, v2, v1, v2}, Landroid/graphics/Camera;->translate(FFF)V

    if-nez p2, :cond_1

    .line 193
    iget-boolean p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->p:Z

    if-eqz p2, :cond_0

    .line 194
    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->d:I

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    invoke-direct {p0, p2, v0, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(III)V

    goto :goto_0

    .line 196
    :cond_0
    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->d:I

    neg-int p2, p2

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    neg-int v0, v0

    invoke-direct {p0, p2, v0, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(III)V

    goto :goto_0

    :cond_1
    if-lez p2, :cond_2

    .line 198
    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->d:I

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    invoke-direct {p0, p2, v0, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(III)V

    goto :goto_0

    :cond_2
    if-gez p2, :cond_3

    .line 200
    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->d:I

    neg-int p2, p2

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    neg-int v0, v0

    invoke-direct {p0, p2, v0, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(III)V

    .line 202
    :cond_3
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->c:Landroid/graphics/Matrix;

    invoke-virtual {p2, v0}, Landroid/graphics/Camera;->getMatrix(Landroid/graphics/Matrix;)V

    .line 203
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p2}, Landroid/graphics/Camera;->restore()V

    .line 204
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->c:Landroid/graphics/Matrix;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getWidth()I

    move-result v0

    neg-int v0, v0

    div-int/lit8 v0, v0, 0x2

    int-to-float v0, v0

    neg-int v1, p3

    int-to-float v1, v1

    invoke-virtual {p2, v0, v1}, Landroid/graphics/Matrix;->preTranslate(FF)Z

    .line 205
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->c:Landroid/graphics/Matrix;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getWidth()I

    move-result v0

    div-int/lit8 v0, v0, 0x2

    int-to-float v0, v0

    int-to-float p3, p3

    invoke-virtual {p2, v0, p3}, Landroid/graphics/Matrix;->postTranslate(FF)Z

    .line 206
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->c:Landroid/graphics/Matrix;

    invoke-virtual {p1, p2}, Landroid/graphics/Canvas;->concat(Landroid/graphics/Matrix;)V

    .line 207
    invoke-direct {p0, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(I)I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getChildAt(I)Landroid/view/View;

    move-result-object p2

    if-eqz p2, :cond_4

    const-wide/16 p3, 0x0

    .line 209
    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->drawChild(Landroid/graphics/Canvas;Landroid/view/View;J)Z

    .line 210
    :cond_4
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/dynview/widget/ATRotationView;)V
    .locals 4

    .line 4173
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getChildCount()I

    move-result v0

    if-eqz v0, :cond_2

    .line 4177
    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    .line 4178
    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    iput v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->j:I

    .line 4253
    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    div-int v3, v0, v2

    sub-int/2addr v1, v3

    .line 4255
    rem-int/2addr v0, v2

    iput v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    .line 4319
    iput v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    .line 4321
    invoke-static {v0}, Ljava/lang/Math;->abs(I)I

    move-result v0

    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    const/4 v2, 0x2

    div-int/2addr v1, v2

    if-le v0, v1, :cond_0

    .line 4322
    invoke-direct {p0, v2}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(I)I

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x3

    .line 4324
    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(I)I

    move-result v0

    .line 4326
    :goto_0
    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->k:I

    if-eq v1, v0, :cond_1

    .line 4327
    iput v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->k:I

    .line 4257
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->invalidate()V

    .line 4180
    iget-boolean v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->n:Z

    if-eqz v0, :cond_2

    .line 4181
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a:Ljava/lang/Runnable;

    const/16 v1, 0x3e8

    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->g:I

    div-int/2addr v1, v2

    int-to-long v1, v1

    invoke-virtual {p0, v0, v1, v2}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_2
    return-void
.end method

.method private b()V
    .locals 4

    .line 173
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getChildCount()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 177
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    .line 178
    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    iput v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->j:I

    .line 2253
    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    div-int v3, v0, v2

    sub-int/2addr v1, v3

    .line 2255
    rem-int/2addr v0, v2

    iput v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    .line 2319
    iput v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    .line 2321
    invoke-static {v0}, Ljava/lang/Math;->abs(I)I

    move-result v0

    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    const/4 v2, 0x2

    div-int/2addr v1, v2

    if-le v0, v1, :cond_1

    .line 2322
    invoke-direct {p0, v2}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(I)I

    move-result v0

    goto :goto_0

    :cond_1
    const/4 v0, 0x3

    .line 2324
    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(I)I

    move-result v0

    .line 2326
    :goto_0
    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->k:I

    if-eq v1, v0, :cond_2

    .line 2327
    iput v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->k:I

    .line 2257
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->invalidate()V

    .line 180
    iget-boolean v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->n:Z

    if-eqz v0, :cond_3

    .line 181
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a:Ljava/lang/Runnable;

    const/16 v1, 0x3e8

    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->g:I

    div-int/2addr v1, v2

    int-to-long v1, v1

    invoke-virtual {p0, v0, v1, v2}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_3
    return-void
.end method

.method private b(I)V
    .locals 3

    .line 253
    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    div-int v1, p1, v0

    .line 254
    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->j:I

    sub-int/2addr v2, v1

    .line 255
    rem-int/2addr p1, v0

    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    .line 3319
    iput v2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    .line 3321
    invoke-static {p1}, Ljava/lang/Math;->abs(I)I

    move-result p1

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    const/4 v1, 0x2

    div-int/2addr v0, v1

    if-le p1, v0, :cond_0

    .line 3322
    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(I)I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x3

    .line 3324
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(I)I

    move-result p1

    .line 3326
    :goto_0
    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->k:I

    if-eq v0, p1, :cond_1

    .line 3327
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->k:I

    .line 257
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->invalidate()V

    return-void
.end method

.method private b(III)V
    .locals 3

    const/4 v0, 0x2

    const/4 v1, 0x0

    if-eqz p3, :cond_3

    const/4 v2, 0x1

    if-eq p3, v2, :cond_2

    if-eq p3, v0, :cond_1

    const/4 p1, 0x3

    if-eq p3, p1, :cond_0

    goto :goto_0

    .line 284
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p1, v1}, Landroid/graphics/Camera;->rotateY(F)V

    :goto_0
    return-void

    .line 278
    :cond_1
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    neg-int p1, p1

    div-int/2addr p1, v0

    int-to-float p1, p1

    invoke-virtual {p3, p1, v1, v1}, Landroid/graphics/Camera;->translate(FFF)V

    .line 279
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    neg-int p2, p2

    int-to-float p2, p2

    invoke-virtual {p3, p2}, Landroid/graphics/Camera;->rotateY(F)V

    .line 280
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p2, p1, v1, v1}, Landroid/graphics/Camera;->translate(FFF)V

    return-void

    .line 272
    :cond_2
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    div-int/2addr p1, v0

    int-to-float p1, p1

    invoke-virtual {p3, p1, v1, v1}, Landroid/graphics/Camera;->translate(FFF)V

    .line 273
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    int-to-float p2, p2

    invoke-virtual {p3, p2}, Landroid/graphics/Camera;->rotateY(F)V

    .line 274
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p2, p1, v1, v1}, Landroid/graphics/Camera;->translate(FFF)V

    return-void

    .line 263
    :cond_3
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    neg-int p1, p1

    div-int/2addr p1, v0

    int-to-float p1, p1

    invoke-virtual {p3, p1, v1, v1}, Landroid/graphics/Camera;->translate(FFF)V

    .line 264
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    neg-int p2, p2

    int-to-float p2, p2

    invoke-virtual {p3, p2}, Landroid/graphics/Camera;->rotateY(F)V

    .line 265
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p3, p1, v1, v1}, Landroid/graphics/Camera;->translate(FFF)V

    .line 267
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p3, p1, v1, v1}, Landroid/graphics/Camera;->translate(FFF)V

    .line 268
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p3, p2}, Landroid/graphics/Camera;->rotateY(F)V

    .line 269
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p2, p1, v1, v1}, Landroid/graphics/Camera;->translate(FFF)V

    return-void
.end method

.method private b(Landroid/graphics/Canvas;)V
    .locals 6

    .line 98
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getHeight()I

    move-result v0

    const/4 v1, 0x2

    div-int/2addr v0, v1

    .line 99
    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->d:I

    mul-int/2addr v2, v3

    div-int/2addr v2, v1

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    div-int/2addr v2, v3

    const/4 v3, 0x0

    .line 100
    invoke-direct {p0, p1, v2, v0, v3}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    const/4 v3, 0x1

    .line 101
    invoke-direct {p0, p1, v2, v0, v3}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    .line 102
    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    invoke-static {v3}, Ljava/lang/Math;->abs(I)I

    move-result v3

    iget v4, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    div-int/2addr v4, v1

    const/4 v5, 0x3

    if-le v3, v4, :cond_0

    .line 103
    invoke-direct {p0, p1, v2, v0, v5}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    .line 104
    invoke-direct {p0, p1, v2, v0, v1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    return-void

    .line 106
    :cond_0
    invoke-direct {p0, p1, v2, v0, v1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    .line 107
    invoke-direct {p0, p1, v2, v0, v5}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    return-void
.end method

.method private b(Landroid/graphics/Canvas;III)V
    .locals 4

    .line 290
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 291
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {v0}, Landroid/graphics/Camera;->save()V

    .line 292
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->c:Landroid/graphics/Matrix;

    invoke-virtual {v0}, Landroid/graphics/Matrix;->reset()V

    .line 293
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    int-to-float v1, p2

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2, v2}, Landroid/graphics/Camera;->translate(FFF)V

    .line 294
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    int-to-float v3, v3

    invoke-virtual {v0, v3}, Landroid/graphics/Camera;->rotateY(F)V

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {v0, v1, v2, v2}, Landroid/graphics/Camera;->translate(FFF)V

    if-nez p2, :cond_1

    .line 297
    iget-boolean p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->p:Z

    if-eqz p2, :cond_0

    .line 298
    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->e:I

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    invoke-direct {p0, p2, v0, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(III)V

    goto :goto_0

    .line 300
    :cond_0
    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->e:I

    neg-int p2, p2

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    neg-int v0, v0

    invoke-direct {p0, p2, v0, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(III)V

    goto :goto_0

    :cond_1
    if-lez p2, :cond_2

    .line 302
    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->e:I

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    invoke-direct {p0, p2, v0, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(III)V

    goto :goto_0

    :cond_2
    if-gez p2, :cond_3

    .line 304
    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->e:I

    neg-int p2, p2

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    neg-int v0, v0

    invoke-direct {p0, p2, v0, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(III)V

    .line 306
    :cond_3
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->c:Landroid/graphics/Matrix;

    invoke-virtual {p2, v0}, Landroid/graphics/Camera;->getMatrix(Landroid/graphics/Matrix;)V

    .line 307
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b:Landroid/graphics/Camera;

    invoke-virtual {p2}, Landroid/graphics/Camera;->restore()V

    .line 308
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->c:Landroid/graphics/Matrix;

    neg-int v0, p3

    int-to-float v0, v0

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getHeight()I

    move-result v1

    neg-int v1, v1

    div-int/lit8 v1, v1, 0x2

    int-to-float v1, v1

    invoke-virtual {p2, v0, v1}, Landroid/graphics/Matrix;->preTranslate(FF)Z

    .line 309
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->c:Landroid/graphics/Matrix;

    int-to-float p3, p3

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getHeight()I

    move-result v0

    div-int/lit8 v0, v0, 0x2

    int-to-float v0, v0

    invoke-virtual {p2, p3, v0}, Landroid/graphics/Matrix;->postTranslate(FF)Z

    .line 310
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->c:Landroid/graphics/Matrix;

    invoke-virtual {p1, p2}, Landroid/graphics/Canvas;->concat(Landroid/graphics/Matrix;)V

    .line 311
    invoke-direct {p0, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(I)I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getChildAt(I)Landroid/view/View;

    move-result-object p2

    if-eqz p2, :cond_4

    const-wide/16 p3, 0x0

    .line 313
    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->drawChild(Landroid/graphics/Canvas;Landroid/view/View;J)Z

    .line 315
    :cond_4
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    return-void
.end method

.method private c(I)V
    .locals 2

    .line 319
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->i:I

    .line 321
    iget p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    invoke-static {p1}, Ljava/lang/Math;->abs(I)I

    move-result p1

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    const/4 v1, 0x2

    div-int/2addr v0, v1

    if-le p1, v0, :cond_0

    .line 322
    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(I)I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x3

    .line 324
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(I)I

    move-result p1

    .line 326
    :goto_0
    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->k:I

    if-eq v0, p1, :cond_1

    .line 327
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->k:I

    :cond_1
    return-void
.end method


# virtual methods
.method protected dispatchDraw(Landroid/graphics/Canvas;)V
    .locals 7

    .line 118
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getChildCount()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 121
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->o:Z

    const/4 v1, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x3

    const/4 v4, 0x2

    if-eqz v0, :cond_2

    .line 1098
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getHeight()I

    move-result v0

    div-int/2addr v0, v4

    .line 1099
    iget v5, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    iget v6, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->d:I

    mul-int/2addr v5, v6

    div-int/2addr v5, v4

    iget v6, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    div-int/2addr v5, v6

    .line 1100
    invoke-direct {p0, p1, v5, v0, v2}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    .line 1101
    invoke-direct {p0, p1, v5, v0, v1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    .line 1102
    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    invoke-static {v1}, Ljava/lang/Math;->abs(I)I

    move-result v1

    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    div-int/2addr v2, v4

    if-le v1, v2, :cond_1

    .line 1103
    invoke-direct {p0, p1, v5, v0, v3}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    .line 1104
    invoke-direct {p0, p1, v5, v0, v4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    return-void

    .line 1106
    :cond_1
    invoke-direct {p0, p1, v5, v0, v4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    .line 1107
    invoke-direct {p0, p1, v5, v0, v3}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a(Landroid/graphics/Canvas;III)V

    return-void

    .line 2083
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getWidth()I

    move-result v0

    div-int/2addr v0, v4

    .line 2084
    iget v5, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    iget v6, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->e:I

    mul-int/2addr v5, v6

    div-int/2addr v5, v4

    iget v6, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    div-int/2addr v5, v6

    .line 2086
    invoke-direct {p0, p1, v5, v0, v2}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    .line 2087
    invoke-direct {p0, p1, v5, v0, v1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    .line 2088
    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->h:I

    invoke-static {v1}, Ljava/lang/Math;->abs(I)I

    move-result v1

    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->f:I

    div-int/2addr v2, v4

    if-le v1, v2, :cond_3

    .line 2089
    invoke-direct {p0, p1, v5, v0, v3}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    .line 2090
    invoke-direct {p0, p1, v5, v0, v4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    return-void

    .line 2092
    :cond_3
    invoke-direct {p0, p1, v5, v0, v4}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    .line 2093
    invoke-direct {p0, p1, v5, v0, v3}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->b(Landroid/graphics/Canvas;III)V

    return-void
.end method

.method public onInterceptTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 0

    const/4 p1, 0x1

    return p1
.end method

.method protected onLayout(ZIIII)V
    .locals 5

    sub-int/2addr p4, p2

    int-to-float p1, p4

    .line 64
    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->l:F

    const/high16 v0, 0x3f800000    # 1.0f

    sub-float v1, v0, p2

    mul-float/2addr v1, p1

    const/high16 v2, 0x40000000    # 2.0f

    div-float/2addr v1, v2

    float-to-int v1, v1

    sub-int/2addr p5, p3

    int-to-float p3, p5

    .line 65
    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->m:F

    sub-float/2addr v0, v3

    mul-float/2addr v0, p3

    div-float/2addr v0, v2

    float-to-int v0, v0

    mul-float/2addr p3, v3

    float-to-int p3, p3

    .line 66
    iput p3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->d:I

    mul-float/2addr p1, p2

    float-to-int p1, p1

    .line 67
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->e:I

    .line 68
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getChildCount()I

    move-result p1

    const/4 p2, 0x0

    :goto_0
    if-ge p2, p1, :cond_1

    .line 70
    invoke-virtual {p0, p2}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->getChildAt(I)Landroid/view/View;

    move-result-object p3

    sub-int v2, p4, v1

    sub-int v3, p5, v0

    .line 71
    invoke-virtual {p3, v1, v0, v2, v3}, Landroid/view/View;->layout(IIII)V

    const/4 v2, 0x1

    .line 72
    invoke-virtual {p3, v2}, Landroid/view/View;->setClickable(Z)V

    .line 73
    invoke-virtual {p3}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    .line 74
    iget v3, v2, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget v4, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->e:I

    if-eq v3, v4, :cond_0

    .line 75
    iput v4, v2, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 76
    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->d:I

    iput v3, v2, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 77
    invoke-virtual {p3, v2}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public setAutoscroll(Z)V
    .locals 3

    if-eqz p1, :cond_0

    .line 130
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->a:Ljava/lang/Runnable;

    const/16 v1, 0x3e8

    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->g:I

    div-int/2addr v1, v2

    int-to-long v1, v1

    invoke-virtual {p0, v0, v1, v2}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 132
    :cond_0
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->n:Z

    return-void
.end method

.method public setHeightRatio(F)V
    .locals 0

    .line 59
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->m:F

    return-void
.end method

.method public setRotateV(Z)V
    .locals 0

    .line 112
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->o:Z

    .line 113
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->invalidate()V

    return-void
.end method

.method public setWidthRatio(F)V
    .locals 0

    .line 55
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->l:F

    return-void
.end method
