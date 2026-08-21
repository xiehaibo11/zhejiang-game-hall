.class final Lcom/kwad/components/core/webview/b/h$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/tk/TKDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wl:Lcom/kwad/components/core/webview/b/h$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h$1;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$1$1;->Wl:Lcom/kwad/components/core/webview/b/h$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$1$1;->Wl:Lcom/kwad/components/core/webview/b/h$1;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/h$1;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0, p1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/core/webview/b/h;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$1$1;->Wl:Lcom/kwad/components/core/webview/b/h$1;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/h$1;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0, p1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V

    return-void
.end method
