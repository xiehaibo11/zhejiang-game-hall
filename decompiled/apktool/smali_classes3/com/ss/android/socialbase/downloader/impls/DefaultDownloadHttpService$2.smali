.class Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService$2;
.super Ljava/lang/Object;

# interfaces
.implements Lokhttp3/Dns;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService;->createSpecialHostIpClient(Ljava/lang/String;Ljava/lang/String;)Lokhttp3/OkHttpClient;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService;

.field final synthetic val$host:Ljava/lang/String;

.field final synthetic val$hostIp:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 152
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService$2;->this$0:Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService$2;->val$host:Ljava/lang/String;

    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService$2;->val$hostIp:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public lookup(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/net/InetAddress;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/net/UnknownHostException;
        }
    .end annotation

    .line 155
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService$2;->val$host:Ljava/lang/String;

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 156
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService$2;->val$hostIp:Ljava/lang/String;

    invoke-static {p1}, Ljava/net/InetAddress;->getByName(Ljava/lang/String;)Ljava/net/InetAddress;

    move-result-object p1

    .line 157
    invoke-static {p1}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object p1

    return-object p1

    .line 159
    :cond_0
    sget-object v0, Lokhttp3/Dns;->SYSTEM:Lokhttp3/Dns;

    invoke-interface {v0, p1}, Lokhttp3/Dns;->lookup(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method
