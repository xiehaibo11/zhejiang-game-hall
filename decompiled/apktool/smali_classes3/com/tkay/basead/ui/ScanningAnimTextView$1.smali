.class final Lcom/tkay/basead/ui/ScanningAnimTextView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/animation/ValueAnimator$AnimatorUpdateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/ScanningAnimTextView;->startAnimation()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/ScanningAnimTextView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/ScanningAnimTextView;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/tkay/basead/ui/ScanningAnimTextView$1;->a:Lcom/tkay/basead/ui/ScanningAnimTextView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationUpdate(Landroid/animation/ValueAnimator;)V
    .locals 1

    .line 78
    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Float;

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result p1

    .line 79
    iget-object v0, p0, Lcom/tkay/basead/ui/ScanningAnimTextView$1;->a:Lcom/tkay/basead/ui/ScanningAnimTextView;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/ScanningAnimTextView;->setScaleX(F)V

    .line 80
    iget-object v0, p0, Lcom/tkay/basead/ui/ScanningAnimTextView$1;->a:Lcom/tkay/basead/ui/ScanningAnimTextView;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/ScanningAnimTextView;->setScaleY(F)V

    return-void
.end method
