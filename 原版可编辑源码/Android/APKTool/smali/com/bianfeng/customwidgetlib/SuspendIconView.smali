.class public Lcom/bianfeng/customwidgetlib/SuspendIconView;
.super Landroid/widget/Button;
.source "SuspendIconView.java"


# instance fields
.field private isDrug:Z

.field private mLastRawX:F

.field private mLastRawY:F

.field private mRootMeasuredHeight:I

.field private mRootMeasuredWidth:I

.field private mRootTopY:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 18
    invoke-direct {p0, p1}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 36
    iput-boolean p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->isDrug:Z

    .line 37
    iput p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredWidth:I

    .line 38
    iput p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredHeight:I

    .line 39
    iput p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootTopY:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 2

    .line 22
    invoke-direct {p0, p1, p2}, Landroid/widget/Button;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 36
    iput-boolean p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->isDrug:Z

    .line 37
    iput p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredWidth:I

    .line 38
    iput p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredHeight:I

    .line 39
    iput p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootTopY:I

    .line 23
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/ConfigurationUtils;->isLand()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 24
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->animate()Landroid/view/ViewPropertyAnimator;

    move-result-object p1

    new-instance p2, Landroid/view/animation/BounceInterpolator;

    invoke-direct {p2}, Landroid/view/animation/BounceInterpolator;-><init>()V

    invoke-virtual {p1, p2}, Landroid/view/ViewPropertyAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)Landroid/view/ViewPropertyAnimator;

    move-result-object p1

    const-wide/16 v0, 0x1f4

    .line 25
    invoke-virtual {p1, v0, v1}, Landroid/view/ViewPropertyAnimator;->setDuration(J)Landroid/view/ViewPropertyAnimator;

    move-result-object p1

    const/high16 p2, -0x3d4c0000    # -90.0f

    .line 26
    invoke-virtual {p1, p2}, Landroid/view/ViewPropertyAnimator;->rotation(F)Landroid/view/ViewPropertyAnimator;

    move-result-object p1

    .line 27
    invoke-virtual {p1}, Landroid/view/ViewPropertyAnimator;->start()V

    :cond_0
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 32
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/Button;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    .line 36
    iput-boolean p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->isDrug:Z

    .line 37
    iput p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredWidth:I

    .line 38
    iput p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredHeight:I

    .line 39
    iput p1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootTopY:I

    return-void
.end method

.method private getMeasured()V
    .locals 3

    .line 49
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    const/4 v1, 0x2

    new-array v1, v1, [I

    .line 52
    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->getLocationInWindow([I)V

    .line 54
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getMeasuredHeight()I

    move-result v2

    iput v2, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredHeight:I

    .line 55
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getMeasuredWidth()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredWidth:I

    const/4 v0, 0x1

    .line 57
    aget v0, v1, v0

    iput v0, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootTopY:I

    :cond_0
    return-void
.end method


# virtual methods
.method public dispatchTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 0

    .line 42
    invoke-super {p0, p1}, Landroid/widget/Button;->dispatchTouchEvent(Landroid/view/MotionEvent;)Z

    const/4 p1, 0x1

    return p1
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 12

    .line 64
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    .line 65
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v1

    .line 66
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_9

    const/4 v4, 0x1

    if-eq v2, v4, :cond_7

    const/4 v5, 0x2

    if-eq v2, v5, :cond_0

    goto/16 :goto_3

    :cond_0
    const/4 v2, 0x0

    cmpl-float v5, v0, v2

    if-ltz v5, :cond_a

    .line 75
    iget v5, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredWidth:I

    int-to-float v5, v5

    cmpg-float v5, v0, v5

    if-gtz v5, :cond_a

    iget v5, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootTopY:I

    int-to-float v6, v5

    cmpl-float v6, v1, v6

    if-ltz v6, :cond_a

    iget v6, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredHeight:I

    add-int/2addr v6, v5

    int-to-float v5, v6

    cmpg-float v5, v1, v5

    if-gtz v5, :cond_a

    .line 77
    iget v5, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mLastRawX:F

    sub-float v5, v0, v5

    .line 79
    iget v6, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mLastRawY:F

    sub-float v6, v1, v6

    .line 81
    iget-boolean v7, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->isDrug:Z

    if-nez v7, :cond_2

    mul-float v7, v5, v5

    mul-float v8, v6, v6

    add-float/2addr v7, v8

    float-to-double v7, v7

    .line 82
    invoke-static {v7, v8}, Ljava/lang/Math;->sqrt(D)D

    move-result-wide v7

    const-wide/high16 v9, 0x4000000000000000L    # 2.0

    cmpg-double v11, v7, v9

    if-gez v11, :cond_1

    .line 83
    iput-boolean v3, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->isDrug:Z

    goto :goto_0

    .line 85
    :cond_1
    iput-boolean v4, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->isDrug:Z

    .line 89
    :cond_2
    :goto_0
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->getX()F

    move-result v3

    .line 91
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->getY()F

    move-result v4

    add-float/2addr v3, v5

    add-float/2addr v4, v6

    .line 97
    iget v5, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredWidth:I

    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->getWidth()I

    move-result v6

    sub-int/2addr v5, v6

    int-to-float v5, v5

    .line 99
    iget v6, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mRootMeasuredHeight:I

    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->getHeight()I

    move-result v7

    sub-int/2addr v6, v7

    int-to-float v6, v6

    cmpg-float v7, v3, v2

    if-gez v7, :cond_3

    const/4 v3, 0x0

    goto :goto_1

    :cond_3
    cmpl-float v7, v3, v5

    if-lez v7, :cond_4

    move v3, v5

    :cond_4
    :goto_1
    cmpg-float v5, v4, v2

    if-gez v5, :cond_5

    goto :goto_2

    :cond_5
    cmpl-float v2, v4, v6

    if-lez v2, :cond_6

    move v2, v6

    goto :goto_2

    :cond_6
    move v2, v4

    .line 105
    :goto_2
    invoke-virtual {p0, v3}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->setX(F)V

    .line 106
    invoke-virtual {p0, v2}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->setY(F)V

    .line 108
    iput v0, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mLastRawX:F

    .line 109
    iput v1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mLastRawY:F

    goto :goto_3

    .line 115
    :cond_7
    iget-boolean v0, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->isDrug:Z

    if-eqz v0, :cond_8

    goto :goto_3

    :cond_8
    const/high16 v0, 0x42c80000    # 100.0f

    .line 134
    invoke-virtual {p0, v0}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->setX(F)V

    .line 135
    invoke-virtual {p0, v0}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->setY(F)V

    goto :goto_3

    .line 68
    :cond_9
    iput-boolean v3, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->isDrug:Z

    .line 70
    iput v0, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mLastRawX:F

    .line 71
    iput v1, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->mLastRawY:F

    .line 72
    invoke-direct {p0}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->getMeasured()V

    .line 139
    :cond_a
    :goto_3
    iget-boolean v0, p0, Lcom/bianfeng/customwidgetlib/SuspendIconView;->isDrug:Z

    if-eqz v0, :cond_b

    goto :goto_4

    :cond_b
    invoke-super {p0, p1}, Landroid/widget/Button;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result v0

    :goto_4
    return v0
.end method

.method public setRotation(I)V
    .locals 3

    .line 143
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->animate()Landroid/view/ViewPropertyAnimator;

    move-result-object v0

    new-instance v1, Landroid/view/animation/BounceInterpolator;

    invoke-direct {v1}, Landroid/view/animation/BounceInterpolator;-><init>()V

    .line 144
    invoke-virtual {v0, v1}, Landroid/view/ViewPropertyAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)Landroid/view/ViewPropertyAnimator;

    move-result-object v0

    const-wide/16 v1, 0x1f4

    .line 145
    invoke-virtual {v0, v1, v2}, Landroid/view/ViewPropertyAnimator;->setDuration(J)Landroid/view/ViewPropertyAnimator;

    move-result-object v0

    int-to-float p1, p1

    .line 146
    invoke-virtual {v0, p1}, Landroid/view/ViewPropertyAnimator;->rotation(F)Landroid/view/ViewPropertyAnimator;

    move-result-object p1

    .line 147
    invoke-virtual {p1}, Landroid/view/ViewPropertyAnimator;->start()V

    return-void
.end method
