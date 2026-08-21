.class Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$4;
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

.field final synthetic val$id:I


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;I)V
    .locals 0

    .line 732
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$4;->this$0:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    iput p2, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$4;->val$id:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 735
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object v0

    iget v1, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$4;->val$id:I

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->cancelNotification(I)V

    return-void
.end method
