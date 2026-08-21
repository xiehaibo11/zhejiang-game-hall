.class final Lcom/kwad/components/core/webview/jshandler/u$2$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/u$2;->b(Lcom/kwad/components/core/response/model/AdResultData;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Uf:Lcom/kwad/components/core/webview/jshandler/u$2;

.field final synthetic ie:Lcom/kwad/components/core/response/model/AdResultData;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/u$2;Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/u$2$2;->Uf:Lcom/kwad/components/core/webview/jshandler/u$2;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/u$2$2;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u$a;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/u$2$2;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-virtual {v1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u$a;-><init>(Ljava/util/List;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/u$2$2;->Uf:Lcom/kwad/components/core/webview/jshandler/u$2;

    iget-object v1, v1, Lcom/kwad/components/core/webview/jshandler/u$2;->lx:Lcom/kwad/sdk/core/webview/c/c;

    invoke-interface {v1, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
