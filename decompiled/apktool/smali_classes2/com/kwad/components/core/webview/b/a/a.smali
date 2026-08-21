.class public final Lcom/kwad/components/core/webview/b/a/a;
.super Lcom/kwad/components/core/webview/b/a/v;

# interfaces
.implements Ljava/util/Observer;


# instance fields
.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/v;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/a/v;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/webview/b/a/a;->b(Lcom/kwad/sdk/core/b;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "getTrackAdStatus"

    return-object v0
.end method

.method public final update(Ljava/util/Observable;Ljava/lang/Object;)V
    .locals 0

    check-cast p2, Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    if-eqz p2, :cond_0

    invoke-virtual {p0, p2}, Lcom/kwad/components/core/webview/b/a/a;->b(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method
