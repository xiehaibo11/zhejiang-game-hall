.class final Lcom/tkay/expressad/exoplayer/e/a/l;
.super Ljava/lang/Object;


# instance fields
.field public a:Lcom/tkay/expressad/exoplayer/e/a/c;

.field public b:J

.field public c:J

.field public d:J

.field public e:I

.field public f:I

.field public g:[J

.field public h:[I

.field public i:[I

.field public j:[I

.field public k:[J

.field public l:[Z

.field public m:Z

.field public n:[Z

.field public o:Lcom/tkay/expressad/exoplayer/e/a/k;

.field public p:I

.field public q:Lcom/tkay/expressad/exoplayer/k/s;

.field public r:Z

.field public s:J


# direct methods
.method constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/e/f;)V
    .locals 3

    .line 174
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->q:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    iget v1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->p:I

    const/4 v2, 0x0

    invoke-interface {p1, v0, v2, v1}, Lcom/tkay/expressad/exoplayer/e/f;->b([BII)V

    .line 175
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->q:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 176
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->r:Z

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    const/4 v0, 0x0

    .line 116
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->e:I

    const-wide/16 v1, 0x0

    .line 117
    iput-wide v1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->s:J

    .line 118
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->m:Z

    .line 119
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->r:Z

    const/4 v0, 0x0

    .line 120
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->o:Lcom/tkay/expressad/exoplayer/e/a/k;

    return-void
.end method

.method public final a(I)V
    .locals 1

    .line 160
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->q:Lcom/tkay/expressad/exoplayer/k/s;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->b()I

    move-result v0

    if-ge v0, p1, :cond_1

    .line 161
    :cond_0
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/s;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/k/s;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->q:Lcom/tkay/expressad/exoplayer/k/s;

    .line 163
    :cond_1
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->p:I

    const/4 p1, 0x1

    .line 164
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->m:Z

    .line 165
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->r:Z

    return-void
.end method

.method public final a(II)V
    .locals 1

    .line 132
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->e:I

    .line 133
    iput p2, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->f:I

    .line 134
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->h:[I

    if-eqz v0, :cond_0

    array-length v0, v0

    if-ge v0, p1, :cond_1

    .line 135
    :cond_0
    new-array v0, p1, [J

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->g:[J

    .line 136
    new-array p1, p1, [I

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->h:[I

    .line 138
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->i:[I

    if-eqz p1, :cond_2

    array-length p1, p1

    if-ge p1, p2, :cond_3

    :cond_2
    mul-int/lit8 p2, p2, 0x7d

    .line 141
    div-int/lit8 p2, p2, 0x64

    .line 142
    new-array p1, p2, [I

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->i:[I

    .line 143
    new-array p1, p2, [I

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->j:[I

    .line 144
    new-array p1, p2, [J

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->k:[J

    .line 145
    new-array p1, p2, [Z

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->l:[Z

    .line 146
    new-array p1, p2, [Z

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->n:[Z

    :cond_3
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/k/s;)V
    .locals 3

    .line 185
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->q:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    iget v1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->p:I

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v2, v1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 186
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->q:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 187
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->r:Z

    return-void
.end method

.method public final b(I)J
    .locals 5

    .line 191
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->k:[J

    aget-wide v1, v0, p1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/l;->j:[I

    aget p1, v0, p1

    int-to-long v3, p1

    add-long/2addr v1, v3

    return-wide v1
.end method
