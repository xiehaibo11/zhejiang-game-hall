.class public final Lcom/kwad/components/core/page/b/a/b;
.super Lcom/kwad/sdk/mvp/a;


# instance fields
.field public MX:Lcom/kwad/components/core/page/a/a;

.field public MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

.field public MZ:Lcom/kwad/components/core/page/b/a/f$a;

.field public Na:Lcom/kwad/components/core/webview/jshandler/ak$b;

.field public Nb:Z

.field public Nc:Z

.field public gg:Landroid/view/ViewGroup;

.field public mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field public mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field public mAutoShow:Z

.field public mContext:Landroid/content/Context;

.field public mPageTitle:Ljava/lang/String;

.field public mPageUrl:Ljava/lang/String;

.field public mShowPermission:Z

.field public mWebCardCloseListener:Lcom/kwad/sdk/core/webview/d/a/b;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/page/b/a/b;->Nb:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/page/b/a/b;->Nc:Z

    return-void
.end method

.method private aB(Z)V
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/page/b/a/b;->Nc:Z

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/page/b/a/f$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/b;->MZ:Lcom/kwad/components/core/page/b/a/f$a;

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/ak$b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/b;->Na:Lcom/kwad/components/core/webview/jshandler/ak$b;

    const/4 p1, 0x1

    invoke-direct {p0, p1}, Lcom/kwad/components/core/page/b/a/b;->aB(Z)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/KsAdWebView$c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/b;->MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    return-void
.end method

.method public final oC()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/b;->Na:Lcom/kwad/components/core/webview/jshandler/ak$b;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/core/webview/jshandler/ak$b;->oW()V

    :cond_0
    return-void
.end method

.method public final oJ()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/page/b/a/b;->Nc:Z

    return v0
.end method

.method public final oK()Z
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/core/page/b/a/b;->oy()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public final oy()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/page/b/a/b;->mShowPermission:Z

    return v0
.end method

.method public final release()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/b;->MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/b;->MZ:Lcom/kwad/components/core/page/b/a/f$a;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/b;->mWebCardCloseListener:Lcom/kwad/sdk/core/webview/d/a/b;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/b;->Na:Lcom/kwad/components/core/webview/jshandler/ak$b;

    return-void
.end method

.method public final setWebCardCloseListener(Lcom/kwad/sdk/core/webview/d/a/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/b;->mWebCardCloseListener:Lcom/kwad/sdk/core/webview/d/a/b;

    return-void
.end method
