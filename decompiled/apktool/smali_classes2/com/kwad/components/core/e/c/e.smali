.class public final Lcom/kwad/components/core/e/c/e;
.super Lcom/kwad/components/core/e/c/c;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field public Jp:Lcom/kwad/components/core/e/c/b;

.field public Jq:Lcom/kwad/components/core/e/c/b$b;

.field private Jy:Ljava/lang/Runnable;

.field private Jz:Z

.field private cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private cD:Lcom/kwad/components/core/webview/a;

.field private cE:Lcom/kwad/sdk/core/webview/b;

.field private cG:Lcom/kwad/components/core/webview/jshandler/am;

.field private cH:Lcom/kwad/sdk/core/webview/d/a/a;

.field private cI:Lcom/kwad/components/core/webview/jshandler/aa$b;

.field private cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

.field private cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/c;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/e/c/e;->Jz:Z

    new-instance v0, Lcom/kwad/components/core/e/c/e$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/e/c/e$1;-><init>(Lcom/kwad/components/core/e/c/e;)V

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    new-instance v0, Lcom/kwad/components/core/e/c/e$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/e/c/e$4;-><init>(Lcom/kwad/components/core/e/c/e;)V

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->cI:Lcom/kwad/components/core/webview/jshandler/aa$b;

    new-instance v0, Lcom/kwad/components/core/e/c/e$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/e/c/e$5;-><init>(Lcom/kwad/components/core/e/c/e;)V

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

    new-instance v0, Lcom/kwad/components/core/e/c/e$6;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/e/c/e$6;-><init>(Lcom/kwad/components/core/e/c/e;)V

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    return-void
.end method

.method private a(Lcom/kwad/components/core/webview/a;)V
    .locals 7

    new-instance v6, Lcom/kwad/components/core/webview/jshandler/r;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/core/e/c/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v3, p0, Lcom/kwad/components/core/e/c/e;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    const/4 v4, 0x0

    const/4 v5, 0x1

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/kwad/components/core/webview/jshandler/r;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;ZZ)V

    invoke-virtual {p1, v6}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/core/e/c/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v3, p0, Lcom/kwad/components/core/e/c/e;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    const/4 v4, 0x1

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;I)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/x;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/x;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/t;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/t;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/aa;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/core/e/c/e;->cI:Lcom/kwad/components/core/webview/jshandler/aa$b;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/aa;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/webview/jshandler/aa$b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ah;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    iget-object v2, p0, Lcom/kwad/components/core/e/c/e;->Jq:Lcom/kwad/components/core/e/c/b$b;

    iget-object v2, v2, Lcom/kwad/components/core/e/c/b$b;->url:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/am;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/am;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ap;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/core/e/c/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance v3, Lcom/kwad/components/core/e/c/e$3;

    invoke-direct {v3, p0}, Lcom/kwad/components/core/e/c/e$3;-><init>(Lcom/kwad/components/core/e/c/e;)V

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/ap;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/z;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/z;-><init>(Lcom/kwad/components/core/webview/jshandler/z$b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ab;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/e/c/e;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/e/c/e;->Jz:Z

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/core/e/c/e;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/e/c/e;->Jz:Z

    return p1
.end method

.method private aD()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "hideWithOutAnimation  convertBridgeClicked: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/kwad/components/core/e/c/e;->Jz:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DownloadTipsDialogWebCardPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_2
    iget-boolean v0, p0, Lcom/kwad/components/core/e/c/e;->Jz:Z

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/a;->aD(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jp:Lcom/kwad/components/core/e/c/b;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Lcom/kwad/components/core/e/c/b;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jp:Lcom/kwad/components/core/e/c/b;

    iget-boolean v1, p0, Lcom/kwad/components/core/e/c/e;->Jz:Z

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/c/b;->al(Z)V

    :cond_4
    return-void
.end method

.method private av()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->Jr:Lcom/kwad/components/core/e/c/d;

    iget-object v1, v1, Lcom/kwad/components/core/e/c/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->Jr:Lcom/kwad/components/core/e/c/d;

    iget-object v1, v1, Lcom/kwad/components/core/e/c/d;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->aye:Lcom/kwad/sdk/widget/e;

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->Jr:Lcom/kwad/components/core/e/c/d;

    iget-object v1, v1, Lcom/kwad/components/core/e/c/d;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    return-void
.end method

.method private ax()V
    .locals 3

    const-string v0, "DownloadTipsDialogWebCardPresenter"

    const-string v1, "setupJsBridge"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/e;->ay()V

    new-instance v0, Lcom/kwad/components/core/webview/a;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->cD:Lcom/kwad/components/core/webview/a;

    invoke-direct {p0, v0}, Lcom/kwad/components/core/e/c/e;->a(Lcom/kwad/components/core/webview/a;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cD:Lcom/kwad/components/core/webview/a;

    const-string v2, "KwaiAd"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method private ay()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/e/c/e;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/e;->aD()V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/core/e/c/e;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/c/e;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/core/e/c/e;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/c/e;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/core/e/c/e;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/c/e;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/core/e/c/e;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/e/c/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/core/e/c/e;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/c/e;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/core/e/c/e;)Lcom/kwad/sdk/core/webview/KsAdWebView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/core/e/c/e;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/e;->nf()V

    return-void
.end method

.method static synthetic j(Lcom/kwad/components/core/e/c/e;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/c/e;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/components/core/e/c/e;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/c/e;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/core/e/c/e;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/c/e;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private nd()V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/e;->ax()V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->Jq:Lcom/kwad/components/core/e/c/b$b;

    iget-object v1, v1, Lcom/kwad/components/core/e/c/b$b;->url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/e;->ne()Ljava/lang/Runnable;

    move-result-object v1

    const-wide/16 v2, 0x5dc

    invoke-virtual {v0, v1, v2, v3}, Lcom/kwad/sdk/core/webview/KsAdWebView;->postDelayed(Ljava/lang/Runnable;J)Z

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setBackgroundColor(I)V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    return-void
.end method

.method private ne()Ljava/lang/Runnable;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jy:Ljava/lang/Runnable;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/e/c/e$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/e/c/e$2;-><init>(Lcom/kwad/components/core/e/c/e;)V

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jy:Ljava/lang/Runnable;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jy:Ljava/lang/Runnable;

    return-object v0
.end method

.method private nf()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jy:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->removeCallbacks(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method private release()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->release()V

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/e;->ay()V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/e/c/c;->ah()V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jr:Lcom/kwad/components/core/e/c/d;

    iget-object v0, v0, Lcom/kwad/components/core/e/c/d;->Jp:Lcom/kwad/components/core/e/c/b;

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jp:Lcom/kwad/components/core/e/c/b;

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jr:Lcom/kwad/components/core/e/c/d;

    iget-object v0, v0, Lcom/kwad/components/core/e/c/d;->Jq:Lcom/kwad/components/core/e/c/b$b;

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jq:Lcom/kwad/components/core/e/c/b$b;

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jr:Lcom/kwad/components/core/e/c/d;

    iget-object v0, v0, Lcom/kwad/components/core/e/c/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jr:Lcom/kwad/components/core/e/c/d;

    iget-object v0, v0, Lcom/kwad/components/core/e/c/d;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e;->Jr:Lcom/kwad/components/core/e/c/d;

    iget-object v0, v0, Lcom/kwad/components/core/e/c/d;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/e;->av()V

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/e;->nd()V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/e/c/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/report/a;->aD(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p1, p0, Lcom/kwad/components/core/e/c/e;->Jp:Lcom/kwad/components/core/e/c/b;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/core/e/c/b;->dismiss()V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/e/c/c;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_download_tips_web_card_webView:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/e/c/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/core/e/c/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-void
.end method

.method public final onDestroy()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/e/c/c;->onDestroy()V

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/e;->release()V

    return-void
.end method

.method public final onUnbind()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/e/c/c;->onUnbind()V

    invoke-direct {p0}, Lcom/kwad/components/core/e/c/e;->nf()V

    return-void
.end method
