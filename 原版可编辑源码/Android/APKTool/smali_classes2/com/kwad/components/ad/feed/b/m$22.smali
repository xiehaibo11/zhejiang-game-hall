.class final Lcom/kwad/components/ad/feed/b/m$22;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/core/webview/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fI:Lcom/kwad/components/ad/feed/b/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/m;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;)V
    .locals 7

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->w(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->x(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->y(Lcom/kwad/components/ad/feed/b/m;)Z

    move-result v0

    if-eqz v0, :cond_4

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->z(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/widget/KSRelativeLayout;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/widget/KSRelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup$MarginLayoutParams;

    invoke-static {v0, v1}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/ad/feed/b/m;Landroid/view/ViewGroup$MarginLayoutParams;)Landroid/view/ViewGroup$MarginLayoutParams;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->k(Lcom/kwad/components/ad/feed/b/m;)D

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v0

    double-to-int v0, v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/b/m;->l(Lcom/kwad/components/ad/feed/b/m;)I

    move-result v1

    iget-wide v2, p1, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->widthRation:D

    const-wide/16 v4, 0x0

    cmpl-double v2, v2, v4

    if-nez v2, :cond_1

    const-wide v2, 0x3fed70a3e0000000L    # 0.9200000166893005

    iput-wide v2, p1, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->widthRation:D

    const-wide v2, 0x3fa47ae140000000L    # 0.03999999910593033

    iput-wide v2, p1, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->leftMarginRation:D

    :cond_1
    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v2}, Lcom/kwad/components/ad/feed/b/m;->A(Lcom/kwad/components/ad/feed/b/m;)Landroid/view/ViewGroup$MarginLayoutParams;

    move-result-object v2

    iget-wide v3, p1, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->topMarginRation:D

    int-to-double v5, v0

    mul-double/2addr v3, v5

    double-to-int v0, v3

    iput v0, v2, Landroid/view/ViewGroup$MarginLayoutParams;->topMargin:I

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->A(Lcom/kwad/components/ad/feed/b/m;)Landroid/view/ViewGroup$MarginLayoutParams;

    move-result-object v0

    iget-wide v2, p1, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->leftMarginRation:D

    int-to-double v4, v1

    mul-double/2addr v2, v4

    double-to-int v1, v2

    iput v1, v0, Landroid/view/ViewGroup$MarginLayoutParams;->leftMargin:I

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->A(Lcom/kwad/components/ad/feed/b/m;)Landroid/view/ViewGroup$MarginLayoutParams;

    move-result-object v0

    iget-wide v1, p1, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->widthRation:D

    mul-double/2addr v4, v1

    double-to-int v1, v4

    iput v1, v0, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->A(Lcom/kwad/components/ad/feed/b/m;)Landroid/view/ViewGroup$MarginLayoutParams;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/b/m;->A(Lcom/kwad/components/ad/feed/b/m;)Landroid/view/ViewGroup$MarginLayoutParams;

    move-result-object v1

    iget v1, v1, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    int-to-double v1, v1

    iget-wide v3, p1, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->heightWidthRation:D

    mul-double/2addr v1, v3

    double-to-int v1, v1

    iput v1, v0, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->z(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/widget/KSRelativeLayout;

    move-result-object v0

    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;->borderRadius:I

    int-to-float p1, p1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/KSRelativeLayout;->setRadius(F)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->z(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/widget/KSRelativeLayout;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->A(Lcom/kwad/components/ad/feed/b/m;)Landroid/view/ViewGroup$MarginLayoutParams;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/widget/KSRelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->B(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    move-result-object p1

    instance-of p1, p1, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->B(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    invoke-virtual {p1}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoSoundValue()I

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->B(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v0

    goto :goto_0

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->C(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    :goto_0
    invoke-static {p1, v0}, Lcom/kwad/components/ad/feed/b/m;->b(Lcom/kwad/components/ad/feed/b/m;Z)Z

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->D(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->E(Lcom/kwad/components/ad/feed/b/m;)Z

    move-result v0

    iput-boolean v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsAudioEnable:Z

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->F(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bd(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/util/List;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/ad/feed/b/m;Ljava/util/List;)Ljava/util/List;

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->y(Lcom/kwad/components/ad/feed/b/m;)Z

    move-result p1

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->B(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V

    return-void

    :cond_3
    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->b(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/m;->b(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$22;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->E(Lcom/kwad/components/ad/feed/b/m;)Z

    move-result v1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/feed/b/m;->c(Lcom/kwad/components/ad/feed/b/m;Z)Z

    move-result v0

    const/4 v1, 0x0

    invoke-interface {p1, v0, v1}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->setAudioEnabled(ZZ)V

    :cond_4
    return-void
.end method
