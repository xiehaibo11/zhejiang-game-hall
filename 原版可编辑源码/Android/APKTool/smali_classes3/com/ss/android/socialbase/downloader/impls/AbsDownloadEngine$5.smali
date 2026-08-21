.class Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->resetDownloadData(IZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

.field final synthetic val$deleteFile:Z

.field final synthetic val$id:I


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;IZ)V
    .locals 0

    .line 738
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$5;->this$0:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    iput p2, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$5;->val$id:I

    iput-boolean p3, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$5;->val$deleteFile:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 741
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$5;->this$0:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    iget v1, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$5;->val$id:I

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->doCancel(I)Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;

    .line 742
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$5;->this$0:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    iget v1, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$5;->val$id:I

    iget-boolean v2, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$5;->val$deleteFile:Z

    invoke-static {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->access$200(Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;IZ)V

    return-void
.end method
