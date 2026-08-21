.class public final Lcom/kwad/components/core/webview/jshandler/h;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/h$b;,
        Lcom/kwad/components/core/webview/jshandler/h$a;
    }
.end annotation


# instance fields
.field private JG:Lcom/kwad/components/core/e/d/c;

.field private Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mContext:Landroid/content/Context;

.field private nA:Lcom/kwad/sdk/core/webview/c/c;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/h;->mContext:Landroid/content/Context;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/jshandler/h;II)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/webview/jshandler/h;->n(II)V

    return-void
.end method

.method private declared-synchronized j(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    monitor-enter p0

    :try_start_0
    new-instance v0, Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2, p1, p2}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/api/KsAppDownloadListener;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/h;->JG:Lcom/kwad/components/core/e/d/c;

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/h;->Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    if-nez p1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/jshandler/h;->rt()Lcom/kwad/sdk/api/KsAppDownloadListener;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/h;->Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/h;->JG:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private static k(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private n(II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/h;->nA:Lcom/kwad/sdk/core/webview/c/c;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/h$b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/h$b;-><init>()V

    iput p1, v0, Lcom/kwad/components/core/webview/jshandler/h$b;->status:I

    iput p2, v0, Lcom/kwad/components/core/webview/jshandler/h$b;->progress:I

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/h;->nA:Lcom/kwad/sdk/core/webview/c/c;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method

.method private rt()Lcom/kwad/sdk/api/KsAppDownloadListener;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/h$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/jshandler/h$1;-><init>(Lcom/kwad/components/core/webview/jshandler/h;)V

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 3

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/h;->nA:Lcom/kwad/sdk/core/webview/c/c;

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/h$a;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/h$a;-><init>()V

    const/4 v1, -0x1

    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/webview/jshandler/h$a;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    iget-object p1, v0, Lcom/kwad/components/core/webview/jshandler/h$a;->TB:Ljava/lang/String;

    iget-object v2, v0, Lcom/kwad/components/core/webview/jshandler/h$a;->packageName:Ljava/lang/String;

    invoke-static {p1, v2}, Lcom/kwad/components/core/webview/jshandler/h;->k(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "param is empty"

    invoke-interface {p2, v1, p1}, Lcom/kwad/sdk/core/webview/c/c;->onError(ILjava/lang/String;)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/h;->JG:Lcom/kwad/components/core/e/d/c;

    if-nez p1, :cond_1

    iget-object p1, v0, Lcom/kwad/components/core/webview/jshandler/h$a;->TB:Ljava/lang/String;

    iget-object p2, v0, Lcom/kwad/components/core/webview/jshandler/h$a;->packageName:Ljava/lang/String;

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/webview/jshandler/h;->j(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/h;->JG:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p1}, Lcom/kwad/components/core/e/d/c;->nF()Z

    move-result p1

    if-eqz p1, :cond_2

    return-void

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/h;->JG:Lcom/kwad/components/core/e/d/c;

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/h;->Tn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/c;->d(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    new-instance p1, Lcom/kwad/components/core/e/d/a$a;

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/h;->mContext:Landroid/content/Context;

    invoke-direct {p1, p2}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->an(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->ap(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/h;->JG:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/e/d/c;->m(Lcom/kwad/components/core/e/d/a$a;)I

    return-void

    :catch_0
    const-string p1, "data parse error"

    invoke-interface {p2, v1, p1}, Lcom/kwad/sdk/core/webview/c/c;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "installAppForDownload"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/h;->nA:Lcom/kwad/sdk/core/webview/c/c;

    return-void
.end method
