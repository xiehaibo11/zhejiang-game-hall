.class final Lcom/tkay/expressad/video/dynview/h/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/animation/Animator$AnimatorListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/h/b;->d(Landroid/view/View;)V
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

    .line 101
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/h/b$1;->b:Lcom/tkay/expressad/video/dynview/h/b;

    iput-object p2, p0, Lcom/tkay/expressad/video/dynview/h/b$1;->a:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationCancel(Landroid/animation/Animator;)V
    .locals 1

    .line 115
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/h/b$1;->a:Landroid/view/View;

    if-eqz p1, :cond_0

    instance-of v0, p1, Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    .line 116
    check-cast p1, Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->removeAllViews()V

    :cond_0
    return-void
.end method

.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 1

    .line 108
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/h/b$1;->a:Landroid/view/View;

    if-eqz p1, :cond_0

    instance-of v0, p1, Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    .line 109
    check-cast p1, Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->removeAllViews()V

    :cond_0
    return-void
.end method

.method public final onAnimationRepeat(Landroid/animation/Animator;)V
    .locals 0

    return-void
.end method

.method public final onAnimationStart(Landroid/animation/Animator;)V
    .locals 0

    return-void
.end method
