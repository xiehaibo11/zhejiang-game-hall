.class final Lcom/tkay/basead/ui/BaseScreenATView$4$2;
.super Landroid/animation/AnimatorListenerAdapter;


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

    .line 971
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$2;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationRepeat(Landroid/animation/Animator;)V
    .locals 1

    .line 975
    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationRepeat(Landroid/animation/Animator;)V

    .line 976
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$2;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView$4;->a:Lcom/tkay/basead/ui/BaseShakeView;

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    .line 977
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$2;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView$4;->b:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$2;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView$4;->c:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->u:Z

    if-nez p1, :cond_0

    .line 978
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$2;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView$4;->b:Lcom/tkay/basead/ui/BaseShakeView;

    const v0, 0x3e4ccccd    # 0.2f

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/BaseShakeView;->setAlpha(F)V

    .line 979
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4$2;->a:Lcom/tkay/basead/ui/BaseScreenATView$4;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView$4;->b:Lcom/tkay/basead/ui/BaseShakeView;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    :cond_0
    return-void
.end method
