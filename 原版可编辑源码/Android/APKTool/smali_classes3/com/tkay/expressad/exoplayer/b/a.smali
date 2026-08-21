.class public final Lcom/tkay/expressad/exoplayer/b/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/b/a$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x10

.field public static final b:I = 0xa

.field private static final c:I = 0x100

.field private static final d:I = 0x600

.field private static final e:[I

.field private static final f:[I

.field private static final g:[I

.field private static final h:[I

.field private static final i:[I

.field private static final j:[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    const/4 v0, 0x4

    new-array v0, v0, [I

    .line 118
    fill-array-data v0, :array_0

    sput-object v0, Lcom/tkay/expressad/exoplayer/b/a;->e:[I

    const/4 v0, 0x3

    new-array v1, v0, [I

    .line 122
    fill-array-data v1, :array_1

    sput-object v1, Lcom/tkay/expressad/exoplayer/b/a;->f:[I

    new-array v0, v0, [I

    .line 126
    fill-array-data v0, :array_2

    sput-object v0, Lcom/tkay/expressad/exoplayer/b/a;->g:[I

    const/16 v0, 0x8

    new-array v0, v0, [I

    .line 130
    fill-array-data v0, :array_3

    sput-object v0, Lcom/tkay/expressad/exoplayer/b/a;->h:[I

    const/16 v0, 0x13

    new-array v1, v0, [I

    .line 134
    fill-array-data v1, :array_4

    sput-object v1, Lcom/tkay/expressad/exoplayer/b/a;->i:[I

    new-array v0, v0, [I

    .line 139
    fill-array-data v0, :array_5

    sput-object v0, Lcom/tkay/expressad/exoplayer/b/a;->j:[I

    return-void

    nop

    :array_0
    .array-data 4
        0x1
        0x2
        0x3
        0x6
    .end array-data

    :array_1
    .array-data 4
        0xbb80
        0xac44
        0x7d00
    .end array-data

    :array_2
    .array-data 4
        0x5dc0
        0x5622
        0x3e80
    .end array-data

    :array_3
    .array-data 4
        0x2
        0x1
        0x2
        0x3
        0x3
        0x4
        0x4
        0x5
    .end array-data

    :array_4
    .array-data 4
        0x20
        0x28
        0x30
        0x38
        0x40
        0x50
        0x60
        0x70
        0x80
        0xa0
        0xc0
        0xe0
        0x100
        0x140
        0x180
        0x1c0
        0x200
        0x240
        0x280
    .end array-data

    :array_5
    .array-data 4
        0x45
        0x57
        0x68
        0x79
        0x8b
        0xae
        0xd0
        0xf3
        0x116
        0x15c
        0x1a1
        0x1e7
        0x22d
        0x2b8
        0x343
        0x3cf
        0x45a
        0x4e5
        0x571
    .end array-data
.end method

.method private constructor <init>()V
    .locals 0

    .line 544
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()I
    .locals 1

    const/16 v0, 0x600

    return v0
.end method

.method private static a(II)I
    .locals 4

    .line 526
    div-int/lit8 v0, p1, 0x2

    if-ltz p0, :cond_3

    .line 527
    sget-object v1, Lcom/tkay/expressad/exoplayer/b/a;->f:[I

    array-length v2, v1

    if-ge p0, v2, :cond_3

    if-ltz p1, :cond_3

    sget-object v2, Lcom/tkay/expressad/exoplayer/b/a;->j:[I

    array-length v3, v2

    if-lt v0, v3, :cond_0

    goto :goto_0

    .line 532
    :cond_0
    aget p0, v1, p0

    const v1, 0xac44

    if-ne p0, v1, :cond_1

    .line 534
    aget p0, v2, v0

    rem-int/lit8 p1, p1, 0x2

    add-int/2addr p0, p1

    mul-int/lit8 p0, p0, 0x2

    return p0

    .line 536
    :cond_1
    sget-object p1, Lcom/tkay/expressad/exoplayer/b/a;->i:[I

    aget p1, p1, v0

    const/16 v0, 0x7d00

    if-ne p0, v0, :cond_2

    mul-int/lit8 p1, p1, 0x6

    return p1

    :cond_2
    mul-int/lit8 p1, p1, 0x4

    return p1

    :cond_3
    :goto_0
    const/4 p0, -0x1

    return p0
.end method

.method public static a(Ljava/nio/ByteBuffer;)I
    .locals 3

    .line 464
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->position()I

    move-result v0

    add-int/lit8 v0, v0, 0x4

    invoke-virtual {p0, v0}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v0

    and-int/lit16 v0, v0, 0xc0

    const/4 v1, 0x6

    shr-int/2addr v0, v1

    const/4 v2, 0x3

    if-ne v0, v2, :cond_0

    goto :goto_0

    .line 466
    :cond_0
    sget-object v0, Lcom/tkay/expressad/exoplayer/b/a;->e:[I

    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->position()I

    move-result v1

    add-int/lit8 v1, v1, 0x4

    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result p0

    and-int/lit8 p0, p0, 0x30

    shr-int/lit8 p0, p0, 0x4

    aget v1, v0, p0

    :goto_0
    mul-int/lit16 v1, v1, 0x100

    return v1
.end method

.method public static a(Ljava/nio/ByteBuffer;I)I
    .locals 3

    .line 521
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->position()I

    move-result v0

    add-int/2addr v0, p1

    add-int/lit8 v0, v0, 0x7

    invoke-virtual {p0, v0}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v0

    and-int/lit16 v0, v0, 0xff

    const/16 v1, 0xbb

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0x28

    .line 522
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->position()I

    move-result v2

    add-int/2addr v2, p1

    if-eqz v0, :cond_1

    const/16 p1, 0x9

    goto :goto_1

    :cond_1
    const/16 p1, 0x8

    :goto_1
    add-int/2addr v2, p1

    invoke-virtual {p0, v2}, Ljava/nio/ByteBuffer;->get(I)B

    move-result p0

    shr-int/lit8 p0, p0, 0x4

    and-int/lit8 p0, p0, 0x7

    shl-int p0, v1, p0

    return p0
.end method

.method private static a([B)I
    .locals 2

    .line 440
    array-length v0, p0

    const/4 v1, 0x5

    if-ge v0, v1, :cond_0

    const/4 p0, -0x1

    return p0

    :cond_0
    const/4 v0, 0x4

    .line 443
    aget-byte v1, p0, v0

    and-int/lit16 v1, v1, 0xc0

    shr-int/lit8 v1, v1, 0x6

    .line 444
    aget-byte p0, p0, v0

    and-int/lit8 p0, p0, 0x3f

    .line 445
    invoke-static {v1, p0}, Lcom/tkay/expressad/exoplayer/b/a;->a(II)I

    move-result p0

    return p0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/r;)Lcom/tkay/expressad/exoplayer/b/a$a;
    .locals 18

    move-object/from16 v0, p0

    .line 218
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->b()I

    move-result v1

    const/16 v2, 0x28

    .line 219
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    const/4 v2, 0x5

    .line 220
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v3

    const/16 v5, 0x10

    const/4 v6, 0x1

    if-ne v3, v5, :cond_0

    move v3, v6

    goto :goto_0

    :cond_0
    const/4 v3, 0x0

    .line 221
    :goto_0
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/r;->a(I)V

    const/4 v1, -0x1

    const/16 v7, 0x8

    const/4 v8, 0x3

    const/4 v9, 0x6

    const/4 v10, 0x2

    if-eqz v3, :cond_2b

    .line 232
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 233
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v3

    if-eqz v3, :cond_3

    if-eq v3, v6, :cond_2

    if-eq v3, v10, :cond_1

    goto :goto_1

    :cond_1
    move v1, v10

    goto :goto_1

    :cond_2
    move v1, v6

    goto :goto_1

    :cond_3
    const/4 v1, 0x0

    .line 247
    :goto_1
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    const/16 v3, 0xb

    .line 248
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v3

    add-int/2addr v3, v6

    mul-int/2addr v3, v10

    .line 249
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v11

    if-ne v11, v8, :cond_4

    .line 254
    sget-object v12, Lcom/tkay/expressad/exoplayer/b/a;->g:[I

    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v13

    aget v12, v12, v13

    move v13, v9

    move v14, v12

    move v12, v8

    goto :goto_2

    .line 257
    :cond_4
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v12

    .line 258
    sget-object v13, Lcom/tkay/expressad/exoplayer/b/a;->e:[I

    aget v13, v13, v12

    .line 259
    sget-object v14, Lcom/tkay/expressad/exoplayer/b/a;->f:[I

    aget v14, v14, v11

    :goto_2
    mul-int/lit16 v15, v13, 0x100

    .line 262
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v4

    .line 263
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v16

    .line 264
    sget-object v17, Lcom/tkay/expressad/exoplayer/b/a;->h:[I

    aget v17, v17, v4

    add-int v17, v17, v16

    const/16 v8, 0xa

    .line 265
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 266
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v8

    if-eqz v8, :cond_5

    .line 267
    invoke-virtual {v0, v7}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_5
    if-nez v4, :cond_6

    .line 270
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 271
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v8

    if-eqz v8, :cond_6

    .line 272
    invoke-virtual {v0, v7}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_6
    if-ne v1, v6, :cond_7

    .line 275
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v8

    if-eqz v8, :cond_7

    .line 276
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 278
    :cond_7
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v5

    const/4 v8, 0x4

    if-eqz v5, :cond_20

    if-le v4, v10, :cond_8

    .line 280
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_8
    and-int/lit8 v5, v4, 0x1

    if-eqz v5, :cond_9

    if-le v4, v10, :cond_9

    .line 283
    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_9
    and-int/lit8 v5, v4, 0x4

    if-eqz v5, :cond_a

    .line 286
    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_a
    if-eqz v16, :cond_b

    .line 288
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v5

    if-eqz v5, :cond_b

    .line 289
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_b
    if-nez v1, :cond_20

    .line 292
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v5

    if-eqz v5, :cond_c

    .line 293
    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_c
    if-nez v4, :cond_d

    .line 295
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v5

    if-eqz v5, :cond_d

    .line 296
    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 298
    :cond_d
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v5

    if-eqz v5, :cond_e

    .line 299
    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 301
    :cond_e
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v5

    if-ne v5, v6, :cond_f

    .line 303
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    goto/16 :goto_3

    :cond_f
    if-ne v5, v10, :cond_10

    const/16 v5, 0xc

    .line 305
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    goto/16 :goto_3

    :cond_10
    const/4 v6, 0x3

    if-ne v5, v6, :cond_1b

    .line 307
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v5

    .line 308
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_19

    .line 309
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 310
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_11

    .line 311
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 313
    :cond_11
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_12

    .line 314
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 316
    :cond_12
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_13

    .line 317
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 319
    :cond_13
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_14

    .line 320
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 322
    :cond_14
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_15

    .line 323
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 325
    :cond_15
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_16

    .line 326
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 328
    :cond_16
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_17

    .line 329
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 331
    :cond_17
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_19

    .line 332
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_18

    .line 333
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 335
    :cond_18
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_19

    .line 336
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 340
    :cond_19
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_1a

    .line 341
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 342
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_1a

    const/4 v6, 0x7

    .line 343
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 344
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_1a

    .line 345
    invoke-virtual {v0, v7}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_1a
    add-int/2addr v5, v10

    mul-int/2addr v5, v7

    .line 349
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 350
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->e()V

    :cond_1b
    :goto_3
    if-ge v4, v10, :cond_1d

    .line 353
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v5

    const/16 v6, 0xe

    if-eqz v5, :cond_1c

    .line 354
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_1c
    if-nez v4, :cond_1d

    .line 357
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v5

    if-eqz v5, :cond_1d

    .line 358
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 362
    :cond_1d
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v5

    if-eqz v5, :cond_20

    if-nez v12, :cond_1e

    .line 364
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    goto :goto_5

    :cond_1e
    const/4 v5, 0x0

    :goto_4
    if-ge v5, v13, :cond_20

    .line 367
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v6

    if-eqz v6, :cond_1f

    .line 368
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_1f
    add-int/lit8 v5, v5, 0x1

    goto :goto_4

    .line 375
    :cond_20
    :goto_5
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v5

    if-eqz v5, :cond_25

    .line 376
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    if-ne v4, v10, :cond_21

    .line 378
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_21
    if-lt v4, v9, :cond_22

    .line 381
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 383
    :cond_22
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v2

    if-eqz v2, :cond_23

    .line 384
    invoke-virtual {v0, v7}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_23
    if-nez v4, :cond_24

    .line 386
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v2

    if-eqz v2, :cond_24

    .line 387
    invoke-virtual {v0, v7}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_24
    const/4 v2, 0x3

    if-ge v11, v2, :cond_26

    .line 390
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->c()V

    goto :goto_6

    :cond_25
    const/4 v2, 0x3

    :cond_26
    :goto_6
    if-nez v1, :cond_27

    if-eq v12, v2, :cond_27

    .line 394
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->c()V

    :cond_27
    if-ne v1, v10, :cond_29

    if-eq v12, v2, :cond_28

    .line 397
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v2

    if-eqz v2, :cond_29

    .line 398
    :cond_28
    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 401
    :cond_29
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v2

    if-eqz v2, :cond_2a

    .line 402
    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v2

    const/4 v4, 0x1

    if-ne v2, v4, :cond_2a

    .line 403
    invoke-virtual {v0, v7}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v0

    if-ne v0, v4, :cond_2a

    const-string v0, "audio/eac3-joc"

    goto :goto_7

    :cond_2a
    const-string v0, "audio/eac3"

    goto :goto_7

    :cond_2b
    const/16 v2, 0x20

    .line 409
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 410
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v2

    .line 411
    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v3

    .line 412
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/b/a;->a(II)I

    move-result v3

    .line 413
    invoke-virtual {v0, v7}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    const/4 v4, 0x3

    .line 414
    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v4

    and-int/lit8 v5, v4, 0x1

    if-eqz v5, :cond_2c

    const/4 v5, 0x1

    if-eq v4, v5, :cond_2c

    .line 416
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_2c
    and-int/lit8 v5, v4, 0x4

    if-eqz v5, :cond_2d

    .line 419
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    :cond_2d
    if-ne v4, v10, :cond_2e

    .line 422
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 424
    :cond_2e
    sget-object v5, Lcom/tkay/expressad/exoplayer/b/a;->f:[I

    aget v14, v5, v2

    const/16 v15, 0x600

    .line 426
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/r;->d()Z

    move-result v0

    .line 427
    sget-object v2, Lcom/tkay/expressad/exoplayer/b/a;->h:[I

    aget v2, v2, v4

    add-int v17, v2, v0

    const-string v0, "audio/ac3"

    :goto_7
    move-object v5, v0

    move v6, v1

    move v9, v3

    move v8, v14

    move v10, v15

    move/from16 v7, v17

    .line 429
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/a$a;

    const/4 v11, 0x0

    move-object v4, v0

    invoke-direct/range {v4 .. v11}, Lcom/tkay/expressad/exoplayer/b/a$a;-><init>(Ljava/lang/String;IIIIIB)V

    return-object v0
.end method

.method public static a(Lcom/tkay/expressad/exoplayer/k/s;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;
    .locals 11

    .line 154
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    and-int/lit16 v0, v0, 0xc0

    shr-int/lit8 v0, v0, 0x6

    .line 155
    sget-object v1, Lcom/tkay/expressad/exoplayer/b/a;->f:[I

    aget v7, v1, v0

    .line 156
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result p0

    .line 157
    sget-object v0, Lcom/tkay/expressad/exoplayer/b/a;->h:[I

    and-int/lit8 v1, p0, 0x38

    shr-int/lit8 v1, v1, 0x3

    aget v0, v0, v1

    and-int/lit8 p0, p0, 0x4

    if-eqz p0, :cond_0

    add-int/lit8 v0, v0, 0x1

    :cond_0
    move v6, v0

    const/4 v4, 0x0

    const/4 v5, -0x1

    const/4 v8, 0x0

    const-string v3, "audio/ac3"

    move-object v2, p1

    move-object v9, p3

    move-object v10, p2

    .line 161
    invoke-static/range {v2 .. v10}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object p0

    return-object p0
.end method

.method public static b(Ljava/nio/ByteBuffer;)I
    .locals 5

    .line 478
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->position()I

    move-result v0

    .line 479
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->limit()I

    move-result v1

    add-int/lit8 v1, v1, -0xa

    move v2, v0

    :goto_0
    if-gt v2, v1, :cond_1

    add-int/lit8 v3, v2, 0x4

    .line 482
    invoke-virtual {p0, v3}, Ljava/nio/ByteBuffer;->getInt(I)I

    move-result v3

    const v4, -0x1000001

    and-int/2addr v3, v4

    const v4, -0x45908d08

    if-ne v3, v4, :cond_0

    sub-int/2addr v2, v0

    return v2

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, -0x1

    return p0
.end method

.method private static b([B)I
    .locals 5

    const/4 v0, 0x4

    .line 501
    aget-byte v1, p0, v0

    const/4 v2, 0x0

    const/4 v3, -0x8

    if-ne v1, v3, :cond_3

    const/4 v1, 0x5

    aget-byte v1, p0, v1

    const/16 v3, 0x72

    if-ne v1, v3, :cond_3

    const/4 v1, 0x6

    aget-byte v1, p0, v1

    const/16 v3, 0x6f

    if-ne v1, v3, :cond_3

    const/4 v1, 0x7

    aget-byte v3, p0, v1

    and-int/lit16 v3, v3, 0xfe

    const/16 v4, 0xba

    if-eq v3, v4, :cond_0

    goto :goto_1

    .line 507
    :cond_0
    aget-byte v3, p0, v1

    and-int/lit16 v3, v3, 0xff

    const/16 v4, 0xbb

    if-ne v3, v4, :cond_1

    const/4 v2, 0x1

    :cond_1
    const/16 v3, 0x28

    if-eqz v2, :cond_2

    const/16 v2, 0x9

    goto :goto_0

    :cond_2
    const/16 v2, 0x8

    .line 508
    :goto_0
    aget-byte p0, p0, v2

    shr-int/2addr p0, v0

    and-int/2addr p0, v1

    shl-int p0, v3, p0

    return p0

    :cond_3
    :goto_1
    return v2
.end method

.method public static b(Lcom/tkay/expressad/exoplayer/k/s;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;
    .locals 12

    const/4 v0, 0x2

    .line 177
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 180
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    and-int/lit16 v1, v1, 0xc0

    shr-int/lit8 v1, v1, 0x6

    .line 181
    sget-object v2, Lcom/tkay/expressad/exoplayer/b/a;->f:[I

    aget v8, v2, v1

    .line 182
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    .line 183
    sget-object v2, Lcom/tkay/expressad/exoplayer/b/a;->h:[I

    and-int/lit8 v3, v1, 0xe

    shr-int/lit8 v3, v3, 0x1

    aget v2, v2, v3

    and-int/lit8 v1, v1, 0x1

    if-eqz v1, :cond_0

    add-int/lit8 v2, v2, 0x1

    .line 189
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    and-int/lit8 v1, v1, 0x1e

    shr-int/lit8 v1, v1, 0x1

    if-lez v1, :cond_1

    .line 192
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    and-int/2addr v0, v1

    if-eqz v0, :cond_1

    add-int/lit8 v2, v2, 0x2

    :cond_1
    move v7, v2

    .line 200
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result v0

    if-lez v0, :cond_2

    .line 201
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result p0

    and-int/lit8 p0, p0, 0x1

    if-eqz p0, :cond_2

    const-string p0, "audio/eac3-joc"

    goto :goto_0

    :cond_2
    const-string p0, "audio/eac3"

    :goto_0
    move-object v4, p0

    const/4 v5, 0x0

    const/4 v6, -0x1

    const/4 v9, 0x0

    move-object v3, p1

    move-object v10, p3

    move-object v11, p2

    .line 206
    invoke-static/range {v3 .. v11}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object p0

    return-object p0
.end method
