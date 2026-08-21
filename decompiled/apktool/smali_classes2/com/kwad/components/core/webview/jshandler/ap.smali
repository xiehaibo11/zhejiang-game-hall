.class public final Lcom/kwad/components/core/webview/jshandler/ap;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/ap$a;
    }
.end annotation


# instance fields
.field private Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

.field private Tv:Lcom/kwad/sdk/core/webview/c/c;

.field private Vt:Lcom/kwad/sdk/api/KsAppDownloadListener;

.field private final cE:Lcom/kwad/sdk/core/webview/b;

.field private final mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ap;->cE:Lcom/kwad/sdk/core/webview/b;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ap;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/api/KsAppDownloadListener;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ap;->cE:Lcom/kwad/sdk/core/webview/b;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ap;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object p3, p0, Lcom/kwad/components/core/webview/jshandler/ap;->Vt:Lcom/kwad/sdk/api/KsAppDownloadListener;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/jshandler/ap;)Lcom/kwad/sdk/api/KsAppDownloadListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/ap;->Vt:Lcom/kwad/sdk/api/KsAppDownloadListener;

    return-object p0
.end method

.method private a(IF)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ap;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ap$a;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/ap$a;-><init>()V

    iput p2, v0, Lcom/kwad/components/core/webview/jshandler/ap$a;->Vv:F

    iput p1, v0, Lcom/kwad/components/core/webview/jshandler/ap$a;->status:I

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ap;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iget-wide p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->totalBytes:J

    iput-wide p1, v0, Lcom/kwad/components/core/webview/jshandler/ap$a;->totalBytes:J

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ap;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/jshandler/ap;IF)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/webview/jshandler/ap;->a(IF)V

    return-void
.end method

.method private rt()Lcom/kwad/sdk/api/KsAppDownloadListener;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ap$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/jshandler/ap$1;-><init>(Lcom/kwad/components/core/webview/jshandler/ap;)V

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ap;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/b;->DY()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, -0x1

    const-string v0, "native photo is null"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/core/webview/c/c;->onError(ILjava/lang/String;)V

    return-void

    :cond_0
    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ap;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ap;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz p1, :cond_2

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ap;->Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    if-nez p2, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/core/webview/jshandler/ap;->rt()Lcom/kwad/sdk/api/KsAppDownloadListener;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ap;->Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ap;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    return-void

    :cond_1
    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/c;->d(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_2
    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "registerProgressListener"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 3

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ap;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/ap;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v1, :cond_0

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/ap;->Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    if-eqz v2, :cond_0

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/c;->c(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ap;->Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    :cond_0
    return-void
.end method
