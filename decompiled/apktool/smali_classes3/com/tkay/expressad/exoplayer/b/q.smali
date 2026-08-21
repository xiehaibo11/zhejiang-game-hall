.class public final Lcom/tkay/expressad/exoplayer/b/q;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/b/f;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/b/q$a;
    }
.end annotation


# static fields
.field private static final b:J = 0x249f0L

.field private static final c:J = 0x4e20L

.field private static final d:S = 0x400s

.field private static final e:B = 0x4t

.field private static final f:I = 0x0

.field private static final g:I = 0x1

.field private static final h:I = 0x2


# instance fields
.field private i:I

.field private j:I

.field private k:I

.field private l:Z

.field private m:Ljava/nio/ByteBuffer;

.field private n:Ljava/nio/ByteBuffer;

.field private o:Z

.field private p:[B

.field private q:[B

.field private r:I

.field private s:I

.field private t:I

.field private u:Z

.field private v:J


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 102
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 103
    sget-object v0, Lcom/tkay/expressad/exoplayer/b/q;->a:Ljava/nio/ByteBuffer;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    .line 104
    sget-object v0, Lcom/tkay/expressad/exoplayer/b/q;->a:Ljava/nio/ByteBuffer;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->n:Ljava/nio/ByteBuffer;

    const/4 v0, -0x1

    .line 105
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->i:I

    .line 106
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->j:I

    const/4 v0, 0x0

    new-array v1, v0, [B

    .line 107
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    new-array v0, v0, [B

    .line 108
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->q:[B

    return-void
.end method

.method private a(J)I
    .locals 2

    .line 382
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->j:I

    int-to-long v0, v0

    mul-long/2addr p1, v0

    const-wide/32 v0, 0xf4240

    div-long/2addr p1, v0

    long-to-int p1, p1

    return p1
.end method

.method private a(I)V
    .locals 2

    .line 350
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->capacity()I

    move-result v0

    if-ge v0, p1, :cond_0

    .line 351
    invoke-static {p1}, Ljava/nio/ByteBuffer;->allocateDirect(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    invoke-static {}, Ljava/nio/ByteOrder;->nativeOrder()Ljava/nio/ByteOrder;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    goto :goto_0

    .line 353
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->clear()Ljava/nio/Buffer;

    :goto_0
    if-lez p1, :cond_1

    const/4 p1, 0x1

    .line 356
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/q;->u:Z

    :cond_1
    return-void
.end method

.method private a(Ljava/nio/ByteBuffer;[BI)V
    .locals 4

    .line 366
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result v0

    .line 367
    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    sub-int/2addr v1, v0

    sub-int/2addr p3, v1

    .line 368
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->q:[B

    const/4 v3, 0x0

    invoke-static {p2, p3, v2, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 374
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result p2

    sub-int/2addr p2, v0

    invoke-virtual {p1, p2}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 375
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/b/q;->q:[B

    invoke-virtual {p1, p2, v1, v0}, Ljava/nio/ByteBuffer;->get([BII)Ljava/nio/ByteBuffer;

    return-void
.end method

.method private a([BI)V
    .locals 2

    .line 332
    invoke-direct {p0, p2}, Lcom/tkay/expressad/exoplayer/b/q;->a(I)V

    .line 333
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1, p2}, Ljava/nio/ByteBuffer;->put([BII)Ljava/nio/ByteBuffer;

    .line 334
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 335
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/q;->n:Ljava/nio/ByteBuffer;

    return-void
.end method

.method private b(Ljava/nio/ByteBuffer;)V
    .locals 5

    .line 250
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v0

    .line 253
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v1

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    array-length v2, v2

    add-int/2addr v1, v2

    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result v1

    invoke-virtual {p1, v1}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 3406
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v1

    const/4 v2, 0x1

    sub-int/2addr v1, v2

    :goto_0
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v3

    if-lt v1, v3, :cond_1

    .line 3407
    invoke-virtual {p1, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v3

    invoke-static {v3}, Ljava/lang/Math;->abs(I)I

    move-result v3

    const/4 v4, 0x4

    if-le v3, v4, :cond_0

    .line 3409
    iget v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    div-int/2addr v1, v3

    mul-int/2addr v1, v3

    add-int/2addr v1, v3

    goto :goto_1

    :cond_0
    add-int/lit8 v1, v1, -0x2

    goto :goto_0

    .line 3412
    :cond_1
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v1

    .line 255
    :goto_1
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v3

    if-ne v1, v3, :cond_2

    .line 257
    iput v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->r:I

    goto :goto_2

    .line 259
    :cond_2
    invoke-virtual {p1, v1}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 4342
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v1

    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/b/q;->a(I)V

    .line 4343
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    invoke-virtual {v1, p1}, Ljava/nio/ByteBuffer;->put(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;

    .line 4344
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 4345
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->n:Ljava/nio/ByteBuffer;

    .line 264
    :goto_2
    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    return-void
.end method

.method private c(Ljava/nio/ByteBuffer;)V
    .locals 9

    .line 272
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v0

    .line 273
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/b/q;->f(Ljava/nio/ByteBuffer;)I

    move-result v1

    .line 274
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v2

    sub-int v2, v1, v2

    .line 275
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    array-length v4, v3

    iget v5, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    sub-int/2addr v4, v5

    const/4 v6, 0x0

    if-ge v1, v0, :cond_0

    if-ge v2, v4, :cond_0

    .line 278
    invoke-direct {p0, v3, v5}, Lcom/tkay/expressad/exoplayer/b/q;->a([BI)V

    .line 279
    iput v6, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    .line 280
    iput v6, p0, Lcom/tkay/expressad/exoplayer/b/q;->r:I

    return-void

    .line 283
    :cond_0
    invoke-static {v2, v4}, Ljava/lang/Math;->min(II)I

    move-result v1

    .line 284
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v2

    add-int/2addr v2, v1

    invoke-virtual {p1, v2}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 285
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    iget v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    invoke-virtual {p1, v2, v3, v1}, Ljava/nio/ByteBuffer;->get([BII)Ljava/nio/ByteBuffer;

    .line 286
    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    add-int/2addr v2, v1

    iput v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    .line 287
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    array-length v3, v1

    if-ne v2, v3, :cond_2

    .line 290
    iget-boolean v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->u:Z

    const/4 v4, 0x2

    if-eqz v3, :cond_1

    .line 291
    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    invoke-direct {p0, v1, v2}, Lcom/tkay/expressad/exoplayer/b/q;->a([BI)V

    .line 292
    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    iget v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    iget v5, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    mul-int/2addr v5, v4

    sub-int/2addr v3, v5

    iget v5, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    div-int/2addr v3, v5

    int-to-long v7, v3

    add-long/2addr v1, v7

    iput-wide v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    goto :goto_0

    .line 294
    :cond_1
    iget-wide v7, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    sub-int/2addr v2, v1

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    div-int/2addr v2, v1

    int-to-long v1, v2

    add-long/2addr v7, v1

    iput-wide v7, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    .line 296
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    invoke-direct {p0, p1, v1, v2}, Lcom/tkay/expressad/exoplayer/b/q;->a(Ljava/nio/ByteBuffer;[BI)V

    .line 297
    iput v6, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    .line 298
    iput v4, p0, Lcom/tkay/expressad/exoplayer/b/q;->r:I

    .line 302
    :cond_2
    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    return-void
.end method

.method private d(Ljava/nio/ByteBuffer;)V
    .locals 6

    .line 311
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v0

    .line 312
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/b/q;->f(Ljava/nio/ByteBuffer;)I

    move-result v1

    .line 313
    invoke-virtual {p1, v1}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 314
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v4

    iget v5, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    div-int/2addr v4, v5

    int-to-long v4, v4

    add-long/2addr v2, v4

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    .line 315
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->q:[B

    iget v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    invoke-direct {p0, p1, v2, v3}, Lcom/tkay/expressad/exoplayer/b/q;->a(Ljava/nio/ByteBuffer;[BI)V

    if-ge v1, v0, :cond_0

    .line 319
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->q:[B

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    invoke-direct {p0, v1, v2}, Lcom/tkay/expressad/exoplayer/b/q;->a([BI)V

    const/4 v1, 0x0

    .line 320
    iput v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->r:I

    .line 323
    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    :cond_0
    return-void
.end method

.method private e(Ljava/nio/ByteBuffer;)V
    .locals 1

    .line 342
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/b/q;->a(I)V

    .line 343
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    invoke-virtual {v0, p1}, Ljava/nio/ByteBuffer;->put(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;

    .line 344
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 345
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/q;->n:Ljava/nio/ByteBuffer;

    return-void
.end method

.method private f(Ljava/nio/ByteBuffer;)I
    .locals 3

    .line 391
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    :goto_0
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 392
    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    invoke-static {v1}, Ljava/lang/Math;->abs(I)I

    move-result v1

    const/4 v2, 0x4

    if-le v1, v2, :cond_0

    .line 394
    iget p1, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    div-int/2addr v0, p1

    mul-int/2addr p1, v0

    return p1

    :cond_0
    add-int/lit8 v0, v0, 0x2

    goto :goto_0

    .line 397
    :cond_1
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result p1

    return p1
.end method

.method private g(Ljava/nio/ByteBuffer;)I
    .locals 3

    .line 406
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    :goto_0
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v1

    if-lt v0, v1, :cond_1

    .line 407
    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    invoke-static {v1}, Ljava/lang/Math;->abs(I)I

    move-result v1

    const/4 v2, 0x4

    if-le v1, v2, :cond_0

    .line 409
    iget p1, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    div-int/2addr v0, p1

    mul-int/2addr v0, p1

    add-int/2addr v0, p1

    return v0

    :cond_0
    add-int/lit8 v0, v0, -0x2

    goto :goto_0

    .line 412
    :cond_1
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result p1

    return p1
.end method


# virtual methods
.method public final a(Ljava/nio/ByteBuffer;)V
    .locals 9

    .line 169
    :cond_0
    :goto_0
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->hasRemaining()Z

    move-result v0

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->n:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->hasRemaining()Z

    move-result v0

    if-nez v0, :cond_a

    .line 170
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->r:I

    const/4 v1, 0x1

    if-eqz v0, :cond_6

    const/4 v2, 0x2

    const/4 v3, 0x0

    if-eq v0, v1, :cond_2

    if-ne v0, v2, :cond_1

    .line 3311
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v0

    .line 3312
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/b/q;->f(Ljava/nio/ByteBuffer;)I

    move-result v1

    .line 3313
    invoke-virtual {p1, v1}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 3314
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v2

    iget v6, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    div-int/2addr v2, v6

    int-to-long v6, v2

    add-long/2addr v4, v6

    iput-wide v4, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    .line 3315
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->q:[B

    iget v4, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    invoke-direct {p0, p1, v2, v4}, Lcom/tkay/expressad/exoplayer/b/q;->a(Ljava/nio/ByteBuffer;[BI)V

    if-ge v1, v0, :cond_0

    .line 3319
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->q:[B

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    invoke-direct {p0, v1, v2}, Lcom/tkay/expressad/exoplayer/b/q;->a([BI)V

    .line 3320
    iput v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->r:I

    .line 3323
    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    goto :goto_0

    .line 181
    :cond_1
    new-instance p1, Ljava/lang/IllegalStateException;

    invoke-direct {p1}, Ljava/lang/IllegalStateException;-><init>()V

    throw p1

    .line 3272
    :cond_2
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v0

    .line 3273
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/b/q;->f(Ljava/nio/ByteBuffer;)I

    move-result v1

    .line 3274
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v4

    sub-int v4, v1, v4

    .line 3275
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    array-length v6, v5

    iget v7, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    sub-int/2addr v6, v7

    if-ge v1, v0, :cond_3

    if-ge v4, v6, :cond_3

    .line 3278
    invoke-direct {p0, v5, v7}, Lcom/tkay/expressad/exoplayer/b/q;->a([BI)V

    .line 3279
    iput v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    .line 3280
    iput v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->r:I

    goto :goto_0

    .line 3283
    :cond_3
    invoke-static {v4, v6}, Ljava/lang/Math;->min(II)I

    move-result v1

    .line 3284
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v4

    add-int/2addr v4, v1

    invoke-virtual {p1, v4}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 3285
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    iget v5, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    invoke-virtual {p1, v4, v5, v1}, Ljava/nio/ByteBuffer;->get([BII)Ljava/nio/ByteBuffer;

    .line 3286
    iget v4, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    add-int/2addr v4, v1

    iput v4, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    .line 3287
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    array-length v5, v1

    if-ne v4, v5, :cond_5

    .line 3290
    iget-boolean v5, p0, Lcom/tkay/expressad/exoplayer/b/q;->u:Z

    if-eqz v5, :cond_4

    .line 3291
    iget v4, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    invoke-direct {p0, v1, v4}, Lcom/tkay/expressad/exoplayer/b/q;->a([BI)V

    .line 3292
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    iget v6, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    mul-int/2addr v6, v2

    sub-int/2addr v1, v6

    iget v6, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    div-int/2addr v1, v6

    int-to-long v6, v1

    add-long/2addr v4, v6

    iput-wide v4, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    goto :goto_1

    .line 3294
    :cond_4
    iget-wide v5, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    sub-int/2addr v4, v1

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    div-int/2addr v4, v1

    int-to-long v7, v4

    add-long/2addr v5, v7

    iput-wide v5, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    .line 3296
    :goto_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    iget v4, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    invoke-direct {p0, p1, v1, v4}, Lcom/tkay/expressad/exoplayer/b/q;->a(Ljava/nio/ByteBuffer;[BI)V

    .line 3297
    iput v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    .line 3298
    iput v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->r:I

    .line 3302
    :cond_5
    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    goto/16 :goto_0

    .line 1250
    :cond_6
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v0

    .line 1253
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v2

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    array-length v3, v3

    add-int/2addr v2, v3

    invoke-static {v0, v2}, Ljava/lang/Math;->min(II)I

    move-result v2

    invoke-virtual {p1, v2}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 1406
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v2

    sub-int/2addr v2, v1

    :goto_2
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v3

    if-lt v2, v3, :cond_8

    .line 1407
    invoke-virtual {p1, v2}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v3

    invoke-static {v3}, Ljava/lang/Math;->abs(I)I

    move-result v3

    const/4 v4, 0x4

    if-le v3, v4, :cond_7

    .line 1409
    iget v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    div-int/2addr v2, v3

    mul-int/2addr v2, v3

    add-int/2addr v2, v3

    goto :goto_3

    :cond_7
    add-int/lit8 v2, v2, -0x2

    goto :goto_2

    .line 1412
    :cond_8
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v2

    .line 1255
    :goto_3
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v3

    if-ne v2, v3, :cond_9

    .line 1257
    iput v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->r:I

    goto :goto_4

    .line 1259
    :cond_9
    invoke-virtual {p1, v2}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 2342
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v1

    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/b/q;->a(I)V

    .line 2343
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    invoke-virtual {v1, p1}, Ljava/nio/ByteBuffer;->put(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;

    .line 2344
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 2345
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->n:Ljava/nio/ByteBuffer;

    .line 1264
    :goto_4
    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    goto/16 :goto_0

    :cond_a
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 118
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/q;->l:Z

    .line 119
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/q;->h()V

    return-void
.end method

.method public final a()Z
    .locals 2

    .line 149
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->j:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->l:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final a(III)Z
    .locals 1

    const/4 v0, 0x2

    if-ne p3, v0, :cond_1

    .line 138
    iget p3, p0, Lcom/tkay/expressad/exoplayer/b/q;->j:I

    if-ne p3, p1, :cond_0

    iget p3, p0, Lcom/tkay/expressad/exoplayer/b/q;->i:I

    if-ne p3, p2, :cond_0

    const/4 p1, 0x0

    return p1

    .line 141
    :cond_0
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/q;->j:I

    .line 142
    iput p2, p0, Lcom/tkay/expressad/exoplayer/b/q;->i:I

    mul-int/2addr p2, v0

    .line 143
    iput p2, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    const/4 p1, 0x1

    return p1

    .line 136
    :cond_1
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/f$a;

    invoke-direct {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/b/f$a;-><init>(III)V

    throw v0
.end method

.method public final b()I
    .locals 1

    .line 154
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->i:I

    return v0
.end method

.method public final c()I
    .locals 1

    const/4 v0, 0x2

    return v0
.end method

.method public final d()I
    .locals 1

    .line 164
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->j:I

    return v0
.end method

.method public final e()V
    .locals 4

    const/4 v0, 0x1

    .line 188
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->o:Z

    .line 189
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    if-lez v0, :cond_0

    .line 191
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    invoke-direct {p0, v1, v0}, Lcom/tkay/expressad/exoplayer/b/q;->a([BI)V

    .line 193
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->u:Z

    if-nez v0, :cond_1

    .line 194
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    iget v3, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    div-int/2addr v2, v3

    int-to-long v2, v2

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    :cond_1
    return-void
.end method

.method public final f()Ljava/nio/ByteBuffer;
    .locals 2

    .line 200
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->n:Ljava/nio/ByteBuffer;

    .line 201
    sget-object v1, Lcom/tkay/expressad/exoplayer/b/q;->a:Ljava/nio/ByteBuffer;

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->n:Ljava/nio/ByteBuffer;

    return-object v0
.end method

.method public final g()Z
    .locals 2

    .line 208
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->o:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->n:Ljava/nio/ByteBuffer;

    sget-object v1, Lcom/tkay/expressad/exoplayer/b/q;->a:Ljava/nio/ByteBuffer;

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final h()V
    .locals 3

    .line 213
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/q;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    const-wide/32 v0, 0x249f0

    .line 214
    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/b/q;->a(J)I

    move-result v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    mul-int/2addr v0, v1

    .line 215
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    array-length v1, v1

    if-eq v1, v0, :cond_0

    .line 216
    new-array v0, v0, [B

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    :cond_0
    const-wide/16 v0, 0x4e20

    .line 218
    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/b/q;->a(J)I

    move-result v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->k:I

    mul-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    .line 219
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->q:[B

    array-length v1, v1

    if-eq v1, v0, :cond_1

    .line 220
    new-array v0, v0, [B

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->q:[B

    :cond_1
    const/4 v0, 0x0

    .line 223
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->r:I

    .line 224
    sget-object v1, Lcom/tkay/expressad/exoplayer/b/q;->a:Ljava/nio/ByteBuffer;

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->n:Ljava/nio/ByteBuffer;

    .line 225
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->o:Z

    const-wide/16 v1, 0x0

    .line 226
    iput-wide v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    .line 227
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->s:I

    .line 228
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->u:Z

    return-void
.end method

.method public final i()V
    .locals 2

    const/4 v0, 0x0

    .line 233
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->l:Z

    .line 234
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/q;->h()V

    .line 235
    sget-object v1, Lcom/tkay/expressad/exoplayer/b/q;->a:Ljava/nio/ByteBuffer;

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->m:Ljava/nio/ByteBuffer;

    const/4 v1, -0x1

    .line 236
    iput v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->i:I

    .line 237
    iput v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->j:I

    .line 238
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->t:I

    new-array v1, v0, [B

    .line 239
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/q;->p:[B

    new-array v0, v0, [B

    .line 240
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->q:[B

    return-void
.end method

.method public final j()J
    .locals 2

    .line 127
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/q;->v:J

    return-wide v0
.end method
