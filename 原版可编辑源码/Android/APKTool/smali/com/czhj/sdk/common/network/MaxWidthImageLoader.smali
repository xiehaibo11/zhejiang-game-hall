.class Lcom/czhj/sdk/common/network/MaxWidthImageLoader;
.super Lcom/czhj/volley/toolbox/ImageLoader;


# instance fields
.field private final a:I


# direct methods
.method constructor <init>(Lcom/czhj/volley/RequestQueue;Landroid/content/Context;Lcom/czhj/volley/toolbox/ImageLoader$ImageCache;)V
    .locals 0

    invoke-direct {p0, p1, p3}, Lcom/czhj/volley/toolbox/ImageLoader;-><init>(Lcom/czhj/volley/RequestQueue;Lcom/czhj/volley/toolbox/ImageLoader$ImageCache;)V

    const-string p1, "window"

    invoke-virtual {p2, p1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/view/WindowManager;

    if-nez p1, :cond_0

    const/16 p1, 0x140

    :goto_0
    iput p1, p0, Lcom/czhj/sdk/common/network/MaxWidthImageLoader;->a:I

    return-void

    :cond_0
    invoke-interface {p1}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p1

    new-instance p2, Landroid/graphics/Point;

    invoke-direct {p2}, Landroid/graphics/Point;-><init>()V

    invoke-virtual {p1, p2}, Landroid/view/Display;->getSize(Landroid/graphics/Point;)V

    iget p1, p2, Landroid/graphics/Point;->x:I

    iget p2, p2, Landroid/graphics/Point;->y:I

    invoke-static {p1, p2}, Ljava/lang/Math;->min(II)I

    move-result p1

    goto :goto_0
.end method


# virtual methods
.method public get(Ljava/lang/String;Lcom/czhj/volley/toolbox/ImageLoader$ImageListener;)Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;
    .locals 2

    iget v0, p0, Lcom/czhj/sdk/common/network/MaxWidthImageLoader;->a:I

    const/4 v1, 0x0

    invoke-super {p0, p1, p2, v0, v1}, Lcom/czhj/volley/toolbox/ImageLoader;->get(Ljava/lang/String;Lcom/czhj/volley/toolbox/ImageLoader$ImageListener;II)Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    move-result-object p1

    return-object p1
.end method
