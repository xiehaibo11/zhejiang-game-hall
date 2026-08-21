.class Lcom/ss/android/downloadlib/fw$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/fw;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/fw;

.field final synthetic rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/fw;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    .line 338
    iput-object p1, p0, Lcom/ss/android/downloadlib/fw$5;->df:Lcom/ss/android/downloadlib/fw;

    iput-object p2, p0, Lcom/ss/android/downloadlib/fw$5;->rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 341
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw$5;->df:Lcom/ss/android/downloadlib/fw;

    invoke-static {v0}, Lcom/ss/android/downloadlib/fw;->rg(Lcom/ss/android/downloadlib/fw;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    .line 342
    instance-of v2, v1, Lcom/ss/android/download/api/download/rg/rg;

    if-eqz v2, :cond_1

    .line 343
    check-cast v1, Lcom/ss/android/download/api/download/rg/rg;

    iget-object v2, p0, Lcom/ss/android/downloadlib/fw$5;->rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v1, v2}, Lcom/ss/android/download/api/download/rg/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    goto :goto_0

    .line 344
    :cond_1
    instance-of v2, v1, Ljava/lang/ref/SoftReference;

    if-eqz v2, :cond_0

    check-cast v1, Ljava/lang/ref/SoftReference;

    invoke-virtual {v1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v2

    instance-of v2, v2, Lcom/ss/android/download/api/download/rg/rg;

    if-eqz v2, :cond_0

    .line 345
    invoke-virtual {v1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/download/api/download/rg/rg;

    iget-object v2, p0, Lcom/ss/android/downloadlib/fw$5;->rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v1, v2}, Lcom/ss/android/download/api/download/rg/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    goto :goto_0

    :cond_2
    return-void
.end method
