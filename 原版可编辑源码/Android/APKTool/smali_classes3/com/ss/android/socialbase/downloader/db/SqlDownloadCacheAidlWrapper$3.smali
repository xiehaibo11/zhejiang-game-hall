.class Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->bindMainProcessDelayed()Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)V
    .locals 0

    .line 144
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$3;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 147
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$3;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/SqlDownloadCacheService;->startServiceAndBind(Landroid/content/Context;Landroid/content/ServiceConnection;)V

    return-void
.end method
