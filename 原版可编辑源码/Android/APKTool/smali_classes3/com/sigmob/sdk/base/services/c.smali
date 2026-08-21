.class Lcom/sigmob/sdk/base/services/c;
.super Landroid/content/BroadcastReceiver;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method

.method private a(Landroid/content/Context;JLcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 16

    move-object/from16 v1, p1

    move-object/from16 v2, p4

    const-string v0, "1"

    if-eqz v2, :cond_2

    invoke-virtual/range {p0 .. p1}, Lcom/sigmob/sdk/base/services/c;->a(Landroid/content/Context;)Landroid/app/DownloadManager;

    move-result-object v3

    move-wide/from16 v4, p2

    invoke-static {v3, v4, v5}, Lcom/sigmob/sdk/base/common/n;->a(Landroid/app/DownloadManager;J)Ljava/util/Map;

    move-result-object v3

    sget-object v6, Lcom/sigmob/sdk/base/common/a;->F:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v2, v6}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    const-string v6, "com.sigmob.action.interstitial.download.end"

    const-string v7, "downloadId"

    const-string v8, "result"

    const-string v9, "download_end"

    const-string v12, "0"

    const-string v13, "download info is null"

    if-eqz v3, :cond_1

    const-string v14, "fileName"

    invoke-interface {v3, v14}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    const-string v15, "status"

    invoke-interface {v3, v15}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Ljava/lang/Integer;

    invoke-virtual {v15}, Ljava/lang/Integer;->intValue()I

    move-result v15

    const-string v11, "reason"

    invoke-interface {v3, v11}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/Integer;

    invoke-virtual {v11}, Ljava/lang/Integer;->intValue()I

    move-result v11

    const-string v10, "uri"

    invoke-interface {v3, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/net/Uri;

    if-eqz v14, :cond_0

    const/16 v10, 0x8

    if-ne v15, v10, :cond_0

    :try_start_0
    invoke-static {v1, v3}, Lcom/czhj/sdk/common/utils/FileUtil;->getRealFilePath(Landroid/content/Context;Landroid/net/Uri;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/czhj/sdk/common/ClientMetadata;->getPackageInfoWithUri(Landroid/content/Context;Ljava/lang/String;)Landroid/content/pm/PackageInfo;

    move-result-object v10

    invoke-static {v2, v9, v10, v0}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Landroid/content/pm/PackageInfo;Ljava/lang/String;)V

    new-instance v9, Ljava/util/HashMap;

    invoke-direct {v9}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v9, v8, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static/range {p2 .. p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v9, v7, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p4 .. p4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0, v9, v6}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    invoke-static {v1, v3, v2}, Lcom/sigmob/sdk/base/common/n;->a(Landroid/content/Context;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INSTALL_FAIL:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v1

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v3, "app_install_start"

    invoke-static {v3, v1, v0, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {v3, v12, v2}, Lcom/sigmob/sdk/base/common/z;->b(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :goto_0
    return-void

    :cond_0
    :try_start_1
    const-string v0, "status %d, reason %d"

    const/4 v10, 0x2

    new-array v14, v10, [Ljava/lang/Object;

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    const/4 v15, 0x0

    aput-object v10, v14, v15

    const/4 v10, 0x1

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    aput-object v11, v14, v10

    invoke-static {v0, v14}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v13

    invoke-static {v1, v3}, Lcom/czhj/sdk/common/utils/FileUtil;->getRealFilePath(Landroid/content/Context;Landroid/net/Uri;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->deleteFile(Ljava/lang/String;)Z

    move-result v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "handleDownloadComplete:fail:"

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_1
    :goto_1
    :try_start_2
    const-string v0, "\u4e0b\u8f7d\u5931\u8d25"

    const/4 v3, 0x0

    invoke-static {v1, v0, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_2
    const-string v0, "download_failed"

    const/4 v3, 0x2

    invoke-static {v0, v3, v13, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {v9, v12, v2}, Lcom/sigmob/sdk/base/common/z;->b(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v8, v12}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static/range {p2 .. p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v0, v7, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p4 .. p4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0, v6}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    :cond_2
    return-void
.end method


# virtual methods
.method a(Landroid/content/Context;)Landroid/app/DownloadManager;
    .locals 1

    const-string v0, "download"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/app/DownloadManager;

    return-object p1
.end method

.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 7

    const-string v0, "extra_download_id"

    const-wide/16 v1, -0x1

    invoke-virtual {p2, v0, v1, v2}, Landroid/content/Intent;->getLongExtra(Ljava/lang/String;J)J

    move-result-wide v0

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/sigmob/sdk/base/common/n;->b(JLjava/lang/String;)V

    new-instance v3, Ljava/io/File;

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->f()Ljava/lang/String;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, ".log"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v3, v4, v5}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/czhj/sdk/common/utils/FileUtil;->readFromCache(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_0

    instance-of v5, v4, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v5, :cond_0

    move-object v2, v4

    check-cast v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/sigmob/sdk/base/common/f;->a(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v4

    if-eqz v4, :cond_0

    move-object v2, v4

    :cond_0
    invoke-virtual {v3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/czhj/sdk/common/utils/FileUtil;->deleteFile(Ljava/lang/String;)Z

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p2

    const/4 v3, -0x1

    invoke-virtual {p2}, Ljava/lang/String;->hashCode()I

    move-result v4

    const v5, 0x4a702ceb    # 3935034.8f

    if-eq v4, v5, :cond_1

    goto :goto_0

    :cond_1
    const-string v4, "android.intent.action.DOWNLOAD_COMPLETE"

    invoke-virtual {p2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    const/4 v3, 0x0

    :cond_2
    :goto_0
    if-eqz v3, :cond_3

    goto :goto_1

    :cond_3
    if-nez v2, :cond_4

    return-void

    :cond_4
    invoke-direct {p0, p1, v0, v1, v2}, Lcom/sigmob/sdk/base/services/c;->a(Landroid/content/Context;JLcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :goto_1
    return-void
.end method
