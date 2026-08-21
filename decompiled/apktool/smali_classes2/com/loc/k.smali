.class public final Lcom/loc/k;
.super Ljava/lang/Exception;
.source "AMapCoreException.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:I

.field private g:I

.field private volatile h:Z

.field private i:Ljava/lang/String;

.field private j:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 16

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    invoke-direct/range {p0 .. p1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    const-string v2, "\u672a\u77e5\u7684\u9519\u8bef"

    iput-object v2, v0, Lcom/loc/k;->a:Ljava/lang/String;

    const-string v3, ""

    iput-object v3, v0, Lcom/loc/k;->b:Ljava/lang/String;

    iput-object v3, v0, Lcom/loc/k;->c:Ljava/lang/String;

    const-string v3, "1900"

    iput-object v3, v0, Lcom/loc/k;->d:Ljava/lang/String;

    const-string v3, "UnknownError"

    iput-object v3, v0, Lcom/loc/k;->e:Ljava/lang/String;

    const/4 v3, -0x1

    iput v3, v0, Lcom/loc/k;->f:I

    iput v3, v0, Lcom/loc/k;->g:I

    const/4 v4, 0x0

    iput-boolean v4, v0, Lcom/loc/k;->h:Z

    iput-object v1, v0, Lcom/loc/k;->a:Ljava/lang/String;

    const-string v4, "IO \u64cd\u4f5c\u5f02\u5e38 - IOException"

    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    const-string v6, "DNS\u89e3\u6790\u5931\u8d25"

    const-string v7, "http\u8fde\u63a5\u5931\u8d25 - ConnectionException"

    const/4 v8, 0x2

    const-string v9, "\u672a\u77e5\u4e3b\u673a - UnKnowHostException"

    const/4 v10, 0x7

    const-string v11, "socket \u8fde\u63a5\u8d85\u65f6 - SocketTimeoutException"

    const-string v12, "socket \u8fde\u63a5\u5f02\u5e38 - SocketException"

    const/4 v13, 0x3

    const/4 v14, 0x6

    if-eqz v5, :cond_0

    const/16 v3, 0x15

    iput v3, v0, Lcom/loc/k;->f:I

    const-string v3, "1902"

    iput-object v3, v0, Lcom/loc/k;->d:Ljava/lang/String;

    const-string v3, "IOException"

    :goto_0
    iput-object v3, v0, Lcom/loc/k;->e:Ljava/lang/String;

    goto/16 :goto_4

    :cond_0
    invoke-virtual {v12, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    const/16 v3, 0x16

    :goto_1
    iput v3, v0, Lcom/loc/k;->f:I

    goto/16 :goto_4

    :cond_1
    invoke-virtual {v11, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_2

    const/16 v3, 0x17

    iput v3, v0, Lcom/loc/k;->f:I

    const-string v3, "1802"

    iput-object v3, v0, Lcom/loc/k;->d:Ljava/lang/String;

    const-string v3, "SocketTimeoutException"

    goto :goto_0

    :cond_2
    const-string v5, "\u65e0\u6548\u7684\u53c2\u6570 - IllegalArgumentException"

    invoke-virtual {v5, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    const/16 v3, 0x18

    iput v3, v0, Lcom/loc/k;->f:I

    const-string v3, "1901"

    iput-object v3, v0, Lcom/loc/k;->d:Ljava/lang/String;

    const-string v3, "IllegalArgumentException"

    goto :goto_0

    :cond_3
    const-string v5, "\u7a7a\u6307\u9488\u5f02\u5e38 - NullPointException"

    invoke-virtual {v5, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_4

    const/16 v3, 0x19

    iput v3, v0, Lcom/loc/k;->f:I

    const-string v3, "1903"

    iput-object v3, v0, Lcom/loc/k;->d:Ljava/lang/String;

    const-string v3, "NullPointException"

    goto :goto_0

    :cond_4
    const-string v5, "url\u5f02\u5e38 - MalformedURLException"

    invoke-virtual {v5, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_5

    const/16 v3, 0x1a

    iput v3, v0, Lcom/loc/k;->f:I

    const-string v3, "1803"

    iput-object v3, v0, Lcom/loc/k;->d:Ljava/lang/String;

    const-string v3, "MalformedURLException"

    goto :goto_0

    :cond_5
    invoke-virtual {v9, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_6

    const/16 v3, 0x1b

    iput v3, v0, Lcom/loc/k;->f:I

    const-string v3, "1804"

    iput-object v3, v0, Lcom/loc/k;->d:Ljava/lang/String;

    const-string v3, "UnknownHostException"

    goto :goto_0

    :cond_6
    const-string v5, "\u670d\u52a1\u5668\u8fde\u63a5\u5931\u8d25 - UnknownServiceException"

    invoke-virtual {v5, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v3, 0x1c

    iput v3, v0, Lcom/loc/k;->f:I

    const-string v3, "1805"

    iput-object v3, v0, Lcom/loc/k;->d:Ljava/lang/String;

    const-string v3, "CannotConnectToHostException"

    goto :goto_0

    :cond_7
    const-string v5, "\u534f\u8bae\u89e3\u6790\u9519\u8bef - ProtocolException"

    invoke-virtual {v5, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_8

    const/16 v3, 0x1d

    iput v3, v0, Lcom/loc/k;->f:I

    const-string v3, "1801"

    iput-object v3, v0, Lcom/loc/k;->d:Ljava/lang/String;

    const-string v3, "ProtocolException"

    goto/16 :goto_0

    :cond_8
    invoke-virtual {v7, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    const-string v15, "ConnectionException"

    const/16 v3, 0x1e

    if-eqz v5, :cond_9

    iput v3, v0, Lcom/loc/k;->f:I

    const-string v3, "1806"

    :goto_2
    iput-object v3, v0, Lcom/loc/k;->d:Ljava/lang/String;

    iput-object v15, v0, Lcom/loc/k;->e:Ljava/lang/String;

    goto/16 :goto_4

    :cond_9
    const-string v5, "\u670d\u52a1QPS\u8d85\u9650"

    invoke-virtual {v5, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_a

    iput v3, v0, Lcom/loc/k;->f:I

    const-string v3, "2001"

    goto :goto_2

    :cond_a
    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_b

    const/16 v3, 0x1f

    goto/16 :goto_1

    :cond_b
    const-string v3, "key\u9274\u6743\u5931\u8d25"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    const/16 v3, 0x20

    goto/16 :goto_1

    :cond_c
    const-string v3, "requeust is null"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_d

    const/4 v3, 0x1

    goto/16 :goto_1

    :cond_d
    const-string v3, "request url is empty"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_e

    iput v8, v0, Lcom/loc/k;->f:I

    goto :goto_4

    :cond_e
    const-string v3, "response is null"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_f

    :goto_3
    iput v13, v0, Lcom/loc/k;->f:I

    goto :goto_4

    :cond_f
    const-string v3, "thread pool has exception"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_10

    const/4 v3, 0x4

    goto/16 :goto_1

    :cond_10
    const-string v3, "sdk name is invalid"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_11

    const/4 v3, 0x5

    goto/16 :goto_1

    :cond_11
    const-string v3, "sdk info is null"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_12

    iput v14, v0, Lcom/loc/k;->f:I

    goto :goto_4

    :cond_12
    const-string v3, "sdk packages is null"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_13

    iput v10, v0, Lcom/loc/k;->f:I

    goto :goto_4

    :cond_13
    const-string v3, "\u7ebf\u7a0b\u6c60\u4e3a\u7a7a"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_14

    const/16 v3, 0x8

    goto/16 :goto_1

    :cond_14
    const-string v3, "\u83b7\u53d6\u5bf9\u8c61\u9519\u8bef"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_15

    const/16 v3, 0x65

    goto/16 :goto_1

    :cond_15
    invoke-virtual {v6, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_16

    goto :goto_3

    :cond_16
    const/4 v3, -0x1

    goto/16 :goto_1

    :goto_4
    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_17

    iput v10, v0, Lcom/loc/k;->g:I

    return-void

    :cond_17
    invoke-virtual {v12, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_18

    iput v14, v0, Lcom/loc/k;->g:I

    return-void

    :cond_18
    invoke-virtual {v11, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_19

    iput v8, v0, Lcom/loc/k;->g:I

    return-void

    :cond_19
    invoke-virtual {v9, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_1b

    invoke-virtual {v7, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1a

    iput v14, v0, Lcom/loc/k;->g:I

    return-void

    :cond_1a
    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1b

    invoke-virtual {v6, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1b

    iput v13, v0, Lcom/loc/k;->g:I

    return-void

    :cond_1b
    const/16 v1, 0x9

    iput v1, v0, Lcom/loc/k;->g:I

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/k;-><init>(Ljava/lang/String;)V

    iput-object p2, p0, Lcom/loc/k;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/loc/k;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/k;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/k;->i:Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;)V"
        }
    .end annotation

    iput-object p1, p0, Lcom/loc/k;->j:Ljava/util/Map;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/k;->d:Ljava/lang/String;

    return-object v0
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/k;->e:Ljava/lang/String;

    return-object v0
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/k;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/k;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final f()I
    .locals 1

    iget v0, p0, Lcom/loc/k;->f:I

    return v0
.end method

.method public final g()I
    .locals 1

    iget v0, p0, Lcom/loc/k;->g:I

    return v0
.end method

.method public final h()I
    .locals 1

    const/16 v0, 0xa

    iput v0, p0, Lcom/loc/k;->g:I

    return v0
.end method

.method public final i()Z
    .locals 1

    iget-boolean v0, p0, Lcom/loc/k;->h:Z

    return v0
.end method

.method public final j()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/loc/k;->h:Z

    return-void
.end method
