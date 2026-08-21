.class Lcom/sigmob/sdk/nativead/w$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/sdk/common/utils/ImageManager$BitmapLoadedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/w;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/natives/WindNativeAdData;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/w;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/w;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/w$1;->a:Lcom/sigmob/sdk/nativead/w;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onBitmapLoadFailed()V
    .locals 0

    return-void
.end method

.method public onBitmapLoaded(Landroid/graphics/Bitmap;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$1;->a:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0, p1}, Lcom/sigmob/sdk/nativead/w;->a(Lcom/sigmob/sdk/nativead/w;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    return-void
.end method
