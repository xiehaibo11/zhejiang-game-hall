.class Lcom/sigmob/sdk/base/views/j$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/toolbox/ImageLoader$ImageListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/views/j;->a(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/views/j;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/j;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/j$5;->a:Lcom/sigmob/sdk/base/views/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onErrorResponse(Lcom/czhj/volley/VolleyError;)V
    .locals 0

    return-void
.end method

.method public onResponse(Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;Z)V
    .locals 0

    invoke-virtual {p1}, Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object p2

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/sigmob/sdk/base/views/j$5;->a:Lcom/sigmob/sdk/base/views/j;

    invoke-static {p2}, Lcom/sigmob/sdk/base/views/j;->c(Lcom/sigmob/sdk/base/views/j;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-virtual {p1}, Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j$5;->a:Lcom/sigmob/sdk/base/views/j;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/j;->c(Lcom/sigmob/sdk/base/views/j;)Landroid/widget/ImageView;

    move-result-object p1

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j$5;->a:Lcom/sigmob/sdk/base/views/j;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/j;->d(Lcom/sigmob/sdk/base/views/j;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j$5;->a:Lcom/sigmob/sdk/base/views/j;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/j;->e(Lcom/sigmob/sdk/base/views/j;)V

    :cond_0
    return-void
.end method
