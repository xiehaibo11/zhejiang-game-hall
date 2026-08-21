.class final Lcom/kwad/components/core/webview/jshandler/y$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/y;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Uy:Lcom/kwad/components/core/webview/jshandler/y;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/y;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/y$1;->Uy:Lcom/kwad/components/core/webview/jshandler/y;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/y$1;->Uy:Lcom/kwad/components/core/webview/jshandler/y;

    invoke-static {v1}, Lcom/kwad/components/core/webview/jshandler/y;->c(Lcom/kwad/components/core/webview/jshandler/y;)Lcom/kwad/sdk/core/webview/b;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/y$1;->Uy:Lcom/kwad/components/core/webview/jshandler/y;

    invoke-static {v1}, Lcom/kwad/components/core/webview/jshandler/y;->b(Lcom/kwad/components/core/webview/jshandler/y;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/y$1;->Uy:Lcom/kwad/components/core/webview/jshandler/y;

    invoke-static {v1}, Lcom/kwad/components/core/webview/jshandler/y;->a(Lcom/kwad/components/core/webview/jshandler/y;)Lcom/kwad/components/core/e/d/c;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/y$1$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/jshandler/y$1$1;-><init>(Lcom/kwad/components/core/webview/jshandler/y$1;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method
