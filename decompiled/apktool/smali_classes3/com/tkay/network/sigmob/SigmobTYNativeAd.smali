.class public Lcom/tkay/network/sigmob/SigmobTYNativeAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# instance fields
.field a:Landroid/widget/FrameLayout;

.field b:Landroid/widget/ImageView;

.field c:Landroid/widget/ImageView;

.field d:Landroid/widget/ImageView;

.field e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/widget/ImageView;",
            ">;"
        }
    .end annotation
.end field

.field f:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

.field g:Lcom/tkay/nativead/api/TYNativePrepareInfo;

.field private h:Landroid/content/Context;

.field private i:Lcom/sigmob/windad/natives/WindNativeAdData;


# direct methods
.method protected constructor <init>(Landroid/content/Context;Lcom/sigmob/windad/natives/WindNativeAdData;Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)V
    .locals 1

    .line 47
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    const/4 v0, 0x0

    .line 38
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->a:Landroid/widget/FrameLayout;

    .line 39
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->b:Landroid/widget/ImageView;

    .line 40
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->c:Landroid/widget/ImageView;

    .line 41
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->d:Landroid/widget/ImageView;

    .line 43
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->e:Ljava/util/List;

    .line 49
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->h:Landroid/content/Context;

    .line 50
    iput-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    .line 51
    iput-object p3, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->f:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    .line 1057
    invoke-interface {p2}, Lcom/sigmob/windad/natives/WindNativeAdData;->getTitle()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->setTitle(Ljava/lang/String;)V

    .line 1058
    invoke-interface {p2}, Lcom/sigmob/windad/natives/WindNativeAdData;->getDesc()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->setDescriptionText(Ljava/lang/String;)V

    .line 1059
    invoke-interface {p2}, Lcom/sigmob/windad/natives/WindNativeAdData;->getIconUrl()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->setIconImageUrl(Ljava/lang/String;)V

    .line 1060
    invoke-interface {p2}, Lcom/sigmob/windad/natives/WindNativeAdData;->getCTAText()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->setCallToActionText(Ljava/lang/String;)V

    .line 1062
    invoke-interface {p2}, Lcom/sigmob/windad/natives/WindNativeAdData;->getAdPatternType()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    const-string p1, "1"

    .line 1063
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->mAdSourceType:Ljava/lang/String;

    .line 1064
    new-instance p1, Landroid/widget/FrameLayout;

    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->h:Landroid/content/Context;

    invoke-direct {p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->a:Landroid/widget/FrameLayout;

    return-void

    :cond_0
    const-string p1, "2"

    .line 1066
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->mAdSourceType:Ljava/lang/String;

    .line 1067
    new-instance p1, Landroid/widget/ImageView;

    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->h:Landroid/content/Context;

    invoke-direct {p1, p2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->b:Landroid/widget/ImageView;

    .line 1068
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->e:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    .line 1069
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->e:Ljava/util/List;

    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->b:Landroid/widget/ImageView;

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1071
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    invoke-interface {p1}, Lcom/sigmob/windad/natives/WindNativeAdData;->getAdPatternType()I

    move-result p1

    const/4 p2, 0x3

    if-ne p1, p2, :cond_1

    .line 1072
    new-instance p1, Landroid/widget/ImageView;

    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->h:Landroid/content/Context;

    invoke-direct {p1, p2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->c:Landroid/widget/ImageView;

    .line 1073
    new-instance p1, Landroid/widget/ImageView;

    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->h:Landroid/content/Context;

    invoke-direct {p1, p2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->d:Landroid/widget/ImageView;

    .line 1075
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->e:Ljava/util/List;

    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->c:Landroid/widget/ImageView;

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1076
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->e:Ljava/util/List;

    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->d:Landroid/widget/ImageView;

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    return-void
.end method

.method private a(Lcom/sigmob/windad/natives/WindNativeAdData;)V
    .locals 1

    .line 57
    invoke-interface {p1}, Lcom/sigmob/windad/natives/WindNativeAdData;->getTitle()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->setTitle(Ljava/lang/String;)V

    .line 58
    invoke-interface {p1}, Lcom/sigmob/windad/natives/WindNativeAdData;->getDesc()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->setDescriptionText(Ljava/lang/String;)V

    .line 59
    invoke-interface {p1}, Lcom/sigmob/windad/natives/WindNativeAdData;->getIconUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->setIconImageUrl(Ljava/lang/String;)V

    .line 60
    invoke-interface {p1}, Lcom/sigmob/windad/natives/WindNativeAdData;->getCTAText()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->setCallToActionText(Ljava/lang/String;)V

    .line 62
    invoke-interface {p1}, Lcom/sigmob/windad/natives/WindNativeAdData;->getAdPatternType()I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    const-string p1, "1"

    .line 63
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->mAdSourceType:Ljava/lang/String;

    .line 64
    new-instance p1, Landroid/widget/FrameLayout;

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->h:Landroid/content/Context;

    invoke-direct {p1, v0}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->a:Landroid/widget/FrameLayout;

    return-void

    :cond_0
    const-string p1, "2"

    .line 66
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->mAdSourceType:Ljava/lang/String;

    .line 67
    new-instance p1, Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->h:Landroid/content/Context;

    invoke-direct {p1, v0}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->b:Landroid/widget/ImageView;

    .line 68
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->e:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    .line 69
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->e:Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->b:Landroid/widget/ImageView;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 71
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    invoke-interface {p1}, Lcom/sigmob/windad/natives/WindNativeAdData;->getAdPatternType()I

    move-result p1

    const/4 v0, 0x3

    if-ne p1, v0, :cond_1

    .line 72
    new-instance p1, Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->h:Landroid/content/Context;

    invoke-direct {p1, v0}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->c:Landroid/widget/ImageView;

    .line 73
    new-instance p1, Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->h:Landroid/content/Context;

    invoke-direct {p1, v0}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->d:Landroid/widget/ImageView;

    .line 75
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->e:Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->c:Landroid/widget/ImageView;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 76
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->e:Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->d:Landroid/widget/ImageView;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    return-void
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 1

    .line 212
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->g:Lcom/tkay/nativead/api/TYNativePrepareInfo;

    if-eqz p1, :cond_1

    .line 213
    invoke-virtual {p1}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getCloseView()Landroid/view/View;

    move-result-object p1

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 215
    invoke-virtual {p1, v0}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    .line 217
    :cond_0
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->g:Lcom/tkay/nativead/api/TYNativePrepareInfo;

    :cond_1
    return-void
.end method

.method public destroy()V
    .locals 1

    .line 246
    invoke-super {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->destroy()V

    .line 247
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    if-eqz v0, :cond_0

    .line 248
    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData;->destroy()V

    :cond_0
    return-void
.end method

.method public getAdLogo()Landroid/graphics/Bitmap;
    .locals 1

    .line 223
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData;->getAdLogo()Landroid/graphics/Bitmap;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 3

    .line 229
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    if-eqz p1, :cond_2

    .line 230
    invoke-interface {p1}, Lcom/sigmob/windad/natives/WindNativeAdData;->getAdPatternType()I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 231
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->a:Landroid/widget/FrameLayout;

    goto :goto_0

    .line 233
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->b:Landroid/widget/ImageView;

    .line 235
    :goto_0
    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    if-nez v0, :cond_1

    .line 237
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    const/4 v2, -0x2

    invoke-direct {v0, v1, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 239
    :cond_1
    invoke-virtual {p1, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_1

    :cond_2
    const/4 p1, 0x0

    :goto_1
    return-object p1
.end method

.method public getNativeImageViewList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Landroid/widget/ImageView;",
            ">;"
        }
    .end annotation

    .line 269
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->e:Ljava/util/List;

    return-object v0
.end method

.method public pauseVideo()V
    .locals 2

    .line 254
    invoke-super {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->pauseVideo()V

    .line 255
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData;->getAdPatternType()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 256
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData;->pauseVideo()V

    :cond_0
    return-void
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 7

    .line 85
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->f:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    if-eqz v0, :cond_0

    .line 86
    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getEcpmInt(Ljava/lang/Object;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->setBidEcpm(I)V

    .line 87
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    if-eqz v0, :cond_7

    .line 88
    iput-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->g:Lcom/tkay/nativead/api/TYNativePrepareInfo;

    .line 89
    invoke-virtual {p2}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getClickViewList()Ljava/util/List;

    move-result-object v0

    .line 92
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    .line 94
    instance-of v1, p2, Lcom/tkay/nativead/api/TYNativePrepareExInfo;

    if-eqz v1, :cond_1

    .line 95
    move-object v1, p2

    check-cast v1, Lcom/tkay/nativead/api/TYNativePrepareExInfo;

    invoke-virtual {v1}, Lcom/tkay/nativead/api/TYNativePrepareExInfo;->getCreativeClickViewList()Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 98
    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    :cond_1
    if-eqz v0, :cond_2

    .line 103
    invoke-virtual {v4, v0}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    :cond_2
    if-eqz v0, :cond_3

    .line 108
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-gtz v1, :cond_4

    .line 109
    :cond_3
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 110
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_4
    move-object v3, v0

    .line 113
    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-nez v0, :cond_5

    .line 114
    invoke-virtual {v4, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 117
    :cond_5
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    invoke-virtual {p2}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getCloseView()Landroid/view/View;

    move-result-object v5

    new-instance v6, Lcom/tkay/network/sigmob/SigmobTYNativeAd$1;

    invoke-direct {v6, p0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd$1;-><init>(Lcom/tkay/network/sigmob/SigmobTYNativeAd;)V

    move-object v2, p1

    invoke-interface/range {v1 .. v6}, Lcom/sigmob/windad/natives/WindNativeAdData;->bindViewForInteraction(Landroid/view/View;Ljava/util/List;Ljava/util/List;Landroid/view/View;Lcom/sigmob/windad/natives/NativeADEventListener;)V

    .line 144
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    invoke-interface {p2}, Lcom/sigmob/windad/natives/WindNativeAdData;->getAdPatternType()I

    move-result p2

    const/4 v0, 0x1

    if-ne p2, v0, :cond_6

    .line 145
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->a:Landroid/widget/FrameLayout;

    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYNativeAd$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd$2;-><init>(Lcom/tkay/network/sigmob/SigmobTYNativeAd;)V

    invoke-interface {p2, v0, v1}, Lcom/sigmob/windad/natives/WindNativeAdData;->bindMediaView(Landroid/view/ViewGroup;Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;)V

    goto :goto_0

    .line 178
    :cond_6
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->e:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {p2, v0, v1}, Lcom/sigmob/windad/natives/WindNativeAdData;->bindImageViews(Ljava/util/List;I)V

    .line 181
    :goto_0
    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p2

    if-eqz p2, :cond_7

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p2

    instance-of p2, p2, Landroid/app/Activity;

    if-eqz p2, :cond_7

    .line 182
    new-instance p2, Lcom/tkay/network/sigmob/SigmobTYNativeAd$3;

    invoke-direct {p2, p0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd$3;-><init>(Lcom/tkay/network/sigmob/SigmobTYNativeAd;)V

    invoke-virtual {p0, p2}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->bindDislikeListener(Landroid/view/View$OnClickListener;)V

    .line 189
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    check-cast p1, Landroid/app/Activity;

    new-instance v0, Lcom/tkay/network/sigmob/SigmobTYNativeAd$4;

    invoke-direct {v0, p0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd$4;-><init>(Lcom/tkay/network/sigmob/SigmobTYNativeAd;)V

    invoke-interface {p2, p1, v0}, Lcom/sigmob/windad/natives/WindNativeAdData;->setDislikeInteractionCallback(Landroid/app/Activity;Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;)V

    :cond_7
    return-void
.end method

.method public resumeVideo()V
    .locals 2

    .line 262
    invoke-super {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->resumeVideo()V

    .line 263
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData;->getAdPatternType()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 264
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->i:Lcom/sigmob/windad/natives/WindNativeAdData;

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData;->resumeVideo()V

    :cond_0
    return-void
.end method
