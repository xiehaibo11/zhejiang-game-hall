.class Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService;->downloadWithConnection(Ljava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService;

.field final synthetic val$requestCall:Lokhttp3/Call;

.field final synthetic val$response:Lokhttp3/Response;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService;Lokhttp3/Response;Lokhttp3/Call;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService$1;->this$0:Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService$1;->val$response:Lokhttp3/Response;

    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService$1;->val$requestCall:Lokhttp3/Call;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public cancel()V
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService$1;->val$requestCall:Lokhttp3/Call;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lokhttp3/Call;->isCanceled()Z

    move-result v0

    if-nez v0, :cond_0

    .line 63
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService$1;->val$requestCall:Lokhttp3/Call;

    invoke-interface {v0}, Lokhttp3/Call;->cancel()V

    :cond_0
    return-void
.end method

.method public getResponseCode()I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 57
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService$1;->val$response:Lokhttp3/Response;

    invoke-virtual {v0}, Lokhttp3/Response;->code()I

    move-result v0

    return v0
.end method

.method public getResponseHeaderField(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService$1;->val$response:Lokhttp3/Response;

    invoke-virtual {v0, p1}, Lokhttp3/Response;->header(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method
