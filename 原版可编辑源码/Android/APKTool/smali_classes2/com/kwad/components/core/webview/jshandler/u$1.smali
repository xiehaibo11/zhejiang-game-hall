.class final Lcom/kwad/components/core/webview/jshandler/u$1;
.super Lcom/kwad/sdk/core/network/m;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/u;->a(Lcom/kwad/components/core/p/a/b;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/m<",
        "Lcom/kwad/components/core/p/a;",
        "Lcom/kwad/components/core/response/model/AdResultData;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic BD:Lcom/kwad/components/core/p/a/b;

.field final synthetic Ue:Lcom/kwad/components/core/webview/jshandler/u;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/u;Lcom/kwad/components/core/p/a/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/u$1;->Ue:Lcom/kwad/components/core/webview/jshandler/u;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/u$1;->BD:Lcom/kwad/components/core/p/a/b;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/m;-><init>()V

    return-void
.end method

.method private ag(Ljava/lang/String;)Lcom/kwad/components/core/response/model/AdResultData;
    .locals 2

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance p1, Lcom/kwad/components/core/response/model/AdResultData;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/u$1;->BD:Lcom/kwad/components/core/p/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {p1, v1}, Lcom/kwad/components/core/response/model/AdResultData;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/response/model/AdResultData;->parseJson(Lorg/json/JSONObject;)V

    return-object p1
.end method

.method private mm()Lcom/kwad/components/core/p/a;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/p/a;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/u$1;->BD:Lcom/kwad/components/core/p/a/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/p/a;-><init>(Lcom/kwad/components/core/p/a/b;)V

    return-object v0
.end method


# virtual methods
.method public final synthetic createRequest()Lcom/kwad/sdk/core/network/g;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/webview/jshandler/u$1;->mm()Lcom/kwad/components/core/p/a;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic parseData(Ljava/lang/String;)Lcom/kwad/sdk/core/network/BaseResultData;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/jshandler/u$1;->ag(Ljava/lang/String;)Lcom/kwad/components/core/response/model/AdResultData;

    move-result-object p1

    return-object p1
.end method
