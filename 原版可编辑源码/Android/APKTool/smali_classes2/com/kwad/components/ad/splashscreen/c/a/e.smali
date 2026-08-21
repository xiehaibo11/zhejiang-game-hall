.class public final Lcom/kwad/components/ad/splashscreen/c/a/e;
.super Lcom/kwad/components/ad/splashscreen/c/e;


# instance fields
.field private gt:Lcom/kwad/components/core/webview/b/e/e;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/a/e$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/a/e$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/a/e;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/e;->gt:Lcom/kwad/components/core/webview/b/e/e;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/a/e;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/a/e;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/e;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void
.end method

.method public final onCreate()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/e;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void
.end method
