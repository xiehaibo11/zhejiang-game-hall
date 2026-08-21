.class public final Lcom/tkay/expressad/exoplayer/e/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/e/f;


# static fields
.field private static final a:I = 0x10000

.field private static final b:I = 0x80000

.field private static final c:I = 0x1000


# instance fields
.field private final d:[B

.field private final e:Lcom/tkay/expressad/exoplayer/j/h;

.field private final f:J

.field private g:J

.field private h:[B

.field private i:I

.field private j:I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/j/h;JJ)V
    .locals 0

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 51
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/b;->e:Lcom/tkay/expressad/exoplayer/j/h;

    .line 52
    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/e/b;->g:J

    .line 53
    iput-wide p4, p0, Lcom/tkay/expressad/exoplayer/e/b;->f:J

    const/high16 p1, 0x10000

    new-array p1, p1, [B

    .line 54
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/b;->h:[B

    const/16 p1, 0x1000

    new-array p1, p1, [B

    .line 55
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/b;->d:[B

    return-void
.end method

.method private a([BIIIZ)I
    .locals 1

    .line 258
    invoke-static {}, Ljava/lang/Thread;->interrupted()Z

    move-result v0

    if-nez v0, :cond_2

    .line 261
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->e:Lcom/tkay/expressad/exoplayer/j/h;

    add-int/2addr p2, p4

    sub-int/2addr p3, p4

    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/j/h;->a([BII)I

    move-result p1

    const/4 p2, -0x1

    if-ne p1, p2, :cond_1

    if-nez p4, :cond_0

    if-eqz p5, :cond_0

    return p2

    .line 266
    :cond_0
    new-instance p1, Ljava/io/EOFException;

    invoke-direct {p1}, Ljava/io/EOFException;-><init>()V

    throw p1

    :cond_1
    add-int/2addr p4, p1

    return p4

    .line 259
    :cond_2
    new-instance p1, Ljava/lang/InterruptedException;

    invoke-direct {p1}, Ljava/lang/InterruptedException;-><init>()V

    throw p1
.end method

.method private e([BII)I
    .locals 2

    .line 213
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->j:I

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 216
    :cond_0
    invoke-static {v0, p3}, Ljava/lang/Math;->min(II)I

    move-result p3

    .line 217
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->h:[B

    invoke-static {v0, v1, p1, p2, p3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 218
    invoke-direct {p0, p3}, Lcom/tkay/expressad/exoplayer/e/b;->h(I)V

    return p3
.end method

.method private f(I)V
    .locals 3

    .line 184
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->i:I

    add-int/2addr v0, p1

    .line 185
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/b;->h:[B

    array-length v1, p1

    if-le v0, v1, :cond_0

    .line 186
    array-length p1, p1

    mul-int/lit8 p1, p1, 0x2

    const/high16 v1, 0x10000

    add-int/2addr v1, v0

    const/high16 v2, 0x80000

    add-int/2addr v0, v2

    invoke-static {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/k/af;->a(III)I

    move-result p1

    .line 188
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->h:[B

    invoke-static {v0, p1}, Ljava/util/Arrays;->copyOf([BI)[B

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/b;->h:[B

    :cond_0
    return-void
.end method

.method private g(I)I
    .locals 1

    .line 199
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->j:I

    invoke-static {v0, p1}, Ljava/lang/Math;->min(II)I

    move-result p1

    .line 200
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/e/b;->h(I)V

    return p1
.end method

.method private h(I)V
    .locals 5

    .line 228
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->j:I

    sub-int/2addr v0, p1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->j:I

    const/4 v1, 0x0

    .line 229
    iput v1, p0, Lcom/tkay/expressad/exoplayer/e/b;->i:I

    .line 230
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/b;->h:[B

    .line 231
    array-length v3, v2

    const/high16 v4, 0x80000

    sub-int/2addr v3, v4

    if-ge v0, v3, :cond_0

    const/high16 v2, 0x10000

    add-int/2addr v0, v2

    .line 232
    new-array v2, v0, [B

    .line 234
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->h:[B

    iget v3, p0, Lcom/tkay/expressad/exoplayer/e/b;->j:I

    invoke-static {v0, p1, v2, v1, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 235
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/e/b;->h:[B

    return-void
.end method

.method private i(I)V
    .locals 4

    const/4 v0, -0x1

    if-eq p1, v0, :cond_0

    .line 278
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->g:J

    int-to-long v2, p1

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->g:J

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(I)I
    .locals 7

    .line 87
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/e/b;->g(I)I

    move-result v0

    if-nez v0, :cond_0

    .line 89
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/b;->d:[B

    const/4 v3, 0x0

    array-length v0, v2

    .line 90
    invoke-static {p1, v0}, Ljava/lang/Math;->min(II)I

    move-result v4

    const/4 v5, 0x0

    const/4 v6, 0x1

    move-object v1, p0

    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/e/b;->a([BIIIZ)I

    move-result v0

    .line 92
    :cond_0
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/e/b;->i(I)V

    return v0
.end method

.method public final a([BII)I
    .locals 7

    .line 60
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/e/b;->e([BII)I

    move-result v0

    if-nez v0, :cond_0

    const/4 v5, 0x0

    const/4 v6, 0x1

    move-object v1, p0

    move-object v2, p1

    move v3, p2

    move v4, p3

    .line 62
    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/e/b;->a([BIIIZ)I

    move-result v0

    .line 64
    :cond_0
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/e/b;->i(I)V

    return v0
.end method

.method public final a()V
    .locals 1

    const/4 v0, 0x0

    .line 154
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->i:I

    return-void
.end method

.method public final a(JLjava/lang/Throwable;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<E:",
            "Ljava/lang/Throwable;",
            ">(JTE;)V^TE;"
        }
    .end annotation

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-ltz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 174
    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 175
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/e/b;->g:J

    .line 176
    throw p3
.end method

.method public final a([BIIZ)Z
    .locals 7

    .line 71
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/e/b;->e([BII)I

    move-result v0

    move v5, v0

    :goto_0
    const/4 v0, -0x1

    if-ge v5, p3, :cond_0

    if-eq v5, v0, :cond_0

    move-object v1, p0

    move-object v2, p1

    move v3, p2

    move v4, p3

    move v6, p4

    .line 73
    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/e/b;->a([BIIIZ)I

    move-result v5

    goto :goto_0

    .line 75
    :cond_0
    invoke-direct {p0, v5}, Lcom/tkay/expressad/exoplayer/e/b;->i(I)V

    if-eq v5, v0, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method public final b()J
    .locals 4

    .line 159
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->g:J

    iget v2, p0, Lcom/tkay/expressad/exoplayer/e/b;->i:I

    int-to-long v2, v2

    add-long/2addr v0, v2

    return-wide v0
.end method

.method public final b([BII)V
    .locals 1

    const/4 v0, 0x0

    .line 82
    invoke-virtual {p0, p1, p2, p3, v0}, Lcom/tkay/expressad/exoplayer/e/b;->a([BIIZ)Z

    return-void
.end method

.method public final b(I)Z
    .locals 7

    .line 99
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/e/b;->g(I)I

    move-result v0

    move v5, v0

    :goto_0
    const/4 v0, -0x1

    if-ge v5, p1, :cond_0

    if-eq v5, v0, :cond_0

    .line 101
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->d:[B

    array-length v0, v0

    add-int/2addr v0, v5

    invoke-static {p1, v0}, Ljava/lang/Math;->min(II)I

    move-result v4

    .line 102
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/b;->d:[B

    neg-int v3, v5

    const/4 v6, 0x0

    move-object v1, p0

    .line 103
    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/e/b;->a([BIIIZ)I

    move-result v5

    goto :goto_0

    .line 105
    :cond_0
    invoke-direct {p0, v5}, Lcom/tkay/expressad/exoplayer/e/b;->i(I)V

    if-eq v5, v0, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method public final c()J
    .locals 2

    .line 164
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->g:J

    return-wide v0
.end method

.method public final c(I)V
    .locals 7

    .line 1099
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/e/b;->g(I)I

    move-result v0

    move v5, v0

    :goto_0
    if-ge v5, p1, :cond_0

    const/4 v0, -0x1

    if-eq v5, v0, :cond_0

    .line 1101
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->d:[B

    array-length v0, v0

    add-int/2addr v0, v5

    invoke-static {p1, v0}, Ljava/lang/Math;->min(II)I

    move-result v4

    .line 1102
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/b;->d:[B

    neg-int v3, v5

    const/4 v6, 0x0

    move-object v1, p0

    .line 1103
    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/e/b;->a([BIIIZ)I

    move-result v5

    goto :goto_0

    .line 1105
    :cond_0
    invoke-direct {p0, v5}, Lcom/tkay/expressad/exoplayer/e/b;->i(I)V

    return-void
.end method

.method public final c([BII)Z
    .locals 2

    .line 117
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/e/b;->d(I)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 120
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->h:[B

    iget v1, p0, Lcom/tkay/expressad/exoplayer/e/b;->i:I

    sub-int/2addr v1, p3

    invoke-static {v0, v1, p1, p2, p3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    const/4 p1, 0x1

    return p1
.end method

.method public final d()J
    .locals 2

    .line 169
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->f:J

    return-wide v0
.end method

.method public final d([BII)V
    .locals 2

    .line 1117
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/e/b;->d(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1120
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->h:[B

    iget v1, p0, Lcom/tkay/expressad/exoplayer/e/b;->i:I

    sub-int/2addr v1, p3

    invoke-static {v0, v1, p1, p2, p3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    :cond_0
    return-void
.end method

.method public final d(I)Z
    .locals 7

    .line 133
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/e/b;->f(I)V

    .line 134
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->j:I

    iget v1, p0, Lcom/tkay/expressad/exoplayer/e/b;->i:I

    sub-int/2addr v0, v1

    invoke-static {v0, p1}, Ljava/lang/Math;->min(II)I

    move-result v0

    move v5, v0

    :cond_0
    if-ge v5, p1, :cond_1

    .line 136
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/b;->h:[B

    iget v3, p0, Lcom/tkay/expressad/exoplayer/e/b;->i:I

    const/4 v6, 0x0

    move-object v1, p0

    move v4, p1

    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/e/b;->a([BIIIZ)I

    move-result v5

    const/4 v0, -0x1

    if-ne v5, v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 142
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->i:I

    add-int/2addr v0, p1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/b;->i:I

    .line 143
    iget p1, p0, Lcom/tkay/expressad/exoplayer/e/b;->j:I

    invoke-static {p1, v0}, Ljava/lang/Math;->max(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/b;->j:I

    const/4 p1, 0x1

    return p1
.end method

.method public final e(I)V
    .locals 0

    .line 149
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/e/b;->d(I)Z

    return-void
.end method
