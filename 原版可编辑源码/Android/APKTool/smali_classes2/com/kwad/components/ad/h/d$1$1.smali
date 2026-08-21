.class final Lcom/kwad/components/ad/h/d$1$1;
.super Lcom/kwad/components/core/webview/jshandler/o;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/h/d$1;->a(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/components/l;Landroid/view/ViewGroup;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic oj:Lcom/kwad/components/ad/h/d$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/h/d$1;Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/h/d$1$1;->oj:Lcom/kwad/components/ad/h/d$1;

    invoke-direct {p0, p2, p3, p4}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    return-void
.end method


# virtual methods
.method public final J(I)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/o;->J(I)V

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/h/d$1$1;->oj:Lcom/kwad/components/ad/h/d$1;

    iget-object p1, p1, Lcom/kwad/components/ad/h/d$1;->oi:Lcom/kwad/components/ad/h/d;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/h/d;->b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V

    :cond_0
    return-void
.end method
