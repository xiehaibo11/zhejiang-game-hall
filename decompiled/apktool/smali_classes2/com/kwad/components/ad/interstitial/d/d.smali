.class public final Lcom/kwad/components/ad/interstitial/d/d;
.super Lcom/kwad/components/ad/interstitial/d/b;


# static fields
.field private static jM:J = 0x190L

.field private static jN:F = 0.8f

.field private static jO:F = 1.0f

.field private static jP:F = 0.749f


# instance fields
.field private bG:Lcom/kwad/components/core/widget/a/b;

.field private cD:Lcom/kwad/components/core/webview/a;

.field private cE:Lcom/kwad/sdk/core/webview/b;

.field private cF:I

.field private cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

.field private cV:Lcom/kwad/sdk/core/h/c;

.field private dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

.field private dO:Lcom/kwad/sdk/core/g/d;

.field private dP:Landroid/os/Vibrator;

.field private ew:Landroid/widget/ImageView;

.field private ex:Lcom/kwad/sdk/core/video/videoview/a;

.field private fn:Lcom/kwad/components/core/webview/jshandler/am;

.field private fr:Z

.field private jL:Lcom/kwad/components/core/webview/jshandler/ao;

.field private jQ:Lcom/kwad/sdk/widget/KSFrameLayout;

.field private jR:Lcom/kwad/sdk/widget/KSFrameLayout;

.field private jS:Landroid/app/Dialog;

.field private jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private jU:Landroid/widget/ImageView;

.field private jV:Lcom/kwad/components/core/video/a$c;

.field private jW:Lcom/kwad/components/core/webview/b/a/p;

.field private jX:Lcom/kwad/sdk/core/webview/a/c$a;

.field private jY:Lcom/kwad/components/ad/g/a/a/b;

.field private jZ:Z

.field private jf:Lcom/kwad/components/ad/interstitial/d/c;

.field private ka:Lcom/kwad/components/ad/interstitial/d/h;

.field private final kb:Ljava/lang/Runnable;

.field private kc:Lcom/kwad/components/core/webview/jshandler/ab$a;

.field protected mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field protected mContext:Landroid/content/Context;

.field private mHandler:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/b;-><init>()V

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mHandler:Landroid/os/Handler;

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cF:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jZ:Z

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/d$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/d$1;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->ka:Lcom/kwad/components/ad/interstitial/d/h;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/d$12;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/d$12;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cV:Lcom/kwad/sdk/core/h/c;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/d$20;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/d$20;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->kb:Ljava/lang/Runnable;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/d$25;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/d$25;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->kc:Lcom/kwad/components/core/webview/jshandler/ab$a;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/d$18;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/d$18;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    return-void
.end method

.method private static A(I)Landroid/view/ViewGroup$LayoutParams;
    .locals 2

    sget v0, Lcom/kwad/components/ad/interstitial/d/d;->jP:F

    int-to-float p0, p0

    mul-float/2addr p0, v0

    float-to-int p0, p0

    int-to-float v0, p0

    const v1, 0x3f3fbe77    # 0.749f

    div-float/2addr v0, v1

    float-to-int v0, v0

    new-instance v1, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v1, v0, p0}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    return-object v1
.end method

.method static synthetic B(I)Landroid/view/ViewGroup$LayoutParams;
    .locals 0

    invoke-static {p0}, Lcom/kwad/components/ad/interstitial/d/d;->A(I)Landroid/view/ViewGroup$LayoutParams;

    move-result-object p0

    return-object p0
.end method

.method private static a(ZZ)F
    .locals 0

    if-eqz p0, :cond_0

    if-eqz p1, :cond_0

    const p0, 0x3fe38e39

    goto :goto_0

    :cond_0
    const p0, 0x3f3fbe77    # 0.749f

    :goto_0
    return p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/d;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cF:I

    return p1
.end method

.method private static a(IZ)Landroid/view/ViewGroup$LayoutParams;
    .locals 1

    if-eqz p1, :cond_0

    sget v0, Lcom/kwad/components/ad/interstitial/d/d;->jN:F

    goto :goto_0

    :cond_0
    sget v0, Lcom/kwad/components/ad/interstitial/d/d;->jO:F

    :goto_0
    if-eqz p1, :cond_1

    const p1, 0x3fe38e39

    goto :goto_1

    :cond_1
    const p1, 0x3f3fbe77    # 0.749f

    :goto_1
    int-to-float p0, p0

    mul-float/2addr p0, v0

    float-to-int p0, p0

    int-to-float v0, p0

    mul-float/2addr v0, p1

    float-to-int p1, v0

    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, p0, p1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    return-object v0
.end method

.method private static a(Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;Landroid/view/ViewGroup$MarginLayoutParams;)Landroid/view/ViewGroup$MarginLayoutParams;
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->topMargin:I

    iput v0, p1, Landroid/view/ViewGroup$MarginLayoutParams;->topMargin:I

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->leftMargin:I

    iput v0, p1, Landroid/view/ViewGroup$MarginLayoutParams;->leftMargin:I

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->width:I

    iput v0, p1, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    iget p0, p0, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->height:I

    iput p0, p1, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/h/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cV:Lcom/kwad/sdk/core/h/c;

    return-object p0
.end method

.method private static a(Landroid/view/ViewGroup$MarginLayoutParams;Landroid/view/ViewGroup$MarginLayoutParams;)V
    .locals 1

    iget v0, p0, Landroid/view/ViewGroup$MarginLayoutParams;->leftMargin:I

    iput v0, p1, Landroid/view/ViewGroup$MarginLayoutParams;->leftMargin:I

    iget v0, p0, Landroid/view/ViewGroup$MarginLayoutParams;->rightMargin:I

    iput v0, p1, Landroid/view/ViewGroup$MarginLayoutParams;->rightMargin:I

    iget v0, p0, Landroid/view/ViewGroup$MarginLayoutParams;->topMargin:I

    iput v0, p1, Landroid/view/ViewGroup$MarginLayoutParams;->topMargin:I

    iget v0, p0, Landroid/view/ViewGroup$MarginLayoutParams;->bottomMargin:I

    iput v0, p1, Landroid/view/ViewGroup$MarginLayoutParams;->bottomMargin:I

    iget v0, p0, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    iput v0, p1, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    iget p0, p0, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    iput p0, p1, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/d;D)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/interstitial/d/d;->d(D)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/d;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;Lcom/kwad/sdk/widget/KSFrameLayout;Z)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/kwad/components/ad/interstitial/d/d;->a(Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;Lcom/kwad/sdk/widget/KSFrameLayout;Z)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/d;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/interstitial/d/d;->s(Ljava/lang/String;)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/webview/a;Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dt()Lcom/kwad/components/core/webview/jshandler/r;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->ds()Lcom/kwad/components/core/webview/jshandler/o;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/b/a/f;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/f;-><init>()V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dl()Lcom/kwad/components/core/webview/jshandler/aa;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dk()Lcom/kwad/components/core/webview/b/a/o;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dj()Lcom/kwad/components/core/webview/b/a/u;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dp()Lcom/kwad/components/core/webview/jshandler/z;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/am;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/am;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->fn:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dm()Lcom/kwad/components/core/video/a$c;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/core/video/a$c;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dq()Lcom/kwad/components/core/webview/b/a/p;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dn()Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/x;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/x;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dg()Lcom/kwad/components/core/webview/jshandler/t;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ah;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    invoke-direct {v0, v1, p2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->de()Lcom/kwad/components/core/webview/jshandler/ap;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/ab;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->kc:Lcom/kwad/components/core/webview/jshandler/ab$a;

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/webview/jshandler/ab;->a(Lcom/kwad/components/core/webview/jshandler/ab$a;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->do()Lcom/kwad/components/core/webview/jshandler/av;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/af;

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getOpenNewPageListener()Lcom/kwad/components/core/webview/jshandler/af$a;

    move-result-object v0

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/af;-><init>(Lcom/kwad/components/core/webview/jshandler/af$a;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/b;->cX(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dd()Lcom/kwad/components/core/webview/jshandler/ao;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dh()Lcom/kwad/components/ad/g/a/a/b;

    move-result-object p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/d;->jY:Lcom/kwad/components/ad/g/a/a/b;

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->df()Lcom/kwad/components/core/webview/b/a/g;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->di()Lcom/kwad/components/ad/g/a/a/a;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method private a(Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;Lcom/kwad/sdk/widget/KSFrameLayout;Z)V
    .locals 7

    xor-int/lit8 v0, p4, 0x1

    invoke-virtual {p3, v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->setWidthBasedRatio(Z)V

    invoke-virtual {p3}, Lcom/kwad/sdk/widget/KSFrameLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup$MarginLayoutParams;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "updateVideoContainerSize before size: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v2, v0, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v0, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "InterstitialWebViewPresenter"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p2, v0}, Lcom/kwad/components/ad/interstitial/d/d;->a(Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;Landroid/view/ViewGroup$MarginLayoutParams;)Landroid/view/ViewGroup$MarginLayoutParams;

    new-instance v1, Landroid/view/ViewGroup$MarginLayoutParams;

    invoke-direct {v1, v0}, Landroid/view/ViewGroup$MarginLayoutParams;-><init>(Landroid/view/ViewGroup$MarginLayoutParams;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aP(Lcom/kwad/sdk/core/response/model/AdInfo;)F

    move-result v3

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "updateVideoContainerSize materialRatio: "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v4, 0x0

    if-eqz p4, :cond_0

    cmpl-float v5, v3, v4

    if-lez v5, :cond_0

    iget v5, v0, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    iget v6, v0, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    int-to-float v6, v6

    div-float/2addr v6, v3

    float-to-int v3, v6

    sub-int/2addr v5, v3

    div-int/lit8 v5, v5, 0x2

    iput v3, v0, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    iget v3, v0, Landroid/view/ViewGroup$MarginLayoutParams;->leftMargin:I

    add-int/2addr v3, v5

    iput v3, v0, Landroid/view/ViewGroup$MarginLayoutParams;->leftMargin:I

    iget v3, v0, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    if-eqz v3, :cond_1

    iget v3, v0, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    int-to-float v3, v3

    iget v5, v0, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    int-to-float v5, v5

    div-float/2addr v3, v5

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "cardParams ratio: "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v2, v5}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p3, v3}, Lcom/kwad/sdk/widget/KSFrameLayout;->setRatio(F)V

    goto :goto_0

    :cond_0
    invoke-virtual {p3, v4}, Lcom/kwad/sdk/widget/KSFrameLayout;->setRatio(F)V

    :cond_1
    :goto_0
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v5, "cardParams width: "

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v5, v0, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", height: "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, v0, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p3, v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    sget v3, Lcom/kwad/sdk/R$dimen;->ksad_interstitial_card_radius:I

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getDimension(I)F

    move-result v2

    iget-object v3, p2, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->cornerRadius:Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel;

    if-eqz v3, :cond_2

    iget-object v0, p2, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->cornerRadius:Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel;

    iget-wide v2, v0, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel;->topLeft:D

    double-to-float v0, v2

    iget-object v2, p2, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->cornerRadius:Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel;

    iget-wide v2, v2, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel;->topRight:D

    double-to-float v2, v2

    iget-object v3, p2, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->cornerRadius:Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel;

    iget-wide v3, v3, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel;->bottomRight:D

    double-to-float v3, v3

    iget-object p2, p2, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->cornerRadius:Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel;

    iget-wide v4, p2, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel;->bottomLeft:D

    double-to-float p2, v4

    invoke-virtual {p3, v0, v2, v3, p2}, Lcom/kwad/sdk/widget/KSFrameLayout;->setRadius(FFFF)V

    goto :goto_1

    :cond_2
    iget p2, v0, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    iget v0, v0, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    if-le p2, v0, :cond_3

    invoke-virtual {p3, v2, v2, v4, v4}, Lcom/kwad/sdk/widget/KSFrameLayout;->setRadius(FFFF)V

    goto :goto_1

    :cond_3
    invoke-virtual {p3, v2, v2, v2, v2}, Lcom/kwad/sdk/widget/KSFrameLayout;->setRadius(FFFF)V

    :goto_1
    if-eqz p4, :cond_4

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/d;->jU:Landroid/widget/ImageView;

    const/4 p4, 0x0

    invoke-virtual {p2, p4}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/d;->jU:Landroid/widget/ImageView;

    invoke-virtual {p2}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    check-cast p2, Landroid/view/ViewGroup$MarginLayoutParams;

    invoke-static {v1, p2}, Lcom/kwad/components/ad/interstitial/d/d;->a(Landroid/view/ViewGroup$MarginLayoutParams;Landroid/view/ViewGroup$MarginLayoutParams;)V

    iget-object p4, p0, Lcom/kwad/components/ad/interstitial/d/d;->jU:Landroid/widget/ImageView;

    invoke-virtual {p4, p2}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p4, p0, Lcom/kwad/components/ad/interstitial/d/d;->mContext:Landroid/content/Context;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jU:Landroid/widget/ImageView;

    invoke-virtual {p2, p4, p1, v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/view/View;)V

    goto :goto_2

    :cond_4
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jU:Landroid/widget/ImageView;

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setVisibility(I)V

    :goto_2
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p2, 0x15

    if-lt p1, p2, :cond_5

    new-instance p1, Lcom/kwad/components/ad/interstitial/d/d$17;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/interstitial/d/d$17;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-virtual {p3, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setOutlineProvider(Landroid/view/ViewOutlineProvider;)V

    const/4 p1, 0x1

    invoke-virtual {p3, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setClipToOutline(Z)V

    :cond_5
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/d;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jZ:Z

    return p1
.end method

.method private av()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    iput v0, v1, Lcom/kwad/sdk/core/webview/b;->mScreenOrientation:I

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jQ:Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->aye:Lcom/kwad/sdk/widget/e;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jQ:Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->mReportExtData:Lorg/json/JSONObject;

    return-void
.end method

.method private aw()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bC(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-direct {p0, v0}, Lcom/kwad/components/ad/interstitial/d/d;->r(Ljava/lang/String;)V

    return-void

    :cond_1
    :goto_0
    const-string v0, "1"

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/interstitial/d/d;->s(Ljava/lang/String;)V

    return-void
.end method

.method private ay()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method

.method static synthetic b(IZ)Landroid/view/ViewGroup$LayoutParams;
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/components/ad/interstitial/d/d;->a(IZ)Landroid/view/ViewGroup$LayoutParams;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/core/webview/jshandler/am;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->fn:Lcom/kwad/components/core/webview/jshandler/am;

    return-object p0
.end method

.method private bs()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bz(Lcom/kwad/sdk/core/response/model/AdTemplate;)F

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->dO:Lcom/kwad/sdk/core/g/d;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/core/g/d;

    invoke-direct {v1, v0}, Lcom/kwad/sdk/core/g/d;-><init>(F)V

    iput-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->dO:Lcom/kwad/sdk/core/g/d;

    new-instance v2, Lcom/kwad/components/ad/interstitial/d/d$19;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/interstitial/d/d$19;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/g/d;->a(Lcom/kwad/sdk/core/g/b;)V

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->dO:Lcom/kwad/sdk/core/g/d;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/g/d;->e(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->dO:Lcom/kwad/sdk/core/g/d;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bg(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/interstitial/d/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dc()V

    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method private d(D)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/c$b;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c$b;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c$b;->l(Z)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/ad/interstitial/d/c$b;->c(D)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    const/4 p2, 0x2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/d/c$b;->y(I)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/d;->jQ:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {p2}, Lcom/kwad/sdk/widget/KSFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/d/c$b;->a(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    const/16 p2, 0x9d

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/d/c$b;->z(I)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p2, p1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/c$b;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getContext()Landroid/content/Context;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/d;->dP:Landroid/os/Vibrator;

    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/bj;->a(Landroid/content/Context;Landroid/os/Vibrator;)V

    return-void
.end method

.method private dc()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aO(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v1

    invoke-static {v1, v0}, Lcom/kwad/components/ad/interstitial/d/d;->a(ZZ)F

    move-result v2

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "replaceNativeView cardRatio: "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "InterstitialWebViewPresenter"

    invoke-static {v4, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v3, v3, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-virtual {v3, v2}, Lcom/kwad/components/ad/interstitial/f/f;->setRatio(F)V

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d;->jQ:Lcom/kwad/sdk/widget/KSFrameLayout;

    sget v3, Lcom/kwad/sdk/R$id;->ksad_interstitial_native:I

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/widget/KSFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/view/ViewGroup;->setVisibility(I)V

    new-instance v3, Lcom/kwad/components/ad/interstitial/d/d$24;

    invoke-direct {v3, p0, v1, v0, v2}, Lcom/kwad/components/ad/interstitial/d/d$24;-><init>(Lcom/kwad/components/ad/interstitial/d/d;ZZLandroid/view/ViewGroup;)V

    invoke-virtual {v2, v3}, Landroid/view/ViewGroup;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private dd()Lcom/kwad/components/core/webview/jshandler/ao;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ao;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/d$26;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/d$26;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/ao;-><init>(Lcom/kwad/components/core/webview/jshandler/ao$a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jL:Lcom/kwad/components/core/webview/jshandler/ao;

    return-object v0
.end method

.method private de()Lcom/kwad/components/core/webview/jshandler/ap;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ap;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ap;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;)V

    return-object v0
.end method

.method private df()Lcom/kwad/components/core/webview/b/a/g;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/b/b/k;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/b/k;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->ju:I

    iput v1, v0, Lcom/kwad/components/core/webview/b/b/k;->WX:I

    new-instance v1, Lcom/kwad/components/core/webview/b/a/g;

    invoke-direct {v1, v0}, Lcom/kwad/components/core/webview/b/a/g;-><init>(Lcom/kwad/components/core/webview/b/b/k;)V

    return-object v1
.end method

.method private dg()Lcom/kwad/components/core/webview/jshandler/t;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/t;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/t;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/d$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/d$2;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/jshandler/t;->a(Lcom/kwad/components/core/webview/jshandler/t$b;)V

    return-object v0
.end method

.method private dh()Lcom/kwad/components/ad/g/a/a/b;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/g/a/a/b;->m(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/g/a/a/b;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jY:Lcom/kwad/components/ad/g/a/a/b;

    if-eqz v0, :cond_0

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/d$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/d$3;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/g/a/a/b;->a(Lcom/kwad/components/ad/g/a/a/b$b;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jY:Lcom/kwad/components/ad/g/a/a/b;

    return-object v0
.end method

.method private di()Lcom/kwad/components/ad/g/a/a/a;
    .locals 3

    new-instance v0, Lcom/kwad/components/ad/g/a/a/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/g/a/a/a;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->jq:Ljava/util/List;

    new-instance v2, Lcom/kwad/components/ad/interstitial/d/d$4;

    invoke-direct {v2, p0, v0}, Lcom/kwad/components/ad/interstitial/d/d$4;-><init>(Lcom/kwad/components/ad/interstitial/d/d;Lcom/kwad/components/ad/g/a/a/a;)V

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-object v0
.end method

.method private dj()Lcom/kwad/components/core/webview/b/a/u;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/b/a/u;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/u;-><init>()V

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/d$5;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/d$5;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/a/u;->a(Lcom/kwad/components/core/webview/b/a/u$a;)V

    return-object v0
.end method

.method private dk()Lcom/kwad/components/core/webview/b/a/o;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/d$6;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/d$6;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    return-object v0
.end method

.method private dl()Lcom/kwad/components/core/webview/jshandler/aa;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/aa;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    new-instance v2, Lcom/kwad/components/ad/interstitial/d/d$7;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/interstitial/d/d$7;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/aa;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/webview/jshandler/aa$b;)V

    return-object v0
.end method

.method private dm()Lcom/kwad/components/core/video/a$c;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/b/b/y;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/b/y;-><init>()V

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/d$8;

    invoke-direct {v1, p0, v0}, Lcom/kwad/components/ad/interstitial/d/d$8;-><init>(Lcom/kwad/components/ad/interstitial/d/d;Lcom/kwad/components/core/webview/b/b/y;)V

    iput-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jV:Lcom/kwad/components/core/video/a$c;

    return-object v1
.end method

.method private dn()Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/d$9;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/d$9;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler;-><init>(Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$a;)V

    return-object v0
.end method

.method private do()Lcom/kwad/components/core/webview/jshandler/av;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/av;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/av;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/d$10;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/d$10;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/jshandler/av;->a(Lcom/kwad/components/core/webview/jshandler/av$a;)V

    return-object v0
.end method

.method private dp()Lcom/kwad/components/core/webview/jshandler/z;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/z;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/d$13;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/d$13;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/z;-><init>(Lcom/kwad/components/core/webview/jshandler/z$b;)V

    return-object v0
.end method

.method private dq()Lcom/kwad/components/core/webview/b/a/p;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/d$14;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/d$14;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jW:Lcom/kwad/components/core/webview/b/a/p;

    return-object v0
.end method

.method private dr()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jS:Landroid/app/Dialog;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {v0}, Landroid/app/Dialog;->getOwnerActivity()Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jS:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClosed()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/video/videoview/a;->release()V

    :cond_3
    :goto_0
    return-void
.end method

.method private ds()Lcom/kwad/components/core/webview/jshandler/o;
    .locals 4

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance v3, Lcom/kwad/components/ad/interstitial/d/d$15;

    invoke-direct {v3, p0}, Lcom/kwad/components/ad/interstitial/d/d$15;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    return-object v0
.end method

.method private dt()Lcom/kwad/components/core/webview/jshandler/r;
    .locals 4

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/r;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance v3, Lcom/kwad/components/ad/interstitial/d/d$16;

    invoke-direct {v3, p0}, Lcom/kwad/components/ad/interstitial/d/d$16;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/r;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    return-object v0
.end method

.method static synthetic e(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/widget/KSFrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jQ:Lcom/kwad/sdk/widget/KSFrameLayout;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/webview/KsAdWebView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/widget/KSFrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    return-object p0
.end method

.method private getOpenNewPageListener()Lcom/kwad/components/core/webview/jshandler/af$a;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/d$11;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/d$11;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    return-object v0
.end method

.method private getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/d$22;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/d$22;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    return-object v0
.end method

.method static synthetic h(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/video/videoview/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic j(Lcom/kwad/components/ad/interstitial/d/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->bs()V

    return-void
.end method

.method static synthetic k(Lcom/kwad/components/ad/interstitial/d/d;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/ad/interstitial/d/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->dr()V

    return-void
.end method

.method static synthetic m(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/api/KsAdVideoPlayConfig;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    return-object p0
.end method

.method static synthetic n(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/core/webview/b/a/p;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jW:Lcom/kwad/components/core/webview/b/a/p;

    return-object p0
.end method

.method static synthetic o(Lcom/kwad/components/ad/interstitial/d/d;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->ew:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic p(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/webview/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cE:Lcom/kwad/sdk/core/webview/b;

    return-object p0
.end method

.method static synthetic q(Lcom/kwad/components/ad/interstitial/d/d;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jZ:Z

    return p0
.end method

.method static synthetic r(Lcom/kwad/components/ad/interstitial/d/d;)Landroid/app/Dialog;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jS:Landroid/app/Dialog;

    return-object p0
.end method

.method private r(Ljava/lang/String;)V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->ay()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    new-instance v0, Lcom/kwad/components/core/webview/a;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cD:Lcom/kwad/components/core/webview/a;

    invoke-direct {p0, v0, p1}, Lcom/kwad/components/ad/interstitial/d/d;->a(Lcom/kwad/components/core/webview/a;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cD:Lcom/kwad/components/core/webview/a;

    const-string v2, "KwaiAd"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setBackgroundColor(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d;->kb:Ljava/lang/Runnable;

    const/4 v0, 0x0

    const-wide/16 v1, 0xbb8

    invoke-static {p1, v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void
.end method

.method static synthetic s(Lcom/kwad/components/ad/interstitial/d/d;)Landroid/os/Handler;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mHandler:Landroid/os/Handler;

    return-object p0
.end method

.method private s(Ljava/lang/String;)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "handleWebViewError "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "InterstitialWebViewPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->dO:Lcom/kwad/sdk/core/g/d;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bh(Landroid/content/Context;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->fr:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->fr:Z

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->bC(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3, p1}, Lcom/kwad/components/core/o/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d;->mHandler:Landroid/os/Handler;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/d$23;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/d$23;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    if-eqz p1, :cond_2

    invoke-virtual {p1, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    :cond_2
    return-void
.end method

.method static synthetic t(Lcom/kwad/components/ad/interstitial/d/d;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->fr:Z

    return p0
.end method

.method static synthetic u(Lcom/kwad/components/ad/interstitial/d/d;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->cF:I

    return p0
.end method

.method static synthetic v(Lcom/kwad/components/ad/interstitial/d/d;)Ljava/lang/Runnable;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->kb:Ljava/lang/Runnable;

    return-object p0
.end method

.method static synthetic w(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/g/a/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jY:Lcom/kwad/components/ad/g/a/a/b;

    return-object p0
.end method

.method static synthetic x(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/g/d;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/d;->dO:Lcom/kwad/sdk/core/g/d;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/interstitial/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->jZ:Z

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jS:Landroid/app/Dialog;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->sy()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->cV:Lcom/kwad/sdk/core/h/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/a/b;->a(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->ka:Lcom/kwad/components/ad/interstitial/d/h;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/h;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bA(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mHandler:Landroid/os/Handler;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/d$21;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/d$21;-><init>(Lcom/kwad/components/ad/interstitial/d/d;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->av()V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/d;->aw()V

    return-void
.end method

.method public final cN()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->cN()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jY:Lcom/kwad/components/ad/g/a/a/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/g/a/a/b;->eZ()V

    :cond_0
    return-void
.end method

.method public final cO()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->cO()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jY:Lcom/kwad/components/ad/g/a/a/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/g/a/a/b;->eY()V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onCreate()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getRootView()Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_web_card_webView:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jT:Lcom/kwad/sdk/core/webview/KsAdWebView;

    new-instance v0, Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getRootView()Landroid/view/View;

    move-result-object v1

    const/16 v2, 0x64

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/widget/a/b;-><init>(Landroid/view/View;I)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getRootView()Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_container:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jQ:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getRootView()Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_container:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getRootView()Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_first_frame_container:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->ew:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getRootView()Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_interstitial_video_blur:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jU:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mContext:Landroid/content/Context;

    if-eqz v0, :cond_0

    const-string v1, "vibrator"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Vibrator;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->dP:Landroid/os/Vibrator;

    :cond_0
    return-void
.end method

.method public final onDestroy()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onDestroy()V

    return-void
.end method

.method public final onUnbind()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d;->cV:Lcom/kwad/sdk/core/h/c;

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/widget/a/b;->b(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->sz()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->dO:Lcom/kwad/sdk/core/g/d;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/d;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/g/d;->bh(Landroid/content/Context;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    if-eqz v0, :cond_1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d;->ka:Lcom/kwad/components/ad/interstitial/d/h;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->b(Lcom/kwad/components/ad/interstitial/d/h;)V

    return-void
.end method
