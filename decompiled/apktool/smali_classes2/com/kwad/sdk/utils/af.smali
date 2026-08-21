.class public final Lcom/kwad/sdk/utils/af;
.super Ljava/lang/Object;


# instance fields
.field private aIP:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/kwad/sdk/core/webview/a;",
            ">;"
        }
    .end annotation
.end field

.field private aIQ:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/kwad/sdk/core/webview/c/c;",
            ">;"
        }
    .end annotation
.end field


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/utils/af;->aIP:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final b(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/utils/af;->aIQ:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final fy(Ljava/lang/String;)Lcom/kwad/sdk/core/webview/a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/utils/af;->aIP:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/webview/a;

    return-object p1
.end method

.method public final fz(Ljava/lang/String;)Lcom/kwad/sdk/core/webview/c/c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/utils/af;->aIQ:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/webview/c/c;

    return-object p1
.end method

.method public final release()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/utils/af;->aIP:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/webview/a;

    invoke-interface {v1}, Lcom/kwad/sdk/core/webview/a;->nL()V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/utils/af;->aIP:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    iget-object v0, p0, Lcom/kwad/sdk/utils/af;->aIQ:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    return-void
.end method
