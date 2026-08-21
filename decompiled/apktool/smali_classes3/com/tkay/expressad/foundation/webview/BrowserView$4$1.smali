.class final Lcom/tkay/expressad/foundation/webview/BrowserView$4$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/webview/BrowserView$4;->onProgressChanged(Landroid/webkit/WebView;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/webview/BrowserView$4;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/webview/BrowserView$4;)V
    .locals 0

    .line 287
    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$4$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView$4;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 290
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$4$1;->a:Lcom/tkay/expressad/foundation/webview/BrowserView$4;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/webview/BrowserView$4;->a:Lcom/tkay/expressad/foundation/webview/BrowserView;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->e(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ProgressBar;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setVisible(Z)V

    return-void
.end method
