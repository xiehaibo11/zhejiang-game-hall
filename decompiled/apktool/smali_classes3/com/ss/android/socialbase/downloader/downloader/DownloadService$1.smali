.class Lcom/ss/android/socialbase/downloader/downloader/DownloadService$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/downloader/DownloadService;->onStartCommand(Landroid/content/Intent;II)I
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/downloader/DownloadService;

.field final synthetic val$flags:I

.field final synthetic val$intent:Landroid/content/Intent;

.field final synthetic val$startId:I


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/downloader/DownloadService;Landroid/content/Intent;II)V
    .locals 0

    .line 49
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadService$1;->this$0:Lcom/ss/android/socialbase/downloader/downloader/DownloadService;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadService$1;->val$intent:Landroid/content/Intent;

    iput p3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadService$1;->val$flags:I

    iput p4, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadService$1;->val$startId:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 52
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadService$1;->this$0:Lcom/ss/android/socialbase/downloader/downloader/DownloadService;

    iget-object v0, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadService;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-eqz v0, :cond_0

    .line 53
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadService$1;->this$0:Lcom/ss/android/socialbase/downloader/downloader/DownloadService;

    iget-object v0, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadService;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadService$1;->val$intent:Landroid/content/Intent;

    iget v2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadService$1;->val$flags:I

    iget v3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadService$1;->val$startId:I

    invoke-interface {v0, v1, v2, v3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->onStartCommand(Landroid/content/Intent;II)V

    :cond_0
    return-void
.end method
