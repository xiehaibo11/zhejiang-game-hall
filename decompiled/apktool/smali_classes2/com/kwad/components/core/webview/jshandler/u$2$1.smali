.class final Lcom/kwad/components/core/webview/jshandler/u$2$1;
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


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/u$2;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/u$2$1;->Uf:Lcom/kwad/components/core/webview/jshandler/u$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u$a;

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u$a;-><init>(Ljava/util/List;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/u$2$1;->Uf:Lcom/kwad/components/core/webview/jshandler/u$2;

    iget-object v1, v1, Lcom/kwad/components/core/webview/jshandler/u$2;->lx:Lcom/kwad/sdk/core/webview/c/c;

    invoke-interface {v1, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
