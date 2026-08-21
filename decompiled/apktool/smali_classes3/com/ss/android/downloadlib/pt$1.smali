.class Lcom/ss/android/downloadlib/pt$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/pt;->pp()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/downloadlib/pt;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/pt;)V
    .locals 0

    .line 151
    iput-object p1, p0, Lcom/ss/android/downloadlib/pt$1;->rg:Lcom/ss/android/downloadlib/pt;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 15

    .line 154
    const-class v0, Lcom/ss/android/downloadlib/pt;

    monitor-enter v0

    const/16 v1, 0xd

    :try_start_0
    const-string v2, "sp_ad_download_event"

    const-string v3, "sp_download_finish_cache"

    const-string v4, "sp_delay_operation_info"

    const-string v5, "sp_ttdownloader_md5"

    const-string v6, "sp_name_installed_app"

    const-string v7, "misc_config"

    const-string v8, "sp_ad_install_back_dialog"

    const-string v9, "sp_ttdownloader_clean"

    const-string v10, "sp_order_download"

    const-string v11, "sp_a_b_c"

    const-string v12, "sp_ah_config"

    const-string v13, "sp_download_info"

    const-string v14, "sp_appdownloader"

    .line 156
    filled-new-array/range {v2 .. v14}, [Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v1, :cond_1

    .line 170
    aget-object v5, v2, v4

    .line 171
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-virtual {v6, v5, v3}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v5

    if-eqz v5, :cond_0

    .line 173
    invoke-interface {v5}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v5

    invoke-interface {v5}, Landroid/content/SharedPreferences$Editor;->clear()Landroid/content/SharedPreferences$Editor;

    move-result-object v5

    invoke-interface {v5}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_0
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 176
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object v1

    .line 177
    instance-of v2, v1, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_2

    .line 178
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    .line 181
    :cond_2
    :try_start_2
    check-cast v1, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->getDownloadCache()Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getDownloadInfoMap()Landroid/util/SparseArray;

    move-result-object v1

    .line 182
    invoke-virtual {v1}, Landroid/util/SparseArray;->size()I

    move-result v2

    add-int/lit8 v2, v2, -0x1

    :goto_1
    if-ltz v2, :cond_4

    .line 183
    invoke-virtual {v1, v2}, Landroid/util/SparseArray;->keyAt(I)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v3, :cond_3

    .line 185
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v4

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v3

    invoke-virtual {v4, v3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->clearDownloadData(I)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_3
    add-int/lit8 v2, v2, -0x1

    goto :goto_1

    .line 191
    :catchall_0
    :cond_4
    :try_start_3
    monitor-exit v0

    return-void

    :catchall_1
    move-exception v1

    monitor-exit v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    throw v1
.end method
