.class final Lcom/tkay/expressad/exoplayer/q;
.super Ljava/lang/Object;


# static fields
.field private static final l:Ljava/lang/String; = "MediaPeriodHolder"


# instance fields
.field public final a:Lcom/tkay/expressad/exoplayer/h/r;

.field public final b:Ljava/lang/Object;

.field public final c:[Lcom/tkay/expressad/exoplayer/h/y;

.field public final d:[Z

.field public e:J

.field public f:Z

.field public g:Z

.field public h:Lcom/tkay/expressad/exoplayer/r;

.field public i:Lcom/tkay/expressad/exoplayer/q;

.field public j:Lcom/tkay/expressad/exoplayer/h/af;

.field public k:Lcom/tkay/expressad/exoplayer/i/i;

.field private final m:[Lcom/tkay/expressad/exoplayer/z;

.field private final n:Lcom/tkay/expressad/exoplayer/i/h;

.field private final o:Lcom/tkay/expressad/exoplayer/h/s;

.field private p:Lcom/tkay/expressad/exoplayer/i/i;


# direct methods
.method public constructor <init>([Lcom/tkay/expressad/exoplayer/z;JLcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/j/b;Lcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/r;)V
    .locals 2

    .line 76
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 77
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/q;->m:[Lcom/tkay/expressad/exoplayer/z;

    .line 78
    iget-wide v0, p8, Lcom/tkay/expressad/exoplayer/r;->b:J

    sub-long/2addr p2, v0

    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/q;->e:J

    .line 79
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/q;->n:Lcom/tkay/expressad/exoplayer/i/h;

    .line 80
    iput-object p6, p0, Lcom/tkay/expressad/exoplayer/q;->o:Lcom/tkay/expressad/exoplayer/h/s;

    .line 81
    invoke-static {p7}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    .line 82
    iput-object p8, p0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 83
    array-length p2, p1

    new-array p2, p2, [Lcom/tkay/expressad/exoplayer/h/y;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    .line 84
    array-length p1, p1

    new-array p1, p1, [Z

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/q;->d:[Z

    .line 85
    iget-object p1, p8, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-interface {p6, p1, p5}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;

    move-result-object p3

    .line 86
    iget-wide p1, p8, Lcom/tkay/expressad/exoplayer/r;->c:J

    const-wide/high16 p4, -0x8000000000000000L

    cmp-long p1, p1, p4

    if-eqz p1, :cond_0

    .line 87
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/d;

    const/4 p4, 0x1

    const-wide/16 p5, 0x0

    iget-wide p7, p8, Lcom/tkay/expressad/exoplayer/r;->c:J

    move-object p2, p1

    invoke-direct/range {p2 .. p8}, Lcom/tkay/expressad/exoplayer/h/d;-><init>(Lcom/tkay/expressad/exoplayer/h/r;ZJJ)V

    move-object p3, p1

    .line 94
    :cond_0
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/i/i;)V
    .locals 1

    .line 234
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->p:Lcom/tkay/expressad/exoplayer/i/i;

    if-eqz v0, :cond_0

    .line 235
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/q;->c(Lcom/tkay/expressad/exoplayer/i/i;)V

    .line 237
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/q;->p:Lcom/tkay/expressad/exoplayer/i/i;

    if-eqz p1, :cond_1

    .line 239
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/q;->b(Lcom/tkay/expressad/exoplayer/i/i;)V

    :cond_1
    return-void
.end method

.method private a([Lcom/tkay/expressad/exoplayer/h/y;)V
    .locals 3

    const/4 v0, 0x0

    .line 268
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/q;->m:[Lcom/tkay/expressad/exoplayer/z;

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 269
    aget-object v1, v1, v0

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/z;->a()I

    move-result v1

    const/4 v2, 0x5

    if-ne v1, v2, :cond_0

    const/4 v1, 0x0

    .line 270
    aput-object v1, p1, v0

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private b(F)V
    .locals 14

    const/4 v0, 0x1

    .line 142
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/q;->f:Z

    .line 143
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/r;->b()Lcom/tkay/expressad/exoplayer/h/af;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->j:Lcom/tkay/expressad/exoplayer/h/af;

    .line 144
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/q;->a(F)Z

    .line 145
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/r;->b:J

    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/q;->b(J)J

    move-result-wide v4

    .line 146
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/q;->e:J

    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/r;->b:J

    sub-long/2addr v2, v4

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/q;->e:J

    .line 147
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 3089
    new-instance v0, Lcom/tkay/expressad/exoplayer/r;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v6, p1, Lcom/tkay/expressad/exoplayer/r;->c:J

    iget-wide v8, p1, Lcom/tkay/expressad/exoplayer/r;->d:J

    iget-wide v10, p1, Lcom/tkay/expressad/exoplayer/r;->e:J

    iget-boolean v12, p1, Lcom/tkay/expressad/exoplayer/r;->f:Z

    iget-boolean v13, p1, Lcom/tkay/expressad/exoplayer/r;->g:Z

    move-object v2, v0

    invoke-direct/range {v2 .. v13}, Lcom/tkay/expressad/exoplayer/r;-><init>(Lcom/tkay/expressad/exoplayer/h/s$a;JJJJZZ)V

    .line 147
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    return-void
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/i/i;)V
    .locals 3

    const/4 v0, 0x0

    .line 244
    :goto_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/i/i;->a:I

    if-ge v0, v1, :cond_1

    .line 245
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v1

    .line 246
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/exoplayer/i/g;->a(I)Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object v2

    if-eqz v1, :cond_0

    if-eqz v2, :cond_0

    .line 248
    invoke-interface {v2}, Lcom/tkay/expressad/exoplayer/i/f;->a()V

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private b([Lcom/tkay/expressad/exoplayer/h/y;)V
    .locals 3

    const/4 v0, 0x0

    .line 280
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/q;->m:[Lcom/tkay/expressad/exoplayer/z;

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 281
    aget-object v1, v1, v0

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/z;->a()I

    move-result v1

    const/4 v2, 0x5

    if-ne v1, v2, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 282
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 283
    new-instance v1, Lcom/tkay/expressad/exoplayer/h/m;

    invoke-direct {v1}, Lcom/tkay/expressad/exoplayer/h/m;-><init>()V

    aput-object v1, p1, v0

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private c(J)J
    .locals 2

    .line 1106
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/q;->e:J

    add-long/2addr p1, v0

    return-wide p1
.end method

.method private static c(Lcom/tkay/expressad/exoplayer/i/i;)V
    .locals 2

    const/4 v0, 0x0

    .line 254
    :goto_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/i/i;->a:I

    if-ge v0, v1, :cond_0

    .line 255
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    .line 256
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/i/g;->a(I)Lcom/tkay/expressad/exoplayer/i/f;

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private d()J
    .locals 2

    .line 106
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/q;->e:J

    return-wide v0
.end method

.method private d(J)J
    .locals 2

    .line 2106
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/q;->e:J

    sub-long/2addr p1, v0

    return-wide p1
.end method

.method private e()J
    .locals 2

    .line 115
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/r;->e:J

    return-wide v0
.end method

.method private e(J)V
    .locals 3

    .line 151
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-eqz v0, :cond_0

    .line 152
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    .line 3106
    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/q;->e:J

    sub-long/2addr p1, v1

    .line 152
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/r;->a_(J)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(JZ[Z)J
    .locals 11

    const/4 v0, 0x0

    move v1, v0

    .line 183
    :goto_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/i/i;->a:I

    const/4 v3, 0x1

    if-ge v1, v2, :cond_1

    .line 184
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/q;->d:[Z

    if-nez p3, :cond_0

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/q;->p:Lcom/tkay/expressad/exoplayer/i/i;

    .line 185
    invoke-virtual {v4, v5, v1}, Lcom/tkay/expressad/exoplayer/i/i;->a(Lcom/tkay/expressad/exoplayer/i/i;I)Z

    move-result v4

    if-eqz v4, :cond_0

    goto :goto_1

    :cond_0
    move v3, v0

    :goto_1
    aput-boolean v3, v2, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 190
    :cond_1
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    invoke-direct {p0, p3}, Lcom/tkay/expressad/exoplayer/q;->a([Lcom/tkay/expressad/exoplayer/h/y;)V

    .line 191
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    invoke-direct {p0, p3}, Lcom/tkay/expressad/exoplayer/q;->a(Lcom/tkay/expressad/exoplayer/i/i;)V

    .line 193
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    iget-object p3, p3, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    .line 194
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    .line 196
    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/i/g;->a()[Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/q;->d:[Z

    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    move-object v8, p4

    move-wide v9, p1

    .line 195
    invoke-interface/range {v4 .. v10}, Lcom/tkay/expressad/exoplayer/h/r;->a([Lcom/tkay/expressad/exoplayer/i/f;[Z[Lcom/tkay/expressad/exoplayer/h/y;[ZJ)J

    move-result-wide p1

    .line 201
    iget-object p4, p0, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    invoke-direct {p0, p4}, Lcom/tkay/expressad/exoplayer/q;->b([Lcom/tkay/expressad/exoplayer/h/y;)V

    .line 204
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/q;->g:Z

    move p4, v0

    .line 205
    :goto_2
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    array-length v2, v1

    if-ge p4, v2, :cond_5

    .line 206
    aget-object v1, v1, p4

    if-eqz v1, :cond_2

    .line 207
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    invoke-virtual {v1, p4}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v1

    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 209
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/q;->m:[Lcom/tkay/expressad/exoplayer/z;

    aget-object v1, v1, p4

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/z;->a()I

    move-result v1

    const/4 v2, 0x5

    if-eq v1, v2, :cond_4

    .line 210
    iput-boolean v3, p0, Lcom/tkay/expressad/exoplayer/q;->g:Z

    goto :goto_4

    .line 213
    :cond_2
    invoke-virtual {p3, p4}, Lcom/tkay/expressad/exoplayer/i/g;->a(I)Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object v1

    if-nez v1, :cond_3

    move v1, v3

    goto :goto_3

    :cond_3
    move v1, v0

    :goto_3
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    :cond_4
    :goto_4
    add-int/lit8 p4, p4, 0x1

    goto :goto_2

    :cond_5
    return-wide p1
.end method

.method public final a(Z)J
    .locals 4

    .line 128
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-nez v0, :cond_0

    .line 129
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/r;->b:J

    return-wide v0

    .line 131
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/r;->d()J

    move-result-wide v0

    const-wide/high16 v2, -0x8000000000000000L

    cmp-long v2, v0, v2

    if-nez v2, :cond_1

    if-eqz p1, :cond_1

    .line 133
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/r;->e:J

    :cond_1
    return-wide v0
.end method

.method public final a(J)V
    .locals 2

    .line 4106
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/q;->e:J

    sub-long/2addr p1, v0

    .line 158
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/r;->c(J)Z

    return-void
.end method

.method public final a()Z
    .locals 4

    .line 110
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/q;->g:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    .line 111
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/r;->d()J

    move-result-wide v0

    const-wide/high16 v2, -0x8000000000000000L

    cmp-long v0, v0, v2

    if-nez v0, :cond_1

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public final a(F)Z
    .locals 4

    .line 162
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->n:Lcom/tkay/expressad/exoplayer/i/h;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/q;->m:[Lcom/tkay/expressad/exoplayer/z;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/q;->j:Lcom/tkay/expressad/exoplayer/h/af;

    .line 163
    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/i/h;->a([Lcom/tkay/expressad/exoplayer/z;Lcom/tkay/expressad/exoplayer/h/af;)Lcom/tkay/expressad/exoplayer/i/i;

    move-result-object v0

    .line 164
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/q;->p:Lcom/tkay/expressad/exoplayer/i/i;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/i/i;->a(Lcom/tkay/expressad/exoplayer/i/i;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    .line 167
    :cond_0
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 168
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/i/g;->a()[Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object v0

    array-length v1, v0

    :goto_0
    if-ge v2, v1, :cond_2

    aget-object v3, v0, v2

    if-eqz v3, :cond_1

    .line 170
    invoke-interface {v3, p1}, Lcom/tkay/expressad/exoplayer/i/f;->a(F)V

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    const/4 p1, 0x1

    return p1
.end method

.method public final b()J
    .locals 2

    .line 138
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-nez v0, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/r;->e()J

    move-result-wide v0

    return-wide v0
.end method

.method public final b(J)J
    .locals 2

    .line 177
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->m:[Lcom/tkay/expressad/exoplayer/z;

    array-length v0, v0

    new-array v0, v0, [Z

    const/4 v1, 0x0

    invoke-virtual {p0, p1, p2, v1, v0}, Lcom/tkay/expressad/exoplayer/q;->a(JZ[Z)J

    move-result-wide p1

    return-wide p1
.end method

.method public final c()V
    .locals 4

    const/4 v0, 0x0

    .line 220
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/q;->a(Lcom/tkay/expressad/exoplayer/i/i;)V

    .line 222
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/r;->c:J

    const-wide/high16 v2, -0x8000000000000000L

    cmp-long v0, v0, v2

    if-eqz v0, :cond_0

    .line 223
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->o:Lcom/tkay/expressad/exoplayer/h/s;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/d;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/d;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h/r;)V

    return-void

    .line 225
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/q;->o:Lcom/tkay/expressad/exoplayer/h/s;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h/r;)V
    :try_end_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    const-string v1, "MediaPeriodHolder"

    const-string v2, "Period release failed."

    .line 229
    invoke-static {v1, v2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return-void
.end method
