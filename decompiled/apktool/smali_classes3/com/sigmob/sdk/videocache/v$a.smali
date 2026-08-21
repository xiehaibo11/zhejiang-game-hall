.class Lcom/sigmob/sdk/videocache/v$a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/videocache/v;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/util/concurrent/atomic/AtomicBoolean;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/sigmob/sdk/videocache/v$a;->b:Ljava/util/concurrent/atomic/AtomicBoolean;

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/v$a;->a:Ljava/lang/String;

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 6

    const/4 v0, 0x0

    const/4 v1, 0x1

    const/4 v2, 0x0

    :try_start_0
    new-instance v3, Ljava/net/URL;

    invoke-direct {v3, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v3, 0x1388

    :try_start_1
    invoke-virtual {p1, v3}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    invoke-virtual {p1, v3}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->connect()V

    const/16 v3, 0x400

    new-array v3, v3, [B

    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v0

    :cond_0
    invoke-virtual {v0, v3}, Ljava/io/InputStream;->read([B)I

    move-result v4

    const/4 v5, -0x1

    if-eq v4, v5, :cond_1

    iget-object v4, p0, Lcom/sigmob/sdk/videocache/v$a;->b:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v4}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v4

    if-eqz v4, :cond_0

    const-string v3, "cancelPreLoadVideo,\u53d6\u6d88\u7f51\u7edc\u8bf7\u6c42,\u6210\u529f(\u6b63\u5728\u4e0b\u8f7d\u6570\u636e),url=%s"

    new-array v4, v1, [Ljava/lang/Object;

    iget-object v5, p0, Lcom/sigmob/sdk/videocache/v$a;->a:Ljava/lang/String;

    aput-object v5, v4, v2

    invoke-static {v3, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :cond_1
    const-string v3, "preloadVideo,\u7f51\u7edc\u6587\u4ef6,\u6210\u529f,url=%s"

    new-array v4, v1, [Ljava/lang/Object;

    iget-object v5, p0, Lcom/sigmob/sdk/videocache/v$a;->a:Ljava/lang/String;

    aput-object v5, v4, v2

    invoke-static {v3, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v0, :cond_2

    :try_start_2
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    if-eqz p1, :cond_4

    :try_start_3
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_4

    goto :goto_3

    :catch_1
    move-exception v3

    goto :goto_1

    :catchall_0
    move-exception v1

    move-object p1, v0

    goto :goto_4

    :catch_2
    move-exception v3

    move-object p1, v0

    :goto_1
    :try_start_4
    const-string v4, "preloadVideo,\u7f51\u7edc\u6587\u4ef6,\u5931\u8d25,msg=%s,url=%s"

    const/4 v5, 0x2

    new-array v5, v5, [Ljava/lang/Object;

    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v5, v2

    iget-object v2, p0, Lcom/sigmob/sdk/videocache/v$a;->a:Ljava/lang/String;

    aput-object v2, v5, v1

    invoke-static {v4, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v0, :cond_3

    :try_start_5
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_2

    :catch_3
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_2
    if-eqz p1, :cond_4

    :try_start_6
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_4

    goto :goto_3

    :catch_4
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_3
    return-void

    :catchall_1
    move-exception v1

    :goto_4
    if-eqz v0, :cond_5

    :try_start_7
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_5

    goto :goto_5

    :catch_5
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_5
    :goto_5
    if-eqz p1, :cond_6

    :try_start_8
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_6

    goto :goto_6

    :catch_6
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_6
    :goto_6
    throw v1
.end method


# virtual methods
.method public a(Z)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/v$a;->b:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    return-void
.end method

.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/v$a;->b:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/sigmob/sdk/videocache/v$a;->a:Ljava/lang/String;

    aput-object v2, v0, v1

    const-string v1, "cancelPreLoadVideo,\u53d6\u6d88\u7f51\u7edc\u8bf7\u6c42,\u6210\u529f(\u672a\u4e0b\u8f7d\u6570\u636e),url=%s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videocache/v$a;->a:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/videocache/v$a;->a(Ljava/lang/String;)V

    return-void
.end method
