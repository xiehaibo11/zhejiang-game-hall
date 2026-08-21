.class public Lcom/tkay/expressad/widget/TYImageView;
.super Landroid/widget/ImageView;


# static fields
.field private static final a:Ljava/lang/String; = "at-widget-imageview"


# instance fields
.field private b:Landroid/graphics/Bitmap;

.field private c:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 20
    invoke-direct {p0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 16
    iput-object p1, p0, Lcom/tkay/expressad/widget/TYImageView;->b:Landroid/graphics/Bitmap;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 24
    invoke-direct {p0, p1, p2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 16
    iput-object p1, p0, Lcom/tkay/expressad/widget/TYImageView;->b:Landroid/graphics/Bitmap;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 28
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    .line 16
    iput-object p1, p0, Lcom/tkay/expressad/widget/TYImageView;->b:Landroid/graphics/Bitmap;

    return-void
.end method

.method private a()V
    .locals 3

    .line 50
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/TYImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 51
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/TYImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/widget/TYImageView;->c:Ljava/lang/String;

    new-instance v2, Lcom/tkay/expressad/widget/TYImageView$1;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/widget/TYImageView$1;-><init>(Lcom/tkay/expressad/widget/TYImageView;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_0
    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 2

    .line 38
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/widget/TYImageView;->b:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/widget/TYImageView;->b:Landroid/graphics/Bitmap;

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1050
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/TYImageView;->getContext()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 1051
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/TYImageView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/widget/TYImageView;->c:Ljava/lang/String;

    new-instance v1, Lcom/tkay/expressad/widget/TYImageView$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/widget/TYImageView$1;-><init>(Lcom/tkay/expressad/widget/TYImageView;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_0
    return-void

    .line 41
    :cond_1
    invoke-super {p0, p1}, Landroid/widget/ImageView;->onDraw(Landroid/graphics/Canvas;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public setImageBitmap(Landroid/graphics/Bitmap;)V
    .locals 1

    .line 65
    iput-object p1, p0, Lcom/tkay/expressad/widget/TYImageView;->b:Landroid/graphics/Bitmap;

    if-eqz p1, :cond_0

    .line 67
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    .line 70
    iput-object p1, p0, Lcom/tkay/expressad/widget/TYImageView;->b:Landroid/graphics/Bitmap;

    .line 71
    invoke-super {p0, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void

    .line 74
    :cond_0
    invoke-super {p0, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void
.end method

.method public setImageUrl(Ljava/lang/String;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/tkay/expressad/widget/TYImageView;->c:Ljava/lang/String;

    return-void
.end method
