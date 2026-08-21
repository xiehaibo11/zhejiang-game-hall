.class public final Lcom/kwad/components/core/page/b/f;
.super Lcom/kwad/components/core/page/b/c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/page/b/f$a;
    }
.end annotation


# instance fields
.field private MS:I

.field private MT:Landroid/view/ViewGroup;

.field private final MU:Lcom/kwad/components/core/page/b/f$a;

.field private Ms:Landroid/webkit/WebView;

.field private cD:Lcom/kwad/components/core/webview/a;

.field private cE:Lcom/kwad/sdk/core/webview/b;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private final mIsRewardLandPage:Z


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/page/b/f$a;Z)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/c;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/core/page/b/f;->MS:I

    iput-object p1, p0, Lcom/kwad/components/core/page/b/f;->MU:Lcom/kwad/components/core/page/b/f$a;

    iput-boolean p2, p0, Lcom/kwad/components/core/page/b/f;->mIsRewardLandPage:Z

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/f;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/components/core/page/b/f;->MS:I

    return p1
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/f;)Lcom/kwad/components/core/page/b/f$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/f;->MU:Lcom/kwad/components/core/page/b/f$a;

    return-object p0
.end method

.method private a(Lcom/kwad/components/core/webview/a;)V
    .locals 8

    const-string v0, "LandPageWebViewPresenter"

    const-string v1, "registerWebCardHandler"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v4, Lcom/kwad/components/core/e/d/c;

    iget-object v0, p0, Lcom/kwad/components/core/page/b/f;->MQ:Lcom/kwad/components/core/page/b/d;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v4, v0}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/f;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/x;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/f;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/x;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ap;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/f;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1, v4}, Lcom/kwad/components/core/webview/jshandler/ap;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/t;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/f;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/t;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/am;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/am;-><init>()V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ah;

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/f;->oI()Lcom/kwad/components/core/webview/jshandler/ah$b;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/page/b/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->bh(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ab;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/f;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/af;

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/f;->getOpenNewPageListener()Lcom/kwad/components/core/webview/jshandler/af$a;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/af;-><init>(Lcom/kwad/components/core/webview/jshandler/af$a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/r;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/f;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 v2, 0x0

    invoke-direct {v0, v1, v4, v2}, Lcom/kwad/components/core/webview/jshandler/r;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v3, p0, Lcom/kwad/components/core/page/b/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-boolean v7, p0, Lcom/kwad/components/core/page/b/f;->mIsRewardLandPage:Z

    const/4 v5, 0x0

    const/4 v6, 0x2

    move-object v2, v0

    invoke-direct/range {v2 .. v7}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;IZ)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method private as(Ljava/lang/String;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/f;->ax()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/f;->Ms:Landroid/webkit/WebView;

    invoke-virtual {v0, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method private av()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/f;->MT:Landroid/view/ViewGroup;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/core/page/b/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/f;->Ms:Landroid/webkit/WebView;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    return-void
.end method

.method private ax()V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/f;->ay()V

    new-instance v0, Lcom/kwad/components/core/webview/a;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/f;->Ms:Landroid/webkit/WebView;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/f;->cD:Lcom/kwad/components/core/webview/a;

    invoke-direct {p0, v0}, Lcom/kwad/components/core/page/b/f;->a(Lcom/kwad/components/core/webview/a;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/f;->Ms:Landroid/webkit/WebView;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/f;->cD:Lcom/kwad/components/core/webview/a;

    const-string v2, "KwaiAd"

    invoke-virtual {v0, v1, v2}, Landroid/webkit/WebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method private ay()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/f;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/page/b/f;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/page/b/f;)Landroid/view/ViewGroup;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/f;->MT:Landroid/view/ViewGroup;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/core/page/b/f;)Landroid/webkit/WebView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/f;->Ms:Landroid/webkit/WebView;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/core/page/b/f;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private getOpenNewPageListener()Lcom/kwad/components/core/webview/jshandler/af$a;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/page/b/f$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/f$2;-><init>(Lcom/kwad/components/core/page/b/f;)V

    return-object v0
.end method

.method private oI()Lcom/kwad/components/core/webview/jshandler/ah$b;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/page/b/f$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/f$1;-><init>(Lcom/kwad/components/core/page/b/f;)V

    return-object v0
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/page/b/c;->ah()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/f;->MQ:Lcom/kwad/components/core/page/b/d;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bh(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/f;->av()V

    invoke-direct {p0, v0}, Lcom/kwad/components/core/page/b/f;->as(Ljava/lang/String;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/b/f;->MU:Lcom/kwad/components/core/page/b/f$a;

    if-eqz v0, :cond_1

    iget v1, p0, Lcom/kwad/components/core/page/b/f;->MS:I

    invoke-interface {v0, v1}, Lcom/kwad/components/core/page/b/f$a;->ax(I)V

    :cond_1
    return-void
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/page/b/c;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_landing_page_webview:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/b/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/webkit/WebView;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/f;->Ms:Landroid/webkit/WebView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_web_card_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/b/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/f;->MT:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/core/page/b/f;->Ms:Landroid/webkit/WebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setBackgroundColor(I)V

    return-void
.end method

.method public final onUnbind()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/page/b/c;->onUnbind()V

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/f;->ay()V

    return-void
.end method
