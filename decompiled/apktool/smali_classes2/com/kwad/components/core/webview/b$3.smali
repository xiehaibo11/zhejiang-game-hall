.class final Lcom/kwad/components/core/webview/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/KsAdWebView$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b;->rn()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
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

    iput-object p1, p0, Lcom/kwad/components/core/webview/b$3;->Tl:Lcom/kwad/components/core/webview/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b$3;->Tl:Lcom/kwad/components/core/webview/b;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b;->c(Lcom/kwad/components/core/webview/b;)Lcom/kwad/components/core/webview/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b$3;->Tl:Lcom/kwad/components/core/webview/b;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b;->c(Lcom/kwad/components/core/webview/b;)Lcom/kwad/components/core/webview/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/c;->onPageFinished()V

    :cond_0
    return-void
.end method

.method public final onPageStart()V
    .locals 0

    return-void
.end method

.method public final onReceivedHttpError(ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/webview/b$3;->Tl:Lcom/kwad/components/core/webview/b;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b;->c(Lcom/kwad/components/core/webview/b;)Lcom/kwad/components/core/webview/c;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/webview/b$3;->Tl:Lcom/kwad/components/core/webview/b;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b;->c(Lcom/kwad/components/core/webview/b;)Lcom/kwad/components/core/webview/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/c;->oZ()V

    :cond_0
    return-void
.end method
