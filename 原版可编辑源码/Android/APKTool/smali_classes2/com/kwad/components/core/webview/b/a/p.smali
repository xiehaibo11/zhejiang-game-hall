.class public Lcom/kwad/components/core/webview/b/a/p;
.super Lcom/kwad/components/core/webview/b/a/v;


# instance fields
.field private IH:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/v;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/a/p;->IH:Z

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/b/y;)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/b/a/p;->IH:Z

    if-eqz v0, :cond_0

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/b/a/v;->b(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/a/v;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    return-void
.end method

.method public final aO(Z)V
    .locals 0

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/core/webview/b/a/p;->IH:Z

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "registerVideoProgressListener"

    return-object v0
.end method
