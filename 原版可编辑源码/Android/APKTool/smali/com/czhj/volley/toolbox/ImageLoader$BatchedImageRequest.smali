.class Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/volley/toolbox/ImageLoader;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "BatchedImageRequest"
.end annotation


# instance fields
.field private final a:Lcom/czhj/volley/Request;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/volley/Request<",
            "*>;"
        }
    .end annotation
.end field

.field private final b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;",
            ">;"
        }
    .end annotation
.end field

.field private c:Landroid/graphics/Bitmap;

.field private d:Lcom/czhj/volley/VolleyError;


# direct methods
.method public constructor <init>(Lcom/czhj/volley/Request;Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;",
            ")V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;->b:Ljava/util/List;

    iput-object p1, p0, Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;->a:Lcom/czhj/volley/Request;

    invoke-interface {v0, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method static synthetic a(Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;
    .locals 0

    iput-object p1, p0, Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;->c:Landroid/graphics/Bitmap;

    return-object p1
.end method

.method static synthetic a(Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;->b:Ljava/util/List;

    return-object p0
.end method

.method static synthetic b(Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;)Landroid/graphics/Bitmap;
    .locals 0

    iget-object p0, p0, Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;->c:Landroid/graphics/Bitmap;

    return-object p0
.end method


# virtual methods
.method public addContainer(Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;)V
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;->b:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public getError()Lcom/czhj/volley/VolleyError;
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;->d:Lcom/czhj/volley/VolleyError;

    return-object v0
.end method

.method public removeContainerAndCancelIfNecessary(Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;)Z
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;->b:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    iget-object p1, p0, Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;->b:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;->a:Lcom/czhj/volley/Request;

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->cancel()V

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public setError(Lcom/czhj/volley/VolleyError;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/volley/toolbox/ImageLoader$BatchedImageRequest;->d:Lcom/czhj/volley/VolleyError;

    return-void
.end method
