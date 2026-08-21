.class Lcom/czhj/volley/toolbox/ImageLoader$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/toolbox/ImageLoader$ImageListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/volley/toolbox/ImageLoader;->getImageListener(Landroid/widget/ImageView;II)Lcom/czhj/volley/toolbox/ImageLoader$ImageListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Landroid/widget/ImageView;

.field final synthetic c:I


# direct methods
.method constructor <init>(ILandroid/widget/ImageView;I)V
    .locals 0

    iput p1, p0, Lcom/czhj/volley/toolbox/ImageLoader$1;->a:I

    iput-object p2, p0, Lcom/czhj/volley/toolbox/ImageLoader$1;->b:Landroid/widget/ImageView;

    iput p3, p0, Lcom/czhj/volley/toolbox/ImageLoader$1;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onErrorResponse(Lcom/czhj/volley/VolleyError;)V
    .locals 1

    iget p1, p0, Lcom/czhj/volley/toolbox/ImageLoader$1;->a:I

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/toolbox/ImageLoader$1;->b:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setImageResource(I)V

    :cond_0
    return-void
.end method

.method public onResponse(Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;Z)V
    .locals 0

    invoke-virtual {p1}, Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object p2

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/czhj/volley/toolbox/ImageLoader$1;->b:Landroid/widget/ImageView;

    invoke-virtual {p1}, Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto :goto_0

    :cond_0
    iget p1, p0, Lcom/czhj/volley/toolbox/ImageLoader$1;->c:I

    if-eqz p1, :cond_1

    iget-object p2, p0, Lcom/czhj/volley/toolbox/ImageLoader$1;->b:Landroid/widget/ImageView;

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageResource(I)V

    :cond_1
    :goto_0
    return-void
.end method
