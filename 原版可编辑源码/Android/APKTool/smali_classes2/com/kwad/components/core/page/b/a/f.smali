.class public final Lcom/kwad/components/core/page/b/a/f;
.super Lcom/kwad/components/core/page/b/a/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/page/b/a/f$a;
    }
.end annotation


# instance fields
.field private Nt:Z

.field private mTitleBarHelper:Lcom/kwad/components/core/b/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/a;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/a/f;)Lcom/kwad/components/core/b/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/a/f;->mTitleBarHelper:Lcom/kwad/components/core/b/a;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/a/f;Landroid/view/View;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/page/b/a/f;->w(Landroid/view/View;)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/page/b/a/f;Landroid/view/View;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/page/b/a/f;->x(Landroid/view/View;)V

    return-void
.end method

.method private getTitle()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mPageTitle:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mPageTitle:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bO(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_1
    const-string v0, "\u8be6\u60c5\u9875\u9762"

    :goto_0
    return-object v0
.end method

.method private oT()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mPageTitle:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method private oU()V
    .locals 3

    new-instance v0, Lcom/kwad/components/core/b/a;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->gg:Landroid/view/ViewGroup;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/b/a;-><init>(Landroid/view/ViewGroup;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->mTitleBarHelper:Lcom/kwad/components/core/b/a;

    new-instance v1, Lcom/kwad/components/core/b/b;

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/f;->getTitle()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/kwad/components/core/b/b;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/b/a;->a(Lcom/kwad/components/core/b/b;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->mTitleBarHelper:Lcom/kwad/components/core/b/a;

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/f;->oT()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/b/a;->aj(Z)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->mTitleBarHelper:Lcom/kwad/components/core/b/a;

    new-instance v1, Lcom/kwad/components/core/page/b/a/f$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/page/b/a/f$1;-><init>(Lcom/kwad/components/core/page/b/a/f;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/b/a;->a(Lcom/kwad/components/core/b/a$a;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->mTitleBarHelper:Lcom/kwad/components/core/b/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/b/a;->gQ()Landroid/view/ViewGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsForceJumpLandingPage:Z

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->cO(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_0

    :cond_1
    const/16 v2, 0x8

    :goto_0
    invoke-virtual {v0, v2}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    new-instance v1, Lcom/kwad/components/core/page/b/a/f$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/page/b/a/f$2;-><init>(Lcom/kwad/components/core/page/b/a/f;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/b/a/b;->a(Lcom/kwad/components/core/page/b/a/f$a;)V

    return-void
.end method

.method private w(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->canGoBack()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->goBack()V

    iget-boolean p1, p0, Lcom/kwad/components/core/page/b/a/f;->Nt:Z

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/report/a;->aB(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->MX:Lcom/kwad/components/core/page/a/a;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->MX:Lcom/kwad/components/core/page/a/a;

    invoke-interface {p1}, Lcom/kwad/components/core/page/a/a;->dE()V

    :cond_1
    return-void
.end method

.method private x(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->canGoBack()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->goBack()V

    iget-boolean p1, p0, Lcom/kwad/components/core/page/b/a/f;->Nt:Z

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/report/a;->aB(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->MX:Lcom/kwad/components/core/page/a/a;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/a/b;->MX:Lcom/kwad/components/core/page/a/a;

    invoke-interface {p1}, Lcom/kwad/components/core/page/a/a;->dF()V

    :cond_1
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/page/b/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mPageUrl:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/f;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/core/page/b/a/f;->Nt:Z

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/f;->oU()V

    return-void
.end method

.method public final onCreate()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/page/b/a/a;->onCreate()V

    return-void
.end method
