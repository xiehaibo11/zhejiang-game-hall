.class public Lcom/tkay/expressad/video/module/TkayLandingPageView;
.super Lcom/tkay/expressad/video/module/TkayH5EndCardView;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/module/TkayLandingPageView$a;
    }
.end annotation


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 18
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method protected final a()Ljava/lang/String;
    .locals 1

    .line 33
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayLandingPageView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    .line 35
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayLandingPageView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    .line 27
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->init(Landroid/content/Context;)V

    return-void
.end method

.method public preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 3

    .line 43
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayLandingPageView;->f:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 44
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayLandingPageView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    new-instance v2, Lcom/tkay/expressad/video/module/TkayLandingPageView$a;

    invoke-direct {v2, v1}, Lcom/tkay/expressad/video/module/TkayLandingPageView$a;-><init>(B)V

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setFilter(Lcom/tkay/expressad/atsignalcommon/base/a;)V

    .line 46
    :cond_0
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 47
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayLandingPageView;->setVisibility(I)V

    .line 48
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayLandingPageView;->setCloseVisible(I)V

    return-void
.end method

.method public webviewshow()V
    .locals 3

    .line 55
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayLandingPageView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const-string v1, "webviewshow"

    const-string v2, ""

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 57
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method
