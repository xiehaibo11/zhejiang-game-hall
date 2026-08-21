.class public Lcom/sigmob/sdk/splash/e;
.super Lcom/sigmob/sdk/splash/d;


# instance fields
.field b:Lcom/sigmob/sdk/base/views/r;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 3

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/d;-><init>(Landroid/content/Context;)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    new-instance v2, Lcom/sigmob/sdk/base/views/r;

    invoke-direct {v2, p1}, Lcom/sigmob/sdk/base/views/r;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/sigmob/sdk/splash/e;->b:Lcom/sigmob/sdk/base/views/r;

    sget-object p1, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v2, p1}, Lcom/sigmob/sdk/base/views/r;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/splash/e;->setBackgroundColor(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/e;->b:Lcom/sigmob/sdk/base/views/r;

    invoke-virtual {p0, p1, v0}, Lcom/sigmob/sdk/splash/e;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method


# virtual methods
.method public bridge synthetic a()V
    .locals 0

    invoke-super {p0}, Lcom/sigmob/sdk/splash/d;->a()V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 8

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSplashFilePath()Ljava/lang/String;

    move-result-object v0

    const-string v1, "git"

    const-string v2, "jpeg"

    const-string v3, "jpg"

    const-string v4, "png"

    const-string v5, "bmp"

    const-string v6, "webp"

    const-string v7, "tif"

    filled-new-array/range {v1 .. v7}, [Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ImageTypeUtil;->getFileType(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_0

    return v4

    :cond_0
    const-string v3, "gif"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v5, 0x1

    const-string v6, "com.sigmob.action.interstitial.show"

    if-eqz v3, :cond_1

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->readBytes(Ljava/lang/String;)[B

    move-result-object v1

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->readBytes(Ljava/lang/String;)[B

    move-result-object v0

    array-length v0, v0

    invoke-static {v1, v4, v0}, Landroid/graphics/Movie;->decodeByteArray([BII)Landroid/graphics/Movie;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/splash/e;->b:Lcom/sigmob/sdk/base/views/r;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/views/r;->setMovie(Landroid/graphics/Movie;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/splash/e;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, v6}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return v5

    :cond_1
    invoke-interface {v1, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-static {v0}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/splash/e;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1, v6}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/e;->b:Lcom/sigmob/sdk/base/views/r;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/r;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return v5

    :cond_2
    return v4
.end method

.method public bridge synthetic b()V
    .locals 0

    invoke-super {p0}, Lcom/sigmob/sdk/splash/d;->b()V

    return-void
.end method

.method public bridge synthetic c()V
    .locals 0

    invoke-super {p0}, Lcom/sigmob/sdk/splash/d;->c()V

    return-void
.end method

.method public bridge synthetic getDuration()I
    .locals 1

    invoke-super {p0}, Lcom/sigmob/sdk/splash/d;->getDuration()I

    move-result v0

    return v0
.end method
