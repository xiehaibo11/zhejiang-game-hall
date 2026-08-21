.class public final Lcom/tkay/expressad/exoplayer/i/a;
.super Lcom/tkay/expressad/exoplayer/i/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/i/a$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x2710

.field public static final b:I = 0x61a8

.field public static final c:I = 0x61a8

.field public static final d:F = 0.75f

.field public static final e:F = 0.75f

.field public static final f:J = 0x7d0L


# instance fields
.field private final j:Lcom/tkay/expressad/exoplayer/j/d;

.field private final k:J

.field private final l:J

.field private final m:J

.field private final n:F

.field private final o:F

.field private final p:J

.field private final q:Lcom/tkay/expressad/exoplayer/k/c;

.field private r:F

.field private s:I

.field private t:I

.field private u:J


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/ae;[ILcom/tkay/expressad/exoplayer/j/d;)V
    .locals 15

    .line 186
    sget-object v14, Lcom/tkay/expressad/exoplayer/k/c;->a:Lcom/tkay/expressad/exoplayer/k/c;

    const-wide/16 v4, 0x2710

    const-wide/16 v6, 0x61a8

    const-wide/16 v8, 0x61a8

    const/high16 v10, 0x3f400000    # 0.75f

    const/high16 v11, 0x3f400000    # 0.75f

    const-wide/16 v12, 0x7d0

    move-object v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    invoke-direct/range {v0 .. v14}, Lcom/tkay/expressad/exoplayer/i/a;-><init>(Lcom/tkay/expressad/exoplayer/h/ae;[ILcom/tkay/expressad/exoplayer/j/d;JJJFFJLcom/tkay/expressad/exoplayer/k/c;)V

    return-void
.end method

.method public constructor <init>(Lcom/tkay/expressad/exoplayer/h/ae;[ILcom/tkay/expressad/exoplayer/j/d;JJJFFJLcom/tkay/expressad/exoplayer/k/c;)V
    .locals 0

    .line 237
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/i/b;-><init>(Lcom/tkay/expressad/exoplayer/h/ae;[I)V

    .line 238
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/i/a;->j:Lcom/tkay/expressad/exoplayer/j/d;

    const-wide/16 p1, 0x3e8

    mul-long/2addr p4, p1

    .line 239
    iput-wide p4, p0, Lcom/tkay/expressad/exoplayer/i/a;->k:J

    mul-long/2addr p6, p1

    .line 240
    iput-wide p6, p0, Lcom/tkay/expressad/exoplayer/i/a;->l:J

    mul-long/2addr p8, p1

    .line 241
    iput-wide p8, p0, Lcom/tkay/expressad/exoplayer/i/a;->m:J

    .line 242
    iput p10, p0, Lcom/tkay/expressad/exoplayer/i/a;->n:F

    .line 243
    iput p11, p0, Lcom/tkay/expressad/exoplayer/i/a;->o:F

    .line 245
    iput-wide p12, p0, Lcom/tkay/expressad/exoplayer/i/a;->p:J

    .line 246
    iput-object p14, p0, Lcom/tkay/expressad/exoplayer/i/a;->q:Lcom/tkay/expressad/exoplayer/k/c;

    const/high16 p1, 0x3f800000    # 1.0f

    .line 247
    iput p1, p0, Lcom/tkay/expressad/exoplayer/i/a;->r:F

    const/4 p1, 0x1

    .line 248
    iput p1, p0, Lcom/tkay/expressad/exoplayer/i/a;->t:I

    const-wide p1, -0x7fffffffffffffffL    # -4.9E-324

    .line 249
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/i/a;->u:J

    const-wide/high16 p1, -0x8000000000000000L

    .line 251
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/i/a;->a(J)I

    move-result p1

    .line 252
    iput p1, p0, Lcom/tkay/expressad/exoplayer/i/a;->s:I

    return-void
.end method

.method private a(J)I
    .locals 6

    .line 362
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/a;->j:Lcom/tkay/expressad/exoplayer/j/d;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/d;->a()J

    move-result-wide v0

    long-to-float v0, v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/i/a;->n:F

    mul-float/2addr v0, v1

    float-to-long v0, v0

    const/4 v2, 0x0

    move v3, v2

    .line 364
    :goto_0
    iget v4, p0, Lcom/tkay/expressad/exoplayer/i/a;->h:I

    if-ge v2, v4, :cond_3

    const-wide/high16 v4, -0x8000000000000000L

    cmp-long v4, p1, v4

    if-eqz v4, :cond_0

    .line 365
    invoke-virtual {p0, v2, p1, p2}, Lcom/tkay/expressad/exoplayer/i/a;->b(IJ)Z

    move-result v4

    if-nez v4, :cond_2

    .line 366
    :cond_0
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/i/a;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v3

    .line 367
    iget v3, v3, Lcom/tkay/expressad/exoplayer/m;->d:I

    int-to-float v3, v3

    iget v4, p0, Lcom/tkay/expressad/exoplayer/i/a;->r:F

    mul-float/2addr v3, v4

    invoke-static {v3}, Ljava/lang/Math;->round(F)I

    move-result v3

    int-to-long v3, v3

    cmp-long v3, v3, v0

    if-gtz v3, :cond_1

    return v2

    :cond_1
    move v3, v2

    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_3
    return v3
.end method

.method private b(J)J
    .locals 2

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, p1, v0

    if-eqz v0, :cond_0

    .line 378
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/i/a;->k:J

    cmp-long v0, p1, v0

    if-gtz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    long-to-float p1, p1

    .line 381
    iget p2, p0, Lcom/tkay/expressad/exoplayer/i/a;->o:F

    mul-float/2addr p1, p2

    float-to-long p1, p1

    return-wide p1

    .line 382
    :cond_1
    iget-wide p1, p0, Lcom/tkay/expressad/exoplayer/i/a;->k:J

    return-wide p1
.end method


# virtual methods
.method public final a(JLjava/util/List;)I
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(J",
            "Ljava/util/List<",
            "+",
            "Lcom/tkay/expressad/exoplayer/h/b/i;",
            ">;)I"
        }
    .end annotation

    .line 315
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/a;->q:Lcom/tkay/expressad/exoplayer/k/c;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/k/c;->a()J

    move-result-wide v0

    .line 316
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/i/a;->u:J

    const-wide v4, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v4, v2, v4

    if-eqz v4, :cond_0

    sub-long v2, v0, v2

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/i/a;->p:J

    cmp-long v2, v2, v4

    if-gez v2, :cond_0

    .line 318
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p1

    return p1

    .line 320
    :cond_0
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/i/a;->u:J

    .line 321
    invoke-interface {p3}, Ljava/util/List;->isEmpty()Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_1

    return v3

    .line 325
    :cond_1
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v2

    add-int/lit8 v4, v2, -0x1

    .line 326
    invoke-interface {p3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/exoplayer/h/b/i;

    .line 327
    iget-wide v4, v4, Lcom/tkay/expressad/exoplayer/h/b/i;->g:J

    sub-long/2addr v4, p1

    iget v6, p0, Lcom/tkay/expressad/exoplayer/i/a;->r:F

    .line 328
    invoke-static {v4, v5, v6}, Lcom/tkay/expressad/exoplayer/k/af;->b(JF)J

    move-result-wide v4

    .line 330
    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/i/a;->m:J

    cmp-long v4, v4, v6

    if-gez v4, :cond_2

    return v2

    .line 333
    :cond_2
    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/i/a;->a(J)I

    move-result v0

    .line 334
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/i/a;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    :goto_0
    if-ge v3, v2, :cond_4

    .line 339
    invoke-interface {p3, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/b/i;

    .line 340
    iget-object v4, v1, Lcom/tkay/expressad/exoplayer/h/b/i;->d:Lcom/tkay/expressad/exoplayer/m;

    .line 341
    iget-wide v5, v1, Lcom/tkay/expressad/exoplayer/h/b/i;->g:J

    sub-long/2addr v5, p1

    .line 342
    iget v1, p0, Lcom/tkay/expressad/exoplayer/i/a;->r:F

    .line 343
    invoke-static {v5, v6, v1}, Lcom/tkay/expressad/exoplayer/k/af;->b(JF)J

    move-result-wide v5

    .line 344
    iget-wide v7, p0, Lcom/tkay/expressad/exoplayer/i/a;->m:J

    cmp-long v1, v5, v7

    if-ltz v1, :cond_3

    iget v1, v4, Lcom/tkay/expressad/exoplayer/m;->d:I

    iget v5, v0, Lcom/tkay/expressad/exoplayer/m;->d:I

    if-ge v1, v5, :cond_3

    iget v1, v4, Lcom/tkay/expressad/exoplayer/m;->n:I

    const/4 v5, -0x1

    if-eq v1, v5, :cond_3

    iget v1, v4, Lcom/tkay/expressad/exoplayer/m;->n:I

    const/16 v6, 0x2d0

    if-ge v1, v6, :cond_3

    iget v1, v4, Lcom/tkay/expressad/exoplayer/m;->m:I

    if-eq v1, v5, :cond_3

    iget v1, v4, Lcom/tkay/expressad/exoplayer/m;->m:I

    const/16 v5, 0x500

    if-ge v1, v5, :cond_3

    iget v1, v4, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v4, v0, Lcom/tkay/expressad/exoplayer/m;->n:I

    if-ge v1, v4, :cond_3

    return v3

    :cond_3
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_4
    return v2
.end method

.method public final a()V
    .locals 2

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    .line 257
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/i/a;->u:J

    return-void
.end method

.method public final a(F)V
    .locals 0

    .line 262
    iput p1, p0, Lcom/tkay/expressad/exoplayer/i/a;->r:F

    return-void
.end method

.method public final a(JJ)V
    .locals 5

    .line 268
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/a;->q:Lcom/tkay/expressad/exoplayer/k/c;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/k/c;->a()J

    move-result-wide v0

    .line 270
    iget v2, p0, Lcom/tkay/expressad/exoplayer/i/a;->s:I

    .line 271
    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/i/a;->a(J)I

    move-result v3

    iput v3, p0, Lcom/tkay/expressad/exoplayer/i/a;->s:I

    if-ne v3, v2, :cond_0

    return-void

    .line 276
    :cond_0
    invoke-virtual {p0, v2, v0, v1}, Lcom/tkay/expressad/exoplayer/i/a;->b(IJ)Z

    move-result v0

    if-nez v0, :cond_4

    .line 278
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/i/a;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    .line 279
    iget v1, p0, Lcom/tkay/expressad/exoplayer/i/a;->s:I

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/exoplayer/i/a;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v1

    .line 280
    iget v3, v1, Lcom/tkay/expressad/exoplayer/m;->d:I

    iget v4, v0, Lcom/tkay/expressad/exoplayer/m;->d:I

    if-le v3, v4, :cond_3

    const-wide v3, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v3, p3, v3

    if-eqz v3, :cond_1

    .line 1378
    iget-wide v3, p0, Lcom/tkay/expressad/exoplayer/i/a;->k:J

    cmp-long v3, p3, v3

    if-gtz v3, :cond_1

    const/4 v3, 0x1

    goto :goto_0

    :cond_1
    const/4 v3, 0x0

    :goto_0
    if-eqz v3, :cond_2

    long-to-float p3, p3

    .line 1381
    iget p4, p0, Lcom/tkay/expressad/exoplayer/i/a;->o:F

    mul-float/2addr p3, p4

    float-to-long p3, p3

    goto :goto_1

    .line 1382
    :cond_2
    iget-wide p3, p0, Lcom/tkay/expressad/exoplayer/i/a;->k:J

    :goto_1
    cmp-long p3, p1, p3

    if-gez p3, :cond_3

    .line 284
    iput v2, p0, Lcom/tkay/expressad/exoplayer/i/a;->s:I

    goto :goto_2

    .line 285
    :cond_3
    iget p3, v1, Lcom/tkay/expressad/exoplayer/m;->d:I

    iget p4, v0, Lcom/tkay/expressad/exoplayer/m;->d:I

    if-ge p3, p4, :cond_4

    iget-wide p3, p0, Lcom/tkay/expressad/exoplayer/i/a;->l:J

    cmp-long p1, p1, p3

    if-ltz p1, :cond_4

    .line 289
    iput v2, p0, Lcom/tkay/expressad/exoplayer/i/a;->s:I

    .line 293
    :cond_4
    :goto_2
    iget p1, p0, Lcom/tkay/expressad/exoplayer/i/a;->s:I

    if-eq p1, v2, :cond_5

    const/4 p1, 0x3

    .line 294
    iput p1, p0, Lcom/tkay/expressad/exoplayer/i/a;->t:I

    :cond_5
    return-void
.end method

.method public final b()I
    .locals 1

    .line 300
    iget v0, p0, Lcom/tkay/expressad/exoplayer/i/a;->s:I

    return v0
.end method

.method public final c()I
    .locals 1

    .line 305
    iget v0, p0, Lcom/tkay/expressad/exoplayer/i/a;->t:I

    return v0
.end method

.method public final d()Ljava/lang/Object;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method
