.class final Lcom/kwad/components/core/webview/jshandler/aa$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/aa;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic UM:Lcom/kwad/components/core/webview/jshandler/aa;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/aa;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aa$2;->UM:Lcom/kwad/components/core/webview/jshandler/aa;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aa$2;->UM:Lcom/kwad/components/core/webview/jshandler/aa;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/aa;->d(Lcom/kwad/components/core/webview/jshandler/aa;)Lcom/kwad/sdk/core/webview/c/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aa$2;->UM:Lcom/kwad/components/core/webview/jshandler/aa;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/aa;->d(Lcom/kwad/components/core/webview/jshandler/aa;)Lcom/kwad/sdk/core/webview/c/c;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method
