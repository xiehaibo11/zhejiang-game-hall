.class public Lcom/tkay/expressad/foundation/g/f/f/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/f/g;


# static fields
.field private static final a:Ljava/lang/String;

.field private static final b:I = 0xbb8


# instance fields
.field private c:Lcom/tkay/expressad/foundation/g/f/e/a;

.field private d:Lcom/tkay/expressad/foundation/g/f/c;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 26
    const-class v0, Lcom/tkay/expressad/foundation/g/f/f/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/g/f/f/a;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/tkay/expressad/foundation/g/f/e/a;Lcom/tkay/expressad/foundation/g/f/c;)V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 35
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/f/a;->c:Lcom/tkay/expressad/foundation/g/f/e/a;

    .line 36
    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/f/f/a;->d:Lcom/tkay/expressad/foundation/g/f/c;

    return-void
.end method

.method private static a(JLcom/tkay/expressad/foundation/g/f/i;[BI)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(J",
            "Lcom/tkay/expressad/foundation/g/f/i<",
            "*>;[BI)V"
        }
    .end annotation

    .line 217
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_3

    const-wide/16 v0, 0xbb8

    cmp-long v0, p0, v0

    const/4 v1, 0x5

    const/4 v2, 0x4

    const-string v3, "null"

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x1

    const/4 v7, 0x0

    const/4 v8, 0x6

    if-lez v0, :cond_1

    :try_start_0
    const-string v0, "Slow HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]"

    new-array v8, v8, [Ljava/lang/Object;

    .line 221
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/g/f/i;->d()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v8, v7

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/g/f/i;->a()I

    move-result v7

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v8, v6

    invoke-static {p0, p1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    aput-object p0, v8, v5

    if-eqz p3, :cond_0

    .line 222
    array-length p0, p3

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    :cond_0
    aput-object v3, v8, v4

    .line 223
    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v8, v2

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/g/f/i;->l()Lcom/tkay/expressad/foundation/g/f/l;

    move-result-object p0

    invoke-interface {p0}, Lcom/tkay/expressad/foundation/g/f/l;->c()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v8, v1

    .line 220
    invoke-static {v0, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void

    :cond_1
    :try_start_1
    const-string v0, "Normal HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]"

    new-array v8, v8, [Ljava/lang/Object;

    .line 230
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/g/f/i;->d()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v8, v7

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/g/f/i;->a()I

    move-result v7

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v8, v6

    invoke-static {p0, p1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    aput-object p0, v8, v5

    if-eqz p3, :cond_2

    .line 231
    array-length p0, p3

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    :cond_2
    aput-object v3, v8, v4

    .line 232
    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v8, v2

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/g/f/i;->l()Lcom/tkay/expressad/foundation/g/f/l;

    move-result-object p0

    invoke-interface {p0}, Lcom/tkay/expressad/foundation/g/f/l;->c()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v8, v1

    .line 229
    invoke-static {v0, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :cond_3
    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/g/f/i;Lcom/tkay/expressad/foundation/g/f/a/a;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/g/f/i<",
            "*>;",
            "Lcom/tkay/expressad/foundation/g/f/a/a;",
            ")V"
        }
    .end annotation

    .line 257
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->l()Lcom/tkay/expressad/foundation/g/f/l;

    move-result-object v0

    .line 259
    invoke-interface {v0}, Lcom/tkay/expressad/foundation/g/f/l;->d()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 261
    iget-object p2, p0, Lcom/tkay/expressad/foundation/g/f/f/a;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/foundation/g/f/c;->e(Lcom/tkay/expressad/foundation/g/f/i;)V

    return-void

    .line 263
    :cond_0
    throw p2
.end method

.method private static a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "J",
            "Lcom/tkay/expressad/foundation/g/f/i<",
            "*>;)V"
        }
    .end annotation

    .line 241
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_1

    :try_start_0
    const-string v0, "HTTP exception for request=<%s> [lifetime=%d], [size=%s], [retryCount=%s]"

    const/4 v1, 0x4

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    .line 247
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/g/f/i;->d()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x1

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    aput-object p1, v1, v2

    const/4 p1, 0x2

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const-string p0, "null"

    :goto_0
    aput-object p0, v1, p1

    const/4 p0, 0x3

    .line 248
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/g/f/i;->l()Lcom/tkay/expressad/foundation/g/f/l;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/foundation/g/f/l;->c()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v1, p0

    .line 243
    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/foundation/g/f/i;)Lcom/tkay/expressad/foundation/g/f/f/c;
    .locals 21
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/g/f/i<",
            "*>;)",
            "Lcom/tkay/expressad/foundation/g/f/f/c;"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    .line 41
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    if-eqz v2, :cond_0

    .line 45
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/foundation/g/f/i;->l()Lcom/tkay/expressad/foundation/g/f/l;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/4 v6, 0x0

    if-eqz v0, :cond_1

    .line 50
    invoke-interface {v0}, Lcom/tkay/expressad/foundation/g/f/l;->a()I

    move-result v6

    :cond_1
    const/16 v9, 0x1f3

    const-string v14, "IOException ex= "

    const-string v15, "UnknownHostException ex= "

    const-string v13, "MalformedURLException ex= "

    const-string v5, "SSLProtocolException ex= "

    const-string v12, "ConnectException ex= "

    const-string v8, "ConnectTimeoutException ex= "

    const-string v7, "SocketTimeoutException ex= "

    const/4 v10, -0x2

    if-gtz v6, :cond_9

    .line 55
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/foundation/g/f/i;->f()Z

    move-result v0

    if-nez v0, :cond_8

    .line 64
    :try_start_0
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/foundation/g/f/i;->i()V

    .line 66
    iget-object v0, v1, Lcom/tkay/expressad/foundation/g/f/f/a;->c:Lcom/tkay/expressad/foundation/g/f/e/a;

    invoke-interface {v0, v2}, Lcom/tkay/expressad/foundation/g/f/e/a;->a(Lcom/tkay/expressad/foundation/g/f/i;)Lcom/tkay/expressad/foundation/g/f/f/b;

    move-result-object v6
    :try_end_0
    .catch Ljava/net/SocketTimeoutException; {:try_start_0 .. :try_end_0} :catch_9
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_0 .. :try_end_0} :catch_8
    .catch Ljava/net/ConnectException; {:try_start_0 .. :try_end_0} :catch_7
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_0 .. :try_end_0} :catch_6
    .catch Ljava/net/MalformedURLException; {:try_start_0 .. :try_end_0} :catch_5
    .catch Ljava/net/UnknownHostException; {:try_start_0 .. :try_end_0} :catch_4
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_3

    .line 67
    :try_start_1
    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/f/b;->a()I

    move-result v0

    .line 69
    iget-object v10, v1, Lcom/tkay/expressad/foundation/g/f/f/a;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-virtual {v2, v6, v10}, Lcom/tkay/expressad/foundation/g/f/i;->a(Lcom/tkay/expressad/foundation/g/f/f/b;Lcom/tkay/expressad/foundation/g/f/c;)[B

    move-result-object v10
    :try_end_1
    .catch Ljava/net/SocketTimeoutException; {:try_start_1 .. :try_end_1} :catch_9
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_1 .. :try_end_1} :catch_8
    .catch Ljava/net/ConnectException; {:try_start_1 .. :try_end_1} :catch_7
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_1 .. :try_end_1} :catch_6
    .catch Ljava/net/MalformedURLException; {:try_start_1 .. :try_end_1} :catch_5
    .catch Ljava/net/UnknownHostException; {:try_start_1 .. :try_end_1} :catch_4
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_2

    .line 71
    :try_start_2
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v17
    :try_end_2
    .catch Ljava/net/SocketTimeoutException; {:try_start_2 .. :try_end_2} :catch_9
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_2 .. :try_end_2} :catch_8
    .catch Ljava/net/ConnectException; {:try_start_2 .. :try_end_2} :catch_7
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_2 .. :try_end_2} :catch_6
    .catch Ljava/net/MalformedURLException; {:try_start_2 .. :try_end_2} :catch_5
    .catch Ljava/net/UnknownHostException; {:try_start_2 .. :try_end_2} :catch_4
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_1

    move-object/from16 v19, v12

    sub-long v11, v17, v3

    .line 72
    :try_start_3
    invoke-static {v11, v12, v2, v10, v0}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(JLcom/tkay/expressad/foundation/g/f/i;[BI)V

    const/16 v11, 0xc8

    if-lt v0, v11, :cond_2

    const/16 v11, 0x18f

    if-gt v0, v11, :cond_2

    .line 76
    new-instance v11, Lcom/tkay/expressad/foundation/g/f/f/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/f/b;->b()Ljava/util/List;

    move-result-object v12

    invoke-direct {v11, v0, v10, v12}, Lcom/tkay/expressad/foundation/g/f/f/c;-><init>(I[BLjava/util/List;)V

    return-object v11

    .line 74
    :cond_2
    new-instance v0, Ljava/io/IOException;

    invoke-direct {v0}, Ljava/io/IOException;-><init>()V

    throw v0
    :try_end_3
    .catch Ljava/net/SocketTimeoutException; {:try_start_3 .. :try_end_3} :catch_9
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_3 .. :try_end_3} :catch_8
    .catch Ljava/net/ConnectException; {:try_start_3 .. :try_end_3} :catch_0
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_3 .. :try_end_3} :catch_6
    .catch Ljava/net/MalformedURLException; {:try_start_3 .. :try_end_3} :catch_5
    .catch Ljava/net/UnknownHostException; {:try_start_3 .. :try_end_3} :catch_4
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1

    :catch_0
    move-exception v0

    goto/16 :goto_4

    :catch_1
    move-exception v0

    goto :goto_2

    :catch_2
    move-exception v0

    goto :goto_1

    :catch_3
    move-exception v0

    const/4 v6, 0x0

    :goto_1
    const/4 v10, 0x0

    .line 105
    :goto_2
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v7

    sub-long/2addr v7, v3

    .line 106
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v14}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v7, v8, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    if-eqz v6, :cond_7

    .line 110
    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/f/b;->a()I

    move-result v0

    if-eqz v10, :cond_6

    .line 113
    new-instance v2, Lcom/tkay/expressad/foundation/g/f/f/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/f/b;->b()Ljava/util/List;

    move-result-object v3

    invoke-direct {v2, v0, v10, v3}, Lcom/tkay/expressad/foundation/g/f/f/c;-><init>(I[BLjava/util/List;)V

    const/16 v3, 0x190

    if-lt v0, v3, :cond_4

    if-le v0, v9, :cond_3

    goto :goto_3

    .line 116
    :cond_3
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v3, 0x6

    invoke-direct {v0, v3, v2}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :cond_4
    :goto_3
    const/16 v3, 0x1f4

    if-lt v0, v3, :cond_5

    const/16 v3, 0x257

    if-gt v0, v3, :cond_5

    .line 119
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v3, 0x7

    invoke-direct {v0, v3, v2}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    .line 122
    :cond_5
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v3, 0x2

    invoke-direct {v0, v3, v2}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    .line 125
    :cond_6
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v2, 0xf

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :cond_7
    const/4 v3, 0x0

    .line 108
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v2, 0xe

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_4
    move-exception v0

    .line 101
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long/2addr v5, v3

    .line 102
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/UnknownHostException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v5, v6, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 103
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v2, 0x9

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_5
    move-exception v0

    .line 97
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long/2addr v5, v3

    .line 98
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v13}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/MalformedURLException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v5, v6, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 99
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v2, 0x4

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_6
    move-exception v0

    .line 93
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v6

    sub-long/2addr v6, v3

    .line 94
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljavax/net/ssl/SSLProtocolException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v6, v7, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 95
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v2, 0xb

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_7
    move-exception v0

    move-object/from16 v19, v12

    .line 89
    :goto_4
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long/2addr v5, v3

    .line 90
    new-instance v3, Ljava/lang/StringBuilder;

    move-object/from16 v11, v19

    invoke-direct {v3, v11}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/ConnectException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v5, v6, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 91
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v2, 0xc

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_8
    move-exception v0

    .line 84
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long/2addr v5, v3

    .line 85
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lorg/apache/http/conn/ConnectTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v5, v6, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 86
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v2, 0x3

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_9
    move-exception v0

    .line 79
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long/2addr v5, v3

    .line 80
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/SocketTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v5, v6, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 81
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v2, 0xa

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :cond_8
    const/4 v3, 0x0

    .line 56
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/foundation/g/f/i;->c()V

    .line 57
    iget-object v0, v1, Lcom/tkay/expressad/foundation/g/f/f/a;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v0, v2}, Lcom/tkay/expressad/foundation/g/f/c;->b(Lcom/tkay/expressad/foundation/g/f/i;)V

    .line 58
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    invoke-direct {v0, v10, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :cond_9
    move-object v11, v12

    .line 133
    :goto_5
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/foundation/g/f/i;->f()Z

    move-result v0

    if-nez v0, :cond_11

    .line 142
    :try_start_4
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/foundation/g/f/i;->i()V

    .line 144
    iget-object v0, v1, Lcom/tkay/expressad/foundation/g/f/f/a;->c:Lcom/tkay/expressad/foundation/g/f/e/a;

    invoke-interface {v0, v2}, Lcom/tkay/expressad/foundation/g/f/e/a;->a(Lcom/tkay/expressad/foundation/g/f/i;)Lcom/tkay/expressad/foundation/g/f/f/b;

    move-result-object v6
    :try_end_4
    .catch Ljava/net/SocketTimeoutException; {:try_start_4 .. :try_end_4} :catch_14
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_4 .. :try_end_4} :catch_13
    .catch Ljava/net/ConnectException; {:try_start_4 .. :try_end_4} :catch_12
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_4 .. :try_end_4} :catch_11
    .catch Ljava/net/MalformedURLException; {:try_start_4 .. :try_end_4} :catch_10
    .catch Ljava/net/UnknownHostException; {:try_start_4 .. :try_end_4} :catch_f
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_e

    .line 145
    :try_start_5
    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/f/b;->a()I

    move-result v0

    .line 147
    iget-object v12, v1, Lcom/tkay/expressad/foundation/g/f/f/a;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-virtual {v2, v6, v12}, Lcom/tkay/expressad/foundation/g/f/i;->a(Lcom/tkay/expressad/foundation/g/f/f/b;Lcom/tkay/expressad/foundation/g/f/c;)[B

    move-result-object v12
    :try_end_5
    .catch Ljava/net/SocketTimeoutException; {:try_start_5 .. :try_end_5} :catch_14
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_5 .. :try_end_5} :catch_13
    .catch Ljava/net/ConnectException; {:try_start_5 .. :try_end_5} :catch_12
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_5 .. :try_end_5} :catch_11
    .catch Ljava/net/MalformedURLException; {:try_start_5 .. :try_end_5} :catch_10
    .catch Ljava/net/UnknownHostException; {:try_start_5 .. :try_end_5} :catch_f
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_d

    .line 149
    :try_start_6
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v17
    :try_end_6
    .catch Ljava/net/SocketTimeoutException; {:try_start_6 .. :try_end_6} :catch_14
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_6 .. :try_end_6} :catch_13
    .catch Ljava/net/ConnectException; {:try_start_6 .. :try_end_6} :catch_12
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_6 .. :try_end_6} :catch_11
    .catch Ljava/net/MalformedURLException; {:try_start_6 .. :try_end_6} :catch_10
    .catch Ljava/net/UnknownHostException; {:try_start_6 .. :try_end_6} :catch_f
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_c

    move-object/from16 v20, v11

    sub-long v10, v17, v3

    .line 150
    :try_start_7
    invoke-static {v10, v11, v2, v12, v0}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(JLcom/tkay/expressad/foundation/g/f/i;[BI)V

    const/16 v10, 0xc8

    if-lt v0, v10, :cond_a

    const/16 v10, 0x18f

    if-gt v0, v10, :cond_a

    .line 154
    new-instance v10, Lcom/tkay/expressad/foundation/g/f/f/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/f/b;->b()Ljava/util/List;

    move-result-object v11

    invoke-direct {v10, v0, v12, v11}, Lcom/tkay/expressad/foundation/g/f/f/c;-><init>(I[BLjava/util/List;)V

    return-object v10

    .line 152
    :cond_a
    new-instance v0, Ljava/io/IOException;

    invoke-direct {v0}, Ljava/io/IOException;-><init>()V

    throw v0
    :try_end_7
    .catch Ljava/net/SocketTimeoutException; {:try_start_7 .. :try_end_7} :catch_14
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_7 .. :try_end_7} :catch_13
    .catch Ljava/net/ConnectException; {:try_start_7 .. :try_end_7} :catch_b
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_7 .. :try_end_7} :catch_11
    .catch Ljava/net/MalformedURLException; {:try_start_7 .. :try_end_7} :catch_10
    .catch Ljava/net/UnknownHostException; {:try_start_7 .. :try_end_7} :catch_f
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_a

    :catch_a
    move-exception v0

    goto :goto_7

    :catch_b
    move-exception v0

    goto/16 :goto_9

    :catch_c
    move-exception v0

    move-object/from16 v20, v11

    goto :goto_7

    :catch_d
    move-exception v0

    move-object/from16 v20, v11

    goto :goto_6

    :catch_e
    move-exception v0

    move-object/from16 v20, v11

    const/4 v6, 0x0

    :goto_6
    const/4 v12, 0x0

    .line 183
    :goto_7
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v10

    sub-long/2addr v10, v3

    .line 184
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9, v14}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v9, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v10, v11, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    if-eqz v6, :cond_10

    .line 188
    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/f/b;->a()I

    move-result v0

    if-eqz v12, :cond_e

    .line 191
    new-instance v2, Lcom/tkay/expressad/foundation/g/f/f/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/f/b;->b()Ljava/util/List;

    move-result-object v3

    invoke-direct {v2, v0, v12, v3}, Lcom/tkay/expressad/foundation/g/f/f/c;-><init>(I[BLjava/util/List;)V

    const/16 v6, 0x190

    if-lt v0, v6, :cond_c

    const/16 v9, 0x1f3

    if-le v0, v9, :cond_b

    goto :goto_8

    .line 195
    :cond_b
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v3, 0x6

    invoke-direct {v0, v3, v2}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :cond_c
    :goto_8
    const/16 v10, 0x1f4

    if-lt v0, v10, :cond_d

    const/16 v11, 0x257

    if-gt v0, v11, :cond_d

    .line 198
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v3, 0x7

    invoke-direct {v0, v3, v2}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    .line 201
    :cond_d
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v12, 0x2

    invoke-direct {v0, v12, v2}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :cond_e
    const/16 v6, 0x190

    const/16 v9, 0x1f3

    const/16 v10, 0x1f4

    const/16 v11, 0x257

    const/4 v12, 0x2

    .line 205
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v6, 0xf

    const/4 v9, 0x0

    invoke-direct {v0, v6, v9}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    .line 1257
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/foundation/g/f/i;->l()Lcom/tkay/expressad/foundation/g/f/l;

    move-result-object v16

    .line 1259
    invoke-interface/range {v16 .. v16}, Lcom/tkay/expressad/foundation/g/f/l;->d()Z

    move-result v16

    if-eqz v16, :cond_f

    .line 1261
    iget-object v0, v1, Lcom/tkay/expressad/foundation/g/f/f/a;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v0, v2}, Lcom/tkay/expressad/foundation/g/f/c;->e(Lcom/tkay/expressad/foundation/g/f/i;)V

    move-object/from16 v11, v20

    const/16 v9, 0x1f3

    const/4 v10, -0x2

    goto/16 :goto_5

    .line 1263
    :cond_f
    throw v0

    :cond_10
    const/4 v9, 0x0

    .line 186
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v2, 0xe

    invoke-direct {v0, v2, v9}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_f
    move-exception v0

    .line 179
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long/2addr v5, v3

    .line 180
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/UnknownHostException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v5, v6, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 181
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v2, 0x9

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_10
    move-exception v0

    .line 175
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long/2addr v5, v3

    .line 176
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v13}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/MalformedURLException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v5, v6, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 177
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v2, 0x4

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_11
    move-exception v0

    .line 171
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v6

    sub-long/2addr v6, v3

    .line 172
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljavax/net/ssl/SSLProtocolException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v6, v7, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 173
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v2, 0xb

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_12
    move-exception v0

    move-object/from16 v20, v11

    .line 167
    :goto_9
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long/2addr v5, v3

    .line 168
    new-instance v3, Ljava/lang/StringBuilder;

    move-object/from16 v4, v20

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/ConnectException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v5, v6, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 169
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v2, 0xc

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_13
    move-exception v0

    .line 162
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long/2addr v5, v3

    .line 163
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lorg/apache/http/conn/ConnectTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v5, v6, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 164
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v2, 0x3

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :catch_14
    move-exception v0

    .line 157
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long/2addr v5, v3

    .line 158
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/SocketTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v5, v6, v2}, Lcom/tkay/expressad/foundation/g/f/f/a;->a(Ljava/lang/String;JLcom/tkay/expressad/foundation/g/f/i;)V

    .line 159
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v2, 0xa

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0

    :cond_11
    const/4 v3, 0x0

    .line 134
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/foundation/g/f/i;->c()V

    .line 135
    iget-object v0, v1, Lcom/tkay/expressad/foundation/g/f/f/a;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v0, v2}, Lcom/tkay/expressad/foundation/g/f/c;->b(Lcom/tkay/expressad/foundation/g/f/i;)V

    .line 136
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v2, -0x2

    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    throw v0
.end method
