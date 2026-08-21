.class public Lcom/sigmob/sdk/base/views/x;
.super Landroid/widget/RelativeLayout;


# instance fields
.field private a:Landroid/widget/ImageView;

.field private b:I


# direct methods
.method public constructor <init>(Landroid/content/Context;I)V
    .locals 2

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/high16 p2, 0x41f00000    # 30.0f

    invoke-static {p2, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/base/views/x;->b:I

    div-int/lit8 p1, p1, 0x2

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/x;->a(I)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    iget p2, p0, Lcom/sigmob/sdk/base/views/x;->b:I

    invoke-direct {p1, p2, p2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget p2, p0, Lcom/sigmob/sdk/base/views/x;->b:I

    div-int/lit8 p2, p2, 0x2

    const-string v0, "#ffffff"

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    new-instance v1, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v1}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    invoke-virtual {v1, v0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    int-to-float p2, p2

    invoke-virtual {v1, p2}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    const/16 p2, 0x66

    invoke-virtual {v1, p2}, Landroid/graphics/drawable/GradientDrawable;->setAlpha(I)V

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/base/views/x;->setBackground(Landroid/graphics/drawable/Drawable;)V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/x;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/views/x;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/x;->a:Landroid/widget/ImageView;

    return-object p0
.end method

.method private a(I)V
    .locals 2

    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/x;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/x;->a:Landroid/widget/ImageView;

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, p1, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 p1, 0xd

    invoke-virtual {v0, p1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/x;->a:Landroid/widget/ImageView;

    sget-object v1, Lcom/sigmob/sdk/base/views/o;->e:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/x;->a:Landroid/widget/ImageView;

    sget-object v1, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/x;->a:Landroid/widget/ImageView;

    const/16 v1, 0xcc

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setImageAlpha(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/x;->a:Landroid/widget/ImageView;

    invoke-virtual {p0, p1, v0}, Lcom/sigmob/sdk/base/views/x;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getImageLoader()Lcom/czhj/volley/toolbox/ImageLoader;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v1, Lcom/sigmob/sdk/base/views/x$1;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/base/views/x$1;-><init>(Lcom/sigmob/sdk/base/views/x;Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/czhj/volley/toolbox/ImageLoader;->get(Ljava/lang/String;Lcom/czhj/volley/toolbox/ImageLoader$ImageListener;)Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    :cond_0
    return-void
.end method


# virtual methods
.method public a(Landroid/graphics/Bitmap;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/x;->a:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndcardCloseImage()I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/x;->a:Landroid/widget/ImageView;

    sget-object v0, Lcom/sigmob/sdk/base/views/o;->e:Lcom/sigmob/sdk/base/views/o;

    goto :goto_0

    :cond_0
    new-instance p1, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {p1}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/x;->setBackground(Landroid/graphics/drawable/Drawable;)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    iget v0, p0, Lcom/sigmob/sdk/base/views/x;->b:I

    invoke-direct {p1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v0, 0xd

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/x;->a:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/x;->a:Landroid/widget/ImageView;

    sget-object v0, Lcom/sigmob/sdk/base/views/o;->d:Lcom/sigmob/sdk/base/views/o;

    :goto_0
    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 2

    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "http://"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "https://"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v1, "file://"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/x;->a:Landroid/widget/ImageView;

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v1}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setImageURI(Landroid/net/Uri;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    :goto_0
    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/x;->b(Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method
