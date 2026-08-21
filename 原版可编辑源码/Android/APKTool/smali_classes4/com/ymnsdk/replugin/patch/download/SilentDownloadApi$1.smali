.class Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;
.super Ljava/lang/Object;
.source "SilentDownloadApi.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->startSilentDownload(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

.field final synthetic val$activity:Landroid/app/Activity;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;Landroid/app/Activity;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iput-object p2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;->val$activity:Landroid/app/Activity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 84
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getAllPlugin()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 85
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    .line 86
    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    new-instance v2, Ljava/util/concurrent/CountDownLatch;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    invoke-direct {v2, v3}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    invoke-static {v1, v2}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->access$002(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;Ljava/util/concurrent/CountDownLatch;)Ljava/util/concurrent/CountDownLatch;

    .line 87
    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    mul-int/lit8 v0, v0, 0x2

    iput v0, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->maxDownloadNum:I

    .line 89
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;->val$activity:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getFilesDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->setWriteablePath(Ljava/lang/String;)V

    .line 91
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sput-wide v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->startSilentDownloadTime:J

    .line 92
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;->val$activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->loadHostConfig(Landroid/app/Activity;)V

    .line 94
    :try_start_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    invoke-static {v0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->access$000(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;)Ljava/util/concurrent/CountDownLatch;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 95
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    invoke-static {v0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->access$000(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;)Ljava/util/concurrent/CountDownLatch;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CountDownLatch;->await()V

    .line 97
    :cond_1
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;->val$activity:Landroid/app/Activity;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2, v2}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadOnePlugin(Landroid/app/Activity;ZI)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 99
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
