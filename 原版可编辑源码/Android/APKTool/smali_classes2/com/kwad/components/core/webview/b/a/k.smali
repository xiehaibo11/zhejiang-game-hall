.class public final Lcom/kwad/components/core/webview/b/a/k;
.super Lcom/kwad/components/core/webview/b/a/v;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/b/a/k$b;,
        Lcom/kwad/components/core/webview/b/a/k$a;
    }
.end annotation


# instance fields
.field WB:Lcom/kwad/components/core/webview/b/a/k$b;

.field private nA:Lcom/kwad/sdk/core/webview/c/c;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/v;-><init>()V

    new-instance v0, Lcom/kwad/components/core/webview/b/a/k$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/a/k$1;-><init>(Lcom/kwad/components/core/webview/b/a/k;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/a/k;->WB:Lcom/kwad/components/core/webview/b/a/k$b;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/a/k;)Lcom/kwad/sdk/core/webview/c/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/a/k;->nA:Lcom/kwad/sdk/core/webview/c/c;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/a/k;->nA:Lcom/kwad/sdk/core/webview/c/c;

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/a/k;->WB:Lcom/kwad/components/core/webview/b/a/k$b;

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/webview/b/a/k$b;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "registerAdConvertListener"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/a/k;->WB:Lcom/kwad/components/core/webview/b/a/k$b;

    invoke-static {v0}, Lcom/kwad/components/core/e/d/a;->b(Lcom/kwad/components/core/webview/b/a/k$b;)V

    return-void
.end method
