.class final Lcom/kwad/components/core/webview/b/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/e;->b(Lcom/kwad/sdk/core/response/a/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic VM:Lcom/kwad/sdk/core/response/a/a;

.field final synthetic VN:Lcom/kwad/components/core/webview/b/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/e;Lcom/kwad/sdk/core/response/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/e$1;->VN:Lcom/kwad/components/core/webview/b/e;

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/e$1;->VM:Lcom/kwad/sdk/core/response/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/e$1;->VN:Lcom/kwad/components/core/webview/b/e;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/e;->a(Lcom/kwad/components/core/webview/b/e;)Lcom/kwad/sdk/core/webview/c/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/e$1;->VM:Lcom/kwad/sdk/core/response/a/a;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
