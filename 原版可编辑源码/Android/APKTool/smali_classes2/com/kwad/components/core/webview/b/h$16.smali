.class final Lcom/kwad/components/core/webview/b/h$16;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/b/h$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/b/h;
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

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$16;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$16;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->b(Lcom/kwad/components/core/webview/b/h;)V

    const-string v0, "TKLoadController"

    const-string v1, "\u6e32\u67d3\u5931\u8d25"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 2

    const-string v0, "TKLoadController"

    const-string v1, "\u6e32\u67d3\u6210\u529f"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
