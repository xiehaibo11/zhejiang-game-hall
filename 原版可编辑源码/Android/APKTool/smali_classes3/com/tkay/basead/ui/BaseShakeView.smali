.class public abstract Lcom/tkay/basead/ui/BaseShakeView;
.super Landroid/widget/LinearLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/ui/BaseShakeView$a;
    }
.end annotation


# instance fields
.field protected a:Landroid/widget/ImageView;

.field b:Lcom/tkay/basead/c/h;

.field private c:Landroid/view/animation/Animation;

.field private d:I

.field private e:Lcom/tkay/basead/ui/BaseShakeView$a;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 40
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 22
    iput p1, p0, Lcom/tkay/basead/ui/BaseShakeView;->d:I

    .line 25
    new-instance p1, Lcom/tkay/basead/ui/BaseShakeView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/BaseShakeView$1;-><init>(Lcom/tkay/basead/ui/BaseShakeView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseShakeView;->b:Lcom/tkay/basead/c/h;

    .line 41
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseShakeView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 45
    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 22
    iput p1, p0, Lcom/tkay/basead/ui/BaseShakeView;->d:I

    .line 25
    new-instance p1, Lcom/tkay/basead/ui/BaseShakeView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/BaseShakeView$1;-><init>(Lcom/tkay/basead/ui/BaseShakeView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseShakeView;->b:Lcom/tkay/basead/c/h;

    .line 46
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseShakeView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 50
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    .line 22
    iput p1, p0, Lcom/tkay/basead/ui/BaseShakeView;->d:I

    .line 25
    new-instance p1, Lcom/tkay/basead/ui/BaseShakeView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/BaseShakeView$1;-><init>(Lcom/tkay/basead/ui/BaseShakeView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseShakeView;->b:Lcom/tkay/basead/c/h;

    .line 51
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseShakeView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    .line 56
    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    const/4 p1, 0x0

    .line 22
    iput p1, p0, Lcom/tkay/basead/ui/BaseShakeView;->d:I

    .line 25
    new-instance p1, Lcom/tkay/basead/ui/BaseShakeView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/BaseShakeView$1;-><init>(Lcom/tkay/basead/ui/BaseShakeView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseShakeView;->b:Lcom/tkay/basead/c/h;

    .line 57
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseShakeView;->a()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/BaseShakeView;)Lcom/tkay/basead/ui/BaseShakeView$a;
    .locals 0

    .line 18
    iget-object p0, p0, Lcom/tkay/basead/ui/BaseShakeView;->e:Lcom/tkay/basead/ui/BaseShakeView$a;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/basead/ui/BaseShakeView;)I
    .locals 2

    .line 18
    iget v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->d:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/tkay/basead/ui/BaseShakeView;->d:I

    return v0
.end method

.method private b()V
    .locals 8

    .line 82
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->a:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    .line 83
    new-instance v0, Landroid/view/animation/RotateAnimation;

    const/high16 v2, -0x3ee00000    # -10.0f

    const/high16 v3, 0x41200000    # 10.0f

    const/4 v4, 0x1

    const v5, 0x3f4ccccd    # 0.8f

    const/4 v6, 0x1

    const v7, 0x3f4ccccd    # 0.8f

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Landroid/view/animation/RotateAnimation;-><init>(FFIFIF)V

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    const-wide/16 v1, 0x96

    .line 84
    invoke-virtual {v0, v1, v2}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 85
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 86
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 87
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    new-instance v1, Lcom/tkay/basead/ui/BaseShakeView$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseShakeView$2;-><init>(Lcom/tkay/basead/ui/BaseShakeView;)V

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 101
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    new-instance v1, Lcom/tkay/basead/ui/BaseShakeView$3;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseShakeView$3;-><init>(Lcom/tkay/basead/ui/BaseShakeView;)V

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setInterpolator(Landroid/view/animation/Interpolator;)V

    .line 111
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->a:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/ui/BaseShakeView;)I
    .locals 0

    .line 18
    iget p0, p0, Lcom/tkay/basead/ui/BaseShakeView;->d:I

    return p0
.end method


# virtual methods
.method abstract a()V
.end method

.method protected onAttachedToWindow()V
    .locals 8

    .line 64
    invoke-super {p0}, Landroid/widget/LinearLayout;->onAttachedToWindow()V

    .line 1082
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->a:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    .line 1083
    new-instance v0, Landroid/view/animation/RotateAnimation;

    const/high16 v2, -0x3ee00000    # -10.0f

    const/high16 v3, 0x41200000    # 10.0f

    const/4 v4, 0x1

    const v5, 0x3f4ccccd    # 0.8f

    const/4 v6, 0x1

    const v7, 0x3f4ccccd    # 0.8f

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Landroid/view/animation/RotateAnimation;-><init>(FFIFIF)V

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    const-wide/16 v1, 0x96

    .line 1084
    invoke-virtual {v0, v1, v2}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 1085
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 1086
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 1087
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    new-instance v1, Lcom/tkay/basead/ui/BaseShakeView$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseShakeView$2;-><init>(Lcom/tkay/basead/ui/BaseShakeView;)V

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 1101
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    new-instance v1, Lcom/tkay/basead/ui/BaseShakeView$3;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseShakeView$3;-><init>(Lcom/tkay/basead/ui/BaseShakeView;)V

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setInterpolator(Landroid/view/animation/Interpolator;)V

    .line 1111
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->a:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    .line 67
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/shake/a;->a()Lcom/tkay/expressad/shake/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseShakeView;->b:Lcom/tkay/basead/c/h;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/shake/a;->a(Landroid/hardware/SensorEventListener;)V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 2

    .line 72
    invoke-super {p0}, Landroid/widget/LinearLayout;->onDetachedFromWindow()V

    .line 74
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->c:Landroid/view/animation/Animation;

    if-eqz v0, :cond_0

    .line 75
    invoke-virtual {v0}, Landroid/view/animation/Animation;->cancel()V

    .line 78
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/shake/a;->a()Lcom/tkay/expressad/shake/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseShakeView;->b:Lcom/tkay/basead/c/h;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/shake/a;->b(Landroid/hardware/SensorEventListener;)V

    return-void
.end method

.method public setOnShakeListener(Lcom/tkay/basead/ui/BaseShakeView$a;Lcom/tkay/core/common/f/j;)V
    .locals 4

    .line 117
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView;->b:Lcom/tkay/basead/c/h;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->N()I

    move-result v1

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->O()J

    move-result-wide v2

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/basead/c/h;->a(IJ)V

    .line 118
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseShakeView;->e:Lcom/tkay/basead/ui/BaseShakeView$a;

    return-void
.end method
