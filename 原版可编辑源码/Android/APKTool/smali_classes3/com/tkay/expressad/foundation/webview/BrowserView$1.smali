.class final Lcom/tkay/expressad/foundation/webview/BrowserView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/webview/BrowserView;->init()V
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

    .line 85
    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 5

    .line 88
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 89
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->stopLoading()V

    .line 91
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    const-string v0, "backward"

    .line 92
    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    const-string v3, "forward"

    const/4 v4, 0x1

    if-eqz v1, :cond_3

    .line 93
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->b(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, v4}, Landroid/view/View;->setEnabled(Z)V

    .line 94
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    invoke-virtual {p1}, Landroid/webkit/WebView;->canGoBack()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 95
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    invoke-virtual {p1}, Landroid/webkit/WebView;->goBack()V

    .line 97
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->b(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoBack()Z

    move-result v0

    if-eqz v0, :cond_2

    move v2, v4

    :cond_2
    invoke-virtual {p1, v2}, Landroid/view/View;->setEnabled(Z)V

    return-void

    .line 98
    :cond_3
    invoke-static {p1, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 99
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->b(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, v4}, Landroid/view/View;->setEnabled(Z)V

    .line 100
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    invoke-virtual {p1}, Landroid/webkit/WebView;->canGoForward()Z

    move-result p1

    if-eqz p1, :cond_4

    .line 101
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    invoke-virtual {p1}, Landroid/webkit/WebView;->goForward()V

    .line 103
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->b(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoForward()Z

    move-result v0

    if-eqz v0, :cond_5

    move v2, v4

    :cond_5
    invoke-virtual {p1, v2}, Landroid/view/View;->setEnabled(Z)V

    return-void

    :cond_6
    const-string v1, "refresh"

    .line 104
    invoke-static {p1, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_9

    .line 105
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->b(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoBack()Z

    move-result v0

    if-eqz v0, :cond_7

    move v0, v4

    goto :goto_0

    :cond_7
    move v0, v2

    :goto_0
    invoke-virtual {p1, v0}, Landroid/view/View;->setEnabled(Z)V

    .line 106
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->b(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoForward()Z

    move-result v0

    if-eqz v0, :cond_8

    move v2, v4

    :cond_8
    invoke-virtual {p1, v2}, Landroid/view/View;->setEnabled(Z)V

    .line 107
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    if-eqz p1, :cond_a

    .line 108
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->c(Lcom/tkay/expressad/foundation/webview/BrowserView;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return-void

    :cond_9
    const-string v0, "exits"

    .line 110
    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_a

    .line 111
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->d(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/BrowserView$a;

    move-result-object p1

    if-eqz p1, :cond_a

    .line 112
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->d(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/BrowserView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/foundation/webview/BrowserView$a;->a()V

    :cond_a
    return-void
.end method
