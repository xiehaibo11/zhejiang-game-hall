.class final Lcom/tkay/expressad/foundation/webview/BrowserView$4;
.super Landroid/webkit/WebChromeClient;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/webview/BrowserView;->b()Landroid/webkit/WebView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/webview/BrowserView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/webview/BrowserView;)V
    .locals 0

    .line 282
    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$4;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-direct {p0}, Landroid/webkit/WebChromeClient;-><init>()V

    return-void
.end method


# virtual methods
.method public final onProgressChanged(Landroid/webkit/WebView;I)V
    .locals 2

    const/16 p1, 0x64

    if-ne p2, p1, :cond_0

    .line 286
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$4;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->e(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ProgressBar;

    move-result-object p1

    const/4 p2, 0x7

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setProgressState(I)V

    .line 287
    new-instance p1, Landroid/os/Handler;

    invoke-direct {p1}, Landroid/os/Handler;-><init>()V

    new-instance p2, Lcom/tkay/expressad/foundation/webview/BrowserView$4$1;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/foundation/webview/BrowserView$4$1;-><init>(Lcom/tkay/expressad/foundation/webview/BrowserView$4;)V

    const-wide/16 v0, 0xc8

    invoke-virtual {p1, p2, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method
