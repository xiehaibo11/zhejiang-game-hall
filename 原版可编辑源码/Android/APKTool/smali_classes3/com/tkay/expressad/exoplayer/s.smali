.class final Lcom/tkay/expressad/exoplayer/s;
.super Ljava/lang/Object;


# static fields
.field private static final a:I = 0x64


# instance fields
.field private final b:Lcom/tkay/expressad/exoplayer/ae$a;

.field private final c:Lcom/tkay/expressad/exoplayer/ae$b;

.field private d:J

.field private e:Lcom/tkay/expressad/exoplayer/ae;

.field private f:I

.field private g:Z

.field private h:Lcom/tkay/expressad/exoplayer/q;

.field private i:Lcom/tkay/expressad/exoplayer/q;

.field private j:Lcom/tkay/expressad/exoplayer/q;

.field private k:I

.field private l:Ljava/lang/Object;

.field private m:J


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 60
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 61
    new-instance v0, Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/ae$a;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 62
    new-instance v0, Lcom/tkay/expressad/exoplayer/ae$b;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/ae$b;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->c:Lcom/tkay/expressad/exoplayer/ae$b;

    return-void
.end method

.method private a(IJJ)Lcom/tkay/expressad/exoplayer/h/s$a;
    .locals 7

    .line 393
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v2, 0x0

    .line 6750
    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    .line 394
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v0, p2, p3}, Lcom/tkay/expressad/exoplayer/ae$a;->a(J)I

    move-result v3

    const/4 p2, -0x1

    if-ne v3, p2, :cond_0

    .line 396
    new-instance p2, Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-direct {p2, p1, p4, p5}, Lcom/tkay/expressad/exoplayer/h/s$a;-><init>(IJ)V

    return-object p2

    .line 398
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {p2, v3}, Lcom/tkay/expressad/exoplayer/ae$a;->b(I)I

    move-result v4

    .line 399
    new-instance p2, Lcom/tkay/expressad/exoplayer/h/s$a;

    move-object v1, p2

    move v2, p1

    move-wide v5, p4

    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/h/s$a;-><init>(IIIJ)V

    return-object p2
.end method

.method private a(IIIJJ)Lcom/tkay/expressad/exoplayer/r;
    .locals 14

    move-object v0, p0

    .line 686
    new-instance v7, Lcom/tkay/expressad/exoplayer/h/s$a;

    move-object v1, v7

    move v2, p1

    move/from16 v3, p2

    move/from16 v4, p3

    move-wide/from16 v5, p6

    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/h/s$a;-><init>(IIIJ)V

    const-wide/high16 v1, -0x8000000000000000L

    .line 688
    invoke-direct {p0, v7, v1, v2}, Lcom/tkay/expressad/exoplayer/s;->b(Lcom/tkay/expressad/exoplayer/h/s$a;J)Z

    move-result v11

    .line 689
    invoke-direct {p0, v7, v11}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;Z)Z

    move-result v12

    .line 690
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget v2, v7, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v4, 0x0

    .line 13750
    invoke-virtual {v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v1

    .line 692
    iget v2, v7, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    iget v3, v7, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    .line 693
    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/exoplayer/ae$a;->c(II)J

    move-result-wide v9

    .line 695
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    move/from16 v2, p2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/ae$a;->b(I)I

    move-result v1

    move/from16 v2, p3

    if-ne v2, v1, :cond_0

    .line 696
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/ae$a;->d()J

    move-result-wide v1

    goto :goto_0

    :cond_0
    const-wide/16 v1, 0x0

    :goto_0
    move-wide v3, v1

    .line 698
    new-instance v13, Lcom/tkay/expressad/exoplayer/r;

    const-wide/high16 v5, -0x8000000000000000L

    move-object v1, v13

    move-object v2, v7

    move-wide/from16 v7, p4

    invoke-direct/range {v1 .. v12}, Lcom/tkay/expressad/exoplayer/r;-><init>(Lcom/tkay/expressad/exoplayer/h/s$a;JJJJZZ)V

    return-object v13
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/r;
    .locals 8

    .line 664
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget v1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v3, 0x0

    .line 12750
    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    .line 665
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 666
    iget-object p4, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    iget p5, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    invoke-virtual {p4, p5, v0}, Lcom/tkay/expressad/exoplayer/ae$a;->b(II)Z

    move-result p4

    if-nez p4, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 669
    :cond_0
    iget v1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget v2, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    iget-wide v6, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    move-object v0, p0

    move-wide v4, p2

    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/s;->a(IIIJJ)Lcom/tkay/expressad/exoplayer/r;

    move-result-object p1

    return-object p1

    .line 676
    :cond_1
    iget v1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-wide v4, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    move-object v0, p0

    move-wide v2, p4

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/s;->b(IJJ)Lcom/tkay/expressad/exoplayer/r;

    move-result-object p1

    return-object p1
.end method

.method private a(Lcom/tkay/expressad/exoplayer/q;J)Lcom/tkay/expressad/exoplayer/r;
    .locals 17

    move-object/from16 v8, p0

    move-object/from16 v0, p1

    .line 523
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 524
    iget-boolean v2, v1, Lcom/tkay/expressad/exoplayer/r;->f:Z

    const/4 v3, 0x1

    const/4 v4, 0x0

    const/4 v5, -0x1

    const/4 v6, 0x0

    if-eqz v2, :cond_4

    .line 525
    iget-object v9, v8, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v10, v2, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v11, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    iget-object v12, v8, Lcom/tkay/expressad/exoplayer/s;->c:Lcom/tkay/expressad/exoplayer/ae$b;

    iget v13, v8, Lcom/tkay/expressad/exoplayer/s;->f:I

    iget-boolean v14, v8, Lcom/tkay/expressad/exoplayer/s;->g:Z

    .line 526
    invoke-virtual/range {v9 .. v14}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Lcom/tkay/expressad/exoplayer/ae$b;IZ)I

    move-result v2

    if-ne v2, v5, :cond_0

    return-object v6

    .line 534
    :cond_0
    iget-object v5, v8, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v7, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 535
    invoke-virtual {v5, v2, v7, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v3

    iget v12, v3, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    .line 536
    iget-object v3, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 537
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v9, v5, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    .line 538
    iget-object v5, v8, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v7, v8, Lcom/tkay/expressad/exoplayer/s;->c:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 9621
    invoke-virtual {v5, v12, v7, v4}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object v4

    .line 538
    iget v4, v4, Lcom/tkay/expressad/exoplayer/ae$b;->f:I

    const-wide/16 v13, 0x0

    if-ne v4, v2, :cond_3

    .line 10106
    iget-wide v4, v0, Lcom/tkay/expressad/exoplayer/q;->e:J

    .line 545
    iget-wide v1, v1, Lcom/tkay/expressad/exoplayer/r;->e:J

    add-long/2addr v4, v1

    sub-long v4, v4, p2

    .line 546
    iget-object v9, v8, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v10, v8, Lcom/tkay/expressad/exoplayer/s;->c:Lcom/tkay/expressad/exoplayer/ae$b;

    iget-object v11, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    const-wide v1, -0x7fffffffffffffffL    # -4.9E-324

    .line 552
    invoke-static {v13, v14, v4, v5}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v15

    move-wide v13, v1

    .line 547
    invoke-virtual/range {v9 .. v16}, Lcom/tkay/expressad/exoplayer/ae;->a(Lcom/tkay/expressad/exoplayer/ae$b;Lcom/tkay/expressad/exoplayer/ae$a;IJJ)Landroid/util/Pair;

    move-result-object v1

    if-nez v1, :cond_1

    return-object v6

    .line 556
    :cond_1
    iget-object v2, v1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 557
    iget-object v1, v1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    .line 558
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v1, :cond_2

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    invoke-virtual {v1, v3}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 559
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    goto :goto_0

    .line 561
    :cond_2
    iget-wide v0, v8, Lcom/tkay/expressad/exoplayer/s;->d:J

    const-wide/16 v6, 0x1

    add-long/2addr v6, v0

    iput-wide v6, v8, Lcom/tkay/expressad/exoplayer/s;->d:J

    :goto_0
    move-wide v13, v4

    move-wide v4, v0

    move v1, v2

    goto :goto_1

    :cond_3
    move v1, v2

    move-wide v4, v9

    :goto_1
    move-object/from16 v0, p0

    move-wide v2, v13

    .line 567
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/s;->a(IJJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v1

    move-wide v4, v13

    .line 568
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v0

    return-object v0

    .line 571
    :cond_4
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 572
    iget-object v2, v8, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget v7, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v9, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 10750
    invoke-virtual {v2, v7, v9, v4}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    .line 573
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v2

    if-eqz v2, :cond_8

    .line 574
    iget v2, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    .line 575
    iget-object v3, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v3, v2}, Lcom/tkay/expressad/exoplayer/ae$a;->d(I)I

    move-result v3

    if-ne v3, v5, :cond_5

    return-object v6

    .line 579
    :cond_5
    iget-object v4, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    iget v5, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    .line 580
    invoke-virtual {v4, v2, v5}, Lcom/tkay/expressad/exoplayer/ae$a;->a(II)I

    move-result v4

    if-ge v4, v3, :cond_7

    .line 583
    iget-object v3, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v3, v2, v4}, Lcom/tkay/expressad/exoplayer/ae$a;->b(II)Z

    move-result v3

    if-nez v3, :cond_6

    return-object v6

    .line 585
    :cond_6
    iget v3, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-wide v5, v1, Lcom/tkay/expressad/exoplayer/r;->d:J

    iget-wide v9, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    move-object/from16 v0, p0

    move v1, v3

    move v3, v4

    move-wide v4, v5

    move-wide v6, v9

    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/s;->a(IIIJJ)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v0

    return-object v0

    .line 593
    :cond_7
    iget v2, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-wide v3, v1, Lcom/tkay/expressad/exoplayer/r;->d:J

    iget-wide v5, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    move-object/from16 v0, p0

    move v1, v2

    move-wide v2, v3

    move-wide v4, v5

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/s;->b(IJJ)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v0

    return-object v0

    .line 598
    :cond_8
    iget-wide v9, v1, Lcom/tkay/expressad/exoplayer/r;->c:J

    const-wide/high16 v11, -0x8000000000000000L

    cmp-long v2, v9, v11

    if-eqz v2, :cond_b

    .line 600
    iget-object v2, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    iget-wide v3, v1, Lcom/tkay/expressad/exoplayer/r;->c:J

    invoke-virtual {v2, v3, v4}, Lcom/tkay/expressad/exoplayer/ae$a;->a(J)I

    move-result v2

    if-ne v2, v5, :cond_9

    .line 603
    iget v2, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-wide v3, v1, Lcom/tkay/expressad/exoplayer/r;->c:J

    iget-wide v5, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    move-object/from16 v0, p0

    move v1, v2

    move-wide v2, v3

    move-wide v4, v5

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/s;->b(IJJ)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v0

    return-object v0

    .line 608
    :cond_9
    iget-object v3, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v3, v2}, Lcom/tkay/expressad/exoplayer/ae$a;->b(I)I

    move-result v3

    .line 609
    iget-object v4, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v4, v2, v3}, Lcom/tkay/expressad/exoplayer/ae$a;->b(II)Z

    move-result v4

    if-nez v4, :cond_a

    return-object v6

    .line 611
    :cond_a
    iget v4, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-wide v5, v1, Lcom/tkay/expressad/exoplayer/r;->c:J

    iget-wide v9, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    move-object/from16 v0, p0

    move v1, v4

    move-wide v4, v5

    move-wide v6, v9

    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/s;->a(IIIJJ)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v0

    return-object v0

    .line 619
    :cond_b
    iget-object v1, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/ae$a;->c()I

    move-result v1

    if-nez v1, :cond_c

    return-object v6

    :cond_c
    add-int/lit8 v2, v1, -0x1

    .line 624
    iget-object v1, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/ae$a;->a(I)J

    move-result-wide v3

    cmp-long v1, v3, v11

    if-nez v1, :cond_f

    iget-object v1, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 625
    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/ae$a;->c(I)Z

    move-result v1

    if-eqz v1, :cond_d

    goto :goto_2

    .line 628
    :cond_d
    iget-object v1, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/ae$a;->b(I)I

    move-result v3

    .line 629
    iget-object v1, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/exoplayer/ae$a;->b(II)Z

    move-result v1

    if-nez v1, :cond_e

    return-object v6

    .line 632
    :cond_e
    iget-object v1, v8, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 11350
    iget-wide v4, v1, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    .line 633
    iget v1, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-wide v6, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    move-object/from16 v0, p0

    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/s;->a(IIIJJ)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v0

    return-object v0

    :cond_f
    :goto_2
    return-object v6
.end method

.method private a(Lcom/tkay/expressad/exoplayer/r;Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/r;
    .locals 13

    .line 643
    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/r;->b:J

    .line 644
    iget-wide v4, p1, Lcom/tkay/expressad/exoplayer/r;->c:J

    .line 645
    invoke-direct {p0, p2, v4, v5}, Lcom/tkay/expressad/exoplayer/s;->b(Lcom/tkay/expressad/exoplayer/h/s$a;J)Z

    move-result v10

    .line 646
    invoke-direct {p0, p2, v10}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;Z)Z

    move-result v11

    .line 647
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget v1, p2, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v7, 0x0

    .line 11750
    invoke-virtual {v0, v1, v6, v7}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    .line 649
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 650
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    iget v1, p2, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    iget v6, p2, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    invoke-virtual {v0, v1, v6}, Lcom/tkay/expressad/exoplayer/ae$a;->c(II)J

    move-result-wide v0

    :goto_0
    move-wide v8, v0

    goto :goto_1

    :cond_0
    const-wide/high16 v0, -0x8000000000000000L

    cmp-long v0, v4, v0

    if-nez v0, :cond_1

    .line 651
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 12350
    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    goto :goto_0

    :cond_1
    move-wide v8, v4

    .line 652
    :goto_1
    new-instance v12, Lcom/tkay/expressad/exoplayer/r;

    iget-wide v6, p1, Lcom/tkay/expressad/exoplayer/r;->d:J

    move-object v0, v12

    move-object v1, p2

    invoke-direct/range {v0 .. v11}, Lcom/tkay/expressad/exoplayer/r;-><init>(Lcom/tkay/expressad/exoplayer/h/s$a;JJJJZZ)V

    return-object v12
.end method

.method private a(Lcom/tkay/expressad/exoplayer/u;)Lcom/tkay/expressad/exoplayer/r;
    .locals 6

    .line 504
    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/u;->e:J

    iget-wide v4, p1, Lcom/tkay/expressad/exoplayer/u;->d:J

    move-object v0, p0

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/r;

    move-result-object p1

    return-object p1
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/s$a;Z)Z
    .locals 10

    .line 749
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget v1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v3, 0x0

    .line 16750
    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v0

    .line 749
    iget v0, v0, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    .line 750
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/s;->c:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 17621
    invoke-virtual {v1, v0, v2, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object v0

    .line 750
    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/ae$b;->e:Z

    if-nez v0, :cond_0

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget v5, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/s;->c:Lcom/tkay/expressad/exoplayer/ae$b;

    iget v8, p0, Lcom/tkay/expressad/exoplayer/s;->f:I

    iget-boolean v9, p0, Lcom/tkay/expressad/exoplayer/s;->g:Z

    .line 751
    invoke-virtual/range {v4 .. v9}, Lcom/tkay/expressad/exoplayer/ae;->b(ILcom/tkay/expressad/exoplayer/ae$a;Lcom/tkay/expressad/exoplayer/ae$b;IZ)Z

    move-result p1

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    return v3
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/q;Lcom/tkay/expressad/exoplayer/r;)Z
    .locals 4

    .line 453
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 454
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/r;->b:J

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/r;->b:J

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/r;->c:J

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/r;->c:J

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 456
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/s$a;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private b(I)J
    .locals 6

    .line 412
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p1

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 413
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    .line 414
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->l:Ljava/lang/Object;

    const/4 v2, 0x0

    const/4 v3, -0x1

    if-eqz v1, :cond_0

    .line 415
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {v4, v1}, Lcom/tkay/expressad/exoplayer/ae;->a(Ljava/lang/Object;)I

    move-result v1

    if-eq v1, v3, :cond_0

    .line 417
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 7750
    invoke-virtual {v4, v1, v5, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v1

    .line 417
    iget v1, v1, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    if-ne v1, v0, :cond_0

    .line 420
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/s;->m:J

    return-wide v0

    .line 424
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/s;->e()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v1

    :goto_0
    if-eqz v1, :cond_2

    .line 426
    iget-object v4, v1, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    invoke-virtual {v4, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 428
    iget-object p1, v1, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    return-wide v0

    .line 430
    :cond_1
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    goto :goto_0

    .line 432
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/s;->e()Lcom/tkay/expressad/exoplayer/q;

    move-result-object p1

    :goto_1
    if-eqz p1, :cond_4

    .line 434
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v4, p1, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    invoke-virtual {v1, v4}, Lcom/tkay/expressad/exoplayer/ae;->a(Ljava/lang/Object;)I

    move-result v1

    if-eq v1, v3, :cond_3

    .line 436
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 8750
    invoke-virtual {v4, v1, v5, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v1

    .line 436
    iget v1, v1, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    if-ne v1, v0, :cond_3

    .line 439
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    return-wide v0

    .line 442
    :cond_3
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    goto :goto_1

    .line 445
    :cond_4
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/s;->d:J

    const-wide/16 v2, 0x1

    add-long/2addr v2, v0

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/s;->d:J

    return-wide v0
.end method

.method private b(IJJ)Lcom/tkay/expressad/exoplayer/r;
    .locals 16

    move-object/from16 v0, p0

    .line 710
    new-instance v2, Lcom/tkay/expressad/exoplayer/h/s$a;

    move/from16 v1, p1

    move-wide/from16 v3, p4

    invoke-direct {v2, v1, v3, v4}, Lcom/tkay/expressad/exoplayer/h/s$a;-><init>(IJ)V

    .line 711
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget v3, v2, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v5, 0x0

    .line 14750
    invoke-virtual {v1, v3, v4, v5}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    .line 712
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    move-wide/from16 v3, p2

    invoke-virtual {v1, v3, v4}, Lcom/tkay/expressad/exoplayer/ae$a;->b(J)I

    move-result v1

    const-wide/high16 v5, -0x8000000000000000L

    const/4 v7, -0x1

    if-ne v1, v7, :cond_0

    move-wide v7, v5

    goto :goto_0

    .line 716
    :cond_0
    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v7, v1}, Lcom/tkay/expressad/exoplayer/ae$a;->a(I)J

    move-result-wide v7

    .line 717
    :goto_0
    invoke-direct {v0, v2, v7, v8}, Lcom/tkay/expressad/exoplayer/s;->b(Lcom/tkay/expressad/exoplayer/h/s$a;J)Z

    move-result v11

    .line 718
    invoke-direct {v0, v2, v11}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;Z)Z

    move-result v12

    cmp-long v1, v7, v5

    if-nez v1, :cond_1

    .line 719
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 15350
    iget-wide v5, v1, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    move-wide v9, v5

    goto :goto_1

    :cond_1
    move-wide v9, v7

    .line 720
    :goto_1
    new-instance v13, Lcom/tkay/expressad/exoplayer/r;

    const-wide v14, -0x7fffffffffffffffL    # -4.9E-324

    move-object v1, v13

    move-wide/from16 v3, p2

    move-wide v5, v7

    move-wide v7, v14

    invoke-direct/range {v1 .. v12}, Lcom/tkay/expressad/exoplayer/r;-><init>(Lcom/tkay/expressad/exoplayer/h/s$a;JJJJZZ)V

    return-object v13
.end method

.method private b(Lcom/tkay/expressad/exoplayer/h/s$a;J)Z
    .locals 8

    .line 725
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget v1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v3, 0x0

    .line 15750
    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v0

    .line 725
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae$a;->c()I

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    :cond_0
    sub-int/2addr v0, v1

    .line 731
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v2

    .line 732
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v4, v0}, Lcom/tkay/expressad/exoplayer/ae$a;->a(I)J

    move-result-wide v4

    const-wide/high16 v6, -0x8000000000000000L

    cmp-long v4, v4, v6

    if-eqz v4, :cond_2

    if-nez v2, :cond_1

    cmp-long p1, p2, v6

    if-nez p1, :cond_1

    return v1

    :cond_1
    return v3

    .line 737
    :cond_2
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/exoplayer/ae$a;->d(I)I

    move-result p2

    const/4 p3, -0x1

    if-ne p2, p3, :cond_3

    return v3

    :cond_3
    if-eqz v2, :cond_4

    .line 743
    iget p3, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    if-ne p3, v0, :cond_4

    iget p1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    add-int/lit8 p3, p2, -0x1

    if-ne p1, p3, :cond_4

    move p1, v1

    goto :goto_0

    :cond_4
    move p1, v3

    :goto_0
    if-nez p1, :cond_6

    if-nez v2, :cond_5

    .line 745
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/ae$a;->b(I)I

    move-result p1

    if-ne p1, p2, :cond_5

    goto :goto_1

    :cond_5
    return v3

    :cond_6
    :goto_1
    return v1
.end method

.method private i()Z
    .locals 8

    .line 465
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/s;->e()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    .line 470
    :cond_0
    :goto_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/s;->c:Lcom/tkay/expressad/exoplayer/ae$b;

    iget v6, p0, Lcom/tkay/expressad/exoplayer/s;->f:I

    iget-boolean v7, p0, Lcom/tkay/expressad/exoplayer/s;->g:Z

    .line 471
    invoke-virtual/range {v2 .. v7}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Lcom/tkay/expressad/exoplayer/ae$b;IZ)I

    move-result v2

    .line 477
    :goto_1
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v3, :cond_1

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v3, v3, Lcom/tkay/expressad/exoplayer/r;->f:Z

    if-nez v3, :cond_1

    .line 479
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    goto :goto_1

    :cond_1
    const/4 v3, -0x1

    if-eq v2, v3, :cond_2

    .line 481
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v3, :cond_2

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    if-ne v3, v2, :cond_2

    .line 486
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    goto :goto_0

    .line 490
    :cond_2
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;)Z

    move-result v2

    .line 493
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 494
    invoke-direct {p0, v3, v4}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/r;Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v3

    iput-object v3, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    if-eqz v2, :cond_4

    .line 497
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v0

    if-nez v0, :cond_3

    goto :goto_2

    :cond_3
    const/4 v0, 0x0

    return v0

    :cond_4
    :goto_2
    return v1
.end method


# virtual methods
.method public final a([Lcom/tkay/expressad/exoplayer/z;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/j/b;Lcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/r;)Lcom/tkay/expressad/exoplayer/h/r;
    .locals 11

    move-object v0, p0

    .line 150
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    if-nez v1, :cond_0

    move-object/from16 v10, p6

    .line 151
    iget-wide v1, v10, Lcom/tkay/expressad/exoplayer/r;->b:J

    goto :goto_0

    :cond_0
    move-object/from16 v10, p6

    .line 3106
    iget-wide v1, v1, Lcom/tkay/expressad/exoplayer/q;->e:J

    .line 152
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v3, v3, Lcom/tkay/expressad/exoplayer/r;->e:J

    add-long/2addr v1, v3

    :goto_0
    move-wide v4, v1

    .line 153
    new-instance v1, Lcom/tkay/expressad/exoplayer/q;

    move-object v2, v1

    move-object v3, p1

    move-object v6, p2

    move-object v7, p3

    move-object v8, p4

    move-object/from16 v9, p5

    move-object/from16 v10, p6

    invoke-direct/range {v2 .. v10}, Lcom/tkay/expressad/exoplayer/q;-><init>([Lcom/tkay/expressad/exoplayer/z;JLcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/j/b;Lcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/r;)V

    .line 162
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v2, :cond_1

    .line 163
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v2

    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 164
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    iput-object v1, v2, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    :cond_1
    const/4 v2, 0x0

    .line 166
    iput-object v2, v0, Lcom/tkay/expressad/exoplayer/s;->l:Ljava/lang/Object;

    .line 167
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    .line 168
    iget v2, v0, Lcom/tkay/expressad/exoplayer/s;->k:I

    add-int/lit8 v2, v2, 0x1

    iput v2, v0, Lcom/tkay/expressad/exoplayer/s;->k:I

    .line 169
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    return-object v1
.end method

.method public final a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;
    .locals 10

    .line 4412
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v0

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 4413
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    .line 4414
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/s;->l:Ljava/lang/Object;

    const/4 v3, 0x0

    const/4 v4, -0x1

    if-eqz v2, :cond_0

    .line 4415
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {v5, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(Ljava/lang/Object;)I

    move-result v2

    if-eq v2, v4, :cond_0

    .line 4417
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 4750
    invoke-virtual {v5, v2, v6, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v2

    .line 4417
    iget v2, v2, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    if-ne v2, v1, :cond_0

    .line 4420
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/s;->m:J

    :goto_0
    move-wide v8, v0

    goto :goto_3

    .line 4424
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/s;->e()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v2

    :goto_1
    if-eqz v2, :cond_2

    .line 4426
    iget-object v5, v2, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    invoke-virtual {v5, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 4428
    iget-object v0, v2, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    goto :goto_0

    .line 4430
    :cond_1
    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    goto :goto_1

    .line 4432
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/s;->e()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    :goto_2
    if-eqz v0, :cond_4

    .line 4434
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    invoke-virtual {v2, v5}, Lcom/tkay/expressad/exoplayer/ae;->a(Ljava/lang/Object;)I

    move-result v2

    if-eq v2, v4, :cond_3

    .line 4436
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 5750
    invoke-virtual {v5, v2, v6, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v2

    .line 4436
    iget v2, v2, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    if-ne v2, v1, :cond_3

    .line 4439
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    goto :goto_0

    .line 4442
    :cond_3
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    goto :goto_2

    .line 4445
    :cond_4
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/s;->d:J

    const-wide/16 v2, 0x1

    add-long/2addr v2, v0

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/s;->d:J

    goto :goto_0

    :goto_3
    move-object v4, p0

    move v5, p1

    move-wide v6, p2

    .line 375
    invoke-direct/range {v4 .. v9}, Lcom/tkay/expressad/exoplayer/s;->a(IJJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object p1

    return-object p1
.end method

.method public final a(JLcom/tkay/expressad/exoplayer/u;)Lcom/tkay/expressad/exoplayer/r;
    .locals 7

    .line 126
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    if-nez v0, :cond_0

    .line 2504
    iget-object v2, p3, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v3, p3, Lcom/tkay/expressad/exoplayer/u;->e:J

    iget-wide v5, p3, Lcom/tkay/expressad/exoplayer/u;->d:J

    move-object v1, p0

    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/r;

    move-result-object p1

    return-object p1

    .line 128
    :cond_0
    invoke-direct {p0, v0, p1, p2}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;J)Lcom/tkay/expressad/exoplayer/r;

    move-result-object p1

    return-object p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/r;I)Lcom/tkay/expressad/exoplayer/r;
    .locals 1

    .line 360
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 361
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/exoplayer/h/s$a;->a(I)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object p2

    .line 360
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/r;Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/r;

    move-result-object p1

    return-object p1
.end method

.method public final a(J)V
    .locals 4

    .line 102
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v0, :cond_0

    .line 1151
    iget-boolean v1, v0, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-eqz v1, :cond_0

    .line 1152
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    .line 2106
    iget-wide v2, v0, Lcom/tkay/expressad/exoplayer/q;->e:J

    sub-long/2addr p1, v2

    .line 1152
    invoke-interface {v1, p1, p2}, Lcom/tkay/expressad/exoplayer/h/r;->a_(J)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/ae;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    return-void
.end method

.method public final a()Z
    .locals 4

    .line 109
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v0, :cond_1

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/r;->g:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    .line 111
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/q;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/r;->e:J

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v0, v2

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/tkay/expressad/exoplayer/s;->k:I

    const/16 v1, 0x64

    if-ge v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final a(I)Z
    .locals 0

    .line 78
    iput p1, p0, Lcom/tkay/expressad/exoplayer/s;->f:I

    .line 79
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/s;->i()Z

    move-result p1

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/r;)Z
    .locals 1

    .line 93
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    if-ne v0, p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/s$a;J)Z
    .locals 10

    .line 308
    iget p1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    .line 312
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/s;->e()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    const/4 v1, 0x0

    move v3, p1

    :goto_0
    const/4 p1, 0x1

    if-eqz v0, :cond_a

    if-nez v1, :cond_0

    .line 315
    iget-object p1, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    invoke-virtual {p0, p1, v3}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/r;I)Lcom/tkay/expressad/exoplayer/r;

    move-result-object p1

    iput-object p1, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    goto :goto_2

    :cond_0
    const/4 v2, -0x1

    const/4 v4, 0x0

    if-eq v3, v2, :cond_8

    .line 318
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 319
    invoke-virtual {v5, v3, v6, p1}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v5

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    invoke-virtual {v2, v5}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    goto :goto_3

    .line 324
    :cond_1
    invoke-direct {p0, v1, p2, p3}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;J)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v2

    if-nez v2, :cond_3

    .line 327
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;)Z

    move-result p2

    if-nez p2, :cond_2

    return p1

    :cond_2
    return v4

    .line 330
    :cond_3
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    invoke-virtual {p0, v5, v3}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/r;I)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v5

    iput-object v5, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 3453
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 3454
    iget-wide v6, v5, Lcom/tkay/expressad/exoplayer/r;->b:J

    iget-wide v8, v2, Lcom/tkay/expressad/exoplayer/r;->b:J

    cmp-long v6, v6, v8

    if-nez v6, :cond_4

    iget-wide v6, v5, Lcom/tkay/expressad/exoplayer/r;->c:J

    iget-wide v8, v2, Lcom/tkay/expressad/exoplayer/r;->c:J

    cmp-long v6, v6, v8

    if-nez v6, :cond_4

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 3456
    invoke-virtual {v5, v2}, Lcom/tkay/expressad/exoplayer/h/s$a;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    move v2, p1

    goto :goto_1

    :cond_4
    move v2, v4

    :goto_1
    if-nez v2, :cond_6

    .line 333
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;)Z

    move-result p2

    if-nez p2, :cond_5

    return p1

    :cond_5
    return v4

    .line 337
    :cond_6
    :goto_2
    iget-object p1, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean p1, p1, Lcom/tkay/expressad/exoplayer/r;->f:Z

    if-eqz p1, :cond_7

    .line 339
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/s;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/s;->b:Lcom/tkay/expressad/exoplayer/ae$a;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/s;->c:Lcom/tkay/expressad/exoplayer/ae$b;

    iget v6, p0, Lcom/tkay/expressad/exoplayer/s;->f:I

    iget-boolean v7, p0, Lcom/tkay/expressad/exoplayer/s;->g:Z

    .line 340
    invoke-virtual/range {v2 .. v7}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Lcom/tkay/expressad/exoplayer/ae$b;IZ)I

    move-result p1

    move v3, p1

    .line 345
    :cond_7
    iget-object p1, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    move-object v1, v0

    move-object v0, p1

    goto :goto_0

    .line 321
    :cond_8
    :goto_3
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;)Z

    move-result p2

    if-nez p2, :cond_9

    return p1

    :cond_9
    return v4

    :cond_a
    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/q;)Z
    .locals 3

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eqz p1, :cond_0

    move v2, v1

    goto :goto_0

    :cond_0
    move v2, v0

    .line 256
    :goto_0
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 258
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    .line 259
    :goto_1
    iget-object v2, p1, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v2, :cond_2

    .line 260
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    .line 261
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/s;->i:Lcom/tkay/expressad/exoplayer/q;

    if-ne p1, v2, :cond_1

    .line 262
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->i:Lcom/tkay/expressad/exoplayer/q;

    move v0, v1

    .line 265
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/q;->c()V

    .line 266
    iget v2, p0, Lcom/tkay/expressad/exoplayer/s;->k:I

    sub-int/2addr v2, v1

    iput v2, p0, Lcom/tkay/expressad/exoplayer/s;->k:I

    goto :goto_1

    .line 268
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    const/4 v1, 0x0

    iput-object v1, p1, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    return v0
.end method

.method public final a(Z)Z
    .locals 0

    .line 87
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/s;->g:Z

    .line 88
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/s;->i()Z

    move-result p1

    return p1
.end method

.method public final b()Lcom/tkay/expressad/exoplayer/q;
    .locals 1

    .line 177
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    return-object v0
.end method

.method public final b(Z)V
    .locals 4

    .line 279
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/s;->e()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    .line 281
    iget-object p1, v0, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    goto :goto_0

    :cond_0
    move-object p1, v1

    :goto_0
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/s;->l:Ljava/lang/Object;

    .line 282
    iget-object p1, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/s;->m:J

    .line 283
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/q;->c()V

    .line 284
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;)Z

    goto :goto_1

    :cond_1
    if-nez p1, :cond_2

    .line 286
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->l:Ljava/lang/Object;

    .line 288
    :cond_2
    :goto_1
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    .line 289
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    .line 290
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->i:Lcom/tkay/expressad/exoplayer/q;

    const/4 p1, 0x0

    .line 291
    iput p1, p0, Lcom/tkay/expressad/exoplayer/s;->k:I

    return-void
.end method

.method public final c()Lcom/tkay/expressad/exoplayer/q;
    .locals 1

    .line 185
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    return-object v0
.end method

.method public final d()Lcom/tkay/expressad/exoplayer/q;
    .locals 1

    .line 193
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->i:Lcom/tkay/expressad/exoplayer/q;

    return-object v0
.end method

.method public final e()Lcom/tkay/expressad/exoplayer/q;
    .locals 1

    .line 201
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    return-object v0
.end method

.method public final f()Z
    .locals 1

    .line 206
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final g()Lcom/tkay/expressad/exoplayer/q;
    .locals 1

    .line 215
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 216
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->i:Lcom/tkay/expressad/exoplayer/q;

    return-object v0
.end method

.method public final h()Lcom/tkay/expressad/exoplayer/q;
    .locals 2

    .line 228
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v0, :cond_2

    .line 229
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/s;->i:Lcom/tkay/expressad/exoplayer/q;

    if-ne v0, v1, :cond_0

    .line 230
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->i:Lcom/tkay/expressad/exoplayer/q;

    .line 232
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/q;->c()V

    .line 233
    iget v0, p0, Lcom/tkay/expressad/exoplayer/s;->k:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/s;->k:I

    if-nez v0, :cond_1

    const/4 v0, 0x0

    .line 235
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    .line 236
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->l:Ljava/lang/Object;

    .line 237
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/s;->m:J

    .line 239
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    goto :goto_0

    .line 241
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->j:Lcom/tkay/expressad/exoplayer/q;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    .line 242
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->i:Lcom/tkay/expressad/exoplayer/q;

    .line 244
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/s;->h:Lcom/tkay/expressad/exoplayer/q;

    return-object v0
.end method
