.class Lcom/ss/android/downloadlib/fw$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/fw;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Ljava/lang/String;

.field final synthetic q:Lcom/ss/android/downloadlib/fw;

.field final synthetic rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/fw;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V
    .locals 0

    .line 308
    iput-object p1, p0, Lcom/ss/android/downloadlib/fw$3;->q:Lcom/ss/android/downloadlib/fw;

    iput-object p2, p0, Lcom/ss/android/downloadlib/fw$3;->rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iput-object p3, p0, Lcom/ss/android/downloadlib/fw$3;->df:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 311
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw$3;->q:Lcom/ss/android/downloadlib/fw;

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

    .line 312
    instance-of v2, v1, Lcom/ss/android/download/api/download/rg/rg;

    if-eqz v2, :cond_1

    .line 313
    check-cast v1, Lcom/ss/android/download/api/download/rg/rg;

    iget-object v2, p0, Lcom/ss/android/downloadlib/fw$3;->rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v3, p0, Lcom/ss/android/downloadlib/fw$3;->df:Ljava/lang/String;

    invoke-interface {v1, v2, v3}, Lcom/ss/android/download/api/download/rg/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V

    goto :goto_0

    .line 314
    :cond_1
    instance-of v2, v1, Ljava/lang/ref/SoftReference;

    if-eqz v2, :cond_0

    check-cast v1, Ljava/lang/ref/SoftReference;

    invoke-virtual {v1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v2

    instance-of v2, v2, Lcom/ss/android/download/api/download/rg/rg;

    if-eqz v2, :cond_0

    .line 315
    invoke-virtual {v1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/download/api/download/rg/rg;

    iget-object v2, p0, Lcom/ss/android/downloadlib/fw$3;->rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v3, p0, Lcom/ss/android/downloadlib/fw$3;->df:Ljava/lang/String;

    invoke-interface {v1, v2, v3}, Lcom/ss/android/download/api/download/rg/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    return-void
.end method
