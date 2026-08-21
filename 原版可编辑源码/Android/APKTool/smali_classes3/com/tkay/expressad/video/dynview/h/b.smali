.class public final Lcom/tkay/expressad/video/dynview/h/b;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/view/View;)Landroid/animation/ObjectAnimator;
    .locals 5

    .line 1199
    sget-object v0, Landroid/view/View;->SCALE_X:Landroid/util/Property;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/h/b;->a(Landroid/util/Property;)Landroid/animation/PropertyValuesHolder;

    move-result-object v0

    .line 1200
    sget-object v1, Landroid/view/View;->SCALE_Y:Landroid/util/Property;

    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/h/b;->a(Landroid/util/Property;)Landroid/animation/PropertyValuesHolder;

    move-result-object v1

    .line 1201
    sget-object v2, Landroid/view/View;->ROTATION_X:Landroid/util/Property;

    const/high16 v3, 0x40a00000    # 5.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/video/dynview/h/b;->a(Landroid/util/Property;F)Landroid/animation/PropertyValuesHolder;

    move-result-object v2

    const/4 v3, 0x3

    new-array v3, v3, [Landroid/animation/PropertyValuesHolder;

    const/4 v4, 0x0

    aput-object v0, v3, v4

    const/4 v0, 0x1

    aput-object v1, v3, v0

    const/4 v0, 0x2

    aput-object v2, v3, v0

    .line 1202
    invoke-static {p0, v3}, Landroid/animation/ObjectAnimator;->ofPropertyValuesHolder(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;

    move-result-object p0

    const-wide/16 v0, 0x7d0

    invoke-virtual {p0, v0, v1}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object p0

    const/4 v0, -0x1

    .line 39
    invoke-virtual {p0, v0}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    return-object p0
.end method

.method private static a(Landroid/util/Property;)Landroid/animation/PropertyValuesHolder;
    .locals 7

    const/16 v0, 0xb

    new-array v0, v0, [Landroid/animation/Keyframe;

    const/high16 v1, 0x3f800000    # 1.0f

    const/4 v2, 0x0

    .line 287
    invoke-static {v2, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v0, v3

    const v2, 0x3f19999a    # 0.6f

    const v3, 0x3dcccccd    # 0.1f

    .line 288
    invoke-static {v3, v2}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x1

    aput-object v3, v0, v4

    const v3, 0x3f4ccccd    # 0.8f

    const v4, 0x3e4ccccd    # 0.2f

    .line 289
    invoke-static {v4, v3}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v4

    const/4 v5, 0x2

    aput-object v4, v0, v5

    const v4, 0x3fa66666    # 1.3f

    const v5, 0x3e99999a    # 0.3f

    .line 290
    invoke-static {v5, v4}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v5

    const/4 v6, 0x3

    aput-object v5, v0, v6

    const v5, 0x3ecccccd    # 0.4f

    .line 291
    invoke-static {v5, v3}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v5

    const/4 v6, 0x4

    aput-object v5, v0, v6

    const/high16 v5, 0x3f000000    # 0.5f

    .line 292
    invoke-static {v5, v4}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v5

    const/4 v6, 0x5

    aput-object v5, v0, v6

    const v5, 0x3f666666    # 0.9f

    .line 293
    invoke-static {v2, v5}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/4 v6, 0x6

    aput-object v2, v0, v6

    const v2, 0x3f333333    # 0.7f

    .line 294
    invoke-static {v2, v4}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/4 v4, 0x7

    aput-object v2, v0, v4

    .line 295
    invoke-static {v3, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/16 v3, 0x8

    aput-object v2, v0, v3

    const v2, 0x3f8ccccd    # 1.1f

    .line 296
    invoke-static {v5, v2}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/16 v3, 0x9

    aput-object v2, v0, v3

    .line 297
    invoke-static {v1, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v1

    const/16 v2, 0xa

    aput-object v1, v0, v2

    .line 286
    invoke-static {p0, v0}, Landroid/animation/PropertyValuesHolder;->ofKeyframe(Landroid/util/Property;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;

    move-result-object p0

    return-object p0
.end method

.method private static a(Landroid/util/Property;F)Landroid/animation/PropertyValuesHolder;
    .locals 5

    const/16 v0, 0xb

    new-array v0, v0, [Landroid/animation/Keyframe;

    const/4 v1, 0x0

    .line 311
    invoke-static {v1, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v0, v3

    const/high16 v2, -0x40000000    # -2.0f

    mul-float/2addr v2, p1

    const v3, 0x3dcccccd    # 0.1f

    .line 312
    invoke-static {v3, v2}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x1

    aput-object v3, v0, v4

    const v3, 0x3e4ccccd    # 0.2f

    .line 313
    invoke-static {v3, v2}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x2

    aput-object v3, v0, v4

    const/high16 v3, 0x40000000    # 2.0f

    mul-float/2addr p1, v3

    const v3, 0x3e99999a    # 0.3f

    .line 314
    invoke-static {v3, p1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x3

    aput-object v3, v0, v4

    const v3, 0x3ecccccd    # 0.4f

    .line 315
    invoke-static {v3, v2}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x4

    aput-object v3, v0, v4

    const/high16 v3, 0x3f000000    # 0.5f

    .line 316
    invoke-static {v3, p1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x5

    aput-object v3, v0, v4

    const v3, 0x3f19999a    # 0.6f

    .line 317
    invoke-static {v3, v2}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x6

    aput-object v3, v0, v4

    const v3, 0x3f333333    # 0.7f

    .line 318
    invoke-static {v3, p1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x7

    aput-object v3, v0, v4

    const v3, 0x3f4ccccd    # 0.8f

    .line 319
    invoke-static {v3, v2}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/16 v3, 0x8

    aput-object v2, v0, v3

    const v2, 0x3f666666    # 0.9f

    .line 320
    invoke-static {v2, p1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object p1

    const/16 v2, 0x9

    aput-object p1, v0, v2

    const/high16 p1, 0x3f800000    # 1.0f

    .line 321
    invoke-static {p1, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object p1

    const/16 v1, 0xa

    aput-object p1, v0, v1

    .line 310
    invoke-static {p0, v0}, Landroid/animation/PropertyValuesHolder;->ofKeyframe(Landroid/util/Property;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;

    move-result-object p0

    return-object p0
.end method

.method private a(Landroid/view/View;IIIIJ)V
    .locals 3

    const/4 v0, 0x2

    new-array v1, v0, [I

    const/4 v2, 0x0

    aput p2, v1, v2

    const/4 p2, 0x1

    aput p3, v1, p2

    .line 159
    invoke-static {v1}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object p3

    .line 160
    new-instance v1, Lcom/tkay/expressad/video/dynview/h/b$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/video/dynview/h/b$3;-><init>(Lcom/tkay/expressad/video/dynview/h/b;Landroid/view/View;)V

    invoke-virtual {p3, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    new-array v1, v0, [I

    aput p4, v1, v2

    aput p5, v1, p2

    .line 169
    invoke-static {v1}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object p4

    .line 170
    new-instance p5, Lcom/tkay/expressad/video/dynview/h/b$4;

    invoke-direct {p5, p0, p1}, Lcom/tkay/expressad/video/dynview/h/b$4;-><init>(Lcom/tkay/expressad/video/dynview/h/b;Landroid/view/View;)V

    invoke-virtual {p4, p5}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    .line 182
    new-instance p1, Landroid/animation/AnimatorSet;

    invoke-direct {p1}, Landroid/animation/AnimatorSet;-><init>()V

    new-array p5, v0, [Landroid/animation/Animator;

    aput-object p3, p5, v2

    aput-object p4, p5, p2

    .line 183
    invoke-virtual {p1, p5}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    .line 184
    invoke-virtual {p1, p6, p7}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    .line 185
    invoke-virtual {p1}, Landroid/animation/AnimatorSet;->start()V

    return-void
.end method

.method private a(Landroid/view/View;IIJ)V
    .locals 2

    const/4 v0, 0x2

    new-array v0, v0, [I

    const/4 v1, 0x0

    aput p2, v0, v1

    const/4 p2, 0x1

    aput p3, v0, p2

    .line 144
    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object p2

    invoke-virtual {p2, p4, p5}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    move-result-object p2

    .line 145
    new-instance p3, Lcom/tkay/expressad/video/dynview/h/b$2;

    invoke-direct {p3, p0, p1}, Lcom/tkay/expressad/video/dynview/h/b$2;-><init>(Lcom/tkay/expressad/video/dynview/h/b;Landroid/view/View;)V

    invoke-virtual {p2, p3}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    .line 154
    invoke-virtual {p2}, Landroid/animation/ValueAnimator;->start()V

    return-void
.end method

.method private a(Landroid/view/View;IJ)V
    .locals 4

    .line 216
    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    iget v0, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    const/4 v1, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x2

    if-nez v0, :cond_0

    new-array v0, v3, [I

    aput v2, v0, v2

    aput p2, v0, v1

    .line 217
    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object p2

    goto :goto_0

    :cond_0
    new-array v0, v3, [I

    aput p2, v0, v2

    aput v2, v0, v1

    .line 219
    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object p2

    .line 221
    :goto_0
    invoke-virtual {p2, p3, p4}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    .line 222
    new-instance v0, Lcom/tkay/expressad/video/dynview/h/b$5;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/video/dynview/h/b$5;-><init>(Lcom/tkay/expressad/video/dynview/h/b;Landroid/view/View;)V

    invoke-virtual {p2, v0}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    .line 231
    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    iget v0, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    if-nez v0, :cond_1

    new-array v0, v3, [F

    .line 232
    fill-array-data v0, :array_0

    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v0

    goto :goto_1

    :cond_1
    new-array v0, v3, [F

    .line 234
    fill-array-data v0, :array_1

    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v0

    .line 236
    :goto_1
    invoke-virtual {v0, p3, p4}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    .line 237
    new-instance p3, Lcom/tkay/expressad/video/dynview/h/b$6;

    invoke-direct {p3, p0, p1}, Lcom/tkay/expressad/video/dynview/h/b$6;-><init>(Lcom/tkay/expressad/video/dynview/h/b;Landroid/view/View;)V

    invoke-virtual {v0, p3}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    .line 245
    new-instance p1, Landroid/animation/AnimatorSet;

    invoke-direct {p1}, Landroid/animation/AnimatorSet;-><init>()V

    new-array p3, v3, [Landroid/animation/Animator;

    aput-object p2, p3, v2

    aput-object v0, p3, v1

    .line 246
    invoke-virtual {p1, p3}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    .line 247
    invoke-virtual {p1}, Landroid/animation/AnimatorSet;->start()V

    return-void

    nop

    :array_0
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data

    :array_1
    .array-data 4
        0x3f800000    # 1.0f
        0x0
    .end array-data
.end method

.method private a(Landroid/view/View;J)V
    .locals 5

    if-nez p1, :cond_0

    return-void

    .line 88
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v0

    int-to-float v0, v0

    float-to-int v0, v0

    .line 2216
    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    iget v1, v1, Landroid/view/ViewGroup$LayoutParams;->width:I

    const/4 v2, 0x1

    const/4 v3, 0x0

    const/4 v4, 0x2

    if-nez v1, :cond_1

    new-array v1, v4, [I

    aput v3, v1, v3

    aput v0, v1, v2

    .line 2217
    invoke-static {v1}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object v0

    goto :goto_0

    :cond_1
    new-array v1, v4, [I

    aput v0, v1, v3

    aput v3, v1, v2

    .line 2219
    invoke-static {v1}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object v0

    .line 2221
    :goto_0
    invoke-virtual {v0, p2, p3}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    .line 2222
    new-instance v1, Lcom/tkay/expressad/video/dynview/h/b$5;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/video/dynview/h/b$5;-><init>(Lcom/tkay/expressad/video/dynview/h/b;Landroid/view/View;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    .line 2231
    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    iget v1, v1, Landroid/view/ViewGroup$LayoutParams;->width:I

    if-nez v1, :cond_2

    new-array v1, v4, [F

    .line 2232
    fill-array-data v1, :array_0

    invoke-static {v1}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v1

    goto :goto_1

    :cond_2
    new-array v1, v4, [F

    .line 2234
    fill-array-data v1, :array_1

    invoke-static {v1}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v1

    .line 2236
    :goto_1
    invoke-virtual {v1, p2, p3}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    .line 2237
    new-instance p2, Lcom/tkay/expressad/video/dynview/h/b$6;

    invoke-direct {p2, p0, p1}, Lcom/tkay/expressad/video/dynview/h/b$6;-><init>(Lcom/tkay/expressad/video/dynview/h/b;Landroid/view/View;)V

    invoke-virtual {v1, p2}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    .line 2245
    new-instance p1, Landroid/animation/AnimatorSet;

    invoke-direct {p1}, Landroid/animation/AnimatorSet;-><init>()V

    new-array p2, v4, [Landroid/animation/Animator;

    aput-object v0, p2, v3

    aput-object v1, p2, v2

    .line 2246
    invoke-virtual {p1, p2}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    .line 2247
    invoke-virtual {p1}, Landroid/animation/AnimatorSet;->start()V

    return-void

    :array_0
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data

    :array_1
    .array-data 4
        0x3f800000    # 1.0f
        0x0
    .end array-data
.end method

.method private static a(Ljava/util/Map;Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;)V
    .locals 1

    if-eqz p2, :cond_0

    .line 28
    invoke-static {}, Lcom/tkay/expressad/video/dynview/i/a/a;->a()Lcom/tkay/expressad/video/dynview/i/a/a;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2}, Lcom/tkay/expressad/video/dynview/i/a/a;->a(Ljava/util/Map;Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public static b(Landroid/view/View;)Landroid/animation/ObjectAnimator;
    .locals 4

    .line 1260
    sget-object v0, Landroid/view/View;->SCALE_X:Landroid/util/Property;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/h/b;->b(Landroid/util/Property;)Landroid/animation/PropertyValuesHolder;

    move-result-object v0

    .line 1261
    sget-object v1, Landroid/view/View;->SCALE_Y:Landroid/util/Property;

    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/h/b;->b(Landroid/util/Property;)Landroid/animation/PropertyValuesHolder;

    move-result-object v1

    const/4 v2, 0x2

    new-array v2, v2, [Landroid/animation/PropertyValuesHolder;

    const/4 v3, 0x0

    aput-object v0, v2, v3

    const/4 v0, 0x1

    aput-object v1, v2, v0

    .line 1262
    invoke-static {p0, v2}, Landroid/animation/ObjectAnimator;->ofPropertyValuesHolder(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;

    move-result-object p0

    const-wide/16 v0, 0x7d0

    invoke-virtual {p0, v0, v1}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object p0

    const/4 v0, -0x1

    .line 48
    invoke-virtual {p0, v0}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    return-object p0
.end method

.method private static b(Landroid/util/Property;)Landroid/animation/PropertyValuesHolder;
    .locals 5

    const/16 v0, 0xb

    new-array v0, v0, [Landroid/animation/Keyframe;

    const/high16 v1, 0x3f800000    # 1.0f

    const/4 v2, 0x0

    .line 335
    invoke-static {v2, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v0, v3

    const v2, 0x3f19999a    # 0.6f

    const v3, 0x3dcccccd    # 0.1f

    .line 336
    invoke-static {v3, v2}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x1

    aput-object v3, v0, v4

    const v3, 0x3e4ccccd    # 0.2f

    .line 337
    invoke-static {v3, v2}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x2

    aput-object v3, v0, v4

    const v3, 0x3e99999a    # 0.3f

    .line 338
    invoke-static {v3, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x3

    aput-object v3, v0, v4

    const v3, 0x3ecccccd    # 0.4f

    .line 339
    invoke-static {v3, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x4

    aput-object v3, v0, v4

    const/high16 v3, 0x3f000000    # 0.5f

    .line 340
    invoke-static {v3, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/4 v4, 0x5

    aput-object v3, v0, v4

    .line 341
    invoke-static {v2, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/4 v3, 0x6

    aput-object v2, v0, v3

    const v2, 0x3f333333    # 0.7f

    .line 342
    invoke-static {v2, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/4 v3, 0x7

    aput-object v2, v0, v3

    const v2, 0x3f4ccccd    # 0.8f

    .line 343
    invoke-static {v2, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/16 v3, 0x8

    aput-object v2, v0, v3

    const v2, 0x3f666666    # 0.9f

    .line 344
    invoke-static {v2, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const/16 v3, 0x9

    aput-object v2, v0, v3

    .line 345
    invoke-static {v1, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v1

    const/16 v2, 0xa

    aput-object v1, v0, v2

    .line 334
    invoke-static {p0, v0}, Landroid/animation/PropertyValuesHolder;->ofKeyframe(Landroid/util/Property;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;

    move-result-object p0

    return-object p0
.end method

.method public static c(Landroid/view/View;)Landroid/animation/ObjectAnimator;
    .locals 3

    .line 1274
    sget-object v0, Landroid/view/View;->ROTATION:Landroid/util/Property;

    const/high16 v1, 0x40000000    # 2.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/dynview/h/b;->a(Landroid/util/Property;F)Landroid/animation/PropertyValuesHolder;

    move-result-object v0

    const/4 v1, 0x1

    new-array v1, v1, [Landroid/animation/PropertyValuesHolder;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    .line 1275
    invoke-static {p0, v1}, Landroid/animation/ObjectAnimator;->ofPropertyValuesHolder(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;

    move-result-object p0

    const-wide/16 v0, 0x384

    invoke-virtual {p0, v0, v1}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object p0

    const/4 v0, -0x1

    .line 74
    invoke-virtual {p0, v0}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    return-object p0
.end method

.method public static e(Landroid/view/View;)V
    .locals 2

    if-eqz p0, :cond_0

    const/4 v0, 0x0

    .line 136
    invoke-virtual {p0, v0}, Landroid/view/View;->setVisibility(I)V

    const/4 v0, 0x0

    .line 137
    invoke-virtual {p0, v0}, Landroid/view/View;->setAlpha(F)V

    .line 138
    invoke-virtual {p0}, Landroid/view/View;->animate()Landroid/view/ViewPropertyAnimator;

    move-result-object p0

    const/high16 v0, 0x3f800000    # 1.0f

    invoke-virtual {p0, v0}, Landroid/view/ViewPropertyAnimator;->alpha(F)Landroid/view/ViewPropertyAnimator;

    move-result-object p0

    const-wide/16 v0, 0x1f4

    invoke-virtual {p0, v0, v1}, Landroid/view/ViewPropertyAnimator;->setDuration(J)Landroid/view/ViewPropertyAnimator;

    :cond_0
    return-void
.end method

.method private static f(Landroid/view/View;)Landroid/view/animation/TranslateAnimation;
    .locals 10

    .line 59
    new-instance v9, Landroid/view/animation/TranslateAnimation;

    const/4 v1, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    const/4 v4, 0x0

    const/4 v5, 0x1

    const/high16 v6, 0x3f800000    # 1.0f

    const/4 v7, 0x1

    const/4 v8, 0x0

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Landroid/view/animation/TranslateAnimation;-><init>(IFIFIFIF)V

    const-wide/16 v0, 0x190

    .line 62
    invoke-virtual {v9, v0, v1}, Landroid/view/animation/TranslateAnimation;->setDuration(J)V

    const/4 v0, 0x0

    .line 63
    invoke-virtual {p0, v0}, Landroid/view/View;->setVisibility(I)V

    return-object v9
.end method

.method private static g(Landroid/view/View;)Landroid/animation/ObjectAnimator;
    .locals 5

    .line 199
    sget-object v0, Landroid/view/View;->SCALE_X:Landroid/util/Property;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/h/b;->a(Landroid/util/Property;)Landroid/animation/PropertyValuesHolder;

    move-result-object v0

    .line 200
    sget-object v1, Landroid/view/View;->SCALE_Y:Landroid/util/Property;

    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/h/b;->a(Landroid/util/Property;)Landroid/animation/PropertyValuesHolder;

    move-result-object v1

    .line 201
    sget-object v2, Landroid/view/View;->ROTATION_X:Landroid/util/Property;

    const/high16 v3, 0x40a00000    # 5.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/video/dynview/h/b;->a(Landroid/util/Property;F)Landroid/animation/PropertyValuesHolder;

    move-result-object v2

    const/4 v3, 0x3

    new-array v3, v3, [Landroid/animation/PropertyValuesHolder;

    const/4 v4, 0x0

    aput-object v0, v3, v4

    const/4 v0, 0x1

    aput-object v1, v3, v0

    const/4 v0, 0x2

    aput-object v2, v3, v0

    .line 202
    invoke-static {p0, v3}, Landroid/animation/ObjectAnimator;->ofPropertyValuesHolder(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;

    move-result-object p0

    const-wide/16 v0, 0x7d0

    invoke-virtual {p0, v0, v1}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object p0

    return-object p0
.end method

.method private static h(Landroid/view/View;)Landroid/animation/ObjectAnimator;
    .locals 4

    .line 260
    sget-object v0, Landroid/view/View;->SCALE_X:Landroid/util/Property;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/h/b;->b(Landroid/util/Property;)Landroid/animation/PropertyValuesHolder;

    move-result-object v0

    .line 261
    sget-object v1, Landroid/view/View;->SCALE_Y:Landroid/util/Property;

    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/h/b;->b(Landroid/util/Property;)Landroid/animation/PropertyValuesHolder;

    move-result-object v1

    const/4 v2, 0x2

    new-array v2, v2, [Landroid/animation/PropertyValuesHolder;

    const/4 v3, 0x0

    aput-object v0, v2, v3

    const/4 v0, 0x1

    aput-object v1, v2, v0

    .line 262
    invoke-static {p0, v2}, Landroid/animation/ObjectAnimator;->ofPropertyValuesHolder(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;

    move-result-object p0

    const-wide/16 v0, 0x7d0

    invoke-virtual {p0, v0, v1}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object p0

    return-object p0
.end method

.method private static i(Landroid/view/View;)Landroid/animation/ObjectAnimator;
    .locals 3

    .line 274
    sget-object v0, Landroid/view/View;->ROTATION:Landroid/util/Property;

    const/high16 v1, 0x40000000    # 2.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/dynview/h/b;->a(Landroid/util/Property;F)Landroid/animation/PropertyValuesHolder;

    move-result-object v0

    const/4 v1, 0x1

    new-array v1, v1, [Landroid/animation/PropertyValuesHolder;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    .line 275
    invoke-static {p0, v1}, Landroid/animation/ObjectAnimator;->ofPropertyValuesHolder(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;

    move-result-object p0

    const-wide/16 v0, 0x384

    invoke-virtual {p0, v0, v1}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final d(Landroid/view/View;)V
    .locals 3

    if-eqz p1, :cond_0

    const/high16 v0, 0x3f800000    # 1.0f

    .line 100
    invoke-virtual {p1, v0}, Landroid/view/View;->setAlpha(F)V

    .line 101
    invoke-virtual {p1}, Landroid/view/View;->animate()Landroid/view/ViewPropertyAnimator;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewPropertyAnimator;->alpha(F)Landroid/view/ViewPropertyAnimator;

    move-result-object v0

    const-wide/16 v1, 0x1f4

    invoke-virtual {v0, v1, v2}, Landroid/view/ViewPropertyAnimator;->setDuration(J)Landroid/view/ViewPropertyAnimator;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/video/dynview/h/b$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/video/dynview/h/b$1;-><init>(Lcom/tkay/expressad/video/dynview/h/b;Landroid/view/View;)V

    invoke-virtual {v0, v1}, Landroid/view/ViewPropertyAnimator;->setListener(Landroid/animation/Animator$AnimatorListener;)Landroid/view/ViewPropertyAnimator;

    :cond_0
    return-void
.end method
