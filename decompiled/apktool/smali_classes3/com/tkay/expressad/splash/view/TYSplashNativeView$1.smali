.class final Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c()V
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

    .line 190
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 2

    if-eqz p1, :cond_5

    .line 194
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_5

    .line 195
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result p2

    .line 196
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    const/4 v1, 0x4

    if-ge p2, v0, :cond_0

    .line 200
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->a(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Z

    .line 201
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->b(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Landroid/widget/RelativeLayout;

    move-result-object p2

    invoke-virtual {p2, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 202
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object p2

    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 203
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto/16 :goto_1

    .line 206
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->d(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)I

    move-result p2

    const/4 v0, 0x1

    if-ne p2, v0, :cond_2

    .line 207
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->b(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Landroid/widget/RelativeLayout;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p2, v0}, Landroid/widget/RelativeLayout;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_5

    .line 211
    :try_start_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    const/high16 v0, 0x41200000    # 10.0f

    invoke-static {p2, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p2

    invoke-static {p1, p2}, Lcom/tkay/expressad/foundation/h/n;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 212
    invoke-virtual {p2}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_1

    .line 213
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->e(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object v0

    sget-object v1, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 214
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->e(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 217
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 218
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->e(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catchall_1
    move-exception p2

    .line 221
    :try_start_3
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 224
    :cond_1
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Landroid/widget/TextView;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->f(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 225
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->h(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_5

    .line 229
    :try_start_4
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/n;->b(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p2

    if-eqz p2, :cond_3

    .line 230
    invoke-virtual {p2}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_3

    .line 231
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object v0

    sget-object v1, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 232
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_1

    .line 235
    :catchall_2
    :try_start_5
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    goto :goto_1

    :catchall_3
    move-exception p2

    .line 238
    :try_start_6
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    goto :goto_1

    .line 242
    :cond_2
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->b(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Landroid/widget/RelativeLayout;

    move-result-object p2

    invoke-virtual {p2, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 243
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object p2

    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 244
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_5

    .line 249
    :cond_3
    :goto_1
    :try_start_7
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/n;->b(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p2

    if-eqz p2, :cond_4

    .line 250
    invoke-virtual {p2}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_4

    .line 251
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->i(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object v0

    sget-object v1, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 252
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->i(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_4

    :cond_4
    return-void

    .line 255
    :catchall_4
    :try_start_8
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_5

    goto :goto_2

    :catchall_5
    move-exception p1

    .line 259
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_5
    :goto_2
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
