.class public final Lcom/tkay/core/common/h/a/d;
.super Ljava/lang/Object;


# static fields
.field private static g:Lcom/tkay/core/common/h/a/d;


# instance fields
.field a:[B

.field b:[B

.field private final c:I

.field private final d:I

.field private final e:I

.field private final f:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:I

.field private j:Ljava/net/Socket;


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 29
    iput v0, p0, Lcom/tkay/core/common/h/a/d;->c:I

    const/4 v0, 0x7

    .line 30
    iput v0, p0, Lcom/tkay/core/common/h/a/d;->d:I

    const/4 v0, 0x1

    .line 32
    iput v0, p0, Lcom/tkay/core/common/h/a/d;->e:I

    .line 36
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/core/common/h/a/d;->f:Ljava/lang/String;

    const/4 v1, 0x0

    .line 47
    iput-object v1, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    new-array v0, v0, [B

    .line 48
    iput-object v0, p0, Lcom/tkay/core/common/h/a/d;->b:[B

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/h/a/d;)I
    .locals 0

    .line 28
    invoke-direct {p0}, Lcom/tkay/core/common/h/a/d;->e()I

    move-result p0

    return p0
.end method

.method protected static declared-synchronized a()Lcom/tkay/core/common/h/a/d;
    .locals 2

    const-class v0, Lcom/tkay/core/common/h/a/d;

    monitor-enter v0

    .line 54
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/h/a/d;->g:Lcom/tkay/core/common/h/a/d;

    if-nez v1, :cond_0

    .line 55
    new-instance v1, Lcom/tkay/core/common/h/a/d;

    invoke-direct {v1}, Lcom/tkay/core/common/h/a/d;-><init>()V

    sput-object v1, Lcom/tkay/core/common/h/a/d;->g:Lcom/tkay/core/common/h/a/d;

    .line 57
    :cond_0
    sget-object v1, Lcom/tkay/core/common/h/a/d;->g:Lcom/tkay/core/common/h/a/d;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private declared-synchronized a(Lcom/tkay/core/common/h/a/c;)V
    .locals 7

    monitor-enter p0

    .line 1102
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    invoke-virtual {v0}, Ljava/net/Socket;->isConnected()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    invoke-virtual {v0}, Ljava/net/Socket;->isClosed()Z

    move-result v0

    if-nez v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    if-nez v0, :cond_3

    .line 2061
    monitor-enter p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 2062
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    if-nez v0, :cond_1

    .line 2063
    new-instance v0, Ljava/net/Socket;

    invoke-direct {v0}, Ljava/net/Socket;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    const v3, 0xea60

    .line 2064
    invoke-virtual {v0, v3}, Ljava/net/Socket;->setSoTimeout(I)V

    .line 2067
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 2074
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->v()Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/core/common/h/a/d;->h:Ljava/lang/String;

    .line 2075
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->w()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/h/a/d;->i:I

    .line 2076
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    new-instance v3, Ljava/net/InetSocketAddress;

    iget-object v4, p0, Lcom/tkay/core/common/h/a/d;->h:Ljava/lang/String;

    iget v5, p0, Lcom/tkay/core/common/h/a/d;->i:I

    invoke-direct {v3, v4, v5}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    const/16 v4, 0x7530

    invoke-virtual {v0, v3, v4}, Ljava/net/Socket;->connect(Ljava/net/SocketAddress;I)V

    .line 2079
    :cond_2
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    :try_start_2
    monitor-exit p0

    throw p1

    .line 200
    :cond_3
    :goto_1
    invoke-virtual {p1}, Lcom/tkay/core/common/h/a/c;->e()[B

    move-result-object v0

    if-eqz v0, :cond_7

    .line 202
    array-length v3, v0

    .line 207
    array-length v4, v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    if-nez v4, :cond_4

    .line 208
    monitor-exit p0

    return-void

    :cond_4
    add-int/lit8 v4, v3, 0x7

    .line 212
    :try_start_3
    iget-object v5, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    if-eqz v5, :cond_5

    iget-object v5, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    array-length v5, v5

    if-ge v5, v4, :cond_6

    .line 213
    :cond_5
    new-array v5, v4, [B

    iput-object v5, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    .line 218
    :cond_6
    iget-object v5, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    aput-byte v2, v5, v2

    .line 219
    iget-object v5, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    const/4 v6, 0x3

    aput-byte v6, v5, v1

    .line 220
    iget-object v1, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    const/4 v5, 0x2

    invoke-virtual {p1}, Lcom/tkay/core/common/h/a/c;->c()I

    move-result p1

    int-to-byte p1, p1

    aput-byte p1, v1, v5

    .line 221
    iget-object p1, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    ushr-int/lit8 v1, v3, 0x18

    and-int/lit16 v1, v1, 0xff

    int-to-byte v1, v1

    aput-byte v1, p1, v6

    .line 222
    iget-object p1, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    const/4 v1, 0x4

    ushr-int/lit8 v5, v3, 0x10

    and-int/lit16 v5, v5, 0xff

    int-to-byte v5, v5

    aput-byte v5, p1, v1

    .line 223
    iget-object p1, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    const/4 v1, 0x5

    ushr-int/lit8 v5, v3, 0x8

    and-int/lit16 v5, v5, 0xff

    int-to-byte v5, v5

    aput-byte v5, p1, v1

    .line 224
    iget-object p1, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    const/4 v1, 0x6

    ushr-int/2addr v3, v2

    and-int/lit16 v3, v3, 0xff

    int-to-byte v3, v3

    aput-byte v3, p1, v1

    .line 227
    iget-object p1, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    array-length v1, v0

    const/4 v3, 0x7

    invoke-static {v0, v2, p1, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 235
    iget-object p1, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    invoke-virtual {p1}, Ljava/net/Socket;->getOutputStream()Ljava/io/OutputStream;

    move-result-object p1

    .line 237
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->a:[B

    invoke-virtual {p1, v0, v2, v4}, Ljava/io/OutputStream;->write([BII)V

    .line 238
    invoke-virtual {p1}, Ljava/io/OutputStream;->flush()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 239
    monitor-exit p0

    return-void

    .line 204
    :cond_7
    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private a(Lcom/tkay/core/common/h/a/c;Lcom/tkay/core/common/h/a/c$a;)V
    .locals 1

    .line 107
    new-instance v0, Lcom/tkay/core/common/h/a/d$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/core/common/h/a/d$1;-><init>(Lcom/tkay/core/common/h/a/d;Lcom/tkay/core/common/h/a/c;Lcom/tkay/core/common/h/a/c$a;)V

    .line 183
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    const/4 p2, 0x4

    invoke-virtual {p1, v0, p2}, Lcom/tkay/core/common/l/b/a;->a(Lcom/tkay/core/common/l/b/b;I)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/h/a/d;Lcom/tkay/core/common/h/a/c;)V
    .locals 0

    .line 28
    invoke-direct {p0, p1}, Lcom/tkay/core/common/h/a/d;->a(Lcom/tkay/core/common/h/a/c;)V

    return-void
.end method

.method private b()V
    .locals 4

    .line 61
    monitor-enter p0

    .line 62
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    if-nez v0, :cond_0

    .line 63
    new-instance v0, Ljava/net/Socket;

    invoke-direct {v0}, Ljava/net/Socket;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    const v1, 0xea60

    .line 64
    invoke-virtual {v0, v1}, Ljava/net/Socket;->setSoTimeout(I)V

    .line 67
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 74
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->v()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/core/common/h/a/d;->h:Ljava/lang/String;

    .line 75
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->w()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/h/a/d;->i:I

    .line 76
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    new-instance v1, Ljava/net/InetSocketAddress;

    iget-object v2, p0, Lcom/tkay/core/common/h/a/d;->h:Ljava/lang/String;

    iget v3, p0, Lcom/tkay/core/common/h/a/d;->i:I

    invoke-direct {v1, v2, v3}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    const/16 v2, 0x7530

    invoke-virtual {v0, v1, v2}, Ljava/net/Socket;->connect(Ljava/net/SocketAddress;I)V

    .line 79
    :cond_1
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method static synthetic b(Lcom/tkay/core/common/h/a/d;)V
    .locals 1

    .line 2084
    monitor-enter p0

    .line 2086
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    if-eqz v0, :cond_0

    .line 2087
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    invoke-virtual {v0}, Ljava/net/Socket;->close()V

    const/4 v0, 0x0

    .line 2088
    iput-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    goto :goto_1

    .line 2098
    :catch_0
    :cond_0
    :goto_0
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :goto_1
    monitor-exit p0

    throw v0
.end method

.method static synthetic c(Lcom/tkay/core/common/h/a/d;)Ljava/lang/String;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/core/common/h/a/d;->h:Ljava/lang/String;

    return-object p0
.end method

.method private c()V
    .locals 1

    .line 84
    monitor-enter p0

    .line 86
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    if-eqz v0, :cond_0

    .line 87
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    invoke-virtual {v0}, Ljava/net/Socket;->close()V

    const/4 v0, 0x0

    .line 88
    iput-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    goto :goto_1

    .line 98
    :catch_0
    :cond_0
    :goto_0
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :goto_1
    monitor-exit p0

    throw v0
.end method

.method static synthetic d(Lcom/tkay/core/common/h/a/d;)I
    .locals 0

    .line 28
    iget p0, p0, Lcom/tkay/core/common/h/a/d;->i:I

    return p0
.end method

.method private d()Z
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/net/Socket;->isConnected()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    invoke-virtual {v0}, Ljava/net/Socket;->isClosed()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private declared-synchronized e()I
    .locals 4

    monitor-enter p0

    .line 242
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->j:Ljava/net/Socket;

    invoke-virtual {v0}, Ljava/net/Socket;->getInputStream()Ljava/io/InputStream;

    move-result-object v0

    .line 244
    iget-object v1, p0, Lcom/tkay/core/common/h/a/d;->b:[B

    const/4 v2, 0x1

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3, v2}, Ljava/io/InputStream;->read([BII)I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    .line 250
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d;->b:[B

    aget-byte v0, v0, v3

    .line 251
    iget-object v1, p0, Lcom/tkay/core/common/h/a/d;->b:[B

    aput-byte v3, v1, v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 252
    monitor-exit p0

    return v0

    .line 247
    :cond_0
    :try_start_1
    new-instance v0, Ljava/net/SocketException;

    const-string v1, "Socket.InputStream read length = -1!"

    invoke-direct {v0, v1}, Ljava/net/SocketException;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
