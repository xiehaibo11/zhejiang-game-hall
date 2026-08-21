.class final Lcom/kwad/components/core/webview/jshandler/ao$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/ao;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic TD:Lcom/kwad/sdk/core/webview/c/c;

.field final synthetic Vs:Lcom/kwad/components/core/webview/jshandler/ao;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/ao;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ao$1;->Vs:Lcom/kwad/components/core/webview/jshandler/ao;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ao$1;->TD:Lcom/kwad/sdk/core/webview/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ao$1;->Vs:Lcom/kwad/components/core/webview/jshandler/ao;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/ao;->a(Lcom/kwad/components/core/webview/jshandler/ao;)Lcom/kwad/components/core/webview/jshandler/ao$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ao$1;->Vs:Lcom/kwad/components/core/webview/jshandler/ao;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/ao;->a(Lcom/kwad/components/core/webview/jshandler/ao;)Lcom/kwad/components/core/webview/jshandler/ao$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/core/webview/jshandler/ao$a;->bA()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ao$1;->TD:Lcom/kwad/sdk/core/webview/c/c;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
