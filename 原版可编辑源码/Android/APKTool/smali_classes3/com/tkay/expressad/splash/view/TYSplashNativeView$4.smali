.class final Lcom/tkay/expressad/splash/view/TYSplashNativeView$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/view/TYSplashNativeView;->d()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V
    .locals 0

    .line 274
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$4;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 1

    if-eqz p1, :cond_1

    .line 278
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez p2, :cond_1

    .line 280
    :try_start_1
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$4;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->j(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 281
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    const/high16 v0, 0x42200000    # 40.0f

    invoke-static {p2, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p2

    invoke-static {p1, p2}, Lcom/tkay/expressad/foundation/h/n;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 282
    invoke-virtual {p2}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_0

    .line 283
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$4;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->j(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p2

    .line 287
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 288
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$4;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->j(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catchall_1
    move-exception p1

    .line 292
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 298
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$4;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->j(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object p1

    const/4 p2, 0x4

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setVisibility(I)V

    return-void
.end method
