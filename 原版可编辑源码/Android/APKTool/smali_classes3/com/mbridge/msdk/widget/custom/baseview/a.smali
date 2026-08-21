.class final Lcom/mbridge/msdk/widget/custom/baseview/a;
.super Landroid/graphics/drawable/Drawable;
.source "CircularAnimatedDrawable.java"

# interfaces
.implements Landroid/graphics/drawable/Animatable;


# static fields
.field private static final a:Landroid/view/animation/Interpolator;

.field private static final b:Landroid/view/animation/Interpolator;


# instance fields
.field private final c:Landroid/graphics/RectF;

.field private d:Landroid/animation/ObjectAnimator;

.field private e:Landroid/animation/ObjectAnimator;

.field private f:Z

.field private g:Landroid/graphics/Paint;

.field private h:F

.field private i:F

.field private j:F

.field private k:F

.field private l:Z

.field private m:Landroid/util/Property;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/Property<",
            "Lcom/mbridge/msdk/widget/custom/baseview/a;",
            "Ljava/lang/Float;",
            ">;"
        }
    .end annotation
.end field

.field private n:Landroid/util/Property;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/Property<",
            "Lcom/mbridge/msdk/widget/custom/baseview/a;",
            "Ljava/lang/Float;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 16
    new-instance v0, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v0}, Landroid/view/animation/LinearInterpolator;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/widget/custom/baseview/a;->a:Landroid/view/animation/Interpolator;

    .line 17
    new-instance v0, Landroid/view/animation/DecelerateInterpolator;

    invoke-direct {v0}, Landroid/view/animation/DecelerateInterpolator;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/widget/custom/baseview/a;->b:Landroid/view/animation/Interpolator;

    return-void
.end method

.method public constructor <init>(IF)V
    .locals 5

    .line 33
    invoke-direct {p0}, Landroid/graphics/drawable/Drawable;-><init>()V

    .line 21
    new-instance v0, Landroid/graphics/RectF;

    invoke-direct {v0}, Landroid/graphics/RectF;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->c:Landroid/graphics/RectF;

    .line 89
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/a$1;

    const-class v1, Ljava/lang/Float;

    const-string v2, "angle"

    invoke-direct {v0, p0, v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/a$1;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/a;Ljava/lang/Class;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->m:Landroid/util/Property;

    .line 102
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/a$2;

    const-class v1, Ljava/lang/Float;

    const-string v2, "arc"

    invoke-direct {v0, p0, v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/a$2;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/a;Ljava/lang/Class;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->n:Landroid/util/Property;

    .line 34
    iput p2, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->k:F

    .line 36
    new-instance v0, Landroid/graphics/Paint;

    invoke-direct {v0}, Landroid/graphics/Paint;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->g:Landroid/graphics/Paint;

    const/4 v1, 0x1

    .line 37
    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 38
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->g:Landroid/graphics/Paint;

    sget-object v2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 39
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->g:Landroid/graphics/Paint;

    invoke-virtual {v0, p2}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 40
    iget-object p2, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->g:Landroid/graphics/Paint;

    invoke-virtual {p2, p1}, Landroid/graphics/Paint;->setColor(I)V

    .line 1116
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->m:Landroid/util/Property;

    new-array p2, v1, [F

    const/high16 v0, 0x43b40000    # 360.0f

    const/4 v2, 0x0

    aput v0, p2, v2

    invoke-static {p0, p1, p2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Landroid/util/Property;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->e:Landroid/animation/ObjectAnimator;

    .line 1117
    sget-object p2, Lcom/mbridge/msdk/widget/custom/baseview/a;->a:Landroid/view/animation/Interpolator;

    invoke-virtual {p1, p2}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    .line 1118
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->e:Landroid/animation/ObjectAnimator;

    const-wide/16 v3, 0x7d0

    invoke-virtual {p1, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    .line 1119
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->e:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1, v1}, Landroid/animation/ObjectAnimator;->setRepeatMode(I)V

    .line 1120
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->e:Landroid/animation/ObjectAnimator;

    const/4 p2, -0x1

    invoke-virtual {p1, p2}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    .line 1122
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->n:Landroid/util/Property;

    new-array v0, v1, [F

    const/high16 v3, 0x43960000    # 300.0f

    aput v3, v0, v2

    invoke-static {p0, p1, v0}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Landroid/util/Property;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->d:Landroid/animation/ObjectAnimator;

    .line 1123
    sget-object v0, Lcom/mbridge/msdk/widget/custom/baseview/a;->b:Landroid/view/animation/Interpolator;

    invoke-virtual {p1, v0}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    .line 1124
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->d:Landroid/animation/ObjectAnimator;

    const-wide/16 v2, 0x258

    invoke-virtual {p1, v2, v3}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    .line 1125
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->d:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1, v1}, Landroid/animation/ObjectAnimator;->setRepeatMode(I)V

    .line 1126
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->d:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1, p2}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    .line 1127
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->d:Landroid/animation/ObjectAnimator;

    new-instance p2, Lcom/mbridge/msdk/widget/custom/baseview/a$3;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/widget/custom/baseview/a$3;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/a;)V

    invoke-virtual {p1, p2}, Landroid/animation/ObjectAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/widget/custom/baseview/a;)V
    .locals 2

    .line 2074
    iget-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->f:Z

    xor-int/lit8 v0, v0, 0x1

    iput-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->f:Z

    if-eqz v0, :cond_0

    .line 2076
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->h:F

    const/high16 v1, 0x42700000    # 60.0f

    add-float/2addr v0, v1

    const/high16 v1, 0x43b40000    # 360.0f

    rem-float/2addr v0, v1

    iput v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->h:F

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()F
    .locals 1

    .line 183
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->i:F

    return v0
.end method

.method public final a(F)V
    .locals 0

    .line 178
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->i:F

    .line 179
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/a;->invalidateSelf()V

    return-void
.end method

.method public final b()F
    .locals 1

    .line 192
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->j:F

    return v0
.end method

.method public final b(F)V
    .locals 0

    .line 187
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->j:F

    .line 188
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/a;->invalidateSelf()V

    return-void
.end method

.method public final draw(Landroid/graphics/Canvas;)V
    .locals 9

    .line 47
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->i:F

    iget v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->h:F

    sub-float/2addr v0, v1

    .line 48
    iget v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->j:F

    .line 49
    iget-boolean v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->f:Z

    const/high16 v3, 0x41f00000    # 30.0f

    if-nez v2, :cond_0

    add-float/2addr v0, v1

    const/high16 v2, 0x43b40000    # 360.0f

    sub-float/2addr v2, v1

    sub-float/2addr v2, v3

    goto :goto_0

    :cond_0
    add-float v2, v1, v3

    :goto_0
    move v5, v0

    move v6, v2

    .line 55
    iget-object v4, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->c:Landroid/graphics/RectF;

    const/4 v7, 0x0

    iget-object v8, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->g:Landroid/graphics/Paint;

    move-object v3, p1

    invoke-virtual/range {v3 .. v8}, Landroid/graphics/Canvas;->drawArc(Landroid/graphics/RectF;FFZLandroid/graphics/Paint;)V

    return-void
.end method

.method public final getOpacity()I
    .locals 1

    const/4 v0, -0x2

    return v0
.end method

.method public final isRunning()Z
    .locals 1

    .line 174
    iget-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->l:Z

    return v0
.end method

.method protected final onBoundsChange(Landroid/graphics/Rect;)V
    .locals 5

    .line 82
    invoke-super {p0, p1}, Landroid/graphics/drawable/Drawable;->onBoundsChange(Landroid/graphics/Rect;)V

    .line 83
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->c:Landroid/graphics/RectF;

    iget v1, p1, Landroid/graphics/Rect;->left:I

    int-to-float v1, v1

    iget v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->k:F

    const/high16 v3, 0x40000000    # 2.0f

    div-float/2addr v2, v3

    add-float/2addr v1, v2

    const/high16 v2, 0x3f000000    # 0.5f

    add-float/2addr v1, v2

    iput v1, v0, Landroid/graphics/RectF;->left:F

    .line 84
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->c:Landroid/graphics/RectF;

    iget v1, p1, Landroid/graphics/Rect;->right:I

    int-to-float v1, v1

    iget v4, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->k:F

    div-float/2addr v4, v3

    sub-float/2addr v1, v4

    sub-float/2addr v1, v2

    iput v1, v0, Landroid/graphics/RectF;->right:F

    .line 85
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->c:Landroid/graphics/RectF;

    iget v1, p1, Landroid/graphics/Rect;->top:I

    int-to-float v1, v1

    iget v4, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->k:F

    div-float/2addr v4, v3

    add-float/2addr v1, v4

    add-float/2addr v1, v2

    iput v1, v0, Landroid/graphics/RectF;->top:F

    .line 86
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->c:Landroid/graphics/RectF;

    iget p1, p1, Landroid/graphics/Rect;->bottom:I

    int-to-float p1, p1

    iget v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->k:F

    div-float/2addr v1, v3

    sub-float/2addr p1, v1

    sub-float/2addr p1, v2

    iput p1, v0, Landroid/graphics/RectF;->bottom:F

    return-void
.end method

.method public final setAlpha(I)V
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->g:Landroid/graphics/Paint;

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setAlpha(I)V

    return-void
.end method

.method public final setColorFilter(Landroid/graphics/ColorFilter;)V
    .locals 1

    .line 65
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->g:Landroid/graphics/Paint;

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setColorFilter(Landroid/graphics/ColorFilter;)Landroid/graphics/ColorFilter;

    return-void
.end method

.method public final start()V
    .locals 1

    .line 152
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/a;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 155
    iput-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->l:Z

    .line 156
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->e:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V

    .line 157
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->d:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V

    .line 158
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/a;->invalidateSelf()V

    return-void
.end method

.method public final stop()V
    .locals 1

    .line 163
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/a;->isRunning()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 166
    iput-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->l:Z

    .line 167
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->e:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    .line 168
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/a;->d:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    .line 169
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/a;->invalidateSelf()V

    return-void
.end method
