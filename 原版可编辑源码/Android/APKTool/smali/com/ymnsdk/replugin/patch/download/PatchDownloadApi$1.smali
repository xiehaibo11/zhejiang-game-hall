.class final Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;
.super Ljava/lang/Object;
.source "PatchDownloadApi.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;->downloadPatch(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIILcom/ymnsdk/replugin/patch/download/DownloadCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$callback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

.field final synthetic val$downSize:J

.field final synthetic val$downloadUri:Ljava/lang/String;

.field final synthetic val$isSilent:I

.field final synthetic val$md5:Ljava/lang/String;

.field final synthetic val$pluginId:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/patch/download/DownloadCallback;Ljava/lang/String;Ljava/lang/String;Landroid/app/Activity;Ljava/lang/String;JI)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$callback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    iput-object p2, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$md5:Ljava/lang/String;

    iput-object p3, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$downloadUri:Ljava/lang/String;

    iput-object p4, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$activity:Landroid/app/Activity;

    iput-object p5, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$pluginId:Ljava/lang/String;

    iput-wide p6, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$downSize:J

    iput p8, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$isSilent:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 12

    .line 93
    :try_start_0
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isNetWorkAvailable()Z

    move-result v0

    if-nez v0, :cond_0

    .line 94
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$callback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->NetworkUnreachable:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-interface {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadCallback;->downloadFail(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V

    return-void

    .line 97
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 98
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$md5:Ljava/lang/String;

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$downloadUri:Ljava/lang/String;

    invoke-virtual {v0, v1, v2, v5}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncDownloadStatus(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 99
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->getInstance()Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->resume(Ljava/lang/String;)Z

    .line 100
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/other/CoreDownloadStartEvent;

    iget-object v7, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$activity:Landroid/app/Activity;

    iget-object v8, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$pluginId:Ljava/lang/String;

    iget-object v9, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$md5:Ljava/lang/String;

    iget-wide v10, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$downSize:J

    move-object v6, v1

    invoke-direct/range {v6 .. v11}, Lcom/ymnsdk/replugin/event/other/CoreDownloadStartEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 101
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    sget-object v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->downloadRecord:Ljava/util/Map;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$pluginId:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-interface {v0, v1, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "ymn--\u8981\u4e0b\u8f7d\u7684\u5730\u5740\u4e3a---"

    .line 102
    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$downloadUri:Ljava/lang/String;

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 103
    sget-boolean v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->isUserDownload:Z

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$isSilent:I

    if-ne v0, v2, :cond_1

    .line 105
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setLoadState(Ljava/lang/Boolean;)V

    .line 106
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->getInstance()Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->pause(Ljava/lang/String;)Z

    .line 107
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    sget-object v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->downloadRecord:Ljava/util/Map;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 108
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$callback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->ManualStop:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-interface {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadCallback;->downloadFail(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V

    return-void

    .line 111
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->getInstance()Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    move-result-object v2

    iget-object v3, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$downloadUri:Ljava/lang/String;

    iget-object v4, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$md5:Ljava/lang/String;

    iget-object v6, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$callback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    iget v7, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;->val$isSilent:I

    invoke-virtual/range {v2 .. v7}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->download(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadCallback;I)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 113
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
