.class Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;->resolveDns(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;

.field final synthetic val$cb:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;

.field final synthetic val$recordFromCache:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$DnsRecord;

.field final synthetic val$url:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$DnsRecord;)V
    .locals 0

    .line 83
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$2;->this$0:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$2;->val$cb:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;

    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$2;->val$url:Ljava/lang/String;

    iput-object p4, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$2;->val$recordFromCache:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$DnsRecord;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 86
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$2;->val$cb:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;

    if-eqz v0, :cond_1

    .line 87
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$2;->val$url:Ljava/lang/String;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$2;->val$recordFromCache:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$DnsRecord;

    if-nez v2, :cond_0

    const/4 v2, 0x0

    goto :goto_0

    :cond_0
    iget-object v2, v2, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$DnsRecord;->value:Ljava/util/List;

    :goto_0
    invoke-interface {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;->onDnsResolved(Ljava/lang/String;Ljava/util/List;)V

    :cond_1
    return-void
.end method
