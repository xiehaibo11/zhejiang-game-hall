.class final Lcom/tkay/expressad/exoplayer/h/a/d;
.super Lcom/tkay/expressad/exoplayer/h/p;


# instance fields
.field private final c:Lcom/tkay/expressad/exoplayer/h/a/a;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/ae;Lcom/tkay/expressad/exoplayer/h/a/a;)V
    .locals 3

    .line 38
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/p;-><init>(Lcom/tkay/expressad/exoplayer/ae;)V

    .line 39
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 40
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result p1

    if-ne p1, v2, :cond_1

    move v1, v2

    :cond_1
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 41
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/d;->c:Lcom/tkay/expressad/exoplayer/h/a/a;

    return-void
.end method


# virtual methods
.method public final a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;
    .locals 10

    .line 46
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/d;->b:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    .line 47
    iget-object v2, p2, Lcom/tkay/expressad/exoplayer/ae$a;->a:Ljava/lang/Object;

    iget-object v3, p2, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    iget v4, p2, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    iget-wide v5, p2, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    .line 52
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/ae$a;->b()J

    move-result-wide v7

    iget-object v9, p0, Lcom/tkay/expressad/exoplayer/h/a/d;->c:Lcom/tkay/expressad/exoplayer/h/a/a;

    move-object v1, p2

    .line 47
    invoke-virtual/range {v1 .. v9}, Lcom/tkay/expressad/exoplayer/ae$a;->a(Ljava/lang/Object;Ljava/lang/Object;IJJLcom/tkay/expressad/exoplayer/h/a/a;)Lcom/tkay/expressad/exoplayer/ae$a;

    return-object p2
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/ae$b;ZJ)Lcom/tkay/expressad/exoplayer/ae$b;
    .locals 0

    .line 60
    invoke-super/range {p0 .. p5}, Lcom/tkay/expressad/exoplayer/h/p;->a(ILcom/tkay/expressad/exoplayer/ae$b;ZJ)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object p1

    .line 61
    iget-wide p2, p1, Lcom/tkay/expressad/exoplayer/ae$b;->i:J

    const-wide p4, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long p2, p2, p4

    if-nez p2, :cond_0

    .line 62
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/d;->c:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-wide p2, p2, Lcom/tkay/expressad/exoplayer/h/a/a;->k:J

    iput-wide p2, p1, Lcom/tkay/expressad/exoplayer/ae$b;->i:J

    :cond_0
    return-object p1
.end method
