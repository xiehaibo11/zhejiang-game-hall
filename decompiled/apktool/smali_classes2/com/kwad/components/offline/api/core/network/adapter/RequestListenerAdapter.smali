.class public Lcom/kwad/components/offline/api/core/network/adapter/RequestListenerAdapter;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/network/h;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<R::",
        "Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequest;",
        "T:",
        "Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;",
        ">",
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/network/h<",
        "Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter<",
        "TR;>;",
        "Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter<",
        "TT;>;>;"
    }
.end annotation


# instance fields
.field private final mRequestListener:Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequestListener;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequestListener<",
            "TR;TT;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequestListener;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequestListener<",
            "TR;TT;>;)V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/network/adapter/RequestListenerAdapter;->mRequestListener:Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequestListener;

    return-void
.end method


# virtual methods
.method public onError(Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;ILjava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter<",
            "TR;>;I",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/adapter/RequestListenerAdapter;->mRequestListener:Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequestListener;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;->getOfflineCompoRequest()Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequest;

    move-result-object p1

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequestListener;->onError(Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequest;ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public bridge synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;

    invoke-virtual {p0, p1, p2, p3}, Lcom/kwad/components/offline/api/core/network/adapter/RequestListenerAdapter;->onError(Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;ILjava/lang/String;)V

    return-void
.end method

.method public onStartRequest(Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter<",
            "TR;>;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/adapter/RequestListenerAdapter;->mRequestListener:Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequestListener;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;->getOfflineCompoRequest()Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequest;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequestListener;->onStartRequest(Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequest;)V

    :cond_0
    return-void
.end method

.method public bridge synthetic onStartRequest(Lcom/kwad/sdk/core/network/g;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;

    invoke-virtual {p0, p1}, Lcom/kwad/components/offline/api/core/network/adapter/RequestListenerAdapter;->onStartRequest(Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;)V

    return-void
.end method

.method public onSuccess(Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter<",
            "TR;>;",
            "Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter<",
            "TT;>;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/adapter/RequestListenerAdapter;->mRequestListener:Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequestListener;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;->getOfflineCompoRequest()Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequest;

    move-result-object p1

    invoke-virtual {p2}, Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;->getOfflineCompoResultData()Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequestListener;->onSuccess(Lcom/kwad/components/offline/api/core/network/IOfflineCompoRequest;Lcom/kwad/components/offline/api/core/network/model/BaseOfflineCompoResultData;)V

    :cond_0
    return-void
.end method

.method public bridge synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;

    check-cast p2, Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/offline/api/core/network/adapter/RequestListenerAdapter;->onSuccess(Lcom/kwad/components/offline/api/core/network/adapter/RequestAdapter;Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;)V

    return-void
.end method
