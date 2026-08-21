.class final Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/view/TYSplashNativeView;->h()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V
    .locals 0

    .line 440
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 443
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->k(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 444
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->l(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    .line 445
    invoke-static {p1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->l(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 446
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->l(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/splash/d/a;->c()V

    .line 448
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->m(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Landroid/widget/TextView;

    move-result-object p1

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    .line 449
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->m(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Landroid/widget/TextView;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setEnabled(Z)V

    :cond_1
    return-void
.end method
