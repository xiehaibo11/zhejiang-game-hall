.class final Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V
    .locals 0

    .line 265
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 1

    if-eqz p1, :cond_4

    .line 268
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_4

    .line 270
    :try_start_0
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->d(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object p2

    const/4 v0, 0x0

    if-eqz p2, :cond_1

    .line 271
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-boolean p2, p2, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->i:Z

    if-eqz p2, :cond_0

    .line 272
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->d(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 274
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->d(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 276
    :cond_1
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->blurBitmap(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 277
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_3

    .line 278
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object p2

    if-eqz p2, :cond_3

    .line 279
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-boolean p2, p2, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->i:Z

    if-eqz p2, :cond_2

    .line 280
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 282
    :cond_2
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    return-void

    .line 286
    :catchall_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 287
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object p1

    const/4 p2, 0x4

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_4
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
