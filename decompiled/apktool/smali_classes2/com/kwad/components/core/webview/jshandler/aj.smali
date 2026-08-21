.class public final Lcom/kwad/components/core/webview/jshandler/aj;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/aj$a;,
        Lcom/kwad/components/core/webview/jshandler/aj$b;
    }
.end annotation


# instance fields
.field private Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

.field private Tv:Lcom/kwad/sdk/core/webview/c/c;

.field private final cE:Lcom/kwad/sdk/core/webview/b;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->cE:Lcom/kwad/sdk/core/webview/b;

    :try_start_0
    new-instance p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v1, Lorg/json/JSONObject;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method private a(IF)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aj;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/aj$a;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/aj$a;-><init>()V

    float-to-double v1, p2

    iput-wide v1, v0, Lcom/kwad/components/core/webview/jshandler/aj$a;->Vf:D

    iput p1, v0, Lcom/kwad/components/core/webview/jshandler/aj$a;->status:I

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/jshandler/aj;IF)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/webview/jshandler/aj;->a(IF)V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/webview/jshandler/aj$b;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    const/4 v1, 0x1

    iput v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adOperationType:I

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v1, p1, Lcom/kwad/components/core/webview/jshandler/aj$b;->UA:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appPackageName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v1, p1, Lcom/kwad/components/core/webview/jshandler/aj$b;->appName:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v1, p1, Lcom/kwad/components/core/webview/jshandler/aj$b;->version:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appVersion:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-wide v1, p1, Lcom/kwad/components/core/webview/jshandler/aj$b;->Vm:J

    iput-wide v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->packageSize:J

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v1, p1, Lcom/kwad/components/core/webview/jshandler/aj$b;->icon:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appIconUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v1, p1, Lcom/kwad/components/core/webview/jshandler/aj$b;->qm:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDescription:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p1, p1, Lcom/kwad/components/core/webview/jshandler/aj$b;->url:Ljava/lang/String;

    iput-object p1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->appDownloadUrl:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->appDownloadUrl:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/utils/ad;->bp(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadId:Ljava/lang/String;

    return-void
.end method

.method private rt()Lcom/kwad/sdk/api/KsAppDownloadListener;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/aj$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/jshandler/aj$1;-><init>(Lcom/kwad/components/core/webview/jshandler/aj;)V

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-nez v0, :cond_0

    const/4 p1, -0x1

    const-string v0, "native photo is null"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/core/webview/c/c;->onError(ILjava/lang/String;)V

    return-void

    :cond_0
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-nez p1, :cond_1

    new-instance p1, Lcom/kwad/components/core/e/d/c;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p1, v0}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    const/4 v0, 0x2

    :goto_0
    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/c;->ar(I)V

    goto :goto_2

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/aj$b;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/jshandler/aj$b;-><init>()V

    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/webview/jshandler/aj$b;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_1
    invoke-static {v0, v1}, Lcom/kwad/components/core/webview/jshandler/aj;->a(Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/webview/jshandler/aj$b;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-nez p1, :cond_3

    new-instance p1, Lcom/kwad/components/core/e/d/c;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p1, v0}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    :cond_3
    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    const/4 v0, 0x1

    goto :goto_0

    :goto_2
    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/aj;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    if-nez p1, :cond_4

    invoke-direct {p0}, Lcom/kwad/components/core/webview/jshandler/aj;->rt()Lcom/kwad/sdk/api/KsAppDownloadListener;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    return-void

    :cond_4
    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/e/d/c;->d(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "registerApkStatusListener"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 3

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aj;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/aj;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v1, :cond_0

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/aj;->Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    if-eqz v2, :cond_0

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/c;->c(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aj;->Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    :cond_0
    return-void
.end method
