.class public final Lcom/kwad/components/core/webview/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/b$a;
    }
.end annotation


# instance fields
.field private GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

.field private Nz:Lcom/kwad/components/core/webview/c;

.field private Tg:Landroid/view/ViewGroup;

.field private Th:Lcom/kwad/components/core/webview/a/a;

.field private Ti:Lcom/kwad/components/core/webview/jshandler/al;

.field private Tj:Lcom/kwad/sdk/core/download/e;

.field private Tk:Lcom/kwad/components/core/webview/jshandler/ah$b;

.field private cD:Lcom/kwad/components/core/webview/a;

.field private cE:Lcom/kwad/sdk/core/webview/b;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mPageUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/kwad/components/core/webview/b$10;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b$10;-><init>(Lcom/kwad/components/core/webview/b;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b;->Tk:Lcom/kwad/components/core/webview/jshandler/ah$b;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private static a(Lcom/kwad/components/core/webview/c;Landroid/webkit/WebView;)V
    .locals 0

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/c;->oX()Z

    move-result p0

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p0

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    :cond_1
    :goto_0
    return-void
.end method

.method private av()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 v1, 0x0

    iput v1, v0, Lcom/kwad/sdk/core/webview/b;->mScreenOrientation:I

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->Tg:Landroid/view/ViewGroup;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    return-void
.end method

.method private ay()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->cD:Lcom/kwad/components/core/webview/a;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    iput-object v1, p0, Lcom/kwad/components/core/webview/b;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->Th:Lcom/kwad/components/core/webview/a/a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a/a;->destroy()V

    iput-object v1, p0, Lcom/kwad/components/core/webview/b;->Th:Lcom/kwad/components/core/webview/a/a;

    :cond_1
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/webview/b;)Lcom/kwad/sdk/core/webview/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    return-object p0
.end method

.method private b(Lcom/kwad/components/core/webview/a;Lcom/kwad/sdk/core/webview/b;)V
    .locals 9

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/am;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/am;-><init>()V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0, v0}, Lcom/kwad/components/core/webview/b;->c(Lcom/kwad/components/core/webview/jshandler/am;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ab;

    invoke-direct {v0, p2}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u;

    invoke-direct {v0, p2}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/b/a/f;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/f;-><init>()V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    new-instance v7, Lcom/kwad/components/core/webview/jshandler/r;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->getClickListener()Lcom/kwad/sdk/core/webview/d/a/a;

    move-result-object v4

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->rj()Z

    move-result v5

    const/4 v6, 0x0

    move-object v1, v7

    move-object v3, v0

    invoke-direct/range {v1 .. v6}, Lcom/kwad/components/core/webview/jshandler/r;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;ZZ)V

    invoke-virtual {p1, v7}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v8, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->getClickListener()Lcom/kwad/sdk/core/webview/d/a/a;

    move-result-object v4

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->rj()Z

    move-result v5

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->rk()Z

    move-result v7

    move-object v1, v8

    invoke-direct/range {v1 .. v7}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;ZIZ)V

    invoke-virtual {p1, v8}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/ap;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v1, v2, v0}, Lcom/kwad/components/core/webview/jshandler/ap;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;)V

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/aj;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/aj;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ag;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, v1, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    invoke-virtual {v1}, Landroid/webkit/WebView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ag;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/at;

    new-instance v1, Lcom/kwad/components/core/webview/b$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b$1;-><init>(Lcom/kwad/components/core/webview/b;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/at;-><init>(Lcom/kwad/components/core/webview/jshandler/at$a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/y;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/y;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ah;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->Tk:Lcom/kwad/components/core/webview/jshandler/ah$b;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b;->mPageUrl:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/al;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/al;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b;->Ti:Lcom/kwad/components/core/webview/jshandler/al;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/p;

    new-instance v1, Lcom/kwad/components/core/webview/b$4;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b$4;-><init>(Lcom/kwad/components/core/webview/b;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/p;-><init>(Lcom/kwad/sdk/core/webview/d/a/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/b/a/s;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/s;-><init>()V

    new-instance v1, Lcom/kwad/components/core/webview/b$5;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b$5;-><init>(Lcom/kwad/components/core/webview/b;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/a/s;->a(Lcom/kwad/components/core/webview/b/a/s$a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/b/a/k;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/k;-><init>()V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/x;

    invoke-direct {v0, p2}, Lcom/kwad/components/core/webview/jshandler/x;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object p2, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p2

    if-eqz p2, :cond_0

    new-instance p2, Lcom/kwad/components/core/webview/b/a/l;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/b/a/l;-><init>()V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/b$6;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, p0, v1, p2}, Lcom/kwad/components/core/webview/b$6;-><init>(Lcom/kwad/components/core/webview/b;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/a/l;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b;->Tj:Lcom/kwad/sdk/core/download/e;

    invoke-static {}, Lcom/kwad/sdk/core/download/c;->Aw()Lcom/kwad/sdk/core/download/c;

    move-result-object p2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->Tj:Lcom/kwad/sdk/core/download/e;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p2, v0, v1}, Lcom/kwad/sdk/core/download/c;->a(Lcom/kwad/sdk/core/download/d;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_0
    new-instance p2, Lcom/kwad/components/core/webview/b$7;

    invoke-direct {p2, p0}, Lcom/kwad/components/core/webview/b$7;-><init>(Lcom/kwad/components/core/webview/b;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/b$8;

    invoke-direct {p2, p0}, Lcom/kwad/components/core/webview/b$8;-><init>(Lcom/kwad/components/core/webview/b;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/b;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/b;-><init>()V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/d;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/d;-><init>()V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/g;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/g;-><init>()V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/a;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/a;-><init>()V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/t;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/t;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/h;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v0, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p2, v0, v1}, Lcom/kwad/components/core/webview/jshandler/h;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/aa;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    new-instance v1, Lcom/kwad/components/core/webview/b$9;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b$9;-><init>(Lcom/kwad/components/core/webview/b;)V

    invoke-direct {p2, v0, v1}, Lcom/kwad/components/core/webview/jshandler/aa;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/webview/jshandler/aa$b;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/f;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/f;-><init>()V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/l;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/l;-><init>()V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/k;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/k;-><init>()V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/j;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/j;-><init>()V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method private b(Lcom/kwad/sdk/core/webview/KsAdWebView;)V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->ay()V

    new-instance v0, Lcom/kwad/components/core/webview/a;

    invoke-direct {v0, p1}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b;->cD:Lcom/kwad/components/core/webview/a;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/core/webview/b;->b(Lcom/kwad/components/core/webview/a;Lcom/kwad/sdk/core/webview/b;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->Nz:Lcom/kwad/components/core/webview/c;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->cD:Lcom/kwad/components/core/webview/a;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/core/webview/c;->a(Lcom/kwad/components/core/webview/a;Lcom/kwad/sdk/core/webview/b;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->cD:Lcom/kwad/components/core/webview/a;

    const-string v1, "KwaiAd"

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/core/webview/b;)Lcom/kwad/components/core/webview/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b;->Nz:Lcom/kwad/components/core/webview/c;

    return-object p0
.end method

.method private c(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->Nz:Lcom/kwad/components/core/webview/c;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {v0, p1}, Lcom/kwad/components/core/webview/c;->c(Lcom/kwad/components/core/webview/jshandler/am;)V

    return-void
.end method

.method private c(Lcom/kwad/sdk/core/webview/KsAdWebView;)V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->ay()V

    new-instance v0, Lcom/kwad/components/core/webview/a/a;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, p1, v1}, Lcom/kwad/components/core/webview/a/a;-><init>(Landroid/webkit/WebView;Lcom/kwad/sdk/core/webview/b;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b;->Th:Lcom/kwad/components/core/webview/a/a;

    const-string v1, "KwaiAdForThird"

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic d(Lcom/kwad/components/core/webview/b;)Lcom/kwad/components/core/webview/jshandler/al;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b;->Ti:Lcom/kwad/components/core/webview/jshandler/al;

    return-object p0
.end method

.method private eK()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->rm()Lcom/kwad/sdk/core/report/z$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->rn()Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->rl()Lcom/kwad/sdk/core/webview/KsAdWebView$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->a(Lcom/kwad/sdk/core/webview/KsAdWebView$b;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->c(Lcom/kwad/sdk/core/webview/KsAdWebView$c;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    return-void
.end method

.method private getClickListener()Lcom/kwad/sdk/core/webview/d/a/a;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/b$11;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b$11;-><init>(Lcom/kwad/components/core/webview/b;)V

    return-object v0
.end method

.method private rj()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->Nz:Lcom/kwad/components/core/webview/c;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/components/core/webview/c;->oY()Z

    move-result v0

    return v0
.end method

.method private rk()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->Nz:Lcom/kwad/components/core/webview/c;

    const/4 v1, 0x0

    return v1
.end method

.method private rl()Lcom/kwad/sdk/core/webview/KsAdWebView$b;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/b$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b$2;-><init>(Lcom/kwad/components/core/webview/b;)V

    return-object v0
.end method

.method private rm()Lcom/kwad/sdk/core/report/z$b;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    const/4 v1, 0x0

    iput v1, v0, Lcom/kwad/sdk/core/report/z$b;->ati:I

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->ro()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/core/report/z$b;->atu:I

    return-object v0
.end method

.method private rn()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/b$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b$3;-><init>(Lcom/kwad/components/core/webview/b;)V

    return-object v0
.end method

.method private ro()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->N(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x5

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b$a;)V
    .locals 1

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b$a;->ox()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b;->mPageUrl:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b$a;->rq()Landroid/view/ViewGroup;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b;->Tg:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b$a;->rr()Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b$a;->rs()Lcom/kwad/components/core/webview/c;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b;->Nz:Lcom/kwad/components/core/webview/c;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b$a;->oR()Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/webview/b;->MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->eK()V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b;->Nz:Lcom/kwad/components/core/webview/c;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-static {p1, v0}, Lcom/kwad/components/core/webview/b;->a(Lcom/kwad/components/core/webview/c;Landroid/webkit/WebView;)V

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->av()V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->J(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/webview/b;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b;->c(Lcom/kwad/sdk/core/webview/KsAdWebView;)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/webview/b;->mPageUrl:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->dD(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/webview/b;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b;->b(Lcom/kwad/sdk/core/webview/KsAdWebView;)V

    :cond_1
    return-void
.end method

.method public final jv()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b;->ay()V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b;->Tj:Lcom/kwad/sdk/core/download/e;

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/download/c;->Aw()Lcom/kwad/sdk/core/download/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b;->Tj:Lcom/kwad/sdk/core/download/e;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/download/c;->a(Lcom/kwad/sdk/core/download/d;)V

    :cond_0
    return-void
.end method
