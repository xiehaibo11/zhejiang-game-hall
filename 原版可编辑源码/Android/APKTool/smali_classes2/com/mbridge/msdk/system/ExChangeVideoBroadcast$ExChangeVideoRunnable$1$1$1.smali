.class final Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;
.super Ljava/lang/Object;
.source "ExChangeVideoBroadcast.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1;->onVideo(Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/ParcelFileDescriptor;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/os/ParcelFileDescriptor;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:J

.field final synthetic g:Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1;Landroid/os/ParcelFileDescriptor;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 0

    .line 124
    iput-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->g:Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1;

    iput-object p2, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->a:Landroid/os/ParcelFileDescriptor;

    iput-object p3, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->e:Ljava/lang/String;

    iput-wide p7, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->f:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 20

    move-object/from16 v1, p0

    const/4 v2, 0x0

    .line 131
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/mbridge/msdk/foundation/same/b/c;->c:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    .line 132
    new-instance v3, Ljava/io/FileInputStream;

    iget-object v0, v1, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->a:Landroid/os/ParcelFileDescriptor;

    invoke-virtual {v0}, Landroid/os/ParcelFileDescriptor;->getFileDescriptor()Ljava/io/FileDescriptor;

    move-result-object v0

    invoke-direct {v3, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/FileDescriptor;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_5
    .catchall {:try_start_0 .. :try_end_0} :catchall_5

    .line 133
    :try_start_1
    new-instance v15, Ljava/io/FileOutputStream;

    new-instance v0, Ljava/io/File;

    iget-object v4, v1, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->b:Ljava/lang/String;

    invoke-direct {v0, v8, v4}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v15, v0}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_5
    .catchall {:try_start_1 .. :try_end_1} :catchall_4

    .line 135
    :try_start_2
    new-instance v14, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v14}, Ljava/io/ByteArrayOutputStream;-><init>()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_5
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    const/16 v0, 0x1000

    :try_start_3
    new-array v2, v0, [B

    :goto_0
    const/4 v4, 0x0

    .line 140
    invoke-virtual {v3, v2, v4, v0}, Ljava/io/FileInputStream;->read([BII)I

    move-result v5
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_5
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    const/4 v6, -0x1

    if-eq v5, v6, :cond_0

    .line 141
    :try_start_4
    invoke-virtual {v14, v2, v4, v5}, Ljava/io/ByteArrayOutputStream;->write([BII)V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_5
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    move-object v2, v3

    move-object/from16 v18, v14

    move-object/from16 v19, v15

    goto :goto_2

    .line 144
    :cond_0
    :try_start_5
    invoke-virtual {v14}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v0

    invoke-virtual {v15, v0}, Ljava/io/FileOutputStream;->write([B)V

    .line 145
    invoke-virtual {v15}, Ljava/io/FileOutputStream;->flush()V

    .line 146
    iget-object v4, v1, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->c:Ljava/lang/String;

    iget-object v5, v1, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->d:Ljava/lang/String;

    iget-object v6, v1, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->d:Ljava/lang/String;

    iget-object v7, v1, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->e:Ljava/lang/String;

    iget-object v9, v1, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->b:Ljava/lang/String;

    iget-wide v10, v1, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->f:J

    iget-wide v12, v1, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;->f:J

    const/16 v0, 0x64

    const/4 v2, 0x0

    sget-object v16, Lcom/mbridge/msdk/foundation/download/DownloadResourceType;->DOWNLOAD_RESOURCE_TYPE_VIDEO:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    const/16 v17, 0x1

    move-object/from16 v18, v14

    move v14, v0

    move-object/from16 v19, v15

    move v15, v2

    :try_start_6
    invoke-static/range {v4 .. v17}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->create(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJIILcom/mbridge/msdk/foundation/download/DownloadResourceType;I)Lcom/mbridge/msdk/foundation/download/database/DownloadModel;

    move-result-object v0

    .line 147
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;->getInstance()Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;->getDatabaseHelper()Lcom/mbridge/msdk/foundation/download/database/IDatabaseHelper;

    move-result-object v2

    invoke-interface {v2, v0}, Lcom/mbridge/msdk/foundation/download/database/IDatabaseHelper;->insert(Lcom/mbridge/msdk/foundation/download/database/DownloadModel;)V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_5
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    .line 155
    :try_start_7
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_0

    .line 163
    :catch_0
    :try_start_8
    invoke-virtual/range {v19 .. v19}, Ljava/io/FileOutputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_1

    .line 171
    :catch_1
    :try_start_9
    invoke-virtual/range {v18 .. v18}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_5

    goto :goto_3

    :catchall_1
    move-exception v0

    goto :goto_1

    :catchall_2
    move-exception v0

    move-object/from16 v18, v14

    move-object/from16 v19, v15

    goto :goto_1

    :catchall_3
    move-exception v0

    move-object/from16 v19, v15

    move-object/from16 v18, v2

    goto :goto_1

    :catchall_4
    move-exception v0

    move-object/from16 v18, v2

    move-object/from16 v19, v18

    :goto_1
    move-object v2, v3

    goto :goto_2

    :catchall_5
    move-exception v0

    move-object/from16 v18, v2

    move-object/from16 v19, v18

    :goto_2
    if-eqz v2, :cond_1

    .line 155
    :try_start_a
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_a
    .catch Ljava/io/IOException; {:try_start_a .. :try_end_a} :catch_2

    :catch_2
    :cond_1
    if-eqz v19, :cond_2

    .line 163
    :try_start_b
    invoke-virtual/range {v19 .. v19}, Ljava/io/FileOutputStream;->close()V
    :try_end_b
    .catch Ljava/io/IOException; {:try_start_b .. :try_end_b} :catch_3

    :catch_3
    :cond_2
    if-eqz v18, :cond_3

    .line 171
    :try_start_c
    invoke-virtual/range {v18 .. v18}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_c
    .catch Ljava/io/IOException; {:try_start_c .. :try_end_c} :catch_4

    .line 176
    :catch_4
    :cond_3
    throw v0

    :catch_5
    :goto_3
    return-void
.end method
