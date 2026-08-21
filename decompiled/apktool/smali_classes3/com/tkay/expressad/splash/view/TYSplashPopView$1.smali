.class final Lcom/tkay/expressad/splash/view/TYSplashPopView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/view/TYSplashPopView;->a(Ljava/lang/String;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/tkay/expressad/splash/view/TYSplashPopView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;Z)V
    .locals 0

    .line 478
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$1;->b:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    iput-boolean p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$1;->a:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 1

    .line 482
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_2

    .line 484
    iget-boolean p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$1;->a:Z

    if-eqz p2, :cond_0

    .line 485
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/n;->a(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p2

    goto :goto_0

    :cond_0
    const/16 p2, 0x10

    .line 487
    invoke-static {p1, p2}, Lcom/tkay/expressad/foundation/h/n;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object p2

    .line 489
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$1;->b:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    invoke-static {v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a(Lcom/tkay/expressad/splash/view/TYSplashPopView;)Landroid/widget/ImageView;

    move-result-object v0

    if-nez p2, :cond_1

    goto :goto_1

    :cond_1
    move-object p1, p2

    :goto_1
    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception p1

    .line 492
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
