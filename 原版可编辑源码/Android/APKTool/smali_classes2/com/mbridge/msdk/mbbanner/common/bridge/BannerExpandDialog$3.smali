.class final Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$3;
.super Ljava/lang/Object;
.source "BannerExpandDialog.java"

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$3;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDismiss(Landroid/content/DialogInterface;)V
    .locals 6

    .line 158
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$3;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->b(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Lcom/mbridge/msdk/mbbanner/common/b/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 159
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$3;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->b(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Lcom/mbridge/msdk/mbbanner/common/b/a;

    move-result-object p1

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/mbbanner/common/b/a;->a(Z)V

    .line 162
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$3;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->c(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v5, 0x0

    const-string v2, ""

    const-string v3, "text/html"

    const-string v4, "utf-8"

    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 163
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$3;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->d(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Landroid/widget/FrameLayout;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$3;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->c(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    .line 164
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$3;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->c(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->release()V

    .line 165
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$3;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->a(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 166
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$3;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->a(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;Lcom/mbridge/msdk/mbbanner/common/b/a;)Lcom/mbridge/msdk/mbbanner/common/b/a;

    return-void
.end method
