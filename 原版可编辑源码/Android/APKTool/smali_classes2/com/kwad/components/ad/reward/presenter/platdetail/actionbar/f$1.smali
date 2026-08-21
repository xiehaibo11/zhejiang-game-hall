.class final Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$1;
.super Lcom/kwad/components/core/webview/b/e/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$1;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/e/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final q(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$1;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-video-bottom-card-v2"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$1;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->b(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V

    :cond_0
    return-void
.end method
