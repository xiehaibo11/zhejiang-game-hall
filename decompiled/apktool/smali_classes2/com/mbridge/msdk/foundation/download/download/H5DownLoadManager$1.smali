.class Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;
.super Ljava/lang/Object;
.source "H5DownLoadManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadZipByDownloadModule(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

.field final synthetic val$listener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

.field final synthetic val$unZipFilePath:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;)V
    .locals 0

    .line 130
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->this$0:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->val$unZipFilePath:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->val$listener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCancelDownload(Lcom/mbridge/msdk/foundation/download/DownloadMessage;)V
    .locals 2

    .line 157
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u4e0b\u8f7d\u53d6\u6d88\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadResourceType()Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "H5DownLoadManager"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 158
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->getinstance()Lcom/mbridge/msdk/foundation/download/download/ResourceManager;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->getResDirFromCampaign(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 159
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->val$listener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    if-eqz v0, :cond_1

    .line 160
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;->onSuccess(Ljava/lang/String;)V

    goto :goto_0

    .line 163
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->val$listener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    if-eqz v0, :cond_1

    .line 164
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object p1

    const-string v1, "task cancel"

    invoke-interface {v0, p1, v1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;->onFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public onDownloadComplete(Lcom/mbridge/msdk/foundation/download/DownloadMessage;)V
    .locals 4

    .line 138
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u4e0b\u8f7d\u7ed3\u675f\uff0c\u5f00\u59cb\u89e3\u538b\u7f29\u6587\u4ef6\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadResourceType()Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getSaveFilePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "H5DownLoadManager"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 140
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->getinstance()Lcom/mbridge/msdk/foundation/download/download/ResourceManager;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->getResDirFromCampaign(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 141
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;->getInstance()Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getSaveFilePath()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->val$unZipFilePath:Ljava/lang/String;

    invoke-virtual {v0, v2, v3}, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;->unZip(Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u4e0b\u8f7d\u7ed3\u675f\uff0c\u5f00\u59cb\u89e3\u538b\u7f29\u6587\u4ef6\uff0c\u6587\u4ef6\u89e3\u538b\u6210\u529f\uff1a "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->val$unZipFilePath:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 144
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->val$listener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    if-eqz v0, :cond_1

    .line 145
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->val$listener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;->onSuccess(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 148
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u4e0b\u8f7d\u7ed3\u675f\uff0c\u5f00\u59cb\u89e3\u538b\u7f29\u6587\u4ef6\uff0c\u6587\u4ef6\u89e3\u538b\u5931\u8d25\uff1a "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 149
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->val$listener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    if-eqz v1, :cond_1

    .line 150
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, p1, v0}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;->onFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public onDownloadError(Lcom/mbridge/msdk/foundation/download/DownloadMessage;Lcom/mbridge/msdk/foundation/download/DownloadError;)V
    .locals 2

    .line 171
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u4e0b\u8f7d\u9519\u8bef\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadResourceType()Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "  "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/download/DownloadError;->getException()Ljava/lang/Exception;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "H5DownLoadManager"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 172
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->getinstance()Lcom/mbridge/msdk/foundation/download/download/ResourceManager;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->getResDirFromCampaign(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 173
    iget-object p2, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->val$listener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    if-eqz p2, :cond_1

    .line 174
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;->onSuccess(Ljava/lang/String;)V

    goto :goto_0

    .line 177
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$1;->val$listener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;

    if-eqz v0, :cond_1

    .line 178
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/download/DownloadError;->getException()Ljava/lang/Exception;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;->onFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public onDownloadStart(Lcom/mbridge/msdk/foundation/download/DownloadMessage;)V
    .locals 2

    .line 133
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f00\u59cb\u4e0b\u8f7d zip\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getDownloadResourceType()Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "H5DownLoadManager"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
