.class final Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$1;
.super Lcom/kwad/components/core/webview/b/e/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic vp:Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$1;->vp:Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/e/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final q(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$1;->vp:Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-video-top-bar"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$1;->vp:Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->b(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)V

    :cond_0
    return-void
.end method
