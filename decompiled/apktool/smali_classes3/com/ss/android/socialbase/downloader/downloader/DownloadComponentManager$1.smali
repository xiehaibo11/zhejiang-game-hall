.class final Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->initComponent(Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 189
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 192
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 194
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getCurProcessName(Landroid/content/Context;)Ljava/lang/String;

    :cond_0
    return-void
.end method
