.class public abstract Lcom/tkay/expressad/exoplayer/ae;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/ae$a;,
        Lcom/tkay/expressad/exoplayer/ae$b;
    }
.end annotation


# static fields
.field public static final a:Lcom/tkay/expressad/exoplayer/ae;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 496
    new-instance v0, Lcom/tkay/expressad/exoplayer/ae$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/ae$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/ae;->a:Lcom/tkay/expressad/exoplayer/ae;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 109
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(ILcom/tkay/expressad/exoplayer/ae$a;)Lcom/tkay/expressad/exoplayer/ae$a;
    .locals 1

    const/4 v0, 0x0

    .line 750
    invoke-virtual {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p1

    return-object p1
.end method

.method private a(ILcom/tkay/expressad/exoplayer/ae$b;)Lcom/tkay/expressad/exoplayer/ae$b;
    .locals 1

    const/4 v0, 0x0

    .line 621
    invoke-virtual {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public a(IIZ)I
    .locals 2

    const/4 v0, 0x1

    if-eqz p2, :cond_3

    if-eq p2, v0, :cond_2

    const/4 v1, 0x2

    if-ne p2, v1, :cond_1

    .line 556
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/ae;->a(Z)I

    move-result p2

    if-ne p1, p2, :cond_0

    .line 557
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/ae;->b(Z)I

    move-result p1

    return p1

    :cond_0
    add-int/2addr p1, v0

    return p1

    .line 559
    :cond_1
    new-instance p1, Ljava/lang/IllegalStateException;

    invoke-direct {p1}, Ljava/lang/IllegalStateException;-><init>()V

    throw p1

    :cond_2
    return p1

    .line 551
    :cond_3
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/ae;->a(Z)I

    move-result p2

    if-ne p1, p2, :cond_4

    const/4 p1, -0x1

    return p1

    :cond_4
    add-int/2addr p1, v0

    return p1
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/ae$a;Lcom/tkay/expressad/exoplayer/ae$b;IZ)I
    .locals 2

    const/4 v0, 0x0

    .line 1750
    invoke-virtual {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p2

    .line 669
    iget p2, p2, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    .line 2621
    invoke-virtual {p0, p2, p3, v0}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object v1

    .line 670
    iget v1, v1, Lcom/tkay/expressad/exoplayer/ae$b;->g:I

    if-ne v1, p1, :cond_1

    .line 671
    invoke-virtual {p0, p2, p4, p5}, Lcom/tkay/expressad/exoplayer/ae;->a(IIZ)I

    move-result p1

    const/4 p2, -0x1

    if-ne p1, p2, :cond_0

    return p2

    .line 3621
    :cond_0
    invoke-virtual {p0, p1, p3, v0}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object p1

    .line 675
    iget p1, p1, Lcom/tkay/expressad/exoplayer/ae$b;->f:I

    return p1

    :cond_1
    add-int/lit8 p1, p1, 0x1

    return p1
.end method

.method public abstract a(Ljava/lang/Object;)I
.end method

.method public a(Z)I
    .locals 0

    .line 597
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result p1

    add-int/lit8 p1, p1, -0x1

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/ae$b;Lcom/tkay/expressad/exoplayer/ae$a;IJ)Landroid/util/Pair;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/ae$b;",
            "Lcom/tkay/expressad/exoplayer/ae$a;",
            "IJ)",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation

    const-wide/16 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move v3, p3

    move-wide v4, p4

    .line 703
    invoke-virtual/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/ae;->a(Lcom/tkay/expressad/exoplayer/ae$b;Lcom/tkay/expressad/exoplayer/ae$a;IJJ)Landroid/util/Pair;

    move-result-object p1

    return-object p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/ae$b;Lcom/tkay/expressad/exoplayer/ae$a;IJJ)Landroid/util/Pair;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/ae$b;",
            "Lcom/tkay/expressad/exoplayer/ae$a;",
            "IJJ)",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation

    .line 722
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result v0

    invoke-static {p3, v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(II)I

    const/4 v4, 0x0

    move-object v1, p0

    move v2, p3

    move-object v3, p1

    move-wide v5, p6

    .line 723
    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;ZJ)Lcom/tkay/expressad/exoplayer/ae$b;

    const-wide p6, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long p3, p4, p6

    if-nez p3, :cond_0

    .line 4219
    iget-wide p4, p1, Lcom/tkay/expressad/exoplayer/ae$b;->h:J

    cmp-long p3, p4, p6

    if-nez p3, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 730
    :cond_0
    iget p3, p1, Lcom/tkay/expressad/exoplayer/ae$b;->f:I

    .line 4249
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/ae$b;->j:J

    add-long/2addr v0, p4

    const/4 p4, 0x0

    .line 4750
    invoke-virtual {p0, p3, p2, p4}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p5

    .line 5350
    iget-wide v2, p5, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    :goto_0
    cmp-long p5, v2, p6

    if-eqz p5, :cond_1

    cmp-long p5, v0, v2

    if-ltz p5, :cond_1

    .line 733
    iget p5, p1, Lcom/tkay/expressad/exoplayer/ae$b;->g:I

    if-ge p3, p5, :cond_1

    sub-long/2addr v0, v2

    add-int/lit8 p3, p3, 0x1

    .line 5750
    invoke-virtual {p0, p3, p2, p4}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p5

    .line 6350
    iget-wide v2, p5, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    goto :goto_0

    .line 738
    :cond_1
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    invoke-static {p1, p2}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p1

    return-object p1
.end method

.method public abstract a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;
    .locals 6

    const-wide/16 v4, 0x0

    move-object v0, p0

    move v1, p1

    move-object v2, p2

    move v3, p3

    .line 634
    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;ZJ)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object p1

    return-object p1
.end method

.method public abstract a(ILcom/tkay/expressad/exoplayer/ae$b;ZJ)Lcom/tkay/expressad/exoplayer/ae$b;
.end method

.method public final a()Z
    .locals 1

    .line 530
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public abstract b()I
.end method

.method public b(IIZ)I
    .locals 2

    const/4 v0, 0x1

    if-eqz p2, :cond_3

    if-eq p2, v0, :cond_2

    const/4 v1, 0x2

    if-ne p2, v1, :cond_1

    .line 581
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/ae;->b(Z)I

    move-result p2

    if-ne p1, p2, :cond_0

    .line 582
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/ae;->a(Z)I

    move-result p1

    return p1

    :cond_0
    sub-int/2addr p1, v0

    return p1

    .line 584
    :cond_1
    new-instance p1, Ljava/lang/IllegalStateException;

    invoke-direct {p1}, Ljava/lang/IllegalStateException;-><init>()V

    throw p1

    :cond_2
    return p1

    .line 576
    :cond_3
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/ae;->b(Z)I

    move-result p2

    if-ne p1, p2, :cond_4

    const/4 p1, -0x1

    return p1

    :cond_4
    sub-int/2addr p1, v0

    return p1
.end method

.method public b(Z)I
    .locals 0

    .line 609
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final b(ILcom/tkay/expressad/exoplayer/ae$a;Lcom/tkay/expressad/exoplayer/ae$b;IZ)Z
    .locals 0

    .line 693
    invoke-virtual/range {p0 .. p5}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Lcom/tkay/expressad/exoplayer/ae$b;IZ)I

    move-result p1

    const/4 p2, -0x1

    if-ne p1, p2, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public abstract c()I
.end method
