.class final Lcom/mbridge/msdk/splash/js/SplashExpandDialog$3;
.super Ljava/lang/Object;
.source "SplashExpandDialog.java"

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/js/SplashExpandDialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$3;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDismiss(Landroid/content/DialogInterface;)V
    .locals 6

    .line 158
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$3;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->b(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;)Lcom/mbridge/msdk/splash/d/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 159
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$3;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->b(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;)Lcom/mbridge/msdk/splash/d/a;

    move-result-object p1

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/splash/d/a;->a(Z)V

    .line 160
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$3;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->b(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;)Lcom/mbridge/msdk/splash/d/a;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/splash/d/a;->a()V

    .line 163
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$3;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->c(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v5, 0x0

    const-string v2, ""

    const-string v3, "text/html"

    const-string v4, "utf-8"

    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 164
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$3;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->d(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;)Landroid/widget/FrameLayout;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$3;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->c(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    .line 165
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$3;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->c(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->release()V

    .line 166
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$3;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->a(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 167
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$3;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->a(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;Lcom/mbridge/msdk/splash/d/a;)Lcom/mbridge/msdk/splash/d/a;

    return-void
.end method
