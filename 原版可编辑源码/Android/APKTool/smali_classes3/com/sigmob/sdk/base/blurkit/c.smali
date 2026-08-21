.class public Lcom/sigmob/sdk/base/blurkit/c;
.super Landroid/widget/FrameLayout;


# static fields
.field public static final a:F = 0.12f

.field public static final b:I = 0xc

.field public static final c:I = 0x18

.field public static final d:F = 0.0f

.field public static final e:F = NaNf


# instance fields
.field private f:F

.field private g:I

.field private h:I

.field private i:F

.field private j:F

.field private k:Z

.field private l:Z

.field private m:Z

.field private n:Z

.field private o:Lcom/sigmob/sdk/base/blurkit/d;

.field private p:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private q:Landroid/graphics/Point;

.field private r:Landroid/graphics/Bitmap;

.field private s:Landroid/view/Choreographer$FrameCallback;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const p1, 0x3df5c28f    # 0.12f

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    const/16 p1, 0xc

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->g:I

    const/16 p1, 0x18

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->h:I

    const/4 p1, 0x0

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->i:F

    const/high16 p1, 0x7fc00000    # Float.NaN

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->j:F

    new-instance p1, Lcom/sigmob/sdk/base/blurkit/c$1;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/base/blurkit/c$1;-><init>(Lcom/sigmob/sdk/base/blurkit/c;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->s:Landroid/view/Choreographer$FrameCallback;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const p2, 0x3df5c28f    # 0.12f

    iput p2, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    const/16 p2, 0xc

    iput p2, p0, Lcom/sigmob/sdk/base/blurkit/c;->g:I

    const/16 p2, 0x18

    iput p2, p0, Lcom/sigmob/sdk/base/blurkit/c;->h:I

    const/4 p2, 0x0

    iput p2, p0, Lcom/sigmob/sdk/base/blurkit/c;->i:F

    const/high16 p2, 0x7fc00000    # Float.NaN

    iput p2, p0, Lcom/sigmob/sdk/base/blurkit/c;->j:F

    new-instance p2, Lcom/sigmob/sdk/base/blurkit/c$1;

    invoke-direct {p2, p0}, Lcom/sigmob/sdk/base/blurkit/c$1;-><init>(Lcom/sigmob/sdk/base/blurkit/c;)V

    iput-object p2, p0, Lcom/sigmob/sdk/base/blurkit/c;->s:Landroid/view/Choreographer$FrameCallback;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->isInEditMode()Z

    move-result p2

    if-nez p2, :cond_0

    invoke-static {p1}, Lcom/sigmob/sdk/base/blurkit/a;->a(Landroid/content/Context;)V

    :cond_0
    new-instance p1, Lcom/sigmob/sdk/base/blurkit/d;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/sigmob/sdk/base/blurkit/d;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->o:Lcom/sigmob/sdk/base/blurkit/d;

    sget-object p2, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/blurkit/d;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->o:Lcom/sigmob/sdk/base/blurkit/d;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/blurkit/c;->addView(Landroid/view/View;)V

    iget p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->i:F

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/blurkit/c;->setCornerRadius(F)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/blurkit/c;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/base/blurkit/c;->h:I

    return p0
.end method

.method private a(Landroid/view/View;Landroid/graphics/Rect;F)Landroid/graphics/Bitmap;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/base/blurkit/b;,
            Ljava/lang/NullPointerException;
        }
    .end annotation

    invoke-virtual {p1}, Landroid/view/View;->getRootView()Landroid/view/View;

    move-result-object p1

    invoke-virtual {p2}, Landroid/graphics/Rect;->width()I

    move-result v0

    int-to-float v0, v0

    mul-float/2addr v0, p3

    float-to-int v0, v0

    invoke-virtual {p2}, Landroid/graphics/Rect;->height()I

    move-result v1

    int-to-float v1, v1

    mul-float/2addr v1, p3

    float-to-int v1, v1

    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result v2

    if-lez v2, :cond_0

    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result v2

    if-lez v2, :cond_0

    if-lez v0, :cond_0

    if-lez v1, :cond_0

    iget v2, p2, Landroid/graphics/Rect;->left:I

    neg-int v2, v2

    int-to-float v2, v2

    mul-float/2addr v2, p3

    iget p2, p2, Landroid/graphics/Rect;->top:I

    neg-int p2, p2

    int-to-float p2, p2

    mul-float/2addr p2, p3

    sget-object v3, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {v0, v1, v3}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v0

    new-instance v1, Landroid/graphics/Canvas;

    invoke-direct {v1, v0}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    new-instance v3, Landroid/graphics/Matrix;

    invoke-direct {v3}, Landroid/graphics/Matrix;-><init>()V

    invoke-virtual {v3, p3, p3}, Landroid/graphics/Matrix;->preScale(FF)Z

    invoke-virtual {v3, v2, p2}, Landroid/graphics/Matrix;->postTranslate(FF)Z

    invoke-virtual {v1, v3}, Landroid/graphics/Canvas;->setMatrix(Landroid/graphics/Matrix;)V

    invoke-virtual {p1, v1}, Landroid/view/View;->draw(Landroid/graphics/Canvas;)V

    return-object v0

    :cond_0
    new-instance p1, Lcom/sigmob/sdk/base/blurkit/b;

    const-string p2, "No screen available (width or height = 0)"

    invoke-direct {p1, p2}, Lcom/sigmob/sdk/base/blurkit/b;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private a(Landroid/view/View;)Landroid/graphics/PointF;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_0

    new-instance p1, Landroid/graphics/PointF;

    invoke-direct {p1}, Landroid/graphics/PointF;-><init>()V

    return-object p1

    :cond_0
    :try_start_0
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_1

    new-instance p1, Landroid/graphics/PointF;

    invoke-direct {p1}, Landroid/graphics/PointF;-><init>()V

    return-object p1

    :cond_1
    invoke-direct {p0, v0}, Lcom/sigmob/sdk/base/blurkit/c;->a(Landroid/view/View;)Landroid/graphics/PointF;

    move-result-object v0

    invoke-virtual {p1}, Landroid/view/View;->getX()F

    move-result v1

    invoke-virtual {p1}, Landroid/view/View;->getY()F

    move-result p1

    invoke-virtual {v0, v1, p1}, Landroid/graphics/PointF;->offset(FF)V

    return-object v0

    :catch_0
    new-instance p1, Landroid/graphics/PointF;

    invoke-direct {p1}, Landroid/graphics/PointF;-><init>()V

    return-object p1
.end method

.method private g()Landroid/graphics/Bitmap;
    .locals 14

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getContext()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_f

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->isInEditMode()Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_8

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->p:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_2

    :cond_1
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getActivityView()Landroid/view/View;

    move-result-object v2

    invoke-direct {v0, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->p:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_2

    return-object v1

    :cond_2
    iget-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->m:Z

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->q:Landroid/graphics/Point;

    if-nez v0, :cond_3

    invoke-direct {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getPositionInScreen()Landroid/graphics/Point;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->q:Landroid/graphics/Point;

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->q:Landroid/graphics/Point;

    goto :goto_0

    :cond_4
    invoke-direct {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getPositionInScreen()Landroid/graphics/Point;

    move-result-object v0

    :goto_0
    const/4 v2, 0x0

    invoke-super {p0, v2}, Landroid/widget/FrameLayout;->setAlpha(F)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/blurkit/c;->p:Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    invoke-virtual {v2}, Landroid/view/View;->getWidth()I

    move-result v2

    iget-object v3, p0, Lcom/sigmob/sdk/base/blurkit/c;->p:Ljava/lang/ref/WeakReference;

    invoke-virtual {v3}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->getHeight()I

    move-result v3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getWidth()I

    move-result v4

    int-to-float v4, v4

    iget v5, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    mul-float/2addr v4, v5

    float-to-int v4, v4

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getHeight()I

    move-result v5

    int-to-float v5, v5

    iget v6, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    mul-float/2addr v5, v6

    float-to-int v5, v5

    iget v6, v0, Landroid/graphics/Point;->x:I

    int-to-float v6, v6

    iget v7, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    mul-float/2addr v6, v7

    float-to-int v6, v6

    iget v7, v0, Landroid/graphics/Point;->y:I

    int-to-float v7, v7

    iget v8, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    mul-float/2addr v7, v8

    float-to-int v7, v7

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getWidth()I

    move-result v8

    div-int/lit8 v8, v8, 0x8

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getHeight()I

    move-result v9

    div-int/lit8 v9, v9, 0x8

    neg-int v10, v8

    add-int v11, v6, v10

    const/4 v12, 0x0

    if-ltz v11, :cond_5

    goto :goto_1

    :cond_5
    move v10, v12

    :goto_1
    add-int v11, v6, v2

    sub-int/2addr v11, v8

    if-gt v11, v2, :cond_6

    goto :goto_2

    :cond_6
    add-int/2addr v2, v2

    sub-int v8, v2, v6

    :goto_2
    neg-int v2, v9

    add-int v11, v7, v2

    if-ltz v11, :cond_7

    goto :goto_3

    :cond_7
    move v2, v12

    :goto_3
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getHeight()I

    move-result v11

    add-int/2addr v11, v7

    add-int/2addr v11, v9

    if-gt v11, v3, :cond_8

    goto :goto_4

    :cond_8
    move v9, v12

    :goto_4
    iget-boolean v3, p0, Lcom/sigmob/sdk/base/blurkit/c;->n:Z

    if-eqz v3, :cond_c

    iget-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->r:Landroid/graphics/Bitmap;

    if-nez v0, :cond_9

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->c()V

    :cond_9
    if-eqz v4, :cond_b

    if-nez v5, :cond_a

    goto :goto_5

    :cond_a
    iget-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->r:Landroid/graphics/Bitmap;

    invoke-static {v0, v6, v7, v4, v5}, Landroid/graphics/Bitmap;->createBitmap(Landroid/graphics/Bitmap;IIII)Landroid/graphics/Bitmap;

    move-result-object v0

    goto :goto_6

    :cond_b
    :goto_5
    return-object v1

    :cond_c
    :try_start_0
    iget-object v3, p0, Lcom/sigmob/sdk/base/blurkit/c;->p:Ljava/lang/ref/WeakReference;

    invoke-virtual {v3}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/View;

    new-instance v6, Landroid/graphics/Rect;

    iget v7, v0, Landroid/graphics/Point;->x:I

    add-int/2addr v7, v10

    iget v11, v0, Landroid/graphics/Point;->y:I

    add-int/2addr v11, v2

    iget v12, v0, Landroid/graphics/Point;->x:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getWidth()I

    move-result v13

    add-int/2addr v12, v13

    invoke-static {v10}, Ljava/lang/Math;->abs(I)I

    move-result v13

    add-int/2addr v12, v13

    add-int/2addr v12, v8

    iget v0, v0, Landroid/graphics/Point;->y:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getHeight()I

    move-result v8

    add-int/2addr v0, v8

    invoke-static {v2}, Ljava/lang/Math;->abs(I)I

    move-result v8

    add-int/2addr v0, v8

    add-int/2addr v0, v9

    invoke-direct {v6, v7, v11, v12, v0}, Landroid/graphics/Rect;-><init>(IIII)V

    iget v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    invoke-direct {p0, v3, v6, v0}, Lcom/sigmob/sdk/base/blurkit/c;->a(Landroid/view/View;Landroid/graphics/Rect;F)Landroid/graphics/Bitmap;

    move-result-object v0
    :try_end_0
    .catch Lcom/sigmob/sdk/base/blurkit/b; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0

    :goto_6
    iget-boolean v1, p0, Lcom/sigmob/sdk/base/blurkit/c;->n:Z

    if-nez v1, :cond_d

    invoke-static {}, Lcom/sigmob/sdk/base/blurkit/a;->a()Lcom/sigmob/sdk/base/blurkit/a;

    move-result-object v1

    iget v3, p0, Lcom/sigmob/sdk/base/blurkit/c;->g:I

    invoke-virtual {v1, v0, v3}, Lcom/sigmob/sdk/base/blurkit/a;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object v0

    invoke-static {v10}, Ljava/lang/Math;->abs(I)I

    move-result v1

    int-to-float v1, v1

    iget v3, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    mul-float/2addr v1, v3

    float-to-int v1, v1

    invoke-static {v2}, Ljava/lang/Math;->abs(I)I

    move-result v2

    int-to-float v2, v2

    iget v3, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    mul-float/2addr v2, v3

    float-to-int v2, v2

    invoke-static {v0, v1, v2, v4, v5}, Landroid/graphics/Bitmap;->createBitmap(Landroid/graphics/Bitmap;IIII)Landroid/graphics/Bitmap;

    move-result-object v0

    :cond_d
    iget v1, p0, Lcom/sigmob/sdk/base/blurkit/c;->j:F

    invoke-static {v1}, Ljava/lang/Float;->isNaN(F)Z

    move-result v1

    if-eqz v1, :cond_e

    const/high16 v1, 0x3f800000    # 1.0f

    goto :goto_7

    :cond_e
    iget v1, p0, Lcom/sigmob/sdk/base/blurkit/c;->j:F

    :goto_7
    invoke-super {p0, v1}, Landroid/widget/FrameLayout;->setAlpha(F)V

    return-object v0

    :catch_0
    :cond_f
    :goto_8
    return-object v1
.end method

.method private getActivityView()Landroid/view/View;
    .locals 2

    :try_start_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;
    :try_end_0
    .catch Ljava/lang/ClassCastException; {:try_start_0 .. :try_end_0} :catch_0

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const v1, 0x1020002

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    return-object v0

    :catch_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private getPositionInScreen()Landroid/graphics/Point;
    .locals 3

    invoke-direct {p0, p0}, Lcom/sigmob/sdk/base/blurkit/c;->a(Landroid/view/View;)Landroid/graphics/PointF;

    move-result-object v0

    new-instance v1, Landroid/graphics/Point;

    iget v2, v0, Landroid/graphics/PointF;->x:F

    float-to-int v2, v2

    iget v0, v0, Landroid/graphics/PointF;->y:F

    float-to-int v0, v0

    invoke-direct {v1, v2, v0}, Landroid/graphics/Point;-><init>(II)V

    return-object v1
.end method


# virtual methods
.method public a()V
    .locals 2

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->k:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->h:I

    if-lez v0, :cond_1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->k:Z

    invoke-static {}, Landroid/view/Choreographer;->getInstance()Landroid/view/Choreographer;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/blurkit/c;->s:Landroid/view/Choreographer$FrameCallback;

    invoke-virtual {v0, v1}, Landroid/view/Choreographer;->postFrameCallback(Landroid/view/Choreographer$FrameCallback;)V

    :cond_1
    return-void
.end method

.method public b()V
    .locals 2

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->k:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->k:Z

    invoke-static {}, Landroid/view/Choreographer;->getInstance()Landroid/view/Choreographer;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/blurkit/c;->s:Landroid/view/Choreographer$FrameCallback;

    invoke-virtual {v0, v1}, Landroid/view/Choreographer;->removeFrameCallback(Landroid/view/Choreographer$FrameCallback;)V

    return-void
.end method

.method public c()V
    .locals 5

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->n:Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->p:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->p:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getRootView()Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    :try_start_0
    invoke-super {p0, v1}, Landroid/widget/FrameLayout;->setAlpha(F)V

    new-instance v1, Landroid/graphics/Rect;

    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v2

    invoke-virtual {v0}, Landroid/view/View;->getHeight()I

    move-result v3

    const/4 v4, 0x0

    invoke-direct {v1, v4, v4, v2, v3}, Landroid/graphics/Rect;-><init>(IIII)V

    iget v2, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    invoke-direct {p0, v0, v1, v2}, Lcom/sigmob/sdk/base/blurkit/c;->a(Landroid/view/View;Landroid/graphics/Rect;F)Landroid/graphics/Bitmap;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->r:Landroid/graphics/Bitmap;

    iget v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->j:F

    invoke-static {v0}, Ljava/lang/Float;->isNaN(F)Z

    move-result v0

    if-eqz v0, :cond_0

    const/high16 v0, 0x3f800000    # 1.0f

    invoke-super {p0, v0}, Landroid/widget/FrameLayout;->setAlpha(F)V

    goto :goto_0

    :cond_0
    iget v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->j:F

    invoke-super {p0, v0}, Landroid/widget/FrameLayout;->setAlpha(F)V

    :goto_0
    invoke-static {}, Lcom/sigmob/sdk/base/blurkit/a;->a()Lcom/sigmob/sdk/base/blurkit/a;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/blurkit/c;->r:Landroid/graphics/Bitmap;

    iget v2, p0, Lcom/sigmob/sdk/base/blurkit/c;->g:I

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/blurkit/a;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->r:Landroid/graphics/Bitmap;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_1
    return-void
.end method

.method public d()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->n:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->r:Landroid/graphics/Bitmap;

    return-void
.end method

.method public e()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->m:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/base/blurkit/c;->getPositionInScreen()Landroid/graphics/Point;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->q:Landroid/graphics/Point;

    return-void
.end method

.method public f()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->m:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->q:Landroid/graphics/Point;

    return-void
.end method

.method public getAlpha()F
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->j:F

    return v0
.end method

.method public getBlurRadius()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->g:I

    return v0
.end method

.method public getCornerRadius()F
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->i:F

    return v0
.end method

.method public getDownscaleFactor()F
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    return v0
.end method

.method public getFPS()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->h:I

    return v0
.end method

.method public getPositionLocked()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->m:Z

    return v0
.end method

.method public getViewLocked()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->n:Z

    return v0
.end method

.method public invalidate()V
    .locals 2

    invoke-super {p0}, Landroid/widget/FrameLayout;->invalidate()V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/blurkit/c;->g()Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/blurkit/c;->o:Lcom/sigmob/sdk/base/blurkit/d;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/blurkit/d;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 1

    invoke-super {p0}, Landroid/widget/FrameLayout;->onAttachedToWindow()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->l:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->a()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    invoke-super {p0}, Landroid/widget/FrameLayout;->onDetachedFromWindow()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->l:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->b()V

    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 0

    invoke-super {p0, p1, p2, p3, p4}, Landroid/widget/FrameLayout;->onSizeChanged(IIII)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->invalidate()V

    return-void
.end method

.method public setAlpha(F)V
    .locals 1

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->j:F

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->n:Z

    if-nez v0, :cond_0

    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->setAlpha(F)V

    :cond_0
    return-void
.end method

.method public setBlurRadius(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->g:I

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->r:Landroid/graphics/Bitmap;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->invalidate()V

    return-void
.end method

.method public setCornerRadius(F)V
    .locals 1

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->i:F

    iget-object v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->o:Lcom/sigmob/sdk/base/blurkit/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/blurkit/d;->setCornerRadius(F)V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->invalidate()V

    return-void
.end method

.method public setDownscaleFactor(F)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->f:F

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->r:Landroid/graphics/Bitmap;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->invalidate()V

    return-void
.end method

.method public setFPS(I)V
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/blurkit/c;->k:Z

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->b()V

    :cond_0
    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->h:I

    iget-boolean p1, p0, Lcom/sigmob/sdk/base/blurkit/c;->l:Z

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/c;->a()V

    :cond_1
    return-void
.end method
