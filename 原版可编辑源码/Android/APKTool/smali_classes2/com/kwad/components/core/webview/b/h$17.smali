.class final Lcom/kwad/components/core/webview/b/h$17;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/components/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;Lcom/kwad/components/core/webview/b/h$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;

.field final synthetic Wv:Lcom/kwad/components/core/webview/b/h$a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/core/webview/b/h$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$17;->Wk:Lcom/kwad/components/core/webview/b/h;

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/h$17;->Wv:Lcom/kwad/components/core/webview/b/h$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/Throwable;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$17;->Wv:Lcom/kwad/components/core/webview/b/h$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/h$a;->onFailed()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$17;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0, p1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/core/webview/b/h;Ljava/lang/Throwable;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$17;->Wv:Lcom/kwad/components/core/webview/b/h$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/h$a;->onSuccess()V

    :cond_0
    return-void
.end method
