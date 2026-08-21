.class Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;
.super Ljava/lang/Object;
.source "SplashViewUtils.java"


# static fields
.field private static viewUtils:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;


# instance fields
.field private bitmap:Landroid/graphics/Bitmap;

.field private height:I

.field private ret_img:Landroid/widget/ImageView;

.field private width:I


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;)Landroid/widget/ImageView;
    .locals 0

    .line 16
    iget-object p0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->ret_img:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;)Landroid/graphics/Bitmap;
    .locals 0

    .line 16
    iget-object p0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->bitmap:Landroid/graphics/Bitmap;

    return-object p0
.end method

.method static synthetic access$102(Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;
    .locals 0

    .line 16
    iput-object p1, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->bitmap:Landroid/graphics/Bitmap;

    return-object p1
.end method

.method private calculateInSampleSize(Landroid/graphics/BitmapFactory$Options;Landroid/graphics/Bitmap;)I
    .locals 3

    .line 60
    iget p2, p1, Landroid/graphics/BitmapFactory$Options;->outWidth:I

    .line 61
    iget p1, p1, Landroid/graphics/BitmapFactory$Options;->outHeight:I

    .line 62
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "height111111111=="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "width=="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymnsdk111"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 64
    iget v0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->height:I

    const/4 v1, 0x1

    if-gt p1, v0, :cond_0

    iget v0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->width:I

    if-le p2, v0, :cond_1

    .line 65
    :cond_0
    div-int/lit8 p1, p1, 0x2

    .line 66
    div-int/lit8 p2, p2, 0x2

    .line 68
    :goto_0
    div-int v0, p2, v1

    iget v2, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->height:I

    if-lt v0, v2, :cond_1

    div-int v0, p1, v1

    iget v2, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->width:I

    if-lt v0, v2, :cond_1

    mul-int/lit8 v1, v1, 0x2

    goto :goto_0

    :cond_1
    return v1
.end method

.method private getBitmap(Landroid/app/Activity;Ljava/lang/String;)Landroid/graphics/Bitmap;
    .locals 3

    .line 51
    new-instance v0, Landroid/graphics/BitmapFactory$Options;

    invoke-direct {v0}, Landroid/graphics/BitmapFactory$Options;-><init>()V

    const/4 v1, 0x1

    .line 52
    iput-boolean v1, v0, Landroid/graphics/BitmapFactory$Options;->inJustDecodeBounds:Z

    .line 53
    invoke-virtual {p1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-direct {p0, p1, p2}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v2

    invoke-static {v1, v2, v0}, Landroid/graphics/BitmapFactory;->decodeResource(Landroid/content/res/Resources;ILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;

    move-result-object v1

    .line 54
    invoke-direct {p0, v0, v1}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->calculateInSampleSize(Landroid/graphics/BitmapFactory$Options;Landroid/graphics/Bitmap;)I

    move-result v1

    iput v1, v0, Landroid/graphics/BitmapFactory$Options;->inSampleSize:I

    const/4 v1, 0x0

    .line 55
    iput-boolean v1, v0, Landroid/graphics/BitmapFactory$Options;->inJustDecodeBounds:Z

    .line 56
    invoke-virtual {p1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-direct {p0, p1, p2}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-static {v1, p1, v0}, Landroid/graphics/BitmapFactory;->decodeResource(Landroid/content/res/Resources;ILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;

    move-result-object p1

    return-object p1
.end method

.method private getId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 2

    const-string v0, "\\."

    .line 107
    invoke-virtual {p2, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x2

    .line 108
    aget-object v0, p2, v0

    const/4 v1, 0x1

    aget-object p2, p2, v1

    invoke-direct {p0, p1, v0, p2}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->getId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method private getId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    .line 113
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p2, p3, p1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 115
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method

.method public static getInstance()Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;
    .locals 2

    .line 21
    sget-object v0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->viewUtils:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    if-nez v0, :cond_1

    .line 22
    const-class v0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    monitor-enter v0

    .line 23
    :try_start_0
    sget-object v1, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->viewUtils:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    if-nez v1, :cond_0

    .line 24
    new-instance v1, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    invoke-direct {v1}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->viewUtils:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    .line 26
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 28
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->viewUtils:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    return-object v0
.end method

.method private getScreenSize(Landroid/app/Activity;)V
    .locals 1

    .line 76
    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    .line 77
    invoke-virtual {p1}, Landroid/app/Activity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object p1

    invoke-interface {p1}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 78
    iget p1, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iput p1, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->width:I

    .line 79
    iget p1, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    iput p1, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->height:I

    return-void
.end method


# virtual methods
.method public removeView(Landroid/app/Activity;)V
    .locals 1

    .line 87
    :try_start_0
    new-instance v0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils$1;-><init>(Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;)V

    invoke-virtual {p1, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 102
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public showSplashView(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 2

    .line 36
    :try_start_0
    new-instance v0, Landroid/widget/ImageView;

    invoke-direct {v0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->ret_img:Landroid/widget/ImageView;

    .line 38
    invoke-direct {p0, p1}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->getScreenSize(Landroid/app/Activity;)V

    .line 39
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->getBitmap(Landroid/app/Activity;Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->bitmap:Landroid/graphics/Bitmap;

    .line 40
    iget-object v0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->ret_img:Landroid/widget/ImageView;

    invoke-virtual {v0, p2}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 41
    iget-object p2, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->ret_img:Landroid/widget/ImageView;

    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 42
    iget-object p2, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->ret_img:Landroid/widget/ImageView;

    new-instance v0, Landroid/view/WindowManager$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/view/WindowManager$LayoutParams;-><init>(II)V

    invoke-virtual {p1, p2, v0}, Landroid/app/Activity;->addContentView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 46
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
