.class final Lcom/kwad/components/core/webview/jshandler/an$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/an;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Vq:Lcom/kwad/components/core/webview/jshandler/an;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/an;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/an$1;->Vq:Lcom/kwad/components/core/webview/jshandler/an;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/an$1;->Vq:Lcom/kwad/components/core/webview/jshandler/an;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/an;->b(Lcom/kwad/components/core/webview/jshandler/an;)Lcom/kwad/components/core/webview/jshandler/an$c;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/an$b;

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/an$1;->Vq:Lcom/kwad/components/core/webview/jshandler/an;

    invoke-static {v2}, Lcom/kwad/components/core/webview/jshandler/an;->a(Lcom/kwad/components/core/webview/jshandler/an;)Lcom/kwad/sdk/core/webview/c/c;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/kwad/components/core/webview/jshandler/an$b;-><init>(Lcom/kwad/sdk/core/webview/c/c;)V

    invoke-interface {v0, v1}, Lcom/kwad/components/core/webview/jshandler/an$c;->a(Lcom/kwad/components/core/webview/jshandler/an$b;)V

    return-void
.end method
