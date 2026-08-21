.class Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;->resolveDnsAsync(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;

.field final synthetic val$cb:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;

.field final synthetic val$timeout:J

.field final synthetic val$url:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;J)V
    .locals 0

    .line 53
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$1;->this$0:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$1;->val$url:Ljava/lang/String;

    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$1;->val$cb:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;

    iput-wide p4, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$1;->val$timeout:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 56
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$1;->this$0:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$1;->val$url:Ljava/lang/String;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$1;->val$cb:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;

    iget-wide v3, p0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$1;->val$timeout:J

    invoke-static {v0, v1, v2, v3, v4}, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;->access$200(Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;J)V

    return-void
.end method
