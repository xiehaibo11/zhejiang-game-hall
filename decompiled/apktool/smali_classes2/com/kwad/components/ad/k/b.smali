.class public Lcom/kwad/components/ad/k/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/k/b$b;,
        Lcom/kwad/components/ad/k/b$a;
    }
.end annotation


# instance fields
.field private Ha:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation
.end field

.field private Hb:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/e/d/c;",
            ">;"
        }
    .end annotation
.end field

.field protected Hc:Landroid/view/View;

.field protected Hd:Z

.field private He:Ljava/lang/String;

.field private Hf:Lcom/kwad/components/ad/k/b$a;

.field private Hg:Lcom/kwad/components/ad/k/b$b;

.field protected cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private cD:Lcom/kwad/components/core/webview/a;

.field protected cE:Lcom/kwad/sdk/core/webview/b;

.field private cF:I

.field protected cG:Lcom/kwad/components/core/webview/jshandler/am;

.field private cH:Lcom/kwad/sdk/core/webview/d/a/a;

.field private cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

.field private cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

.field private cQ:Landroid/widget/FrameLayout;

.field private dr:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field protected mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mReportExtData:Lorg/json/JSONObject;

.field private mScreenOrientation:I

.field private yI:Lcom/kwad/components/core/webview/jshandler/ar;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->Ha:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->Hb:Ljava/util/List;

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/k/b;->cF:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/k/b;->Hd:Z

    new-instance v0, Lcom/kwad/components/ad/k/b$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/k/b$3;-><init>(Lcom/kwad/components/ad/k/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

    new-instance v0, Lcom/kwad/components/ad/k/b$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/k/b$4;-><init>(Lcom/kwad/components/ad/k/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    return-void
.end method

.method public constructor <init>(Lorg/json/JSONObject;Ljava/lang/String;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->Ha:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->Hb:Ljava/util/List;

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/k/b;->cF:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/k/b;->Hd:Z

    new-instance v0, Lcom/kwad/components/ad/k/b$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/k/b$3;-><init>(Lcom/kwad/components/ad/k/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

    new-instance v0, Lcom/kwad/components/ad/k/b$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/k/b$4;-><init>(Lcom/kwad/components/ad/k/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    iput-object p1, p0, Lcom/kwad/components/ad/k/b;->mReportExtData:Lorg/json/JSONObject;

    iput-object p2, p0, Lcom/kwad/components/ad/k/b;->He:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/k/b;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/k/b;->cF:I

    return p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/k/b;)Lcom/kwad/components/ad/k/b$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/k/b;->Hf:Lcom/kwad/components/ad/k/b$a;

    return-object p0
.end method

.method private aF()V
    .locals 3

    iget v0, p0, Lcom/kwad/components/ad/k/b;->cF:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    const-string v0, "timeout"

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const-string v0, "h5error"

    goto :goto_0

    :cond_1
    const-string v0, "others"

    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "show webCard fail, reason: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PlayEndWebCard"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private av()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget v1, p0, Lcom/kwad/components/ad/k/b;->mScreenOrientation:I

    iput v1, v0, Lcom/kwad/sdk/core/webview/b;->mScreenOrientation:I

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->dr:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->aye:Lcom/kwad/sdk/widget/e;

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->mReportExtData:Lorg/json/JSONObject;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->mReportExtData:Lorg/json/JSONObject;

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/k/b;->b(Lcom/kwad/sdk/core/webview/b;)V

    return-void
.end method

.method private ax()V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/ad/k/b;->ay()V

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    new-instance v0, Lcom/kwad/components/core/webview/a;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->cD:Lcom/kwad/components/core/webview/a;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/k/b;->a(Lcom/kwad/components/core/webview/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cD:Lcom/kwad/components/core/webview/a;

    const-string v2, "KwaiAd"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method private ay()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/k/b;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/k/b;->He:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/k/b;)Lcom/kwad/components/ad/k/b$b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/k/b;->Hg:Lcom/kwad/components/ad/k/b$b;

    return-object p0
.end method

.method private static getLayoutId()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_ad_web_card_layout:I

    return v0
.end method

.method private getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/k/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/k/b$1;-><init>(Lcom/kwad/components/ad/k/b;)V

    return-object v0
.end method


# virtual methods
.method public final a(Landroid/widget/FrameLayout;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;)V
    .locals 6

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    invoke-virtual/range {v0 .. v5}, Lcom/kwad/components/ad/k/b;->a(Landroid/widget/FrameLayout;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;I)V

    return-void
.end method

.method public a(Landroid/widget/FrameLayout;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;I)V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->Hb:Ljava/util/List;

    invoke-interface {v0, p4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iput-object p2, p0, Lcom/kwad/components/ad/k/b;->dr:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object p1, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    iput p5, p0, Lcom/kwad/components/ad/k/b;->mScreenOrientation:I

    iput-object p3, p0, Lcom/kwad/components/ad/k/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0}, Lcom/kwad/components/ad/k/b;->fA()V

    invoke-direct {p0}, Lcom/kwad/components/ad/k/b;->av()V

    return-void
.end method

.method public final a(Landroid/widget/FrameLayout;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Ljava/util/List;Ljava/util/List;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/FrameLayout;",
            "Lcom/kwad/sdk/core/view/AdBaseFrameLayout;",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;",
            "Ljava/util/List<",
            "Lcom/kwad/components/core/e/d/c;",
            ">;I)V"
        }
    .end annotation

    iput-object p4, p0, Lcom/kwad/components/ad/k/b;->Hb:Ljava/util/List;

    iput-object p2, p0, Lcom/kwad/components/ad/k/b;->dr:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object p1, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    iput p5, p0, Lcom/kwad/components/ad/k/b;->mScreenOrientation:I

    if-eqz p3, :cond_0

    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_0

    iput-object p3, p0, Lcom/kwad/components/ad/k/b;->Ha:Ljava/util/List;

    const/4 p1, 0x0

    invoke-interface {p3, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p1, p0, Lcom/kwad/components/ad/k/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/k/b;->fA()V

    invoke-direct {p0}, Lcom/kwad/components/ad/k/b;->av()V

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/k/b$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/b;->Hf:Lcom/kwad/components/ad/k/b$a;

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/k/b$b;)V
    .locals 2

    iput-object p1, p0, Lcom/kwad/components/ad/k/b;->Hg:Lcom/kwad/components/ad/k/b$b;

    iget-object p1, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Landroid/widget/FrameLayout;->setVisibility(I)V

    const/4 p1, -0x1

    iput p1, p0, Lcom/kwad/components/ad/k/b;->cF:I

    iget-object p1, p0, Lcom/kwad/components/ad/k/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/k/b;->o(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "startPreloadWebView url : "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PlayEndWebCard"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/k/b;->ax()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/k/b;->fE()V

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method protected a(Lcom/kwad/components/core/webview/a;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->Hb:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-le v0, v2, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->Ha:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-le v0, v2, :cond_0

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/r;

    iget-object v2, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v3, p0, Lcom/kwad/components/ad/k/b;->Hb:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/e/d/c;

    iget-object v3, p0, Lcom/kwad/components/ad/k/b;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-direct {v0, v2, v1, v3}, Lcom/kwad/components/core/webview/jshandler/r;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/k/b;->Hb:Ljava/util/List;

    iget-object v3, p0, Lcom/kwad/components/ad/k/b;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Ljava/util/List;Lcom/kwad/sdk/core/webview/d/a/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ad;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->Ha:Ljava/util/List;

    iget-object v2, p0, Lcom/kwad/components/ad/k/b;->Hb:Ljava/util/List;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ad;-><init>(Ljava/util/List;Ljava/util/List;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->Hb:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/e/d/c;

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/r;

    iget-object v2, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v3, p0, Lcom/kwad/components/ad/k/b;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-direct {v1, v2, v0, v3}, Lcom/kwad/components/core/webview/jshandler/r;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v2, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v3, p0, Lcom/kwad/components/ad/k/b;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-direct {v1, v2, v0, v3}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/ap;

    iget-object v2, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v1, v2, v0}, Lcom/kwad/components/core/webview/jshandler/ap;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;)V

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    :goto_0
    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ar;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/ar;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->yI:Lcom/kwad/components/core/webview/jshandler/ar;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/b/a/f;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/f;-><init>()V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/x;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/x;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/t;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/t;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ah;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    iget-object v2, p0, Lcom/kwad/components/ad/k/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0, v2}, Lcom/kwad/components/ad/k/b;->o(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/am;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/am;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/z;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/z;-><init>(Lcom/kwad/components/core/webview/jshandler/z$b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ab;

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/p;

    new-instance v1, Lcom/kwad/components/ad/k/b$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/k/b$2;-><init>(Lcom/kwad/components/ad/k/b;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/p;-><init>(Lcom/kwad/sdk/core/webview/d/a/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/b;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    return-void
.end method

.method public final ai(Z)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/k/b;->yI:Lcom/kwad/components/core/webview/jshandler/ar;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/jshandler/ar;->ai(Z)V

    return-void
.end method

.method public final ap()Z
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/k/b;->bv()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    if-eqz v0, :cond_1

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/kwad/components/ad/k/b;->fB()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_2
    const/4 v0, 0x1

    return v0

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    if-eqz v0, :cond_4

    const/4 v2, 0x4

    invoke-virtual {v0, v2}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_4
    invoke-direct {p0}, Lcom/kwad/components/ad/k/b;->aF()V

    return v1
.end method

.method protected b(Lcom/kwad/sdk/core/webview/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method protected bv()Z
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/k/b;->cF:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method protected fA()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->removeAllViews()V

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {}, Lcom/kwad/components/ad/k/b;->getLayoutId()I

    move-result v1

    iget-object v2, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->Hc:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_web_card_webView:I

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setBackgroundColor(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/k/b;->getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/k/b;->fD()V

    :cond_0
    return-void
.end method

.method protected fB()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method protected fD()V
    .locals 0

    return-void
.end method

.method protected fE()V
    .locals 0

    return-void
.end method

.method protected fF()V
    .locals 0

    return-void
.end method

.method public final getLoadTime()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getLoadTime()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    return-wide v0
.end method

.method protected getName()Ljava/lang/String;
    .locals 1

    const-string v0, "PlayEndWebCard"

    return-object v0
.end method

.method public final lI()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/k/b;->ay()V

    return-void
.end method

.method public final lV()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/16 v1, 0x32

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bm;->a(Landroid/view/View;IZ)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cQ:Landroid/widget/FrameLayout;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/k/b;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_2
    return-void
.end method

.method protected o(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/k/b;->He:Ljava/lang/String;

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/k/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->bj(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p1

    :cond_0
    return-object p1
.end method

.method public final release()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/k/b;->ay()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/k/b;->Hg:Lcom/kwad/components/ad/k/b$b;

    return-void
.end method
