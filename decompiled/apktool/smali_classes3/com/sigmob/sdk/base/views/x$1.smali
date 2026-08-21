.class Lcom/sigmob/sdk/base/views/x$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/toolbox/ImageLoader$ImageListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/views/x;->b(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/sigmob/sdk/base/views/x;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/x;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/x$1;->b:Lcom/sigmob/sdk/base/views/x;

    iput-object p2, p0, Lcom/sigmob/sdk/base/views/x$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onErrorResponse(Lcom/czhj/volley/VolleyError;)V
    .locals 1

    const-string v0, "Failed to load image."

    invoke-static {v0, p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;Ljava/lang/Throwable;)V

    return-void
.end method

.method public onResponse(Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;Z)V
    .locals 1

    invoke-virtual {p1}, Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p2, p0, Lcom/sigmob/sdk/base/views/x$1;->b:Lcom/sigmob/sdk/base/views/x;

    invoke-static {p2}, Lcom/sigmob/sdk/base/views/x;->a(Lcom/sigmob/sdk/base/views/x;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    const/4 p2, 0x0

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/x$1;->a:Ljava/lang/String;

    aput-object v0, p1, p2

    const-string p2, "%s returned null bitmap"

    invoke-static {p2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :goto_0
    return-void
.end method
