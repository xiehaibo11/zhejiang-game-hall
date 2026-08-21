.class final Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;
.super Ljava/lang/Object;
.source "PatchDownloadApi.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;->downloadRecovery(Lcom/ymnsdk/replugin/entity/DownloadEntity;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

.field final synthetic val$isSilent:I


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/entity/DownloadEntity;I)V
    .locals 0

    .line 138
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;->val$downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    iput p2, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;->val$isSilent:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 12

    .line 142
    :try_start_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;->val$downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getMd5()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 143
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/other/CoreDownloadStartEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;->val$downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getActivity()Landroid/app/Activity;

    move-result-object v7

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;->val$downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getPluginId()Ljava/lang/String;

    move-result-object v8

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;->val$downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getMd5()Ljava/lang/String;

    move-result-object v9

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;->val$downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getDownSize()J

    move-result-wide v10

    move-object v6, v1

    invoke-direct/range {v6 .. v11}, Lcom/ymnsdk/replugin/event/other/CoreDownloadStartEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 144
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->getInstance()Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    move-result-object v2

    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;->val$downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getDownloadUri()Ljava/lang/String;

    move-result-object v3

    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;->val$downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getMd5()Ljava/lang/String;

    move-result-object v4

    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;->val$downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getCallback()Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    move-result-object v6

    iget v7, p0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;->val$isSilent:I

    invoke-virtual/range {v2 .. v7}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->download(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadCallback;I)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 146
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
