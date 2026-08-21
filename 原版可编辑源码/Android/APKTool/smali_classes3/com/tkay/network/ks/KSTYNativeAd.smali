.class public Lcom/tkay/network/ks/KSTYNativeAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# instance fields
.field a:Landroid/content/Context;

.field b:Lcom/kwad/sdk/api/KsNativeAd;

.field c:Landroid/view/View;

.field d:J

.field e:Landroid/widget/FrameLayout;

.field f:Z

.field g:I

.field h:J


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/api/KsNativeAd;Z)V
    .locals 6

    .line 49
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    const-wide/16 v0, 0x0

    .line 43
    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->d:J

    const/4 v2, 0x0

    .line 47
    iput v2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->g:I

    .line 142
    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->h:J

    .line 50
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->a:Landroid/content/Context;

    .line 51
    iput-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    .line 52
    iput-boolean p3, p0, Lcom/tkay/network/ks/KSTYNativeAd;->f:Z

    .line 1059
    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getAppName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setTitle(Ljava/lang/String;)V

    .line 1060
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getAppIconUrl()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setIconImageUrl(Ljava/lang/String;)V

    .line 1061
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getAdSource()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setAdFrom(Ljava/lang/String;)V

    .line 1062
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getAppScore()F

    move-result p2

    float-to-double p2, p2

    invoke-static {p2, p3}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setStarRating(Ljava/lang/Double;)V

    .line 1063
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getAdDescription()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setDescriptionText(Ljava/lang/String;)V

    .line 1064
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2, v2}, Lcom/kwad/sdk/api/KsNativeAd;->getAdSourceLogoUrl(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setAdChoiceIconUrl(Ljava/lang/String;)V

    .line 1067
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getInteractionType()I

    move-result p2

    const/4 p3, 0x1

    if-ne p2, p3, :cond_0

    move p2, p3

    goto :goto_0

    :cond_0
    move p2, v2

    .line 1070
    :goto_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getInteractionType()I

    move-result v0

    const/4 v1, 0x3

    const/4 v3, 0x2

    if-ne v0, v3, :cond_1

    move p2, v1

    .line 1073
    :cond_1
    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setNativeInteractionType(I)V

    .line 1075
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    .line 1076
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getImageList()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 1077
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v4

    if-lez v4, :cond_3

    .line 1078
    :goto_1
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v4

    if-ge v2, v4, :cond_3

    .line 1079
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/kwad/sdk/api/KsImage;

    if-eqz v4, :cond_2

    .line 1081
    invoke-interface {v4}, Lcom/kwad/sdk/api/KsImage;->getImageUrl()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p2, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    if-nez v2, :cond_2

    .line 1084
    invoke-interface {v4}, Lcom/kwad/sdk/api/KsImage;->getImageUrl()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v5}, Lcom/tkay/network/ks/KSTYNativeAd;->setMainImageUrl(Ljava/lang/String;)V

    .line 1085
    invoke-interface {v4}, Lcom/kwad/sdk/api/KsImage;->getWidth()I

    move-result v5

    invoke-virtual {p0, v5}, Lcom/tkay/network/ks/KSTYNativeAd;->setMainImageWidth(I)V

    .line 1086
    invoke-interface {v4}, Lcom/kwad/sdk/api/KsImage;->getHeight()I

    move-result v4

    invoke-virtual {p0, v4}, Lcom/tkay/network/ks/KSTYNativeAd;->setMainImageHeight(I)V

    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 1091
    :cond_3
    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setImageUrlList(Ljava/util/List;)V

    .line 1092
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getActionDescription()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setCallToActionText(Ljava/lang/String;)V

    .line 1093
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getVideoDuration()I

    move-result p2

    int-to-double v4, p2

    invoke-virtual {p0, v4, v5}, Lcom/tkay/network/ks/KSTYNativeAd;->setVideoDuration(D)V

    .line 1094
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getVideoUrl()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setVideoUrl(Ljava/lang/String;)V

    .line 1095
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getVideoWidth()I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setVideoWidth(I)V

    .line 1096
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getVideoHeight()I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setVideoHeight(I)V

    .line 1098
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getAppPackageSize()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/tkay/network/ks/KSTYNativeAd;->d:J

    .line 1100
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getInteractionType()I

    move-result p2

    if-ne p2, p3, :cond_4

    .line 1101
    new-instance p2, Lcom/tkay/network/ks/KSATDownloadAppInfo;

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-direct {p2, v0}, Lcom/tkay/network/ks/KSATDownloadAppInfo;-><init>(Lcom/kwad/sdk/api/KsNativeAd;)V

    invoke-virtual {p0, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->setAdAppInfo(Lcom/tkay/core/api/TYAdAppInfo;)V

    .line 1104
    :cond_4
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getMaterialType()I

    move-result p2

    if-ne p2, p3, :cond_5

    const-string p2, "1"

    .line 1105
    iput-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mAdSourceType:Ljava/lang/String;

    goto :goto_2

    .line 1106
    :cond_5
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getMaterialType()I

    move-result p2

    if-eq p2, v1, :cond_6

    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getMaterialType()I

    move-result p2

    if-ne p2, v3, :cond_7

    :cond_6
    const-string p2, "2"

    .line 1107
    iput-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mAdSourceType:Ljava/lang/String;

    .line 55
    :cond_7
    :goto_2
    new-instance p2, Landroid/widget/FrameLayout;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {p2, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->e:Landroid/widget/FrameLayout;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method private a()V
    .locals 8

    .line 59
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getAppName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setTitle(Ljava/lang/String;)V

    .line 60
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getAppIconUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setIconImageUrl(Ljava/lang/String;)V

    .line 61
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getAdSource()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setAdFrom(Ljava/lang/String;)V

    .line 62
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getAppScore()F

    move-result v0

    float-to-double v0, v0

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setStarRating(Ljava/lang/Double;)V

    .line 63
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getAdDescription()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setDescriptionText(Ljava/lang/String;)V

    .line 64
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsNativeAd;->getAdSourceLogoUrl(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setAdChoiceIconUrl(Ljava/lang/String;)V

    .line 67
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getInteractionType()I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v1

    .line 70
    :goto_0
    iget-object v3, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v3}, Lcom/kwad/sdk/api/KsNativeAd;->getInteractionType()I

    move-result v3

    const/4 v4, 0x3

    const/4 v5, 0x2

    if-ne v3, v5, :cond_1

    move v0, v4

    .line 73
    :cond_1
    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setNativeInteractionType(I)V

    .line 75
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 76
    iget-object v3, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v3}, Lcom/kwad/sdk/api/KsNativeAd;->getImageList()Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_3

    .line 77
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v6

    if-lez v6, :cond_3

    .line 78
    :goto_1
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v6

    if-ge v1, v6, :cond_3

    .line 79
    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/kwad/sdk/api/KsImage;

    if-eqz v6, :cond_2

    .line 81
    invoke-interface {v6}, Lcom/kwad/sdk/api/KsImage;->getImageUrl()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v7}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    if-nez v1, :cond_2

    .line 84
    invoke-interface {v6}, Lcom/kwad/sdk/api/KsImage;->getImageUrl()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p0, v7}, Lcom/tkay/network/ks/KSTYNativeAd;->setMainImageUrl(Ljava/lang/String;)V

    .line 85
    invoke-interface {v6}, Lcom/kwad/sdk/api/KsImage;->getWidth()I

    move-result v7

    invoke-virtual {p0, v7}, Lcom/tkay/network/ks/KSTYNativeAd;->setMainImageWidth(I)V

    .line 86
    invoke-interface {v6}, Lcom/kwad/sdk/api/KsImage;->getHeight()I

    move-result v6

    invoke-virtual {p0, v6}, Lcom/tkay/network/ks/KSTYNativeAd;->setMainImageHeight(I)V

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 91
    :cond_3
    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setImageUrlList(Ljava/util/List;)V

    .line 92
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getActionDescription()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setCallToActionText(Ljava/lang/String;)V

    .line 93
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getVideoDuration()I

    move-result v0

    int-to-double v0, v0

    invoke-virtual {p0, v0, v1}, Lcom/tkay/network/ks/KSTYNativeAd;->setVideoDuration(D)V

    .line 94
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getVideoUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setVideoUrl(Ljava/lang/String;)V

    .line 95
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getVideoWidth()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setVideoWidth(I)V

    .line 96
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getVideoHeight()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setVideoHeight(I)V

    .line 98
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getAppPackageSize()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->d:J

    .line 100
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getInteractionType()I

    move-result v0

    if-ne v0, v2, :cond_4

    .line 101
    new-instance v0, Lcom/tkay/network/ks/KSATDownloadAppInfo;

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-direct {v0, v1}, Lcom/tkay/network/ks/KSATDownloadAppInfo;-><init>(Lcom/kwad/sdk/api/KsNativeAd;)V

    invoke-virtual {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->setAdAppInfo(Lcom/tkay/core/api/TYAdAppInfo;)V

    .line 104
    :cond_4
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getMaterialType()I

    move-result v0

    if-ne v0, v2, :cond_5

    const-string v0, "1"

    .line 105
    iput-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mAdSourceType:Ljava/lang/String;

    return-void

    .line 106
    :cond_5
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getMaterialType()I

    move-result v0

    if-eq v0, v4, :cond_6

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd;->getMaterialType()I

    move-result v0

    if-ne v0, v5, :cond_7

    :cond_6
    const-string v0, "2"

    .line 107
    iput-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mAdSourceType:Ljava/lang/String;

    :cond_7
    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 288
    :cond_0
    instance-of v0, p1, Landroid/view/ViewGroup;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->c:Landroid/view/View;

    if-eq p1, v0, :cond_2

    .line 289
    check-cast p1, Landroid/view/ViewGroup;

    .line 290
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v0

    if-ge v1, v0, :cond_1

    .line 291
    invoke-virtual {p1, v1}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    .line 292
    invoke-direct {p0, v0}, Lcom/tkay/network/ks/KSTYNativeAd;->a(Landroid/view/View;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void

    :cond_2
    const/4 v0, 0x0

    .line 295
    invoke-virtual {p1, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 296
    invoke-virtual {p1, v1}, Landroid/view/View;->setClickable(Z)V

    return-void
.end method

.method private a(Landroid/view/ViewGroup;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/ViewGroup;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    .line 145
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    new-instance v1, Lcom/tkay/network/ks/KSTYNativeAd$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/ks/KSTYNativeAd$1;-><init>(Lcom/tkay/network/ks/KSTYNativeAd;)V

    invoke-interface {v0, p1, p2, v1}, Lcom/kwad/sdk/api/KsNativeAd;->registerViewForInteraction(Landroid/view/ViewGroup;Ljava/util/List;Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;)V

    .line 174
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    new-instance v0, Lcom/tkay/network/ks/KSTYNativeAd$2;

    invoke-direct {v0, p0}, Lcom/tkay/network/ks/KSTYNativeAd$2;-><init>(Lcom/tkay/network/ks/KSTYNativeAd;)V

    invoke-interface {p2, v0}, Lcom/kwad/sdk/api/KsNativeAd;->setDownloadListener(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    .line 218
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    new-instance v0, Lcom/tkay/network/ks/KSTYNativeAd$3;

    invoke-direct {v0, p0}, Lcom/tkay/network/ks/KSTYNativeAd$3;-><init>(Lcom/tkay/network/ks/KSTYNativeAd;)V

    invoke-interface {p2, v0}, Lcom/kwad/sdk/api/KsNativeAd;->setVideoPlayListener(Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;)V

    .line 251
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getMaterialType()I

    move-result p2

    const/4 v0, 0x1

    if-ne p2, v0, :cond_2

    .line 252
    new-instance p2, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;

    invoke-direct {p2}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;-><init>()V

    .line 253
    iget-boolean v1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->f:Z

    invoke-virtual {p2, v1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;->videoSoundEnable(Z)Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;

    .line 254
    iget v1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->g:I

    if-lez v1, :cond_1

    if-eq v1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 255
    :goto_0
    invoke-virtual {p2, v0}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;->videoSoundEnable(Z)Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;

    .line 258
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p2}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;->build()Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsNativeAd;->getVideoView(Landroid/content/Context;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->c:Landroid/view/View;

    if-eqz p1, :cond_2

    .line 259
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->e:Landroid/widget/FrameLayout;

    if-eqz p2, :cond_2

    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_2

    .line 260
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->e:Landroid/widget/FrameLayout;

    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->c:Landroid/view/View;

    invoke-virtual {p1, p2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    :cond_2
    return-void
.end method

.method private a(Ljava/util/List;Landroid/view/View;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/View;",
            ")V"
        }
    .end annotation

    .line 113
    instance-of v0, p2, Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->c:Landroid/view/View;

    if-eq p2, v0, :cond_1

    .line 114
    check-cast p2, Landroid/view/ViewGroup;

    const/4 v0, 0x0

    .line 115
    :goto_0
    invoke-virtual {p2}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 116
    invoke-virtual {p2, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    .line 117
    invoke-direct {p0, p1, v1}, Lcom/tkay/network/ks/KSTYNativeAd;->a(Ljava/util/List;Landroid/view/View;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void

    .line 120
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->c:Landroid/view/View;

    if-eq p2, v0, :cond_2

    .line 121
    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_2
    return-void
.end method

.method static synthetic b(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 0

    .line 281
    invoke-direct {p0, p1}, Lcom/tkay/network/ks/KSTYNativeAd;->a(Landroid/view/View;)V

    return-void
.end method

.method public destroy()V
    .locals 2

    .line 302
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 303
    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsNativeAd;->setDownloadListener(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    .line 305
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v0, v1, v1, v1}, Lcom/kwad/sdk/api/KsNativeAd;->registerViewForInteraction(Landroid/view/ViewGroup;Ljava/util/List;Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 310
    :catch_0
    :cond_0
    iput-object v1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->a:Landroid/content/Context;

    .line 311
    iput-object v1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->e:Landroid/widget/FrameLayout;

    return-void
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 1

    .line 267
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsNativeAd;->getMaterialType()I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 268
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->e:Landroid/widget/FrameLayout;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 2

    .line 129
    invoke-virtual {p2}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getClickViewList()Ljava/util/List;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 132
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_1

    .line 135
    :cond_0
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    .line 136
    invoke-direct {p0, p2, p1}, Lcom/tkay/network/ks/KSTYNativeAd;->a(Ljava/util/List;Landroid/view/View;)V

    .line 139
    :cond_1
    check-cast p1, Landroid/view/ViewGroup;

    .line 1145
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    new-instance v1, Lcom/tkay/network/ks/KSTYNativeAd$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/ks/KSTYNativeAd$1;-><init>(Lcom/tkay/network/ks/KSTYNativeAd;)V

    invoke-interface {v0, p1, p2, v1}, Lcom/kwad/sdk/api/KsNativeAd;->registerViewForInteraction(Landroid/view/ViewGroup;Ljava/util/List;Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;)V

    .line 1174
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    new-instance v0, Lcom/tkay/network/ks/KSTYNativeAd$2;

    invoke-direct {v0, p0}, Lcom/tkay/network/ks/KSTYNativeAd$2;-><init>(Lcom/tkay/network/ks/KSTYNativeAd;)V

    invoke-interface {p2, v0}, Lcom/kwad/sdk/api/KsNativeAd;->setDownloadListener(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    .line 1218
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    new-instance v0, Lcom/tkay/network/ks/KSTYNativeAd$3;

    invoke-direct {v0, p0}, Lcom/tkay/network/ks/KSTYNativeAd$3;-><init>(Lcom/tkay/network/ks/KSTYNativeAd;)V

    invoke-interface {p2, v0}, Lcom/kwad/sdk/api/KsNativeAd;->setVideoPlayListener(Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;)V

    .line 1251
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsNativeAd;->getMaterialType()I

    move-result p2

    const/4 v0, 0x1

    if-ne p2, v0, :cond_4

    .line 1252
    new-instance p2, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;

    invoke-direct {p2}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;-><init>()V

    .line 1253
    iget-boolean v1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->f:Z

    invoke-virtual {p2, v1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;->videoSoundEnable(Z)Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;

    .line 1254
    iget v1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->g:I

    if-lez v1, :cond_3

    if-eq v1, v0, :cond_2

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    .line 1255
    :goto_0
    invoke-virtual {p2, v0}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;->videoSoundEnable(Z)Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;

    .line 1258
    :cond_3
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd;->b:Lcom/kwad/sdk/api/KsNativeAd;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p2}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;->build()Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsNativeAd;->getVideoView(Landroid/content/Context;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->c:Landroid/view/View;

    if-eqz p1, :cond_4

    .line 1259
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->e:Landroid/widget/FrameLayout;

    if-eqz p2, :cond_4

    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_4

    .line 1260
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->e:Landroid/widget/FrameLayout;

    iget-object p2, p0, Lcom/tkay/network/ks/KSTYNativeAd;->c:Landroid/view/View;

    invoke-virtual {p1, p2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    :cond_4
    return-void
.end method

.method public setVideoMute(Z)V
    .locals 0

    .line 275
    invoke-super {p0, p1}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->setVideoMute(Z)V

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x2

    .line 276
    :goto_0
    iput p1, p0, Lcom/tkay/network/ks/KSTYNativeAd;->g:I

    return-void
.end method
