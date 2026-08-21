.class final Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;
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

    .line 413
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 8

    .line 417
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->j(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->j(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/js/b;->a()Lcom/mbridge/msdk/splash/d/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 418
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->j(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/js/b;->a()Lcom/mbridge/msdk/splash/d/a;

    move-result-object p1

    const/4 v0, 0x1

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {v1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->k(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)I

    move-result v1

    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/splash/d/a;->a(II)V

    .line 420
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v2

    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->e(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v4

    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v5

    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->l(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Ljava/lang/String;

    move-result-object v6

    new-instance v7, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9$1;

    invoke-direct {v7, p0}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9$1;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashNativeView$9;)V

    const-string v3, ""

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    return-void
.end method
