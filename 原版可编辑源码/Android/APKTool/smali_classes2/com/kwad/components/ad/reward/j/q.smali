.class public final Lcom/kwad/components/ad/reward/j/q;
.super Lcom/kwad/components/core/webview/jshandler/o;


# instance fields
.field private vy:J

.field private xF:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/components/ad/reward/j;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/components/ad/reward/j;JLcom/kwad/sdk/core/webview/d/a/a;Landroid/content/DialogInterface$OnDismissListener;)V
    .locals 0

    invoke-direct {p0, p1, p2, p6, p7}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;Landroid/content/DialogInterface$OnDismissListener;)V

    const-wide/16 p1, -0x1

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/j/q;->vy:J

    iput-wide p4, p0, Lcom/kwad/components/ad/reward/j/q;->vy:J

    if-eqz p3, :cond_0

    new-instance p1, Ljava/lang/ref/WeakReference;

    invoke-direct {p1, p3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j/q;->xF:Ljava/lang/ref/WeakReference;

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/z$b;
    .locals 4

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/jshandler/o;->a(Lcom/kwad/sdk/core/webview/d/b/a;Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/z$b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/j/q;->xF:Ljava/lang/ref/WeakReference;

    if-eqz p2, :cond_0

    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/kwad/components/ad/reward/j/q;->xF:Ljava/lang/ref/WeakReference;

    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/kwad/components/ad/reward/j;

    iget-object p2, p2, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/l/d;->getPlayDuration()J

    move-result-wide v0

    goto :goto_0

    :cond_0
    iget-wide v0, p0, Lcom/kwad/components/ad/reward/j/q;->vy:J

    const-wide/16 v2, 0x0

    cmp-long p2, v0, v2

    if-lez p2, :cond_1

    :goto_0
    iput-wide v0, p1, Lcom/kwad/sdk/core/report/z$b;->vy:J

    :cond_1
    return-object p1
.end method

.method public final jn()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/core/webview/jshandler/o;->jn()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/q;->TL:Lcom/kwad/sdk/core/webview/b;

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j/q;->TL:Lcom/kwad/sdk/core/webview/b;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/webview/b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    sget v2, Lcom/kwad/components/ad/reward/c/b;->STATUS_NONE:I

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/reward/c/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    :cond_0
    return-void
.end method
