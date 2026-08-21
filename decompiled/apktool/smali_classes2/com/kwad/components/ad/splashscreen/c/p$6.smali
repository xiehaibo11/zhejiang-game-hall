.class final Lcom/kwad/components/ad/splashscreen/c/p$6;
.super Lcom/kwad/sdk/core/webview/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/p;->a(Lcom/kwad/sdk/core/webview/KsAdWebView;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic DO:Lcom/kwad/components/ad/splashscreen/c/p;

.field final synthetic hp:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/p;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$6;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/p$6;->hp:Ljava/lang/String;

    invoke-direct {p0}, Lcom/kwad/sdk/core/webview/f;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished()V
    .locals 5

    invoke-super {p0}, Lcom/kwad/sdk/core/webview/f;->onPageFinished()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p$6;->hp:Ljava/lang/String;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/c/p$6;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {v3}, Lcom/kwad/components/ad/splashscreen/c/p;->b(Lcom/kwad/components/ad/splashscreen/c/p;)J

    move-result-wide v3

    sub-long/2addr v1, v3

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/b;->d(Ljava/lang/String;J)V

    return-void
.end method

.method public final onReceivedHttpError(ILjava/lang/String;Ljava/lang/String;)V
    .locals 4

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/core/webview/f;->onReceivedHttpError(ILjava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$6;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->d(Lcom/kwad/components/ad/splashscreen/c/p;)Ljava/lang/Runnable;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$6;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->c(Lcom/kwad/components/ad/splashscreen/c/p;)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$6;->hp:Ljava/lang/String;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-object p3, p0, Lcom/kwad/components/ad/splashscreen/c/p$6;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p3}, Lcom/kwad/components/ad/splashscreen/c/p;->b(Lcom/kwad/components/ad/splashscreen/c/p;)J

    move-result-wide v2

    sub-long/2addr v0, v2

    const/4 p3, 0x2

    invoke-static {p1, v0, v1, p3, p2}, Lcom/kwad/components/ad/splashscreen/monitor/b;->a(Ljava/lang/String;JILjava/lang/String;)V

    return-void
.end method
