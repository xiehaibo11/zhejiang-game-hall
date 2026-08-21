.class final Lcom/mbridge/msdk/foundation/webview/BrowserView$1;
.super Ljava/lang/Object;
.source "BrowserView.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/webview/BrowserView;->init()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/webview/BrowserView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/webview/BrowserView;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 5

    .line 94
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 95
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->stopLoading()V

    .line 97
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    const-string v0, "backward"

    .line 98
    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    const-string v3, "forward"

    const/4 v4, 0x1

    if-eqz v1, :cond_3

    .line 99
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->b(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Lcom/mbridge/msdk/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, v4}, Landroid/view/View;->setEnabled(Z)V

    .line 100
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    invoke-virtual {p1}, Landroid/webkit/WebView;->canGoBack()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 101
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    invoke-virtual {p1}, Landroid/webkit/WebView;->goBack()V

    .line 103
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->b(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Lcom/mbridge/msdk/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoBack()Z

    move-result v0

    if-eqz v0, :cond_2

    move v2, v4

    :cond_2
    invoke-virtual {p1, v2}, Landroid/view/View;->setEnabled(Z)V

    goto/16 :goto_1

    .line 104
    :cond_3
    invoke-static {p1, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 105
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->b(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Lcom/mbridge/msdk/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, v4}, Landroid/view/View;->setEnabled(Z)V

    .line 106
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    invoke-virtual {p1}, Landroid/webkit/WebView;->canGoForward()Z

    move-result p1

    if-eqz p1, :cond_4

    .line 107
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    invoke-virtual {p1}, Landroid/webkit/WebView;->goForward()V

    .line 109
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->b(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Lcom/mbridge/msdk/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoForward()Z

    move-result v0

    if-eqz v0, :cond_5

    move v2, v4

    :cond_5
    invoke-virtual {p1, v2}, Landroid/view/View;->setEnabled(Z)V

    goto/16 :goto_1

    :cond_6
    const-string v1, "refresh"

    .line 110
    invoke-static {p1, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_9

    .line 111
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->b(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Lcom/mbridge/msdk/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

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

    .line 112
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->b(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Lcom/mbridge/msdk/foundation/webview/ToolBar;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoForward()Z

    move-result v0

    if-eqz v0, :cond_8

    move v2, v4

    :cond_8
    invoke-virtual {p1, v2}, Landroid/view/View;->setEnabled(Z)V

    .line 113
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    if-eqz p1, :cond_a

    .line 114
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->a(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Landroid/webkit/WebView;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->c(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_1

    :cond_9
    const-string v0, "exits"

    .line 116
    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_a

    .line 117
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->d(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Lcom/mbridge/msdk/foundation/webview/BrowserView$a;

    move-result-object p1

    if-eqz p1, :cond_a

    .line 118
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$1;->a:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->d(Lcom/mbridge/msdk/foundation/webview/BrowserView;)Lcom/mbridge/msdk/foundation/webview/BrowserView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/foundation/webview/BrowserView$a;->a()V

    :cond_a
    :goto_1
    return-void
.end method
