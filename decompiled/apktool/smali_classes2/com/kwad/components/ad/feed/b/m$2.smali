.class final Lcom/kwad/components/ad/feed/b/m$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/an$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/m;->getRegisterLiveListener()Lcom/kwad/components/core/webview/jshandler/an$c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fI:Lcom/kwad/components/ad/feed/b/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/m;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$2;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/an$b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$2;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0, p1}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/ad/feed/b/m;Lcom/kwad/components/core/webview/jshandler/an$b;)Lcom/kwad/components/core/webview/jshandler/an$b;

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$2;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->J(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/webview/jshandler/an$a;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$2;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->K(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/webview/jshandler/an$b;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$2;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->J(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/webview/jshandler/an$a;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/jshandler/an$b;->a(Lcom/kwad/components/core/webview/jshandler/an$a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$2;->fI:Lcom/kwad/components/ad/feed/b/m;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/ad/feed/b/m;Lcom/kwad/components/core/webview/jshandler/an$a;)Lcom/kwad/components/core/webview/jshandler/an$a;

    :cond_0
    return-void
.end method
