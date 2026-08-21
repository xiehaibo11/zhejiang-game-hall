.class final Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9$1;
.super Ljava/lang/Object;
.source "MBSplashNativeView.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->onClick(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;)V
    .locals 0

    .line 420
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 423
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;

    iget-object v0, v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->a(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;I)V

    return-void
.end method

.method public final b()V
    .locals 3

    .line 428
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;

    iget-object v0, v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->j(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;

    iget-object v0, v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->j(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/js/b;->a()Lcom/mbridge/msdk/splash/d/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 429
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;

    iget-object v0, v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->j(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/js/b;->a()Lcom/mbridge/msdk/splash/d/a;

    move-result-object v0

    const/4 v1, 0x2

    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;

    iget-object v2, v2, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {v2}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->k(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)I

    move-result v2

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/splash/d/a;->a(II)V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 0

    .line 435
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9$1;->a()V

    return-void
.end method
