.class final Lcom/kwad/components/core/webview/jshandler/p$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/p;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic TV:Lcom/kwad/sdk/commercial/model/WebCloseStatus;

.field final synthetic TW:Lcom/kwad/components/core/webview/jshandler/p;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/p;Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/p$1;->TW:Lcom/kwad/components/core/webview/jshandler/p;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/p$1;->TV:Lcom/kwad/sdk/commercial/model/WebCloseStatus;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/p$1;->TW:Lcom/kwad/components/core/webview/jshandler/p;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/p$1;->TV:Lcom/kwad/sdk/commercial/model/WebCloseStatus;

    invoke-static {v0, v1}, Lcom/kwad/components/core/webview/jshandler/p;->a(Lcom/kwad/components/core/webview/jshandler/p;Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/p$1;->TW:Lcom/kwad/components/core/webview/jshandler/p;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/p;->a(Lcom/kwad/components/core/webview/jshandler/p;)Lcom/kwad/sdk/core/webview/c/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/p$1;->TW:Lcom/kwad/components/core/webview/jshandler/p;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/p;->a(Lcom/kwad/components/core/webview/jshandler/p;)Lcom/kwad/sdk/core/webview/c/c;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method
