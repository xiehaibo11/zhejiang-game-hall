.class final Lcom/kwad/components/ad/feed/b/m$21;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/aa$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/core/webview/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fI:Lcom/kwad/components/ad/feed/b/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/m;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$21;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/aa$a;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$21;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->i(Lcom/kwad/components/ad/feed/b/m;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$21;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->c(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$21;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->k(Lcom/kwad/components/ad/feed/b/m;)D

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$21;->fI:Lcom/kwad/components/ad/feed/b/m;

    iget v1, p1, Lcom/kwad/components/core/webview/jshandler/aa$a;->height:I

    int-to-double v1, v1

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/ad/feed/b/m;D)D

    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/aa$a;->height:I

    int-to-float p1, p1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$21;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->l(Lcom/kwad/components/ad/feed/b/m;)I

    move-result v0

    int-to-float v0, v0

    div-float/2addr p1, v0

    float-to-double v0, p1

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$21;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->u(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/widget/RatioFrameLayout;

    move-result-object p1

    double-to-float v2, v0

    float-to-double v2, v2

    invoke-virtual {p1, v2, v3}, Lcom/kwad/sdk/widget/RatioFrameLayout;->setRatio(D)V

    invoke-static {}, Lcom/kwad/components/ad/feed/b/m;->bx()Ljava/util/HashMap;

    move-result-object p1

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/m$21;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v2}, Lcom/kwad/components/ad/feed/b/m;->v(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    iget-wide v2, v2, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {p1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    return-void
.end method
