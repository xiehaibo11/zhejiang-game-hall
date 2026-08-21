.class final Lcom/kwad/components/core/page/b/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/ah$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/page/b/f;->oI()Lcom/kwad/components/core/webview/jshandler/ah$b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic MV:Lcom/kwad/components/core/page/b/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/b/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/f$1;->MV:Lcom/kwad/components/core/page/b/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$a;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/f$1;->MV:Lcom/kwad/components/core/page/b/f;

    iget v1, p1, Lcom/kwad/components/core/webview/jshandler/ah$a;->status:I

    invoke-static {v0, v1}, Lcom/kwad/components/core/page/b/f;->a(Lcom/kwad/components/core/page/b/f;I)I

    iget-object v0, p0, Lcom/kwad/components/core/page/b/f$1;->MV:Lcom/kwad/components/core/page/b/f;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/f;->a(Lcom/kwad/components/core/page/b/f;)Lcom/kwad/components/core/page/b/f$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/b/f$1;->MV:Lcom/kwad/components/core/page/b/f;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/f;->a(Lcom/kwad/components/core/page/b/f;)Lcom/kwad/components/core/page/b/f$a;

    move-result-object v0

    iget v1, p1, Lcom/kwad/components/core/webview/jshandler/ah$a;->status:I

    invoke-interface {v0, v1}, Lcom/kwad/components/core/page/b/f$a;->ax(I)V

    :cond_0
    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/ah$a;->status:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/page/b/f$1;->MV:Lcom/kwad/components/core/page/b/f;

    invoke-static {p1}, Lcom/kwad/components/core/page/b/f;->b(Lcom/kwad/components/core/page/b/f;)Landroid/view/ViewGroup;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->setVisibility(I)V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/core/page/b/f$1;->MV:Lcom/kwad/components/core/page/b/f;

    invoke-static {p1}, Lcom/kwad/components/core/page/b/f;->c(Lcom/kwad/components/core/page/b/f;)Landroid/webkit/WebView;

    move-result-object p1

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/webkit/WebView;->setVisibility(I)V

    return-void
.end method
