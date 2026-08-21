.class public final Lcom/kwad/components/ad/reward/l/a;
.super Lcom/kwad/components/ad/j/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/j$a;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/components/ad/j/a<",
        "Lcom/kwad/components/core/video/h;",
        ">;",
        "Lcom/kwad/components/ad/reward/j$a;"
    }
.end annotation


# instance fields
.field private ya:Lcom/kwad/components/core/g/c;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/j/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->H(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    new-instance p1, Lcom/kwad/components/core/g/c;

    invoke-direct {p1}, Lcom/kwad/components/core/g/c;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/core/g/c;->v(J)V

    return-void
.end method


# virtual methods
.method public final Q(Landroid/content/Context;)Landroid/widget/FrameLayout;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/g/c;->getImagePlayerView(Landroid/content/Context;)Landroid/widget/FrameLayout;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    sget-object v1, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/g/c;->setImageScaleType(Landroid/widget/ImageView$ScaleType;)V

    return-object p1
.end method

.method public final a(Lcom/kwad/components/core/video/h;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/g/c;->d(Lcom/kwad/components/core/video/h;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/video/h;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/g/c;->c(Lcom/kwad/components/core/video/h;)V

    return-void
.end method

.method public final getPlayDuration()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {v0}, Lcom/kwad/components/core/g/c;->getPlayDuration()J

    move-result-wide v0

    return-wide v0
.end method

.method public final gj()V
    .locals 0

    return-void
.end method

.method public final gk()V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/l/a;->resume()V

    return-void
.end method

.method public final gl()V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/l/a;->pause()V

    return-void
.end method

.method public final gm()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {v0}, Lcom/kwad/components/core/g/c;->destroy()V

    return-void
.end method

.method public final jN()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aT(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/g/c;->setURLs(Ljava/util/List;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {v0}, Lcom/kwad/components/core/g/c;->play()V

    return-void
.end method

.method public final pause()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {v0}, Lcom/kwad/components/core/g/c;->pause()V

    return-void
.end method

.method public final release()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/j/a;->release()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {v0}, Lcom/kwad/components/core/g/c;->destroy()V

    return-void
.end method

.method public final resume()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {v0}, Lcom/kwad/components/core/g/c;->resume()V

    return-void
.end method

.method public final skipToEnd()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/a;->ya:Lcom/kwad/components/core/g/c;

    invoke-virtual {v0}, Lcom/kwad/components/core/g/c;->skipToEnd()V

    return-void
.end method
