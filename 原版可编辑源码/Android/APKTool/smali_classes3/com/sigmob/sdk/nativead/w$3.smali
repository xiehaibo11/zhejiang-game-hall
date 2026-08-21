.class Lcom/sigmob/sdk/nativead/w$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/nativead/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/w;->a(Landroid/view/ViewGroup;Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;

.field final synthetic b:Lcom/sigmob/sdk/nativead/p;

.field final synthetic c:Lcom/sigmob/sdk/nativead/w;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/w;Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;Lcom/sigmob/sdk/nativead/p;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/w$3;->a:Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;

    iput-object p3, p0, Lcom/sigmob/sdk/nativead/w$3;->b:Lcom/sigmob/sdk/nativead/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->U:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    return-void
.end method

.method public a(JJ)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w$3;->b:Lcom/sigmob/sdk/nativead/p;

    invoke-interface {v1}, Lcom/sigmob/sdk/nativead/p;->j()I

    move-result v1

    iput v1, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/sigmob/sdk/nativead/b;->a(JJ)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/sigmob/sdk/base/common/g;

    iget-object p3, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {p3}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object p3

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/g;->p()Lcom/sigmob/sdk/base/common/a;

    move-result-object p4

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->b:Lcom/sigmob/sdk/nativead/p;

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->j()I

    move-result v0

    invoke-interface {p3, p4, v0}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/g;->l()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onVideoCompleted()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->a:Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;->onVideoCompleted()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w$3;->b:Lcom/sigmob/sdk/nativead/p;

    invoke-interface {v1}, Lcom/sigmob/sdk/nativead/p;->e()I

    move-result v1

    iput v1, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    const/4 v1, 0x1

    iput v1, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_last:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->r:Lcom/sigmob/sdk/base/common/a;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w$3;->b:Lcom/sigmob/sdk/nativead/p;

    invoke-interface {v2}, Lcom/sigmob/sdk/nativead/p;->j()I

    move-result v2

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->T:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0, v2}, Lcom/sigmob/sdk/nativead/w;->b(Lcom/sigmob/sdk/nativead/w;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0, v2}, Lcom/sigmob/sdk/nativead/w;->a(Lcom/sigmob/sdk/nativead/w;Z)Z

    return-void
.end method

.method public onVideoError(Lcom/sigmob/windad/WindAdError;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/nativead/w;->a(Lcom/sigmob/sdk/nativead/w;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0, v1}, Lcom/sigmob/sdk/nativead/w;->b(Lcom/sigmob/sdk/nativead/w;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->a:Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;->onVideoError(Lcom/sigmob/windad/WindAdError;)V

    :cond_0
    return-void
.end method

.method public onVideoLoad()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->a:Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;->onVideoLoad()V

    :cond_0
    return-void
.end method

.method public onVideoPause()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->a:Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;->onVideoPause()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/nativead/w;->b(Lcom/sigmob/sdk/nativead/w;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->R:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->T:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    return-void
.end method

.method public onVideoResume()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->a:Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;->onVideoResume()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/nativead/w;->b(Lcom/sigmob/sdk/nativead/w;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    const/4 v2, 0x2

    iput v2, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iput v1, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w$3;->b:Lcom/sigmob/sdk/nativead/p;

    invoke-interface {v2}, Lcom/sigmob/sdk/nativead/p;->j()I

    move-result v2

    iput v2, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->begin_time:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0, v1}, Lcom/sigmob/sdk/nativead/w;->a(Lcom/sigmob/sdk/nativead/w;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->Q:Lcom/sigmob/sdk/base/common/a;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w$3;->b:Lcom/sigmob/sdk/nativead/p;

    invoke-interface {v2}, Lcom/sigmob/sdk/nativead/p;->j()I

    move-result v2

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    return-void
.end method

.method public onVideoStart()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/w;->b(Lcom/sigmob/sdk/nativead/w;)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v1, v1, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v2

    invoke-virtual {v0}, Landroid/view/View;->getHeight()I

    move-result v0

    invoke-virtual {v1, v2, v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setAdSize(II)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w$3;->b:Lcom/sigmob/sdk/nativead/p;

    invoke-interface {v1}, Lcom/sigmob/sdk/nativead/p;->e()I

    move-result v1

    iput v1, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->video_time:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    const/4 v1, 0x1

    iput v1, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    const/4 v2, 0x0

    iput v2, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_last:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iput v2, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v3}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/nativead/b;->u()Z

    move-result v3

    if-eqz v3, :cond_1

    move v3, v1

    goto :goto_0

    :cond_1
    const/4 v3, 0x2

    :goto_0
    iput v3, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_auto_play:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/w;->c(Lcom/sigmob/sdk/nativead/w;)Z

    move-result v0

    const/4 v3, 0x3

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iput v3, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iput v1, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    :goto_1
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/w;->d(Lcom/sigmob/sdk/nativead/w;)Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iput v1, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0, v2}, Lcom/sigmob/sdk/nativead/w;->c(Lcom/sigmob/sdk/nativead/w;Z)Z

    goto :goto_2

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iput v3, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    :goto_2
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->a:Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;

    if-eqz v0, :cond_4

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;->onVideoStart()V

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0, v2}, Lcom/sigmob/sdk/nativead/w;->a(Lcom/sigmob/sdk/nativead/w;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0, v2}, Lcom/sigmob/sdk/nativead/w;->b(Lcom/sigmob/sdk/nativead/w;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$3;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->Q:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    return-void
.end method
