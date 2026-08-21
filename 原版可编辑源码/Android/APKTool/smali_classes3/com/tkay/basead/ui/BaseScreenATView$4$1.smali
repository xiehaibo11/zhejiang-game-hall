.class final Lcom/tkay/basead/ui/BaseScreenATView$4$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/animation/ValueAnimator$AnimatorUpdateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseScreenATView$4;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseScreenATView$4;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseScreenATView$4;)V
    .locals 0

    .line 959
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$1;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationUpdate(Landroid/animation/ValueAnimator;)V
    .locals 1

    .line 962
    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Float;

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result p1

    .line 963
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$1;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView$4;->a:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseShakeView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    .line 964
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$1;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView$4;->a:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/BaseShakeView;->setAlpha(F)V

    .line 966
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$1;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView$4;->b:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$1;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView$4;->b:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseShakeView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_1

    .line 967
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$1;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView$4;->b:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/BaseShakeView;->setAlpha(F)V

    :cond_1
    return-void
.end method
