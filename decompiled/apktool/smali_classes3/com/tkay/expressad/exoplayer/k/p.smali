.class public final Lcom/tkay/expressad/exoplayer/k/p;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/k/p$a;,
        Lcom/tkay/expressad/exoplayer/k/p$b;
    }
.end annotation


# static fields
.field public static final a:[B

.field public static final b:I = 0xff

.field public static final c:[F

.field private static final d:Ljava/lang/String; = "NalUnitUtil"

.field private static final e:I = 0x6

.field private static final f:I = 0x7

.field private static final g:I = 0x27

.field private static final h:Ljava/lang/Object;

.field private static i:[I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x4

    new-array v0, v0, [B

    .line 82
    fill-array-data v0, :array_0

    sput-object v0, Lcom/tkay/expressad/exoplayer/k/p;->a:[B

    const/16 v0, 0x11

    new-array v0, v0, [F

    .line 87
    fill-array-data v0, :array_1

    sput-object v0, Lcom/tkay/expressad/exoplayer/k/p;->c:[F

    .line 111
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/k/p;->h:Ljava/lang/Object;

    const/16 v0, 0xa

    new-array v0, v0, [I

    .line 117
    sput-object v0, Lcom/tkay/expressad/exoplayer/k/p;->i:[I

    return-void

    nop

    :array_0
    .array-data 1
        0x0t
        0x0t
        0x0t
        0x1t
    .end array-data

    :array_1
    .array-data 4
        0x3f800000    # 1.0f
        0x3f800000    # 1.0f
        0x3f8ba2e9
        0x3f68ba2f
        0x3fba2e8c
        0x3f9b26ca
        0x400ba2e9
        0x3fe8ba2f
        0x403a2e8c
        0x401b26ca
        0x3fd1745d
        0x3fae8ba3
        0x3ff83e10
        0x3fcede62
        0x3faaaaab
        0x3fc00000    # 1.5f
        0x40000000    # 2.0f
    .end array-data
.end method

.method private constructor <init>()V
    .locals 0

    .line 488
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a([BI)I
    .locals 8

    .line 131
    sget-object v0, Lcom/tkay/expressad/exoplayer/k/p;->h:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x0

    move v2, v1

    move v3, v2

    :cond_0
    :goto_0
    if-ge v2, p1, :cond_4

    :goto_1
    add-int/lit8 v4, p1, -0x2

    if-ge v2, v4, :cond_2

    .line 1469
    :try_start_0
    aget-byte v4, p0, v2

    if-nez v4, :cond_1

    add-int/lit8 v4, v2, 0x1

    aget-byte v4, p0, v4

    if-nez v4, :cond_1

    add-int/lit8 v4, v2, 0x2

    aget-byte v4, p0, v4

    const/4 v5, 0x3

    if-ne v4, v5, :cond_1

    goto :goto_2

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_2
    move v2, p1

    :goto_2
    if-ge v2, p1, :cond_0

    .line 137
    sget-object v4, Lcom/tkay/expressad/exoplayer/k/p;->i:[I

    array-length v4, v4

    if-gt v4, v3, :cond_3

    .line 139
    sget-object v4, Lcom/tkay/expressad/exoplayer/k/p;->i:[I

    array-length v5, v4

    mul-int/lit8 v5, v5, 0x2

    invoke-static {v4, v5}, Ljava/util/Arrays;->copyOf([II)[I

    move-result-object v4

    sput-object v4, Lcom/tkay/expressad/exoplayer/k/p;->i:[I

    .line 142
    :cond_3
    sget-object v4, Lcom/tkay/expressad/exoplayer/k/p;->i:[I

    add-int/lit8 v5, v3, 0x1

    aput v2, v4, v3

    add-int/lit8 v2, v2, 0x3

    move v3, v5

    goto :goto_0

    :cond_4
    sub-int/2addr p1, v3

    move v2, v1

    move v4, v2

    move v5, v4

    :goto_3
    if-ge v2, v3, :cond_5

    .line 151
    sget-object v6, Lcom/tkay/expressad/exoplayer/k/p;->i:[I

    aget v6, v6, v2

    sub-int/2addr v6, v5

    .line 153
    invoke-static {p0, v5, p0, v4, v6}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/2addr v4, v6

    add-int/lit8 v7, v4, 0x1

    .line 155
    aput-byte v1, p0, v4

    add-int/lit8 v4, v7, 0x1

    .line 156
    aput-byte v1, p0, v7

    add-int/lit8 v6, v6, 0x3

    add-int/2addr v5, v6

    add-int/lit8 v2, v2, 0x1

    goto :goto_3

    :cond_5
    sub-int v1, p1, v4

    .line 161
    invoke-static {p0, v5, p0, v4, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 162
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p0

    .line 163
    monitor-exit v0

    throw p0
.end method

.method private static a([BII[Z)I
    .locals 7

    sub-int v0, p2, p1

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ltz v0, :cond_0

    move v3, v2

    goto :goto_0

    :cond_0
    move v3, v1

    .line 402
    :goto_0
    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    if-nez v0, :cond_1

    return p2

    :cond_1
    const/4 v3, 0x2

    if-eqz p3, :cond_4

    .line 408
    aget-boolean v4, p3, v1

    if-eqz v4, :cond_2

    .line 409
    invoke-static {p3}, Lcom/tkay/expressad/exoplayer/k/p;->a([Z)V

    add-int/lit8 p1, p1, -0x3

    return p1

    :cond_2
    if-le v0, v2, :cond_3

    .line 411
    aget-boolean v4, p3, v2

    if-eqz v4, :cond_3

    aget-byte v4, p0, p1

    if-ne v4, v2, :cond_3

    .line 412
    invoke-static {p3}, Lcom/tkay/expressad/exoplayer/k/p;->a([Z)V

    sub-int/2addr p1, v3

    return p1

    :cond_3
    if-le v0, v3, :cond_4

    .line 414
    aget-boolean v4, p3, v3

    if-eqz v4, :cond_4

    aget-byte v4, p0, p1

    if-nez v4, :cond_4

    add-int/lit8 v4, p1, 0x1

    aget-byte v4, p0, v4

    if-ne v4, v2, :cond_4

    .line 416
    invoke-static {p3}, Lcom/tkay/expressad/exoplayer/k/p;->a([Z)V

    sub-int/2addr p1, v2

    return p1

    :cond_4
    add-int/lit8 v4, p2, -0x1

    add-int/2addr p1, v3

    :goto_1
    if-ge p1, v4, :cond_8

    .line 425
    aget-byte v5, p0, p1

    and-int/lit16 v5, v5, 0xfe

    if-nez v5, :cond_7

    add-int/lit8 v5, p1, -0x2

    .line 428
    aget-byte v6, p0, v5

    if-nez v6, :cond_6

    add-int/lit8 v6, p1, -0x1

    aget-byte v6, p0, v6

    if-nez v6, :cond_6

    aget-byte v6, p0, p1

    if-ne v6, v2, :cond_6

    if-eqz p3, :cond_5

    .line 430
    invoke-static {p3}, Lcom/tkay/expressad/exoplayer/k/p;->a([Z)V

    :cond_5
    return v5

    :cond_6
    add-int/lit8 p1, p1, -0x2

    :cond_7
    add-int/lit8 p1, p1, 0x3

    goto :goto_1

    :cond_8
    if-eqz p3, :cond_f

    if-le v0, v3, :cond_a

    add-int/lit8 p1, p2, -0x3

    .line 443
    aget-byte p1, p0, p1

    if-nez p1, :cond_9

    add-int/lit8 p1, p2, -0x2

    aget-byte p1, p0, p1

    if-nez p1, :cond_9

    aget-byte p1, p0, v4

    if-ne p1, v2, :cond_9

    goto :goto_2

    :cond_9
    move p1, v1

    goto :goto_3

    :cond_a
    if-ne v0, v3, :cond_b

    .line 444
    aget-boolean p1, p3, v3

    if-eqz p1, :cond_9

    add-int/lit8 p1, p2, -0x2

    aget-byte p1, p0, p1

    if-nez p1, :cond_9

    aget-byte p1, p0, v4

    if-ne p1, v2, :cond_9

    goto :goto_2

    .line 445
    :cond_b
    aget-boolean p1, p3, v2

    if-eqz p1, :cond_9

    aget-byte p1, p0, v4

    if-ne p1, v2, :cond_9

    :goto_2
    move p1, v2

    :goto_3
    aput-boolean p1, p3, v1

    if-le v0, v2, :cond_c

    add-int/lit8 p1, p2, -0x2

    .line 447
    aget-byte p1, p0, p1

    if-nez p1, :cond_d

    aget-byte p1, p0, v4

    if-nez p1, :cond_d

    goto :goto_4

    .line 448
    :cond_c
    aget-boolean p1, p3, v3

    if-eqz p1, :cond_d

    aget-byte p1, p0, v4

    if-nez p1, :cond_d

    :goto_4
    move p1, v2

    goto :goto_5

    :cond_d
    move p1, v1

    :goto_5
    aput-boolean p1, p3, v2

    .line 450
    aget-byte p0, p0, v4

    if-nez p0, :cond_e

    move v1, v2

    :cond_e
    aput-boolean v1, p3, v3

    :cond_f
    return p2
.end method

.method public static a([BII)Lcom/tkay/expressad/exoplayer/k/p$b;
    .locals 18

    .line 252
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/t;

    move-object/from16 v1, p0

    move/from16 v2, p1

    move/from16 v3, p2

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/k/t;-><init>([BII)V

    const/16 v1, 0x8

    .line 253
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/t;->a(I)V

    .line 254
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/t;->b(I)I

    move-result v2

    const/16 v3, 0x10

    .line 255
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/t;->a(I)V

    .line 256
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v5

    const/4 v4, 0x3

    const/4 v6, 0x0

    const/4 v7, 0x1

    const/16 v8, 0x64

    if-eq v2, v8, :cond_1

    const/16 v8, 0x6e

    if-eq v2, v8, :cond_1

    const/16 v8, 0x7a

    if-eq v2, v8, :cond_1

    const/16 v8, 0xf4

    if-eq v2, v8, :cond_1

    const/16 v8, 0x2c

    if-eq v2, v8, :cond_1

    const/16 v8, 0x53

    if-eq v2, v8, :cond_1

    const/16 v8, 0x56

    if-eq v2, v8, :cond_1

    const/16 v8, 0x76

    if-eq v2, v8, :cond_1

    const/16 v8, 0x80

    if-eq v2, v8, :cond_1

    const/16 v8, 0x8a

    if-ne v2, v8, :cond_0

    goto :goto_0

    :cond_0
    move v9, v6

    move v2, v7

    goto :goto_7

    .line 263
    :cond_1
    :goto_0
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v2

    if-ne v2, v4, :cond_2

    .line 265
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->b()Z

    move-result v8

    goto :goto_1

    :cond_2
    move v8, v6

    .line 267
    :goto_1
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    .line 268
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    .line 269
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->a()V

    .line 270
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->b()Z

    move-result v9

    if-eqz v9, :cond_8

    if-eq v2, v4, :cond_3

    move v9, v1

    goto :goto_2

    :cond_3
    const/16 v9, 0xc

    :goto_2
    move v10, v6

    :goto_3
    if-ge v10, v9, :cond_8

    .line 274
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->b()Z

    move-result v11

    if-eqz v11, :cond_7

    const/4 v11, 0x6

    if-ge v10, v11, :cond_4

    move v11, v3

    goto :goto_4

    :cond_4
    const/16 v11, 0x40

    :goto_4
    move v13, v1

    move v14, v13

    move v12, v6

    :goto_5
    if-ge v12, v11, :cond_7

    if-eqz v13, :cond_5

    .line 1481
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->d()I

    move-result v13

    add-int/2addr v13, v14

    add-int/lit16 v13, v13, 0x100

    .line 1482
    rem-int/lit16 v13, v13, 0x100

    :cond_5
    if-nez v13, :cond_6

    goto :goto_6

    :cond_6
    move v14, v13

    :goto_6
    add-int/lit8 v12, v12, 0x1

    goto :goto_5

    :cond_7
    add-int/lit8 v10, v10, 0x1

    goto :goto_3

    :cond_8
    move v9, v8

    .line 282
    :goto_7
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v8

    add-int/lit8 v11, v8, 0x4

    .line 283
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v12

    if-nez v12, :cond_9

    .line 288
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v8

    add-int/lit8 v8, v8, 0x4

    move/from16 p0, v5

    move v14, v6

    move v13, v8

    goto :goto_9

    :cond_9
    if-ne v12, v7, :cond_b

    .line 290
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->b()Z

    move-result v8

    .line 291
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->d()I

    .line 292
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->d()I

    .line 293
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v10

    int-to-long v13, v10

    move/from16 p0, v5

    move v10, v6

    :goto_8
    int-to-long v4, v10

    cmp-long v4, v4, v13

    if-gez v4, :cond_a

    .line 295
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    add-int/lit8 v10, v10, 0x1

    goto :goto_8

    :cond_a
    move v13, v6

    move v14, v8

    goto :goto_9

    :cond_b
    move/from16 p0, v5

    move v13, v6

    move v14, v13

    .line 298
    :goto_9
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    .line 299
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->a()V

    .line 301
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v4

    add-int/2addr v4, v7

    .line 302
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v5

    add-int/2addr v5, v7

    .line 303
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->b()Z

    move-result v10

    const/4 v6, 0x2

    rsub-int/lit8 v8, v10, 0x2

    mul-int/2addr v8, v5

    if-nez v10, :cond_c

    .line 306
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->a()V

    .line 309
    :cond_c
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->a()V

    mul-int/2addr v4, v3

    mul-int/2addr v8, v3

    .line 312
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->b()Z

    move-result v5

    if-eqz v5, :cond_10

    .line 314
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v5

    .line 315
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v15

    .line 316
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v16

    .line 317
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result v17

    if-nez v2, :cond_d

    sub-int/2addr v6, v10

    goto :goto_b

    :cond_d
    const/4 v3, 0x3

    if-ne v2, v3, :cond_e

    move v3, v7

    goto :goto_a

    :cond_e
    move v3, v6

    :goto_a
    if-ne v2, v7, :cond_f

    move v7, v6

    :cond_f
    sub-int/2addr v6, v10

    mul-int/2addr v6, v7

    move v7, v3

    :goto_b
    add-int/2addr v5, v15

    mul-int/2addr v5, v7

    sub-int/2addr v4, v5

    add-int v16, v16, v17

    mul-int v16, v16, v6

    sub-int v8, v8, v16

    :cond_10
    move v6, v4

    move v7, v8

    const/high16 v2, 0x3f800000    # 1.0f

    .line 334
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->b()Z

    move-result v3

    if-eqz v3, :cond_13

    .line 336
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->b()Z

    move-result v3

    if-eqz v3, :cond_13

    .line 338
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/t;->b(I)I

    move-result v1

    const/16 v3, 0xff

    if-ne v1, v3, :cond_11

    const/16 v3, 0x10

    .line 340
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/t;->b(I)I

    move-result v1

    .line 341
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/t;->b(I)I

    move-result v0

    if-eqz v1, :cond_13

    if-eqz v0, :cond_13

    int-to-float v1, v1

    int-to-float v0, v0

    div-float v2, v1, v0

    goto :goto_c

    .line 345
    :cond_11
    sget-object v0, Lcom/tkay/expressad/exoplayer/k/p;->c:[F

    array-length v3, v0

    if-ge v1, v3, :cond_12

    .line 346
    aget v0, v0, v1

    move v8, v0

    goto :goto_d

    .line 348
    :cond_12
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "Unexpected aspect_ratio_idc value: "

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "NalUnitUtil"

    invoke-static {v1, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_13
    :goto_c
    move v8, v2

    .line 353
    :goto_d
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/p$b;

    move-object v4, v0

    move/from16 v5, p0

    invoke-direct/range {v4 .. v14}, Lcom/tkay/expressad/exoplayer/k/p$b;-><init>(IIIFZZIIIZ)V

    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/t;I)V
    .locals 3

    const/16 v0, 0x8

    const/4 v1, 0x0

    move v2, v1

    move v1, v0

    :goto_0
    if-ge v2, p1, :cond_2

    if-eqz v0, :cond_0

    .line 481
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/t;->d()I

    move-result v0

    add-int/2addr v0, v1

    add-int/lit16 v0, v0, 0x100

    .line 482
    rem-int/lit16 v0, v0, 0x100

    :cond_0
    if-nez v0, :cond_1

    goto :goto_1

    :cond_1
    move v1, v0

    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method public static a(Ljava/nio/ByteBuffer;)V
    .locals 9

    .line 176
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->position()I

    move-result v0

    const/4 v1, 0x0

    move v2, v1

    move v3, v2

    :goto_0
    add-int/lit8 v4, v2, 0x1

    if-ge v4, v0, :cond_3

    .line 180
    invoke-virtual {p0, v2}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v5

    and-int/lit16 v5, v5, 0xff

    const/4 v6, 0x3

    if-ne v3, v6, :cond_0

    const/4 v7, 0x1

    if-ne v5, v7, :cond_1

    .line 182
    invoke-virtual {p0, v4}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v7

    and-int/lit8 v7, v7, 0x1f

    const/4 v8, 0x7

    if-ne v7, v8, :cond_1

    .line 184
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->duplicate()Ljava/nio/ByteBuffer;

    move-result-object v3

    sub-int/2addr v2, v6

    .line 185
    invoke-virtual {v3, v2}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 186
    invoke-virtual {v3, v0}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 187
    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 188
    invoke-virtual {p0, v3}, Ljava/nio/ByteBuffer;->put(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;

    return-void

    :cond_0
    if-nez v5, :cond_1

    add-int/lit8 v3, v3, 0x1

    :cond_1
    if-eqz v5, :cond_2

    move v3, v1

    :cond_2
    move v2, v4

    goto :goto_0

    .line 200
    :cond_3
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->clear()Ljava/nio/Buffer;

    return-void
.end method

.method private static a([Z)V
    .locals 2

    const/4 v0, 0x0

    .line 462
    aput-boolean v0, p0, v0

    const/4 v1, 0x1

    .line 463
    aput-boolean v0, p0, v1

    const/4 v1, 0x2

    .line 464
    aput-boolean v0, p0, v1

    return-void
.end method

.method public static a(Ljava/lang/String;B)Z
    .locals 3

    const-string v0, "video/avc"

    .line 212
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    and-int/lit8 v0, p1, 0x1f

    const/4 v2, 0x6

    if-eq v0, v2, :cond_1

    :cond_0
    const-string v0, "video/hevc"

    .line 214
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    and-int/lit8 p0, p1, 0x7e

    shr-int/2addr p0, v1

    const/16 p1, 0x27

    if-ne p0, p1, :cond_2

    :cond_1
    return v1

    :cond_2
    const/4 p0, 0x0

    return p0
.end method

.method private static b([BI)I
    .locals 0

    add-int/lit8 p1, p1, 0x3

    .line 227
    aget-byte p0, p0, p1

    and-int/lit8 p0, p0, 0x1f

    return p0
.end method

.method private static b([BII)Lcom/tkay/expressad/exoplayer/k/p$a;
    .locals 1

    .line 368
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/t;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/expressad/exoplayer/k/t;-><init>([BII)V

    const/16 p0, 0x8

    .line 369
    invoke-virtual {v0, p0}, Lcom/tkay/expressad/exoplayer/k/t;->a(I)V

    .line 370
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result p0

    .line 371
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->c()I

    move-result p1

    .line 372
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->a()V

    .line 373
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/t;->b()Z

    move-result p2

    .line 374
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/p$a;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/expressad/exoplayer/k/p$a;-><init>(IIZ)V

    return-object v0
.end method

.method private static c([BI)I
    .locals 0

    add-int/lit8 p1, p1, 0x3

    .line 239
    aget-byte p0, p0, p1

    and-int/lit8 p0, p0, 0x7e

    shr-int/lit8 p0, p0, 0x1

    return p0
.end method

.method private static c([BII)I
    .locals 2

    :goto_0
    add-int/lit8 v0, p2, -0x2

    if-ge p1, v0, :cond_1

    .line 469
    aget-byte v0, p0, p1

    if-nez v0, :cond_0

    add-int/lit8 v0, p1, 0x1

    aget-byte v0, p0, v0

    if-nez v0, :cond_0

    add-int/lit8 v0, p1, 0x2

    aget-byte v0, p0, v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    return p1

    :cond_0
    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :cond_1
    return p2
.end method
