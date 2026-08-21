.class public final Lcom/tkay/expressad/exoplayer/k/j;
.super Ljava/lang/Object;


# instance fields
.field public final a:I

.field public final b:I

.field public final c:I

.field public final d:I

.field public final e:I

.field public final f:I

.field public final g:I

.field public final h:J


# direct methods
.method private constructor <init>(IIIIIIIJ)V
    .locals 0

    .line 79
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 80
    iput p1, p0, Lcom/tkay/expressad/exoplayer/k/j;->a:I

    .line 81
    iput p2, p0, Lcom/tkay/expressad/exoplayer/k/j;->b:I

    .line 82
    iput p3, p0, Lcom/tkay/expressad/exoplayer/k/j;->c:I

    .line 83
    iput p4, p0, Lcom/tkay/expressad/exoplayer/k/j;->d:I

    .line 84
    iput p5, p0, Lcom/tkay/expressad/exoplayer/k/j;->e:I

    .line 85
    iput p6, p0, Lcom/tkay/expressad/exoplayer/k/j;->f:I

    .line 86
    iput p7, p0, Lcom/tkay/expressad/exoplayer/k/j;->g:I

    .line 87
    iput-wide p8, p0, Lcom/tkay/expressad/exoplayer/k/j;->h:J

    return-void
.end method

.method private constructor <init>([BI)V
    .locals 4

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 43
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/r;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/k/r;-><init>([B)V

    mul-int/lit8 p2, p2, 0x8

    .line 44
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/exoplayer/k/r;->a(I)V

    const/16 p1, 0x10

    .line 45
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/exoplayer/k/j;->a:I

    .line 46
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/k/j;->b:I

    const/16 p1, 0x18

    .line 47
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/exoplayer/k/j;->c:I

    .line 48
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/k/j;->d:I

    const/16 p1, 0x14

    .line 49
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/k/j;->e:I

    const/4 p1, 0x3

    .line 50
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result p1

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/k/j;->f:I

    const/4 p1, 0x5

    .line 51
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result p1

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/k/j;->g:I

    const/4 p1, 0x4

    .line 52
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result p1

    int-to-long p1, p1

    const-wide/16 v1, 0xf

    and-long/2addr p1, v1

    const/16 v1, 0x20

    shl-long/2addr p1, v1

    .line 53
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v0

    int-to-long v0, v0

    const-wide v2, 0xffffffffL

    and-long/2addr v0, v2

    or-long/2addr p1, v0

    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/k/j;->h:J

    return-void
.end method

.method private a()I
    .locals 2

    .line 92
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k/j;->b:I

    iget v1, p0, Lcom/tkay/expressad/exoplayer/k/j;->f:I

    mul-int/2addr v0, v1

    iget v1, p0, Lcom/tkay/expressad/exoplayer/k/j;->g:I

    div-int/lit8 v1, v1, 0x8

    mul-int/2addr v0, v1

    return v0
.end method

.method private a(J)J
    .locals 4

    .line 112
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k/j;->e:I

    int-to-long v0, v0

    mul-long/2addr p1, v0

    const-wide/32 v0, 0xf4240

    div-long/2addr p1, v0

    .line 113
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/j;->h:J

    const-wide/16 v2, 0x1

    sub-long/2addr v0, v2

    invoke-static {p1, p2, v0, v1}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJ)J

    move-result-wide p1

    return-wide p1
.end method

.method private b()I
    .locals 2

    .line 97
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k/j;->g:I

    iget v1, p0, Lcom/tkay/expressad/exoplayer/k/j;->e:I

    mul-int/2addr v0, v1

    return v0
.end method

.method private c()J
    .locals 4

    .line 102
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/j;->h:J

    const-wide/32 v2, 0xf4240

    mul-long/2addr v0, v2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/k/j;->e:I

    int-to-long v2, v2

    div-long/2addr v0, v2

    return-wide v0
.end method

.method private d()J
    .locals 4

    .line 119
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k/j;->d:I

    if-lez v0, :cond_0

    int-to-long v0, v0

    .line 120
    iget v2, p0, Lcom/tkay/expressad/exoplayer/k/j;->c:I

    int-to-long v2, v2

    add-long/2addr v0, v2

    const-wide/16 v2, 0x2

    div-long/2addr v0, v2

    const-wide/16 v2, 0x1

    :goto_0
    add-long/2addr v0, v2

    goto :goto_2

    .line 124
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k/j;->a:I

    iget v1, p0, Lcom/tkay/expressad/exoplayer/k/j;->b:I

    if-ne v0, v1, :cond_1

    if-lez v0, :cond_1

    int-to-long v0, v0

    goto :goto_1

    :cond_1
    const-wide/16 v0, 0x1000

    .line 125
    :goto_1
    iget v2, p0, Lcom/tkay/expressad/exoplayer/k/j;->f:I

    int-to-long v2, v2

    mul-long/2addr v0, v2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/k/j;->g:I

    int-to-long v2, v2

    mul-long/2addr v0, v2

    const-wide/16 v2, 0x8

    div-long/2addr v0, v2

    const-wide/16 v2, 0x40

    goto :goto_0

    :goto_2
    return-wide v0
.end method
