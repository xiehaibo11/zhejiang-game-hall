.class final Lcom/kwad/components/core/webview/jshandler/ac$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/ac;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic US:Lcom/kwad/components/core/webview/jshandler/ac$a;

.field final synthetic UT:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field final synthetic UU:Lcom/kwad/components/core/e/d/c;

.field final synthetic UV:Lcom/kwad/components/core/webview/jshandler/ac;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/ac;Lcom/kwad/components/core/webview/jshandler/ac$a;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ac$1;->UV:Lcom/kwad/components/core/webview/jshandler/ac;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ac$1;->US:Lcom/kwad/components/core/webview/jshandler/ac$a;

    iput-object p3, p0, Lcom/kwad/components/core/webview/jshandler/ac$1;->UT:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p4, p0, Lcom/kwad/components/core/webview/jshandler/ac$1;->UU:Lcom/kwad/components/core/e/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/ac$1;->US:Lcom/kwad/components/core/webview/jshandler/ac$a;

    iget-object v1, v1, Lcom/kwad/components/core/webview/jshandler/ac$a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v1, v1, Lcom/kwad/sdk/core/webview/d/b/c;->UP:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    new-instance v1, Lcom/kwad/components/core/e/d/a$a;

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/ac$1;->UV:Lcom/kwad/components/core/webview/jshandler/ac;

    invoke-static {v2}, Lcom/kwad/components/core/webview/jshandler/ac;->a(Lcom/kwad/components/core/webview/jshandler/ac;)Lcom/kwad/sdk/core/webview/b;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    invoke-virtual {v2}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/ac$1;->UT:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/ac$1;->UU:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/ac$1;->US:Lcom/kwad/components/core/webview/jshandler/ac$a;

    iget v2, v2, Lcom/kwad/components/core/webview/jshandler/ac$a;->UZ:I

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/e/d/a$a;->ao(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/ac$1$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/jshandler/ac$1$1;-><init>(Lcom/kwad/components/core/webview/jshandler/ac$1;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method
