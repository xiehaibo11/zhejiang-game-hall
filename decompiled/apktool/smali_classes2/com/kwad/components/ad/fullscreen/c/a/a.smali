.class public final Lcom/kwad/components/ad/fullscreen/c/a/a;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/sdk/utils/bn$a;


# instance fields
.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private gv:Landroid/widget/TextView;

.field private gw:Landroid/view/View;

.field private gx:Lcom/kwad/sdk/utils/bn;

.field private gy:Z

.field private gz:J

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/a/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/a/a$1;-><init>(Lcom/kwad/components/ad/fullscreen/c/a/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/a/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/a/a$2;-><init>(Lcom/kwad/components/ad/fullscreen/c/a/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/a/a;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gz:J

    return-wide p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private a(JJ)V
    .locals 0

    sub-long/2addr p1, p3

    long-to-float p1, p1

    const/high16 p2, 0x447a0000    # 1000.0f

    div-float/2addr p1, p2

    const/high16 p2, 0x3f000000    # 0.5f

    add-float/2addr p1, p2

    float-to-int p1, p1

    const/4 p2, 0x0

    invoke-static {p1, p2}, Ljava/lang/Math;->max(II)I

    move-result p1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/fullscreen/c/a/a;->w(I)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/a/a;JJ)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/kwad/components/ad/fullscreen/c/a/a;->a(JJ)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/a/a;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gy:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/fullscreen/c/a/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/a/a;->bU()V

    return-void
.end method

.method private bU()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gv:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gv:Landroid/widget/TextView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/fullscreen/c/a/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gy:Z

    return p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/fullscreen/c/a/a;)Lcom/kwad/sdk/utils/bn;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/fullscreen/c/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/fullscreen/c/a/a;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gz:J

    return-wide v0
.end method

.method static synthetic g(Lcom/kwad/components/ad/fullscreen/c/a/a;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gv:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/fullscreen/c/a/a;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gw:Landroid/view/View;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/fullscreen/c/a/a;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/a/a;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private w(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gv:Landroid/widget/TextView;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/os/Message;)V
    .locals 7

    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j;->gb()Z

    move-result p1

    const-wide/16 v1, 0x1f4

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j;->ga()Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    iget-wide v3, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gz:J

    add-long/2addr v3, v1

    iput-wide v3, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gz:J

    const-wide/16 v5, 0x7530

    cmp-long p1, v3, v5

    if-lez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gv:Landroid/widget/TextView;

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gw:Landroid/view/View;

    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup$MarginLayoutParams;

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/a/a;->getContext()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v0

    iput v0, p1, Landroid/view/ViewGroup$MarginLayoutParams;->leftMargin:I

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gw:Landroid/view/View;

    invoke-virtual {v0, p1}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    :cond_1
    invoke-direct {p0, v5, v6, v3, v4}, Lcom/kwad/components/ad/fullscreen/c/a/a;->a(JJ)V

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessageDelayed(IJ)Z

    goto :goto_1

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessageDelayed(IJ)Z

    :cond_3
    :goto_1
    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    new-instance v0, Lcom/kwad/sdk/utils/bn;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/utils/bn;-><init>(Lcom/kwad/sdk/utils/bn$a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/a/a;->bU()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v0, 0x1e

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/a/a;->w(I)V

    :cond_1
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_count_down:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/a/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gv:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_sound_switch:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/a/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gw:Landroid/view/View;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gy:Z

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/utils/bn;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    return-void
.end method
