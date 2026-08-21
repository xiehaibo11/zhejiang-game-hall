.class final Lcom/kwad/components/ad/splashscreen/c/j$1;
.super Lcom/kwad/components/core/webview/b/e/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/splashscreen/c/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Df:Lcom/kwad/components/ad/splashscreen/c/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$1;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/e/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;JJJ)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j$1;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-splash-play-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$1;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iput-wide p2, p1, Lcom/kwad/components/ad/splashscreen/h;->Co:J

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$1;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iput-wide p4, p1, Lcom/kwad/components/ad/splashscreen/h;->Cp:J

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$1;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iput-wide p6, p1, Lcom/kwad/components/ad/splashscreen/h;->Cq:J

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$1;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/j;->b(Lcom/kwad/components/ad/splashscreen/c/j;)Ljava/lang/Runnable;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public final q(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j$1;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/components/ad/splashscreen/h;->Cj:Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j$1;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-splash-play-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$1;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/j;->a(Lcom/kwad/components/ad/splashscreen/c/j;)V

    :cond_0
    return-void
.end method
