.class Lcom/czhj/volley/toolbox/NetworkImageView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/toolbox/ImageLoader$ImageListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/volley/toolbox/NetworkImageView;->a(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/czhj/volley/toolbox/NetworkImageView;


# direct methods
.method constructor <init>(Lcom/czhj/volley/toolbox/NetworkImageView;Z)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/volley/toolbox/NetworkImageView$1;->b:Lcom/czhj/volley/toolbox/NetworkImageView;

    iput-boolean p2, p0, Lcom/czhj/volley/toolbox/NetworkImageView$1;->a:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onErrorResponse(Lcom/czhj/volley/VolleyError;)V
    .locals 1

    iget-object p1, p0, Lcom/czhj/volley/toolbox/NetworkImageView$1;->b:Lcom/czhj/volley/toolbox/NetworkImageView;

    invoke-static {p1}, Lcom/czhj/volley/toolbox/NetworkImageView;->a(Lcom/czhj/volley/toolbox/NetworkImageView;)I

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/czhj/volley/toolbox/NetworkImageView$1;->b:Lcom/czhj/volley/toolbox/NetworkImageView;

    invoke-static {p1}, Lcom/czhj/volley/toolbox/NetworkImageView;->a(Lcom/czhj/volley/toolbox/NetworkImageView;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/czhj/volley/toolbox/NetworkImageView;->setImageResource(I)V

    :cond_0
    return-void
.end method

.method public onResponse(Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;Z)V
    .locals 1

    if-eqz p2, :cond_0

    iget-boolean p2, p0, Lcom/czhj/volley/toolbox/NetworkImageView$1;->a:Z

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/czhj/volley/toolbox/NetworkImageView$1;->b:Lcom/czhj/volley/toolbox/NetworkImageView;

    new-instance v0, Lcom/czhj/volley/toolbox/NetworkImageView$1$1;

    invoke-direct {v0, p0, p1}, Lcom/czhj/volley/toolbox/NetworkImageView$1$1;-><init>(Lcom/czhj/volley/toolbox/NetworkImageView$1;Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;)V

    invoke-virtual {p2, v0}, Lcom/czhj/volley/toolbox/NetworkImageView;->post(Ljava/lang/Runnable;)Z

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/czhj/volley/toolbox/NetworkImageView$1;->b:Lcom/czhj/volley/toolbox/NetworkImageView;

    invoke-virtual {p1}, Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/czhj/volley/toolbox/NetworkImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/czhj/volley/toolbox/NetworkImageView$1;->b:Lcom/czhj/volley/toolbox/NetworkImageView;

    invoke-static {p1}, Lcom/czhj/volley/toolbox/NetworkImageView;->b(Lcom/czhj/volley/toolbox/NetworkImageView;)I

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/czhj/volley/toolbox/NetworkImageView$1;->b:Lcom/czhj/volley/toolbox/NetworkImageView;

    invoke-static {p1}, Lcom/czhj/volley/toolbox/NetworkImageView;->b(Lcom/czhj/volley/toolbox/NetworkImageView;)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/czhj/volley/toolbox/NetworkImageView;->setImageResource(I)V

    :cond_2
    :goto_0
    return-void
.end method
