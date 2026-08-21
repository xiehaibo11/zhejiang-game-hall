.class public final Lcom/kwad/components/offline/tk/a/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/tk/jsbridge/IOfflineCompoTKBridgeHandler;


# instance fields
.field private final ZP:Lcom/kwad/sdk/core/webview/c/g;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/webview/c/g;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/offline/tk/a/d;->ZP:Lcom/kwad/sdk/core/webview/c/g;

    return-void
.end method


# virtual methods
.method public final callTKBridge(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/d;->ZP:Lcom/kwad/sdk/core/webview/c/g;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/webview/c/g;->callTKBridge(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
