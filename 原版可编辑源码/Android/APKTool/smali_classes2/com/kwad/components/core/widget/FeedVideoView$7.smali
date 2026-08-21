.class final Lcom/kwad/components/core/widget/FeedVideoView$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/video/a$c;


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

.field private cs:Z


# direct methods
.method constructor <init>(Lcom/kwad/components/core/widget/FeedVideoView;Lcom/kwad/sdk/core/video/videoview/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iput-object p2, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YN:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->cs:Z

    return-void
.end method


# virtual methods
.method public final bj()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->n(Lcom/kwad/components/core/widget/FeedVideoView;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0, v1}, Lcom/kwad/components/core/widget/FeedVideoView;->a(Lcom/kwad/components/core/widget/FeedVideoView;Z)Z

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v0, v0, Lcom/kwad/components/core/widget/FeedVideoView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->af(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->f(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v2, v2, Lcom/kwad/components/core/widget/FeedVideoView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->ah(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    xor-int/2addr v2, v1

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/video/videoview/a;->setVideoSoundEnable(Z)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v0, v0, Lcom/kwad/components/core/widget/FeedVideoView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->af(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->f(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v2, v2, Lcom/kwad/components/core/widget/FeedVideoView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->ag(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/video/videoview/a;->setLooping(Z)V

    :cond_1
    iget-boolean v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->cs:Z

    if-nez v0, :cond_2

    iput-boolean v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->cs:Z

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v2, v2, Lcom/kwad/components/core/widget/FeedVideoView;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v0, v2, v3, v4, v1}, Lcom/kwad/components/core/o/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;JI)V

    :cond_2
    return-void
.end method

.method public final bk()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v0, v0, Lcom/kwad/components/core/widget/FeedVideoView;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/a;->aA(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->c(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/view/ViewGroup;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->d(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->k(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;

    move-result-object v0

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->setProgress(I)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->l(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YN:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/video/videoview/a;->getDuration()J

    move-result-wide v1

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/bh;->V(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final d(J)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0, p1, p2}, Lcom/kwad/components/core/widget/FeedVideoView;->a(Lcom/kwad/components/core/widget/FeedVideoView;J)V

    long-to-float v0, p1

    const/high16 v1, 0x42c80000    # 100.0f

    mul-float/2addr v0, v1

    iget-object v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YN:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/video/videoview/a;->getDuration()J

    move-result-wide v1

    long-to-float v1, v1

    div-float/2addr v0, v1

    iget-object v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v1}, Lcom/kwad/components/core/widget/FeedVideoView;->j(Lcom/kwad/components/core/widget/FeedVideoView;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v1}, Lcom/kwad/components/core/widget/FeedVideoView;->k(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;

    move-result-object v1

    float-to-int v0, v0

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->setProgress(I)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->l(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/bh;->V(J)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {p1}, Lcom/kwad/components/core/widget/FeedVideoView;->m(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/TextView;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YN:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {p2}, Lcom/kwad/sdk/core/video/videoview/a;->getDuration()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/bh;->V(J)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->n(Lcom/kwad/components/core/widget/FeedVideoView;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/core/widget/FeedVideoView;->a(Lcom/kwad/components/core/widget/FeedVideoView;Z)Z

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v0, v0, Lcom/kwad/components/core/widget/FeedVideoView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->af(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->f(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v2, v2, Lcom/kwad/components/core/widget/FeedVideoView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->ah(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    xor-int/2addr v1, v2

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/video/videoview/a;->setVideoSoundEnable(Z)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v0, v0, Lcom/kwad/components/core/widget/FeedVideoView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->af(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->f(Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v1, v1, Lcom/kwad/components/core/widget/FeedVideoView;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ag(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/video/videoview/a;->setLooping(Z)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    iget-object v0, v0, Lcom/kwad/components/core/widget/FeedVideoView;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/a;->j(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YM:Lcom/kwad/components/core/widget/FeedVideoView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->m(Lcom/kwad/components/core/widget/FeedVideoView;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/widget/FeedVideoView$7;->YN:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/video/videoview/a;->getDuration()J

    move-result-wide v1

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/bh;->V(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
