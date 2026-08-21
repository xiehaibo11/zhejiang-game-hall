.class public final Lcom/tkay/core/common/f/a/e;
.super Lcom/tkay/core/api/BaseAd;

# interfaces
.implements Lcom/tkay/core/common/f/a/a;
.implements Ljava/io/Serializable;


# instance fields
.field private a:I

.field private b:I

.field private c:I

.field private d:I

.field private e:I

.field private f:Lcom/tkay/core/api/BaseAd;

.field private g:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/tkay/core/api/BaseAd;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/core/api/BaseAd;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 33
    invoke-direct {p0}, Lcom/tkay/core/api/BaseAd;-><init>()V

    const/4 v0, 0x1

    .line 23
    iput v0, p0, Lcom/tkay/core/common/f/a/e;->a:I

    const/4 v1, 0x5

    .line 24
    iput v1, p0, Lcom/tkay/core/common/f/a/e;->b:I

    .line 25
    iput v0, p0, Lcom/tkay/core/common/f/a/e;->c:I

    .line 28
    iput v1, p0, Lcom/tkay/core/common/f/a/e;->e:I

    .line 34
    iput-object p1, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    .line 35
    iput-object p2, p0, Lcom/tkay/core/common/f/a/e;->g:Ljava/util/Map;

    const-string p1, "orientation"

    .line 1040
    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 1042
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/core/common/f/a/e;->a:I

    :cond_0
    const-string p1, "countdown"

    .line 1045
    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1047
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/core/common/f/a/e;->b:I

    :cond_1
    const-string p1, "allows_skip"

    .line 1050
    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 1052
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/core/common/f/a/e;->c:I

    :cond_2
    const-string p1, "button_type"

    .line 1055
    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 1057
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/core/common/f/a/e;->d:I

    :cond_3
    const-string p1, "s_c_t"

    .line 1060
    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 1062
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/core/common/f/a/e;->e:I

    :cond_4
    return-void
.end method

.method private a(Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "orientation"

    .line 40
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 42
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/f/a/e;->a:I

    :cond_0
    const-string v0, "countdown"

    .line 45
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 47
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/f/a/e;->b:I

    :cond_1
    const-string v0, "allows_skip"

    .line 50
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 52
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/f/a/e;->c:I

    :cond_2
    const-string v0, "button_type"

    .line 55
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 57
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/f/a/e;->d:I

    :cond_3
    const-string v0, "s_c_t"

    .line 60
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 62
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/core/common/f/a/e;->e:I

    :cond_4
    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 68
    iget v0, p0, Lcom/tkay/core/common/f/a/e;->a:I

    return v0
.end method

.method public final b()J
    .locals 2

    .line 73
    iget v0, p0, Lcom/tkay/core/common/f/a/e;->b:I

    int-to-long v0, v0

    return-wide v0
.end method

.method public final c()I
    .locals 3

    .line 79
    iget v0, p0, Lcom/tkay/core/common/f/a/e;->c:I

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    return v1

    :cond_0
    if-nez v0, :cond_1

    return v2

    :cond_1
    return v1
.end method

.method public final d()I
    .locals 3

    .line 89
    iget v0, p0, Lcom/tkay/core/common/f/a/e;->d:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v2, 0x2

    if-eq v0, v2, :cond_0

    return v2

    :cond_0
    return v1

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public final destroy()V
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->destroy()V

    return-void
.end method

.method public final e()I
    .locals 1

    .line 102
    iget v0, p0, Lcom/tkay/core/common/f/a/e;->e:I

    return v0
.end method

.method public final f()I
    .locals 2

    .line 110
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 111
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v0

    const/16 v1, 0x8

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 114
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->g:Ljava/util/Map;

    const-string v1, "video_muted"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 116
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "0"

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x0

    :goto_1
    return v0
.end method

.method public final getAdAppInfo()Lcom/tkay/core/api/TYAdAppInfo;
    .locals 1

    .line 221
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAdAppInfo()Lcom/tkay/core/api/TYAdAppInfo;

    move-result-object v0

    return-object v0
.end method

.method public final getAdChoiceIconUrl()Ljava/lang/String;
    .locals 1

    .line 201
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAdChoiceIconUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getAdFrom()Ljava/lang/String;
    .locals 1

    .line 206
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAdFrom()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getAdIconView()Landroid/view/View;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final getAdLogo()Landroid/graphics/Bitmap;
    .locals 1

    .line 231
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAdLogo()Landroid/graphics/Bitmap;

    move-result-object v0

    return-object v0
.end method

.method public final getAdLogoView()Landroid/view/View;
    .locals 1

    .line 211
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAdLogoView()Landroid/view/View;

    move-result-object v0

    return-object v0
.end method

.method public final varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 1

    .line 226
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0, p1}, Lcom/tkay/core/api/BaseAd;->getAdMediaView([Ljava/lang/Object;)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method

.method public final getAdType()Ljava/lang/String;
    .locals 1

    .line 306
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAdType()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getAdvertiserInfoOperate()Lcom/tkay/core/api/ITYAdvertiserInfoOperate;
    .locals 1

    .line 341
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAdvertiserInfoOperate()Lcom/tkay/core/api/ITYAdvertiserInfoOperate;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public final getAdvertiserName()Ljava/lang/String;
    .locals 1

    .line 281
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAdvertiserName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getAppCommentNum()I
    .locals 1

    .line 276
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAppCommentNum()I

    move-result v0

    return v0
.end method

.method public final getAppDownloadButton()Landroid/view/View;
    .locals 1

    .line 146
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAppDownloadButton()Landroid/view/View;

    move-result-object v0

    return-object v0
.end method

.method public final getAppPrice()D
    .locals 2

    .line 271
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAppPrice()D

    move-result-wide v0

    return-wide v0
.end method

.method public final getCallToActionText()Ljava/lang/String;
    .locals 1

    .line 186
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getCallToActionText()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getCustomAdContainer()Landroid/view/ViewGroup;
    .locals 1

    .line 236
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getCustomAdContainer()Landroid/view/ViewGroup;

    move-result-object v0

    return-object v0
.end method

.method public final getDescriptionText()Ljava/lang/String;
    .locals 1

    .line 171
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getDescriptionText()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getDetail()Lcom/tkay/core/common/f/d;
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v0

    return-object v0
.end method

.method public final getDomain()Ljava/lang/String;
    .locals 1

    .line 321
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getDomain()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final getIconImageUrl()Ljava/lang/String;
    .locals 1

    .line 181
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getIconImageUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getImageUrlList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 216
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getImageUrlList()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public final getMainImageHeight()I
    .locals 1

    .line 241
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getMainImageHeight()I

    move-result v0

    return v0
.end method

.method public final getMainImageUrl()Ljava/lang/String;
    .locals 1

    .line 176
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getMainImageUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getMainImageWidth()I
    .locals 1

    .line 246
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getMainImageWidth()I

    move-result v0

    return v0
.end method

.method public final getNativeAdInteractionType()I
    .locals 1

    .line 291
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getNativeAdInteractionType()I

    move-result v0

    return v0
.end method

.method public final getNativeCustomVideo()Lcom/tkay/core/api/TYCustomVideo;
    .locals 1

    .line 311
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getNativeCustomVideo()Lcom/tkay/core/api/TYCustomVideo;

    move-result-object v0

    return-object v0
.end method

.method public final getNativeExpressHeight()I
    .locals 1

    .line 256
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getNativeExpressHeight()I

    move-result v0

    return v0
.end method

.method public final getNativeExpressWidth()I
    .locals 1

    .line 251
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getNativeExpressWidth()I

    move-result v0

    return v0
.end method

.method public final getNativeType()I
    .locals 1

    .line 286
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getNativeType()I

    move-result v0

    return v0
.end method

.method public final getNetworkInfoMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 141
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public final getShakeView(IILcom/tkay/core/api/ATShakeViewListener;)Landroid/view/View;
    .locals 1

    .line 331
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/core/api/BaseAd;->getShakeView(IILcom/tkay/core/api/ATShakeViewListener;)Landroid/view/View;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final getStarRating()Ljava/lang/Double;
    .locals 1

    .line 191
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getStarRating()Ljava/lang/Double;

    move-result-object v0

    return-object v0
.end method

.method public final getTitle()Ljava/lang/String;
    .locals 1

    .line 166
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getTitle()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getVideoDuration()D
    .locals 2

    .line 296
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getVideoDuration()D

    move-result-wide v0

    return-wide v0
.end method

.method public final getVideoHeight()I
    .locals 1

    .line 266
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getVideoHeight()I

    move-result v0

    return v0
.end method

.method public final getVideoProgress()D
    .locals 2

    .line 301
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getVideoProgress()D

    move-result-wide v0

    return-wide v0
.end method

.method public final getVideoUrl()Ljava/lang/String;
    .locals 1

    .line 196
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getVideoUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getVideoWidth()I
    .locals 1

    .line 261
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getVideoWidth()I

    move-result v0

    return v0
.end method

.method public final getWarning()Ljava/lang/String;
    .locals 1

    .line 326
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getWarning()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final registerListener(Landroid/view/View;Ljava/util/List;Landroid/widget/FrameLayout$LayoutParams;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Landroid/widget/FrameLayout$LayoutParams;",
            ")V"
        }
    .end annotation

    .line 316
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/core/api/BaseAd;->registerListener(Landroid/view/View;Ljava/util/List;Landroid/widget/FrameLayout$LayoutParams;)V

    return-void
.end method

.method public final setNativeEventListener(Lcom/tkay/core/common/b/k;)V
    .locals 1

    .line 156
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0, p1}, Lcom/tkay/core/api/BaseAd;->setNativeEventListener(Lcom/tkay/core/common/b/k;)V

    return-void
.end method

.method public final setNetworkInfoMap(Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 136
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0, p1}, Lcom/tkay/core/api/BaseAd;->setNetworkInfoMap(Ljava/util/Map;)V

    return-void
.end method

.method public final setTrackingInfo(Lcom/tkay/core/common/f/d;)V
    .locals 1

    .line 126
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0, p1}, Lcom/tkay/core/api/BaseAd;->setTrackingInfo(Lcom/tkay/core/common/f/d;)V

    return-void
.end method

.method public final setVideoMute(Z)V
    .locals 1

    .line 336
    iget-object v0, p0, Lcom/tkay/core/common/f/a/e;->f:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0, p1}, Lcom/tkay/core/api/BaseAd;->setVideoMute(Z)V

    return-void
.end method
