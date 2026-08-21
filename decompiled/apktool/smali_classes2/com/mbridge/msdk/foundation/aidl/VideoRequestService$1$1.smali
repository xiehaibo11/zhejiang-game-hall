.class final Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1$1;
.super Ljava/lang/Object;
.source "VideoRequestService.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;->requestVideo([Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:[Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;[Ljava/lang/String;)V
    .locals 0

    .line 40
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1$1;->b:Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1$1;->a:[Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 12

    .line 43
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;->getInstance()Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;->getDatabaseHelper()Lcom/mbridge/msdk/foundation/download/database/IDatabaseHelper;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/foundation/download/database/IDatabaseHelper;->findAll()Ljava/util/List;

    move-result-object v0

    .line 44
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 45
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1$1;->a:[Ljava/lang/String;

    if-eqz v2, :cond_0

    array-length v3, v2

    if-lez v3, :cond_0

    .line 46
    invoke-static {v2}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    :cond_0
    if-eqz v0, :cond_3

    .line 49
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_3

    .line 50
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :catch_0
    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;

    if-eqz v2, :cond_1

    .line 51
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getDownloadedBytes()J

    move-result-wide v3

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getTotalBytes()J

    move-result-wide v5

    cmp-long v3, v3, v5

    if-nez v3, :cond_1

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 54
    :try_start_0
    new-instance v3, Ljava/io/File;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getSaveDirectorPath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getSaveFileName()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v3, v4, v5}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 55
    invoke-virtual {v3}, Ljava/io/File;->isFile()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 56
    new-instance v4, Ljava/io/FileInputStream;

    invoke-direct {v4, v3}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    .line 58
    new-instance v3, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v3}, Ljava/io/ByteArrayOutputStream;-><init>()V

    const/16 v5, 0x1000

    new-array v6, v5, [B

    :goto_1
    const/4 v7, 0x0

    .line 63
    invoke-virtual {v4, v6, v7, v5}, Ljava/io/InputStream;->read([BII)I

    move-result v8

    const/4 v9, -0x1

    if-eq v8, v9, :cond_2

    .line 64
    invoke-virtual {v3, v6, v7, v8}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_1

    .line 67
    :cond_2
    invoke-virtual {v3}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v3

    .line 68
    new-instance v4, Landroid/os/MemoryFile;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getSaveFileName()Ljava/lang/String;

    move-result-object v5

    array-length v6, v3

    invoke-direct {v4, v5, v6}, Landroid/os/MemoryFile;-><init>(Ljava/lang/String;I)V

    .line 69
    array-length v5, v3

    invoke-virtual {v4, v3, v7, v7, v5}, Landroid/os/MemoryFile;->writeBytes([BIII)V

    .line 70
    invoke-static {v4}, Lcom/mbridge/msdk/foundation/aidl/a;->a(Landroid/os/MemoryFile;)Ljava/io/FileDescriptor;

    move-result-object v3

    .line 71
    invoke-static {v3}, Landroid/os/ParcelFileDescriptor;->dup(Ljava/io/FileDescriptor;)Landroid/os/ParcelFileDescriptor;

    move-result-object v11

    .line 73
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1$1;->b:Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;

    iget-object v3, v3, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;->a:Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->a(Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 74
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1$1;->b:Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;

    iget-object v3, v3, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;->a:Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->a(Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    move-result-object v4

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getResourceUrl()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getTotalBytes()J

    move-result-wide v6

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getDownloadId()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getEtag()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getSaveFileName()Ljava/lang/String;

    move-result-object v10

    invoke-interface/range {v4 .. v11}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;->onVideo(Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/ParcelFileDescriptor;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto/16 :goto_0

    :catchall_0
    move-exception v2

    .line 81
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    goto/16 :goto_0

    :cond_3
    return-void
.end method
