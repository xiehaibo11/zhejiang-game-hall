.class final Lcom/tkay/expressad/video/dynview/h/b$5;
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

    .line 222
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/h/b$5;->b:Lcom/tkay/expressad/video/dynview/h/b;

    iput-object p2, p0, Lcom/tkay/expressad/video/dynview/h/b$5;->a:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationUpdate(Landroid/animation/ValueAnimator;)V
    .locals 1

    .line 225
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/h/b$5;->a:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 226
    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 227
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/h/b$5;->a:Landroid/view/View;

    invoke-virtual {p1, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method
