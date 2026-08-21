.class final Lcom/kwad/sdk/core/webview/request/b$2$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/webview/request/b$2;->b(Lcom/kwad/sdk/core/webview/request/WebCardGetDataResponse;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic azl:Lcom/kwad/sdk/core/webview/request/b$2;

.field final synthetic azm:Lcom/kwad/sdk/core/webview/request/WebCardGetDataResponse;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/webview/request/b$2;Lcom/kwad/sdk/core/webview/request/WebCardGetDataResponse;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/request/b$2$2;->azl:Lcom/kwad/sdk/core/webview/request/b$2;

    iput-object p2, p0, Lcom/kwad/sdk/core/webview/request/b$2$2;->azm:Lcom/kwad/sdk/core/webview/request/WebCardGetDataResponse;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/request/b$2$2;->azl:Lcom/kwad/sdk/core/webview/request/b$2;

    iget-object v0, v0, Lcom/kwad/sdk/core/webview/request/b$2;->azk:Lcom/kwad/sdk/core/webview/request/b$a;

    iget-object v1, p0, Lcom/kwad/sdk/core/webview/request/b$2$2;->azm:Lcom/kwad/sdk/core/webview/request/WebCardGetDataResponse;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/core/webview/request/b$a;->a(Lcom/kwad/sdk/core/webview/request/WebCardGetDataResponse;)V

    return-void
.end method
