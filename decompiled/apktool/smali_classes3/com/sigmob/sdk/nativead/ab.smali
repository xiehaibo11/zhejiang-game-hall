.class public Lcom/sigmob/sdk/nativead/ab;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/windad/natives/WindNativeAdData;


# instance fields
.field private final a:Ljava/lang/String;

.field private final b:Ljava/lang/String;

.field private final c:Ljava/lang/String;

.field private final d:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/SigImage;",
            ">;"
        }
    .end annotation
.end field

.field private final e:I

.field private final f:Lcom/sigmob/sdk/nativead/w;

.field private g:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/widget/ImageView;",
            ">;"
        }
    .end annotation
.end field

.field private h:I


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getTitle()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->a:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getDesc()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->b:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getIconUrl()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->c:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getImageUrlList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->d:Ljava/util/List;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getNativeAd()Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;->type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/nativead/ab;->e:I

    new-instance v0, Lcom/sigmob/sdk/nativead/w;

    invoke-direct {v0}, Lcom/sigmob/sdk/nativead/w;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v0, p1, p0}, Lcom/sigmob/sdk/nativead/w;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/natives/WindNativeAdData;)V

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    const-string v0, "sigmob"

    return-object v0
.end method

.method public b()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/SigImage;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->d:Ljava/util/List;

    return-object v0
.end method

.method public bindImageViews(Ljava/util/List;I)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/widget/ImageView;",
            ">;I)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/nativead/w;->a(Ljava/util/List;I)V

    :cond_0
    return-void
.end method

.method public bindMediaView(Landroid/view/ViewGroup;Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/nativead/w;->a(Landroid/view/ViewGroup;Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;)V

    :cond_0
    return-void
.end method

.method public bindViewForInteraction(Landroid/view/View;Ljava/util/List;Ljava/util/List;Landroid/view/View;Lcom/sigmob/windad/natives/NativeADEventListener;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/View;",
            "Lcom/sigmob/windad/natives/NativeADEventListener;",
            ")V"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    invoke-virtual/range {v0 .. v5}, Lcom/sigmob/sdk/nativead/w;->a(Landroid/view/View;Ljava/util/List;Ljava/util/List;Landroid/view/View;Lcom/sigmob/windad/natives/NativeADEventListener;)V

    :cond_0
    return-void
.end method

.method public c()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->q()Landroid/view/View;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public d()D
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->s()D

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public destroy()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->w()V

    :cond_0
    return-void
.end method

.method public e()D
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->t()D

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public f()I
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->p()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public g()I
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->u()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getAdLogo()Landroid/graphics/Bitmap;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->A()Landroid/graphics/Bitmap;

    move-result-object v0

    return-object v0
.end method

.method public getAdPatternType()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/nativead/ab;->e:I

    return v0
.end method

.method public getCTAText()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->z()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public getDesc()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getIconUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getTitle()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->a:Ljava/lang/String;

    return-object v0
.end method

.method public h()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/nativead/ab;->e:I

    return v0
.end method

.method public i()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->v()V

    :cond_0
    return-void
.end method

.method public pauseVideo()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->C()V

    :cond_0
    return-void
.end method

.method public resumeVideo()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->E()V

    :cond_0
    return-void
.end method

.method public setDislikeInteractionCallback(Landroid/app/Activity;Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/nativead/w;->a(Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;)V

    :cond_0
    return-void
.end method

.method public startVideo()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->B()V

    :cond_0
    return-void
.end method

.method public stopVideo()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/ab;->f:Lcom/sigmob/sdk/nativead/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/w;->F()V

    :cond_0
    return-void
.end method
