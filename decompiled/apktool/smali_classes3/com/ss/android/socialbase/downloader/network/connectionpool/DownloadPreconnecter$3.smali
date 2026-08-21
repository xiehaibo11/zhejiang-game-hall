.class final Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->asyncPreconnect(ILjava/lang/String;Ljava/util/List;JZZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$extra_headers:Ljava/util/List;

.field final synthetic val$holdConnection:Z

.field final synthetic val$isHeadMethodAvailable:Z

.field final synthetic val$maxLength:I

.field final synthetic val$startOffset:J

.field final synthetic val$url:Ljava/lang/String;


# direct methods
.method constructor <init>(ZLjava/lang/String;Ljava/util/List;JZI)V
    .locals 0

    .line 137
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$isHeadMethodAvailable:Z

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$url:Ljava/lang/String;

    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$extra_headers:Ljava/util/List;

    iput-wide p4, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$startOffset:J

    iput-boolean p6, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$holdConnection:Z

    iput p7, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$maxLength:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 141
    :try_start_0
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$isHeadMethodAvailable:Z

    if-eqz v0, :cond_0

    .line 142
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$url:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$extra_headers:Ljava/util/List;

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$startOffset:J

    invoke-static {v0, v1, v2, v3}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->access$100(Ljava/lang/String;Ljava/util/List;J)V

    .line 144
    :cond_0
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$holdConnection:Z

    if-eqz v0, :cond_1

    .line 145
    iget v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$maxLength:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$url:Ljava/lang/String;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$extra_headers:Ljava/util/List;

    iget-wide v3, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$startOffset:J

    invoke-static {v0, v1, v2, v3, v4}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->access$200(ILjava/lang/String;Ljava/util/List;J)V

    .line 146
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$CancelRunnable;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;->val$url:Ljava/lang/String;

    invoke-direct {v0, v1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$CancelRunnable;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->access$302(Ljava/lang/Runnable;)Ljava/lang/Runnable;

    .line 147
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->access$400()Landroid/os/Handler;

    move-result-object v0

    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->access$300()Ljava/lang/Runnable;

    move-result-object v1

    sget-wide v2, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sConnectionOutdatedTime:J

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method
