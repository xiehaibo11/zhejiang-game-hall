.class final Lcom/kwad/components/ad/reward/presenter/b/b$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/b/b$3;->a(Lcom/kwad/components/core/liveEnd/a;Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic tO:Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;

.field final synthetic tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/b/b$3;Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tO:Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/b/b;->d(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/m/p;

    move-result-object v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    new-instance v1, Lcom/kwad/components/ad/reward/m/p;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/b/b;->e(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/kwad/components/ad/reward/m/p;-><init>(Lcom/kwad/components/ad/reward/j;)V

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/presenter/b/b;->a(Lcom/kwad/components/ad/reward/presenter/b/b;Lcom/kwad/components/ad/reward/m/p;)Lcom/kwad/components/ad/reward/m/p;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/b/b;->d(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/m/p;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/b/b;->f(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/m/p;->h(Landroid/view/ViewGroup;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/b/b;->d(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/m/p;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/b/b;->g(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/m/r;->C(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/r;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/m/p;->b(Lcom/kwad/components/ad/reward/m/r;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/b/b;->d(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/m/p;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/b/b;->h(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tO:Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;->mQLivePushEndInfo:Lcom/kwad/components/ad/reward/model/AdLiveEndResultData$AdLivePushEndInfo;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v3}, Lcom/kwad/components/ad/reward/presenter/b/b;->i(Lcom/kwad/components/ad/reward/presenter/b/b;)J

    move-result-wide v3

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/kwad/components/ad/reward/m/p;->a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/model/AdLiveEndResultData$AdLivePushEndInfo;J)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/b/b;->j(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/b/b;->d(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/m/p;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/ad/reward/j;->pt:Lcom/kwad/components/ad/reward/m/p;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    sget v2, Lcom/kwad/sdk/R$id;->ksad_live_end_page_layout_root:I

    invoke-static {v1, v2}, Lcom/kwad/components/ad/reward/presenter/b/b;->a(Lcom/kwad/components/ad/reward/presenter/b/b;I)Landroid/view/View;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/presenter/b/b;->a(Lcom/kwad/components/ad/reward/presenter/b/b;Landroid/view/View;)Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/b/b;->k(Lcom/kwad/components/ad/reward/presenter/b/b;)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$3$1;->tP:Lcom/kwad/components/ad/reward/presenter/b/b$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/b/b$3;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/b/b;->l(Lcom/kwad/components/ad/reward/presenter/b/b;)V

    return-void
.end method
