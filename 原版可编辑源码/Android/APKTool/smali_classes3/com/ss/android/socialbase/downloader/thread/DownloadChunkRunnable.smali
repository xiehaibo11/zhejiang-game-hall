.class public Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# static fields
.field private static final TAG:Ljava/lang/String;


# instance fields
.field private final callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

.field private volatile canceled:Z

.field private curDownloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

.field private downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

.field private downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

.field private downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

.field private downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

.field private final downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

.field private httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

.field private isHttpConnectionInject:Z

.field private volatile paused:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 30
    const-class v0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;)V
    .locals 0

    .line 55
    invoke-direct {p0, p1, p2, p4}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;)V

    .line 56
    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    return-void
.end method

.method public constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;)V
    .locals 1

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 112
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->isHttpConnectionInject:Z

    .line 45
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    .line 46
    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    if-eqz p2, :cond_0

    .line 48
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 49
    :cond_0
    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    .line 50
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    .line 51
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {p1, p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setChunkRunnable(Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;)V

    return-void
.end method

.method private closeConnection()V
    .locals 1

    .line 303
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_0

    .line 304
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->end()V

    const/4 v0, 0x0

    .line 305
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    :cond_0
    return-void
.end method

.method private downloadChunkInner(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)Z
    .locals 30

    move-object/from16 v1, p0

    move-object/from16 v8, p1

    :goto_0
    const/4 v0, 0x0

    .line 120
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isHostChunk()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasChunkDivided()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 121
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getFirstReuseChunk()Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 122
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v3

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v4

    if-ne v3, v4, :cond_0

    move-object v9, v2

    goto :goto_1

    :cond_0
    move-object v9, v0

    :goto_1
    const/4 v10, 0x1

    if-eqz v9, :cond_1

    .line 126
    invoke-virtual {v9}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasNoBytesDownload()Z

    move-result v0

    if-eqz v0, :cond_1

    return v10

    .line 130
    :cond_1
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v2

    .line 131
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getEndOffset()J

    move-result-wide v4

    .line 132
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v6

    if-eqz v9, :cond_2

    .line 134
    invoke-virtual {v9}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v6

    .line 135
    invoke-virtual {v9}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v2

    .line 136
    invoke-virtual {v9}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getEndOffset()J

    move-result-wide v4

    :cond_2
    move-wide/from16 v17, v2

    move-wide/from16 v19, v4

    const-wide/16 v21, 0x0

    const/4 v5, 0x0

    .line 139
    :try_start_0
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->isStoppedStatus()Z

    move-result v0
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_0 .. :try_end_0} :catch_5
    .catchall {:try_start_0 .. :try_end_0} :catchall_8

    if-eqz v0, :cond_3

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v5

    .line 142
    :cond_3
    :try_start_1
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->getUrl()Ljava/lang/String;

    move-result-object v4

    .line 144
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_4

    move v0, v10

    goto :goto_2

    :cond_4
    move v0, v5

    :goto_2
    iput-boolean v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->isHttpConnectionInject:Z

    .line 145
    invoke-virtual {v8, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setReuseingFirstConnection(Z)V
    :try_end_1
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_1 .. :try_end_1} :catch_5
    .catchall {:try_start_1 .. :try_end_1} :catchall_8

    const/16 v2, 0x12c

    const/16 v3, 0xc8

    .line 147
    :try_start_2
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->isHttpConnectionInject:Z

    if-nez v0, :cond_5

    .line 148
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExtraHeaders()Ljava/util/List;

    move-result-object v11

    .line 149
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->geteTag()Ljava/lang/String;

    move-result-object v12

    move-wide/from16 v13, v17

    move-wide/from16 v15, v19

    invoke-static/range {v11 .. v16}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->addRangeHeader(Ljava/util/List;Ljava/lang/String;JJ)Ljava/util/List;

    move-result-object v0

    .line 150
    new-instance v11, Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    const-string v12, "Chunk-Index"

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v13

    invoke-static {v13}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v13

    invoke-direct {v11, v12, v13}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0, v11}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 151
    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v0, v11}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->addThrottleNetSpeed(Ljava/util/List;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 152
    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v0, v11}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->addTTNetProtectTimeout(Ljava/util/List;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 153
    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedDefaultHttpServiceBackUp()Z

    move-result v11

    iget-object v12, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v12}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMaxBytes()I

    move-result v12

    invoke-static {v11, v12, v4, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadWithConnection(ZILjava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    move-result-object v0

    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
    :try_end_2
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 160
    :cond_5
    :try_start_3
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_8

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;
    :try_end_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_3 .. :try_end_3} :catch_5
    .catchall {:try_start_3 .. :try_end_3} :catchall_8

    if-eqz v0, :cond_8

    .line 162
    :try_start_4
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->getResponseCode()I

    move-result v0

    if-lt v0, v3, :cond_6

    if-lt v0, v2, :cond_8

    .line 164
    :cond_6
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-interface {v0, v2}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->setHttpResponseStatus(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_4

    :catchall_0
    move-exception v0

    .line 167
    :goto_3
    :try_start_5
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_5
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_5 .. :try_end_5} :catch_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_8

    goto :goto_4

    :catchall_1
    move-exception v0

    :try_start_6
    const-string v11, "ChunkRunnableConnection"

    .line 158
    invoke-static {v0, v11}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    .line 160
    :try_start_7
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_8

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;
    :try_end_7
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_7 .. :try_end_7} :catch_5
    .catchall {:try_start_7 .. :try_end_7} :catchall_8

    if-eqz v0, :cond_8

    .line 162
    :try_start_8
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->getResponseCode()I

    move-result v0

    if-lt v0, v3, :cond_7

    if-lt v0, v2, :cond_8

    .line 164
    :cond_7
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-interface {v0, v2}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->setHttpResponseStatus(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    goto :goto_4

    :catchall_2
    move-exception v0

    goto :goto_3

    .line 172
    :cond_8
    :goto_4
    :try_start_9
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->isStoppedStatus()Z

    move-result v0
    :try_end_9
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_9 .. :try_end_9} :catch_5
    .catchall {:try_start_9 .. :try_end_9} :catchall_8

    if-eqz v0, :cond_9

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v5

    .line 175
    :cond_9
    :try_start_a
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_e

    .line 178
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->isHttpConnectionInject:Z
    :try_end_a
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_a .. :try_end_a} :catch_5
    .catchall {:try_start_a .. :try_end_a} :catchall_8

    if-nez v0, :cond_b

    .line 180
    :try_start_b
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->getResponseCode()I

    move-result v0

    .line 182
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isResponseCodeValid(I)Z

    move-result v2

    if-eqz v2, :cond_a

    goto :goto_5

    .line 183
    :cond_a
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x3ea

    const-string v11, "Http response error , code is : %s "

    new-array v12, v10, [Ljava/lang/Object;

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    aput-object v0, v12, v5

    invoke-static {v11, v12}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v3, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v2
    :try_end_b
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_b .. :try_end_b} :catch_0
    .catchall {:try_start_b .. :try_end_b} :catchall_3

    :catchall_3
    move-exception v0

    :try_start_c
    const-string v2, "ChunkRunnableGetResponseCode"

    .line 187
    invoke-static {v0, v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V

    goto :goto_5

    :catch_0
    move-exception v0

    .line 185
    throw v0

    .line 191
    :cond_b
    :goto_5
    new-instance v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    iget-object v12, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;
    :try_end_c
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_c .. :try_end_c} :catch_5
    .catchall {:try_start_c .. :try_end_c} :catchall_8

    move-object v2, v0

    move v13, v5

    move-object v5, v11

    move-wide v14, v6

    move-object/from16 v6, p1

    move-object v7, v12

    :try_start_d
    invoke-direct/range {v2 .. v7}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;)V

    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    if-eqz v9, :cond_d

    .line 194
    invoke-virtual {v9, v13}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getRetainLength(Z)J

    move-result-wide v2

    cmp-long v0, v19, v21

    if-eqz v0, :cond_c

    cmp-long v0, v19, v17

    if-ltz v0, :cond_c

    sub-long v19, v19, v17

    const-wide/16 v2, 0x1

    add-long v2, v19, v2

    :cond_c
    move-wide/from16 v28, v2

    .line 197
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    invoke-virtual {v9}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v24

    invoke-virtual {v9}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getEndOffset()J

    move-result-wide v26

    move-object/from16 v23, v0

    invoke-virtual/range {v23 .. v29}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setChunkOffset(JJJ)V
    :try_end_d
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_d .. :try_end_d} :catch_3
    .catchall {:try_start_d .. :try_end_d} :catchall_7

    .line 201
    :cond_d
    :try_start_e
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleResponse()V
    :try_end_e
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_e .. :try_end_e} :catch_1
    .catchall {:try_start_e .. :try_end_e} :catchall_7

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v10

    :catch_1
    move-exception v0

    move v5, v10

    goto/16 :goto_a

    :cond_e
    move v13, v5

    move-wide v14, v6

    .line 176
    :try_start_f
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v2, 0x3fe

    new-instance v3, Ljava/io/IOException;

    const-string v4, "download can\'t continue, chunk connection is null"

    invoke-direct {v3, v4}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    invoke-direct {v0, v2, v3}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw v0
    :try_end_f
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_f .. :try_end_f} :catch_3
    .catchall {:try_start_f .. :try_end_f} :catchall_7

    :catchall_4
    move-exception v0

    move v13, v5

    move-wide v14, v6

    goto :goto_6

    :catch_2
    move-exception v0

    move v13, v5

    move-wide v14, v6

    .line 156
    :try_start_10
    throw v0
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_5

    :catchall_5
    move-exception v0

    :goto_6
    move-object v4, v0

    .line 160
    :try_start_11
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_10

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;
    :try_end_11
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_11 .. :try_end_11} :catch_3
    .catchall {:try_start_11 .. :try_end_11} :catchall_7

    if-eqz v0, :cond_10

    .line 162
    :try_start_12
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->getResponseCode()I

    move-result v0

    if-lt v0, v3, :cond_f

    if-lt v0, v2, :cond_10

    .line 164
    :cond_f
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-interface {v0, v2}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->setHttpResponseStatus(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)V
    :try_end_12
    .catchall {:try_start_12 .. :try_end_12} :catchall_6

    goto :goto_7

    :catchall_6
    move-exception v0

    .line 167
    :try_start_13
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 168
    :cond_10
    :goto_7
    throw v4
    :try_end_13
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_13 .. :try_end_13} :catch_3
    .catchall {:try_start_13 .. :try_end_13} :catchall_7

    :catchall_7
    move-exception v0

    goto :goto_8

    :catch_3
    move-exception v0

    move v5, v13

    goto :goto_a

    :catchall_8
    move-exception v0

    move v13, v5

    .line 265
    :goto_8
    :try_start_14
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->isStoppedStatus()Z

    move-result v2
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_9

    if-eqz v2, :cond_11

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v10

    :cond_11
    :try_start_15
    const-string v2, "downloadChunkInner"

    .line 268
    invoke-static {v0, v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_15
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_15 .. :try_end_15} :catch_4
    .catchall {:try_start_15 .. :try_end_15} :catchall_9

    goto :goto_9

    :catch_4
    move-exception v0

    .line 270
    :try_start_16
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v2, v0}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    :try_end_16
    .catchall {:try_start_16 .. :try_end_16} :catchall_9

    .line 274
    :goto_9
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v13

    :catch_5
    move-exception v0

    move v13, v5

    move-wide v14, v6

    .line 207
    :goto_a
    :try_start_17
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->isStoppedStatus()Z

    move-result v2
    :try_end_17
    .catchall {:try_start_17 .. :try_end_17} :catchall_9

    if-eqz v2, :cond_12

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v10

    .line 211
    :cond_12
    :try_start_18
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isResponseCodeError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v2

    if-eqz v2, :cond_13

    .line 213
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v2, v0, v13}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onAllChunkRetryWithReset(Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)V
    :try_end_18
    .catchall {:try_start_18 .. :try_end_18} :catchall_9

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v13

    .line 215
    :cond_13
    :try_start_19
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v2, v0}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->canRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v2

    if-eqz v2, :cond_1c

    .line 217
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isHttpDataDirtyError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v2

    if-eqz v2, :cond_14

    .line 218
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v2, v0, v10}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onAllChunkRetryWithReset(Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)V
    :try_end_19
    .catchall {:try_start_19 .. :try_end_19} :catchall_9

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v13

    :cond_14
    if-eqz v5, :cond_18

    .line 223
    :try_start_1a
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    if-eqz v2, :cond_17

    const/16 v2, 0x20

    .line 224
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadExpSwitchCode;->isSwitchEnable(I)Z

    move-result v2

    if-eqz v2, :cond_16

    .line 225
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->getCurOffset()J

    move-result-wide v2

    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->getLastSyncBytes()J

    move-result-wide v4

    sub-long/2addr v2, v4

    cmp-long v4, v2, v21

    if-lez v4, :cond_15

    .line 227
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->getLastSyncBytes()J

    move-result-wide v4

    invoke-direct {v1, v8, v4, v5}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->revertDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;J)V

    goto :goto_c

    :cond_15
    if-gez v4, :cond_19

    goto :goto_b

    .line 232
    :cond_16
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->getCurOffset()J

    move-result-wide v2

    sub-long v21, v2, v14

    .line 233
    invoke-direct {v1, v8, v14, v15}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->revertDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;J)V

    goto :goto_b

    .line 236
    :cond_17
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v2, v0}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    :try_end_1a
    .catchall {:try_start_1a .. :try_end_1a} :catchall_9

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v13

    :cond_18
    :goto_b
    move-wide/from16 v2, v21

    :cond_19
    :goto_c
    const/16 v4, 0x10

    .line 241
    :try_start_1b
    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/utils/DownloadExpSwitchCode;->isSwitchEnable(I)Z

    move-result v4

    if-eqz v4, :cond_1a

    .line 242
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v4, v8, v0, v2, v3}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onSingleChunkRetry(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/exception/BaseException;J)Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    move-result-object v0

    goto :goto_d

    .line 244
    :cond_1a
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v4, v0, v2, v3}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;J)Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    move-result-object v0

    .line 246
    :goto_d
    sget-object v2, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;
    :try_end_1b
    .catchall {:try_start_1b .. :try_end_1b} :catchall_9

    if-ne v0, v2, :cond_1b

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v13

    .line 249
    :cond_1b
    :try_start_1c
    invoke-virtual {v8, v13}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setReuseingFirstConnection(Z)V

    .line 250
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V
    :try_end_1c
    .catchall {:try_start_1c .. :try_end_1c} :catchall_9

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    goto/16 :goto_0

    .line 253
    :cond_1c
    :try_start_1d
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedChunkDowngradeRetry()Z

    move-result v2

    if-eqz v2, :cond_1d

    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isChunkDowngradeRetryUsed()Z

    move-result v2

    if-nez v2, :cond_1d

    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v2

    if-le v2, v10, :cond_1d

    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 254
    invoke-static {v0, v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->canChunkDowngradeRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v2

    if-eqz v2, :cond_1d

    .line 256
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v2, v0}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onChunkDowngradeRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    :try_end_1d
    .catchall {:try_start_1d .. :try_end_1d} :catchall_9

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v13

    .line 260
    :cond_1d
    :try_start_1e
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v2, v0}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    :try_end_1e
    .catchall {:try_start_1e .. :try_end_1e} :catchall_9

    .line 274
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    return v13

    :catchall_9
    move-exception v0

    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    throw v0
.end method

.method private getUrl()Ljava/lang/String;
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getConnectionUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private isStoppedStatus()Z
    .locals 1

    .line 310
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->paused:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->canceled:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method private revertDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;J)V
    .locals 9

    .line 282
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isHostChunk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 283
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getFirstReuseChunk()Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, p1

    :goto_0
    if-eqz v0, :cond_2

    .line 289
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->canRefreshCurOffsetForReuseChunk()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 290
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v1

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v2

    invoke-interface {p1, v1, v2, p2, p3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadChunk(IIJ)V

    .line 292
    :cond_1
    invoke-virtual {v0, p2, p3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setCurrentOffset(J)V

    .line 293
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v4

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v5

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v6

    move-wide v7, p2

    invoke-interface/range {v3 .. v8}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateSubDownloadChunk(IIIJ)V

    goto :goto_1

    .line 295
    :cond_2
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isHostChunk()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 296
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result p1

    invoke-interface {v0, v1, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadChunk(IIJ)V

    :cond_3
    :goto_1
    return-void
.end method


# virtual methods
.method public cancel()V
    .locals 1

    const/4 v0, 0x1

    .line 320
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->canceled:Z

    .line 321
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    if-eqz v0, :cond_0

    .line 322
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->cancel()V

    :cond_0
    return-void
.end method

.method public getChunkIndex()I
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v0

    return v0
.end method

.method public pause()V
    .locals 1

    const/4 v0, 0x1

    .line 314
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->paused:Z

    .line 315
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    if-eqz v0, :cond_0

    .line 316
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->pause()V

    :cond_0
    return-void
.end method

.method public refreshResponseHandleOffset(JJ)V
    .locals 1

    .line 107
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    if-nez v0, :cond_0

    return-void

    .line 109
    :cond_0
    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setEndOffset(JJ)V

    return-void
.end method

.method public run()V
    .locals 3

    const/16 v0, 0xa

    .line 71
    invoke-static {v0}, Landroid/os/Process;->setThreadPriority(I)V

    .line 73
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->curDownloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    :goto_0
    const/4 v0, 0x0

    .line 76
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->curDownloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v1, p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setChunkRunnable(Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;)V

    .line 77
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->curDownloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-direct {p0, v1}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->downloadChunkInner(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 78
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->curDownloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setDownloading(Z)V

    goto :goto_1

    .line 81
    :cond_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->curDownloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setDownloading(Z)V

    .line 83
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->isStoppedStatus()Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_1

    .line 86
    :cond_1
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->curDownloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v2

    invoke-interface {v1, v2}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->getUnCompletedSubChunk(I)Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->curDownloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    .line 88
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->isStoppedStatus()Z

    move-result v1

    if-nez v1, :cond_3

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->curDownloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_2

    goto :goto_1

    :cond_2
    const-wide/16 v1, 0x32

    .line 92
    :try_start_1
    invoke-static {v1, v2}, Ljava/lang/Thread;->sleep(J)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 94
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    .line 99
    :cond_3
    :goto_1
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->curDownloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz v1, :cond_4

    .line 100
    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setDownloading(Z)V

    .line 101
    :cond_4
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    .line 102
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v0, p0}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onCompleted(Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;)V

    return-void

    :catchall_1
    move-exception v1

    .line 99
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->curDownloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz v2, :cond_5

    .line 100
    invoke-virtual {v2, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setDownloading(Z)V

    .line 101
    :cond_5
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->closeConnection()V

    .line 102
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v0, p0}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onCompleted(Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;)V

    throw v1
.end method
