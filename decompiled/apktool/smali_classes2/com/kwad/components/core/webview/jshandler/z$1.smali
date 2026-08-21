.class final Lcom/kwad/components/core/webview/jshandler/z$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/z;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic UI:Lcom/kwad/components/core/webview/jshandler/z;

.field final synthetic kh:Lcom/kwad/components/core/webview/jshandler/z$a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/z;Lcom/kwad/components/core/webview/jshandler/z$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/z$1;->UI:Lcom/kwad/components/core/webview/jshandler/z;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/z$1;->kh:Lcom/kwad/components/core/webview/jshandler/z$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/z$1;->UI:Lcom/kwad/components/core/webview/jshandler/z;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/z;->a(Lcom/kwad/components/core/webview/jshandler/z;)Lcom/kwad/sdk/core/webview/c/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/z$1;->UI:Lcom/kwad/components/core/webview/jshandler/z;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/z;->a(Lcom/kwad/components/core/webview/jshandler/z;)Lcom/kwad/sdk/core/webview/c/c;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/z$1;->UI:Lcom/kwad/components/core/webview/jshandler/z;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/z$1;->kh:Lcom/kwad/components/core/webview/jshandler/z$a;

    invoke-static {v0, v1}, Lcom/kwad/components/core/webview/jshandler/z;->a(Lcom/kwad/components/core/webview/jshandler/z;Lcom/kwad/components/core/webview/jshandler/z$a;)V

    return-void
.end method
