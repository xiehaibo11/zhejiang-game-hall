.class Lcom/bykv/vk/openvk/downloadnew/pt$pp$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/downloadnew/pt$pp;->downloadWithConnection(ILjava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/downloadnew/pt$pp;

.field final synthetic rg:Lcom/bykv/vk/openvk/downloadnew/q$rg;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/downloadnew/pt$pp;Lcom/bykv/vk/openvk/downloadnew/q$rg;)V
    .locals 0

    .line 509
    iput-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pp$1;->df:Lcom/bykv/vk/openvk/downloadnew/pt$pp;

    iput-object p2, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pp$1;->rg:Lcom/bykv/vk/openvk/downloadnew/q$rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public cancel()V
    .locals 0

    return-void
.end method

.method public end()V
    .locals 1

    .line 533
    :try_start_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pp$1;->rg:Lcom/bykv/vk/openvk/downloadnew/q$rg;

    iget-object v0, v0, Lcom/bykv/vk/openvk/downloadnew/q$rg;->pt:Ljava/net/HttpURLConnection;

    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public getInputStream()Ljava/io/InputStream;
    .locals 1

    .line 512
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pp$1;->rg:Lcom/bykv/vk/openvk/downloadnew/q$rg;

    iget-object v0, v0, Lcom/bykv/vk/openvk/downloadnew/q$rg;->rg:Ljava/io/InputStream;

    return-object v0
.end method

.method public getResponseCode()I
    .locals 1

    .line 522
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pp$1;->rg:Lcom/bykv/vk/openvk/downloadnew/q$rg;

    iget v0, v0, Lcom/bykv/vk/openvk/downloadnew/q$rg;->q:I

    return v0
.end method

.method public getResponseHeaderField(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 517
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pp$1;->rg:Lcom/bykv/vk/openvk/downloadnew/q$rg;

    iget-object v0, v0, Lcom/bykv/vk/openvk/downloadnew/q$rg;->df:Ljava/util/Map;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pp$1;->rg:Lcom/bykv/vk/openvk/downloadnew/q$rg;

    iget-object v0, v0, Lcom/bykv/vk/openvk/downloadnew/q$rg;->df:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method
