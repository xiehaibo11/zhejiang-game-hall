.class public final Lcom/kwad/components/ad/fullscreen/c/a/c;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private gG:Landroid/widget/ImageView;

.field private gH:Lcom/kwad/sdk/utils/h$a;

.field private gt:Lcom/kwad/components/core/webview/b/e/e;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/a/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/a/c$1;-><init>(Lcom/kwad/components/ad/fullscreen/c/a/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gH:Lcom/kwad/sdk/utils/h$a;

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/a/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/a/c$2;-><init>(Lcom/kwad/components/ad/fullscreen/c/a/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/a/c;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gG:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/fullscreen/c/a/c;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private bU()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gG:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v2, v2, Lcom/kwad/components/ad/reward/j;->oU:Z

    if-nez v2, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/a/c;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/components/core/t/a;->qh()Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gG:Landroid/widget/ImageView;

    goto :goto_0

    :cond_0
    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gG:Landroid/widget/ImageView;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setSelected(Z)V

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v2

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v0

    invoke-virtual {v1, v2, v0}, Lcom/kwad/components/ad/reward/j;->c(ZZ)V

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gG:Landroid/widget/ImageView;

    const/4 v1, 0x1

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setSelected(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, v1, v1}, Lcom/kwad/components/ad/reward/j;->c(ZZ)V

    :goto_1
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gH:Lcom/kwad/sdk/utils/h$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/sdk/utils/h$a;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/fullscreen/c/a/c;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/fullscreen/c/a/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/a/c;->bU()V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/a/c;->bU()V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gG:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gG:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->isSelected()Z

    move-result v0

    const/4 v1, 0x1

    xor-int/2addr v0, v1

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/reward/l/d;->setAudioEnabled(ZZ)V

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gG:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/widget/ImageView;->isSelected()Z

    move-result v0

    xor-int/2addr v0, v1

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setSelected(Z)V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_sound_switch:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gG:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/c;->gH:Lcom/kwad/sdk/utils/h$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/sdk/utils/h$a;)V

    return-void
.end method
