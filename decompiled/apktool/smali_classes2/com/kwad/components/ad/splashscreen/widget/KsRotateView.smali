.class public Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;
.super Lcom/kwad/components/ad/splashscreen/widget/b;


# static fields
.field private static Fo:I = 0x32

.field private static Fp:I = -0xc

.field private static Fq:I = -0x19

.field private static Fr:I = 0xc

.field private static Fs:I = 0x19


# instance fields
.field private Fn:Landroid/widget/ImageView;

.field private Ft:I

.field private eZ:Landroid/widget/ImageView;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/b;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/widget/b;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/components/ad/splashscreen/widget/b;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method


# virtual methods
.method protected final a(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 2

    sget-object v0, Lcom/kwad/sdk/R$styleable;->ksad_KsShakeView:[I

    const/4 v1, 0x0

    invoke-virtual {p1, p2, v0, p3, v1}, Landroid/content/Context;->obtainStyledAttributes(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;

    move-result-object p2

    sget p3, Lcom/kwad/sdk/R$styleable;->ksad_KsShakeView_ksad_shakeIcon:I

    sget v0, Lcom/kwad/sdk/R$drawable;->ksad_ic_rotate_phone:I

    invoke-virtual {p2, p3, v0}, Landroid/content/res/TypedArray;->getResourceId(II)I

    move-result p3

    iput p3, p0, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Ft:I

    invoke-virtual {p2}, Landroid/content/res/TypedArray;->recycle()V

    new-instance p2, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->getContext()Landroid/content/Context;

    move-result-object p3

    invoke-direct {p2, p3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fn:Landroid/widget/ImageView;

    sget p3, Lcom/kwad/sdk/R$drawable;->ksad_ic_rotate_line:I

    invoke-virtual {p2, p3}, Landroid/widget/ImageView;->setImageResource(I)V

    new-instance p2, Landroid/widget/FrameLayout$LayoutParams;

    const/4 p3, -0x2

    invoke-direct {p2, p3, p3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/16 v0, 0x31

    iput v0, p2, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fn:Landroid/widget/ImageView;

    invoke-virtual {p0, v0, p2}, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance p2, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p2, v0}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->eZ:Landroid/widget/ImageView;

    new-instance p2, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {p2, p3, p3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/high16 p3, 0x41b00000    # 22.0f

    invoke-static {p1, p3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p1

    iput p1, p2, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    const/4 p1, 0x1

    iput p1, p2, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->eZ:Landroid/widget/ImageView;

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method protected getAnimationDelayTime()I
    .locals 1

    const/16 v0, 0x1f4

    return v0
.end method

.method protected getInteractionView()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->eZ:Landroid/widget/ImageView;

    return-object v0
.end method

.method protected final lE()Landroid/animation/Animator;
    .locals 22

    invoke-virtual/range {p0 .. p0}, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->getInteractionView()Landroid/view/View;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    new-instance v1, Landroid/animation/AnimatorSet;

    invoke-direct {v1}, Landroid/animation/AnimatorSet;-><init>()V

    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v2

    int-to-float v2, v2

    const/high16 v3, 0x40000000    # 2.0f

    div-float/2addr v2, v3

    invoke-virtual {v0, v2}, Landroid/view/View;->setPivotX(F)V

    invoke-virtual {v0}, Landroid/view/View;->getHeight()I

    move-result v2

    int-to-float v2, v2

    div-float/2addr v2, v3

    invoke-virtual {v0, v2}, Landroid/view/View;->setPivotY(F)V

    const/4 v2, 0x2

    new-array v3, v2, [F

    const/4 v4, 0x0

    const/4 v5, 0x0

    aput v4, v3, v5

    sget v6, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fq:I

    int-to-float v6, v6

    const/4 v7, 0x1

    aput v6, v3, v7

    const-string v6, "rotation"

    invoke-static {v0, v6, v3}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v3

    const-wide/16 v8, 0x1f4

    invoke-virtual {v3, v8, v9}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v3

    new-array v10, v2, [F

    fill-array-data v10, :array_0

    const-string v11, "alpha"

    invoke-static {v0, v11, v10}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v10

    const-wide/16 v12, 0x154

    invoke-virtual {v10, v12, v13}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    new-array v14, v2, [F

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fq:I

    int-to-float v15, v15

    aput v15, v14, v5

    aput v4, v14, v7

    invoke-static {v0, v6, v14}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v14

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fo:I

    int-to-long v12, v15

    invoke-virtual {v14, v12, v13}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v12

    new-array v13, v2, [F

    aput v4, v13, v5

    sget v14, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fr:I

    int-to-float v14, v14

    aput v14, v13, v7

    invoke-static {v0, v6, v13}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v13

    sget v14, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fo:I

    int-to-long v14, v14

    invoke-virtual {v13, v14, v15}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v13

    new-array v14, v2, [F

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fr:I

    int-to-float v15, v15

    aput v15, v14, v5

    aput v4, v14, v7

    invoke-static {v0, v6, v14}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v14

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fo:I

    int-to-long v8, v15

    invoke-virtual {v14, v8, v9}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v8

    new-array v9, v2, [F

    aput v4, v9, v5

    sget v14, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fp:I

    int-to-float v14, v14

    aput v14, v9, v7

    invoke-static {v0, v6, v9}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v9

    sget v14, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fo:I

    int-to-long v14, v14

    invoke-virtual {v9, v14, v15}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v9

    new-array v14, v2, [F

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fp:I

    int-to-float v15, v15

    aput v15, v14, v5

    aput v4, v14, v7

    invoke-static {v0, v6, v14}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v14

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fo:I

    move-object/from16 v20, v8

    int-to-long v7, v15

    invoke-virtual {v14, v7, v8}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v7

    new-array v8, v2, [F

    fill-array-data v8, :array_1

    invoke-static {v0, v11, v8}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v8

    const-wide/16 v14, 0x1f4

    invoke-virtual {v8, v14, v15}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    new-array v14, v2, [F

    aput v4, v14, v5

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fs:I

    int-to-float v15, v15

    const/16 v19, 0x1

    aput v15, v14, v19

    invoke-static {v0, v6, v14}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v14

    const-wide/16 v4, 0x1f4

    invoke-virtual {v14, v4, v5}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v4

    new-array v5, v2, [F

    fill-array-data v5, :array_2

    invoke-static {v0, v11, v5}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v5

    const-wide/16 v14, 0x154

    invoke-virtual {v10, v14, v15}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    new-array v14, v2, [F

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fs:I

    int-to-float v15, v15

    const/16 v16, 0x0

    aput v15, v14, v16

    const/4 v11, 0x0

    aput v11, v14, v19

    invoke-static {v0, v6, v14}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v14

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fo:I

    move-object/from16 v17, v12

    int-to-long v11, v15

    invoke-virtual {v14, v11, v12}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v11

    new-array v12, v2, [F

    const/4 v14, 0x0

    aput v14, v12, v16

    sget v14, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fp:I

    int-to-float v14, v14

    aput v14, v12, v19

    invoke-static {v0, v6, v12}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v12

    sget v14, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fo:I

    int-to-long v14, v14

    invoke-virtual {v12, v14, v15}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v12

    new-array v14, v2, [F

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fp:I

    int-to-float v15, v15

    aput v15, v14, v16

    const/4 v15, 0x0

    aput v15, v14, v19

    invoke-static {v0, v6, v14}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v14

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fo:I

    move-object/from16 v18, v11

    move-object/from16 v21, v12

    int-to-long v11, v15

    invoke-virtual {v14, v11, v12}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v11

    new-array v12, v2, [F

    const/4 v14, 0x0

    aput v14, v12, v16

    sget v14, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fr:I

    int-to-float v14, v14

    aput v14, v12, v19

    invoke-static {v0, v6, v12}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v12

    sget v14, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fo:I

    int-to-long v14, v14

    invoke-virtual {v12, v14, v15}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v12

    new-array v14, v2, [F

    sget v15, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fr:I

    int-to-float v15, v15

    aput v15, v14, v16

    const/4 v15, 0x0

    aput v15, v14, v19

    invoke-static {v0, v6, v14}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    sget v6, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Fo:I

    int-to-long v14, v6

    invoke-virtual {v0, v14, v15}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v0

    const/16 v6, 0xf

    new-array v6, v6, [Landroid/animation/Animator;

    aput-object v3, v6, v16

    aput-object v10, v6, v19

    aput-object v17, v6, v2

    const/4 v2, 0x3

    aput-object v13, v6, v2

    const/4 v2, 0x4

    aput-object v20, v6, v2

    const/4 v2, 0x5

    aput-object v9, v6, v2

    const/4 v2, 0x6

    aput-object v7, v6, v2

    const/4 v2, 0x7

    aput-object v8, v6, v2

    const/16 v2, 0x8

    aput-object v4, v6, v2

    const/16 v2, 0x9

    aput-object v5, v6, v2

    const/16 v2, 0xa

    aput-object v18, v6, v2

    const/16 v2, 0xb

    aput-object v21, v6, v2

    const/16 v2, 0xc

    aput-object v11, v6, v2

    const/16 v2, 0xd

    aput-object v12, v6, v2

    const/16 v2, 0xe

    aput-object v0, v6, v2

    invoke-virtual {v1, v6}, Landroid/animation/AnimatorSet;->playSequentially([Landroid/animation/Animator;)V

    return-object v1

    nop

    :array_0
    .array-data 4
        0x3f800000    # 1.0f
        0x3f800000    # 1.0f
    .end array-data

    :array_1
    .array-data 4
        0x3f800000    # 1.0f
        0x3f800000    # 1.0f
    .end array-data

    :array_2
    .array-data 4
        0x3f800000    # 1.0f
        0x3f800000    # 1.0f
    .end array-data
.end method

.method protected final lF()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->getInteractionView()Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setRotation(F)V

    return-void
.end method

.method protected final ll()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->eZ:Landroid/widget/ImageView;

    iget v1, p0, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->Ft:I

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    return-void
.end method
