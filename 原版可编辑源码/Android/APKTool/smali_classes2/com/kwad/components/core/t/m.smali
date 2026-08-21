.class public final Lcom/kwad/components/core/t/m;
.super Ljava/lang/Object;


# direct methods
.method public static a(Landroid/view/View;Landroid/view/animation/Interpolator;FF)Landroid/animation/Animator;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const p1, 0x3f147ae1    # 0.58f

    const/high16 v0, 0x3f800000    # 1.0f

    const/4 v1, 0x0

    invoke-static {v1, v1, p1, v0}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object p1

    const/4 v0, 0x2

    new-array v0, v0, [F

    const/4 v1, 0x0

    aput p2, v0, v1

    const/4 p2, 0x1

    aput p3, v0, p2

    const-string p2, "translationY"

    invoke-static {p0, p2, v0}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p0

    const-wide/16 p2, 0x12c

    invoke-virtual {p0, p2, p3}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    invoke-virtual {p0, p1}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    return-object p0
.end method

.method public static a(Landroid/view/View;Landroid/view/animation/Interpolator;JF)Landroid/animation/Animator;
    .locals 18

    move-object/from16 v0, p0

    move-wide/from16 v1, p2

    move/from16 v3, p4

    new-instance v4, Landroid/animation/AnimatorSet;

    invoke-direct {v4}, Landroid/animation/AnimatorSet;-><init>()V

    if-nez p1, :cond_0

    const v5, 0x3e6147ae    # 0.22f

    const v6, 0x3f170a3d    # 0.59f

    const v7, 0x3eb851ec    # 0.36f

    const/high16 v8, 0x3f800000    # 1.0f

    invoke-static {v5, v6, v7, v8}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object v5

    goto :goto_0

    :cond_0
    move-object/from16 v5, p1

    :goto_0
    const/4 v6, 0x2

    new-array v7, v6, [F

    fill-array-data v7, :array_0

    const-string v8, "alpha"

    invoke-static {v0, v8, v7}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v7

    const-wide/16 v8, 0x12c

    invoke-virtual {v7, v8, v9}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    new-array v8, v6, [F

    const/4 v9, 0x0

    const/4 v10, 0x0

    aput v9, v8, v10

    const/4 v11, 0x1

    aput v3, v8, v11

    const-string v12, "rotation"

    invoke-static {v0, v12, v8}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v8

    invoke-virtual {v8, v1, v2}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v8

    new-array v13, v6, [F

    aput v3, v13, v10

    neg-float v14, v3

    aput v14, v13, v11

    invoke-static {v0, v12, v13}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v13

    const-wide/16 v15, 0x2

    move-object/from16 v17, v12

    mul-long v11, v1, v15

    invoke-virtual {v13, v11, v12}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v13

    invoke-virtual {v13, v5}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    new-array v15, v6, [F

    aput v14, v15, v10

    const/16 v16, 0x1

    aput v3, v15, v16

    move-object/from16 v9, v17

    invoke-static {v0, v9, v15}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v15

    invoke-virtual {v15, v11, v12}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v15

    move-object/from16 v17, v4

    new-array v4, v6, [F

    aput v3, v4, v10

    aput v14, v4, v16

    invoke-static {v0, v9, v4}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v3

    invoke-virtual {v3, v11, v12}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v3

    invoke-virtual {v3, v5}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    new-array v4, v6, [F

    aput v14, v4, v10

    const/4 v5, 0x0

    aput v5, v4, v16

    invoke-static {v0, v9, v4}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    invoke-virtual {v0, v1, v2}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v0

    const/4 v1, 0x6

    new-array v1, v1, [Landroid/animation/Animator;

    aput-object v7, v1, v10

    aput-object v8, v1, v16

    aput-object v13, v1, v6

    const/4 v2, 0x3

    aput-object v15, v1, v2

    const/4 v2, 0x4

    aput-object v3, v1, v2

    const/4 v2, 0x5

    aput-object v0, v1, v2

    move-object/from16 v0, v17

    invoke-virtual {v0, v1}, Landroid/animation/AnimatorSet;->playSequentially([Landroid/animation/Animator;)V

    return-object v0

    nop

    :array_0
    .array-data 4
        0x3f800000    # 1.0f
        0x3f800000    # 1.0f
    .end array-data
.end method

.method public static b(Landroid/view/View;II)Landroid/animation/ValueAnimator;
    .locals 2

    invoke-static {p0, p1}, Lcom/kwad/components/core/t/m;->k(Landroid/view/View;I)V

    const/4 v0, 0x2

    new-array v0, v0, [I

    const/4 v1, 0x0

    aput p1, v0, v1

    const/4 p1, 0x1

    aput p2, v0, p1

    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/core/t/m$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/t/m$1;-><init>(Landroid/view/View;)V

    invoke-virtual {p1, v0}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    new-instance v0, Lcom/kwad/components/core/t/m$4;

    invoke-direct {v0, p0, p2}, Lcom/kwad/components/core/t/m$4;-><init>(Landroid/view/View;I)V

    invoke-virtual {p1, v0}, Landroid/animation/ValueAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    return-object p1
.end method

.method public static c(Landroid/view/View;II)Landroid/animation/ValueAnimator;
    .locals 2

    const/4 v0, 0x2

    new-array v0, v0, [I

    const/4 v1, 0x0

    aput p1, v0, v1

    const/4 p1, 0x1

    aput p2, v0, p1

    invoke-static {v0}, Landroid/animation/ObjectAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object p1

    new-instance p2, Lcom/kwad/components/core/t/m$5;

    invoke-direct {p2, p0}, Lcom/kwad/components/core/t/m$5;-><init>(Landroid/view/View;)V

    invoke-virtual {p1, p2}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    return-object p1
.end method

.method public static h(Landroid/view/View;Z)Landroid/animation/ValueAnimator;
    .locals 5

    const/4 v0, 0x2

    new-array v0, v0, [F

    const/4 v1, 0x0

    const/high16 v2, 0x3f800000    # 1.0f

    if-eqz p1, :cond_0

    move v3, v1

    goto :goto_0

    :cond_0
    move v3, v2

    :goto_0
    const/4 v4, 0x0

    aput v3, v0, v4

    const/4 v3, 0x1

    if-eqz p1, :cond_1

    move v4, v2

    goto :goto_1

    :cond_1
    move v4, v1

    :goto_1
    aput v4, v0, v3

    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v0

    const v3, 0x3ee66666    # 0.45f

    const v4, 0x3f19999a    # 0.6f

    invoke-static {v3, v1, v4, v2}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    const-wide/16 v1, 0x12c

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/core/t/m$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/t/m$2;-><init>(Landroid/view/View;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    new-instance v1, Lcom/kwad/components/core/t/m$3;

    invoke-direct {v1, p1, p0}, Lcom/kwad/components/core/t/m$3;-><init>(ZLandroid/view/View;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    return-object v0
.end method

.method private static k(Landroid/view/View;I)V
    .locals 1

    invoke-virtual {p0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    iput p1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    invoke-virtual {p0, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method static synthetic l(Landroid/view/View;I)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/components/core/t/m;->k(Landroid/view/View;I)V

    return-void
.end method
