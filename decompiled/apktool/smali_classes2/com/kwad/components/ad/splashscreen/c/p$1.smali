.class final Lcom/kwad/components/ad/splashscreen/c/p$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/splashscreen/c/p;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic DO:Lcom/kwad/components/ad/splashscreen/c/p;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/p;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$1;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p$1;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/splashscreen/c/p;->a(Lcom/kwad/components/ad/splashscreen/c/p;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p$1;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/p;->a(Lcom/kwad/components/ad/splashscreen/c/p;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->aT(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/c/p$1;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {v4}, Lcom/kwad/components/ad/splashscreen/c/p;->b(Lcom/kwad/components/ad/splashscreen/c/p;)J

    move-result-wide v4

    sub-long/2addr v2, v4

    const-string v4, ""

    invoke-static {v0, v2, v3, v1, v4}, Lcom/kwad/components/ad/splashscreen/monitor/b;->a(Ljava/lang/String;JILjava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p$1;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/p;->c(Lcom/kwad/components/ad/splashscreen/c/p;)V

    return-void
.end method
