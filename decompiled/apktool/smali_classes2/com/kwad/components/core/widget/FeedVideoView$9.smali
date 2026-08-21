.class final Lcom/kwad/components/core/widget/FeedVideoView$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/widget/FeedVideoView;->a(Lcom/kwad/components/core/video/a;Lcom/kwad/sdk/core/video/videoview/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic YM:Lcom/kwad/components/core/widget/FeedVideoView;

.field final synthetic YN:Lcom/kwad/sdk/core/video/videoview/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/widget/FeedVideoView;Lcom/kwad/sdk/core/video/videoview/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iput-object p2, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YN:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;)V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->k(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->bg(Z)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YN:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/video/videoview/a;->getDuration()J

    move-result-wide v2

    invoke-virtual {p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->getProgress()I

    move-result v0

    int-to-long v4, v0

    mul-long/2addr v2, v4

    invoke-virtual {p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->getMaxProgress()I

    move-result p1

    int-to-long v4, p1

    div-long/2addr v2, v4

    long-to-int p1, v2

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YN:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/video/videoview/a;->seekTo(I)V

    iget-object p1, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/FeedVideoView;->getHandler()Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/FeedVideoView;->getHandler()Landroid/os/Handler;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->h(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/components/core/t/n;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    iget-object p1, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/FeedVideoView;->getHandler()Landroid/os/Handler;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->h(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/components/core/t/n;

    move-result-object v0

    const-wide/16 v2, 0x1388

    invoke-virtual {p1, v0, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {p1, v1}, Lcom/kwad/components/core/widget/FeedVideoView;->b(Lcom/kwad/components/core/widget/FeedVideoView;Z)Z

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;Z)V
    .locals 4

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {p2}, Lcom/kwad/components/core/widget/FeedVideoView;->k(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;

    move-result-object p2

    const/4 v0, 0x1

    invoke-virtual {p2, v0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->bg(Z)V

    iget-object p2, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-virtual {p2}, Lcom/kwad/components/core/widget/FeedVideoView;->getHandler()Landroid/os/Handler;

    move-result-object p2

    iget-object v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v1}, Lcom/kwad/components/core/widget/FeedVideoView;->h(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/components/core/t/n;

    move-result-object v1

    invoke-virtual {p2, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    iget-object p2, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {p2, v0}, Lcom/kwad/components/core/widget/FeedVideoView;->b(Lcom/kwad/components/core/widget/FeedVideoView;Z)Z

    iget-object p2, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YN:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {p2}, Lcom/kwad/sdk/core/video/videoview/a;->getDuration()J

    move-result-wide v0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->getProgress()I

    move-result p2

    int-to-long v2, p2

    mul-long/2addr v0, v2

    invoke-virtual {p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->getMaxProgress()I

    move-result p1

    int-to-long p1, p1

    div-long/2addr v0, p1

    long-to-int p1, v0

    iget-object p2, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {p2}, Lcom/kwad/components/core/widget/FeedVideoView;->l(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/TextView;

    move-result-object p2

    int-to-long v0, p1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/bh;->V(J)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public final st()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->k(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->bg(Z)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->getHandler()Landroid/os/Handler;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v2}, Lcom/kwad/components/core/widget/FeedVideoView;->h(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/components/core/t/n;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$9;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0, v1}, Lcom/kwad/components/core/widget/FeedVideoView;->b(Lcom/kwad/components/core/widget/FeedVideoView;Z)Z

    return-void
.end method
