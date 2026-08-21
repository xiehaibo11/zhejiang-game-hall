.class final Lcom/tkay/expressad/exoplayer/e/a/e$c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/e/a/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "c"
.end annotation


# instance fields
.field public final a:Lcom/tkay/expressad/exoplayer/e/m;

.field public final b:Lcom/tkay/expressad/exoplayer/e/a/l;

.field public c:Lcom/tkay/expressad/exoplayer/e/a/j;

.field public d:Lcom/tkay/expressad/exoplayer/e/a/c;

.field public e:I

.field public f:I

.field public g:I

.field public h:I

.field private final i:Lcom/tkay/expressad/exoplayer/k/s;

.field private final j:Lcom/tkay/expressad/exoplayer/k/s;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/e/m;)V
    .locals 1

    .line 1416
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1417
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->a:Lcom/tkay/expressad/exoplayer/e/m;

    .line 1418
    new-instance p1, Lcom/tkay/expressad/exoplayer/e/a/l;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/e/a/l;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    .line 1419
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v0, 0x1

    invoke-direct {p1, v0}, Lcom/tkay/expressad/exoplayer/k/s;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->i:Lcom/tkay/expressad/exoplayer/k/s;

    .line 1420
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/s;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/k/s;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->j:Lcom/tkay/expressad/exoplayer/k/s;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/e/a/e$c;)V
    .locals 3

    .line 2530
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/e/a/l;->m:Z

    if-eqz v0, :cond_1

    .line 2534
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/e/a/l;->q:Lcom/tkay/expressad/exoplayer/k/s;

    .line 2535
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/e/a/e$c;->e()Lcom/tkay/expressad/exoplayer/e/a/k;

    move-result-object v1

    .line 2536
    iget v2, v1, Lcom/tkay/expressad/exoplayer/e/a/k;->d:I

    if-eqz v2, :cond_0

    .line 2537
    iget v1, v1, Lcom/tkay/expressad/exoplayer/e/a/k;->d:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 2539
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/l;->n:[Z

    iget p0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->e:I

    aget-boolean p0, v1, p0

    if-eqz p0, :cond_1

    .line 2540
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result p0

    mul-int/lit8 p0, p0, 0x6

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    :cond_1
    return-void
.end method

.method private d()V
    .locals 3

    .line 1530
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/e/a/l;->m:Z

    if-nez v0, :cond_0

    return-void

    .line 1534
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/e/a/l;->q:Lcom/tkay/expressad/exoplayer/k/s;

    .line 1535
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/e/a/e$c;->e()Lcom/tkay/expressad/exoplayer/e/a/k;

    move-result-object v1

    .line 1536
    iget v2, v1, Lcom/tkay/expressad/exoplayer/e/a/k;->d:I

    if-eqz v2, :cond_1

    .line 1537
    iget v1, v1, Lcom/tkay/expressad/exoplayer/e/a/k;->d:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 1539
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/l;->n:[Z

    iget v2, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->e:I

    aget-boolean v1, v1, v2

    if-eqz v1, :cond_2

    .line 1540
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v1

    mul-int/lit8 v1, v1, 0x6

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    :cond_2
    return-void
.end method

.method private e()Lcom/tkay/expressad/exoplayer/e/a/k;
    .locals 2

    .line 1545
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/e/a/l;->a:Lcom/tkay/expressad/exoplayer/e/a/c;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/e/a/c;->a:I

    .line 1546
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/l;->o:Lcom/tkay/expressad/exoplayer/e/a/k;

    if-eqz v1, :cond_0

    .line 1547
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/e/a/l;->o:Lcom/tkay/expressad/exoplayer/e/a/k;

    return-object v0

    .line 1548
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->c:Lcom/tkay/expressad/exoplayer/e/a/j;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/e/a/j;->a(I)Lcom/tkay/expressad/exoplayer/e/a/k;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 1439
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/e/a/l;->a()V

    const/4 v0, 0x0

    .line 1440
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->e:I

    .line 1441
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->g:I

    .line 1442
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->f:I

    .line 1443
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->h:I

    return-void
.end method

.method public final a(J)V
    .locals 3

    .line 1453
    invoke-static {p1, p2}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide p1

    .line 1454
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->e:I

    .line 1455
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/e/a/l;->f:I

    if-ge v0, v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    .line 1456
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/e/a/l;->b(I)J

    move-result-wide v1

    cmp-long v1, v1, p1

    if-gez v1, :cond_1

    .line 1457
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/l;->l:[Z

    aget-boolean v1, v1, v0

    if-eqz v1, :cond_0

    .line 1458
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->h:I

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/d/e;)V
    .locals 3

    .line 1431
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->c:Lcom/tkay/expressad/exoplayer/e/a/j;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/l;->a:Lcom/tkay/expressad/exoplayer/e/a/c;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/e/a/c;->a:I

    .line 1432
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/e/a/j;->a(I)Lcom/tkay/expressad/exoplayer/e/a/k;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1433
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/e/a/k;->b:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 1434
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->a:Lcom/tkay/expressad/exoplayer/e/m;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->c:Lcom/tkay/expressad/exoplayer/e/a/j;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->h:Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/d/e;->a(Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/d/e;

    move-result-object p1

    invoke-virtual {v2, p1}, Lcom/tkay/expressad/exoplayer/m;->a(Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object p1

    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/m;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/e/a/j;Lcom/tkay/expressad/exoplayer/e/a/c;)V
    .locals 1

    .line 1424
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/e/a/j;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->c:Lcom/tkay/expressad/exoplayer/e/a/j;

    .line 1425
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/expressad/exoplayer/e/a/c;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->d:Lcom/tkay/expressad/exoplayer/e/a/c;

    .line 1426
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->a:Lcom/tkay/expressad/exoplayer/e/m;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/e/a/j;->h:Lcom/tkay/expressad/exoplayer/m;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/m;)V

    .line 1427
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/e/a/e$c;->a()V

    return-void
.end method

.method public final b()Z
    .locals 4

    .line 1473
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->e:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->e:I

    .line 1474
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->f:I

    add-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->f:I

    .line 1475
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/e/a/l;->h:[I

    iget v3, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->g:I

    aget v2, v2, v3

    if-ne v0, v2, :cond_0

    add-int/2addr v3, v1

    .line 1476
    iput v3, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->g:I

    const/4 v0, 0x0

    .line 1477
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->f:I

    return v0

    :cond_0
    return v1
.end method

.method public final c()I
    .locals 6

    .line 1489
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/e/a/l;->m:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 1493
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/e/a/e$c;->e()Lcom/tkay/expressad/exoplayer/e/a/k;

    move-result-object v0

    .line 1496
    iget v2, v0, Lcom/tkay/expressad/exoplayer/e/a/k;->d:I

    if-eqz v2, :cond_1

    .line 1497
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/e/a/l;->q:Lcom/tkay/expressad/exoplayer/k/s;

    .line 1498
    iget v0, v0, Lcom/tkay/expressad/exoplayer/e/a/k;->d:I

    goto :goto_0

    .line 1501
    :cond_1
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/e/a/k;->e:[B

    .line 1502
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->j:Lcom/tkay/expressad/exoplayer/k/s;

    array-length v3, v0

    invoke-virtual {v2, v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->a([BI)V

    .line 1503
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->j:Lcom/tkay/expressad/exoplayer/k/s;

    .line 1504
    array-length v0, v0

    .line 1507
    :goto_0
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/e/a/l;->n:[Z

    iget v4, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->e:I

    aget-boolean v3, v3, v4

    .line 1510
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->i:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    if-eqz v3, :cond_2

    const/16 v5, 0x80

    goto :goto_1

    :cond_2
    move v5, v1

    :goto_1
    or-int/2addr v5, v0

    int-to-byte v5, v5

    aput-byte v5, v4, v1

    .line 1511
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->i:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v4, v1}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 1512
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->a:Lcom/tkay/expressad/exoplayer/e/m;

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->i:Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v5, 0x1

    invoke-interface {v1, v4, v5}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/k/s;I)V

    .line 1514
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->a:Lcom/tkay/expressad/exoplayer/e/m;

    invoke-interface {v1, v2, v0}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/k/s;I)V

    if-nez v3, :cond_3

    add-int/2addr v0, v5

    return v0

    .line 1520
    :cond_3
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->b:Lcom/tkay/expressad/exoplayer/e/a/l;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/l;->q:Lcom/tkay/expressad/exoplayer/k/s;

    .line 1521
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v2

    const/4 v3, -0x2

    .line 1522
    invoke-virtual {v1, v3}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    mul-int/lit8 v2, v2, 0x6

    add-int/lit8 v2, v2, 0x2

    .line 1524
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/e/a/e$c;->a:Lcom/tkay/expressad/exoplayer/e/m;

    invoke-interface {v3, v1, v2}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/k/s;I)V

    add-int/2addr v0, v5

    add-int/2addr v0, v2

    return v0
.end method
