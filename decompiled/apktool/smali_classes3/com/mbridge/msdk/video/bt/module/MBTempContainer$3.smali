.class final Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;
.super Ljava/lang/Object;
.source "MBTempContainer.java"

# interfaces
.implements Lcom/mbridge/msdk/video/bt/module/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/video/bt/module/MBTempContainer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V
    .locals 0

    .line 408
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 411
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->setInstallDialogState(Z)V

    .line 412
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->setCover(Z)V

    .line 413
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    const/4 v1, 0x2

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    .line 414
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v1, v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v2, "onInstallAlertShow"

    const-string v3, ""

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final b()V
    .locals 4

    .line 419
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->setInstallDialogState(Z)V

    .line 420
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->setCover(Z)V

    .line 421
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    .line 422
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v1, v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v2, "onInstallAlertHide"

    const-string v3, ""

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
