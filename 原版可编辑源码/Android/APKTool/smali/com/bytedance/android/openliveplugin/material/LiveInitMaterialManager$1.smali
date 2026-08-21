.class Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;
.super Lcom/ss/android/socialbase/downloader/depend/AbsDownloadListener;


# instance fields
.field final synthetic this$0:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

.field final synthetic val$context:Landroid/content/Context;

.field final synthetic val$liveMaterialGet:Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;

.field final synthetic val$name:Ljava/lang/String;

.field final synthetic val$savePath:Ljava/lang/String;

.field final synthetic val$url:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;Landroid/content/Context;Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->this$0:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    iput-object p2, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$context:Landroid/content/Context;

    iput-object p3, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$liveMaterialGet:Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;

    iput-object p4, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$url:Ljava/lang/String;

    iput-object p5, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$savePath:Ljava/lang/String;

    iput-object p6, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$name:Ljava/lang/String;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/AbsDownloadListener;-><init>()V

    return-void
.end method


# virtual methods
.method public onCanceled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    const-string p1, "LiveInitMaterialManager"

    const-string v0, "live init : Download task canceled."

    .line 132
    invoke-static {p1, v0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 133
    iget-object p1, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->this$0:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->access$102(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;Z)Z

    return-void
.end method

.method public onFailed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 6

    .line 122
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "live init : Download failed. "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "LiveInitMaterialManager"

    invoke-static {p2, p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 123
    iget-object p1, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->this$0:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    const/4 p2, 0x0

    invoke-static {p1, p2}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->access$102(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;Z)Z

    .line 125
    iget-object p1, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->this$0:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    invoke-static {p1}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->access$200(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->getAndIncrement()I

    move-result p1

    const/4 p2, 0x3

    if-ge p1, p2, :cond_0

    .line 126
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->this$0:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    iget-object v1, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$context:Landroid/content/Context;

    iget-object v2, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$url:Ljava/lang/String;

    iget-object v3, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$savePath:Ljava/lang/String;

    iget-object v4, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$name:Ljava/lang/String;

    iget-object v5, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$liveMaterialGet:Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;

    invoke-static/range {v0 .. v5}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->access$300(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;)V

    :cond_0
    return-void
.end method

.method public onSuccessed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 3

    .line 108
    :try_start_0
    new-instance v0, Ljava/io/File;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/bytedance/android/openliveplugin/material/ZipFileUtil;->unZipFolder(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 110
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 112
    :goto_0
    iget-object p1, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->this$0:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$context:Landroid/content/Context;

    invoke-static {p1, v0}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->access$000(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;Landroid/content/Context;)Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    move-result-object p1

    .line 113
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->val$liveMaterialGet:Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;

    if-eqz v0, :cond_0

    .line 114
    invoke-interface {v0, p1}, Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;->onMaterialGet(Lcom/bytedance/android/openliveplugin/material/ConfigParams;)V

    :cond_0
    const-string p1, "LiveInitMaterialManager"

    const-string v0, "live init : Download end."

    .line 116
    invoke-static {p1, v0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 117
    iget-object p1, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;->this$0:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->access$102(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;Z)Z

    return-void
.end method
