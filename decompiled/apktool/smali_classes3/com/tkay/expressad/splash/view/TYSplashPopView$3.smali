.class final Lcom/tkay/expressad/splash/view/TYSplashPopView$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/view/TYSplashPopView;->b(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/view/TYSplashPopView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V
    .locals 0

    .line 524
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$3;->a:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 0

    .line 528
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_0

    const/16 p2, 0x10

    .line 529
    invoke-static {p1, p2}, Lcom/tkay/expressad/foundation/h/n;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 530
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$3;->a:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    invoke-static {p2}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->b(Lcom/tkay/expressad/splash/view/TYSplashPopView;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 533
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
