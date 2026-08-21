.class public Lcom/sigmob/sdk/base/common/b;
.super Landroid/view/GestureDetector$SimpleOnGestureListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/common/b$a;
    }
.end annotation


# static fields
.field private static final b:I = 0x4

.field private static final c:F = 100.0f

.field private static final d:F = 100.0f


# instance fields
.field a:Z

.field private final e:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private f:F

.field private g:F

.field private h:Z

.field private i:Z

.field private j:I

.field private k:F

.field private l:Lcom/sigmob/sdk/base/common/b$a;

.field private m:Landroid/view/View;


# direct methods
.method constructor <init>(Landroid/view/View;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 3

    invoke-direct {p0}, Landroid/view/GestureDetector$SimpleOnGestureListener;-><init>()V

    const/high16 v0, 0x42c80000    # 100.0f

    iput v0, p0, Lcom/sigmob/sdk/base/common/b;->f:F

    sget-object v1, Lcom/sigmob/sdk/base/common/b$a;->a:Lcom/sigmob/sdk/base/common/b$a;

    iput-object v1, p0, Lcom/sigmob/sdk/base/common/b;->l:Lcom/sigmob/sdk/base/common/b$a;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result v1

    if-lez v1, :cond_0

    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result v1

    int-to-float v1, v1

    const/high16 v2, 0x40400000    # 3.0f

    div-float/2addr v1, v2

    invoke-static {v0, v1}, Ljava/lang/Math;->min(FF)F

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/base/common/b;->f:F

    :cond_0
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/common/b;->a:Z

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/b;->m:Landroid/view/View;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/b;->e:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-void
.end method

.method private a(F)V
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/common/b;->k:F

    cmpl-float p1, p1, v0

    if-lez p1, :cond_0

    sget-object p1, Lcom/sigmob/sdk/base/common/b$a;->b:Lcom/sigmob/sdk/base/common/b$a;

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/b;->l:Lcom/sigmob/sdk/base/common/b$a;

    :cond_0
    return-void
.end method

.method private a(Landroid/view/MotionEvent;Landroid/view/MotionEvent;)Z
    .locals 1

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    if-nez p2, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result p1

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getY()F

    move-result p2

    sub-float/2addr p2, p1

    invoke-static {p2}, Ljava/lang/Math;->abs(F)F

    move-result p1

    const/high16 p2, 0x42c80000    # 100.0f

    cmpl-float p1, p1, p2

    if-lez p1, :cond_1

    const/4 v0, 0x1

    :cond_1
    :goto_0
    return v0
.end method

.method private b(F)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/common/b;->d(F)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/common/b;->g(F)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/b$a;->c:Lcom/sigmob/sdk/base/common/b$a;

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/b;->l:Lcom/sigmob/sdk/base/common/b$a;

    iput p1, p0, Lcom/sigmob/sdk/base/common/b;->k:F

    :cond_0
    return-void
.end method

.method private c(F)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/common/b;->e(F)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/common/b;->f(F)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/b$a;->b:Lcom/sigmob/sdk/base/common/b$a;

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/b;->l:Lcom/sigmob/sdk/base/common/b$a;

    iput p1, p0, Lcom/sigmob/sdk/base/common/b;->k:F

    :cond_0
    return-void
.end method

.method private d(F)Z
    .locals 3

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/common/b;->i:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    iget v0, p0, Lcom/sigmob/sdk/base/common/b;->k:F

    iget v2, p0, Lcom/sigmob/sdk/base/common/b;->f:F

    add-float/2addr v0, v2

    cmpl-float p1, p1, v0

    const/4 v0, 0x0

    if-ltz p1, :cond_1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/common/b;->h:Z

    iput-boolean v1, p0, Lcom/sigmob/sdk/base/common/b;->i:Z

    return v1

    :cond_1
    return v0
.end method

.method private e()V
    .locals 2

    iget v0, p0, Lcom/sigmob/sdk/base/common/b;->j:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/sigmob/sdk/base/common/b;->j:I

    const/4 v1, 0x4

    if-lt v0, v1, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/b$a;->d:Lcom/sigmob/sdk/base/common/b$a;

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/b;->l:Lcom/sigmob/sdk/base/common/b$a;

    :cond_0
    return-void
.end method

.method private e(F)Z
    .locals 3

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/common/b;->h:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    iget v0, p0, Lcom/sigmob/sdk/base/common/b;->k:F

    iget v2, p0, Lcom/sigmob/sdk/base/common/b;->f:F

    sub-float/2addr v0, v2

    cmpg-float p1, p1, v0

    const/4 v0, 0x0

    if-gtz p1, :cond_1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/common/b;->i:Z

    iput-boolean v1, p0, Lcom/sigmob/sdk/base/common/b;->h:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/b;->e()V

    return v1

    :cond_1
    return v0
.end method

.method private f(F)Z
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/common/b;->g:F

    cmpl-float p1, p1, v0

    if-lez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method private g(F)Z
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/common/b;->g:F

    cmpg-float p1, p1, v0

    if-gez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method


# virtual methods
.method a()V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/b$a;->d:Lcom/sigmob/sdk/base/common/b$a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/b;->b()V

    return-void
.end method

.method b()V
    .locals 1

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/base/common/b;->j:I

    sget-object v0, Lcom/sigmob/sdk/base/common/b$a;->a:Lcom/sigmob/sdk/base/common/b$a;

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/b;->l:Lcom/sigmob/sdk/base/common/b$a;

    return-void
.end method

.method c()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/common/b;->a:Z

    return-void
.end method

.method d()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/common/b;->a:Z

    return v0
.end method

.method public onScroll(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/b;->l:Lcom/sigmob/sdk/base/common/b$a;

    sget-object v1, Lcom/sigmob/sdk/base/common/b$a;->d:Lcom/sigmob/sdk/base/common/b$a;

    if-ne v0, v1, :cond_0

    invoke-super {p0, p1, p2, p3, p4}, Landroid/view/GestureDetector$SimpleOnGestureListener;->onScroll(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z

    move-result p1

    return p1

    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/base/common/b;->a(Landroid/view/MotionEvent;Landroid/view/MotionEvent;)Z

    move-result v0

    if-eqz v0, :cond_1

    sget-object v0, Lcom/sigmob/sdk/base/common/b$a;->e:Lcom/sigmob/sdk/base/common/b$a;

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/b;->l:Lcom/sigmob/sdk/base/common/b$a;

    :goto_0
    invoke-super {p0, p1, p2, p3, p4}, Landroid/view/GestureDetector$SimpleOnGestureListener;->onScroll(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z

    move-result p1

    return p1

    :cond_1
    sget-object v0, Lcom/sigmob/sdk/base/common/b$1;->a:[I

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/b;->l:Lcom/sigmob/sdk/base/common/b$a;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/b$a;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_4

    const/4 v1, 0x2

    if-eq v0, v1, :cond_3

    const/4 v1, 0x3

    if-eq v0, v1, :cond_2

    goto :goto_1

    :cond_2
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/base/common/b;->c(F)V

    goto :goto_1

    :cond_3
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/base/common/b;->b(F)V

    goto :goto_1

    :cond_4
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/base/common/b;->k:F

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/base/common/b;->a(F)V

    :goto_1
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/base/common/b;->g:F

    goto :goto_0
.end method

.method public onSingleTapUp(Landroid/view/MotionEvent;)Z
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/common/b;->a:Z

    invoke-super {p0, p1}, Landroid/view/GestureDetector$SimpleOnGestureListener;->onSingleTapUp(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method
