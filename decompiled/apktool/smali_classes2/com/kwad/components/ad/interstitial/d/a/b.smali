.class public final Lcom/kwad/components/ad/interstitial/d/a/b;
.super Lcom/kwad/components/ad/interstitial/d/a/a;


# static fields
.field private static jM:J = 0x190L


# instance fields
.field private cV:Lcom/kwad/sdk/core/h/c;

.field private dO:Lcom/kwad/sdk/core/g/d;

.field private dP:Landroid/os/Vibrator;

.field private fn:Lcom/kwad/components/core/webview/jshandler/am;

.field private jY:Lcom/kwad/components/ad/g/a/a/b;

.field private final jl:Lcom/kwad/components/ad/interstitial/d/c$a;

.field private ka:Lcom/kwad/components/ad/interstitial/d/h;

.field private lr:Landroid/widget/FrameLayout;

.field private ls:Z

.field private lt:Z

.field private lu:Lcom/kwad/components/core/webview/b/f;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->ls:Z

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/a/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$1;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jl:Lcom/kwad/components/ad/interstitial/d/c$a;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/a/b$10;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$10;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->ka:Lcom/kwad/components/ad/interstitial/d/h;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/a/b$11;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$11;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->cV:Lcom/kwad/sdk/core/h/c;

    return-void
.end method

.method static synthetic A(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic B(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic C(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic D(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic E(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic F(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic G(Lcom/kwad/components/ad/interstitial/d/a/b;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic H(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic I(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic J(Lcom/kwad/components/ad/interstitial/d/a/b;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic K(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic L(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic M(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic N(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic O(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic P(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic Q(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic R(Lcom/kwad/components/ad/interstitial/d/a/b;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic S(Lcom/kwad/components/ad/interstitial/d/a/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->en()V

    return-void
.end method

.method static synthetic T(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic U(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic V(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic W(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic X(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic Y(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic Z(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/core/webview/b/f;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->lu:Lcom/kwad/components/core/webview/b/f;

    return-object p0
.end method

.method private a(Lcom/kwad/sdk/core/webview/b;)Lcom/kwad/components/core/webview/jshandler/o;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance v2, Lcom/kwad/components/ad/interstitial/d/a/b$3;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$3;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    invoke-direct {v0, p1, v1, v2}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    return-object v0
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/a/b;D)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/interstitial/d/a/b;->d(D)V

    return-void
.end method

.method private static a(Landroid/app/Dialog;)Z
    .locals 0

    invoke-virtual {p0}, Landroid/app/Dialog;->getOwnerActivity()Landroid/app/Activity;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/app/Activity;->isFinishing()Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/a/b;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->ls:Z

    return p1
.end method

.method static synthetic aa(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic ab(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic ac(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/sdk/core/g/d;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->dO:Lcom/kwad/sdk/core/g/d;

    return-object p0
.end method

.method static synthetic ad(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic ae(Lcom/kwad/components/ad/interstitial/d/a/b;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/d/a/b;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->lt:Z

    return p1
.end method

.method private bs()V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "vibrator"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Vibrator;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->dP:Landroid/os/Vibrator;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bz(Lcom/kwad/sdk/core/response/model/AdTemplate;)F

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->dO:Lcom/kwad/sdk/core/g/d;

    if-nez v1, :cond_1

    new-instance v1, Lcom/kwad/sdk/core/g/d;

    invoke-direct {v1, v0}, Lcom/kwad/sdk/core/g/d;-><init>(F)V

    iput-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->dO:Lcom/kwad/sdk/core/g/d;

    new-instance v2, Lcom/kwad/components/ad/interstitial/d/a/b$8;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$8;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/g/d;->a(Lcom/kwad/sdk/core/g/b;)V

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->dO:Lcom/kwad/sdk/core/g/d;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/g/d;->e(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->dO:Lcom/kwad/sdk/core/g/d;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bg(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/sdk/core/h/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->cV:Lcom/kwad/sdk/core/h/c;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/core/webview/jshandler/am;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->fn:Lcom/kwad/components/core/webview/jshandler/am;

    return-object p0
.end method

.method private d(D)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/c$b;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

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

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p2, p2, Lcom/kwad/components/ad/interstitial/d/c;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {p2}, Lcom/kwad/sdk/widget/KSFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/d/c$b;->a(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    const/16 p2, 0x9d

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/d/c$b;->z(I)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p2, p1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/c$b;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->dP:Landroid/os/Vibrator;

    sget-wide v0, Lcom/kwad/components/ad/interstitial/d/a/b;->jM:J

    invoke-static {p1, p2, v0, v1}, Lcom/kwad/sdk/utils/bj;->vibrate(Landroid/content/Context;Landroid/os/Vibrator;J)V

    return-void
.end method

.method private df()Lcom/kwad/components/core/webview/b/a/g;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/b/b/k;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/b/k;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->ju:I

    iput v1, v0, Lcom/kwad/components/core/webview/b/b/k;->WX:I

    new-instance v1, Lcom/kwad/components/core/webview/b/a/g;

    invoke-direct {v1, v0}, Lcom/kwad/components/core/webview/b/a/g;-><init>(Lcom/kwad/components/core/webview/b/b/k;)V

    return-object v1
.end method

.method private di()Lcom/kwad/components/ad/g/a/a/a;
    .locals 3

    new-instance v0, Lcom/kwad/components/ad/g/a/a/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/g/a/a/a;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->jq:Ljava/util/List;

    new-instance v2, Lcom/kwad/components/ad/interstitial/d/a/b$2;

    invoke-direct {v2, p0, v0}, Lcom/kwad/components/ad/interstitial/d/a/b$2;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;Lcom/kwad/components/ad/g/a/a/a;)V

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-object v0
.end method

.method private do()Lcom/kwad/components/core/webview/jshandler/av;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/av;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v2, v2, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/av;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/a/b$4;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$4;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/jshandler/av;->a(Lcom/kwad/components/core/webview/jshandler/av$a;)V

    return-object v0
.end method

.method private dp()Lcom/kwad/components/core/webview/jshandler/z;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/z;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/a/b$6;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$6;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/z;-><init>(Lcom/kwad/components/core/webview/jshandler/z$b;)V

    return-object v0
.end method

.method private dr()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->a(Landroid/app/Dialog;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->dismiss()V

    :cond_1
    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClosed()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    return-void
.end method

.method static synthetic e(Lcom/kwad/components/ad/interstitial/d/a/b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->ls:Z

    return p0
.end method

.method private ei()Lcom/kwad/components/core/webview/b/c;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/a/b$16;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$16;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    return-object v0
.end method

.method private ej()Lcom/kwad/components/core/webview/b/f;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/a/b$17;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$17;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    return-object v0
.end method

.method private ek()Lcom/kwad/components/core/webview/b/a/n;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/a/b$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$5;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    return-object v0
.end method

.method private el()Lcom/kwad/components/core/webview/jshandler/m;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/a/b$7;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$7;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    return-object v0
.end method

.method private en()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->fn:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->fn:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jY:Lcom/kwad/components/ad/g/a/a/b;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/g/a/a/b;->eY()V

    :cond_1
    return-void
.end method

.method static synthetic f(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/g/a/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jY:Lcom/kwad/components/ad/g/a/a/b;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/interstitial/d/a/b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->lt:Z

    return p0
.end method

.method private getOpenNewPageListener()Lcom/kwad/components/core/webview/jshandler/af$a;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/a/b$9;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$9;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    return-object v0
.end method

.method static synthetic h(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic j(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method public static k(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic l(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic m(Lcom/kwad/components/ad/interstitial/d/a/b;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic n(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic o(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic p(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic q(Lcom/kwad/components/ad/interstitial/d/a/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->dr()V

    return-void
.end method

.method static synthetic r(Lcom/kwad/components/ad/interstitial/d/a/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->bs()V

    return-void
.end method

.method static synthetic s(Lcom/kwad/components/ad/interstitial/d/a/b;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic t(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic u(Lcom/kwad/components/ad/interstitial/d/a/b;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic v(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic w(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic x(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic y(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic z(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/b/t;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/ad/interstitial/d/a/a;->a(Lcom/kwad/components/core/webview/b/b/t;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onSkippedAd()V

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/ad/interstitial/d/a/a;->a(Lcom/kwad/components/core/webview/jshandler/am;)V

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->fn:Lcom/kwad/components/core/webview/jshandler/am;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/kwad/components/ad/interstitial/d/a/a;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/g/a/a/b;->m(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/g/a/a/b;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jY:Lcom/kwad/components/ad/g/a/a/b;

    if-eqz v0, :cond_0

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/a/b$12;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$12;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/g/a/a/b;->a(Lcom/kwad/components/ad/g/a/a/b$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jY:Lcom/kwad/components/ad/g/a/a/b;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jY:Lcom/kwad/components/ad/g/a/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/g/a/a/b;->eX()V

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->dp()Lcom/kwad/components/core/webview/jshandler/z;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/af;

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getOpenNewPageListener()Lcom/kwad/components/core/webview/jshandler/af$a;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/af;-><init>(Lcom/kwad/components/core/webview/jshandler/af$a;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->cX(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ao;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/a/b$13;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$13;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/ao;-><init>(Lcom/kwad/components/core/webview/jshandler/ao$a;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->ek()Lcom/kwad/components/core/webview/b/a/n;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->do()Lcom/kwad/components/core/webview/jshandler/av;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->df()Lcom/kwad/components/core/webview/b/a/g;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0, p2}, Lcom/kwad/components/ad/interstitial/d/a/b;->a(Lcom/kwad/sdk/core/webview/b;)Lcom/kwad/components/core/webview/jshandler/o;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->el()Lcom/kwad/components/core/webview/jshandler/m;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->di()Lcom/kwad/components/ad/g/a/a/a;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/ad/interstitial/d/a/b$14;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$14;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->ej()Lcom/kwad/components/core/webview/b/f;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->lu:Lcom/kwad/components/core/webview/b/f;

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jl:Lcom/kwad/components/ad/interstitial/d/c$a;

    invoke-virtual {p2, v0}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/c$a;)V

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->lu:Lcom/kwad/components/core/webview/b/f;

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/b/b;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/a/b$15;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/a/b$15;-><init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/b/b;-><init>(Lcom/kwad/components/core/webview/b/b$a;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->ei()Lcom/kwad/components/core/webview/b/c;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->ka:Lcom/kwad/components/ad/interstitial/d/h;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/h;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    const/high16 v2, 0x3f000000    # 0.5f

    add-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->getScreenHeight(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    add-float/2addr v1, v2

    float-to-int v0, v1

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    return-void
.end method

.method public final b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v0, 0x1

    invoke-virtual {p0, p1, v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->dr()V

    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V
    .locals 8

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p2, p2, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {p2}, Lcom/kwad/components/ad/interstitial/d;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v5

    const/16 v1, 0xe

    const-wide/16 v2, -0x1

    const/4 v4, -0x1

    const/4 v7, 0x0

    move-object v0, p1

    invoke-static/range {v0 .. v7}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJIJLorg/json/JSONObject;)V

    return-void
.end method

.method public final cc()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->lr:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/e/e;->q(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final eh()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->fn:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hx:Lcom/kwad/components/ad/interstitial/e/b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/e/b;->ep()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->ls:Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->fn:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->fn:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hx:Lcom/kwad/components/ad/interstitial/e/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->cV:Lcom/kwad/sdk/core/h/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/e/b;->a(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method

.method public final em()V
    .locals 0

    return-void
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->lr:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-interstitial-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_tk_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->lr:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/a/a;->onUnbind()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->ls:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->lt:Z

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->dP:Landroid/os/Vibrator;

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/bj;->b(Landroid/content/Context;Landroid/os/Vibrator;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->dO:Lcom/kwad/sdk/core/g/d;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/b;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bh(Landroid/content/Context;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hx:Lcom/kwad/components/ad/interstitial/e/b;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hx:Lcom/kwad/components/ad/interstitial/e/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->cV:Lcom/kwad/sdk/core/h/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/e/b;->b(Lcom/kwad/sdk/core/h/c;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jl:Lcom/kwad/components/ad/interstitial/d/c$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->b(Lcom/kwad/components/ad/interstitial/d/c$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/b;->ka:Lcom/kwad/components/ad/interstitial/d/h;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->b(Lcom/kwad/components/ad/interstitial/d/h;)V

    return-void
.end method
