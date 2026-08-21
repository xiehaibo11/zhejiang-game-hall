.class final Lcom/tkay/expressad/splash/view/MBSplashClickView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/animation/Animation$AnimationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/view/MBSplashClickView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/animation/ScaleAnimation;

.field final synthetic b:Lcom/tkay/expressad/splash/view/MBSplashClickView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/view/MBSplashClickView;Landroid/view/animation/ScaleAnimation;)V
    .locals 0

    .line 255
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$1;->b:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$1;->a:Landroid/view/animation/ScaleAnimation;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/view/animation/Animation;)V
    .locals 3

    .line 263
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$1;->b:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->a(Lcom/tkay/expressad/splash/view/MBSplashClickView;)Landroid/widget/ImageView;

    move-result-object p1

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 264
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$1;->b:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->a(Lcom/tkay/expressad/splash/view/MBSplashClickView;)Landroid/widget/ImageView;

    move-result-object p1

    new-instance v0, Lcom/tkay/expressad/splash/view/MBSplashClickView$1$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView$1$1;-><init>(Lcom/tkay/expressad/splash/view/MBSplashClickView$1;)V

    const-wide/16 v1, 0x2bc

    invoke-virtual {p1, v0, v1, v2}, Landroid/widget/ImageView;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public final onAnimationRepeat(Landroid/view/animation/Animation;)V
    .locals 0

    return-void
.end method

.method public final onAnimationStart(Landroid/view/animation/Animation;)V
    .locals 1

    .line 258
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$1;->b:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->a(Lcom/tkay/expressad/splash/view/MBSplashClickView;)Landroid/widget/ImageView;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void
.end method
