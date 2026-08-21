.class final Lcom/kwad/components/ad/f/e$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/af$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/e;->getOpenNewPageListener()Lcom/kwad/components/core/webview/jshandler/af$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic mS:Lcom/kwad/components/ad/f/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/e$9;->mS:Lcom/kwad/components/ad/f/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/a/b;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    iget-object v1, p1, Lcom/kwad/components/core/webview/a/b;->title:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->aq(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object v0

    iget-object p1, p1, Lcom/kwad/components/core/webview/a/b;->url:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$9;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->e(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$9;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->f(Lcom/kwad/components/ad/f/e;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->launch(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    return-void
.end method
