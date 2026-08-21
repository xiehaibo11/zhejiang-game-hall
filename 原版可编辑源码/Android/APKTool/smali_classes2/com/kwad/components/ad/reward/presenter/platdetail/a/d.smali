.class public final Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private gG:Landroid/widget/ImageView;

.field private gH:Lcom/kwad/sdk/utils/h$a;

.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private vq:Landroid/widget/ImageView;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d$1;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gH:Lcom/kwad/sdk/utils/h$a;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d$2;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gt:Lcom/kwad/components/core/webview/b/e/e;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gG:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private bU()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gG:Landroid/widget/ImageView;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->t(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    const/16 v2, 0x8

    const/4 v3, 0x0

    if-eqz v0, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v3

    :goto_0
    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->vq:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/j;->t(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_1

    move v2, v3

    :cond_1
    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v1, v1, Lcom/kwad/components/ad/reward/j;->oU:Z

    const/4 v2, 0x1

    if-nez v1, :cond_2

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/t/a;->qh()Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->vq:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setSelected(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, v3, v3}, Lcom/kwad/components/ad/reward/j;->c(ZZ)V

    move v2, v3

    goto :goto_1

    :cond_2
    if-eqz v0, :cond_3

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v2

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->vq:Landroid/widget/ImageView;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v4

    invoke-virtual {v1, v4}, Landroid/widget/ImageView;->setSelected(Z)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v4

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v0

    invoke-virtual {v1, v4, v0}, Lcom/kwad/components/ad/reward/j;->c(ZZ)V

    goto :goto_1

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->vq:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setSelected(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, v2, v2}, Lcom/kwad/components/ad/reward/j;->c(ZZ)V

    :goto_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gG:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setSelected(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0, v2, v3}, Lcom/kwad/components/ad/reward/l/d;->setAudioEnabled(ZZ)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gH:Lcom/kwad/sdk/utils/h$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/sdk/utils/h$a;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->bU()V

    return-void
.end method

.method private iv()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gG:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->vq:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->hx()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gG:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->vq:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->bU()V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gG:Landroid/widget/ImageView;

    const/4 v1, 0x1

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gG:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->isSelected()Z

    move-result v0

    xor-int/2addr v0, v1

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/reward/l/d;->setAudioEnabled(ZZ)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gG:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/widget/ImageView;->isSelected()Z

    move-result v0

    xor-int/2addr v0, v1

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setSelected(Z)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->vq:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->vq:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->isSelected()Z

    move-result v0

    xor-int/2addr v0, v1

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/reward/l/d;->setAudioEnabled(ZZ)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->vq:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/widget/ImageView;->isSelected()Z

    move-result v0

    xor-int/2addr v0, v1

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setSelected(Z)V

    :cond_1
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_sound_switch:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gG:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_deep_task_sound_switch:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->vq:Landroid/widget/ImageView;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->iv()V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/d;->gH:Lcom/kwad/sdk/utils/h$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/sdk/utils/h$a;)V

    return-void
.end method
