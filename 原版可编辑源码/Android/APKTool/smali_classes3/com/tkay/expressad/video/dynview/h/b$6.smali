.class final Lcom/tkay/expressad/video/dynview/h/b$6;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/animation/ValueAnimator$AnimatorUpdateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/h/b;->a(Landroid/view/View;IJ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/View;

.field final synthetic b:Lcom/tkay/expressad/video/dynview/h/b;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/h/b;Landroid/view/View;)V
    .locals 0

    .line 237
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/h/b$6;->b:Lcom/tkay/expressad/video/dynview/h/b;

    iput-object p2, p0, Lcom/tkay/expressad/video/dynview/h/b$6;->a:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationUpdate(Landroid/animation/ValueAnimator;)V
    .locals 2

    .line 240
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/h/b$6;->a:Landroid/view/View;

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Float;

    invoke-virtual {v1}, Ljava/lang/Float;->floatValue()F

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->setScaleX(F)V

    .line 241
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/h/b$6;->a:Landroid/view/View;

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Float;

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result p1

    invoke-virtual {v0, p1}, Landroid/view/View;->setScaleY(F)V

    return-void
.end method
