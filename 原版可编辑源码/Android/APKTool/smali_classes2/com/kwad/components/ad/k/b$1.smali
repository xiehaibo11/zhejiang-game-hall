.class final Lcom/kwad/components/ad/k/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/KsAdWebView$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/k/b;->getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Hh:Lcom/kwad/components/ad/k/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/k/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/b$1;->Hh:Lcom/kwad/components/ad/k/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/k/b$1;->Hh:Lcom/kwad/components/ad/k/b;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/components/ad/k/b;->Hd:Z

    iget-object v0, p0, Lcom/kwad/components/ad/k/b$1;->Hh:Lcom/kwad/components/ad/k/b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/k/b;->fF()V

    return-void
.end method

.method public final onPageStart()V
    .locals 0

    return-void
.end method

.method public final onReceivedHttpError(ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/k/b$1;->Hh:Lcom/kwad/components/ad/k/b;

    const/4 p2, 0x0

    iput-boolean p2, p1, Lcom/kwad/components/ad/k/b;->Hd:Z

    return-void
.end method
