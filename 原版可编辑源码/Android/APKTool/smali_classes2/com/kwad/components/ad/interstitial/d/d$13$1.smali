.class final Lcom/kwad/components/ad/interstitial/d/d$13$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d$13;->a(Lcom/kwad/components/core/webview/jshandler/z$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kh:Lcom/kwad/components/core/webview/jshandler/z$a;

.field final synthetic ki:Lcom/kwad/components/ad/interstitial/d/d$13;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/d$13;Lcom/kwad/components/core/webview/jshandler/z$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->ki:Lcom/kwad/components/ad/interstitial/d/d$13;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->kh:Lcom/kwad/components/core/webview/jshandler/z$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->ki:Lcom/kwad/components/ad/interstitial/d/d$13;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->kh:Lcom/kwad/components/core/webview/jshandler/z$a;

    iget v0, v0, Lcom/kwad/components/core/webview/jshandler/z$a;->type:I

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->ki:Lcom/kwad/components/ad/interstitial/d/d$13;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->ji:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->ki:Lcom/kwad/components/ad/interstitial/d/d$13;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jj:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->ki:Lcom/kwad/components/ad/interstitial/d/d$13;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/e/a;->c(Lcom/kwad/components/ad/interstitial/d/c;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->ki:Lcom/kwad/components/ad/interstitial/d/d$13;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iput-boolean v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->jj:Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->ki:Lcom/kwad/components/ad/interstitial/d/d$13;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/b/b;->K(Landroid/content/Context;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->ki:Lcom/kwad/components/ad/interstitial/d/d$13;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->kh:Lcom/kwad/components/core/webview/jshandler/z$a;

    iget v2, v2, Lcom/kwad/components/core/webview/jshandler/z$a;->type:I

    const/4 v3, 0x3

    if-ne v2, v3, :cond_1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :goto_0
    const/4 v2, -0x1

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->ki:Lcom/kwad/components/ad/interstitial/d/d$13;

    iget-object v3, v3, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v3}, Lcom/kwad/components/ad/interstitial/d/d;->h(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/kwad/components/ad/interstitial/d/c;->a(ZILcom/kwad/sdk/core/video/videoview/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$13$1;->ki:Lcom/kwad/components/ad/interstitial/d/d$13;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->l(Lcom/kwad/components/ad/interstitial/d/d;)V

    return-void
.end method
