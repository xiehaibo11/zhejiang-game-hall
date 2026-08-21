.class public final Lcom/tkay/expressad/exoplayer/g/c/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/g/b;


# static fields
.field private static final a:I = 0x0

.field private static final b:I = 0x4

.field private static final c:I = 0x5

.field private static final d:I = 0x6

.field private static final e:I = 0xff


# instance fields
.field private final f:Lcom/tkay/expressad/exoplayer/k/s;

.field private final g:Lcom/tkay/expressad/exoplayer/k/r;

.field private h:Lcom/tkay/expressad/exoplayer/k/ac;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 45
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/s;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/k/s;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->f:Lcom/tkay/expressad/exoplayer/k/s;

    .line 46
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/r;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/k/r;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->g:Lcom/tkay/expressad/exoplayer/k/r;

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/g/e;)Lcom/tkay/expressad/exoplayer/g/a;
    .locals 7

    .line 52
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->h:Lcom/tkay/expressad/exoplayer/k/ac;

    if-eqz v0, :cond_0

    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/g/e;->g:J

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->h:Lcom/tkay/expressad/exoplayer/k/ac;

    .line 53
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/ac;->a()J

    move-result-wide v2

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    .line 54
    :cond_0
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/ac;

    iget-wide v1, p1, Lcom/tkay/expressad/exoplayer/g/e;->f:J

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/k/ac;-><init>(J)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->h:Lcom/tkay/expressad/exoplayer/k/ac;

    .line 55
    iget-wide v1, p1, Lcom/tkay/expressad/exoplayer/g/e;->f:J

    iget-wide v3, p1, Lcom/tkay/expressad/exoplayer/g/e;->g:J

    sub-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/k/ac;->b(J)J

    .line 58
    :cond_1
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/g/e;->e:Ljava/nio/ByteBuffer;

    .line 59
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    .line 60
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result p1

    .line 61
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->f:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v1, v0, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BI)V

    .line 62
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->g:Lcom/tkay/expressad/exoplayer/k/r;

    invoke-virtual {v1, v0, p1}, Lcom/tkay/expressad/exoplayer/k/r;->a([BI)V

    .line 65
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->g:Lcom/tkay/expressad/exoplayer/k/r;

    const/16 v0, 0x27

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 66
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->g:Lcom/tkay/expressad/exoplayer/k/r;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result p1

    int-to-long v1, p1

    const/16 p1, 0x20

    shl-long/2addr v1, p1

    .line 67
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->g:Lcom/tkay/expressad/exoplayer/k/r;

    invoke-virtual {v3, p1}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result p1

    int-to-long v3, p1

    or-long/2addr v1, v3

    .line 69
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->g:Lcom/tkay/expressad/exoplayer/k/r;

    const/16 v3, 0x14

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/exoplayer/k/r;->b(I)V

    .line 70
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->g:Lcom/tkay/expressad/exoplayer/k/r;

    const/16 v3, 0xc

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result p1

    .line 71
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->g:Lcom/tkay/expressad/exoplayer/k/r;

    const/16 v4, 0x8

    invoke-virtual {v3, v4}, Lcom/tkay/expressad/exoplayer/k/r;->c(I)I

    move-result v3

    const/4 v4, 0x0

    .line 74
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->f:Lcom/tkay/expressad/exoplayer/k/s;

    const/16 v6, 0xe

    invoke-virtual {v5, v6}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    if-eqz v3, :cond_6

    const/16 v5, 0xff

    if-eq v3, v5, :cond_5

    const/4 p1, 0x4

    if-eq v3, p1, :cond_4

    const/4 p1, 0x5

    if-eq v3, p1, :cond_3

    const/4 p1, 0x6

    if-eq v3, p1, :cond_2

    goto :goto_0

    .line 87
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->f:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->h:Lcom/tkay/expressad/exoplayer/k/ac;

    invoke-static {p1, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/g/c/g;->a(Lcom/tkay/expressad/exoplayer/k/s;JLcom/tkay/expressad/exoplayer/k/ac;)Lcom/tkay/expressad/exoplayer/g/c/g;

    move-result-object v4

    goto :goto_0

    .line 83
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->f:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->h:Lcom/tkay/expressad/exoplayer/k/ac;

    invoke-static {p1, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/g/c/d;->a(Lcom/tkay/expressad/exoplayer/k/s;JLcom/tkay/expressad/exoplayer/k/ac;)Lcom/tkay/expressad/exoplayer/g/c/d;

    move-result-object v4

    goto :goto_0

    .line 80
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->f:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/g/c/f;->a(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/g/c/f;

    move-result-object v4

    goto :goto_0

    .line 90
    :cond_5
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/g/c/c;->f:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-static {v3, p1, v1, v2}, Lcom/tkay/expressad/exoplayer/g/c/a;->a(Lcom/tkay/expressad/exoplayer/k/s;IJ)Lcom/tkay/expressad/exoplayer/g/c/a;

    move-result-object v4

    goto :goto_0

    .line 77
    :cond_6
    new-instance v4, Lcom/tkay/expressad/exoplayer/g/c/e;

    invoke-direct {v4}, Lcom/tkay/expressad/exoplayer/g/c/e;-><init>()V

    :goto_0
    const/4 p1, 0x0

    if-nez v4, :cond_7

    .line 96
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/a;

    new-array p1, p1, [Lcom/tkay/expressad/exoplayer/g/a$a;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/g/a;-><init>([Lcom/tkay/expressad/exoplayer/g/a$a;)V

    return-object v0

    :cond_7
    new-instance v1, Lcom/tkay/expressad/exoplayer/g/a;

    new-array v0, v0, [Lcom/tkay/expressad/exoplayer/g/a$a;

    aput-object v4, v0, p1

    invoke-direct {v1, v0}, Lcom/tkay/expressad/exoplayer/g/a;-><init>([Lcom/tkay/expressad/exoplayer/g/a$a;)V

    return-object v1
.end method
