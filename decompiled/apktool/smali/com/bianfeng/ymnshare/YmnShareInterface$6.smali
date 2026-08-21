.class Lcom/bianfeng/ymnshare/YmnShareInterface$6;
.super Ljava/lang/Object;
.source "YmnShareInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnshare/YmnShareInterface;->returnBitMap(Ljava/lang/String;Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

.field final synthetic val$callBack:Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;

.field final synthetic val$url:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnshare/YmnShareInterface;Ljava/lang/String;Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;)V
    .locals 0

    .line 859
    iput-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$6;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    iput-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$6;->val$url:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$6;->val$callBack:Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 864
    :try_start_0
    new-instance v0, Ljava/net/URL;

    iget-object v1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$6;->val$url:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/net/MalformedURLException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 866
    invoke-virtual {v0}, Ljava/net/MalformedURLException;->printStackTrace()V

    const/4 v0, 0x0

    .line 869
    :goto_0
    :try_start_1
    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v0

    check-cast v0, Ljava/net/HttpURLConnection;

    const/4 v1, 0x1

    .line 870
    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 871
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->connect()V

    .line 872
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v0

    .line 873
    iget-object v1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$6;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v0}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object v2

    iput-object v2, v1, Lcom/bianfeng/ymnshare/YmnShareInterface;->bitmap:Landroid/graphics/Bitmap;

    .line 874
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V

    .line 875
    iget-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$6;->val$callBack:Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;

    iget-object v1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$6;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    iget-object v1, v1, Lcom/bianfeng/ymnshare/YmnShareInterface;->bitmap:Landroid/graphics/Bitmap;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;->onCall(Landroid/graphics/Bitmap;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 877
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method
