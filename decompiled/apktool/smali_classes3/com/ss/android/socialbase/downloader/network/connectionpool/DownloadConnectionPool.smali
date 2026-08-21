.class public Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool$InstanceHolder;
    }
.end annotation


# static fields
.field public static final MAX_HOLD_CONNECTION:I = 0x3

.field private static final TAG:Ljava/lang/String; = "DownloadConnectionPool"


# instance fields
.field private final mCachedDownloadConnections:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;",
            ">;"
        }
    .end annotation
.end field

.field private final mCachedHeadConnections:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;",
            ">;"
        }
    .end annotation
.end field

.field protected maxCacheSize:I


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 204
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedHeadConnections:Ljava/util/Map;

    .line 26
    new-instance v0, Ljava/util/LinkedHashMap;

    const/4 v1, 0x3

    invoke-direct {v0, v1}, Ljava/util/LinkedHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    .line 28
    iput v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->maxCacheSize:I

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool$1;)V
    .locals 0

    .line 20
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;
    .locals 1

    .line 201
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool$InstanceHolder;->access$100()Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public getCachedDownloadConnection(Ljava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)",
            "Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;"
        }
    .end annotation

    .line 162
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    monitor-enter v0

    .line 163
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;

    .line 164
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz p1, :cond_1

    .line 166
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->getRequestHeaders()Ljava/util/List;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isHeaderEqual(Ljava/util/List;Ljava/util/List;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 168
    :try_start_1
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->joinExecute()V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 170
    invoke-virtual {p2}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 172
    :goto_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->isValid()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->isSuccessful()Z

    move-result p2

    if-eqz p2, :cond_0

    return-object p1

    .line 177
    :cond_0
    :try_start_2
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->end()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    :cond_1
    const/4 p1, 0x0

    return-object p1

    :catchall_1
    move-exception p1

    .line 164
    :try_start_3
    monitor-exit v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    throw p1
.end method

.method public getCachedHeadConnection(Ljava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)",
            "Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;"
        }
    .end annotation

    .line 97
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedHeadConnections:Ljava/util/Map;

    monitor-enter v0

    .line 98
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedHeadConnections:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;

    .line 99
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz p1, :cond_1

    .line 101
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->getRequestHeaders()Ljava/util/List;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isHeaderEqual(Ljava/util/List;Ljava/util/List;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 103
    :try_start_1
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->joinExecute()V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 105
    invoke-virtual {p2}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 107
    :goto_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->isValid()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->isSuccessful()Z

    move-result p2

    if-eqz p2, :cond_0

    return-object p1

    .line 112
    :cond_0
    :try_start_2
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->cancel()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    :cond_1
    const/4 p1, 0x0

    return-object p1

    :catchall_1
    move-exception p1

    .line 99
    :try_start_3
    monitor-exit v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    throw p1
.end method

.method public isDownloadConnectionExist(Ljava/lang/String;)Z
    .locals 3

    .line 186
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 188
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->isRequesting()Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    return v2

    .line 191
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->isValid()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->isSuccessful()Z

    move-result p1

    if-eqz p1, :cond_1

    move v0, v2

    :cond_1
    return v0
.end method

.method public isHeadConnectionExist(Ljava/lang/String;)Z
    .locals 3

    .line 130
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedHeadConnections:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 132
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->isRequesting()Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    return v2

    .line 135
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->isValid()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->isSuccessful()Z

    move-result p1

    if-eqz p1, :cond_1

    move v0, v2

    :cond_1
    return v0
.end method

.method putCachedDownloadConnections(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;)V
    .locals 3

    .line 42
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    monitor-enter v0

    .line 43
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    iget v2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->maxCacheSize:I

    if-ne v1, v2, :cond_0

    .line 44
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 45
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 46
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    if-eqz v1, :cond_0

    .line 49
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    invoke-interface {v2, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 53
    :goto_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    invoke-interface {v2, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 54
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v1, :cond_1

    .line 57
    :try_start_1
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->end()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 62
    :catchall_0
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mCachedConnections size = "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    invoke-interface {p2}, Ljava/util/Map;->size()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ", max size = "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->maxCacheSize:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "DownloadConnectionPool"

    invoke-static {p2, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :catchall_1
    move-exception p1

    .line 54
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw p1
.end method

.method putCachedHeadConnections(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;)V
    .locals 2

    .line 31
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedHeadConnections:Ljava/util/Map;

    monitor-enter v0

    .line 32
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedHeadConnections:Ljava/util/Map;

    invoke-interface {v1, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 33
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public releaseDownloadConnection(Ljava/lang/String;)V
    .locals 2

    .line 67
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    monitor-enter v0

    .line 68
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedDownloadConnections:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    .line 69
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz p1, :cond_0

    .line 72
    :try_start_1
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->end()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_0
    return-void

    :catchall_1
    move-exception p1

    .line 69
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw p1
.end method

.method public releaseHeadConnection(Ljava/lang/String;)V
    .locals 2

    .line 81
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedHeadConnections:Ljava/util/Map;

    monitor-enter v0

    .line 82
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->mCachedHeadConnections:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;

    .line 83
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_0

    .line 85
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->cancel()V

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 83
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method setMaxCachedDownloadConnectionSize(I)V
    .locals 0

    .line 37
    iput p1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->maxCacheSize:I

    return-void
.end method
