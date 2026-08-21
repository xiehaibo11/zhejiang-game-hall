.class final Lcom/kwad/components/core/webview/b/c/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/g;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/c/c;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Xt:Lcom/kwad/components/core/webview/b/c/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/c/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/c$1;->Xt:Lcom/kwad/components/core/webview/b/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final callTKBridge(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c$1;->Xt:Lcom/kwad/components/core/webview/b/c/c;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->Xn:Lcom/kwad/sdk/components/g;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/components/g;->callTKBridge(Ljava/lang/String;)V

    return-void
.end method
