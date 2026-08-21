.class final Lcom/bianfeng/ymnsdk/sysfunc/ImgDownload$1;
.super Ljava/lang/Object;
.source "ImgDownload.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/ImgDownload;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 45
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/ImgDownload;->access$000()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 47
    new-instance v0, Ljava/net/URL;

    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/ImgDownload;->access$000()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 49
    invoke-virtual {v0}, Ljava/net/URL;->openStream()Ljava/io/InputStream;

    move-result-object v0

    .line 51
    invoke-static {v0}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/sysfunc/ImgDownload;->access$102(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    .line 52
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V

    .line 54
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/ImgDownload;->access$100()Landroid/graphics/Bitmap;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/ImgDownload;->saveFile(Landroid/graphics/Bitmap;)V

    .line 55
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/ImgDownload;->access$200()Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    move-result-object v0

    const/16 v1, 0x458

    const-string v2, "\u56fe\u7247\u4fdd\u5b58\u6210\u529f"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 57
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 58
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/ImgDownload;->access$200()Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    move-result-object v1

    const/16 v2, 0x459

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u56fe\u7247\u4e0b\u8f7d\u5931\u8d25=="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method
