.class final Lcom/mbridge/msdk/splash/view/MBSplashNativeView$3;
.super Lcom/mbridge/msdk/shake/b;
.source "MBSplashNativeView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/view/MBSplashNativeView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;II)V
    .locals 0

    .line 554
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$3;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-direct {p0, p2, p3}, Lcom/mbridge/msdk/shake/b;-><init>(II)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 557
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d()Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 558
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d()Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 563
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$3;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->o(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 567
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$3;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->p(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-void

    .line 571
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$3;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    const/4 v1, 0x4

    invoke-static {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->a(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;I)V

    return-void
.end method
