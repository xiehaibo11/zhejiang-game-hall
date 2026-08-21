.class Lcom/czhj/sdk/common/utils/ImageManager$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/utils/ImageManager;->getBitmap(Ljava/lang/String;Lcom/czhj/sdk/common/utils/ImageManager$BitmapLoadedListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/czhj/sdk/common/utils/ImageManager$BitmapLoadedListener;

.field final synthetic c:Lcom/czhj/sdk/common/utils/ImageManager;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/utils/ImageManager;Ljava/lang/String;Lcom/czhj/sdk/common/utils/ImageManager$BitmapLoadedListener;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/ImageManager$1;->c:Lcom/czhj/sdk/common/utils/ImageManager;

    iput-object p2, p0, Lcom/czhj/sdk/common/utils/ImageManager$1;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/czhj/sdk/common/utils/ImageManager$1;->b:Lcom/czhj/sdk/common/utils/ImageManager$BitmapLoadedListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    :try_start_0
    new-instance v0, Ljava/net/URL;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/ImageManager$1;->a:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v0

    check-cast v0, Ljava/net/HttpURLConnection;

    const-string v1, "GET"

    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    const/16 v1, 0x7d0

    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v1

    const/16 v2, 0xc8

    if-ne v1, v2, :cond_0

    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    invoke-static {v1}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object v1

    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager$1;->c:Lcom/czhj/sdk/common/utils/ImageManager;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ImageManager;->a(Lcom/czhj/sdk/common/utils/ImageManager;)Landroid/os/Handler;

    move-result-object v0

    new-instance v2, Lcom/czhj/sdk/common/utils/ImageManager$1$1;

    invoke-direct {v2, p0, v1}, Lcom/czhj/sdk/common/utils/ImageManager$1$1;-><init>(Lcom/czhj/sdk/common/utils/ImageManager$1;Landroid/graphics/Bitmap;)V

    invoke-virtual {v0, v2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager$1;->c:Lcom/czhj/sdk/common/utils/ImageManager;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ImageManager;->b(Lcom/czhj/sdk/common/utils/ImageManager;)Landroid/util/LruCache;

    move-result-object v0

    iget-object v2, p0, Lcom/czhj/sdk/common/utils/ImageManager$1;->a:Ljava/lang/String;

    invoke-virtual {v0, v2, v1}, Landroid/util/LruCache;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager$1;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/czhj/sdk/common/utils/ImageManager$1;->a:Ljava/lang/String;

    const-string v3, "/"

    invoke-virtual {v2, v3}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v2

    add-int/lit8 v2, v2, 0x1

    invoke-virtual {v0, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/io/File;

    iget-object v3, p0, Lcom/czhj/sdk/common/utils/ImageManager$1;->c:Lcom/czhj/sdk/common/utils/ImageManager;

    invoke-static {v3}, Lcom/czhj/sdk/common/utils/ImageManager;->c(Lcom/czhj/sdk/common/utils/ImageManager;)Ljava/io/File;

    move-result-object v3

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v3, v0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    new-instance v0, Ljava/io/FileOutputStream;

    invoke-direct {v0, v2}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    sget-object v2, Landroid/graphics/Bitmap$CompressFormat;->PNG:Landroid/graphics/Bitmap$CompressFormat;

    const/16 v3, 0x64

    invoke-virtual {v1, v2, v3, v0}, Landroid/graphics/Bitmap;->compress(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    iget-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager$1;->c:Lcom/czhj/sdk/common/utils/ImageManager;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ImageManager;->a(Lcom/czhj/sdk/common/utils/ImageManager;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/czhj/sdk/common/utils/ImageManager$1$2;

    invoke-direct {v1, p0}, Lcom/czhj/sdk/common/utils/ImageManager$1$2;-><init>(Lcom/czhj/sdk/common/utils/ImageManager$1;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    :goto_0
    return-void
.end method
