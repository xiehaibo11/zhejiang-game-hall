.class public final Lcom/tkay/expressad/exoplayer/h/a/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/a/a$b;,
        Lcom/tkay/expressad/exoplayer/h/a/a$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field public static final c:I = 0x2

.field public static final d:I = 0x3

.field public static final e:I = 0x4

.field public static final f:Lcom/tkay/expressad/exoplayer/h/a/a;


# instance fields
.field public final g:I

.field public final h:[J

.field public final i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

.field public final j:J

.field public final k:J


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 238
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/a/a;

    const/4 v1, 0x0

    new-array v1, v1, [J

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/h/a/a;-><init>([J)V

    sput-object v0, Lcom/tkay/expressad/exoplayer/h/a/a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    return-void
.end method

.method private varargs constructor <init>([J)V
    .locals 2

    .line 260
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 262
    iput v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->g:I

    .line 263
    invoke-static {p1, v0}, Ljava/util/Arrays;->copyOf([JI)[J

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    new-array p1, v0, [Lcom/tkay/expressad/exoplayer/h/a/a$a;

    .line 264
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    const-wide/16 v0, 0x0

    .line 268
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    .line 269
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    return-void
.end method

.method private constructor <init>([J[Lcom/tkay/expressad/exoplayer/h/a/a$a;JJ)V
    .locals 1

    .line 273
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 274
    array-length v0, p2

    iput v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->g:I

    .line 275
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    .line 276
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    .line 277
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    .line 278
    iput-wide p5, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    return-void
.end method

.method private a(J)I
    .locals 6

    .line 292
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    array-length v0, v0

    add-int/lit8 v0, v0, -0x1

    :goto_0
    if-ltz v0, :cond_1

    .line 293
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    aget-wide v2, v1, v0

    const-wide/high16 v4, -0x8000000000000000L

    cmp-long v2, v2, v4

    if-eqz v2, :cond_0

    aget-wide v2, v1, v0

    cmp-long v1, v2, p1

    if-lez v1, :cond_1

    :cond_0
    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    :cond_1
    if-ltz v0, :cond_2

    .line 297
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object p1, p1, v0

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a()Z

    move-result p1

    if-eqz p1, :cond_2

    return v0

    :cond_2
    const/4 p1, -0x1

    return p1
.end method

.method private a(I)Lcom/tkay/expressad/exoplayer/h/a/a;
    .locals 8

    .line 372
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    array-length v1, v0

    invoke-static {v0, v1}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v0

    move-object v3, v0

    check-cast v3, [Lcom/tkay/expressad/exoplayer/h/a/a$a;

    .line 373
    aget-object v0, v3, p1

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->b()Lcom/tkay/expressad/exoplayer/h/a/a$a;

    move-result-object v0

    aput-object v0, v3, p1

    .line 374
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    move-object v1, p1

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/a/a;-><init>([J[Lcom/tkay/expressad/exoplayer/h/a/a$a;JJ)V

    return-object p1
.end method

.method private a(II)Lcom/tkay/expressad/exoplayer/h/a/a;
    .locals 8

    if-lez p2, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 325
    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 326
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object v0, v0, p1

    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a:I

    if-ne v0, p2, :cond_1

    return-object p0

    .line 329
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    array-length v1, v0

    invoke-static {v0, v1}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v0

    move-object v3, v0

    check-cast v3, [Lcom/tkay/expressad/exoplayer/h/a/a$a;

    .line 330
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object v0, v0, p1

    invoke-virtual {v0, p2}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->b(I)Lcom/tkay/expressad/exoplayer/h/a/a$a;

    move-result-object p2

    aput-object p2, v3, p1

    .line 331
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    move-object v1, p1

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/a/a;-><init>([J[Lcom/tkay/expressad/exoplayer/h/a/a$a;JJ)V

    return-object p1
.end method

.method private a(IILandroid/net/Uri;)Lcom/tkay/expressad/exoplayer/h/a/a;
    .locals 8

    .line 337
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    array-length v1, v0

    invoke-static {v0, v1}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v0

    move-object v3, v0

    check-cast v3, [Lcom/tkay/expressad/exoplayer/h/a/a$a;

    .line 338
    aget-object v0, v3, p1

    invoke-virtual {v0, p3, p2}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a(Landroid/net/Uri;I)Lcom/tkay/expressad/exoplayer/h/a/a$a;

    move-result-object p2

    aput-object p2, v3, p1

    .line 339
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    move-object v1, p1

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/a/a;-><init>([J[Lcom/tkay/expressad/exoplayer/h/a/a$a;JJ)V

    return-object p1
.end method

.method private b(J)I
    .locals 6

    const/4 v0, 0x0

    .line 311
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    array-length v2, v1

    if-ge v0, v2, :cond_1

    aget-wide v2, v1, v0

    const-wide/high16 v4, -0x8000000000000000L

    cmp-long v2, v2, v4

    if-eqz v2, :cond_1

    aget-wide v2, v1, v0

    cmp-long v1, p1, v2

    if-gez v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object v1, v1, v0

    .line 313
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a()Z

    move-result v1

    if-nez v1, :cond_1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 316
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    array-length p1, p1

    if-ge v0, p1, :cond_2

    return v0

    :cond_2
    const/4 p1, -0x1

    return p1
.end method

.method private b(II)Lcom/tkay/expressad/exoplayer/h/a/a;
    .locals 8

    .line 345
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    array-length v1, v0

    invoke-static {v0, v1}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v0

    move-object v3, v0

    check-cast v3, [Lcom/tkay/expressad/exoplayer/h/a/a$a;

    .line 346
    aget-object v0, v3, p1

    const/4 v1, 0x3

    invoke-virtual {v0, v1, p2}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a(II)Lcom/tkay/expressad/exoplayer/h/a/a$a;

    move-result-object p2

    aput-object p2, v3, p1

    .line 347
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    move-object v1, p1

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/a/a;-><init>([J[Lcom/tkay/expressad/exoplayer/h/a/a$a;JJ)V

    return-object p1
.end method

.method private c(II)Lcom/tkay/expressad/exoplayer/h/a/a;
    .locals 8

    .line 353
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    array-length v1, v0

    invoke-static {v0, v1}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v0

    move-object v3, v0

    check-cast v3, [Lcom/tkay/expressad/exoplayer/h/a/a$a;

    .line 354
    aget-object v0, v3, p1

    const/4 v1, 0x2

    invoke-virtual {v0, v1, p2}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a(II)Lcom/tkay/expressad/exoplayer/h/a/a$a;

    move-result-object p2

    aput-object p2, v3, p1

    .line 355
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    move-object v1, p1

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/a/a;-><init>([J[Lcom/tkay/expressad/exoplayer/h/a/a$a;JJ)V

    return-object p1
.end method

.method private c(J)Lcom/tkay/expressad/exoplayer/h/a/a;
    .locals 8

    .line 390
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    cmp-long v0, v0, p1

    if-nez v0, :cond_0

    return-object p0

    .line 393
    :cond_0
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    move-object v1, v0

    move-wide v4, p1

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/a/a;-><init>([J[Lcom/tkay/expressad/exoplayer/h/a/a$a;JJ)V

    return-object v0
.end method

.method private d(II)Lcom/tkay/expressad/exoplayer/h/a/a;
    .locals 8

    .line 361
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    array-length v1, v0

    invoke-static {v0, v1}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v0

    move-object v3, v0

    check-cast v3, [Lcom/tkay/expressad/exoplayer/h/a/a$a;

    .line 362
    aget-object v0, v3, p1

    const/4 v1, 0x4

    invoke-virtual {v0, v1, p2}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a(II)Lcom/tkay/expressad/exoplayer/h/a/a$a;

    move-result-object p2

    aput-object p2, v3, p1

    .line 363
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    move-object v1, p1

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/a/a;-><init>([J[Lcom/tkay/expressad/exoplayer/h/a/a$a;JJ)V

    return-object p1
.end method

.method private d(J)Lcom/tkay/expressad/exoplayer/h/a/a;
    .locals 8

    .line 400
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    cmp-long v0, v0, p1

    if-nez v0, :cond_0

    return-object p0

    .line 403
    :cond_0
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    move-object v1, v0

    move-wide v6, p1

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/a/a;-><init>([J[Lcom/tkay/expressad/exoplayer/h/a/a$a;JJ)V

    return-object v0
.end method


# virtual methods
.method public final a([[J)Lcom/tkay/expressad/exoplayer/h/a/a;
    .locals 8

    .line 380
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    array-length v1, v0

    invoke-static {v0, v1}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v0

    move-object v3, v0

    check-cast v3, [Lcom/tkay/expressad/exoplayer/h/a/a$a;

    const/4 v0, 0x0

    .line 381
    :goto_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->g:I

    if-ge v0, v1, :cond_0

    .line 382
    aget-object v1, v3, v0

    aget-object v2, p1, v0

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a([J)Lcom/tkay/expressad/exoplayer/h/a/a$a;

    move-result-object v1

    aput-object v1, v3, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 384
    :cond_0
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    move-object v1, p1

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/a/a;-><init>([J[Lcom/tkay/expressad/exoplayer/h/a/a$a;JJ)V

    return-object p1
.end method
