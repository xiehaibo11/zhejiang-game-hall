.class public final Lcom/kwad/components/ad/k/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/k/a$b;,
        Lcom/kwad/components/ad/k/a$a;
    }
.end annotation


# instance fields
.field private GP:Z

.field private GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private GR:Z

.field private GS:Z

.field protected GT:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field private GU:Lcom/kwad/components/ad/k/a$a;

.field private GV:Z

.field private GW:Z

.field private GX:Z

.field private GY:Lcom/kwad/components/ad/k/a$b;

.field private cH:Lcom/kwad/sdk/core/webview/d/a/a;

.field private cQ:Landroid/widget/FrameLayout;

.field private dr:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field private jX:Lcom/kwad/sdk/core/webview/a/c$a;

.field private mActivity:Landroid/app/Activity;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mBackIcon:Landroid/widget/ImageView;

.field private mHandler:Landroid/os/Handler;

.field private mLastDown:J


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/k/a;->GP:Z

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/kwad/components/ad/k/a;->mHandler:Landroid/os/Handler;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/k/a;->GV:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/k/a;->GW:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/k/a;->GX:Z

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/k/a;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/k/a;->mLastDown:J

    return-wide p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/k/a;)Lcom/kwad/components/ad/k/a$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/k/a;->GU:Lcom/kwad/components/ad/k/a$a;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/k/a;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/k/a;->GW:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/k/a;)Z
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/k/a;->bv()Z

    move-result p0

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/k/a;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/k/a;->GP:Z

    return p1
.end method

.method private bv()Z
    .locals 3

    iget-boolean v0, p0, Lcom/kwad/components/ad/k/a;->GX:Z

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/components/ad/k/a;->GP:Z

    if-nez v0, :cond_0

    return v1

    :cond_0
    return v2

    :cond_1
    iget-boolean v0, p0, Lcom/kwad/components/ad/k/a;->GP:Z

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/kwad/components/ad/k/a;->GV:Z

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/kwad/components/ad/k/a;->GW:Z

    if-nez v0, :cond_2

    return v1

    :cond_2
    return v2
.end method

.method static synthetic c(Lcom/kwad/components/ad/k/a;)Lcom/kwad/components/ad/k/a$b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/k/a;->GY:Lcom/kwad/components/ad/k/a$b;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/k/a;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/k/a;->GV:Z

    return p1
.end method

.method static synthetic d(Lcom/kwad/components/ad/k/a;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/k/a;->mBackIcon:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/k/a;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/k/a;->GR:Z

    return p1
.end method

.method static synthetic e(Lcom/kwad/components/ad/k/a;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/k/a;->mLastDown:J

    return-wide v0
.end method

.method static synthetic f(Lcom/kwad/components/ad/k/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/k/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private fA()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/k/a;->cQ:Landroid/widget/FrameLayout;

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->removeAllViews()V

    iget-object v0, p0, Lcom/kwad/components/ad/k/a;->cQ:Landroid/widget/FrameLayout;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/k/a;->cQ:Landroid/widget/FrameLayout;

    sget v1, Lcom/kwad/sdk/R$layout;->ksad_ad_landingpage_layout:I

    const/4 v2, 0x1

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/view/ViewGroup;IZ)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_web_card_frame:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/k/a;->GT:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v0, p0, Lcom/kwad/components/ad/k/a;->cQ:Landroid/widget/FrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_web_card_webView:I

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/ad/k/a;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setBackgroundColor(I)V

    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    iput v2, v0, Lcom/kwad/sdk/core/report/z$b;->ati:I

    iget-object v1, p0, Lcom/kwad/components/ad/k/a;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v1

    const/4 v3, 0x0

    invoke-virtual {v1, v3}, Lcom/kwad/sdk/core/webview/a/c$a;->bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/webview/a/c$a;->bm(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v1

    invoke-virtual {v1, v3}, Lcom/kwad/sdk/core/webview/a/c$a;->bl(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/k/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/k/a;->lT()Lcom/kwad/sdk/core/webview/KsAdWebView$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->a(Lcom/kwad/sdk/core/webview/KsAdWebView$b;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/k/a;->getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/k/a;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    iget-object v1, p0, Lcom/kwad/components/ad/k/a;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/k/a;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    new-instance v1, Lcom/kwad/components/ad/k/a$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/k/a$1;-><init>(Lcom/kwad/components/ad/k/a;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/k/a;->GT:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_end_close_btn:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/k/a;->mBackIcon:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/k/a;->mBackIcon:Landroid/widget/ImageView;

    new-instance v1, Lcom/kwad/components/ad/k/a$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/k/a$2;-><init>(Lcom/kwad/components/ad/k/a;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic g(Lcom/kwad/components/ad/k/a;)Lcom/kwad/sdk/core/view/AdBaseFrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/k/a;->dr:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    return-object p0
.end method

.method private getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/k/a$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/k/a$3;-><init>(Lcom/kwad/components/ad/k/a;)V

    return-object v0
.end method

.method static synthetic h(Lcom/kwad/components/ad/k/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/k/a;->GR:Z

    return p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/k/a;)Lcom/kwad/sdk/core/webview/d/a/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/k/a;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    return-object p0
.end method

.method static synthetic j(Lcom/kwad/components/ad/k/a;)Landroid/app/Activity;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/k/a;->mActivity:Landroid/app/Activity;

    return-object p0
.end method

.method private lT()Lcom/kwad/sdk/core/webview/KsAdWebView$b;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/k/a$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/k/a$4;-><init>(Lcom/kwad/components/ad/k/a;)V

    return-object v0
.end method

.method private lU()Z
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/ad/k/a;->bv()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/k/a;->cQ:Landroid/widget/FrameLayout;

    if-eqz v0, :cond_0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/k/a;->cQ:Landroid/widget/FrameLayout;

    if-eqz v0, :cond_2

    const/16 v2, 0x8

    invoke-virtual {v0, v2}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_2
    return v1
.end method

.method private static o(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final a(Landroid/widget/FrameLayout;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/a;->cQ:Landroid/widget/FrameLayout;

    iput-object p2, p0, Lcom/kwad/components/ad/k/a;->dr:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object p3, p0, Lcom/kwad/components/ad/k/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Lcom/kwad/components/ad/k/a;->fA()V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/ad/k/a;->GP:Z

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/k/a$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/a;->GU:Lcom/kwad/components/ad/k/a$a;

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/k/a$b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/a;->GY:Lcom/kwad/components/ad/k/a$b;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/a;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    return-void
.end method

.method public final ah(Z)Lcom/kwad/components/ad/k/a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/k/a;->GS:Z

    return-object p0
.end method

.method public final ap()Z
    .locals 5

    invoke-direct {p0}, Lcom/kwad/components/ad/k/a;->lU()Z

    move-result v0

    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/kwad/components/ad/k/a;->GX:Z

    if-eqz v0, :cond_3

    iget-object v2, p0, Lcom/kwad/components/ad/k/a;->mActivity:Landroid/app/Activity;

    if-eqz v2, :cond_3

    iget-object v2, p0, Lcom/kwad/components/ad/k/a;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v2

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/k/a;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    iget-object v2, p0, Lcom/kwad/components/ad/k/a;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bl(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/k/a;->GT:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    new-instance v2, Lcom/kwad/components/ad/k/a$5;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/k/a$5;-><init>(Lcom/kwad/components/ad/k/a;)V

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->a(Landroid/view/View$OnTouchListener;)V

    iget-object v1, p0, Lcom/kwad/components/ad/k/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ae(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v3, v1, v3

    if-eqz v3, :cond_2

    iget-boolean v3, p0, Lcom/kwad/components/ad/k/a;->GS:Z

    if-nez v3, :cond_1

    goto :goto_0

    :cond_1
    iget-object v3, p0, Lcom/kwad/components/ad/k/a;->mHandler:Landroid/os/Handler;

    new-instance v4, Lcom/kwad/components/ad/k/a$6;

    invoke-direct {v4, p0}, Lcom/kwad/components/ad/k/a$6;-><init>(Lcom/kwad/components/ad/k/a;)V

    invoke-virtual {v3, v4, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_1

    :cond_2
    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/k/a;->mBackIcon:Landroid/widget/ImageView;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    :goto_1
    iget-object v1, p0, Lcom/kwad/components/ad/k/a;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->onActivityCreate()V

    :cond_3
    return v0
.end method

.method public final aw()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/k/a;->cQ:Landroid/widget/FrameLayout;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/k/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/k/a;->o(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/k/a;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method public final setActivity(Landroid/app/Activity;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/a;->mActivity:Landroid/app/Activity;

    return-void
.end method
