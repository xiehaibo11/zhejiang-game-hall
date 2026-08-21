.class public final Lcom/kwad/components/ad/f/e;
.super Lcom/kwad/sdk/widget/KSRelativeLayout;

# interfaces
.implements Lcom/kwad/sdk/core/h/c;


# instance fields
.field private bG:Lcom/kwad/components/core/widget/a/b;

.field private cD:Lcom/kwad/components/core/webview/a;

.field private cE:Lcom/kwad/sdk/core/webview/b;

.field private cF:I

.field private cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

.field private cr:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private eA:Z

.field private eD:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

.field private eE:Lcom/kwad/components/core/offline/api/a/a;

.field public eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

.field private eI:Lcom/kwad/components/core/j/a$b;

.field private final eJ:Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListener;

.field private eK:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

.field private ev:Lcom/kwad/sdk/widget/KSRelativeLayout;

.field private fH:Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

.field private fm:Lcom/kwad/components/core/webview/jshandler/aq;

.field private fn:Lcom/kwad/components/core/webview/jshandler/am;

.field private fo:Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveMessageListener;

.field private fp:Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveShopListener;

.field private ft:Lcom/kwad/components/core/webview/jshandler/an$b;

.field private fu:Lcom/kwad/components/core/webview/jshandler/an$a;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mB:I

.field private mC:I

.field private mContext:Landroid/content/Context;

.field private mE:Lcom/kwad/components/ad/f/d$a;

.field private mIsAudioEnable:Z

.field private final mNetworking:Lcom/kwad/sdk/core/network/m;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/sdk/core/network/m<",
            "Lcom/kwad/components/core/liveEnd/a;",
            "Lcom/kwad/components/core/liveEnd/AdLiveEndCommonResultData;",
            ">;"
        }
    .end annotation
.end field

.field private mO:Landroid/widget/ImageView;

.field private mP:Landroid/widget/RelativeLayout;

.field private mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

.field private mR:Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

.field private mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/KSRelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    iput p1, p0, Lcom/kwad/components/ad/f/e;->mB:I

    iput p1, p0, Lcom/kwad/components/ad/f/e;->mC:I

    new-instance p1, Lcom/kwad/components/ad/f/e$10;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/f/e$10;-><init>(Lcom/kwad/components/ad/f/e;)V

    iput-object p1, p0, Lcom/kwad/components/ad/f/e;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    new-instance p1, Lcom/kwad/components/ad/f/e$12;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/f/e$12;-><init>(Lcom/kwad/components/ad/f/e;)V

    iput-object p1, p0, Lcom/kwad/components/ad/f/e;->mNetworking:Lcom/kwad/sdk/core/network/m;

    new-instance p1, Lcom/kwad/components/ad/f/e$2;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/f/e$2;-><init>(Lcom/kwad/components/ad/f/e;)V

    iput-object p1, p0, Lcom/kwad/components/ad/f/e;->eJ:Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListener;

    new-instance p1, Lcom/kwad/components/ad/f/e$3;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/f/e$3;-><init>(Lcom/kwad/components/ad/f/e;)V

    iput-object p1, p0, Lcom/kwad/components/ad/f/e;->eK:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->initView()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/e;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/f/e;->cF:I

    return p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveMessageListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->fo:Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveMessageListener;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/e;Lcom/kwad/components/core/webview/jshandler/an$a;)Lcom/kwad/components/core/webview/jshandler/an$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/e;->fu:Lcom/kwad/components/core/webview/jshandler/an$a;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/e;Lcom/kwad/components/core/webview/jshandler/an$b;)Lcom/kwad/components/core/webview/jshandler/an$b;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/e;->ft:Lcom/kwad/components/core/webview/jshandler/an$b;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/e;Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;)Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/e;->fH:Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/e;J)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/f/e;->c(J)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/e;Landroid/view/View;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/f/e;->c(Landroid/view/View;)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/webview/a;)V
    .locals 4

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/aq;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/aq;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->fm:Lcom/kwad/components/core/webview/jshandler/aq;

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/am;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/am;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->fn:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/r;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/f/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->getClickListener()Lcom/kwad/sdk/core/webview/d/a/a;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/r;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/f/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->getClickListener()Lcom/kwad/sdk/core/webview/d/a/a;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/b/a/f;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/f;-><init>()V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/x;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/x;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/t;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/t;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ah;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    iget-object v2, p0, Lcom/kwad/components/ad/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->bq(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ap;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/f/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ap;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ab;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->fm:Lcom/kwad/components/core/webview/jshandler/aq;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/af;

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->getOpenNewPageListener()Lcom/kwad/components/core/webview/jshandler/af$a;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/af;-><init>(Lcom/kwad/components/core/webview/jshandler/af$a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/c;

    iget v1, p0, Lcom/kwad/components/ad/f/e;->mB:I

    iget v2, p0, Lcom/kwad/components/ad/f/e;->mC:I

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/c;-><init>(II)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveShopListener;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveShopListener;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->fp:Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveShopListener;

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveMessageListener;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveMessageListener;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->fo:Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveMessageListener;

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->fp:Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveShopListener;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->fo:Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveMessageListener;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/an;

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->getRegisterLiveListener()Lcom/kwad/components/core/webview/jshandler/an$c;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/an;-><init>(Lcom/kwad/components/core/webview/jshandler/an$c;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/e;Z)Z
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/f/e;->g(Z)Z

    move-result p0

    return p0
.end method

.method private av()V
    .locals 4

    new-instance v0, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 v1, 0x0

    iput v1, v0, Lcom/kwad/sdk/core/webview/b;->mScreenOrientation:I

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 v2, 0x0

    iput-object v2, v0, Lcom/kwad/sdk/core/webview/b;->aye:Lcom/kwad/sdk/widget/e;

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v3, p0, Lcom/kwad/components/ad/f/e;->mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    iput-object v3, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v3, p0, Lcom/kwad/components/ad/f/e;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v3, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iput-object v2, v0, Lcom/kwad/sdk/core/webview/b;->mReportExtData:Lorg/json/JSONObject;

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->cE:Lcom/kwad/sdk/core/webview/b;

    iput-boolean v1, v0, Lcom/kwad/sdk/core/webview/b;->ayg:Z

    return-void
.end method

.method private aw()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bx(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->eL()V

    return-void
.end method

.method private ay()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveShopListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->fp:Lcom/kwad/components/core/webview/jshandler/WebCardRegisterLiveShopListener;

    return-object p0
.end method

.method private bg()Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;
    .locals 5

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->bh()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->eE:Lcom/kwad/components/core/offline/api/a/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->mContext:Landroid/content/Context;

    const/4 v2, 0x3

    invoke-interface {v0, v1, v2}, Lcom/kwad/components/core/offline/api/a/a;->getView(Landroid/content/Context;I)Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->eD:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->eE:Lcom/kwad/components/core/offline/api/a/a;

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/sdk/api/SdkConfig;->appId:Ljava/lang/String;

    iget-object v3, p0, Lcom/kwad/components/ad/f/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/a;->bR(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v0, v2, v3}, Lcom/kwad/components/core/offline/api/a/a;->getAdLivePlayModule(Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object v0

    iget-boolean v1, p0, Lcom/kwad/components/ad/f/e;->mIsAudioEnable:Z

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/f/e;->g(Z)Z

    move-result v1

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->setAudioEnabled(ZZ)V

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->eJ:Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListener;

    invoke-interface {v0, v1}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->registerAdLivePlayStateListener(Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListener;)V

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->eD:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    invoke-interface {v1}, Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;->getView()Landroid/view/View;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/f/e;->mP:Landroid/widget/RelativeLayout;

    invoke-virtual {v2}, Landroid/widget/RelativeLayout;->removeAllViews()V

    iget-object v2, p0, Lcom/kwad/components/ad/f/e;->mP:Landroid/widget/RelativeLayout;

    invoke-virtual {v2, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    new-instance v2, Lcom/kwad/components/ad/f/e$1;

    invoke-direct {v2, p0, v1}, Lcom/kwad/components/ad/f/e$1;-><init>(Lcom/kwad/components/ad/f/e;Landroid/view/View;)V

    invoke-static {v2}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->bw()V

    iget-boolean v1, p0, Lcom/kwad/components/ad/f/e;->mIsAudioEnable:Z

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/f/e;->eK:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/t/a;->a(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V

    :cond_0
    return-object v0
.end method

.method private bh()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bi(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/b;->getUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->mO:Landroid/widget/ImageView;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->mO:Landroid/widget/ImageView;

    iget-object v2, p0, Lcom/kwad/components/ad/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v3, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;

    invoke-direct {v3}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;-><init>()V

    const/16 v4, 0x32

    invoke-virtual {v3, v4}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;->setBlurRadius(I)Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;->build()Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat;

    move-result-object v3

    new-instance v4, Lcom/kwad/components/ad/f/e$5;

    invoke-direct {v4, p0}, Lcom/kwad/components/ad/f/e$5;-><init>(Lcom/kwad/components/ad/f/e;)V

    invoke-static {v1, v0, v2, v3, v4}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat;Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mO:Landroid/widget/ImageView;

    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mO:Landroid/widget/ImageView;

    const/16 v1, 0x8

    goto :goto_0
.end method

.method private bv()Z
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/f/e;->cF:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private bw()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->eD:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    new-instance v1, Lcom/kwad/components/ad/f/e$6;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/f/e$6;-><init>(Lcom/kwad/components/ad/f/e;)V

    invoke-interface {v0, v1}, Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;->registerLiveMessageListener(Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveMessageListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->eD:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    new-instance v1, Lcom/kwad/components/ad/f/e$7;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/f/e$7;-><init>(Lcom/kwad/components/ad/f/e;)V

    invoke-interface {v0, v1}, Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;->registerLiveShopListener(Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveShopListener;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/core/webview/jshandler/an$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->fu:Lcom/kwad/components/core/webview/jshandler/an$a;

    return-object p0
.end method

.method private c(J)V
    .locals 2

    long-to-float p1, p1

    const/high16 p2, 0x447a0000    # 1000.0f

    div-float/2addr p1, p2

    float-to-double p1, p1

    invoke-static {p1, p2}, Ljava/lang/Math;->ceil(D)D

    move-result-wide p1

    double-to-int p1, p1

    iget-object p2, p0, Lcom/kwad/components/ad/f/e;->cr:Ljava/util/List;

    if-eqz p2, :cond_2

    invoke-interface {p2}, Ljava/util/List;->isEmpty()Z

    move-result p2

    if-eqz p2, :cond_0

    goto :goto_0

    :cond_0
    iget-object p2, p0, Lcom/kwad/components/ad/f/e;->cr:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_1
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-lt p1, v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    invoke-interface {p2}, Ljava/util/Iterator;->remove()V

    :cond_2
    :goto_0
    return-void
.end method

.method private c(Landroid/view/View;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->ev:Lcom/kwad/sdk/widget/KSRelativeLayout;

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSRelativeLayout;->getWidth()I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->ev:Lcom/kwad/sdk/widget/KSRelativeLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/widget/KSRelativeLayout;->getHeight()I

    move-result v1

    if-eqz v0, :cond_1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const/high16 v0, 0x3f100000    # 0.5625f

    int-to-float v2, v1

    mul-float/2addr v2, v0

    float-to-int v0, v2

    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v2, v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v0, 0xd

    const/4 v1, -0x1

    invoke-virtual {v2, v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    invoke-virtual {p1, v2}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/core/webview/jshandler/an$b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->ft:Lcom/kwad/components/core/webview/jshandler/an$b;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private eG()V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    iget-object v0, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->nativeAdExtraData:Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

    iget v0, v0, Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;->showLiveStatus:I

    iput v0, p0, Lcom/kwad/components/ad/f/e;->mB:I

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    iget-object v0, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->nativeAdExtraData:Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

    iget v0, v0, Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;->showLiveStyle:I

    iput v0, p0, Lcom/kwad/components/ad/f/e;->mC:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private eK()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->av()V

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->bv()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->reload()V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->aw()V

    return-void
.end method

.method private eL()V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->ay()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    new-instance v0, Lcom/kwad/components/core/webview/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->cD:Lcom/kwad/components/core/webview/a;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/f/e;->a(Lcom/kwad/components/core/webview/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->cD:Lcom/kwad/components/core/webview/a;

    const-string v2, "KwaiAd"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->br(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic f(Lcom/kwad/components/ad/f/e;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->mContext:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/f/e;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/f/e;->cF:I

    return p0
.end method

.method private g(Z)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/f/e;->eI:Lcom/kwad/components/core/j/a$b;

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    iget-object p1, p0, Lcom/kwad/components/ad/f/e;->eI:Lcom/kwad/components/core/j/a$b;

    invoke-static {p1}, Lcom/kwad/components/core/j/a;->b(Lcom/kwad/components/core/j/a$b;)Z

    move-result p1

    if-nez p1, :cond_1

    return v0

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->gF()Z

    move-result p1

    const/4 v1, 0x1

    if-nez p1, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/f/e;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/t/a;->qi()Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/f/e;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    move-result p1

    return p1

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/f/e;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/t/a;->qh()Z

    move-result p1

    if-nez p1, :cond_3

    return v1

    :cond_3
    return v0

    :cond_4
    iget-boolean p1, p0, Lcom/kwad/components/ad/f/e;->eA:Z

    if-nez p1, :cond_5

    iget-object p1, p0, Lcom/kwad/components/ad/f/e;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/components/ad/f/e;->eA:Z

    :cond_5
    iget-boolean p1, p0, Lcom/kwad/components/ad/f/e;->eA:Z

    return p1
.end method

.method private getClickListener()Lcom/kwad/sdk/core/webview/d/a/a;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/f/e$11;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/e$11;-><init>(Lcom/kwad/components/ad/f/e;)V

    return-object v0
.end method

.method private getCurrentVoiceItem()Lcom/kwad/components/core/j/a$b;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->eI:Lcom/kwad/components/core/j/a$b;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/j/a$b;

    new-instance v1, Lcom/kwad/components/ad/f/e$4;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/f/e$4;-><init>(Lcom/kwad/components/ad/f/e;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/j/a$b;-><init>(Lcom/kwad/components/core/j/a$c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->eI:Lcom/kwad/components/core/j/a$b;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->eI:Lcom/kwad/components/core/j/a$b;

    return-object v0
.end method

.method private getOpenNewPageListener()Lcom/kwad/components/core/webview/jshandler/af$a;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/f/e$9;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/e$9;-><init>(Lcom/kwad/components/ad/f/e;)V

    return-object v0
.end method

.method private getRegisterLiveListener()Lcom/kwad/components/core/webview/jshandler/an$c;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/f/e$8;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/e$8;-><init>(Lcom/kwad/components/ad/f/e;)V

    return-object v0
.end method

.method static synthetic h(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/core/webview/KsAdWebView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method private initView()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/f/e;->getContext()Landroid/content/Context;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$layout;->ksad_native_live_layout:I

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_root_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_bg_img:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->mO:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_container:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSRelativeLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->ev:Lcom/kwad/sdk/widget/KSRelativeLayout;

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_video_container:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->mP:Landroid/widget/RelativeLayout;

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_web_card_webView:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setBackgroundColor(I)V

    const-class v0, Lcom/kwad/components/core/offline/api/a/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/offline/api/a/a;

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->eE:Lcom/kwad/components/core/offline/api/a/a;

    return-void
.end method

.method static synthetic j(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/ad/f/d$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->mE:Lcom/kwad/components/ad/f/d$a;

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/core/e/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->fH:Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

    return-object p0
.end method

.method static synthetic m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    return-object p0
.end method

.method static synthetic n(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/core/network/m;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/e;->mNetworking:Lcom/kwad/sdk/core/network/m;

    return-object p0
.end method

.method static synthetic o(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/core/j/a$b;
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->getCurrentVoiceItem()Lcom/kwad/components/core/j/a$b;

    move-result-object p0

    return-object p0
.end method

.method static synthetic p(Lcom/kwad/components/ad/f/e;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/f/e;->mIsAudioEnable:Z

    return p0
.end method

.method static synthetic q(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->bg()Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;)V
    .locals 0

    iput-object p2, p0, Lcom/kwad/components/ad/f/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/f/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iput-object p1, p0, Lcom/kwad/components/ad/f/e;->mContext:Landroid/content/Context;

    iput-object p4, p0, Lcom/kwad/components/ad/f/e;->mR:Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    iput-object p3, p0, Lcom/kwad/components/ad/f/e;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->bd(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/f/e;->cr:Ljava/util/List;

    invoke-virtual {p0}, Lcom/kwad/components/ad/f/e;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_0

    move-object p1, p0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/f/e;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    check-cast p1, Landroid/view/View;

    :goto_0
    new-instance p2, Lcom/kwad/components/core/widget/a/b;

    const/16 p3, 0x1e

    invoke-direct {p2, p1, p3}, Lcom/kwad/components/core/widget/a/b;-><init>(Landroid/view/View;I)V

    iput-object p2, p0, Lcom/kwad/components/ad/f/e;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object p1, p0, Lcom/kwad/components/ad/f/e;->mR:Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    invoke-virtual {p1}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoSoundValue()I

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/f/e;->mR:Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    invoke-virtual {p1}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->isVideoSoundEnable()Z

    move-result p1

    goto :goto_1

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/f/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    :goto_1
    iput-boolean p1, p0, Lcom/kwad/components/ad/f/e;->mIsAudioEnable:Z

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->eG()V

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->eK()V

    return-void
.end method

.method public final aK()V
    .locals 2

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->getCurrentVoiceItem()Lcom/kwad/components/core/j/a$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/j/a;->a(Lcom/kwad/components/core/j/a$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/e;->bg()Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    return-void

    :cond_0
    invoke-interface {v0}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->onResume()V

    return-void
.end method

.method public final aL()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->onPause()V

    :cond_0
    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/e;->eI:Lcom/kwad/components/core/j/a$b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/j/a;->c(Lcom/kwad/components/core/j/a$b;)V

    return-void
.end method

.method public final aa()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSRelativeLayout;->aa()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->sy()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/widget/a/b;->a(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method

.method public final ab()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSRelativeLayout;->ab()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->sy()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/widget/a/b;->b(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->onDestroy()V

    iput-object v1, p0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    :cond_0
    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/f/e;->eI:Lcom/kwad/components/core/j/a$b;

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/j/a;->c(Lcom/kwad/components/core/j/a$b;)V

    iput-object v1, p0, Lcom/kwad/components/ad/f/e;->fu:Lcom/kwad/components/core/webview/jshandler/an$a;

    iput-object v1, p0, Lcom/kwad/components/ad/f/e;->ft:Lcom/kwad/components/core/webview/jshandler/an$b;

    iget-object v0, p0, Lcom/kwad/components/ad/f/e;->eD:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;->onDestroy()V

    iput-object v1, p0, Lcom/kwad/components/ad/f/e;->eD:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    :cond_1
    return-void
.end method

.method public final setInnerAdInteractionListener(Lcom/kwad/components/ad/f/d$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/e;->mE:Lcom/kwad/components/ad/f/d$a;

    return-void
.end method

.method public final setVideoPlayListener(Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/e;->mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    return-void
.end method
