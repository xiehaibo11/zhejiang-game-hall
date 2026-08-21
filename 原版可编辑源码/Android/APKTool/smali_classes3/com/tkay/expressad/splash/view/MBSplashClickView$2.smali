.class final Lcom/tkay/expressad/splash/view/MBSplashClickView$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


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

    .line 281
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$2;->b:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$2;->a:Landroid/view/animation/ScaleAnimation;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 284
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$2;->b:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->a(Lcom/tkay/expressad/splash/view/MBSplashClickView;)Landroid/widget/ImageView;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView$2;->a:Landroid/view/animation/ScaleAnimation;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method
