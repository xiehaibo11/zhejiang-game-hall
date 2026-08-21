.class public Lcom/kwad/sdk/core/imageloader/ImageLoadFactory;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static create()Lcom/kwad/sdk/core/imageloader/IImageLoader;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/imageloader/ImageLoadImpl;

    invoke-direct {v0}, Lcom/kwad/sdk/core/imageloader/ImageLoadImpl;-><init>()V

    return-object v0
.end method
