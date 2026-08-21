.class public Lcom/kwad/components/ad/reward/m/e;
.super Lcom/kwad/sdk/core/download/a/a;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/aa$b;
.implements Lcom/kwad/components/core/webview/jshandler/ah$b;


# instance fields
.field private cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private cD:Lcom/kwad/components/core/webview/a;

.field private cE:Lcom/kwad/sdk/core/webview/b;

.field private cH:Lcom/kwad/sdk/core/webview/d/a/a;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private final mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

.field private yH:Landroid/view/View;

.field private yI:Lcom/kwad/components/core/webview/jshandler/ar;

.field private yJ:Lcom/kwad/components/ad/reward/m/f;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/webview/KsAdWebView;Landroid/view/View;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/download/a/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/m/e$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/m/e$1;-><init>(Lcom/kwad/components/ad/reward/m/e;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/m/e;->yH:Landroid/view/View;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object p3, p0, Lcom/kwad/components/ad/reward/m/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object p4, p0, Lcom/kwad/components/ad/reward/m/e;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/m/e;)Lcom/kwad/components/core/webview/jshandler/ar;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/e;->yI:Lcom/kwad/components/core/webview/jshandler/ar;

    return-object p0
.end method

.method private a(Lcom/kwad/components/core/webview/a;Ljava/lang/String;)V
    .locals 4

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/m/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/m/e;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/t;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/t;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ah;

    invoke-direct {v0, p0, p2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/ar;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/ar;-><init>()V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/m/e;->yI:Lcom/kwad/components/core/webview/jshandler/ar;

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/ab;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/x;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/x;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/b/a/f;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/b/a/f;-><init>()V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/aa;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {p2, v0, p0}, Lcom/kwad/components/core/webview/jshandler/aa;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/webview/jshandler/aa$b;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/ap;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {p2, v0, v1}, Lcom/kwad/components/core/webview/jshandler/ap;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/ad/reward/h/b;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    sget-object v2, Lcom/kwad/components/core/playable/PlayableSource;->ACTIONBAR_CLICK:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-direct {p2, v0, v1, v2}, Lcom/kwad/components/ad/reward/h/b;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/playable/PlayableSource;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method private ae(Z)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "switchWebView: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BottomCardWebViewHelper"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    const/4 p1, 0x0

    goto :goto_0

    :cond_1
    const/16 p1, 0x8

    :goto_0
    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    return-void
.end method

.method private ay()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/m/e;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/e;->jY()V

    return-void
.end method

.method private b(Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/view/ViewGroup;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 v0, 0x0

    iput v0, p1, Lcom/kwad/sdk/core/webview/b;->mScreenOrientation:I

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/kwad/sdk/core/webview/b;->aye:Lcom/kwad/sdk/widget/e;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iput-object p2, p1, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object p2, p1, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iput-object v0, p1, Lcom/kwad/sdk/core/webview/b;->mReportExtData:Lorg/json/JSONObject;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/e;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/kwad/sdk/core/webview/b;->ayg:Z

    return-void
.end method

.method private getWebErrorListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/m/e$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/m/e$2;-><init>(Lcom/kwad/components/ad/reward/m/e;)V

    return-object v0
.end method

.method private j(Ljava/lang/String;I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->yJ:Lcom/kwad/components/ad/reward/m/f;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/components/ad/reward/m/f;->h(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method private jY()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->yH:Landroid/view/View;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/m/e;->ae(Z)V

    return-void
.end method

.method private r(Ljava/lang/String;)V
    .locals 3

    invoke-static {p1}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/e;->jY()V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/e;->ay()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/e;->getWebErrorListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    new-instance v0, Lcom/kwad/components/core/webview/a;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cD:Lcom/kwad/components/core/webview/a;

    invoke-direct {p0, v0, p1}, Lcom/kwad/components/ad/reward/m/e;->a(Lcom/kwad/components/core/webview/a;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/e;->cD:Lcom/kwad/components/core/webview/a;

    const-string v2, "KwaiAd"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/m/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/e;->yJ:Lcom/kwad/components/ad/reward/m/f;

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/aa$a;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onAdFrameValid : "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/aa$a;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "BottomCardWebViewHelper"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$a;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " updatePageStatus: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BottomCardWebViewHelper"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/ah$a;->status:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/m/e;->ae(Z)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/e;->jY()V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/view/ViewGroup;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setBackgroundColor(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/e;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->a(Lcom/kwad/components/ad/reward/e/j;)V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/m/e;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/view/ViewGroup;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->aV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/m/e;->r(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz p1, :cond_1

    invoke-virtual {p1, p0}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_1
    return-void
.end method

.method public final jX()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/e/d/c;->c(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/e;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->b(Lcom/kwad/components/ad/reward/e/j;)V

    return-void
.end method

.method public onDownloadFailed()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, "\u7acb\u5373\u4e0b\u8f7d"

    :goto_0
    const/16 v1, 0x64

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/reward/m/e;->j(Ljava/lang/String;I)V

    return-void
.end method

.method public onDownloadFinished()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-nez v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    :goto_0
    const/16 v1, 0x64

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/reward/m/e;->j(Ljava/lang/String;I)V

    return-void
.end method

.method public onIdle()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, "\u7acb\u5373\u4e0b\u8f7d"

    :goto_0
    const/16 v1, 0x64

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/reward/m/e;->j(Ljava/lang/String;I)V

    return-void
.end method

.method public onInstalled()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->U(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, "\u7acb\u5373\u6253\u5f00"

    :goto_0
    const/16 v1, 0x64

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/reward/m/e;->j(Ljava/lang/String;I)V

    return-void
.end method

.method public final onPaused(I)V
    .locals 1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cw(I)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0, p1}, Lcom/kwad/components/ad/reward/m/e;->j(Ljava/lang/String;I)V

    return-void
.end method

.method public onProgressUpdate(I)V
    .locals 1

    if-eqz p1, :cond_0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cv(I)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0, p1}, Lcom/kwad/components/ad/reward/m/e;->j(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method
