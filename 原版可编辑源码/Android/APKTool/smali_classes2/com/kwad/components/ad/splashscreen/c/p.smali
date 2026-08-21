.class public final Lcom/kwad/components/ad/splashscreen/c/p;
.super Lcom/kwad/components/ad/splashscreen/c/e;

# interfaces
.implements Lcom/kwad/components/ad/splashscreen/e;
.implements Lcom/kwad/components/ad/splashscreen/g;


# instance fields
.field private DG:Lcom/kwad/components/ad/splashscreen/f/b;

.field private DH:Z

.field private DI:Z

.field private DJ:J

.field private DK:Lcom/kwad/components/core/webview/jshandler/am;

.field private DL:Z

.field private DM:Landroid/view/ViewGroup;

.field private final DN:Ljava/lang/Runnable;

.field private cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private cD:Lcom/kwad/components/core/webview/a;

.field private cE:Lcom/kwad/sdk/core/webview/b;

.field private dO:Lcom/kwad/sdk/core/g/d;

.field private dP:Landroid/os/Vibrator;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mStartTime:J


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DI:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DL:Z

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/p$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/p$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DN:Ljava/lang/Runnable;

    return-void
.end method

.method private F(Landroid/content/Context;)Landroid/os/Vibrator;
    .locals 1

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "vibrator"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/os/Vibrator;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/p;Landroid/content/Context;)Landroid/os/Vibrator;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/c/p;->F(Landroid/content/Context;)Landroid/os/Vibrator;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/p;Landroid/os/Vibrator;)Landroid/os/Vibrator;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->dP:Landroid/os/Vibrator;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/p;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->ay()V

    invoke-virtual {p1}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    new-instance v0, Lcom/kwad/components/core/webview/a;

    invoke-direct {v0, p1}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cD:Lcom/kwad/components/core/webview/a;

    invoke-direct {p0, v0, p2}, Lcom/kwad/components/ad/splashscreen/c/p;->a(Lcom/kwad/components/core/webview/a;Ljava/lang/String;)V

    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cD:Lcom/kwad/components/core/webview/a;

    const-string v0, "KwaiAd"

    invoke-virtual {p1, p2, v0}, Landroid/webkit/WebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/p;D)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/c/p;->h(D)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/p;ZILcom/kwad/sdk/core/report/z$b;I)V
    .locals 0

    const/4 p1, 0x0

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/kwad/components/ad/splashscreen/c/p;->a(ZILcom/kwad/sdk/core/report/z$b;I)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/webview/a;Ljava/lang/String;)V
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ap;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ap;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->dt()Lcom/kwad/components/core/webview/jshandler/r;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->ds()Lcom/kwad/components/core/webview/jshandler/o;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/b/a/f;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/f;-><init>()V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ah;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/p$7;

    invoke-direct {v1, p0, p2}, Lcom/kwad/components/ad/splashscreen/c/p$7;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;Ljava/lang/String;)V

    invoke-direct {v0, v1, p2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/ao;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/p$8;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/p$8;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/ao;-><init>(Lcom/kwad/components/core/webview/jshandler/ao$a;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/ab;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/am;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/am;-><init>()V

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DK:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method private a(Lcom/kwad/sdk/core/webview/KsAdWebView;Ljava/lang/String;)V
    .locals 2

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setBackgroundColor(I)V

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->av()V

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/c/p;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/p$6;

    invoke-direct {v1, p0, p2}, Lcom/kwad/components/ad/splashscreen/c/p$6;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    invoke-static {p2}, Lcom/kwad/components/ad/splashscreen/monitor/b;->Y(Ljava/lang/String;)V

    sget-object v0, Lcom/kwad/components/ad/splashscreen/b/a;->Cz:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/d;)Z

    move-result v0

    if-eqz v0, :cond_0

    :try_start_0
    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->ls()V

    return-void

    :cond_0
    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method private a(ZILcom/kwad/sdk/core/report/z$b;I)V
    .locals 8

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/h;->kE()V

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eqz p3, :cond_0

    move v2, v1

    goto :goto_0

    :cond_0
    move v2, v0

    :goto_0
    if-ne p2, v1, :cond_1

    move v3, v1

    goto :goto_1

    :cond_1
    move v3, v0

    :goto_1
    if-nez v2, :cond_5

    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    iget-object v5, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v5, :cond_5

    iget-object v5, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v5, v5, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    if-eqz v5, :cond_2

    const-string v5, "duration"

    iget-object v6, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v6, v6, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    invoke-virtual {v6}, Lcom/kwad/components/ad/splashscreen/e/a;->getCurrentPosition()J

    move-result-wide v6

    invoke-virtual {v4, v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    :cond_2
    if-eqz p1, :cond_3

    const/16 v0, 0x99

    goto :goto_2

    :cond_3
    if-eqz v3, :cond_4

    const/16 v0, 0x84

    :cond_4
    :goto_2
    :try_start_1
    new-instance p1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {p1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object p1

    iget-object v5, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v5, v5, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v5, p1, v4}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_4

    :catch_0
    move-exception p1

    goto :goto_3

    :catch_1
    move-exception p1

    move v0, p4

    :goto_3
    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    goto :goto_4

    :cond_5
    move v0, p4

    :goto_4
    new-instance p1, Lcom/kwad/components/core/e/d/a$a;

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v4, v4, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v4}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-direct {p1, v4}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v4, v4, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v4}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v4, v4, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p1, v4}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    if-eqz v2, :cond_6

    goto :goto_5

    :cond_6
    move p4, v0

    :goto_5
    invoke-virtual {p1, p4}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/kwad/components/core/e/d/a$a;->ao(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance p2, Lcom/kwad/components/ad/splashscreen/c/p$5;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/splashscreen/c/p$5;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/p;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DL:Z

    return p1
.end method

.method private av()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 v1, 0x0

    iput v1, v0, Lcom/kwad/sdk/core/webview/b;->mScreenOrientation:I

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v2, v0, Lcom/kwad/sdk/core/webview/b;->aye:Lcom/kwad/sdk/widget/e;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v2, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v2, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 v2, 0x0

    iput-object v2, v0, Lcom/kwad/sdk/core/webview/b;->mReportExtData:Lorg/json/JSONObject;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    iput-boolean v1, v0, Lcom/kwad/sdk/core/webview/b;->ayg:Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/components/ad/splashscreen/h;->m(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    iput-boolean v1, v0, Lcom/kwad/sdk/core/webview/b;->ayh:Z

    return-void
.end method

.method private ay()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/p;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DJ:J

    return-wide v0
.end method

.method private bs()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->dO:Lcom/kwad/sdk/core/g/d;

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DI:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bD(Lcom/kwad/sdk/core/response/model/AdTemplate;)F

    move-result v0

    new-instance v1, Lcom/kwad/sdk/core/g/d;

    invoke-direct {v1, v0}, Lcom/kwad/sdk/core/g/d;-><init>(F)V

    iput-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->dO:Lcom/kwad/sdk/core/g/d;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/p$9;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/p$9;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;)V

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/g/d;->a(Lcom/kwad/sdk/core/g/b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->dO:Lcom/kwad/sdk/core/g/d;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bg(Landroid/content/Context;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/c/p;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->ls()V

    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/splashscreen/c/p;)Ljava/lang/Runnable;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DN:Ljava/lang/Runnable;

    return-object p0
.end method

.method private ds()Lcom/kwad/components/core/webview/jshandler/o;
    .locals 4

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance v3, Lcom/kwad/components/ad/splashscreen/c/p$3;

    invoke-direct {v3, p0}, Lcom/kwad/components/ad/splashscreen/c/p$3;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;)V

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    return-object v0
.end method

.method private dt()Lcom/kwad/components/core/webview/jshandler/r;
    .locals 4

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/r;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance v3, Lcom/kwad/components/ad/splashscreen/c/p$4;

    invoke-direct {v3, p0}, Lcom/kwad/components/ad/splashscreen/c/p$4;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;)V

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/r;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    return-object v0
.end method

.method static synthetic e(Lcom/kwad/components/ad/splashscreen/c/p;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mStartTime:J

    return-wide v0
.end method

.method static synthetic f(Lcom/kwad/components/ad/splashscreen/c/p;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DL:Z

    return p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/splashscreen/c/p;)Lcom/kwad/components/core/webview/jshandler/am;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DK:Lcom/kwad/components/core/webview/jshandler/am;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/splashscreen/c/p;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method private h(D)V
    .locals 7

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    const/4 v2, 0x1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->getContext()Landroid/content/Context;

    move-result-object v3

    const/16 v4, 0x9d

    const/4 v5, 0x2

    new-instance v6, Lcom/kwad/components/ad/splashscreen/c/p$11;

    invoke-direct {v6, p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/c/p$11;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;D)V

    invoke-virtual/range {v1 .. v6}, Lcom/kwad/components/ad/splashscreen/h;->a(ILandroid/content/Context;IILcom/kwad/components/ad/splashscreen/h$a;)V

    :cond_0
    return-void
.end method

.method static synthetic i(Lcom/kwad/components/ad/splashscreen/c/p;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->bs()V

    return-void
.end method

.method static synthetic j(Lcom/kwad/components/ad/splashscreen/c/p;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->lq()V

    return-void
.end method

.method static synthetic k(Lcom/kwad/components/ad/splashscreen/c/p;)Landroid/os/Vibrator;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->dP:Landroid/os/Vibrator;

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/ad/splashscreen/c/p;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private lq()V
    .locals 4

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/p$10;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/p$10;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;)V

    const/4 v1, 0x0

    const-wide/16 v2, 0x1f4

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void
.end method

.method private ls()V
    .locals 2

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DI:Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/16 v1, 0x8

    if-eqz v0, :cond_0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DM:Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->dg(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_2

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/p$12;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/p$12;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;)V

    :goto_0
    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->di(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_3

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/p$13;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/p$13;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;)V

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->dl(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_4

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/p$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/p$2;-><init>(Lcom/kwad/components/ad/splashscreen/c/p;)V

    goto :goto_0

    :cond_4
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->lt()V

    return-void
.end method

.method private lt()V
    .locals 5

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->lr()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_actionbar_native_stub:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/p;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewStub;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    new-instance v2, Lcom/kwad/components/ad/splashscreen/f/b;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->getRootView()Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v4, v4, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {v2, v3, v0, v1, v4}, Lcom/kwad/components/ad/splashscreen/f/b;-><init>(Landroid/view/ViewGroup;Landroid/view/ViewStub;ZLcom/kwad/components/core/e/d/c;)V

    iput-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DG:Lcom/kwad/components/ad/splashscreen/f/b;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v2, v0}, Lcom/kwad/components/ad/splashscreen/f/b;->G(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DG:Lcom/kwad/components/ad/splashscreen/f/b;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/f/b;->a(Lcom/kwad/components/ad/splashscreen/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DG:Lcom/kwad/components/ad/splashscreen/f/b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/f/b;->ls()V

    return-void
.end method

.method static synthetic m(Lcom/kwad/components/ad/splashscreen/c/p;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic n(Lcom/kwad/components/ad/splashscreen/c/p;)Lcom/kwad/sdk/core/g/d;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->dO:Lcom/kwad/sdk/core/g/d;

    return-object p0
.end method


# virtual methods
.method public final X(I)V
    .locals 0

    return-void
.end method

.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mStartTime:J

    sget-object v0, Lcom/kwad/components/ad/splashscreen/b/a;->Cz:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/d;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_webview_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/p;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DM:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :try_start_0
    new-instance v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v0, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v2, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DM:Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_web_card_webView:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/p;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    :catchall_0
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iput-boolean v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DH:Z

    iput-boolean v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DI:Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->aT(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v1, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-boolean v1, v1, Lcom/kwad/components/ad/splashscreen/h;->Ci:Z

    if-nez v1, :cond_1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DJ:J

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/b;->kP()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {p0, v1, v0}, Lcom/kwad/components/ad/splashscreen/c/p;->a(Lcom/kwad/sdk/core/webview/KsAdWebView;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DN:Ljava/lang/Runnable;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->dq(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    goto :goto_1

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->ls()V

    :goto_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/h;->a(Lcom/kwad/components/ad/splashscreen/g;)V

    return-void
.end method

.method public final f(ZZ)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "isClick: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isActionBar: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SplashWebViewPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    if-eqz p2, :cond_0

    move p2, v0

    goto :goto_0

    :cond_0
    const/4 p2, 0x2

    :goto_0
    xor-int/2addr p1, v0

    const/4 v0, 0x0

    const/16 v1, 0x84

    invoke-direct {p0, p1, p2, v0, v1}, Lcom/kwad/components/ad/splashscreen/c/p;->a(ZILcom/kwad/sdk/core/report/z$b;I)V

    return-void
.end method

.method public final kD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->dO:Lcom/kwad/sdk/core/g/d;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bh(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method public final lr()V
    .locals 4

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DH:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DH:Z

    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    new-instance v1, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/components/ad/splashscreen/local/b;->q(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v2

    iput v2, v1, Lcom/kwad/sdk/core/report/z$a;->asJ:I

    iput-object v1, v0, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    const/16 v3, 0x7b

    invoke-static {v1, v3, v0, v2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/a;->sb()Lcom/kwad/components/core/webview/b/d/a;

    move-result-object v0

    invoke-virtual {v0, v3}, Lcom/kwad/components/core/webview/b/d/a;->aR(I)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DG:Lcom/kwad/components/ad/splashscreen/f/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/f/b;->onUnbind()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->dO:Lcom/kwad/sdk/core/g/d;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bh(Landroid/content/Context;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DK:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p;->DK:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_2
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/p;->ay()V

    return-void
.end method
