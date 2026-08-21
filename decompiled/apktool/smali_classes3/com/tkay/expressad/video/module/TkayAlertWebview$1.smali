.class final Lcom/tkay/expressad/video/module/TkayAlertWebview$1;
.super Lcom/tkay/expressad/atsignalcommon/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayAlertWebview;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayAlertWebview;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayAlertWebview;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview$1;->a:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/a/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 1

    .line 59
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 63
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    const-string p2, "onJSBridgeConnected"

    const-string v0, ""

    invoke-static {p1, p2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 68
    invoke-super {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/atsignalcommon/a/b;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 70
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview$1;->a:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    iget-boolean p1, p1, Lcom/tkay/expressad/video/module/TkayAlertWebview;->w:Z

    if-nez p1, :cond_0

    .line 77
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview$1;->a:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/tkay/expressad/video/module/TkayAlertWebview;->w:Z

    :cond_0
    return-void
.end method

.method public final readyState(Landroid/webkit/WebView;I)V
    .locals 1

    .line 83
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->readyState(Landroid/webkit/WebView;I)V

    .line 85
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview$1;->a:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    iget-boolean p1, p1, Lcom/tkay/expressad/video/module/TkayAlertWebview;->w:Z

    if-nez p1, :cond_1

    .line 86
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview$1;->a:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    const/4 v0, 0x1

    if-ne p2, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iput-boolean v0, p1, Lcom/tkay/expressad/video/module/TkayAlertWebview;->v:Z

    :cond_1
    return-void
.end method
