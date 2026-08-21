.class final Lcom/mbridge/msdk/splash/view/MBSplashNativeView$10;
.super Ljava/lang/Object;
.source "MBSplashNativeView.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


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
.method constructor <init>(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)V
    .locals 0

    .line 441
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$10;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 444
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$10;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->m(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 445
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$10;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->j(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$10;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    .line 446
    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->j(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/js/b;->a()Lcom/mbridge/msdk/splash/d/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 447
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$10;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->j(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/js/b;->a()Lcom/mbridge/msdk/splash/d/a;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/splash/d/a;->a()V

    .line 449
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$10;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->n(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Landroid/widget/TextView;

    move-result-object p1

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    .line 450
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$10;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->n(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Landroid/widget/TextView;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setEnabled(Z)V

    :cond_1
    return-void
.end method
