.class final Lcom/tkay/basead/ui/MediaATView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/MediaATView;->init(II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/MediaATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/MediaATView;)V
    .locals 0

    .line 133
    iput-object p1, p0, Lcom/tkay/basead/ui/MediaATView$1;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 168
    sget-object p1, Lcom/tkay/basead/ui/MediaATView;->TAG:Ljava/lang/String;

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "load: image load fail:"

    invoke-virtual {v0, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 136
    iget-object v0, p0, Lcom/tkay/basead/ui/MediaATView$1;->a:Lcom/tkay/basead/ui/MediaATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 137
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView$1;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-static {p1}, Lcom/tkay/basead/ui/MediaATView;->a(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 139
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView$1;->a:Lcom/tkay/basead/ui/MediaATView;

    new-instance v0, Lcom/tkay/basead/ui/MediaATView$1$1;

    invoke-direct {v0, p0, p2}, Lcom/tkay/basead/ui/MediaATView$1$1;-><init>(Lcom/tkay/basead/ui/MediaATView$1;Landroid/graphics/Bitmap;)V

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/MediaATView;->post(Ljava/lang/Runnable;)Z

    .line 160
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView$1;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1, p2}, Lcom/tkay/core/common/l/b;->a(Landroid/content/Context;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 161
    iget-object p2, p0, Lcom/tkay/basead/ui/MediaATView$1;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-static {p2}, Lcom/tkay/basead/ui/MediaATView;->b(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;

    move-result-object p2

    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 162
    iget-object p2, p0, Lcom/tkay/basead/ui/MediaATView$1;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-static {p2}, Lcom/tkay/basead/ui/MediaATView;->b(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
