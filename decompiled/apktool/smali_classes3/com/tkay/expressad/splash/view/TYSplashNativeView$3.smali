.class final Lcom/tkay/expressad/splash/view/TYSplashNativeView$3;
.super Lcom/tkay/expressad/shake/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/view/TYSplashNativeView;->j()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic h:Lcom/tkay/expressad/splash/view/TYSplashNativeView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;II)V
    .locals 0

    .line 542
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$3;->h:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-direct {p0, p2, p3}, Lcom/tkay/expressad/shake/b;-><init>(II)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 551
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$3;->h:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->n(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 555
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$3;->h:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->o(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 559
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$3;->h:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    const/4 v1, 0x4

    invoke-static {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->a(Lcom/tkay/expressad/splash/view/TYSplashNativeView;I)V

    return-void
.end method
