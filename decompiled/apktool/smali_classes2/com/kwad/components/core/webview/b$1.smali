.class final Lcom/kwad/components/core/webview/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/at$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b;->b(Lcom/kwad/components/core/webview/a;Lcom/kwad/sdk/core/webview/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Tl:Lcom/kwad/components/core/webview/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b$1;->Tl:Lcom/kwad/components/core/webview/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final rp()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/b$1;->Tl:Lcom/kwad/components/core/webview/b;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b;->a(Lcom/kwad/components/core/webview/b;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bH(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b$1;->Tl:Lcom/kwad/components/core/webview/b;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b;->b(Lcom/kwad/components/core/webview/b;)Lcom/kwad/sdk/core/webview/b;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->getContext()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/e/c/b$a;

    invoke-direct {v1}, Lcom/kwad/components/core/e/c/b$a;-><init>()V

    iget-object v2, p0, Lcom/kwad/components/core/webview/b$1;->Tl:Lcom/kwad/components/core/webview/b;

    invoke-static {v2}, Lcom/kwad/components/core/webview/b;->a(Lcom/kwad/components/core/webview/b;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/c/b$a;->O(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/c/b$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/b$1;->Tl:Lcom/kwad/components/core/webview/b;

    invoke-static {v2}, Lcom/kwad/components/core/webview/b;->a(Lcom/kwad/components/core/webview/b;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->bG(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/c/b$a;->ak(Ljava/lang/String;)Lcom/kwad/components/core/e/c/b$a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/e/c/b$a;->nc()Lcom/kwad/components/core/e/c/b$b;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/components/core/e/c/b;->a(Landroid/content/Context;Lcom/kwad/components/core/e/c/b$b;)Z

    :cond_0
    return-void
.end method
