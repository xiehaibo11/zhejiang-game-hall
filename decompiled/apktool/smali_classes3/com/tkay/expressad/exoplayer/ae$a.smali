.class public final Lcom/tkay/expressad/exoplayer/ae$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/ae;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# instance fields
.field public a:Ljava/lang/Object;

.field public b:Ljava/lang/Object;

.field public c:I

.field public d:J

.field private e:J

.field private f:Lcom/tkay/expressad/exoplayer/h/a/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 265
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private e()J
    .locals 2

    .line 343
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v0

    return-wide v0
.end method

.method private f()J
    .locals 2

    .line 350
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    return-wide v0
.end method


# virtual methods
.method public final a(II)I
    .locals 1

    .line 412
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object p1, v0, p1

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a(I)I

    move-result p1

    return p1
.end method

.method public final a(J)I
    .locals 7

    .line 434
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    .line 1292
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    array-length v1, v1

    add-int/lit8 v1, v1, -0x1

    :goto_0
    if-ltz v1, :cond_1

    .line 1293
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    aget-wide v3, v2, v1

    const-wide/high16 v5, -0x8000000000000000L

    cmp-long v2, v3, v5

    if-eqz v2, :cond_0

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    aget-wide v3, v2, v1

    cmp-long v2, v3, p1

    if-lez v2, :cond_1

    :cond_0
    add-int/lit8 v1, v1, -0x1

    goto :goto_0

    :cond_1
    if-ltz v1, :cond_2

    .line 1297
    iget-object p1, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object p1, p1, v1

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a()Z

    move-result p1

    if-eqz p1, :cond_2

    return v1

    :cond_2
    const/4 p1, -0x1

    return p1
.end method

.method public final a()J
    .locals 2

    .line 359
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->e:J

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v0

    return-wide v0
.end method

.method public final a(I)J
    .locals 3

    .line 386
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    aget-wide v1, v0, p1

    return-wide v1
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/Object;IJJLcom/tkay/expressad/exoplayer/h/a/a;)Lcom/tkay/expressad/exoplayer/ae$a;
    .locals 0

    .line 330
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/ae$a;->a:Ljava/lang/Object;

    .line 331
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 332
    iput p3, p0, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    .line 333
    iput-wide p4, p0, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    .line 334
    iput-wide p6, p0, Lcom/tkay/expressad/exoplayer/ae$a;->e:J

    .line 335
    iput-object p8, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    return-object p0
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/Object;JJ)Lcom/tkay/expressad/exoplayer/ae$a;
    .locals 9

    .line 305
    sget-object v8, Lcom/tkay/expressad/exoplayer/h/a/a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    const/4 v3, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-wide v4, p3

    move-wide v6, p5

    invoke-virtual/range {v0 .. v8}, Lcom/tkay/expressad/exoplayer/ae$a;->a(Ljava/lang/Object;Ljava/lang/Object;IJJLcom/tkay/expressad/exoplayer/h/a/a;)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p1

    return-object p1
.end method

.method public final b(I)I
    .locals 1

    .line 398
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object p1, v0, p1

    const/4 v0, -0x1

    .line 1078
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a(I)I

    move-result p1

    return p1
.end method

.method public final b(J)I
    .locals 7

    .line 445
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    const/4 v1, 0x0

    .line 1311
    :goto_0
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    array-length v2, v2

    if-ge v1, v2, :cond_1

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    aget-wide v3, v2, v1

    const-wide/high16 v5, -0x8000000000000000L

    cmp-long v2, v3, v5

    if-eqz v2, :cond_1

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    aget-wide v3, v2, v1

    cmp-long v2, p1, v3

    if-gez v2, :cond_0

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object v2, v2, v1

    .line 1313
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a()Z

    move-result v2

    if-nez v2, :cond_1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1316
    :cond_1
    iget-object p1, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->h:[J

    array-length p1, p1

    if-ge v1, p1, :cond_2

    return v1

    :cond_2
    const/4 p1, -0x1

    return p1
.end method

.method public final b()J
    .locals 2

    .line 368
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->e:J

    return-wide v0
.end method

.method public final b(II)Z
    .locals 2

    .line 467
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object p1, v0, p1

    .line 468
    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/h/a/a$a;->c:[I

    aget p1, p1, p2

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final c()I
    .locals 1

    .line 375
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->g:I

    return v0
.end method

.method public final c(II)J
    .locals 2

    .line 481
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object p1, v0, p1

    .line 482
    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/h/a/a$a;->d:[J

    aget-wide v0, p1, p2

    return-wide v0

    :cond_0
    const-wide p1, -0x7fffffffffffffffL    # -4.9E-324

    return-wide p1
.end method

.method public final c(I)Z
    .locals 1

    .line 422
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object p1, v0, p1

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a()Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final d(I)I
    .locals 1

    .line 456
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object p1, v0, p1

    iget p1, p1, Lcom/tkay/expressad/exoplayer/h/a/a$a;->a:I

    return p1
.end method

.method public final d()J
    .locals 2

    .line 490
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ae$a;->f:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->j:J

    return-wide v0
.end method
