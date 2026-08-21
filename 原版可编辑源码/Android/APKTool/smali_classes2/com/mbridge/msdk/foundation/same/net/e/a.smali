.class public Lcom/mbridge/msdk/foundation/same/net/e/a;
.super Ljava/lang/Object;
.source "BasicNetwork.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/net/g;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Lcom/mbridge/msdk/foundation/same/net/stack/a;

.field private c:Lcom/mbridge/msdk/foundation/same/net/c;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 26
    const-class v0, Lcom/mbridge/msdk/foundation/same/net/e/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/same/net/e/a;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/foundation/same/net/stack/a;Lcom/mbridge/msdk/foundation/same/net/c;)V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 35
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/e/a;->b:Lcom/mbridge/msdk/foundation/same/net/stack/a;

    .line 36
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/same/net/e/a;->c:Lcom/mbridge/msdk/foundation/same/net/c;

    return-void
.end method

.method private a(JLcom/mbridge/msdk/foundation/same/net/i;[BI)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(J",
            "Lcom/mbridge/msdk/foundation/same/net/i<",
            "*>;[BI)V"
        }
    .end annotation

    move-object/from16 v0, p4

    .line 216
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_3

    const-wide/16 v1, 0xbb8

    cmp-long v1, p1, v1

    const/4 v2, 0x5

    const/4 v3, 0x4

    const-string v4, "null"

    const/4 v5, 0x3

    const/4 v6, 0x2

    const/4 v7, 0x1

    const/4 v8, 0x0

    const/4 v9, 0x6

    if-lez v1, :cond_1

    .line 219
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/same/net/e/a;->a:Ljava/lang/String;

    const-string v10, "Slow HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]"

    new-array v9, v9, [Ljava/lang/Object;

    .line 220
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/same/net/i;->b()Ljava/lang/String;

    move-result-object v11

    aput-object v11, v9, v8

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/same/net/i;->a()I

    move-result v8

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v9, v7

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v7

    aput-object v7, v9, v6

    if-eqz v0, :cond_0

    array-length v0, v0

    .line 221
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    :cond_0
    aput-object v4, v9, v5

    .line 222
    invoke-static/range {p5 .. p5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, v9, v3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/same/net/i;->m()Lcom/mbridge/msdk/foundation/same/net/l;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/foundation/same/net/l;->c()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, v9, v2

    .line 219
    invoke-static {v10, v9}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 228
    :cond_1
    sget-object v1, Lcom/mbridge/msdk/foundation/same/net/e/a;->a:Ljava/lang/String;

    const-string v10, "Normal HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]"

    new-array v9, v9, [Ljava/lang/Object;

    .line 229
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/same/net/i;->b()Ljava/lang/String;

    move-result-object v11

    aput-object v11, v9, v8

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/same/net/i;->a()I

    move-result v8

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v9, v7

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v7

    aput-object v7, v9, v6

    if-eqz v0, :cond_2

    array-length v0, v0

    .line 230
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    :cond_2
    aput-object v4, v9, v5

    .line 231
    invoke-static/range {p5 .. p5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, v9, v3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/same/net/i;->m()Lcom/mbridge/msdk/foundation/same/net/l;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/foundation/same/net/l;->c()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, v9, v2

    .line 228
    invoke-static {v10, v9}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_3
    :goto_0
    return-void
.end method

.method private a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "J",
            "Lcom/mbridge/msdk/foundation/same/net/i<",
            "*>;)V"
        }
    .end annotation

    .line 240
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_1

    .line 242
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/e/a;->a:Ljava/lang/String;

    const-string v1, "HTTP exception for request=<%s> [lifetime=%d], [size=%s], [retryCount=%s]"

    const/4 v2, 0x4

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    .line 246
    invoke-virtual {p4}, Lcom/mbridge/msdk/foundation/same/net/i;->b()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v2, v3

    const/4 v3, 0x1

    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    aput-object p2, v2, v3

    const/4 p2, 0x2

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    const-string p1, "null"

    :goto_0
    aput-object p1, v2, p2

    const/4 p1, 0x3

    .line 247
    invoke-virtual {p4}, Lcom/mbridge/msdk/foundation/same/net/i;->m()Lcom/mbridge/msdk/foundation/same/net/l;

    move-result-object p2

    invoke-interface {p2}, Lcom/mbridge/msdk/foundation/same/net/l;->c()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, v2, p1

    .line 242
    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/foundation/same/net/i;)Lcom/mbridge/msdk/foundation/same/net/e/c;
    .locals 27
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/foundation/same/net/i<",
            "*>;)",
            "Lcom/mbridge/msdk/foundation/same/net/e/c;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/foundation/same/net/a/a;
        }
    .end annotation

    move-object/from16 v7, p0

    move-object/from16 v8, p1

    .line 41
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v9

    if-eqz v8, :cond_0

    .line 45
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/same/net/i;->m()Lcom/mbridge/msdk/foundation/same/net/l;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 50
    invoke-interface {v0}, Lcom/mbridge/msdk/foundation/same/net/l;->a()I

    move-result v1

    :cond_1
    const/16 v5, 0xe

    const-string v4, "IOException ex= "

    const/16 v2, 0x9

    const-string v3, "UnknownHostException ex= "

    const-string v11, "MalformedURLException ex= "

    const-string v12, "SSLProtocolException ex= "

    const-string v14, "ConnectException ex= "

    const-string v13, "ConnectTimeoutException ex= "

    const-string v15, "SocketTimeoutException ex= "

    const-string v6, "perform-discard-cancelled"

    if-gtz v1, :cond_9

    .line 55
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/same/net/i;->c()Z

    move-result v0

    if-nez v0, :cond_8

    .line 64
    :try_start_0
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/same/net/i;->f()V

    .line 66
    iget-object v0, v7, Lcom/mbridge/msdk/foundation/same/net/e/a;->b:Lcom/mbridge/msdk/foundation/same/net/stack/a;

    invoke-interface {v0, v8}, Lcom/mbridge/msdk/foundation/same/net/stack/a;->performRequest(Lcom/mbridge/msdk/foundation/same/net/i;)Lcom/mbridge/msdk/foundation/same/net/e/b;

    move-result-object v6
    :try_end_0
    .catch Ljava/net/SocketTimeoutException; {:try_start_0 .. :try_end_0} :catch_e
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_0 .. :try_end_0} :catch_d
    .catch Ljava/net/ConnectException; {:try_start_0 .. :try_end_0} :catch_c
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_0 .. :try_end_0} :catch_b
    .catch Ljava/net/MalformedURLException; {:try_start_0 .. :try_end_0} :catch_a
    .catch Ljava/net/UnknownHostException; {:try_start_0 .. :try_end_0} :catch_9
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_8

    .line 67
    :try_start_1
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/same/net/e/b;->a()I

    move-result v0

    .line 69
    iget-object v1, v7, Lcom/mbridge/msdk/foundation/same/net/e/a;->c:Lcom/mbridge/msdk/foundation/same/net/c;

    invoke-virtual {v8, v6, v1}, Lcom/mbridge/msdk/foundation/same/net/i;->a(Lcom/mbridge/msdk/foundation/same/net/e/b;Lcom/mbridge/msdk/foundation/same/net/c;)[B

    move-result-object v1
    :try_end_1
    .catch Ljava/net/SocketTimeoutException; {:try_start_1 .. :try_end_1} :catch_e
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_1 .. :try_end_1} :catch_d
    .catch Ljava/net/ConnectException; {:try_start_1 .. :try_end_1} :catch_c
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_1 .. :try_end_1} :catch_b
    .catch Ljava/net/MalformedURLException; {:try_start_1 .. :try_end_1} :catch_a
    .catch Ljava/net/UnknownHostException; {:try_start_1 .. :try_end_1} :catch_9
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_7

    .line 71
    :try_start_2
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v17
    :try_end_2
    .catch Ljava/net/SocketTimeoutException; {:try_start_2 .. :try_end_2} :catch_e
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_2 .. :try_end_2} :catch_d
    .catch Ljava/net/ConnectException; {:try_start_2 .. :try_end_2} :catch_c
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_2 .. :try_end_2} :catch_b
    .catch Ljava/net/MalformedURLException; {:try_start_2 .. :try_end_2} :catch_a
    .catch Ljava/net/UnknownHostException; {:try_start_2 .. :try_end_2} :catch_9
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_6

    sub-long v17, v17, v9

    move-object/from16 v19, v1

    move-object/from16 v1, p0

    move-object/from16 v20, v15

    move-object v15, v3

    move-wide/from16 v2, v17

    move-object/from16 v18, v13

    move-object v13, v4

    move-object/from16 v4, p1

    move-object/from16 v21, v14

    move v14, v5

    move-object/from16 v5, v19

    move-object/from16 v16, v6

    const/16 v14, 0xf

    move v6, v0

    .line 72
    :try_start_3
    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(JLcom/mbridge/msdk/foundation/same/net/i;[BI)V

    const/16 v1, 0xc8

    if-lt v0, v1, :cond_2

    const/16 v1, 0x18f

    if-gt v0, v1, :cond_2

    .line 76
    new-instance v1, Lcom/mbridge/msdk/foundation/same/net/e/c;

    invoke-virtual/range {v16 .. v16}, Lcom/mbridge/msdk/foundation/same/net/e/b;->b()Ljava/util/List;

    move-result-object v2
    :try_end_3
    .catch Ljava/net/SocketTimeoutException; {:try_start_3 .. :try_end_3} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_3 .. :try_end_3} :catch_4
    .catch Ljava/net/ConnectException; {:try_start_3 .. :try_end_3} :catch_3
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_3 .. :try_end_3} :catch_b
    .catch Ljava/net/MalformedURLException; {:try_start_3 .. :try_end_3} :catch_a
    .catch Ljava/net/UnknownHostException; {:try_start_3 .. :try_end_3} :catch_2
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1

    move-object/from16 v3, v19

    :try_start_4
    invoke-direct {v1, v0, v3, v2}, Lcom/mbridge/msdk/foundation/same/net/e/c;-><init>(I[BLjava/util/List;)V

    return-object v1

    :cond_2
    move-object/from16 v3, v19

    .line 74
    new-instance v0, Ljava/io/IOException;

    invoke-direct {v0}, Ljava/io/IOException;-><init>()V

    throw v0
    :try_end_4
    .catch Ljava/net/SocketTimeoutException; {:try_start_4 .. :try_end_4} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_4 .. :try_end_4} :catch_4
    .catch Ljava/net/ConnectException; {:try_start_4 .. :try_end_4} :catch_3
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_4 .. :try_end_4} :catch_b
    .catch Ljava/net/MalformedURLException; {:try_start_4 .. :try_end_4} :catch_a
    .catch Ljava/net/UnknownHostException; {:try_start_4 .. :try_end_4} :catch_2
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_0

    :catch_0
    move-exception v0

    goto :goto_1

    :catch_1
    move-exception v0

    move-object/from16 v3, v19

    goto :goto_1

    :catch_2
    move-exception v0

    goto/16 :goto_3

    :catch_3
    move-exception v0

    goto/16 :goto_4

    :catch_4
    move-exception v0

    goto/16 :goto_5

    :catch_5
    move-exception v0

    goto/16 :goto_6

    :catch_6
    move-exception v0

    move-object v3, v1

    move-object v13, v4

    move-object/from16 v16, v6

    const/16 v14, 0xf

    goto :goto_1

    :catch_7
    move-exception v0

    move-object v13, v4

    move-object/from16 v16, v6

    const/16 v14, 0xf

    const/4 v3, 0x0

    goto :goto_1

    :catch_8
    move-exception v0

    move-object v13, v4

    const/16 v14, 0xf

    const/4 v3, 0x0

    const/16 v16, 0x0

    .line 105
    :goto_1
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 106
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    if-eqz v16, :cond_7

    .line 110
    invoke-virtual/range {v16 .. v16}, Lcom/mbridge/msdk/foundation/same/net/e/b;->a()I

    move-result v0

    if-eqz v3, :cond_6

    .line 113
    new-instance v1, Lcom/mbridge/msdk/foundation/same/net/e/c;

    invoke-virtual/range {v16 .. v16}, Lcom/mbridge/msdk/foundation/same/net/e/b;->b()Ljava/util/List;

    move-result-object v2

    invoke-direct {v1, v0, v3, v2}, Lcom/mbridge/msdk/foundation/same/net/e/c;-><init>(I[BLjava/util/List;)V

    const/16 v2, 0x190

    if-lt v0, v2, :cond_4

    const/16 v2, 0x1f3

    if-le v0, v2, :cond_3

    goto :goto_2

    .line 116
    :cond_3
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v2, 0x6

    invoke-direct {v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :cond_4
    :goto_2
    const/16 v2, 0x1f4

    if-lt v0, v2, :cond_5

    const/16 v2, 0x257

    if-gt v0, v2, :cond_5

    .line 119
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v2, 0x7

    invoke-direct {v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    .line 122
    :cond_5
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v2, 0x2

    invoke-direct {v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    .line 125
    :cond_6
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v1, 0x0

    invoke-direct {v0, v14, v1}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :cond_7
    const/4 v1, 0x0

    .line 108
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/16 v2, 0xe

    invoke-direct {v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_9
    move-exception v0

    move-object v15, v3

    .line 101
    :goto_3
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 102
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/net/UnknownHostException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 103
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/16 v1, 0x9

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_a
    move-exception v0

    .line 97
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 98
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/net/MalformedURLException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 99
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v1, 0x4

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_b
    move-exception v0

    .line 93
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 94
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljavax/net/ssl/SSLProtocolException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 95
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/16 v1, 0xb

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_c
    move-exception v0

    move-object/from16 v21, v14

    .line 89
    :goto_4
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 90
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v5, v21

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/net/ConnectException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 91
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/16 v1, 0xc

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_d
    move-exception v0

    move-object/from16 v18, v13

    .line 84
    :goto_5
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 85
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v4, v18

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lorg/apache/http/conn/ConnectTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 86
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v1, 0x3

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_e
    move-exception v0

    move-object/from16 v20, v15

    .line 79
    :goto_6
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 80
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v4, v20

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/net/SocketTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 81
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/16 v1, 0xa

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :cond_8
    const/4 v2, 0x0

    .line 56
    invoke-virtual {v8, v6}, Lcom/mbridge/msdk/foundation/same/net/i;->a(Ljava/lang/String;)V

    .line 57
    iget-object v0, v7, Lcom/mbridge/msdk/foundation/same/net/e/a;->c:Lcom/mbridge/msdk/foundation/same/net/c;

    invoke-interface {v0, v8}, Lcom/mbridge/msdk/foundation/same/net/c;->b(Lcom/mbridge/msdk/foundation/same/net/i;)V

    .line 58
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v3, -0x2

    invoke-direct {v0, v3, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :cond_9
    move-object v5, v14

    move-object v2, v15

    const/16 v14, 0xf

    move-object v15, v3

    const/4 v3, -0x2

    move-object/from16 v26, v13

    move-object v13, v4

    move-object/from16 v4, v26

    .line 133
    :goto_7
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/same/net/i;->c()Z

    move-result v0

    if-nez v0, :cond_11

    .line 142
    :try_start_5
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/same/net/i;->f()V

    .line 144
    iget-object v0, v7, Lcom/mbridge/msdk/foundation/same/net/e/a;->b:Lcom/mbridge/msdk/foundation/same/net/stack/a;

    invoke-interface {v0, v8}, Lcom/mbridge/msdk/foundation/same/net/stack/a;->performRequest(Lcom/mbridge/msdk/foundation/same/net/i;)Lcom/mbridge/msdk/foundation/same/net/e/b;

    move-result-object v1
    :try_end_5
    .catch Ljava/net/SocketTimeoutException; {:try_start_5 .. :try_end_5} :catch_1c
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_5 .. :try_end_5} :catch_1b
    .catch Ljava/net/ConnectException; {:try_start_5 .. :try_end_5} :catch_1a
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_5 .. :try_end_5} :catch_19
    .catch Ljava/net/MalformedURLException; {:try_start_5 .. :try_end_5} :catch_18
    .catch Ljava/net/UnknownHostException; {:try_start_5 .. :try_end_5} :catch_17
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_16

    .line 145
    :try_start_6
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/same/net/e/b;->a()I

    move-result v0

    .line 147
    iget-object v3, v7, Lcom/mbridge/msdk/foundation/same/net/e/a;->c:Lcom/mbridge/msdk/foundation/same/net/c;

    invoke-virtual {v8, v1, v3}, Lcom/mbridge/msdk/foundation/same/net/i;->a(Lcom/mbridge/msdk/foundation/same/net/e/b;Lcom/mbridge/msdk/foundation/same/net/c;)[B

    move-result-object v3
    :try_end_6
    .catch Ljava/net/SocketTimeoutException; {:try_start_6 .. :try_end_6} :catch_1c
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_6 .. :try_end_6} :catch_1b
    .catch Ljava/net/ConnectException; {:try_start_6 .. :try_end_6} :catch_1a
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_6 .. :try_end_6} :catch_19
    .catch Ljava/net/MalformedURLException; {:try_start_6 .. :try_end_6} :catch_18
    .catch Ljava/net/UnknownHostException; {:try_start_6 .. :try_end_6} :catch_17
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_15

    .line 149
    :try_start_7
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v18
    :try_end_7
    .catch Ljava/net/SocketTimeoutException; {:try_start_7 .. :try_end_7} :catch_1c
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_7 .. :try_end_7} :catch_1b
    .catch Ljava/net/ConnectException; {:try_start_7 .. :try_end_7} :catch_1a
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_7 .. :try_end_7} :catch_19
    .catch Ljava/net/MalformedURLException; {:try_start_7 .. :try_end_7} :catch_18
    .catch Ljava/net/UnknownHostException; {:try_start_7 .. :try_end_7} :catch_17
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_14

    sub-long v18, v18, v9

    move-object/from16 v20, v1

    move-object/from16 v1, p0

    move-object/from16 v22, v2

    move-object/from16 v21, v3

    const/16 v16, -0x2

    move-wide/from16 v2, v18

    move-object/from16 v23, v4

    move-object/from16 v4, p1

    move-object/from16 v24, v5

    move-object/from16 v5, v21

    move-object/from16 v25, v6

    move v6, v0

    .line 150
    :try_start_8
    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(JLcom/mbridge/msdk/foundation/same/net/i;[BI)V

    const/16 v1, 0xc8

    if-lt v0, v1, :cond_a

    const/16 v1, 0x18f

    if-gt v0, v1, :cond_a

    .line 154
    new-instance v1, Lcom/mbridge/msdk/foundation/same/net/e/c;

    invoke-virtual/range {v20 .. v20}, Lcom/mbridge/msdk/foundation/same/net/e/b;->b()Ljava/util/List;

    move-result-object v2
    :try_end_8
    .catch Ljava/net/SocketTimeoutException; {:try_start_8 .. :try_end_8} :catch_13
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_8 .. :try_end_8} :catch_12
    .catch Ljava/net/ConnectException; {:try_start_8 .. :try_end_8} :catch_11
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_8 .. :try_end_8} :catch_19
    .catch Ljava/net/MalformedURLException; {:try_start_8 .. :try_end_8} :catch_18
    .catch Ljava/net/UnknownHostException; {:try_start_8 .. :try_end_8} :catch_17
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_10

    move-object/from16 v3, v21

    :try_start_9
    invoke-direct {v1, v0, v3, v2}, Lcom/mbridge/msdk/foundation/same/net/e/c;-><init>(I[BLjava/util/List;)V

    return-object v1

    :cond_a
    move-object/from16 v3, v21

    .line 152
    new-instance v0, Ljava/io/IOException;

    invoke-direct {v0}, Ljava/io/IOException;-><init>()V

    throw v0
    :try_end_9
    .catch Ljava/net/SocketTimeoutException; {:try_start_9 .. :try_end_9} :catch_13
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_9 .. :try_end_9} :catch_12
    .catch Ljava/net/ConnectException; {:try_start_9 .. :try_end_9} :catch_11
    .catch Ljavax/net/ssl/SSLProtocolException; {:try_start_9 .. :try_end_9} :catch_19
    .catch Ljava/net/MalformedURLException; {:try_start_9 .. :try_end_9} :catch_18
    .catch Ljava/net/UnknownHostException; {:try_start_9 .. :try_end_9} :catch_17
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_f

    :catch_f
    move-exception v0

    goto :goto_8

    :catch_10
    move-exception v0

    move-object/from16 v3, v21

    goto :goto_8

    :catch_11
    move-exception v0

    goto/16 :goto_a

    :catch_12
    move-exception v0

    goto/16 :goto_b

    :catch_13
    move-exception v0

    goto/16 :goto_c

    :catch_14
    move-exception v0

    move-object/from16 v20, v1

    move-object/from16 v22, v2

    move-object/from16 v23, v4

    move-object/from16 v24, v5

    move-object/from16 v25, v6

    goto :goto_8

    :catch_15
    move-exception v0

    move-object/from16 v20, v1

    move-object/from16 v22, v2

    move-object/from16 v23, v4

    move-object/from16 v24, v5

    move-object/from16 v25, v6

    const/4 v3, 0x0

    goto :goto_8

    :catch_16
    move-exception v0

    move-object/from16 v22, v2

    move-object/from16 v23, v4

    move-object/from16 v24, v5

    move-object/from16 v25, v6

    const/4 v3, 0x0

    const/16 v20, 0x0

    .line 183
    :goto_8
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 184
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    if-eqz v20, :cond_10

    .line 188
    invoke-virtual/range {v20 .. v20}, Lcom/mbridge/msdk/foundation/same/net/e/b;->a()I

    move-result v0

    if-eqz v3, :cond_e

    .line 191
    new-instance v1, Lcom/mbridge/msdk/foundation/same/net/e/c;

    invoke-virtual/range {v20 .. v20}, Lcom/mbridge/msdk/foundation/same/net/e/b;->b()Ljava/util/List;

    move-result-object v2

    invoke-direct {v1, v0, v3, v2}, Lcom/mbridge/msdk/foundation/same/net/e/c;-><init>(I[BLjava/util/List;)V

    const/16 v2, 0x190

    if-lt v0, v2, :cond_c

    const/16 v3, 0x1f3

    if-le v0, v3, :cond_b

    goto :goto_9

    .line 194
    :cond_b
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v2, 0x6

    invoke-direct {v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :cond_c
    :goto_9
    const/16 v4, 0x1f4

    if-lt v0, v4, :cond_d

    const/16 v2, 0x257

    if-gt v0, v2, :cond_d

    .line 197
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v2, 0x7

    invoke-direct {v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    .line 200
    :cond_d
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v5, 0x2

    invoke-direct {v0, v5, v1}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :cond_e
    const/16 v2, 0x190

    const/16 v3, 0x1f3

    const/16 v4, 0x1f4

    const/4 v5, 0x2

    .line 204
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v1, 0x0

    invoke-direct {v0, v14, v1}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    .line 1256
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/same/net/i;->m()Lcom/mbridge/msdk/foundation/same/net/l;

    move-result-object v6

    .line 1258
    invoke-interface {v6, v0}, Lcom/mbridge/msdk/foundation/same/net/l;->a(Lcom/mbridge/msdk/foundation/same/net/a/a;)Z

    move-result v6

    if-eqz v6, :cond_f

    .line 1260
    iget-object v0, v7, Lcom/mbridge/msdk/foundation/same/net/e/a;->c:Lcom/mbridge/msdk/foundation/same/net/c;

    invoke-interface {v0, v8}, Lcom/mbridge/msdk/foundation/same/net/c;->e(Lcom/mbridge/msdk/foundation/same/net/i;)V

    move-object/from16 v2, v22

    move-object/from16 v4, v23

    move-object/from16 v5, v24

    move-object/from16 v6, v25

    const/4 v3, -0x2

    goto/16 :goto_7

    .line 1262
    :cond_f
    throw v0

    :cond_10
    const/4 v1, 0x0

    .line 186
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/16 v2, 0xe

    invoke-direct {v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_17
    move-exception v0

    .line 179
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 180
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/net/UnknownHostException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 181
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/16 v1, 0x9

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_18
    move-exception v0

    .line 175
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 176
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/net/MalformedURLException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 177
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v1, 0x4

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_19
    move-exception v0

    .line 171
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 172
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljavax/net/ssl/SSLProtocolException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 173
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/16 v1, 0xb

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_1a
    move-exception v0

    move-object/from16 v24, v5

    .line 167
    :goto_a
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 168
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v4, v24

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/net/ConnectException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 169
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/16 v1, 0xc

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_1b
    move-exception v0

    move-object/from16 v23, v4

    .line 162
    :goto_b
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 163
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v4, v23

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lorg/apache/http/conn/ConnectTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 164
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v1, 0x3

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :catch_1c
    move-exception v0

    move-object/from16 v22, v2

    .line 157
    :goto_c
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, v9

    .line 158
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v4, v22

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/net/SocketTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v7, v0, v1, v2, v8}, Lcom/mbridge/msdk/foundation/same/net/e/a;->a(Ljava/lang/String;JLcom/mbridge/msdk/foundation/same/net/i;)V

    .line 159
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/16 v1, 0xa

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0

    :cond_11
    move-object v1, v6

    const/4 v2, 0x0

    .line 134
    invoke-virtual {v8, v1}, Lcom/mbridge/msdk/foundation/same/net/i;->a(Ljava/lang/String;)V

    .line 135
    iget-object v0, v7, Lcom/mbridge/msdk/foundation/same/net/e/a;->c:Lcom/mbridge/msdk/foundation/same/net/c;

    invoke-interface {v0, v8}, Lcom/mbridge/msdk/foundation/same/net/c;->b(Lcom/mbridge/msdk/foundation/same/net/i;)V

    .line 136
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v1, -0x2

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    throw v0
.end method
