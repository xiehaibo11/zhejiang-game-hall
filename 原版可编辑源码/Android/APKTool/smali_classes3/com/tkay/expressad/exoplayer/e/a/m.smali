.class final Lcom/tkay/expressad/exoplayer/e/a/m;
.super Ljava/lang/Object;


# instance fields
.field public final a:Lcom/tkay/expressad/exoplayer/e/a/j;

.field public final b:I

.field public final c:[J

.field public final d:[I

.field public final e:I

.field public final f:[J

.field public final g:[I

.field public final h:J


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/e/a/j;[J[II[J[IJ)V
    .locals 4

    .line 54
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 55
    array-length v0, p3

    array-length v1, p5

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-ne v0, v1, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v3

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 56
    array-length v0, p2

    array-length v1, p5

    if-ne v0, v1, :cond_1

    move v0, v2

    goto :goto_1

    :cond_1
    move v0, v3

    :goto_1
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 57
    array-length v0, p6

    array-length v1, p5

    if-ne v0, v1, :cond_2

    goto :goto_2

    :cond_2
    move v2, v3

    :goto_2
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 59
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->a:Lcom/tkay/expressad/exoplayer/e/a/j;

    .line 60
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->c:[J

    .line 61
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->d:[I

    .line 62
    iput p4, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->e:I

    .line 63
    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->f:[J

    .line 64
    iput-object p6, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->g:[I

    .line 65
    iput-wide p7, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->h:J

    .line 66
    array-length p1, p2

    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->b:I

    return-void
.end method


# virtual methods
.method public final a(J)I
    .locals 2

    .line 79
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->f:[J

    const/4 v1, 0x0

    invoke-static {v0, p1, p2, v1}, Lcom/tkay/expressad/exoplayer/k/af;->a([JJZ)I

    move-result p1

    :goto_0
    if-ltz p1, :cond_1

    .line 81
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->g:[I

    aget p2, p2, p1

    and-int/lit8 p2, p2, 0x1

    if-eqz p2, :cond_0

    return p1

    :cond_0
    add-int/lit8 p1, p1, -0x1

    goto :goto_0

    :cond_1
    const/4 p1, -0x1

    return p1
.end method

.method public final b(J)I
    .locals 3

    .line 96
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->f:[J

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-static {v0, p1, p2, v1, v2}, Lcom/tkay/expressad/exoplayer/k/af;->a([JJZZ)I

    move-result p1

    .line 97
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->f:[J

    array-length p2, p2

    if-ge p1, p2, :cond_1

    .line 98
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->g:[I

    aget p2, p2, p1

    and-int/2addr p2, v1

    if-eqz p2, :cond_0

    return p1

    :cond_0
    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, -0x1

    return p1
.end method
