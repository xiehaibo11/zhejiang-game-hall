.class final Lcom/kwad/sdk/ranger/RangerHelper$1;
.super Lokhttp3/internal/Internal;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/ranger/RangerHelper;->replaceInternal()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic aGR:Lokhttp3/internal/Internal;


# direct methods
.method constructor <init>(Lokhttp3/internal/Internal;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    invoke-direct {p0}, Lokhttp3/internal/Internal;-><init>()V

    return-void
.end method


# virtual methods
.method public final acquire(Lokhttp3/ConnectionPool;Lokhttp3/Address;Lokhttp3/internal/connection/StreamAllocation;Lokhttp3/Route;)V
    .locals 3

    invoke-static {p3}, Lcom/kwad/sdk/ranger/RangerHelper;->b(Lokhttp3/internal/connection/StreamAllocation;)V

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    const/4 v1, 0x4

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 p1, 0x1

    aput-object p2, v1, p1

    const/4 p1, 0x2

    aput-object p3, v1, p1

    const/4 p1, 0x3

    aput-object p4, v1, p1

    const-string p1, "acquire"

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/utils/s;->g(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final addLenient(Lokhttp3/Headers$Builder;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    invoke-virtual {v0, p1, p2}, Lokhttp3/internal/Internal;->addLenient(Lokhttp3/Headers$Builder;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "Ranger_Helper"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final addLenient(Lokhttp3/Headers$Builder;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    invoke-virtual {v0, p1, p2, p3}, Lokhttp3/internal/Internal;->addLenient(Lokhttp3/Headers$Builder;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "Ranger_Helper"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final apply(Lokhttp3/ConnectionSpec;Ljavax/net/ssl/SSLSocket;Z)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    invoke-virtual {v0, p1, p2, p3}, Lokhttp3/internal/Internal;->apply(Lokhttp3/ConnectionSpec;Ljavax/net/ssl/SSLSocket;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "Ranger_Helper"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final code(Lokhttp3/Response$Builder;)I
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    invoke-virtual {v0, p1}, Lokhttp3/internal/Internal;->code(Lokhttp3/Response$Builder;)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "Ranger_Helper"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, -0x1

    return p1
.end method

.method public final connectionBecameIdle(Lokhttp3/ConnectionPool;Lokhttp3/internal/connection/RealConnection;)Z
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    invoke-virtual {v0, p1, p2}, Lokhttp3/internal/Internal;->connectionBecameIdle(Lokhttp3/ConnectionPool;Lokhttp3/internal/connection/RealConnection;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "Ranger_Helper"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method public final deduplicate(Lokhttp3/ConnectionPool;Lokhttp3/Address;Lokhttp3/internal/connection/StreamAllocation;)Ljava/net/Socket;
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    invoke-virtual {v0, p1, p2, p3}, Lokhttp3/internal/Internal;->deduplicate(Lokhttp3/ConnectionPool;Lokhttp3/Address;Lokhttp3/internal/connection/StreamAllocation;)Ljava/net/Socket;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "Ranger_Helper"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public final equalsNonHost(Lokhttp3/Address;Lokhttp3/Address;)Z
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 p1, 0x1

    aput-object p2, v1, p1

    const-string p1, "equalsNonHost"

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/utils/s;->g(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    return p1

    :cond_0
    return v2
.end method

.method public final get(Lokhttp3/ConnectionPool;Lokhttp3/Address;Lokhttp3/internal/connection/StreamAllocation;)Lokhttp3/internal/connection/RealConnection;
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 p1, 0x1

    aput-object p2, v1, p1

    const/4 p1, 0x2

    aput-object p3, v1, p1

    const-string p1, "get"

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/utils/s;->g(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lokhttp3/internal/connection/RealConnection;

    return-object p1
.end method

.method public final get(Lokhttp3/ConnectionPool;Lokhttp3/Address;Lokhttp3/internal/connection/StreamAllocation;Lokhttp3/Route;)Lokhttp3/internal/connection/RealConnection;
    .locals 3

    invoke-static {p3}, Lcom/kwad/sdk/ranger/RangerHelper;->b(Lokhttp3/internal/connection/StreamAllocation;)V

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    const/4 v1, 0x4

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 p1, 0x1

    aput-object p2, v1, p1

    const/4 p1, 0x2

    aput-object p3, v1, p1

    const/4 p1, 0x3

    aput-object p4, v1, p1

    const-string p1, "get"

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/utils/s;->g(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lokhttp3/internal/connection/RealConnection;

    return-object p1
.end method

.method public final getHttpUrlChecked(Ljava/lang/String;)Lokhttp3/HttpUrl;
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const-string p1, "getHttpUrlChecked"

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/utils/s;->g(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lokhttp3/HttpUrl;

    return-object p1
.end method

.method public final initCodec(Lokhttp3/Response$Builder;Lokhttp3/internal/http/HttpCodec;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 p1, 0x1

    aput-object p2, v1, p1

    const-string p1, "initCodec"

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/utils/s;->g(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final isInvalidHttpUrlHost(Ljava/lang/IllegalArgumentException;)Z
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const-string p1, "isInvalidHttpUrlHost"

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/utils/s;->g(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    return p1

    :cond_0
    return v2
.end method

.method public final newWebSocketCall(Lokhttp3/OkHttpClient;Lokhttp3/Request;)Lokhttp3/Call;
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    invoke-virtual {v0, p1, p2}, Lokhttp3/internal/Internal;->newWebSocketCall(Lokhttp3/OkHttpClient;Lokhttp3/Request;)Lokhttp3/Call;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "Ranger_Helper"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public final put(Lokhttp3/ConnectionPool;Lokhttp3/internal/connection/RealConnection;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 p1, 0x1

    aput-object p2, v1, p1

    const-string p1, "put"

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/utils/s;->g(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final routeDatabase(Lokhttp3/ConnectionPool;)Lokhttp3/internal/connection/RouteDatabase;
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    invoke-virtual {v0, p1}, Lokhttp3/internal/Internal;->routeDatabase(Lokhttp3/ConnectionPool;)Lokhttp3/internal/connection/RouteDatabase;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "Ranger_Helper"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public final setCache(Lokhttp3/OkHttpClient$Builder;Lokhttp3/internal/cache/InternalCache;)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    invoke-virtual {v0, p1, p2}, Lokhttp3/internal/Internal;->setCache(Lokhttp3/OkHttpClient$Builder;Lokhttp3/internal/cache/InternalCache;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "Ranger_Helper"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final streamAllocation(Lokhttp3/Call;)Lokhttp3/internal/connection/StreamAllocation;
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    invoke-virtual {v0, p1}, Lokhttp3/internal/Internal;->streamAllocation(Lokhttp3/Call;)Lokhttp3/internal/connection/StreamAllocation;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "Ranger_Helper"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public final timeoutExit(Lokhttp3/Call;Ljava/io/IOException;)Ljava/io/IOException;
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$1;->aGR:Lokhttp3/internal/Internal;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 p1, 0x1

    aput-object p2, v1, p1

    const-string p1, "timeoutExit"

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/utils/s;->g(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/io/IOException;

    return-object p1
.end method
