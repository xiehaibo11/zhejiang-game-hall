.class public final Lcom/tkay/expressad/exoplayer/j/j;
.super Ljava/io/InputStream;


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/j/h;

.field private final b:Lcom/tkay/expressad/exoplayer/j/k;

.field private final c:[B

.field private d:Z

.field private e:Z

.field private f:J


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/j/h;Lcom/tkay/expressad/exoplayer/j/k;)V
    .locals 1

    .line 44
    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V

    const/4 v0, 0x0

    .line 36
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->d:Z

    .line 37
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->e:Z

    .line 45
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/j;->a:Lcom/tkay/expressad/exoplayer/j/h;

    .line 46
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/j/j;->b:Lcom/tkay/expressad/exoplayer/j/k;

    const/4 p1, 0x1

    new-array p1, p1, [B

    .line 47
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/j;->c:[B

    return-void
.end method

.method private c()V
    .locals 2

    .line 103
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->d:Z

    if-nez v0, :cond_0

    .line 104
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->a:Lcom/tkay/expressad/exoplayer/j/h;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/j;->b:Lcom/tkay/expressad/exoplayer/j/k;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/j/h;->a(Lcom/tkay/expressad/exoplayer/j/k;)J

    const/4 v0, 0x1

    .line 105
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->d:Z

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()J
    .locals 2

    .line 54
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->f:J

    return-wide v0
.end method

.method public final b()V
    .locals 0

    .line 67
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j/j;->c()V

    return-void
.end method

.method public final close()V
    .locals 1

    .line 96
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->e:Z

    if-nez v0, :cond_0

    .line 97
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->a:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/h;->b()V

    const/4 v0, 0x1

    .line 98
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->e:Z

    :cond_0
    return-void
.end method

.method public final read()I
    .locals 2

    .line 72
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->c:[B

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/j/j;->read([B)I

    move-result v0

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    return v1

    .line 73
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->c:[B

    const/4 v1, 0x0

    aget-byte v0, v0, v1

    and-int/lit16 v0, v0, 0xff

    return v0
.end method

.method public final read([B)I
    .locals 2

    .line 78
    array-length v0, p1

    const/4 v1, 0x0

    invoke-virtual {p0, p1, v1, v0}, Lcom/tkay/expressad/exoplayer/j/j;->read([BII)I

    move-result p1

    return p1
.end method

.method public final read([BII)I
    .locals 2

    .line 83
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->e:Z

    xor-int/lit8 v0, v0, 0x1

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 84
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j/j;->c()V

    .line 85
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/j;->a:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/j/h;->a([BII)I

    move-result p1

    const/4 p2, -0x1

    if-ne p1, p2, :cond_0

    return p2

    .line 89
    :cond_0
    iget-wide p2, p0, Lcom/tkay/expressad/exoplayer/j/j;->f:J

    int-to-long v0, p1

    add-long/2addr p2, v0

    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/j/j;->f:J

    return p1
.end method
