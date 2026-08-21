.class public Lcom/sigmob/sdk/base/common/w;
.super Ljava/lang/Object;


# instance fields
.field private a:I

.field private b:Ljava/lang/String;

.field private c:I

.field private d:Ljava/lang/String;

.field private e:Ljava/net/ServerSocket;

.field private f:Ljava/net/Socket;

.field private g:Ljava/net/SocketAddress;

.field private h:Z

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;


# direct methods
.method public constructor <init>(I)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/sigmob/sdk/base/common/w;->a:I

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/w;->e:Ljava/net/ServerSocket;

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/w;->f:Ljava/net/Socket;

    :try_start_0
    iput p1, p0, Lcom/sigmob/sdk/base/common/w;->c:I

    const-string p1, "localhost"

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/w;->d:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string v0, "MediaPlayerHttpStreamProxy init "

    invoke-static {v0, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/w;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/w;->c()V

    return-void
.end method

.method private b()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/common/w;->h:Z

    return-void
.end method

.method private c()V
    .locals 11

    const/16 v0, 0x400

    new-array v0, v0, [B

    :try_start_0
    new-instance v1, Ljava/net/ServerSocket;

    iget v2, p0, Lcom/sigmob/sdk/base/common/w;->c:I

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/w;->d:Ljava/lang/String;

    invoke-static {v3}, Ljava/net/InetAddress;->getByName(Ljava/lang/String;)Ljava/net/InetAddress;

    move-result-object v3

    const/4 v4, 0x1

    invoke-direct {v1, v2, v4, v3}, Ljava/net/ServerSocket;-><init>(IILjava/net/InetAddress;)V

    iput-object v1, p0, Lcom/sigmob/sdk/base/common/w;->e:Ljava/net/ServerSocket;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_2

    new-instance v1, Ljava/net/InetSocketAddress;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/w;->b:Ljava/lang/String;

    iget v3, p0, Lcom/sigmob/sdk/base/common/w;->a:I

    invoke-direct {v1, v2, v3}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    iput-object v1, p0, Lcom/sigmob/sdk/base/common/w;->g:Ljava/net/SocketAddress;

    :goto_0
    iget-boolean v1, p0, Lcom/sigmob/sdk/base/common/w;->h:Z

    if-nez v1, :cond_7

    :try_start_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/common/w;->f:Ljava/net/Socket;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/w;->f:Ljava/net/Socket;

    invoke-virtual {v1}, Ljava/net/Socket;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_0
    :try_start_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/common/w;->e:Ljava/net/ServerSocket;

    invoke-virtual {v1}, Ljava/net/ServerSocket;->accept()Ljava/net/Socket;

    move-result-object v1

    iput-object v1, p0, Lcom/sigmob/sdk/base/common/w;->f:Ljava/net/Socket;

    const-string v1, "------------------------------------------------------------------"

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/w;->f:Ljava/net/Socket;

    invoke-virtual {v1, v4}, Ljava/net/Socket;->setKeepAlive(Z)V

    new-instance v1, Lcom/sigmob/sdk/base/network/c$b;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/w;->b:Ljava/lang/String;

    iget v3, p0, Lcom/sigmob/sdk/base/common/w;->a:I

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/w;->d:Ljava/lang/String;

    iget v6, p0, Lcom/sigmob/sdk/base/common/w;->c:I

    invoke-direct {v1, v2, v3, v5, v6}, Lcom/sigmob/sdk/base/network/c$b;-><init>(Ljava/lang/String;ILjava/lang/String;I)V

    new-instance v2, Lcom/sigmob/sdk/base/network/c$a;

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/w;->f:Ljava/net/Socket;

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/w;->g:Ljava/net/SocketAddress;

    invoke-direct {v2, v3, v5}, Lcom/sigmob/sdk/base/network/c$a;-><init>(Ljava/net/Socket;Ljava/net/SocketAddress;)V

    const/4 v3, 0x0

    :cond_1
    iget-object v5, p0, Lcom/sigmob/sdk/base/common/w;->f:Ljava/net/Socket;

    invoke-virtual {v5}, Ljava/net/Socket;->getInputStream()Ljava/io/InputStream;

    move-result-object v5

    invoke-virtual {v5, v0}, Ljava/io/InputStream;->read([B)I

    move-result v5

    const/4 v6, -0x1

    if-eq v5, v6, :cond_2

    invoke-virtual {v1, v0, v5}, Lcom/sigmob/sdk/base/network/c$b;->a([BI)[B

    move-result-object v5

    if-eqz v5, :cond_1

    invoke-virtual {v1, v5}, Lcom/sigmob/sdk/base/network/c$b;->a([B)Lcom/sigmob/sdk/base/network/c$b$a;

    move-result-object v3

    :cond_2
    invoke-virtual {v1}, Lcom/sigmob/sdk/base/network/c$b;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/sigmob/sdk/base/network/c$a;->a([B)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    const/4 v1, 0x0

    move v5, v1

    :cond_3
    :goto_1
    if-nez v1, :cond_6

    :try_start_3
    iget-object v6, p0, Lcom/sigmob/sdk/base/common/w;->i:Ljava/lang/String;

    new-instance v7, Ljava/io/File;

    iget-object v8, p0, Lcom/sigmob/sdk/base/common/w;->j:Ljava/lang/String;

    invoke-direct {v7, v8}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v7}, Ljava/io/File;->isFile()Z

    move-result v7

    if-eqz v7, :cond_4

    iget-object v6, p0, Lcom/sigmob/sdk/base/common/w;->j:Ljava/lang/String;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :try_start_4
    const-string v1, "final video path is exist"

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    move v1, v4

    goto :goto_2

    :catchall_0
    move-exception v1

    move v6, v4

    goto :goto_3

    :cond_4
    :try_start_5
    new-instance v7, Ljava/io/File;

    invoke-direct {v7, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v7}, Ljava/io/File;->isFile()Z

    move-result v7

    if-eqz v7, :cond_5

    const-string v7, "temp video path is exist"

    invoke-static {v7}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :goto_2
    iget-wide v7, v3, Lcom/sigmob/sdk/base/network/c$b$a;->b:J

    invoke-virtual {v2, v6, v7, v8}, Lcom/sigmob/sdk/base/network/c$a;->a(Ljava/lang/String;J)I

    move-result v5

    goto :goto_4

    :cond_5
    const-string v6, "can\'t find invalid video path , sleep 100ms"

    invoke-static {v6}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const-wide/16 v6, 0x64

    invoke-static {v6, v7}, Ljava/lang/Thread;->sleep(J)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v6

    move-object v10, v6

    move v6, v1

    move-object v1, v10

    :goto_3
    :try_start_6
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    move v1, v6

    :goto_4
    if-lez v5, :cond_3

    int-to-long v6, v5

    iget-wide v8, v3, Lcom/sigmob/sdk/base/network/c$b$a;->b:J

    add-long/2addr v6, v8

    long-to-int v6, v6

    int-to-long v6, v6

    iput-wide v6, v3, Lcom/sigmob/sdk/base/network/c$b$a;->b:J

    goto :goto_1

    :cond_6
    const-string v1, ".........over.........."

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/w;->f:Ljava/net/Socket;

    invoke-virtual {v1}, Ljava/net/Socket;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_1

    goto/16 :goto_0

    :catch_1
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    invoke-static {v1}, Lcom/sigmob/sdk/base/network/c;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_7
    return-void

    :catch_2
    move-exception v0

    const-string v1, "localserver fail"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/common/w$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/base/common/w$1;-><init>(Lcom/sigmob/sdk/base/common/w;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/w$1;->start()V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;
    .locals 2

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/w;->i:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/common/w;->j:Ljava/lang/String;

    const-string p2, "https"

    const-string p3, "http"

    invoke-virtual {p1, p2, p3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/w;->k:Ljava/lang/String;

    invoke-static {p1}, Ljava/net/URI;->create(Ljava/lang/String;)Ljava/net/URI;

    move-result-object p1

    invoke-virtual {p1}, Ljava/net/URI;->getHost()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/w;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/net/URI;->getPort()I

    move-result p2

    const-string p3, ":"

    const/4 v0, -0x1

    if-eq p2, v0, :cond_0

    invoke-virtual {p1}, Ljava/net/URI;->getPort()I

    move-result p2

    iput p2, p0, Lcom/sigmob/sdk/base/common/w;->a:I

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/w;->k:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/w;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/net/URI;->getPort()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/w;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p3, p0, Lcom/sigmob/sdk/base/common/w;->c:I

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p1, p3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/16 p1, 0x50

    iput p1, p0, Lcom/sigmob/sdk/base/common/w;->a:I

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/w;->k:Ljava/lang/String;

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/w;->b:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/w;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p3, p0, Lcom/sigmob/sdk/base/common/w;->c:I

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p2, p3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    const/4 p2, 0x2

    new-array p2, p2, [Ljava/lang/String;

    const/4 p3, 0x0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/w;->k:Ljava/lang/String;

    aput-object v0, p2, p3

    const/4 p3, 0x1

    aput-object p1, p2, p3

    return-object p2
.end method
