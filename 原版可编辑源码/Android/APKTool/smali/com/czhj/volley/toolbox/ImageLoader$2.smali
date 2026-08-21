.class Lcom/czhj/volley/toolbox/ImageLoader$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/Response$Listener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/volley/toolbox/ImageLoader;->makeImageRequest(Ljava/lang/String;IILandroid/widget/ImageView$ScaleType;Ljava/lang/String;)Lcom/czhj/volley/Request;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/czhj/volley/Response$Listener<",
        "Landroid/graphics/Bitmap;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/czhj/volley/toolbox/ImageLoader;


# direct methods
.method constructor <init>(Lcom/czhj/volley/toolbox/ImageLoader;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/volley/toolbox/ImageLoader$2;->b:Lcom/czhj/volley/toolbox/ImageLoader;

    iput-object p2, p0, Lcom/czhj/volley/toolbox/ImageLoader$2;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onResponse(Landroid/graphics/Bitmap;)V
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/toolbox/ImageLoader$2;->b:Lcom/czhj/volley/toolbox/ImageLoader;

    iget-object v1, p0, Lcom/czhj/volley/toolbox/ImageLoader$2;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Lcom/czhj/volley/toolbox/ImageLoader;->onGetImageSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V

    return-void
.end method

.method public bridge synthetic onResponse(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Landroid/graphics/Bitmap;

    invoke-virtual {p0, p1}, Lcom/czhj/volley/toolbox/ImageLoader$2;->onResponse(Landroid/graphics/Bitmap;)V

    return-void
.end method
