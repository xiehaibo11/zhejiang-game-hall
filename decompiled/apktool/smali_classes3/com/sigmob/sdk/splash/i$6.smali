.class Lcom/sigmob/sdk/splash/i$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/toolbox/ImageLoader$ImageListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/splash/i;->g(Landroid/content/Context;)Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/widget/ImageView;

.field final synthetic b:Lcom/sigmob/sdk/splash/i;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/i;Landroid/widget/ImageView;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i$6;->b:Lcom/sigmob/sdk/splash/i;

    iput-object p2, p0, Lcom/sigmob/sdk/splash/i$6;->a:Landroid/widget/ImageView;

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

    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$6;->a:Landroid/widget/ImageView;

    invoke-virtual {p1}, Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
