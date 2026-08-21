.class public Lcom/sigmob/sdk/base/views/i;
.super Lcom/sigmob/sdk/base/views/e;


# instance fields
.field private a:F

.field private b:I

.field private c:I

.field private d:I

.field private e:I

.field private f:Landroid/graphics/Paint;

.field private g:Landroid/graphics/Paint;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/base/views/i;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/base/views/i;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/e;-><init>(Landroid/content/Context;)V

    const/high16 p2, 0x42200000    # 40.0f

    iput p2, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/i;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p2

    invoke-direct {p0, p2}, Lcom/sigmob/sdk/base/views/i;->a(Landroid/webkit/WebSettings;)V

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/i;->a(Landroid/content/Context;)V

    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 2

    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/i;->f:Landroid/graphics/Paint;

    const/4 v0, -0x1

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setColor(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/i;->f:Landroid/graphics/Paint;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/i;->f:Landroid/graphics/Paint;

    new-instance v0, Landroid/graphics/PorterDuffXfermode;

    sget-object v1, Landroid/graphics/PorterDuff$Mode;->DST_OUT:Landroid/graphics/PorterDuff$Mode;

    invoke-direct {v0, v1}, Landroid/graphics/PorterDuffXfermode;-><init>(Landroid/graphics/PorterDuff$Mode;)V

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/i;->g:Landroid/graphics/Paint;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    return-void
.end method

.method private a(Landroid/graphics/Canvas;)V
    .locals 9

    new-instance v0, Landroid/graphics/Path;

    invoke-direct {v0}, Landroid/graphics/Path;-><init>()V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    int-to-float v1, v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->moveTo(FF)V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    int-to-float v1, v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    int-to-float v2, v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->lineTo(FF)V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    int-to-float v2, v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->lineTo(FF)V

    new-instance v1, Landroid/graphics/RectF;

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    int-to-float v3, v2

    iget v4, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    int-to-float v5, v4

    int-to-float v2, v2

    iget v6, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    const/high16 v7, 0x40000000    # 2.0f

    mul-float v8, v6, v7

    add-float/2addr v2, v8

    int-to-float v4, v4

    mul-float/2addr v6, v7

    add-float/2addr v4, v6

    invoke-direct {v1, v3, v5, v2, v4}, Landroid/graphics/RectF;-><init>(FFFF)V

    const/high16 v2, -0x3d4c0000    # -90.0f

    invoke-virtual {v0, v1, v2, v2}, Landroid/graphics/Path;->arcTo(Landroid/graphics/RectF;FF)V

    invoke-virtual {v0}, Landroid/graphics/Path;->close()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/i;->f:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    return-void
.end method

.method private a(Landroid/webkit/WebSettings;)V
    .locals 5

    const/4 v0, 0x2

    const/4 v1, 0x1

    :try_start_0
    new-instance v2, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    new-instance v3, Ljava/lang/String;

    const-string v4, "c2V0SmF2YVNjcmlwdEVuYWJsZWQ="

    invoke-static {v4, v0}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/lang/String;-><init>([B)V

    invoke-direct {v2, p1, v3}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    sget-object v3, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    :try_start_1
    new-instance v2, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    new-instance v3, Ljava/lang/String;

    const-string v4, "c2V0QWxsb3dGaWxlQWNjZXNz"

    invoke-static {v4, v0}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/lang/String;-><init>([B)V

    invoke-direct {v2, p1, v3}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    sget-object v3, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v2

    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    const-string v2, "UTF-8"

    invoke-virtual {p1, v2}, Landroid/webkit/WebSettings;->setDefaultTextEncodingName(Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    sget-object v0, Landroid/webkit/WebSettings$PluginState;->ON:Landroid/webkit/WebSettings$PluginState;

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setBlockNetworkImage(Z)V

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setBlockNetworkLoads(Z)V

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x11

    if-lt v2, v3, :cond_0

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setMediaPlaybackRequiresUserGesture(Z)V

    :cond_0
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setLoadsImagesAutomatically(Z)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setAllowContentAccess(Z)V

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-ge v1, v2, :cond_1

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V

    :cond_1
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1a

    if-lt v1, v2, :cond_2

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setSafeBrowsingEnabled(Z)V

    :cond_2
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-lt v1, v2, :cond_3

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setMixedContentMode(I)V

    :cond_3
    return-void
.end method

.method private b(Landroid/graphics/Canvas;)V
    .locals 9

    new-instance v0, Landroid/graphics/Path;

    invoke-direct {v0}, Landroid/graphics/Path;-><init>()V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->b:I

    add-int/2addr v1, v2

    int-to-float v1, v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    int-to-float v2, v2

    iget v3, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    add-float/2addr v2, v3

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->moveTo(FF)V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->b:I

    add-int/2addr v1, v2

    int-to-float v1, v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    int-to-float v2, v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->lineTo(FF)V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->b:I

    add-int/2addr v1, v2

    int-to-float v1, v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    sub-float/2addr v1, v2

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    int-to-float v2, v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->lineTo(FF)V

    new-instance v1, Landroid/graphics/RectF;

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    iget v3, p0, Lcom/sigmob/sdk/base/views/i;->b:I

    add-int v4, v2, v3

    int-to-float v4, v4

    iget v5, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    const/high16 v6, 0x40000000    # 2.0f

    mul-float v7, v5, v6

    sub-float/2addr v4, v7

    iget v7, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    int-to-float v8, v7

    add-int/2addr v2, v3

    int-to-float v2, v2

    int-to-float v3, v7

    mul-float/2addr v5, v6

    add-float/2addr v3, v5

    invoke-direct {v1, v4, v8, v2, v3}, Landroid/graphics/RectF;-><init>(FFFF)V

    const/high16 v2, -0x3d4c0000    # -90.0f

    const/high16 v3, 0x42b40000    # 90.0f

    invoke-virtual {v0, v1, v2, v3}, Landroid/graphics/Path;->arcTo(Landroid/graphics/RectF;FF)V

    invoke-virtual {v0}, Landroid/graphics/Path;->close()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/i;->f:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    return-void
.end method

.method private c(Landroid/graphics/Canvas;)V
    .locals 10

    new-instance v0, Landroid/graphics/Path;

    invoke-direct {v0}, Landroid/graphics/Path;-><init>()V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    int-to-float v1, v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    iget v3, p0, Lcom/sigmob/sdk/base/views/i;->c:I

    add-int/2addr v2, v3

    int-to-float v2, v2

    iget v3, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    sub-float/2addr v2, v3

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->moveTo(FF)V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    int-to-float v1, v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    iget v3, p0, Lcom/sigmob/sdk/base/views/i;->c:I

    add-int/2addr v2, v3

    int-to-float v2, v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->lineTo(FF)V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    int-to-float v1, v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    add-float/2addr v1, v2

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    iget v3, p0, Lcom/sigmob/sdk/base/views/i;->c:I

    add-int/2addr v2, v3

    int-to-float v2, v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->lineTo(FF)V

    new-instance v1, Landroid/graphics/RectF;

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    int-to-float v3, v2

    iget v4, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    iget v5, p0, Lcom/sigmob/sdk/base/views/i;->c:I

    add-int v6, v4, v5

    int-to-float v6, v6

    iget v7, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    const/high16 v8, 0x40000000    # 2.0f

    mul-float v9, v7, v8

    sub-float/2addr v6, v9

    int-to-float v2, v2

    mul-float/2addr v7, v8

    add-float/2addr v2, v7

    add-int/2addr v4, v5

    int-to-float v4, v4

    invoke-direct {v1, v3, v6, v2, v4}, Landroid/graphics/RectF;-><init>(FFFF)V

    const/high16 v2, 0x42b40000    # 90.0f

    invoke-virtual {v0, v1, v2, v2}, Landroid/graphics/Path;->arcTo(Landroid/graphics/RectF;FF)V

    invoke-virtual {v0}, Landroid/graphics/Path;->close()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/i;->f:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    return-void
.end method

.method private d(Landroid/graphics/Canvas;)V
    .locals 10

    new-instance v0, Landroid/graphics/Path;

    invoke-direct {v0}, Landroid/graphics/Path;-><init>()V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->b:I

    add-int/2addr v1, v2

    int-to-float v1, v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    sub-float/2addr v1, v2

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    iget v3, p0, Lcom/sigmob/sdk/base/views/i;->c:I

    add-int/2addr v2, v3

    int-to-float v2, v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->moveTo(FF)V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->b:I

    add-int/2addr v1, v2

    int-to-float v1, v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    iget v3, p0, Lcom/sigmob/sdk/base/views/i;->c:I

    add-int/2addr v2, v3

    int-to-float v2, v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->lineTo(FF)V

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->b:I

    add-int/2addr v1, v2

    int-to-float v1, v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    iget v3, p0, Lcom/sigmob/sdk/base/views/i;->c:I

    add-int/2addr v2, v3

    int-to-float v2, v2

    iget v3, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    sub-float/2addr v2, v3

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->lineTo(FF)V

    new-instance v1, Landroid/graphics/RectF;

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    iget v3, p0, Lcom/sigmob/sdk/base/views/i;->b:I

    add-int v4, v2, v3

    int-to-float v4, v4

    iget v5, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    const/high16 v6, 0x40000000    # 2.0f

    mul-float v7, v5, v6

    sub-float/2addr v4, v7

    iget v7, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    iget v8, p0, Lcom/sigmob/sdk/base/views/i;->c:I

    add-int v9, v7, v8

    int-to-float v9, v9

    mul-float/2addr v5, v6

    sub-float/2addr v9, v5

    add-int/2addr v2, v3

    int-to-float v2, v2

    add-int/2addr v7, v8

    int-to-float v3, v7

    invoke-direct {v1, v4, v9, v2, v3}, Landroid/graphics/RectF;-><init>(FFFF)V

    const/4 v2, 0x0

    const/high16 v3, 0x42b40000    # 90.0f

    invoke-virtual {v0, v1, v2, v3}, Landroid/graphics/Path;->arcTo(Landroid/graphics/RectF;FF)V

    invoke-virtual {v0}, Landroid/graphics/Path;->close()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/i;->f:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    return-void
.end method


# virtual methods
.method public a(Z)V
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x12

    if-lt v0, v1, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/i;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    sget-object v0, Landroid/webkit/WebSettings$PluginState;->ON:Landroid/webkit/WebSettings$PluginState;

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/i;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    sget-object v0, Landroid/webkit/WebSettings$PluginState;->OFF:Landroid/webkit/WebSettings$PluginState;

    :goto_0
    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    return-void
.end method

.method public draw(Landroid/graphics/Canvas;)V
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/i;->getScrollX()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/i;->getScrollY()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/base/views/i;->e:I

    iget v1, p0, Lcom/sigmob/sdk/base/views/i;->d:I

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->b:I

    add-int/2addr v1, v2

    iget v2, p0, Lcom/sigmob/sdk/base/views/i;->c:I

    add-int/2addr v0, v2

    sget-object v2, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {v1, v0, v2}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v0

    new-instance v1, Landroid/graphics/Canvas;

    invoke-direct {v1, v0}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    invoke-super {p0, v1}, Lcom/sigmob/sdk/base/views/e;->draw(Landroid/graphics/Canvas;)V

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/base/views/i;->a(Landroid/graphics/Canvas;)V

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/base/views/i;->b(Landroid/graphics/Canvas;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/i;->g:Landroid/graphics/Paint;

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v2, v2, v1}, Landroid/graphics/Canvas;->drawBitmap(Landroid/graphics/Bitmap;FFLandroid/graphics/Paint;)V

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->recycle()V

    return-void
.end method

.method protected onMeasure(II)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/base/views/e;->onMeasure(II)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/i;->getMeasuredWidth()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/base/views/i;->b:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/i;->getMeasuredHeight()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/base/views/i;->c:I

    return-void
.end method

.method public setRadius(F)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/views/i;->a:F

    return-void
.end method
