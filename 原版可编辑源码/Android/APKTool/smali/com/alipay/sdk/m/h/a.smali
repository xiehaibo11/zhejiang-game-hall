.class public Lcom/alipay/sdk/m/h/a;
.super Lcom/alipay/sdk/m/g/a;
.source "SourceFile"


# static fields
.field public static final synthetic d:Z


# direct methods
.method public static constructor <clinit>()V
    .locals 1

    .line 1
    const-class v0, Lcom/alipay/sdk/m/h/a;

    invoke-virtual {v0}, Ljava/lang/Class;->desiredAssertionStatus()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    sput-boolean v0, Lcom/alipay/sdk/m/h/a;->d:Z

    return-void
.end method

.method public constructor <init>([B)V
    .locals 0

    .line 1
    invoke-direct {p0, p1}, Lcom/alipay/sdk/m/g/a;-><init>([B)V

    return-void
.end method

.method public static a(Ljava/lang/String;JLcom/alipay/sdk/m/h/b;SLcom/alipay/sdk/m/h/e;)Lcom/alipay/sdk/m/h/a;
    .locals 17
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    move-object/from16 v0, p0

    move-object/from16 v1, p3

    move-object/from16 v2, p5

    const/4 v3, 0x1

    .line 1
    invoke-static {v3}, Lcom/alipay/sdk/m/g/c;->a(B)[B

    move-result-object v4

    .line 2
    sget-boolean v5, Lcom/alipay/sdk/m/h/a;->d:Z

    if-nez v5, :cond_1

    array-length v5, v4

    if-ne v5, v3, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    :cond_1
    :goto_0
    const/4 v5, 0x0

    .line 5
    invoke-virtual {v0, v5}, Ljava/lang/String;->charAt(I)C

    move-result v6

    invoke-virtual {v0, v3}, Ljava/lang/String;->charAt(I)C

    move-result v0

    invoke-static {v6, v0}, Lcom/alipay/sdk/m/g/c;->a(CC)[B

    move-result-object v0

    .line 6
    sget-boolean v6, Lcom/alipay/sdk/m/h/a;->d:Z

    const/4 v7, 0x2

    if-nez v6, :cond_3

    array-length v6, v0

    if-ne v6, v7, :cond_2

    goto :goto_1

    :cond_2
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    .line 8
    :cond_3
    :goto_1
    invoke-static/range {p1 .. p2}, Lcom/alipay/sdk/m/g/c;->a(J)[B

    move-result-object v6

    .line 9
    sget-boolean v8, Lcom/alipay/sdk/m/h/a;->d:Z

    const/16 v9, 0x8

    if-nez v8, :cond_5

    array-length v8, v6

    if-ne v8, v9, :cond_4

    goto :goto_2

    :cond_4
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    .line 12
    :cond_5
    :goto_2
    invoke-static {}, Lcom/alipay/sdk/m/g/c;->b()[B

    move-result-object v8

    .line 13
    sget-boolean v10, Lcom/alipay/sdk/m/h/a;->d:Z

    if-nez v10, :cond_7

    array-length v10, v8

    if-ne v10, v7, :cond_6

    goto :goto_3

    :cond_6
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    .line 15
    :cond_7
    :goto_3
    invoke-virtual/range {p3 .. p3}, Lcom/alipay/sdk/m/h/b;->a()V

    .line 17
    iget-byte v10, v1, Lcom/alipay/sdk/m/h/b;->a:B

    invoke-static {v10}, Lcom/alipay/sdk/m/g/c;->a(B)[B

    move-result-object v10

    .line 18
    sget-boolean v11, Lcom/alipay/sdk/m/h/a;->d:Z

    if-nez v11, :cond_9

    array-length v11, v10

    if-ne v11, v3, :cond_8

    goto :goto_4

    :cond_8
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    .line 20
    :cond_9
    :goto_4
    iget-byte v11, v1, Lcom/alipay/sdk/m/h/b;->b:B

    invoke-static {v11}, Lcom/alipay/sdk/m/g/c;->a(B)[B

    move-result-object v11

    .line 21
    sget-boolean v12, Lcom/alipay/sdk/m/h/a;->d:Z

    if-nez v12, :cond_b

    array-length v12, v11

    if-ne v12, v3, :cond_a

    goto :goto_5

    :cond_a
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    .line 23
    :cond_b
    :goto_5
    iget-object v12, v1, Lcom/alipay/sdk/m/h/b;->c:[B

    invoke-virtual {v12}, [B->clone()Ljava/lang/Object;

    move-result-object v12

    check-cast v12, [B

    .line 24
    sget-boolean v13, Lcom/alipay/sdk/m/h/a;->d:Z

    if-nez v13, :cond_d

    array-length v13, v12

    iget-byte v1, v1, Lcom/alipay/sdk/m/h/b;->b:B

    and-int/lit16 v1, v1, 0xff

    if-ne v13, v1, :cond_c

    goto :goto_6

    :cond_c
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    .line 26
    :cond_d
    :goto_6
    invoke-static/range {p4 .. p4}, Lcom/alipay/sdk/m/g/c;->a(S)[B

    move-result-object v1

    .line 27
    sget-boolean v13, Lcom/alipay/sdk/m/h/a;->d:Z

    if-nez v13, :cond_f

    array-length v13, v1

    if-ne v13, v7, :cond_e

    goto :goto_7

    :cond_e
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    .line 30
    :cond_f
    :goto_7
    invoke-static {}, Lcom/alipay/sdk/m/g/c;->b()[B

    move-result-object v13

    .line 31
    sget-boolean v14, Lcom/alipay/sdk/m/h/a;->d:Z

    if-nez v14, :cond_11

    array-length v14, v13

    if-ne v14, v7, :cond_10

    goto :goto_8

    :cond_10
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    .line 33
    :cond_11
    :goto_8
    invoke-virtual/range {p5 .. p5}, Lcom/alipay/sdk/m/h/e;->a()V

    .line 35
    iget-byte v14, v2, Lcom/alipay/sdk/m/h/e;->a:B

    invoke-static {v14}, Lcom/alipay/sdk/m/g/c;->a(B)[B

    move-result-object v14

    .line 36
    sget-boolean v15, Lcom/alipay/sdk/m/h/a;->d:Z

    if-nez v15, :cond_13

    array-length v15, v14

    if-ne v15, v3, :cond_12

    goto :goto_9

    :cond_12
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    .line 38
    :cond_13
    :goto_9
    iget-object v15, v2, Lcom/alipay/sdk/m/h/e;->b:[B

    invoke-virtual {v15}, [B->clone()Ljava/lang/Object;

    move-result-object v15

    check-cast v15, [B

    .line 39
    sget-boolean v16, Lcom/alipay/sdk/m/h/a;->d:Z

    if-nez v16, :cond_15

    array-length v9, v15

    iget-byte v2, v2, Lcom/alipay/sdk/m/h/e;->a:B

    and-int/lit16 v2, v2, 0xff

    if-ne v9, v2, :cond_14

    goto :goto_a

    :cond_14
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    .line 42
    :cond_15
    :goto_a
    invoke-static {}, Lcom/alipay/sdk/m/g/c;->c()[B

    move-result-object v2

    .line 43
    sget-boolean v9, Lcom/alipay/sdk/m/h/a;->d:Z

    const/4 v7, 0x4

    if-nez v9, :cond_17

    array-length v9, v2

    if-ne v9, v7, :cond_16

    goto :goto_b

    :cond_16
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    .line 46
    :cond_17
    :goto_b
    new-instance v9, Lcom/alipay/sdk/m/h/a;

    const/16 v7, 0xc

    new-array v7, v7, [[B

    aput-object v4, v7, v5

    aput-object v0, v7, v3

    const/4 v0, 0x2

    aput-object v6, v7, v0

    const/4 v0, 0x3

    aput-object v8, v7, v0

    const/4 v0, 0x4

    aput-object v10, v7, v0

    const/4 v0, 0x5

    aput-object v11, v7, v0

    const/4 v0, 0x6

    aput-object v12, v7, v0

    const/4 v0, 0x7

    aput-object v1, v7, v0

    const/16 v0, 0x8

    aput-object v13, v7, v0

    const/16 v0, 0x9

    aput-object v14, v7, v0

    const/16 v0, 0xa

    aput-object v15, v7, v0

    const/16 v0, 0xb

    aput-object v2, v7, v0

    invoke-static {v7}, Lcom/alipay/sdk/m/g/c;->a([[B)[B

    move-result-object v0

    invoke-direct {v9, v0}, Lcom/alipay/sdk/m/h/a;-><init>([B)V

    return-object v9
.end method

.method public static c()Lcom/alipay/sdk/m/h/a;
    .locals 6

    const-string v0, "EX"

    .line 1
    :try_start_0
    new-instance v3, Lcom/alipay/sdk/m/h/c;

    const-string v1, ""

    invoke-direct {v3, v1}, Lcom/alipay/sdk/m/h/c;-><init>(Ljava/lang/String;)V

    const/4 v4, 0x0

    new-instance v5, Lcom/alipay/sdk/m/h/f;

    invoke-direct {v5}, Lcom/alipay/sdk/m/h/f;-><init>()V

    const-wide/16 v1, 0x0

    invoke-static/range {v0 .. v5}, Lcom/alipay/sdk/m/h/a;->a(Ljava/lang/String;JLcom/alipay/sdk/m/h/b;SLcom/alipay/sdk/m/h/e;)Lcom/alipay/sdk/m/h/a;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const/4 v0, 0x0

    return-object v0
.end method
