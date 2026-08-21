.class final Lcom/kwad/components/core/webview/b/a/v$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/a/v;->b(Lcom/kwad/sdk/core/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic WL:Lcom/kwad/sdk/core/b;

.field final synthetic WM:Lcom/kwad/components/core/webview/b/a/v;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/a/v;Lcom/kwad/sdk/core/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/a/v$1;->WM:Lcom/kwad/components/core/webview/b/a/v;

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/a/v$1;->WL:Lcom/kwad/sdk/core/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/a/v$1;->WM:Lcom/kwad/components/core/webview/b/a/v;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/a/v;->a(Lcom/kwad/components/core/webview/b/a/v;)Lcom/kwad/sdk/core/webview/c/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/a/v$1;->WM:Lcom/kwad/components/core/webview/b/a/v;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/a/v;->a(Lcom/kwad/components/core/webview/b/a/v;)Lcom/kwad/sdk/core/webview/c/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/a/v$1;->WL:Lcom/kwad/sdk/core/b;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method
