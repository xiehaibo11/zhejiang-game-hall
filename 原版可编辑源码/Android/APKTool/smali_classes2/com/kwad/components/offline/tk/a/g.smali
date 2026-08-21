.class public final Lcom/kwad/components/offline/tk/a/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/components/l;


# instance fields
.field private final ZS:Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;


# direct methods
.method public constructor <init>(Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {p1}, Lcom/kwad/sdk/utils/ao;->checkNotNull(Ljava/lang/Object;)Ljava/lang/Object;

    iput-object p1, p0, Lcom/kwad/components/offline/tk/a/g;->ZS:Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/components/j;)V
    .locals 2

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/g;->ZS:Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;

    new-instance v1, Lcom/kwad/components/offline/tk/a/c;

    invoke-direct {v1, p1}, Lcom/kwad/components/offline/tk/a/c;-><init>(Lcom/kwad/sdk/components/j;)V

    invoke-interface {v0, v1}, Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;->registerHostActionHandler(Lcom/kwad/components/offline/api/tk/IOfflineHostActionHandler;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/components/k;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/g;->ZS:Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;

    new-instance v1, Lcom/kwad/components/offline/tk/a/f;

    invoke-direct {v1, p3}, Lcom/kwad/components/offline/tk/a/f;-><init>(Lcom/kwad/sdk/components/k;)V

    invoke-interface {v0, p1, p2, v1}, Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;->execute(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/components/offline/api/tk/IOfflineTKRenderListener;)V

    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/webview/c/g;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/g;->ZS:Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;

    new-instance v1, Lcom/kwad/components/offline/tk/a/d;

    invoke-direct {v1, p1}, Lcom/kwad/components/offline/tk/a/d;-><init>(Lcom/kwad/sdk/core/webview/c/g;)V

    invoke-interface {v0, v1}, Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;->registerTKBridge(Lcom/kwad/components/offline/api/tk/jsbridge/IOfflineCompoTKBridgeHandler;)V

    return-void
.end method

.method public final c(Lcom/kwad/sdk/core/webview/c/a;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/g;->ZS:Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;

    new-instance v1, Lcom/kwad/components/offline/tk/a/b;

    invoke-direct {v1, p1}, Lcom/kwad/components/offline/tk/a/b;-><init>(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-interface {v0, v1}, Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;->registerJsBridge(Lcom/kwad/components/offline/api/tk/jsbridge/IOfflineCompoBridgeHandler;)V

    return-void
.end method

.method public final execute(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/g;->ZS:Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;

    invoke-interface {v0, p1}, Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;->execute(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public final getUniqId()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/g;->ZS:Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;->getUniqId()I

    move-result v0

    return v0
.end method

.method public final getView()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/g;->ZS:Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;->getView()Landroid/view/View;

    move-result-object v0

    return-object v0
.end method

.method public final onDestroy()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/g;->ZS:Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;->onDestroy()V

    return-void
.end method

.method public final setCustomEnv(Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/g;->ZS:Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;

    invoke-interface {v0, p1}, Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;->setCustomEnv(Ljava/util/Map;)V

    return-void
.end method
