.class Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler;)V
    .locals 0

    .line 168
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler$1;->this$0:Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 171
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 172
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "tryDownload: 2 try"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 173
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler$1;->this$0:Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler;

    iget-boolean v0, v0, Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler;->isServiceAlive:Z

    if-nez v0, :cond_2

    .line 174
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 175
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "tryDownload: 2 error"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler$1;->this$0:Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler;

    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/downloader/AbsDownloadServiceHandler;->startService(Landroid/content/Context;Landroid/content/ServiceConnection;)V

    :cond_2
    return-void
.end method
