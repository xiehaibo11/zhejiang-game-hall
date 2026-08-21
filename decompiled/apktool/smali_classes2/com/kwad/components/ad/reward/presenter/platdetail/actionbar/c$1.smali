.class final Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c$1;
.super Lcom/kwad/components/core/webview/b/e/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic uS:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c$1;->uS:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/e/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final q(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c$1;->uS:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-video-bottom-card-v2"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c$1;->uS:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->b(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-fullscreen-video-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c$1;->uS:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->c(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/kwad/components/ad/reward/j;->pJ:Z

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c$1;->uS:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;->d(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->Q(Z)V

    :cond_1
    return-void
.end method
