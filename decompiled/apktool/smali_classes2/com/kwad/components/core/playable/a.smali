.class public final Lcom/kwad/components/core/playable/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/i;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/playable/a$a;
    }
.end annotation


# instance fields
.field private final Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private Pc:J

.field private Pd:I

.field private Pe:Lcom/kwad/components/core/playable/PlayableSource;

.field private Pf:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/webview/jshandler/ah$b;",
            ">;"
        }
    .end annotation
.end field

.field private Pg:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/webview/KsAdWebView$d;",
            ">;"
        }
    .end annotation
.end field

.field private cD:Lcom/kwad/components/core/webview/a;

.field private cG:Lcom/kwad/components/core/webview/jshandler/am;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mContext:Landroid/content/Context;

.field private mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/webview/KsAdWebView;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-object v0, Lcom/kwad/components/core/playable/PlayableSource;->UNKNOWN_TRYPLAY_ENTRY_SOURCE:Lcom/kwad/components/core/playable/PlayableSource;

    iput-object v0, p0, Lcom/kwad/components/core/playable/a;->Pe:Lcom/kwad/components/core/playable/PlayableSource;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/playable/a;->Pf:Ljava/util/List;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/playable/a;->Pg:Ljava/util/List;

    iput-object p1, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    new-instance v0, Lcom/kwad/components/core/playable/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/playable/a$1;-><init>(Lcom/kwad/components/core/playable/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/core/playable/a;->getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    iget-object p1, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-static {p1}, Lcom/kwad/components/core/playable/a;->a(Lcom/kwad/sdk/core/webview/KsAdWebView;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/playable/a;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/components/core/playable/a;->Pd:I

    return p1
.end method

.method static synthetic a(Lcom/kwad/components/core/playable/a;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/core/playable/a;->Pc:J

    return-wide p1
.end method

.method static synthetic a(Lcom/kwad/components/core/playable/a;)Lcom/kwad/sdk/core/webview/KsAdWebView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-object p0
.end method

.method private static a(Lcom/kwad/sdk/core/webview/KsAdWebView;)V
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    if-lt v0, v1, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zL()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p0

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Landroid/webkit/WebSettings;->setMediaPlaybackRequiresUserGesture(Z)V

    :cond_0
    return-void
.end method

.method private a(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/webview/a;Lcom/kwad/components/core/e/d/c;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/au;

    new-instance v1, Lcom/kwad/components/core/playable/a$a;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/playable/a$a;-><init>(Lcom/kwad/components/core/playable/a;)V

    invoke-direct {v0, p1, p3, v1}, Lcom/kwad/components/core/webview/jshandler/au;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/components/core/webview/jshandler/au$b;)V

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p3, Lcom/kwad/components/core/webview/jshandler/ah;

    new-instance v0, Lcom/kwad/components/core/playable/a$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/playable/a$3;-><init>(Lcom/kwad/components/core/playable/a;)V

    invoke-direct {p0}, Lcom/kwad/components/core/playable/a;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p3, v0, v1}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p2, p3}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p3, Lcom/kwad/components/core/webview/jshandler/ab;

    invoke-direct {p3, p1}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p2, p3}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p3, Lcom/kwad/components/core/webview/jshandler/am;

    invoke-direct {p3}, Lcom/kwad/components/core/webview/jshandler/am;-><init>()V

    iput-object p3, p0, Lcom/kwad/components/core/playable/a;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    new-instance p3, Lcom/kwad/components/core/webview/jshandler/w;

    invoke-direct {p3}, Lcom/kwad/components/core/webview/jshandler/w;-><init>()V

    invoke-virtual {p2, p3}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p3, Lcom/kwad/components/core/webview/jshandler/v;

    invoke-direct {p3, p1}, Lcom/kwad/components/core/webview/jshandler/v;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p2, p3}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p1, Lcom/kwad/components/core/webview/b/a/f;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/a/f;-><init>()V

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object p1, p0, Lcom/kwad/components/core/playable/a;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p1, Lcom/kwad/components/core/webview/jshandler/e;

    invoke-direct {p1, p0}, Lcom/kwad/components/core/webview/jshandler/e;-><init>(Lcom/kwad/components/core/webview/jshandler/i;)V

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method private ay()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/playable/a;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method

.method private az(I)V
    .locals 6

    invoke-direct {p0}, Lcom/kwad/components/core/playable/a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zM()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-lez v2, :cond_1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/kwad/components/core/playable/a;->Pc:J

    sub-long/2addr v2, v4

    cmp-long v0, v2, v0

    if-lez v0, :cond_1

    return-void

    :cond_1
    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->jG:I

    iget-object p1, p0, Lcom/kwad/components/core/playable/a;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object p1

    iput-object p1, v0, Lcom/kwad/sdk/core/report/z$b;->jI:Lcom/kwad/sdk/utils/ac$a;

    new-instance p1, Lcom/kwad/components/core/e/d/a$a;

    iget-object v1, p0, Lcom/kwad/components/core/playable/a;->mContext:Landroid/content/Context;

    invoke-direct {p1, v1}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object v1, p0, Lcom/kwad/components/core/playable/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    const/4 v1, 0x0

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/playable/a;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/playable/a;->Pg:Ljava/util/List;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/core/playable/a;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/playable/a;->az(I)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/core/playable/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/core/playable/a;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/playable/a;->Pf:Ljava/util/List;

    return-object p0
.end method

.method private getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method private getUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    :cond_0
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bB(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/playable/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/playable/a$2;-><init>(Lcom/kwad/components/core/playable/a;)V

    return-object v0
.end method

.method private oV()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bx(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/playable/a$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/playable/a$4;-><init>(Lcom/kwad/components/core/playable/a;)V

    iget-object v1, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bx(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v4

    invoke-static {v0, v4, v5}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bx(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    cmp-long v0, v0, v2

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bZ(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    :cond_2
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pf:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/e;Ljava/lang/String;)V
    .locals 1

    const-string v0, "playableSrc"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pe:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/jshandler/e;->f(Lcom/kwad/components/core/playable/PlayableSource;)V

    :cond_0
    const-string v0, "getAdType"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz p2, :cond_1

    iget p2, p2, Lcom/kwad/sdk/core/response/model/AdTemplate;->adStyle:I

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/jshandler/e;->aM(I)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/components/core/e/d/c;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-nez v0, :cond_0

    const-string p1, "PlayableViewHelper"

    const-string p2, "registerJsBridge mPlayableView is null"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-virtual {p2}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/playable/a;->mContext:Landroid/content/Context;

    iput-object p2, p0, Lcom/kwad/components/core/playable/a;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object p1, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p3, p0, Lcom/kwad/components/core/playable/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    const/4 p2, -0x1

    iput p2, p0, Lcom/kwad/components/core/playable/a;->Pd:I

    new-instance p2, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {p2}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    invoke-virtual {p2, p1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    const/4 p1, 0x0

    iput p1, p2, Lcom/kwad/sdk/core/webview/b;->mScreenOrientation:I

    iget-object p1, p0, Lcom/kwad/components/core/playable/a;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object p1, p2, Lcom/kwad/sdk/core/webview/b;->aye:Lcom/kwad/sdk/widget/e;

    iget-object p1, p0, Lcom/kwad/components/core/playable/a;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object p1, p2, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    iget-object p1, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object p1, p2, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    invoke-direct {p0}, Lcom/kwad/components/core/playable/a;->ay()V

    new-instance p1, Lcom/kwad/components/core/webview/a;

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {p1, v0}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object p1, p0, Lcom/kwad/components/core/playable/a;->cD:Lcom/kwad/components/core/webview/a;

    invoke-direct {p0, p2, p1, p3}, Lcom/kwad/components/core/playable/a;->a(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/webview/a;Lcom/kwad/components/core/e/d/c;)V

    iget-object p1, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object p2, p0, Lcom/kwad/components/core/playable/a;->cD:Lcom/kwad/components/core/webview/a;

    const-string p3, "KwaiAd"

    invoke-virtual {p1, p2, p3}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pg:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/ah$b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pf:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final e(Lcom/kwad/components/core/playable/PlayableSource;)V
    .locals 1

    if-eqz p1, :cond_0

    iput-object p1, p0, Lcom/kwad/components/core/playable/a;->Pe:Lcom/kwad/components/core/playable/PlayableSource;

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-nez p1, :cond_1

    return-void

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/core/playable/a;->oV()V

    const-string p1, "PlayableViewHelper"

    const-string v0, "showPlayable"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/core/playable/a;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/core/playable/a;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_3
    return-void
.end method

.method public final getLoadTime()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getLoadTime()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    return-wide v0
.end method

.method public final hH()V
    .locals 2

    const-string v0, "PlayableViewHelper"

    const-string v1, "showPlayable"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->reload()V

    return-void
.end method

.method public final pv()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/playable/a;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method

.method public final pw()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    invoke-direct {p0}, Lcom/kwad/components/core/playable/a;->getUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/a;->aF(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public final px()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/playable/a;->Pb:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/kwad/components/core/playable/a;->Pd:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
