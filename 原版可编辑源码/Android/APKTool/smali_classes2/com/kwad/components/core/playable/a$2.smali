.class final Lcom/kwad/components/core/playable/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/KsAdWebView$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/playable/a;->getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ph:Lcom/kwad/components/core/playable/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/playable/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/playable/a$2;->Ph:Lcom/kwad/components/core/playable/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/playable/a$2;->Ph:Lcom/kwad/components/core/playable/a;

    invoke-static {v0}, Lcom/kwad/components/core/playable/a;->b(Lcom/kwad/components/core/playable/a;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    invoke-interface {v1}, Lcom/kwad/sdk/core/webview/KsAdWebView$d;->onPageFinished()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onPageStart()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/playable/a$2;->Ph:Lcom/kwad/components/core/playable/a;

    invoke-static {v0}, Lcom/kwad/components/core/playable/a;->b(Lcom/kwad/components/core/playable/a;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    invoke-interface {v1}, Lcom/kwad/sdk/core/webview/KsAdWebView$d;->onPageStart()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onReceivedHttpError(ILjava/lang/String;Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/playable/a$2;->Ph:Lcom/kwad/components/core/playable/a;

    invoke-static {v0}, Lcom/kwad/components/core/playable/a;->b(Lcom/kwad/components/core/playable/a;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    invoke-interface {v1, p1, p2, p3}, Lcom/kwad/sdk/core/webview/KsAdWebView$d;->onReceivedHttpError(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    return-void
.end method
