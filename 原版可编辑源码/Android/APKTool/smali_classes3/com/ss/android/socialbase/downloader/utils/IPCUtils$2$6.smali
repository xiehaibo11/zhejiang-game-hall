.class Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->onFailed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;

.field final synthetic val$e:Lcom/ss/android/socialbase/downloader/exception/BaseException;

.field final synthetic val$entity:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 0

    .line 234
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$6;->this$0:Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$6;->val$entity:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$6;->val$e:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 237
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$6;->this$0:Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;

    iget-object v0, v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$6;->val$entity:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$6;->val$e:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-interface {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onFailed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    return-void
.end method
