.class public Lcom/tkay/expressad/video/module/TkayAlertWebview;
.super Lcom/tkay/expressad/video/module/TkayH5EndCardView;


# instance fields
.field private A:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 30
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method protected final a()Ljava/lang/String;
    .locals 4

    .line 35
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->x:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 36
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->x:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    .line 37
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/d;->J()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->A:Ljava/lang/String;

    .line 38
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 39
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->A:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method protected final b()Landroid/widget/RelativeLayout$LayoutParams;
    .locals 3

    .line 127
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    .line 128
    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    return-object v0
.end method

.method public preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 6

    .line 47
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->a()Ljava/lang/String;

    move-result-object v1

    .line 48
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->f:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 50
    new-instance v0, Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {v0, v2}, Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;-><init>(Lcom/tkay/expressad/foundation/d/c;)V

    .line 51
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;->setTitle(Ljava/lang/String;)V

    .line 52
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 53
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setCampaignId(Ljava/lang/String;)V

    const/16 v0, 0x8

    .line 54
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->setCloseVisible(I)V

    .line 55
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setApiManagerJSFactory(Ljava/lang/Object;)V

    .line 56
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    new-instance v0, Lcom/tkay/expressad/video/module/TkayAlertWebview$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/module/TkayAlertWebview$1;-><init>(Lcom/tkay/expressad/video/module/TkayAlertWebview;)V

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 97
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/h;->a()Lcom/tkay/expressad/videocommon/b/h;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/videocommon/b/h;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 98
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->setHtmlSource(Ljava/lang/String;)V

    const/4 p1, 0x0

    .line 100
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->v:Z

    .line 101
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->u:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 103
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_0

    .line 106
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->u:Ljava/lang/String;

    const/4 v5, 0x0

    const-string v3, "text/html"

    const-string v4, "UTF-8"

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setBackgroundColor(I)V

    .line 109
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->setBackgroundColor(I)V

    return-void

    .line 111
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x65

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public webviewshow()V
    .locals 2

    .line 117
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->q:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_0

    .line 118
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayAlertWebview;->q:Landroid/widget/RelativeLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    .line 120
    :cond_0
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->webviewshow()V

    return-void
.end method
