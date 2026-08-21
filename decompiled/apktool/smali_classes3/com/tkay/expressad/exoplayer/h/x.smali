.class public final Lcom/tkay/expressad/exoplayer/h/x;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/e/m;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/x$a;,
        Lcom/tkay/expressad/exoplayer/h/x$b;
    }
.end annotation


# static fields
.field public static final a:I = -0x1

.field private static final b:I = 0x20


# instance fields
.field private final c:Lcom/tkay/expressad/exoplayer/j/b;

.field private final d:I

.field private final e:Lcom/tkay/expressad/exoplayer/h/w;

.field private final f:Lcom/tkay/expressad/exoplayer/h/w$a;

.field private final g:Lcom/tkay/expressad/exoplayer/k/s;

.field private h:Lcom/tkay/expressad/exoplayer/h/x$a;

.field private i:Lcom/tkay/expressad/exoplayer/h/x$a;

.field private j:Lcom/tkay/expressad/exoplayer/h/x$a;

.field private k:Lcom/tkay/expressad/exoplayer/m;

.field private l:Z

.field private m:Lcom/tkay/expressad/exoplayer/m;

.field private n:J

.field private o:J

.field private p:Z

.field private q:Lcom/tkay/expressad/exoplayer/h/x$b;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/j/b;)V
    .locals 3

    .line 83
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 84
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->c:Lcom/tkay/expressad/exoplayer/j/b;

    .line 85
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/j/b;->d()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->d:I

    .line 86
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/w;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/h/w;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    .line 87
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/w$a;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/h/w$a;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->f:Lcom/tkay/expressad/exoplayer/h/w$a;

    .line 88
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/s;

    const/16 v0, 0x20

    invoke-direct {p1, v0}, Lcom/tkay/expressad/exoplayer/k/s;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    .line 89
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/x$a;

    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->d:I

    const-wide/16 v1, 0x0

    invoke-direct {p1, v1, v2, v0}, Lcom/tkay/expressad/exoplayer/h/x$a;-><init>(JI)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 90
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 91
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    return-void
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/m;J)Lcom/tkay/expressad/exoplayer/m;
    .locals 4

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-eqz v0, :cond_1

    .line 653
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/m;->l:J

    const-wide v2, 0x7fffffffffffffffL

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    .line 654
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/m;->l:J

    add-long/2addr v0, p1

    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/m;->a(J)Lcom/tkay/expressad/exoplayer/m;

    move-result-object p0

    :cond_1
    return-object p0
.end method

.method private a(JLjava/nio/ByteBuffer;I)V
    .locals 3

    .line 438
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/x;->b(J)V

    :cond_0
    :goto_0
    if-lez p4, :cond_1

    .line 441
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    sub-long/2addr v0, p1

    long-to-int v0, v0

    invoke-static {p4, v0}, Ljava/lang/Math;->min(II)I

    move-result v0

    .line 442
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/x$a;->d:Lcom/tkay/expressad/exoplayer/j/a;

    .line 443
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/j/a;->a:[B

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    invoke-virtual {v2, p1, p2}, Lcom/tkay/expressad/exoplayer/h/x$a;->a(J)I

    move-result v2

    invoke-virtual {p3, v1, v2, v0}, Ljava/nio/ByteBuffer;->put([BII)Ljava/nio/ByteBuffer;

    sub-int/2addr p4, v0

    int-to-long v0, v0

    add-long/2addr p1, v0

    .line 446
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    cmp-long v0, p1, v0

    if-nez v0, :cond_0

    .line 447
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/x$a;->e:Lcom/tkay/expressad/exoplayer/h/x$a;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    goto :goto_0

    :cond_1
    return-void
.end method

.method private a(J[BI)V
    .locals 5

    .line 460
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/x;->b(J)V

    move v0, p4

    :cond_0
    :goto_0
    if-lez v0, :cond_1

    .line 463
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v1, v1, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    sub-long/2addr v1, p1

    long-to-int v1, v1

    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result v1

    .line 464
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/h/x$a;->d:Lcom/tkay/expressad/exoplayer/j/a;

    .line 465
    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/j/a;->a:[B

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    invoke-virtual {v3, p1, p2}, Lcom/tkay/expressad/exoplayer/h/x$a;->a(J)I

    move-result v3

    sub-int v4, p4, v0

    invoke-static {v2, v3, p3, v4, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    sub-int/2addr v0, v1

    int-to-long v1, v1

    add-long/2addr p1, v1

    .line 469
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v1, v1, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    cmp-long v1, p1, v1

    if-nez v1, :cond_0

    .line 470
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/x$a;->e:Lcom/tkay/expressad/exoplayer/h/x$a;

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    goto :goto_0

    :cond_1
    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/c/e;Lcom/tkay/expressad/exoplayer/h/w$a;)V
    .locals 18

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    .line 366
    iget-wide v3, v2, Lcom/tkay/expressad/exoplayer/h/w$a;->b:J

    .line 369
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v6, 0x1

    invoke-virtual {v5, v6}, Lcom/tkay/expressad/exoplayer/k/s;->a(I)V

    .line 370
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-direct {v0, v3, v4, v5, v6}, Lcom/tkay/expressad/exoplayer/h/x;->a(J[BI)V

    const-wide/16 v7, 0x1

    add-long/2addr v3, v7

    .line 372
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    const/4 v7, 0x0

    aget-byte v5, v5, v7

    and-int/lit16 v8, v5, 0x80

    if-eqz v8, :cond_0

    move v8, v6

    goto :goto_0

    :cond_0
    move v8, v7

    :goto_0
    and-int/lit8 v5, v5, 0x7f

    .line 377
    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/c/b;->a:[B

    if-nez v9, :cond_1

    .line 378
    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    const/16 v10, 0x10

    new-array v10, v10, [B

    iput-object v10, v9, Lcom/tkay/expressad/exoplayer/c/b;->a:[B

    .line 380
    :cond_1
    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/c/b;->a:[B

    invoke-direct {v0, v3, v4, v9, v5}, Lcom/tkay/expressad/exoplayer/h/x;->a(J[BI)V

    int-to-long v9, v5

    add-long/2addr v3, v9

    if-eqz v8, :cond_2

    .line 386
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v6, 0x2

    invoke-virtual {v5, v6}, Lcom/tkay/expressad/exoplayer/k/s;->a(I)V

    .line 387
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-direct {v0, v3, v4, v5, v6}, Lcom/tkay/expressad/exoplayer/h/x;->a(J[BI)V

    const-wide/16 v5, 0x2

    add-long/2addr v3, v5

    .line 389
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v6

    :cond_2
    move v10, v6

    .line 395
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/c/b;->d:[I

    if-eqz v5, :cond_3

    .line 396
    array-length v6, v5

    if-ge v6, v10, :cond_4

    .line 397
    :cond_3
    new-array v5, v10, [I

    :cond_4
    move-object v11, v5

    .line 399
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/c/b;->e:[I

    if-eqz v5, :cond_5

    .line 400
    array-length v6, v5

    if-ge v6, v10, :cond_6

    .line 401
    :cond_5
    new-array v5, v10, [I

    :cond_6
    move-object v12, v5

    if-eqz v8, :cond_7

    mul-int/lit8 v5, v10, 0x6

    .line 405
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v6, v5}, Lcom/tkay/expressad/exoplayer/k/s;->a(I)V

    .line 406
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-direct {v0, v3, v4, v6, v5}, Lcom/tkay/expressad/exoplayer/h/x;->a(J[BI)V

    int-to-long v5, v5

    add-long/2addr v3, v5

    .line 408
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v5, v7}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    :goto_1
    if-ge v7, v10, :cond_8

    .line 410
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v5

    aput v5, v11, v7

    .line 411
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v5

    aput v5, v12, v7

    add-int/lit8 v7, v7, 0x1

    goto :goto_1

    .line 414
    :cond_7
    aput v7, v11, v7

    .line 415
    iget v5, v2, Lcom/tkay/expressad/exoplayer/h/w$a;->a:I

    iget-wide v8, v2, Lcom/tkay/expressad/exoplayer/h/w$a;->b:J

    sub-long v8, v3, v8

    long-to-int v6, v8

    sub-int/2addr v5, v6

    aput v5, v12, v7

    .line 419
    :cond_8
    iget-object v5, v2, Lcom/tkay/expressad/exoplayer/h/w$a;->c:Lcom/tkay/expressad/exoplayer/e/m$a;

    .line 420
    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v13, v5, Lcom/tkay/expressad/exoplayer/e/m$a;->b:[B

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v14, v1, Lcom/tkay/expressad/exoplayer/c/b;->a:[B

    iget v15, v5, Lcom/tkay/expressad/exoplayer/e/m$a;->a:I

    iget v1, v5, Lcom/tkay/expressad/exoplayer/e/m$a;->c:I

    iget v5, v5, Lcom/tkay/expressad/exoplayer/e/m$a;->d:I

    move/from16 v16, v1

    move/from16 v17, v5

    invoke-virtual/range {v9 .. v17}, Lcom/tkay/expressad/exoplayer/c/b;->a(I[I[I[B[BIII)V

    .line 425
    iget-wide v5, v2, Lcom/tkay/expressad/exoplayer/h/w$a;->b:J

    sub-long/2addr v3, v5

    long-to-int v1, v3

    .line 426
    iget-wide v3, v2, Lcom/tkay/expressad/exoplayer/h/w$a;->b:J

    int-to-long v5, v1

    add-long/2addr v3, v5

    iput-wide v3, v2, Lcom/tkay/expressad/exoplayer/h/w$a;->b:J

    .line 427
    iget v3, v2, Lcom/tkay/expressad/exoplayer/h/w$a;->a:I

    sub-int/2addr v3, v1

    iput v3, v2, Lcom/tkay/expressad/exoplayer/h/w$a;->a:I

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/x$a;)V
    .locals 5

    .line 597
    iget-boolean v0, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->c:Z

    if-nez v0, :cond_0

    return-void

    .line 603
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/h/x$a;->c:Z

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v1, v1, Lcom/tkay/expressad/exoplayer/h/x$a;->a:J

    iget-wide v3, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->a:J

    sub-long/2addr v1, v3

    long-to-int v1, v1

    iget v2, p0, Lcom/tkay/expressad/exoplayer/h/x;->d:I

    div-int/2addr v1, v2

    add-int/2addr v0, v1

    .line 605
    new-array v1, v0, [Lcom/tkay/expressad/exoplayer/j/a;

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_1

    .line 608
    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->d:Lcom/tkay/expressad/exoplayer/j/a;

    aput-object v3, v1, v2

    .line 609
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/x$a;->a()Lcom/tkay/expressad/exoplayer/h/x$a;

    move-result-object p1

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 611
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->c:Lcom/tkay/expressad/exoplayer/j/b;

    invoke-interface {p1, v1}, Lcom/tkay/expressad/exoplayer/j/b;->a([Lcom/tkay/expressad/exoplayer/j/a;)V

    return-void
.end method

.method private b(J)V
    .locals 2

    .line 481
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    cmp-long v0, p1, v0

    if-ltz v0, :cond_0

    .line 482
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/x$a;->e:Lcom/tkay/expressad/exoplayer/h/x$a;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    goto :goto_0

    :cond_0
    return-void
.end method

.method private c(I)V
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/h/w;->b(I)V

    return-void
.end method

.method private c(J)V
    .locals 2

    const-wide/16 v0, -0x1

    cmp-long v0, p1, v0

    if-nez v0, :cond_0

    return-void

    .line 499
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    cmp-long v0, p1, v0

    if-ltz v0, :cond_1

    .line 500
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->c:Lcom/tkay/expressad/exoplayer/j/b;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/x$a;->d:Lcom/tkay/expressad/exoplayer/j/a;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/j/b;->a(Lcom/tkay/expressad/exoplayer/j/a;)V

    .line 501
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/x$a;->a()Lcom/tkay/expressad/exoplayer/h/x$a;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    goto :goto_0

    .line 505
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide p1, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->a:J

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/x$a;->a:J

    cmp-long p1, p1, v0

    if-gez p1, :cond_2

    .line 506
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    :cond_2
    return-void
.end method

.method private d(I)I
    .locals 6

    .line 623
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/h/x$a;->c:Z

    if-nez v0, :cond_0

    .line 624
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->c:Lcom/tkay/expressad/exoplayer/j/b;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/j/b;->a()Lcom/tkay/expressad/exoplayer/j/a;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v3, v3, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    iget v5, p0, Lcom/tkay/expressad/exoplayer/h/x;->d:I

    invoke-direct {v2, v3, v4, v5}, Lcom/tkay/expressad/exoplayer/h/x$a;-><init>(JI)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/h/x$a;->a(Lcom/tkay/expressad/exoplayer/j/a;Lcom/tkay/expressad/exoplayer/h/x$a;)V

    .line 627
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    sub-long/2addr v0, v2

    long-to-int v0, v0

    invoke-static {p1, v0}, Ljava/lang/Math;->min(II)I

    move-result p1

    return p1
.end method

.method private e(I)V
    .locals 4

    .line 636
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    int-to-long v2, p1

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    .line 637
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    cmp-long p1, v0, v2

    if-nez p1, :cond_0

    .line 638
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->e:Lcom/tkay/expressad/exoplayer/h/x$a;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    :cond_0
    return-void
.end method

.method private l()V
    .locals 4

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->a()V

    .line 113
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/h/x;->a(Lcom/tkay/expressad/exoplayer/h/x$a;)V

    .line 114
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/x$a;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->d:I

    const-wide/16 v2, 0x0

    invoke-direct {v0, v2, v3, v1}, Lcom/tkay/expressad/exoplayer/h/x$a;-><init>(JI)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 115
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 116
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 117
    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    .line 118
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->c:Lcom/tkay/expressad/exoplayer/j/b;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/b;->b()V

    return-void
.end method

.method private m()V
    .locals 1

    const/4 v0, 0x1

    .line 134
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->p:Z

    return-void
.end method

.method private n()I
    .locals 1

    .line 207
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->e()I

    move-result v0

    return v0
.end method

.method private o()V
    .locals 2

    .line 262
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->l()J

    move-result-wide v0

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/h/x;->c(J)V

    return-void
.end method


# virtual methods
.method public final a(JZ)I
    .locals 1

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/h/w;->a(JZ)I

    move-result p1

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/e/f;IZ)I
    .locals 4

    .line 548
    invoke-direct {p0, p2}, Lcom/tkay/expressad/exoplayer/h/x;->d(I)I

    move-result p2

    .line 549
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/x$a;->d:Lcom/tkay/expressad/exoplayer/j/a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/j/a;->a:[B

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    .line 550
    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/exoplayer/h/x$a;->a(J)I

    move-result v1

    .line 549
    invoke-interface {p1, v0, v1, p2}, Lcom/tkay/expressad/exoplayer/e/f;->a([BII)I

    move-result p1

    const/4 p2, -0x1

    if-ne p1, p2, :cond_1

    if-eqz p3, :cond_0

    return p2

    .line 555
    :cond_0
    new-instance p1, Ljava/io/EOFException;

    invoke-direct {p1}, Ljava/io/EOFException;-><init>()V

    throw p1

    .line 557
    :cond_1
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/x;->e(I)V

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;ZZJ)I
    .locals 19

    move-object/from16 v0, p0

    move-object/from16 v8, p2

    .line 328
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/h/x;->k:Lcom/tkay/expressad/exoplayer/m;

    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/h/x;->f:Lcom/tkay/expressad/exoplayer/h/w$a;

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move/from16 v4, p3

    move/from16 v5, p4

    invoke-virtual/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/w;->a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;ZZLcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/h/w$a;)I

    move-result v1

    const/4 v2, -0x5

    if-eq v1, v2, :cond_f

    const/4 v2, -0x4

    if-eq v1, v2, :cond_1

    const/4 v2, -0x3

    if-ne v1, v2, :cond_0

    return v2

    .line 351
    :cond_0
    new-instance v1, Ljava/lang/IllegalStateException;

    invoke-direct {v1}, Ljava/lang/IllegalStateException;-><init>()V

    throw v1

    .line 335
    :cond_1
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/expressad/exoplayer/c/e;->c()Z

    move-result v1

    if-nez v1, :cond_e

    .line 336
    iget-wide v3, v8, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    cmp-long v1, v3, p5

    if-gez v1, :cond_2

    const/high16 v1, -0x80000000

    .line 337
    invoke-virtual {v8, v1}, Lcom/tkay/expressad/exoplayer/c/e;->b(I)V

    .line 340
    :cond_2
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/expressad/exoplayer/c/e;->g()Z

    move-result v1

    if-eqz v1, :cond_c

    .line 341
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/x;->f:Lcom/tkay/expressad/exoplayer/h/w$a;

    .line 1366
    iget-wide v3, v1, Lcom/tkay/expressad/exoplayer/h/w$a;->b:J

    .line 1369
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v6, 0x1

    invoke-virtual {v5, v6}, Lcom/tkay/expressad/exoplayer/k/s;->a(I)V

    .line 1370
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-direct {v0, v3, v4, v5, v6}, Lcom/tkay/expressad/exoplayer/h/x;->a(J[BI)V

    const-wide/16 v9, 0x1

    add-long/2addr v3, v9

    .line 1372
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    const/4 v7, 0x0

    aget-byte v5, v5, v7

    and-int/lit16 v9, v5, 0x80

    if-eqz v9, :cond_3

    move v9, v6

    goto :goto_0

    :cond_3
    move v9, v7

    :goto_0
    and-int/lit8 v5, v5, 0x7f

    .line 1377
    iget-object v10, v8, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v10, v10, Lcom/tkay/expressad/exoplayer/c/b;->a:[B

    if-nez v10, :cond_4

    .line 1378
    iget-object v10, v8, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    const/16 v11, 0x10

    new-array v11, v11, [B

    iput-object v11, v10, Lcom/tkay/expressad/exoplayer/c/b;->a:[B

    .line 1380
    :cond_4
    iget-object v10, v8, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v10, v10, Lcom/tkay/expressad/exoplayer/c/b;->a:[B

    invoke-direct {v0, v3, v4, v10, v5}, Lcom/tkay/expressad/exoplayer/h/x;->a(J[BI)V

    int-to-long v10, v5

    add-long/2addr v3, v10

    if-eqz v9, :cond_5

    .line 1386
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v6, 0x2

    invoke-virtual {v5, v6}, Lcom/tkay/expressad/exoplayer/k/s;->a(I)V

    .line 1387
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-direct {v0, v3, v4, v5, v6}, Lcom/tkay/expressad/exoplayer/h/x;->a(J[BI)V

    const-wide/16 v5, 0x2

    add-long/2addr v3, v5

    .line 1389
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v6

    :cond_5
    move v11, v6

    .line 1395
    iget-object v5, v8, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/c/b;->d:[I

    if-eqz v5, :cond_6

    .line 1396
    array-length v6, v5

    if-ge v6, v11, :cond_7

    .line 1397
    :cond_6
    new-array v5, v11, [I

    :cond_7
    move-object v12, v5

    .line 1399
    iget-object v5, v8, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/c/b;->e:[I

    if-eqz v5, :cond_8

    .line 1400
    array-length v6, v5

    if-ge v6, v11, :cond_9

    .line 1401
    :cond_8
    new-array v5, v11, [I

    :cond_9
    move-object v13, v5

    if-eqz v9, :cond_a

    mul-int/lit8 v5, v11, 0x6

    .line 1405
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v6, v5}, Lcom/tkay/expressad/exoplayer/k/s;->a(I)V

    .line 1406
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-direct {v0, v3, v4, v6, v5}, Lcom/tkay/expressad/exoplayer/h/x;->a(J[BI)V

    int-to-long v5, v5

    add-long/2addr v3, v5

    .line 1408
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v5, v7}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    :goto_1
    if-ge v7, v11, :cond_b

    .line 1410
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v5

    aput v5, v12, v7

    .line 1411
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v5

    aput v5, v13, v7

    add-int/lit8 v7, v7, 0x1

    goto :goto_1

    .line 1414
    :cond_a
    aput v7, v12, v7

    .line 1415
    iget v5, v1, Lcom/tkay/expressad/exoplayer/h/w$a;->a:I

    iget-wide v9, v1, Lcom/tkay/expressad/exoplayer/h/w$a;->b:J

    sub-long v9, v3, v9

    long-to-int v6, v9

    sub-int/2addr v5, v6

    aput v5, v13, v7

    .line 1419
    :cond_b
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/h/w$a;->c:Lcom/tkay/expressad/exoplayer/e/m$a;

    .line 1420
    iget-object v10, v8, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v14, v5, Lcom/tkay/expressad/exoplayer/e/m$a;->b:[B

    iget-object v6, v8, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    iget-object v15, v6, Lcom/tkay/expressad/exoplayer/c/b;->a:[B

    iget v6, v5, Lcom/tkay/expressad/exoplayer/e/m$a;->a:I

    iget v7, v5, Lcom/tkay/expressad/exoplayer/e/m$a;->c:I

    iget v5, v5, Lcom/tkay/expressad/exoplayer/e/m$a;->d:I

    move/from16 v16, v6

    move/from16 v17, v7

    move/from16 v18, v5

    invoke-virtual/range {v10 .. v18}, Lcom/tkay/expressad/exoplayer/c/b;->a(I[I[I[B[BIII)V

    .line 1425
    iget-wide v5, v1, Lcom/tkay/expressad/exoplayer/h/w$a;->b:J

    sub-long/2addr v3, v5

    long-to-int v3, v3

    .line 1426
    iget-wide v4, v1, Lcom/tkay/expressad/exoplayer/h/w$a;->b:J

    int-to-long v6, v3

    add-long/2addr v4, v6

    iput-wide v4, v1, Lcom/tkay/expressad/exoplayer/h/w$a;->b:J

    .line 1427
    iget v4, v1, Lcom/tkay/expressad/exoplayer/h/w$a;->a:I

    sub-int/2addr v4, v3

    iput v4, v1, Lcom/tkay/expressad/exoplayer/h/w$a;->a:I

    .line 344
    :cond_c
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/x;->f:Lcom/tkay/expressad/exoplayer/h/w$a;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/h/w$a;->a:I

    invoke-virtual {v8, v1}, Lcom/tkay/expressad/exoplayer/c/e;->d(I)V

    .line 345
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/x;->f:Lcom/tkay/expressad/exoplayer/h/w$a;

    iget-wide v3, v1, Lcom/tkay/expressad/exoplayer/h/w$a;->b:J

    iget-object v1, v8, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/x;->f:Lcom/tkay/expressad/exoplayer/h/w$a;

    iget v5, v5, Lcom/tkay/expressad/exoplayer/h/w$a;->a:I

    .line 1438
    invoke-direct {v0, v3, v4}, Lcom/tkay/expressad/exoplayer/h/x;->b(J)V

    :cond_d
    :goto_2
    if-lez v5, :cond_e

    .line 1441
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v6, v6, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    sub-long/2addr v6, v3

    long-to-int v6, v6

    invoke-static {v5, v6}, Ljava/lang/Math;->min(II)I

    move-result v6

    .line 1442
    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v7, v7, Lcom/tkay/expressad/exoplayer/h/x$a;->d:Lcom/tkay/expressad/exoplayer/j/a;

    .line 1443
    iget-object v7, v7, Lcom/tkay/expressad/exoplayer/j/a;->a:[B

    iget-object v8, v0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    invoke-virtual {v8, v3, v4}, Lcom/tkay/expressad/exoplayer/h/x$a;->a(J)I

    move-result v8

    invoke-virtual {v1, v7, v8, v6}, Ljava/nio/ByteBuffer;->put([BII)Ljava/nio/ByteBuffer;

    sub-int/2addr v5, v6

    int-to-long v6, v6

    add-long/2addr v3, v6

    .line 1446
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v6, v6, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    cmp-long v6, v3, v6

    if-nez v6, :cond_d

    .line 1447
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/h/x$a;->e:Lcom/tkay/expressad/exoplayer/h/x$a;

    iput-object v6, v0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    goto :goto_2

    :cond_e
    return v2

    :cond_f
    move-object/from16 v1, p1

    .line 332
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/h/x;->k:Lcom/tkay/expressad/exoplayer/m;

    return v2
.end method

.method public final a()V
    .locals 4

    .line 1112
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->a()V

    .line 1113
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/h/x;->a(Lcom/tkay/expressad/exoplayer/h/x$a;)V

    .line 1114
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/x$a;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->d:I

    const-wide/16 v2, 0x0

    invoke-direct {v0, v2, v3, v1}, Lcom/tkay/expressad/exoplayer/h/x$a;-><init>(JI)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 1115
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 1116
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 1117
    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    .line 1118
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->c:Lcom/tkay/expressad/exoplayer/j/b;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/b;->b()V

    return-void
.end method

.method public final a(I)V
    .locals 5

    .line 151
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/h/w;->a(I)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    if-eqz p1, :cond_4

    .line 152
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->a:J

    cmp-long p1, v0, v2

    if-nez p1, :cond_0

    goto :goto_2

    .line 159
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 160
    :goto_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    cmp-long v0, v0, v2

    if-lez v0, :cond_1

    .line 161
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->e:Lcom/tkay/expressad/exoplayer/h/x$a;

    goto :goto_0

    .line 164
    :cond_1
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->e:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 165
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/h/x;->a(Lcom/tkay/expressad/exoplayer/h/x$a;)V

    .line 167
    new-instance v1, Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    iget v4, p0, Lcom/tkay/expressad/exoplayer/h/x;->d:I

    invoke-direct {v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/h/x$a;-><init>(JI)V

    iput-object v1, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->e:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 169
    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    iget-wide v3, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->b:J

    cmp-long v1, v1, v3

    if-nez v1, :cond_2

    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->e:Lcom/tkay/expressad/exoplayer/h/x$a;

    goto :goto_1

    :cond_2
    move-object v1, p1

    .line 170
    :goto_1
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 171
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    if-ne v1, v0, :cond_3

    .line 172
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/h/x$a;->e:Lcom/tkay/expressad/exoplayer/h/x$a;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    :cond_3
    return-void

    .line 153
    :cond_4
    :goto_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/x;->a(Lcom/tkay/expressad/exoplayer/h/x$a;)V

    .line 154
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    iget v2, p0, Lcom/tkay/expressad/exoplayer/h/x;->d:I

    invoke-direct {p1, v0, v1, v2}, Lcom/tkay/expressad/exoplayer/h/x$a;-><init>(JI)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 155
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    .line 156
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    return-void
.end method

.method public final a(J)V
    .locals 2

    .line 528
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->n:J

    cmp-long v0, v0, p1

    if-eqz v0, :cond_0

    .line 529
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->n:J

    const/4 p1, 0x1

    .line 530
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->l:Z

    :cond_0
    return-void
.end method

.method public final a(JIIILcom/tkay/expressad/exoplayer/e/m$a;)V
    .locals 12

    move-object v0, p0

    move-wide v1, p1

    .line 575
    iget-boolean v3, v0, Lcom/tkay/expressad/exoplayer/h/x;->l:Z

    if-eqz v3, :cond_0

    .line 576
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/h/x;->m:Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {p0, v3}, Lcom/tkay/expressad/exoplayer/h/x;->a(Lcom/tkay/expressad/exoplayer/m;)V

    .line 578
    :cond_0
    iget-boolean v3, v0, Lcom/tkay/expressad/exoplayer/h/x;->p:Z

    if-eqz v3, :cond_3

    and-int/lit8 v3, p3, 0x1

    if-eqz v3, :cond_2

    .line 579
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v3, p1, p2}, Lcom/tkay/expressad/exoplayer/h/w;->a(J)Z

    move-result v3

    if-nez v3, :cond_1

    goto :goto_0

    :cond_1
    const/4 v3, 0x0

    .line 582
    iput-boolean v3, v0, Lcom/tkay/expressad/exoplayer/h/x;->p:Z

    goto :goto_1

    :cond_2
    :goto_0
    return-void

    .line 584
    :cond_3
    :goto_1
    iget-wide v3, v0, Lcom/tkay/expressad/exoplayer/h/x;->n:J

    add-long v5, v1, v3

    .line 585
    iget-wide v1, v0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    move/from16 v3, p4

    int-to-long v7, v3

    sub-long/2addr v1, v7

    move/from16 v4, p5

    int-to-long v7, v4

    sub-long v8, v1, v7

    .line 586
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    move v7, p3

    move/from16 v10, p4

    move-object/from16 v11, p6

    invoke-virtual/range {v4 .. v11}, Lcom/tkay/expressad/exoplayer/h/w;->a(JIJILcom/tkay/expressad/exoplayer/e/m$a;)V

    return-void
.end method

.method public final a(JZZ)V
    .locals 1

    .line 255
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/expressad/exoplayer/h/w;->a(JZZ)J

    move-result-wide p1

    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/x;->c(J)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/x$b;)V
    .locals 0

    .line 518
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->q:Lcom/tkay/expressad/exoplayer/h/x$b;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/k/s;I)V
    .locals 5

    :goto_0
    if-lez p2, :cond_0

    .line 564
    invoke-direct {p0, p2}, Lcom/tkay/expressad/exoplayer/h/x;->d(I)I

    move-result v0

    .line 565
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/x$a;->d:Lcom/tkay/expressad/exoplayer/j/a;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/j/a;->a:[B

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/x;->j:Lcom/tkay/expressad/exoplayer/h/x$a;

    iget-wide v3, p0, Lcom/tkay/expressad/exoplayer/h/x;->o:J

    .line 566
    invoke-virtual {v2, v3, v4}, Lcom/tkay/expressad/exoplayer/h/x$a;->a(J)I

    move-result v2

    .line 565
    invoke-virtual {p1, v1, v2, v0}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    sub-int/2addr p2, v0

    .line 568
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/h/x;->e(I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/m;)V
    .locals 6

    .line 536
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->n:J

    if-nez p1, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-eqz v2, :cond_1

    .line 1653
    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/m;->l:J

    const-wide v4, 0x7fffffffffffffffL

    cmp-long v2, v2, v4

    if-eqz v2, :cond_1

    .line 1654
    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/m;->l:J

    add-long/2addr v2, v0

    invoke-virtual {p1, v2, v3}, Lcom/tkay/expressad/exoplayer/m;->a(J)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    goto :goto_0

    :cond_1
    move-object v0, p1

    .line 537
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/h/w;->a(Lcom/tkay/expressad/exoplayer/m;)Z

    move-result v0

    .line 538
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->m:Lcom/tkay/expressad/exoplayer/m;

    const/4 p1, 0x0

    .line 539
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->l:Z

    .line 540
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/x;->q:Lcom/tkay/expressad/exoplayer/h/x$b;

    if-eqz p1, :cond_2

    if-eqz v0, :cond_2

    .line 541
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/h/x$b;->i()V

    :cond_2
    return-void
.end method

.method public final b()I
    .locals 1

    .line 141
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->b()I

    move-result v0

    return v0
.end method

.method public final b(I)Z
    .locals 1

    .line 307
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/h/w;->c(I)Z

    move-result p1

    return p1
.end method

.method public final c()Z
    .locals 1

    .line 183
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->f()Z

    move-result v0

    return v0
.end method

.method public final d()I
    .locals 1

    .line 190
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->c()I

    move-result v0

    return v0
.end method

.method public final e()I
    .locals 1

    .line 197
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->d()I

    move-result v0

    return v0
.end method

.method public final f()Lcom/tkay/expressad/exoplayer/m;
    .locals 1

    .line 214
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->g()Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    return-object v0
.end method

.method public final g()J
    .locals 2

    .line 228
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->h()J

    move-result-wide v0

    return-wide v0
.end method

.method public final h()J
    .locals 2

    .line 233
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->i()J

    move-result-wide v0

    return-wide v0
.end method

.method public final i()V
    .locals 1

    .line 240
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->j()V

    .line 241
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->h:Lcom/tkay/expressad/exoplayer/h/x$a;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->i:Lcom/tkay/expressad/exoplayer/h/x$a;

    return-void
.end method

.method public final j()V
    .locals 2

    .line 269
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->m()J

    move-result-wide v0

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/h/x;->c(J)V

    return-void
.end method

.method public final k()I
    .locals 1

    .line 278
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/x;->e:Lcom/tkay/expressad/exoplayer/h/w;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/w;->k()I

    move-result v0

    return v0
.end method
