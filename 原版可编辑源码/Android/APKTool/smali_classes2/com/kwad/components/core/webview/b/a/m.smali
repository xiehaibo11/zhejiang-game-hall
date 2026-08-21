.class public final Lcom/kwad/components/core/webview/b/a/m;
.super Lcom/kwad/components/core/webview/b/a/v;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/v;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/a/v;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    return-void
.end method

.method public final aP(I)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/b/b/u;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/b/u;-><init>()V

    iput p1, v0, Lcom/kwad/components/core/webview/b/b/u;->nM:I

    invoke-super {p0, v0}, Lcom/kwad/components/core/webview/b/a/v;->b(Lcom/kwad/sdk/core/b;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "registerSplashProgressListener"

    return-object v0
.end method
