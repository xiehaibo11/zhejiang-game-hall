.class public final Lcom/kwad/components/core/webview/b/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# instance fields
.field private final mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 2

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v0, -0x1

    if-eqz p1, :cond_1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p1, "landing page url is null"

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/kwad/components/core/webview/b/b/l;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/b/l;-><init>()V

    iput-object p1, v0, Lcom/kwad/components/core/webview/b/b/l;->WZ:Ljava/lang/String;

    invoke-interface {p2, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void

    :cond_1
    const-string p1, "adTemplate is null"

    :goto_0
    invoke-interface {p2, v0, p1}, Lcom/kwad/sdk/core/webview/c/c;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "getLandingPageInfo"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
