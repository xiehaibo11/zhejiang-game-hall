.class Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$8;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

.field final synthetic val$downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    .line 680
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$8;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$8;->val$downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 683
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$8;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$8;->val$downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->access$1300(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-void
.end method
