.class public final Lcom/tkay/expressad/exoplayer/g/a/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/g/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/g/e;)Lcom/tkay/expressad/exoplayer/g/a;
    .locals 16

    move-object/from16 v0, p1

    .line 38
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/g/e;->e:Ljava/nio/ByteBuffer;

    .line 39
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v1

    .line 40
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->limit()I

    move-result v0

    .line 41
    new-instance v2, Lcom/tkay/expressad/exoplayer/k/s;

    invoke-direct {v2, v1, v0}, Lcom/tkay/expressad/exoplayer/k/s;-><init>([BI)V

    .line 42
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->p()Ljava/lang/String;

    move-result-object v4

    .line 43
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->p()Ljava/lang/String;

    move-result-object v5

    .line 44
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v12

    .line 45
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v6

    const-wide/32 v8, 0xf4240

    move-wide v10, v12

    invoke-static/range {v6 .. v11}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v14

    .line 47
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v6

    const-wide/16 v8, 0x3e8

    invoke-static/range {v6 .. v11}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v6

    .line 48
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v8

    .line 49
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v2

    invoke-static {v1, v2, v0}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object v10

    .line 50
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/a;

    const/4 v1, 0x1

    new-array v1, v1, [Lcom/tkay/expressad/exoplayer/g/a$a;

    new-instance v2, Lcom/tkay/expressad/exoplayer/g/a/a;

    move-object v3, v2

    move-wide v11, v14

    invoke-direct/range {v3 .. v12}, Lcom/tkay/expressad/exoplayer/g/a/a;-><init>(Ljava/lang/String;Ljava/lang/String;JJ[BJ)V

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/g/a;-><init>([Lcom/tkay/expressad/exoplayer/g/a$a;)V

    return-object v0
.end method
