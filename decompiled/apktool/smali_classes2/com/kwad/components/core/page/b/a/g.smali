.class public final Lcom/kwad/components/core/page/b/a/g;
.super Lcom/kwad/components/core/page/b/a/a;


# instance fields
.field private Na:Lcom/kwad/components/core/webview/jshandler/ak$b;

.field private Nv:Lcom/kwad/components/core/webview/b;

.field private Nw:Z

.field private Nx:Lcom/kwad/components/core/webview/jshandler/am;

.field private Ny:Lcom/kwad/components/core/webview/jshandler/ak;

.field private Nz:Lcom/kwad/components/core/webview/c;

.field private mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private final xj:Lcom/kwad/sdk/core/c/c;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/page/b/a/g;->Nw:Z

    new-instance v0, Lcom/kwad/components/core/page/b/a/g$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/a/g$1;-><init>(Lcom/kwad/components/core/page/b/a/g;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->xj:Lcom/kwad/sdk/core/c/c;

    new-instance v0, Lcom/kwad/components/core/page/b/a/g$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/a/g$2;-><init>(Lcom/kwad/components/core/page/b/a/g;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->Na:Lcom/kwad/components/core/webview/jshandler/ak$b;

    new-instance v0, Lcom/kwad/components/core/page/b/a/g$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/a/g$3;-><init>(Lcom/kwad/components/core/page/b/a/g;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->Nz:Lcom/kwad/components/core/webview/c;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/a/g;Lcom/kwad/components/core/webview/jshandler/ak;)Lcom/kwad/components/core/webview/jshandler/ak;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/g;->Ny:Lcom/kwad/components/core/webview/jshandler/ak;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/a/g;Lcom/kwad/components/core/webview/jshandler/am;)Lcom/kwad/components/core/webview/jshandler/am;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/g;->Nx:Lcom/kwad/components/core/webview/jshandler/am;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/a/g;)Lcom/kwad/sdk/core/webview/KsAdWebView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/a/g;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/a/g;Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/KsAdWebView;
    .locals 0

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/g;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/a/g;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/page/b/a/g;->Nw:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/core/page/b/a/g;)Lcom/kwad/components/core/webview/jshandler/ak;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/a/g;->Ny:Lcom/kwad/components/core/webview/jshandler/ak;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/core/page/b/a/g;)Lcom/kwad/components/core/webview/jshandler/ak$b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/a/g;->Na:Lcom/kwad/components/core/webview/jshandler/ak$b;

    return-object p0
.end method

.method private eK()V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->Nv:Lcom/kwad/components/core/webview/b;

    new-instance v0, Lcom/kwad/components/core/webview/b$a;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b$a;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b$a;->X(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/webview/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mPageUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b$a;->aD(Ljava/lang/String;)Lcom/kwad/components/core/webview/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b$a;->d(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/components/core/webview/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->gg:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b$a;->k(Landroid/view/ViewGroup;)Lcom/kwad/components/core/webview/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g;->Nz:Lcom/kwad/components/core/webview/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b$a;->a(Lcom/kwad/components/core/webview/c;)Lcom/kwad/components/core/webview/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$c;)Lcom/kwad/components/core/webview/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g;->Nv:Lcom/kwad/components/core/webview/b;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/webview/b;->a(Lcom/kwad/components/core/webview/b$a;)V

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/g;->oV()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mPageUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->onActivityCreate()V

    return-void
.end method

.method private oV()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bm(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v2, v2, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/webview/a/c$a;->bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/core/page/b/a/g;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v2, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bw(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-lez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/page/b/a/g$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/a/g$4;-><init>(Lcom/kwad/components/core/page/b/a/g;)V

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bw(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bw(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    cmp-long v0, v2, v4

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bZ(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    new-instance v1, Lcom/kwad/components/core/page/b/a/g$5;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/page/b/a/g$5;-><init>(Lcom/kwad/components/core/page/b/a/g;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/page/b/a/a;->ah()V

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/g;->eK()V

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->xj:Lcom/kwad/sdk/core/c/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->a(Lcom/kwad/sdk/core/c/c;)V

    return-void
.end method

.method public final hide()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->Nx:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->gg:Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->gg:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->Nx:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_2
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/page/b/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_webview:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/b/a/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-void
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/page/b/a/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->Nv:Lcom/kwad/components/core/webview/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b;->jv()V

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->xj:Lcom/kwad/sdk/core/c/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->b(Lcom/kwad/sdk/core/c/c;)V

    return-void
.end method

.method public final show()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/core/page/b/a/g;->Nw:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->Nx:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    :cond_1
    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->gg:Landroid/view/ViewGroup;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->gg:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g;->Nx:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_3
    return-void
.end method
