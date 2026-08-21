.class public final Lcom/kwad/components/core/video/f;
.super Lcom/kwad/components/core/video/a;

# interfaces
.implements Lcom/kwad/sdk/utils/bn$a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/video/f$a;
    }
.end annotation


# instance fields
.field private DV:Z

.field private SM:Landroid/view/View;

.field private final SN:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private SQ:Z

.field private final gx:Lcom/kwad/sdk/utils/bn;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/video/videoview/c;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/components/core/video/a;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/video/videoview/c;)V

    new-instance p1, Lcom/kwad/sdk/utils/bn;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/utils/bn;-><init>(Lcom/kwad/sdk/utils/bn$a;)V

    iput-object p1, p0, Lcom/kwad/components/core/video/f;->gx:Lcom/kwad/sdk/utils/bn;

    new-instance p1, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 p2, 0x1

    invoke-direct {p1, p2}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object p1, p0, Lcom/kwad/components/core/video/f;->SN:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/core/video/f;->DV:Z

    iput-boolean p1, p0, Lcom/kwad/components/core/video/f;->SQ:Z

    iput-object p0, p0, Lcom/kwad/components/core/video/f;->SM:Landroid/view/View;

    return-void
.end method

.method private aa()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/video/f;->SN:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->getAndSet(Z)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "InterstitialVideoPlayerController"

    const-string v1, "onViewAttached"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/video/f;->gx:Lcom/kwad/sdk/utils/bn;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessage(I)Z

    :cond_0
    return-void
.end method

.method private ab()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/video/f;->SN:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->getAndSet(Z)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "InterstitialVideoPlayerController"

    const-string v1, "onViewDetached"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/video/f;->gx:Lcom/kwad/sdk/utils/bn;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/utils/bn;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/video/f;->release()V

    :cond_0
    return-void
.end method

.method private qX()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/video/f;->DV:Z

    return-void
.end method


# virtual methods
.method public final a(Landroid/os/Message;)V
    .locals 3

    iget-boolean v0, p0, Lcom/kwad/components/core/video/f;->DV:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_2

    iget-object p1, p0, Lcom/kwad/components/core/video/f;->SM:Landroid/view/View;

    const/16 v1, 0x46

    invoke-static {p1, v1}, Lcom/kwad/sdk/utils/bm;->o(Landroid/view/View;I)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/core/video/f;->qy()V

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/components/core/video/f;->qA()V

    :goto_0
    iget-object p1, p0, Lcom/kwad/components/core/video/f;->gx:Lcom/kwad/sdk/utils/bn;

    const-wide/16 v1, 0x1f4

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessageDelayed(IJ)Z

    :cond_2
    return-void
.end method

.method protected final eP()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/video/f;->SQ:Z

    if-eqz v0, :cond_0

    invoke-super {p0}, Lcom/kwad/components/core/video/a;->eP()V

    :cond_0
    return-void
.end method

.method protected final onAttachedToWindow()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/video/a;->onAttachedToWindow()V

    const-string v0, "InterstitialVideoPlayerController"

    const-string v1, "onAttachedToWindow"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/components/core/video/f;->qX()V

    invoke-direct {p0}, Lcom/kwad/components/core/video/f;->aa()V

    return-void
.end method

.method protected final onDetachedFromWindow()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/video/a;->onDetachedFromWindow()V

    const-string v0, "InterstitialVideoPlayerController"

    const-string v1, "onDetachedFromWindow"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/components/core/video/f;->ab()V

    return-void
.end method

.method public final onFinishTemporaryDetach()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/video/a;->onFinishTemporaryDetach()V

    const-string v0, "InterstitialVideoPlayerController"

    const-string v1, "onFinishTemporaryDetach"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/components/core/video/f;->aa()V

    return-void
.end method

.method public final onStartTemporaryDetach()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/video/a;->onStartTemporaryDetach()V

    const-string v0, "InterstitialVideoPlayerController"

    const-string v1, "onStartTemporaryDetach"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/components/core/video/f;->ab()V

    return-void
.end method

.method public final onWindowFocusChanged(Z)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/core/video/a;->onWindowFocusChanged(Z)V

    return-void
.end method

.method protected final onWindowVisibilityChanged(I)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/core/video/a;->onWindowVisibilityChanged(I)V

    return-void
.end method

.method public final qA()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/video/a;->qA()V

    return-void
.end method

.method protected final qs()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/video/a;->qs()V

    iget-object v0, p0, Lcom/kwad/components/core/video/f;->na:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/video/f;->na:Landroid/widget/ImageView;

    sget v1, Lcom/kwad/sdk/R$drawable;->ksad_interstitial_video_play:I

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/video/f;->nb:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/video/f;->nb:Landroid/widget/TextView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public final qy()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/video/a;->qy()V

    return-void
.end method

.method public final release()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/video/a;->release()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/video/f;->DV:Z

    return-void
.end method
