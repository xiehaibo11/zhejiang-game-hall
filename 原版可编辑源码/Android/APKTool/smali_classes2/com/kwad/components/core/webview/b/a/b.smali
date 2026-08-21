.class public final Lcom/kwad/components/core/webview/b/a/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# instance fields
.field protected final TL:Lcom/kwad/sdk/core/webview/b;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/a/b;->TL:Lcom/kwad/sdk/core/webview/b;

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method

.method private Z(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 3

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsForceJumpLandingPage:Z

    new-instance v1, Lcom/kwad/components/core/e/d/a$a;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/a/b;->TL:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, v2, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    invoke-virtual {v2}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, p1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 2

    const-string v0, "adTemplate"

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V

    invoke-direct {p0, v0}, Lcom/kwad/components/core/webview/b/a/b;->Z(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/webview/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/a/b;->Z(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :goto_0
    const/4 p1, 0x0

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "activityMiddlePageConvert"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
