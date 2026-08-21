.class final Lcom/kwad/components/core/webview/b/h$11;
.super Lcom/kwad/components/core/webview/b/a/j;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$11;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/j;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/b/n;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/b/a/j;->a(Lcom/kwad/components/core/webview/b/b/n;)V

    new-instance v0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    iget-object v1, p1, Lcom/kwad/components/core/webview/b/b/n;->title:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->aq(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object v0

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/b/n;->url:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ay(Z)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$11;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$11;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    invoke-static {v0, p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->launch(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    return-void
.end method
