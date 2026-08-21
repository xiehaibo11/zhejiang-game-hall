.class public Lcom/tkay/expressad/video/module/a/a/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# static fields
.field protected static final b:Ljava/lang/String; = "ImageLoaderListener"


# instance fields
.field private a:Lcom/tkay/expressad/foundation/d/c;

.field protected c:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/widget/ImageView;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/widget/ImageView;)V
    .locals 1

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 23
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/a/a/e;->c:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public constructor <init>(Landroid/widget/ImageView;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V
    .locals 1

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/a/a/e;->c:Ljava/lang/ref/WeakReference;

    .line 27
    iput-object p2, p0, Lcom/tkay/expressad/video/module/a/a/e;->a:Lcom/tkay/expressad/foundation/d/c;

    .line 28
    iput-object p3, p0, Lcom/tkay/expressad/video/module/a/a/e;->d:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    .line 38
    :cond_0
    :try_start_0
    iget-object p2, p0, Lcom/tkay/expressad/video/module/a/a/e;->c:Ljava/lang/ref/WeakReference;

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/tkay/expressad/video/module/a/a/e;->c:Ljava/lang/ref/WeakReference;

    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 39
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_1

    .line 40
    iget-object p2, p0, Lcom/tkay/expressad/video/module/a/a/e;->c:Ljava/lang/ref/WeakReference;

    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/widget/ImageView;

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 41
    iget-object p1, p0, Lcom/tkay/expressad/video/module/a/a/e;->c:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-void

    :catchall_0
    move-exception p1

    .line 46
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_2

    .line 47
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
