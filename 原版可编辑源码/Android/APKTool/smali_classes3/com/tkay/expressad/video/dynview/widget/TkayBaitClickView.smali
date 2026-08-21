.class public Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;
.super Landroid/widget/RelativeLayout;


# static fields
.field public static final ANIMATION_TYPE_DOUBLE_CLICK:I = 0x4

.field public static final ANIMATION_TYPE_FAST_SCALE:I = 0x1

.field public static final ANIMATION_TYPE_ROTATE:I = 0x5

.field public static final ANIMATION_TYPE_SLOW_SCALE:I = 0x2

.field public static final ANIMATION_TYPE_SLOW_SCALE_WITH_PAUSE:I = 0x3

.field private static final a:Ljava/lang/String; = "MBridgeAnimationClickView"


# instance fields
.field private b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

.field private c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

.field private d:Landroid/widget/TextView;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:I

.field private i:I

.field private j:Landroid/view/animation/Animation;

.field private k:Landroid/view/animation/Animation;

.field private l:Landroid/view/animation/Animation;

.field private m:Landroid/view/animation/Animation;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 75
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const-string p1, ""

    .line 63
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->e:Ljava/lang/String;

    .line 64
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->f:Ljava/lang/String;

    const-string p1, "Click now for details"

    .line 65
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->g:Ljava/lang/String;

    const/4 p1, 0x1

    .line 66
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->h:I

    const/high16 p1, 0x50000000

    .line 67
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->i:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 79
    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-string p1, ""

    .line 63
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->e:Ljava/lang/String;

    .line 64
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->f:Ljava/lang/String;

    const-string p1, "Click now for details"

    .line 65
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->g:Ljava/lang/String;

    const/4 p1, 0x1

    .line 66
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->h:I

    const/high16 p1, 0x50000000

    .line 67
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->i:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 83
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const-string p1, ""

    .line 63
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->e:Ljava/lang/String;

    .line 64
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->f:Ljava/lang/String;

    const-string p1, "Click now for details"

    .line 65
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->g:Ljava/lang/String;

    const/4 p1, 0x1

    .line 66
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->h:I

    const/high16 p1, 0x50000000

    .line 67
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->i:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    .line 88
    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    const-string p1, ""

    .line 63
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->e:Ljava/lang/String;

    .line 64
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->f:Ljava/lang/String;

    const-string p1, "Click now for details"

    .line 65
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->g:Ljava/lang/String;

    const/4 p1, 0x1

    .line 66
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->h:I

    const/high16 p1, 0x50000000

    .line 67
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->i:I

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)Lcom/tkay/expressad/video/dynview/widget/TYImageView;
    .locals 0

    .line 50
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    return-object p0
.end method

.method private a()V
    .locals 4

    .line 254
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tkay_cm_click_for_detail"

    const-string v3, "string"

    invoke-static {v1, v2, v3}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->g:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 256
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)Lcom/tkay/expressad/video/dynview/widget/TYImageView;
    .locals 0

    .line 50
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    return-object p0
.end method

.method private b()V
    .locals 12

    .line 284
    new-instance v9, Landroid/view/animation/ScaleAnimation;

    const/high16 v1, 0x3f800000    # 1.0f

    const v2, 0x3f333333    # 0.7f

    const/high16 v3, 0x3f800000    # 1.0f

    const v4, 0x3f333333    # 0.7f

    const/4 v5, 0x1

    const/high16 v6, 0x3f000000    # 0.5f

    const/4 v7, 0x1

    const/high16 v8, 0x3f000000    # 0.5f

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v9, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    const-wide/16 v0, 0xc8

    .line 285
    invoke-virtual {v9, v0, v1}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 286
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 287
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    const/4 v2, 0x2

    invoke-virtual {v0, v2}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 289
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v0, :cond_0

    .line 290
    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    .line 293
    :cond_0
    new-instance v0, Landroid/view/animation/ScaleAnimation;

    const/4 v4, 0x0

    const v5, 0x3f99999a    # 1.2f

    const/4 v6, 0x0

    const v7, 0x3f99999a    # 1.2f

    const/4 v8, 0x1

    const/high16 v9, 0x3f000000    # 0.5f

    const/4 v10, 0x1

    const/high16 v11, 0x3f000000    # 0.5f

    move-object v3, v0

    invoke-direct/range {v3 .. v11}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    const-wide/16 v2, 0x190

    .line 294
    invoke-virtual {v0, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 296
    new-instance v0, Landroid/view/animation/AlphaAnimation;

    const/high16 v4, 0x3f800000    # 1.0f

    const v5, 0x3e99999a    # 0.3f

    invoke-direct {v0, v4, v5}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    .line 297
    invoke-virtual {v0, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 298
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 299
    new-instance v0, Landroid/view/animation/AnimationSet;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Landroid/view/animation/AnimationSet;-><init>(Z)V

    .line 300
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 301
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 303
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v1, :cond_1

    .line 304
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)Landroid/view/animation/Animation;
    .locals 0

    .line 50
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    return-object p0
.end method

.method private c()V
    .locals 10

    .line 309
    new-instance v9, Landroid/view/animation/ScaleAnimation;

    const/high16 v1, 0x3f800000    # 1.0f

    const v2, 0x3f333333    # 0.7f

    const/high16 v3, 0x3f800000    # 1.0f

    const v4, 0x3f333333    # 0.7f

    const/4 v5, 0x1

    const/high16 v6, 0x3f000000    # 0.5f

    const/4 v7, 0x1

    const/high16 v8, 0x3f000000    # 0.5f

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v9, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    const-wide/16 v0, 0x1f4

    .line 310
    invoke-virtual {v9, v0, v1}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 311
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 312
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 314
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v0, :cond_0

    .line 315
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_0
    return-void
.end method

.method private d()V
    .locals 12

    .line 320
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v0, :cond_0

    const/4 v1, 0x4

    .line 321
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setVisibility(I)V

    .line 324
    :cond_0
    new-instance v0, Landroid/view/animation/ScaleAnimation;

    const/high16 v3, 0x3f800000    # 1.0f

    const v4, 0x3f333333    # 0.7f

    const/high16 v5, 0x3f800000    # 1.0f

    const v6, 0x3f333333    # 0.7f

    const/4 v7, 0x1

    const/high16 v8, 0x3f000000    # 0.5f

    const/4 v9, 0x1

    const/high16 v10, 0x3f000000    # 0.5f

    move-object v2, v0

    invoke-direct/range {v2 .. v10}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    const-wide/16 v1, 0x1f4

    .line 325
    invoke-virtual {v0, v1, v2}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 326
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 327
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    const/4 v2, 0x2

    invoke-virtual {v0, v2}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 329
    new-instance v0, Landroid/view/animation/ScaleAnimation;

    const/4 v4, 0x0

    const/high16 v5, 0x3fc00000    # 1.5f

    const/4 v6, 0x0

    const/high16 v7, 0x3fc00000    # 1.5f

    const/4 v8, 0x1

    const/high16 v9, 0x3f000000    # 0.5f

    const/4 v10, 0x1

    const/high16 v11, 0x3f000000    # 0.5f

    move-object v3, v0

    invoke-direct/range {v3 .. v11}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    const-wide/16 v2, 0x3e8

    .line 330
    invoke-virtual {v0, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 331
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    const/4 v4, 0x0

    invoke-virtual {v0, v4}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 332
    new-instance v0, Landroid/view/animation/AlphaAnimation;

    const/high16 v5, 0x3f800000    # 1.0f

    invoke-direct {v0, v5, v6}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    .line 333
    invoke-virtual {v0, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 334
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v0, v4}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 335
    new-instance v0, Landroid/view/animation/AnimationSet;

    invoke-direct {v0, v1}, Landroid/view/animation/AnimationSet;-><init>(Z)V

    .line 336
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 337
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 339
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    new-instance v2, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$3;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$3;-><init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)V

    invoke-virtual {v1, v2}, Landroid/view/animation/Animation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 360
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    new-instance v2, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;

    invoke-direct {v2, p0, v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;-><init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;Landroid/view/animation/AnimationSet;)V

    invoke-virtual {v1, v2}, Landroid/view/animation/Animation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 391
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v0, :cond_1

    .line 392
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_1
    return-void
.end method

.method private e()V
    .locals 10

    .line 398
    new-instance v9, Landroid/view/animation/ScaleAnimation;

    const v1, 0x3f4ccccd    # 0.8f

    const/high16 v2, 0x3f800000    # 1.0f

    const v3, 0x3f4ccccd    # 0.8f

    const/high16 v4, 0x3f800000    # 1.0f

    const/4 v5, 0x1

    const/high16 v6, 0x3f000000    # 0.5f

    const/4 v7, 0x1

    const/high16 v8, 0x3f000000    # 0.5f

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v9, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    const-wide/16 v0, 0xc8

    .line 399
    invoke-virtual {v9, v0, v1}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 400
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 401
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    new-instance v1, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$5;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$5;-><init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)V

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 423
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v0, :cond_0

    .line 424
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_0
    return-void
.end method

.method private f()V
    .locals 11

    .line 429
    new-instance v7, Landroid/view/animation/RotateAnimation;

    const/high16 v1, -0x3ee00000    # -10.0f

    const/high16 v2, 0x41f00000    # 30.0f

    const/4 v3, 0x1

    const/high16 v4, 0x3f000000    # 0.5f

    const/4 v5, 0x1

    const/high16 v6, 0x3f000000    # 0.5f

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Landroid/view/animation/RotateAnimation;-><init>(FFIFIF)V

    iput-object v7, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->m:Landroid/view/animation/Animation;

    const-wide/16 v0, 0x12c

    .line 430
    invoke-virtual {v7, v0, v1}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 431
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->m:Landroid/view/animation/Animation;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 432
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->m:Landroid/view/animation/Animation;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 434
    new-instance v0, Landroid/view/animation/ScaleAnimation;

    const/4 v3, 0x0

    const v4, 0x3f99999a    # 1.2f

    const/4 v5, 0x0

    const v6, 0x3f99999a    # 1.2f

    const/4 v7, 0x1

    const/high16 v8, 0x3f000000    # 0.5f

    const/4 v9, 0x1

    const/high16 v10, 0x3f000000    # 0.5f

    move-object v2, v0

    invoke-direct/range {v2 .. v10}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    const-wide/16 v2, 0x258

    .line 435
    invoke-virtual {v0, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 436
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 437
    new-instance v0, Landroid/view/animation/AlphaAnimation;

    const/high16 v4, 0x3f800000    # 1.0f

    invoke-direct {v0, v4, v5}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    .line 438
    invoke-virtual {v0, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 439
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 440
    new-instance v0, Landroid/view/animation/AnimationSet;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Landroid/view/animation/AnimationSet;-><init>(Z)V

    .line 441
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 442
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 444
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v1, :cond_0

    .line 445
    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->m:Landroid/view/animation/Animation;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    .line 448
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v1, :cond_1

    .line 449
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public init()V
    .locals 9

    const-string v0, "drawable"

    .line 133
    :try_start_0
    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->i:I

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->setBackgroundColor(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1254
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_cm_click_for_detail"

    const-string v4, "string"

    invoke-static {v2, v3, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->g:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 1256
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 137
    :goto_0
    new-instance v1, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 138
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x2

    invoke-direct {v2, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 140
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v4, 0x425c0000    # 55.0f

    invoke-static {v2, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    .line 141
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v4

    const/high16 v5, 0x42040000    # 33.0f

    invoke-static {v4, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    .line 144
    new-instance v5, Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-direct {v5, v6}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;-><init>(Landroid/content/Context;)V

    iput-object v5, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    .line 145
    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v5, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v2, 0x0

    .line 146
    invoke-virtual {v5, v4, v4, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 147
    iget-object v4, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    invoke-virtual {v4, v5}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 149
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "tkay_icon_click_circle"

    invoke-static {v4, v5, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    .line 150
    iget-object v5, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->f:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 151
    iget-object v5, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    invoke-virtual {v5, v4}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setImageResource(I)V

    goto :goto_1

    .line 153
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->e:Ljava/lang/String;

    new-instance v7, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$1;

    invoke-direct {v7, p0, v4}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$1;-><init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;I)V

    invoke-virtual {v5, v6, v7}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 168
    :goto_1
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v4

    const/high16 v5, 0x42d80000    # 108.0f

    invoke-static {v4, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    .line 169
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v6, 0x420c0000    # 35.0f

    invoke-static {v5, v6}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    .line 170
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v6

    const/high16 v7, 0x422c0000    # 43.0f

    invoke-static {v6, v7}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v6

    .line 173
    new-instance v7, Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v7, v8}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;-><init>(Landroid/content/Context;)V

    iput-object v7, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    .line 174
    new-instance v7, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v7, v4, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 175
    invoke-virtual {v7, v5, v6, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 176
    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    invoke-virtual {v2, v7}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 178
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v4, "tkay_icon_click_hand"

    invoke-static {v2, v4, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 179
    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->e:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 180
    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setImageResource(I)V

    goto :goto_2

    .line 182
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v2

    iget-object v4, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->e:Ljava/lang/String;

    new-instance v5, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$2;

    invoke-direct {v5, p0, v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$2;-><init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;I)V

    invoke-virtual {v2, v4, v5}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 197
    :goto_2
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 198
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 200
    new-instance v0, Landroid/widget/LinearLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 201
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v2, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v4, 0xd

    .line 202
    invoke-virtual {v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 203
    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const/4 v2, 0x1

    .line 204
    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->setOrientation(I)V

    .line 205
    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->setGravity(I)V

    .line 206
    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 208
    new-instance v1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->d:Landroid/widget/TextView;

    .line 209
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v1, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 210
    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->d:Landroid/widget/TextView;

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 211
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->d:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->g:Ljava/lang/String;

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 212
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->d:Landroid/widget/TextView;

    const/4 v2, -0x1

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setTextColor(I)V

    .line 213
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->d:Landroid/widget/TextView;

    const/16 v2, 0xe

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setGravity(I)V

    .line 214
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->d:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 216
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->addView(Landroid/view/View;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_1
    move-exception v0

    .line 218
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public init(I)V
    .locals 0

    .line 97
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->h:I

    .line 98
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->init()V

    return-void
.end method

.method public init(II)V
    .locals 0

    .line 108
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->i:I

    .line 109
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->h:I

    .line 110
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->init()V

    return-void
.end method

.method public init(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 123
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->i:I

    .line 124
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->h:I

    .line 125
    iput-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->e:Ljava/lang/String;

    .line 126
    iput-object p4, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->f:Ljava/lang/String;

    .line 127
    iput-object p5, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->g:Ljava/lang/String;

    .line 128
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->init()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    .line 262
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    .line 264
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->clearAnimation()V

    .line 266
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    if-eqz v0, :cond_0

    .line 267
    invoke-virtual {v0}, Landroid/view/animation/Animation;->cancel()V

    .line 270
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    if-eqz v0, :cond_1

    .line 271
    invoke-virtual {v0}, Landroid/view/animation/Animation;->cancel()V

    .line 274
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    if-eqz v0, :cond_2

    .line 275
    invoke-virtual {v0}, Landroid/view/animation/Animation;->cancel()V

    .line 278
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->m:Landroid/view/animation/Animation;

    if-eqz v0, :cond_3

    .line 279
    invoke-virtual {v0}, Landroid/view/animation/Animation;->cancel()V

    :cond_3
    return-void
.end method

.method public startAnimation()V
    .locals 20

    move-object/from16 v0, p0

    .line 223
    iget v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->h:I

    const-wide/16 v2, 0x1f4

    const/4 v4, 0x4

    const/4 v5, 0x2

    const/4 v6, -0x1

    if-eq v1, v5, :cond_a

    const/4 v7, 0x3

    const/4 v8, 0x0

    const/high16 v9, 0x3f800000    # 1.0f

    const/4 v10, 0x1

    if-eq v1, v7, :cond_7

    const-wide/16 v2, 0xc8

    if-eq v1, v4, :cond_5

    const/4 v4, 0x5

    if-eq v1, v4, :cond_2

    .line 1284
    new-instance v1, Landroid/view/animation/ScaleAnimation;

    const/high16 v12, 0x3f800000    # 1.0f

    const v13, 0x3f333333    # 0.7f

    const/high16 v14, 0x3f800000    # 1.0f

    const v15, 0x3f333333    # 0.7f

    const/16 v16, 0x1

    const/high16 v17, 0x3f000000    # 0.5f

    const/16 v18, 0x1

    const/high16 v19, 0x3f000000    # 0.5f

    move-object v11, v1

    invoke-direct/range {v11 .. v19}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    .line 1285
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1286
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v1, v6}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1287
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v1, v5}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 1289
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v1, :cond_0

    .line 1290
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    .line 1293
    :cond_0
    new-instance v1, Landroid/view/animation/ScaleAnimation;

    const/4 v12, 0x0

    const v13, 0x3f99999a    # 1.2f

    const/4 v14, 0x0

    const v15, 0x3f99999a    # 1.2f

    const/16 v16, 0x1

    const/high16 v17, 0x3f000000    # 0.5f

    const/16 v18, 0x1

    const/high16 v19, 0x3f000000    # 0.5f

    move-object v11, v1

    invoke-direct/range {v11 .. v19}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    const-wide/16 v2, 0x190

    .line 1294
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1295
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    invoke-virtual {v1, v6}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1296
    new-instance v1, Landroid/view/animation/AlphaAnimation;

    const v4, 0x3e99999a    # 0.3f

    invoke-direct {v1, v9, v4}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    .line 1297
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1298
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v1, v6}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1299
    new-instance v1, Landroid/view/animation/AnimationSet;

    invoke-direct {v1, v10}, Landroid/view/animation/AnimationSet;-><init>(Z)V

    .line 1300
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    invoke-virtual {v1, v2}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 1301
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v1, v2}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 1303
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v2, :cond_1

    .line 1304
    invoke-virtual {v2, v1}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_1
    return-void

    .line 1429
    :cond_2
    new-instance v1, Landroid/view/animation/RotateAnimation;

    const/high16 v12, -0x3ee00000    # -10.0f

    const/high16 v13, 0x41f00000    # 30.0f

    const/4 v14, 0x1

    const/high16 v15, 0x3f000000    # 0.5f

    const/16 v16, 0x1

    const/high16 v17, 0x3f000000    # 0.5f

    move-object v11, v1

    invoke-direct/range {v11 .. v17}, Landroid/view/animation/RotateAnimation;-><init>(FFIFIF)V

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->m:Landroid/view/animation/Animation;

    const-wide/16 v2, 0x12c

    .line 1430
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1431
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->m:Landroid/view/animation/Animation;

    invoke-virtual {v1, v5}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 1432
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->m:Landroid/view/animation/Animation;

    invoke-virtual {v1, v6}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1434
    new-instance v1, Landroid/view/animation/ScaleAnimation;

    const/4 v12, 0x0

    const v13, 0x3f99999a    # 1.2f

    const/4 v14, 0x0

    const v15, 0x3f99999a    # 1.2f

    const/16 v18, 0x1

    const/high16 v19, 0x3f000000    # 0.5f

    move-object v11, v1

    invoke-direct/range {v11 .. v19}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    const-wide/16 v2, 0x258

    .line 1435
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1436
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    invoke-virtual {v1, v6}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1437
    new-instance v1, Landroid/view/animation/AlphaAnimation;

    invoke-direct {v1, v9, v8}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    .line 1438
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1439
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v1, v6}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1440
    new-instance v1, Landroid/view/animation/AnimationSet;

    invoke-direct {v1, v10}, Landroid/view/animation/AnimationSet;-><init>(Z)V

    .line 1441
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    invoke-virtual {v1, v2}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 1442
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v1, v2}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 1444
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v2, :cond_3

    .line 1445
    iget-object v3, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->m:Landroid/view/animation/Animation;

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    .line 1448
    :cond_3
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v2, :cond_4

    .line 1449
    invoke-virtual {v2, v1}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_4
    return-void

    .line 239
    :cond_5
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    invoke-virtual {v1, v4}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setVisibility(I)V

    .line 1398
    new-instance v1, Landroid/view/animation/ScaleAnimation;

    const v12, 0x3f4ccccd    # 0.8f

    const/high16 v13, 0x3f800000    # 1.0f

    const v14, 0x3f4ccccd    # 0.8f

    const/high16 v15, 0x3f800000    # 1.0f

    const/16 v16, 0x1

    const/high16 v17, 0x3f000000    # 0.5f

    const/16 v18, 0x1

    const/high16 v19, 0x3f000000    # 0.5f

    move-object v11, v1

    invoke-direct/range {v11 .. v19}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    .line 1399
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1400
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v1, v10}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1401
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    new-instance v2, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$5;

    invoke-direct {v2, v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$5;-><init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)V

    invoke-virtual {v1, v2}, Landroid/view/animation/Animation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 1423
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v1, :cond_6

    .line 1424
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_6
    return-void

    .line 1320
    :cond_7
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v1, :cond_8

    .line 1321
    invoke-virtual {v1, v4}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setVisibility(I)V

    .line 1324
    :cond_8
    new-instance v1, Landroid/view/animation/ScaleAnimation;

    const/high16 v12, 0x3f800000    # 1.0f

    const v13, 0x3f333333    # 0.7f

    const/high16 v14, 0x3f800000    # 1.0f

    const v15, 0x3f333333    # 0.7f

    const/16 v16, 0x1

    const/high16 v17, 0x3f000000    # 0.5f

    const/16 v18, 0x1

    const/high16 v19, 0x3f000000    # 0.5f

    move-object v11, v1

    invoke-direct/range {v11 .. v19}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    .line 1325
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1326
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v1, v10}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1327
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v1, v5}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 1329
    new-instance v1, Landroid/view/animation/ScaleAnimation;

    const/4 v12, 0x0

    const/high16 v13, 0x3fc00000    # 1.5f

    const/4 v14, 0x0

    const/high16 v15, 0x3fc00000    # 1.5f

    move-object v11, v1

    invoke-direct/range {v11 .. v19}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    const-wide/16 v2, 0x3e8

    .line 1330
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1331
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    const/4 v4, 0x0

    invoke-virtual {v1, v4}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1332
    new-instance v1, Landroid/view/animation/AlphaAnimation;

    invoke-direct {v1, v9, v8}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    .line 1333
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1334
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v1, v4}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1335
    new-instance v1, Landroid/view/animation/AnimationSet;

    invoke-direct {v1, v10}, Landroid/view/animation/AnimationSet;-><init>(Z)V

    .line 1336
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    invoke-virtual {v1, v2}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 1337
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->l:Landroid/view/animation/Animation;

    invoke-virtual {v1, v2}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    .line 1339
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->k:Landroid/view/animation/Animation;

    new-instance v3, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$3;

    invoke-direct {v3, v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$3;-><init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)V

    invoke-virtual {v2, v3}, Landroid/view/animation/Animation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 1360
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    new-instance v3, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;

    invoke-direct {v3, v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;-><init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;Landroid/view/animation/AnimationSet;)V

    invoke-virtual {v2, v3}, Landroid/view/animation/Animation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 1391
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v1, :cond_9

    .line 1392
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_9
    return-void

    .line 230
    :cond_a
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    invoke-virtual {v1, v4}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setVisibility(I)V

    .line 1309
    new-instance v1, Landroid/view/animation/ScaleAnimation;

    const/high16 v8, 0x3f800000    # 1.0f

    const v9, 0x3f333333    # 0.7f

    const/high16 v10, 0x3f800000    # 1.0f

    const v11, 0x3f333333    # 0.7f

    const/4 v12, 0x1

    const/high16 v13, 0x3f000000    # 0.5f

    const/4 v14, 0x1

    const/high16 v15, 0x3f000000    # 0.5f

    move-object v7, v1

    invoke-direct/range {v7 .. v15}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    .line 1310
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1311
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v1, v6}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1312
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v1, v5}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 1314
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->b:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz v1, :cond_b

    .line 1315
    iget-object v2, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->j:Landroid/view/animation/Animation;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_b
    return-void
.end method
