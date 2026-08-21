.class public final Lcom/kwad/components/core/page/c;
.super Lcom/kwad/components/core/l/c;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/components/core/l/c<",
        "Lcom/kwad/components/core/page/b/a/b;",
        ">;"
    }
.end annotation


# instance fields
.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private mAutoShow:Z

.field private mContext:Landroid/content/Context;

.field private mLandPageViewListener:Lcom/kwad/components/core/page/a/a;

.field private mPageTitle:Ljava/lang/String;

.field private mPageUrl:Ljava/lang/String;

.field private mShowPermission:Z

.field private mWebCardCloseListener:Lcom/kwad/sdk/core/webview/d/a/b;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/l/c;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public static b(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)Lcom/kwad/components/core/page/c;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/page/c;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/c;-><init>(Landroid/content/Context;)V

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/page/c;->c(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    return-object v0
.end method

.method private c(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/c;->mContext:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/page/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->ox()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/page/c;->mPageUrl:Ljava/lang/String;

    invoke-virtual {p2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->ow()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/page/c;->mPageTitle:Ljava/lang/String;

    invoke-virtual {p2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->oy()Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/components/core/page/c;->mShowPermission:Z

    invoke-virtual {p2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;->oz()Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/components/core/page/c;->mAutoShow:Z

    return-void
.end method

.method private oB()Lcom/kwad/components/core/page/b/a/b;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/page/b/a/b;

    invoke-direct {v0}, Lcom/kwad/components/core/page/b/a/b;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/core/page/c;->mContext:Landroid/content/Context;

    iput-object v1, v0, Lcom/kwad/components/core/page/b/a/b;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/kwad/components/core/page/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v1, v0, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/core/page/c;->mPageTitle:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/components/core/page/b/a/b;->mPageTitle:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/components/core/page/c;->mPageUrl:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/components/core/page/b/a/b;->mPageUrl:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/kwad/components/core/page/c;->mAutoShow:Z

    iput-boolean v1, v0, Lcom/kwad/components/core/page/b/a/b;->mAutoShow:Z

    iget-boolean v1, p0, Lcom/kwad/components/core/page/c;->mShowPermission:Z

    iput-boolean v1, v0, Lcom/kwad/components/core/page/b/a/b;->mShowPermission:Z

    iget-object v1, p0, Lcom/kwad/components/core/page/c;->mLandPageViewListener:Lcom/kwad/components/core/page/a/a;

    iput-object v1, v0, Lcom/kwad/components/core/page/b/a/b;->MX:Lcom/kwad/components/core/page/a/a;

    iget-object v1, p0, Lcom/kwad/components/core/page/c;->mWebCardCloseListener:Lcom/kwad/sdk/core/webview/d/a/b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/b/a/b;->setWebCardCloseListener(Lcom/kwad/sdk/core/webview/d/a/b;)V

    iget-object v1, p0, Lcom/kwad/components/core/page/c;->lJ:Landroid/view/ViewGroup;

    iput-object v1, v0, Lcom/kwad/components/core/page/b/a/b;->gg:Landroid/view/ViewGroup;

    return-object v0
.end method


# virtual methods
.method public final getCanInterceptBackClick()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/c;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/page/b/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/page/b/a/b;->oJ()Z

    move-result v0

    return v0
.end method

.method public final getLayoutId()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_activity_ad_webview:I

    return v0
.end method

.method public final initData()V
    .locals 0

    return-void
.end method

.method public final kv()V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_webview:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/core/page/c;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-void
.end method

.method public final synthetic kw()Lcom/kwad/sdk/mvp/a;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/page/c;->oB()Lcom/kwad/components/core/page/b/a/b;

    move-result-object v0

    return-object v0
.end method

.method public final oC()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/c;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/page/b/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/page/b/a/b;->oC()V

    return-void
.end method

.method public final oD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/c;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bm(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/c;->Li:Lcom/kwad/sdk/mvp/a;

    check-cast v1, Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/c;->Li:Lcom/kwad/sdk/mvp/a;

    check-cast v1, Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/c;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/c;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->reload()V

    return-void
.end method

.method public final onCreatePresenter()Lcom/kwad/sdk/mvp/Presenter;
    .locals 3

    new-instance v0, Lcom/kwad/sdk/mvp/Presenter;

    invoke-direct {v0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    new-instance v1, Lcom/kwad/components/core/page/b/a/f;

    invoke-direct {v1}, Lcom/kwad/components/core/page/b/a/f;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/core/page/b/a/e;

    invoke-direct {v1}, Lcom/kwad/components/core/page/b/a/e;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    iget-object v1, p0, Lcom/kwad/components/core/page/c;->Li:Lcom/kwad/sdk/mvp/a;

    check-cast v1, Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/page/b/a/c;

    invoke-direct {v1}, Lcom/kwad/components/core/page/b/a/c;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/core/page/c;->Li:Lcom/kwad/sdk/mvp/a;

    check-cast v1, Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/r/a;->pY()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/r/a;->pT()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    new-instance v1, Lcom/kwad/components/core/page/b/a/d;

    invoke-direct {v1}, Lcom/kwad/components/core/page/b/a/d;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_1
    new-instance v1, Lcom/kwad/components/core/page/b/a/g;

    invoke-direct {v1}, Lcom/kwad/components/core/page/b/a/g;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-object v0
.end method

.method public final setLandPageViewListener(Lcom/kwad/components/core/page/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/c;->mLandPageViewListener:Lcom/kwad/components/core/page/a/a;

    return-void
.end method

.method public final setWebCardCloseListener(Lcom/kwad/sdk/core/webview/d/a/b;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/core/page/c;->mWebCardCloseListener:Lcom/kwad/sdk/core/webview/d/a/b;

    iget-object v0, p0, Lcom/kwad/components/core/page/c;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Lcom/kwad/sdk/core/webview/d/a/b;->a(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V

    :cond_0
    return-void
.end method
