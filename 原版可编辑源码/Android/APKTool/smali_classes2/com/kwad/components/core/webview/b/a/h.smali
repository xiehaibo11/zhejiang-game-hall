.class public final Lcom/kwad/components/core/webview/b/a/h;
.super Lcom/kwad/components/core/webview/b/a/v;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/b/a/h$a;,
        Lcom/kwad/components/core/webview/b/a/h$b;
    }
.end annotation


# instance fields
.field private Wy:Lcom/kwad/components/core/webview/b/a/h$a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/v;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/a/h$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/a/h;->Wy:Lcom/kwad/components/core/webview/b/a/h$a;

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/a/v;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/a/h;->Wy:Lcom/kwad/components/core/webview/b/a/h$a;

    if-eqz p1, :cond_0

    invoke-interface {p1, p0}, Lcom/kwad/components/core/webview/b/a/h$a;->a(Lcom/kwad/components/core/webview/b/a/h;)V

    :cond_0
    return-void
.end method

.method public final aN(Z)V
    .locals 1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x2

    :goto_0
    new-instance v0, Lcom/kwad/components/core/webview/b/a/h$b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/h$b;-><init>()V

    iput p1, v0, Lcom/kwad/components/core/webview/b/a/h$b;->Wz:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/webview/b/a/h;->b(Lcom/kwad/sdk/core/b;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "getPlayEndType"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/webview/b/a/v;->onDestroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/a/h;->Wy:Lcom/kwad/components/core/webview/b/a/h$a;

    return-void
.end method
