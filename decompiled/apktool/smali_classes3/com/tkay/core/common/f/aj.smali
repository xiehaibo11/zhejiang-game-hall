.class public Lcom/tkay/core/common/f/aj;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Comparable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/lang/Comparable<",
        "Lcom/tkay/core/common/f/aj;",
        ">;"
    }
.end annotation


# instance fields
.field private A:Ljava/lang/String;

.field private B:I

.field private C:J

.field private D:J

.field private E:J

.field private F:J

.field private G:I

.field private H:Ljava/lang/String;

.field private I:J

.field private J:J

.field private K:J

.field private L:J

.field private M:I

.field private N:I

.field private O:I

.field private P:I

.field private Q:Ljava/lang/String;

.field private R:J

.field private S:J

.field private T:D

.field private U:I

.field private V:I

.field private W:I

.field private X:I

.field private Y:I

.field private Z:I

.field a:I

.field private aa:Lcom/tkay/core/common/f/l;

.field private ab:I

.field private ac:I

.field private ad:Ljava/lang/String;

.field private ae:I

.field private af:I

.field private ag:I

.field private ah:Lcom/tkay/core/api/TYAdConst$CURRENCY;

.field b:I

.field c:I

.field d:I

.field e:Ljava/lang/String;

.field f:I

.field g:I

.field h:D

.field i:I

.field j:D

.field k:Ljava/lang/String;

.field l:Z

.field private m:I

.field private n:Ljava/lang/String;

.field private o:I

.field private p:I

.field private q:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;

.field private t:J

.field private u:Ljava/lang/String;

.field private v:I

.field private w:I

.field private x:D

.field private y:I

.field private z:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 285
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 237
    iput v0, p0, Lcom/tkay/core/common/f/aj;->b:I

    const/4 v0, -0x1

    .line 258
    iput v0, p0, Lcom/tkay/core/common/f/aj;->ag:I

    .line 264
    sget-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->USD:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    iput-object v0, p0, Lcom/tkay/core/common/f/aj;->ah:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-void
.end method

.method private A(I)V
    .locals 0

    .line 548
    iput p1, p0, Lcom/tkay/core/common/f/aj;->O:I

    return-void
.end method

.method private B(I)V
    .locals 0

    .line 628
    iput p1, p0, Lcom/tkay/core/common/f/aj;->ab:I

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/aj;)I
    .locals 4

    .line 722
    invoke-static {p0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v2

    cmpl-double p1, v0, v2

    if-lez p1, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    const/4 p1, 0x1

    return p1
.end method

.method private a(Lcom/tkay/core/common/f/l;)V
    .locals 0

    .line 620
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->aa:Lcom/tkay/core/common/f/l;

    return-void
.end method

.method private aj()J
    .locals 2

    .line 488
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->I:J

    return-wide v0
.end method

.method private ak()I
    .locals 1

    .line 544
    iget v0, p0, Lcom/tkay/core/common/f/aj;->O:I

    return v0
.end method

.method private l(Ljava/lang/String;)V
    .locals 0

    .line 644
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->ad:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final A()J
    .locals 2

    .line 516
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->J:J

    return-wide v0
.end method

.method public final B()J
    .locals 2

    .line 524
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->K:J

    return-wide v0
.end method

.method public final C()I
    .locals 1

    .line 528
    iget v0, p0, Lcom/tkay/core/common/f/aj;->M:I

    return v0
.end method

.method public final D()I
    .locals 1

    .line 536
    iget v0, p0, Lcom/tkay/core/common/f/aj;->N:I

    return v0
.end method

.method public final E()I
    .locals 1

    .line 552
    iget v0, p0, Lcom/tkay/core/common/f/aj;->P:I

    return v0
.end method

.method public final F()Ljava/lang/String;
    .locals 1

    .line 560
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->Q:Ljava/lang/String;

    return-object v0
.end method

.method public final G()J
    .locals 2

    .line 572
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->R:J

    return-wide v0
.end method

.method public final H()J
    .locals 2

    .line 576
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->S:J

    return-wide v0
.end method

.method public final I()D
    .locals 2

    .line 584
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->T:D

    return-wide v0
.end method

.method public final J()I
    .locals 1

    .line 592
    iget v0, p0, Lcom/tkay/core/common/f/aj;->U:I

    return v0
.end method

.method public final K()I
    .locals 1

    .line 600
    iget v0, p0, Lcom/tkay/core/common/f/aj;->V:I

    return v0
.end method

.method public final L()Z
    .locals 2

    .line 608
    iget v0, p0, Lcom/tkay/core/common/f/aj;->W:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final M()Lcom/tkay/core/common/f/l;
    .locals 1

    .line 616
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->aa:Lcom/tkay/core/common/f/l;

    return-object v0
.end method

.method public final N()I
    .locals 1

    .line 624
    iget v0, p0, Lcom/tkay/core/common/f/aj;->ab:I

    return v0
.end method

.method public final O()I
    .locals 1

    .line 632
    iget v0, p0, Lcom/tkay/core/common/f/aj;->ac:I

    return v0
.end method

.method public final P()V
    .locals 1

    const/4 v0, 0x1

    .line 636
    iput v0, p0, Lcom/tkay/core/common/f/aj;->ac:I

    return-void
.end method

.method public final Q()Ljava/lang/String;
    .locals 1

    .line 640
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->ad:Ljava/lang/String;

    return-object v0
.end method

.method public final R()I
    .locals 1

    .line 648
    iget v0, p0, Lcom/tkay/core/common/f/aj;->af:I

    return v0
.end method

.method public final S()I
    .locals 1

    .line 661
    iget v0, p0, Lcom/tkay/core/common/f/aj;->b:I

    if-gtz v0, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0
.end method

.method public final T()I
    .locals 1

    .line 672
    iget v0, p0, Lcom/tkay/core/common/f/aj;->c:I

    return v0
.end method

.method public final U()I
    .locals 1

    .line 677
    iget v0, p0, Lcom/tkay/core/common/f/aj;->d:I

    return v0
.end method

.method public final V()Ljava/lang/String;
    .locals 1

    .line 685
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->e:Ljava/lang/String;

    return-object v0
.end method

.method public final W()I
    .locals 1

    .line 693
    iget v0, p0, Lcom/tkay/core/common/f/aj;->a:I

    return v0
.end method

.method public final X()I
    .locals 1

    .line 701
    iget v0, p0, Lcom/tkay/core/common/f/aj;->ag:I

    return v0
.end method

.method public final Y()I
    .locals 1

    .line 709
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->aa:Lcom/tkay/core/common/f/l;

    if-eqz v0, :cond_0

    iget v0, v0, Lcom/tkay/core/common/f/l;->n:I

    if-eqz v0, :cond_0

    .line 710
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->aa:Lcom/tkay/core/common/f/l;

    iget v0, v0, Lcom/tkay/core/common/f/l;->n:I

    return v0

    .line 712
    :cond_0
    iget v0, p0, Lcom/tkay/core/common/f/aj;->f:I

    return v0
.end method

.method public final Z()Z
    .locals 2

    .line 788
    iget v0, p0, Lcom/tkay/core/common/f/aj;->m:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    iget v0, p0, Lcom/tkay/core/common/f/aj;->Z:I

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final a(Lcom/tkay/core/c/d;)D
    .locals 5

    .line 825
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->h:D

    const-wide/16 v2, 0x0

    cmpl-double v4, v0, v2

    if-lez v4, :cond_0

    return-wide v0

    :cond_0
    if-eqz p1, :cond_1

    .line 829
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->at()D

    move-result-wide v0

    cmpl-double p1, v0, v2

    if-lez p1, :cond_1

    return-wide v0

    .line 834
    :cond_1
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->h:D

    cmpl-double p1, v0, v2

    if-lez p1, :cond_2

    return-wide v0

    :cond_2
    return-wide v2
.end method

.method public final a()I
    .locals 1

    .line 289
    iget v0, p0, Lcom/tkay/core/common/f/aj;->Y:I

    return v0
.end method

.method public final a(D)V
    .locals 0

    .line 484
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->x:D

    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 304
    iput p1, p0, Lcom/tkay/core/common/f/aj;->m:I

    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 372
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->D:J

    return-void
.end method

.method public final a(Lcom/tkay/core/api/TYAdConst$CURRENCY;)V
    .locals 0

    .line 811
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->ah:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-void
.end method

.method public final declared-synchronized a(Lcom/tkay/core/common/f/aj;III)V
    .locals 2

    monitor-enter p0

    .line 741
    :try_start_0
    iget-object v0, p1, Lcom/tkay/core/common/f/aj;->H:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/core/common/f/aj;->H:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 742
    iget-wide v0, p1, Lcom/tkay/core/common/f/aj;->x:D

    .line 1484
    iput-wide v0, p0, Lcom/tkay/core/common/f/aj;->x:D

    .line 743
    iget-wide v0, p1, Lcom/tkay/core/common/f/aj;->j:D

    .line 1854
    iput-wide v0, p0, Lcom/tkay/core/common/f/aj;->j:D

    .line 2405
    iput p3, p0, Lcom/tkay/core/common/f/aj;->B:I

    .line 745
    iget-object p3, p1, Lcom/tkay/core/common/f/aj;->z:Ljava/lang/String;

    .line 2500
    iput-object p3, p0, Lcom/tkay/core/common/f/aj;->z:Ljava/lang/String;

    .line 746
    iget-object p3, p1, Lcom/tkay/core/common/f/aj;->ad:Ljava/lang/String;

    .line 2644
    iput-object p3, p0, Lcom/tkay/core/common/f/aj;->ad:Ljava/lang/String;

    const/4 p3, 0x0

    .line 747
    iput p3, p0, Lcom/tkay/core/common/f/aj;->Y:I

    if-nez p2, :cond_0

    .line 3624
    iget p2, p1, Lcom/tkay/core/common/f/aj;->ab:I

    .line 3628
    iput p2, p0, Lcom/tkay/core/common/f/aj;->ab:I

    goto :goto_0

    .line 4628
    :cond_0
    iput p2, p0, Lcom/tkay/core/common/f/aj;->ab:I

    .line 5504
    :goto_0
    iget-object p2, p1, Lcom/tkay/core/common/f/aj;->A:Ljava/lang/String;

    .line 5508
    iput-object p2, p0, Lcom/tkay/core/common/f/aj;->A:Ljava/lang/String;

    .line 5616
    iget-object p1, p1, Lcom/tkay/core/common/f/aj;->aa:Lcom/tkay/core/common/f/l;

    .line 5620
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->aa:Lcom/tkay/core/common/f/l;

    .line 5636
    iput p4, p0, Lcom/tkay/core/common/f/aj;->ac:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 758
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Lcom/tkay/core/common/f/l;III)V
    .locals 2

    .line 6405
    iput p3, p0, Lcom/tkay/core/common/f/aj;->B:I

    .line 766
    invoke-virtual {p1}, Lcom/tkay/core/common/f/l;->getPrice()D

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/f/aj;->x:D

    .line 767
    invoke-virtual {p1}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/f/aj;->j:D

    .line 768
    iget-object p3, p1, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/core/common/f/aj;->z:Ljava/lang/String;

    .line 769
    iget-object p3, p1, Lcom/tkay/core/common/f/l;->m:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/core/common/f/aj;->ad:Ljava/lang/String;

    const/4 p3, 0x0

    .line 770
    iput p3, p0, Lcom/tkay/core/common/f/aj;->Y:I

    .line 6628
    iput p2, p0, Lcom/tkay/core/common/f/aj;->ab:I

    .line 7620
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->aa:Lcom/tkay/core/common/f/l;

    .line 7636
    iput p4, p0, Lcom/tkay/core/common/f/aj;->ac:I

    const/4 p1, 0x1

    if-ne p4, p1, :cond_0

    const-string p1, ""

    .line 8508
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->A:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 312
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->n:Ljava/lang/String;

    return-void
.end method

.method public final aa()Ljava/lang/String;
    .locals 3

    .line 792
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "networkFirmId: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/core/common/f/aj;->m:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", adSourceId: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/core/common/f/aj;->H:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", content: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/core/common/f/aj;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", price: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/tkay/core/common/f/aj;->x:D

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v1, ", sortPrice: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/tkay/core/common/f/aj;->j:D

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final ab()I
    .locals 1

    .line 797
    iget v0, p0, Lcom/tkay/core/common/f/aj;->ae:I

    return v0
.end method

.method public final ac()Lcom/tkay/core/api/TYAdConst$CURRENCY;
    .locals 1

    .line 807
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->ah:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-object v0
.end method

.method public final ad()I
    .locals 1

    .line 816
    iget v0, p0, Lcom/tkay/core/common/f/aj;->g:I

    return v0
.end method

.method public final ae()I
    .locals 1

    .line 842
    iget v0, p0, Lcom/tkay/core/common/f/aj;->i:I

    return v0
.end method

.method public final af()D
    .locals 2

    .line 850
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->j:D

    return-wide v0
.end method

.method public final ag()Ljava/lang/String;
    .locals 1

    .line 858
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->k:Ljava/lang/String;

    return-object v0
.end method

.method public final ah()Z
    .locals 1

    .line 866
    iget-boolean v0, p0, Lcom/tkay/core/common/f/aj;->l:Z

    return v0
.end method

.method public final ai()V
    .locals 1

    const/4 v0, 0x1

    .line 870
    iput-boolean v0, p0, Lcom/tkay/core/common/f/aj;->l:Z

    return-void
.end method

.method public final b()V
    .locals 1

    const/4 v0, -0x1

    .line 293
    iput v0, p0, Lcom/tkay/core/common/f/aj;->Y:I

    return-void
.end method

.method public final b(D)V
    .locals 0

    .line 588
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->T:D

    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 320
    iput p1, p0, Lcom/tkay/core/common/f/aj;->o:I

    return-void
.end method

.method public final b(J)V
    .locals 0

    .line 397
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->L:J

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 336
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->q:Ljava/lang/String;

    return-void
.end method

.method public final c()I
    .locals 1

    .line 300
    iget v0, p0, Lcom/tkay/core/common/f/aj;->m:I

    return v0
.end method

.method public final c(D)V
    .locals 0

    .line 838
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->h:D

    return-void
.end method

.method public final c(I)V
    .locals 0

    .line 328
    iput p1, p0, Lcom/tkay/core/common/f/aj;->p:I

    return-void
.end method

.method public final c(J)V
    .locals 0

    .line 413
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->E:J

    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 344
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->r:Ljava/lang/String;

    return-void
.end method

.method public synthetic compareTo(Ljava/lang/Object;)I
    .locals 4

    .line 16
    check-cast p1, Lcom/tkay/core/common/f/aj;

    .line 8722
    invoke-static {p0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v2

    cmpl-double p1, v0, v2

    if-lez p1, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    const/4 p1, 0x1

    return p1
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 308
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->n:Ljava/lang/String;

    return-object v0
.end method

.method public final d(D)V
    .locals 0

    .line 854
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->j:D

    return-void
.end method

.method public final d(I)V
    .locals 0

    .line 364
    iput p1, p0, Lcom/tkay/core/common/f/aj;->y:I

    return-void
.end method

.method public final d(J)V
    .locals 0

    .line 421
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->F:J

    return-void
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    .line 352
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->s:Ljava/lang/String;

    return-void
.end method

.method public final e()I
    .locals 1

    .line 316
    iget v0, p0, Lcom/tkay/core/common/f/aj;->o:I

    return v0
.end method

.method public final e(I)V
    .locals 0

    .line 381
    iput p1, p0, Lcom/tkay/core/common/f/aj;->Z:I

    return-void
.end method

.method public final e(J)V
    .locals 0

    .line 437
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->t:J

    return-void
.end method

.method public final e(Ljava/lang/String;)V
    .locals 0

    .line 449
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->H:Ljava/lang/String;

    return-void
.end method

.method public final f()I
    .locals 1

    .line 324
    iget v0, p0, Lcom/tkay/core/common/f/aj;->p:I

    return v0
.end method

.method public final f(I)V
    .locals 0

    .line 389
    iput p1, p0, Lcom/tkay/core/common/f/aj;->X:I

    return-void
.end method

.method public final f(J)V
    .locals 0

    .line 492
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->I:J

    return-void
.end method

.method public final f(Ljava/lang/String;)V
    .locals 0

    .line 457
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->u:Ljava/lang/String;

    return-void
.end method

.method public final g()Ljava/lang/String;
    .locals 1

    .line 332
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->q:Ljava/lang/String;

    return-object v0
.end method

.method public final g(I)V
    .locals 0

    .line 405
    iput p1, p0, Lcom/tkay/core/common/f/aj;->B:I

    return-void
.end method

.method public final g(J)V
    .locals 0

    .line 512
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->J:J

    return-void
.end method

.method public final g(Ljava/lang/String;)V
    .locals 0

    .line 500
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->z:Ljava/lang/String;

    return-void
.end method

.method public final h()Ljava/lang/String;
    .locals 1

    .line 340
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->r:Ljava/lang/String;

    return-object v0
.end method

.method public final h(I)V
    .locals 0

    .line 429
    iput p1, p0, Lcom/tkay/core/common/f/aj;->G:I

    return-void
.end method

.method public final h(J)V
    .locals 0

    .line 520
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->K:J

    return-void
.end method

.method public final h(Ljava/lang/String;)V
    .locals 0

    .line 508
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->A:Ljava/lang/String;

    return-void
.end method

.method public final i()I
    .locals 1

    .line 356
    iget v0, p0, Lcom/tkay/core/common/f/aj;->y:I

    return v0
.end method

.method public final i(I)V
    .locals 0

    .line 465
    iput p1, p0, Lcom/tkay/core/common/f/aj;->v:I

    return-void
.end method

.method public final i(J)V
    .locals 0

    .line 568
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->R:J

    return-void
.end method

.method public final i(Ljava/lang/String;)V
    .locals 0

    .line 564
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->Q:Ljava/lang/String;

    return-void
.end method

.method public final j(I)V
    .locals 0

    .line 473
    iput p1, p0, Lcom/tkay/core/common/f/aj;->w:I

    return-void
.end method

.method public final j(J)V
    .locals 0

    .line 580
    iput-wide p1, p0, Lcom/tkay/core/common/f/aj;->S:J

    return-void
.end method

.method public final j(Ljava/lang/String;)V
    .locals 0

    .line 689
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->e:Ljava/lang/String;

    return-void
.end method

.method public final j()Z
    .locals 2

    .line 360
    iget v0, p0, Lcom/tkay/core/common/f/aj;->y:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final k()J
    .locals 2

    .line 368
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->D:J

    return-wide v0
.end method

.method public final k(I)V
    .locals 0

    .line 532
    iput p1, p0, Lcom/tkay/core/common/f/aj;->M:I

    return-void
.end method

.method public final k(Ljava/lang/String;)V
    .locals 0

    .line 862
    iput-object p1, p0, Lcom/tkay/core/common/f/aj;->k:Ljava/lang/String;

    return-void
.end method

.method public final l()I
    .locals 1

    .line 377
    iget v0, p0, Lcom/tkay/core/common/f/aj;->Z:I

    return v0
.end method

.method public final l(I)V
    .locals 0

    .line 540
    iput p1, p0, Lcom/tkay/core/common/f/aj;->N:I

    return-void
.end method

.method public final m()I
    .locals 1

    .line 385
    iget v0, p0, Lcom/tkay/core/common/f/aj;->X:I

    return v0
.end method

.method public final m(I)V
    .locals 0

    .line 556
    iput p1, p0, Lcom/tkay/core/common/f/aj;->P:I

    return-void
.end method

.method public final n()J
    .locals 2

    .line 393
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->L:J

    return-wide v0
.end method

.method public final n(I)V
    .locals 0

    .line 596
    iput p1, p0, Lcom/tkay/core/common/f/aj;->U:I

    return-void
.end method

.method public final o()I
    .locals 1

    .line 401
    iget v0, p0, Lcom/tkay/core/common/f/aj;->B:I

    return v0
.end method

.method public final o(I)V
    .locals 0

    .line 604
    iput p1, p0, Lcom/tkay/core/common/f/aj;->V:I

    return-void
.end method

.method public final p()J
    .locals 2

    .line 409
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->E:J

    return-wide v0
.end method

.method public final p(I)V
    .locals 0

    .line 612
    iput p1, p0, Lcom/tkay/core/common/f/aj;->W:I

    return-void
.end method

.method public final q()J
    .locals 2

    .line 417
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->F:J

    return-wide v0
.end method

.method public final q(I)V
    .locals 0

    .line 652
    iput p1, p0, Lcom/tkay/core/common/f/aj;->af:I

    return-void
.end method

.method public final r()I
    .locals 1

    .line 425
    iget v0, p0, Lcom/tkay/core/common/f/aj;->G:I

    return v0
.end method

.method public final r(I)V
    .locals 0

    .line 657
    iput p1, p0, Lcom/tkay/core/common/f/aj;->b:I

    return-void
.end method

.method public final s()J
    .locals 2

    .line 433
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->t:J

    return-wide v0
.end method

.method public final s(I)V
    .locals 0

    .line 668
    iput p1, p0, Lcom/tkay/core/common/f/aj;->c:I

    return-void
.end method

.method public final t()Ljava/lang/String;
    .locals 1

    .line 445
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->H:Ljava/lang/String;

    return-object v0
.end method

.method public final t(I)V
    .locals 0

    .line 681
    iput p1, p0, Lcom/tkay/core/common/f/aj;->d:I

    return-void
.end method

.method public final u()Ljava/lang/String;
    .locals 1

    .line 453
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->u:Ljava/lang/String;

    return-object v0
.end method

.method public final u(I)V
    .locals 0

    .line 697
    iput p1, p0, Lcom/tkay/core/common/f/aj;->a:I

    return-void
.end method

.method public final v()I
    .locals 1

    .line 461
    iget v0, p0, Lcom/tkay/core/common/f/aj;->v:I

    return v0
.end method

.method public final v(I)V
    .locals 0

    .line 705
    iput p1, p0, Lcom/tkay/core/common/f/aj;->ag:I

    return-void
.end method

.method public final w()I
    .locals 1

    .line 469
    iget v0, p0, Lcom/tkay/core/common/f/aj;->w:I

    return v0
.end method

.method public final w(I)V
    .locals 0

    .line 716
    iput p1, p0, Lcom/tkay/core/common/f/aj;->f:I

    return-void
.end method

.method public final x()D
    .locals 2

    .line 480
    iget-wide v0, p0, Lcom/tkay/core/common/f/aj;->x:D

    return-wide v0
.end method

.method public final x(I)V
    .locals 0

    .line 802
    iput p1, p0, Lcom/tkay/core/common/f/aj;->ae:I

    return-void
.end method

.method public final y()Ljava/lang/String;
    .locals 1

    .line 496
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->z:Ljava/lang/String;

    return-object v0
.end method

.method public final y(I)V
    .locals 0

    .line 821
    iput p1, p0, Lcom/tkay/core/common/f/aj;->g:I

    return-void
.end method

.method public final z()Ljava/lang/String;
    .locals 1

    .line 504
    iget-object v0, p0, Lcom/tkay/core/common/f/aj;->A:Ljava/lang/String;

    return-object v0
.end method

.method public final z(I)V
    .locals 0

    .line 846
    iput p1, p0, Lcom/tkay/core/common/f/aj;->i:I

    return-void
.end method
