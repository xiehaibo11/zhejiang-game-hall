.class Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->onStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;

.field final synthetic val$entity:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    .line 178
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$2;->this$0:Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$2;->val$entity:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 181
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$2;->this$0:Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;

    iget-object v0, v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$2;->val$entity:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-void
.end method
