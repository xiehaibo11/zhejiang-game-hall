.class final Lcom/tkay/expressad/splash/view/MBSplashClickView$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/view/MBSplashClickView$1;->onAnimationEnd(Landroid/view/animation/Animation;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/view/MBSplashClickView$1;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/view/MBSplashClickView$1;)V
    .locals 0

    .line 264
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$1$1;->a:Lcom/tkay/expressad/splash/view/MBSplashClickView$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 267
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$1$1;->a:Lcom/tkay/expressad/splash/view/MBSplashClickView$1;

    iget-object v0, v0, Lcom/tkay/expressad/splash/view/MBSplashClickView$1;->b:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->a(Lcom/tkay/expressad/splash/view/MBSplashClickView;)Landroid/widget/ImageView;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$1$1;->a:Lcom/tkay/expressad/splash/view/MBSplashClickView$1;

    iget-object v1, v1, Lcom/tkay/expressad/splash/view/MBSplashClickView$1;->a:Landroid/view/animation/ScaleAnimation;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method
