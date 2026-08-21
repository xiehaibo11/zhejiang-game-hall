.class final Lcom/tkay/expressad/foundation/webview/BrowserView$2;
.super Landroid/webkit/WebViewClient;


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

    .line 222
    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$2;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 0

    .line 226
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$2;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1, p2}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;Ljava/lang/String;)Ljava/lang/String;

    .line 228
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$2;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->d(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/BrowserView$a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 229
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$2;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->d(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/BrowserView$a;

    .line 232
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$2;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->e(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ProgressBar;

    move-result-object p1

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setVisible(Z)V

    .line 234
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$2;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->e(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ProgressBar;

    move-result-object p1

    const/4 p2, 0x5

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setProgressState(I)V

    return-void
.end method

.method public final shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 2

    .line 241
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$2;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->b(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ToolBar;

    move-result-object v0

    const-string v1, "backward"

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/view/View;->setEnabled(Z)V

    .line 242
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$2;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->b(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ToolBar;

    move-result-object v0

    const-string v1, "forward"

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setEnabled(Z)V

    .line 244
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$2;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->d(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/BrowserView$a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 245
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$2;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->d(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/BrowserView$a;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/foundation/webview/BrowserView$a;->a(Landroid/webkit/WebView;Ljava/lang/String;)Z

    :cond_0
    return v1
.end method
