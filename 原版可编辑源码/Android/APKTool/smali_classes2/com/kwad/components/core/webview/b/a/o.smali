.class public Lcom/kwad/components/core/webview/b/a/o;
.super Lcom/kwad/components/core/webview/b/a/v;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/b/a/o$a;
    }
.end annotation


# instance fields
.field private WF:Lcom/kwad/components/core/webview/b/a/o$a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/v;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/a/o$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/a/o;->WF:Lcom/kwad/components/core/webview/b/a/o$a;

    return-void
.end method

.method public a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/a/v;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/a/o;->WF:Lcom/kwad/components/core/webview/b/a/o$a;

    if-eqz p1, :cond_0

    new-instance p1, Lcom/kwad/components/core/webview/b/b/m;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/m;-><init>()V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/a/o;->WF:Lcom/kwad/components/core/webview/b/a/o$a;

    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/a/o$a;->isMuted()Z

    move-result v0

    iput-boolean v0, p1, Lcom/kwad/components/core/webview/b/b/m;->Xa:Z

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method

.method public final c(Lcom/kwad/components/core/webview/b/b/m;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/b/a/v;->b(Lcom/kwad/sdk/core/b;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "registerMuteStateListener"

    return-object v0
.end method
