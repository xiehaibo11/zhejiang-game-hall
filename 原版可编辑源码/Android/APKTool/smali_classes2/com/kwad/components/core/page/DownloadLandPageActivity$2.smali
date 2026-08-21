.class final Lcom/kwad/components/core/page/DownloadLandPageActivity$2;
.super Lcom/kwad/sdk/core/imageloader/core/listener/SimpleImageLoadingListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/page/DownloadLandPageActivity;->loadBlurImage(Ljava/lang/String;Landroid/widget/ImageView;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic MH:Lcom/kwad/components/core/page/DownloadLandPageActivity;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/DownloadLandPageActivity;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity$2;->MH:Lcom/kwad/components/core/page/DownloadLandPageActivity;

    invoke-direct {p0}, Lcom/kwad/sdk/core/imageloader/core/listener/SimpleImageLoadingListener;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDecode(Ljava/lang/String;Ljava/io/InputStream;Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;)Z
    .locals 1

    invoke-static {p2}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object p1

    const/16 p2, 0x32

    const/4 v0, 0x0

    invoke-static {p1, p2, v0}, Lcom/kwad/sdk/core/imageloader/utils/BlurUtils;->stackBlur(Landroid/graphics/Bitmap;IZ)Landroid/graphics/Bitmap;

    move-result-object p1

    iput-object p1, p3, Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;->mBitmap:Landroid/graphics/Bitmap;

    const/4 p1, 0x1

    return p1
.end method
