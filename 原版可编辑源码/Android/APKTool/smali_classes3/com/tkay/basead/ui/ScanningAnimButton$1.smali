.class final Lcom/tkay/basead/ui/ScanningAnimButton$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/animation/ValueAnimator$AnimatorUpdateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/ScanningAnimButton;->startAnimation()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/ScanningAnimButton;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/ScanningAnimButton;)V
    .locals 0

    .line 71
    iput-object p1, p0, Lcom/tkay/basead/ui/ScanningAnimButton$1;->a:Lcom/tkay/basead/ui/ScanningAnimButton;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationUpdate(Landroid/animation/ValueAnimator;)V
    .locals 1

    .line 74
    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Float;

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result p1

    .line 75
    iget-object v0, p0, Lcom/tkay/basead/ui/ScanningAnimButton$1;->a:Lcom/tkay/basead/ui/ScanningAnimButton;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/ScanningAnimButton;->setScaleX(F)V

    .line 76
    iget-object v0, p0, Lcom/tkay/basead/ui/ScanningAnimButton$1;->a:Lcom/tkay/basead/ui/ScanningAnimButton;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/ScanningAnimButton;->setScaleY(F)V

    return-void
.end method
