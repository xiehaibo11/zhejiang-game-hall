.class final Lcom/kwad/components/ad/feed/b/m$19;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/KsAdWebView$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/m;->getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fI:Lcom/kwad/components/ad/feed/b/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/m;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$19;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$19;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->d(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bq(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-object v3, p0, Lcom/kwad/components/ad/feed/b/m$19;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v3}, Lcom/kwad/components/ad/feed/b/m;->c(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getLoadTime()J

    move-result-wide v3

    sub-long/2addr v1, v3

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/feed/monitor/b;->c(Ljava/lang/String;J)V

    return-void
.end method

.method public final onPageStart()V
    .locals 0

    return-void
.end method

.method public final onReceivedHttpError(ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$19;->fI:Lcom/kwad/components/ad/feed/b/m;

    const-string p2, "1"

    const/4 p3, 0x2

    invoke-static {p1, p2, p3}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/ad/feed/b/m;Ljava/lang/String;I)V

    return-void
.end method
