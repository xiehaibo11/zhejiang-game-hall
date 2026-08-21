.class final Lcom/tkay/expressad/exoplayer/e/a/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/e/a/b$e;,
        Lcom/tkay/expressad/exoplayer/e/a/b$d;,
        Lcom/tkay/expressad/exoplayer/e/a/b$b;,
        Lcom/tkay/expressad/exoplayer/e/a/b$c;,
        Lcom/tkay/expressad/exoplayer/e/a/b$f;,
        Lcom/tkay/expressad/exoplayer/e/a/b$a;,
        Lcom/tkay/expressad/exoplayer/e/a/b$g;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "AtomParsers"

.field private static final b:I

.field private static final c:I

.field private static final d:I

.field private static final e:I

.field private static final f:I

.field private static final g:I

.field private static final h:I

.field private static final i:I = 0x3


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "vide"

    .line 53
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->f(Ljava/lang/String;)I

    move-result v0

    sput v0, Lcom/tkay/expressad/exoplayer/e/a/b;->b:I

    const-string v0, "soun"

    .line 54
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->f(Ljava/lang/String;)I

    move-result v0

    sput v0, Lcom/tkay/expressad/exoplayer/e/a/b;->c:I

    const-string v0, "text"

    .line 55
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->f(Ljava/lang/String;)I

    move-result v0

    sput v0, Lcom/tkay/expressad/exoplayer/e/a/b;->d:I

    const-string v0, "sbtl"

    .line 56
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->f(Ljava/lang/String;)I

    move-result v0

    sput v0, Lcom/tkay/expressad/exoplayer/e/a/b;->e:I

    const-string v0, "subt"

    .line 57
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->f(Ljava/lang/String;)I

    move-result v0

    sput v0, Lcom/tkay/expressad/exoplayer/e/a/b;->f:I

    const-string v0, "clcp"

    .line 58
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->f(Ljava/lang/String;)I

    move-result v0

    sput v0, Lcom/tkay/expressad/exoplayer/e/a/b;->g:I

    const-string v0, "meta"

    .line 59
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->f(Ljava/lang/String;)I

    move-result v0

    sput v0, Lcom/tkay/expressad/exoplayer/e/a/b;->h:I

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 1210
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;II)I
    .locals 4

    .line 1008
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v0

    :goto_0
    sub-int v1, v0, p1

    if-ge v1, p2, :cond_2

    .line 1010
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 1011
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    if-lez v1, :cond_0

    const/4 v2, 0x1

    goto :goto_1

    :cond_0
    const/4 v2, 0x0

    :goto_1
    const-string v3, "childAtomSize should be positive"

    .line 1012
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    .line 1013
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v2

    .line 1014
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->O:I

    if-ne v2, v3, :cond_1

    return v0

    :cond_1
    add-int/2addr v0, v1

    goto :goto_0

    :cond_2
    const/4 p0, -0x1

    return p0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;)J
    .locals 2

    const/16 v0, 0x8

    .line 520
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 521
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    .line 522
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/e/a/a;->a(I)I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const/16 v0, 0x10

    .line 523
    :goto_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 524
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v0

    return-wide v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/e/a/a$a;)Landroid/util/Pair;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/e/a/a$a;",
            ")",
            "Landroid/util/Pair<",
            "[J[J>;"
        }
    .end annotation

    if-eqz p0, :cond_5

    .line 839
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->V:I

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object p0

    if-nez p0, :cond_0

    goto :goto_3

    .line 842
    :cond_0
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    const/16 v0, 0x8

    .line 843
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 844
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v0

    .line 845
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/e/a/a;->a(I)I

    move-result v0

    .line 846
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v1

    .line 847
    new-array v2, v1, [J

    .line 848
    new-array v3, v1, [J

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v1, :cond_4

    const/4 v5, 0x1

    if-ne v0, v5, :cond_1

    .line 851
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->n()J

    move-result-wide v6

    goto :goto_1

    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v6

    :goto_1
    aput-wide v6, v2, v4

    if-ne v0, v5, :cond_2

    .line 852
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->j()J

    move-result-wide v6

    goto :goto_2

    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v6

    int-to-long v6, v6

    :goto_2
    aput-wide v6, v3, v4

    .line 853
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->f()S

    move-result v6

    if-ne v6, v5, :cond_3

    const/4 v5, 0x2

    .line 858
    invoke-virtual {p0, v5}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 856
    :cond_3
    new-instance p0, Ljava/lang/IllegalArgumentException;

    const-string v0, "Unsupported media rate."

    invoke-direct {p0, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 860
    :cond_4
    invoke-static {v2, v3}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p0

    return-object p0

    :cond_5
    :goto_3
    const/4 p0, 0x0

    .line 840
    invoke-static {p0, p0}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p0

    return-object p0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;IILjava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;Z)Lcom/tkay/expressad/exoplayer/e/a/b$c;
    .locals 47

    move-object/from16 v0, p0

    move-object/from16 v12, p3

    move-object/from16 v13, p4

    const/16 v1, 0xc

    .line 643
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 644
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v14

    .line 645
    new-instance v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;

    invoke-direct {v15, v14}, Lcom/tkay/expressad/exoplayer/e/a/b$c;-><init>(I)V

    const/4 v11, 0x0

    move v9, v11

    :goto_0
    if-ge v9, v14, :cond_4e

    .line 647
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v10

    .line 648
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v8

    const/4 v7, 0x1

    if-lez v8, :cond_0

    move v1, v7

    goto :goto_1

    :cond_0
    move v1, v11

    :goto_1
    const-string v6, "childAtomSize should be positive"

    .line 649
    invoke-static {v1, v6}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    .line 650
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    .line 651
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->g:I

    const/4 v5, 0x2

    const/4 v4, 0x0

    const/16 v3, 0x8

    if-eq v1, v2, :cond_31

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->h:I

    if-eq v1, v2, :cond_31

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->ae:I

    if-eq v1, v2, :cond_31

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aq:I

    if-eq v1, v2, :cond_31

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->i:I

    if-eq v1, v2, :cond_31

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->j:I

    if-eq v1, v2, :cond_31

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->k:I

    if-eq v1, v2, :cond_31

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aP:I

    if-eq v1, v2, :cond_31

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aQ:I

    if-ne v1, v2, :cond_1

    goto/16 :goto_1e

    .line 658
    :cond_1
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->n:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->af:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->s:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->u:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->w:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->z:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->x:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->y:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aD:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aE:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->q:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->r:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->o:I

    if-eq v1, v2, :cond_b

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aT:I

    if-ne v1, v2, :cond_2

    goto/16 :goto_6

    .line 667
    :cond_2
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->ao:I

    if-eq v1, v2, :cond_5

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->az:I

    if-eq v1, v2, :cond_5

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aA:I

    if-eq v1, v2, :cond_5

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aB:I

    if-eq v1, v2, :cond_5

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aC:I

    if-ne v1, v2, :cond_3

    goto :goto_2

    .line 672
    :cond_3
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aS:I

    if-ne v1, v2, :cond_4

    .line 673
    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "application/x-camera-motion"

    invoke-static {v1, v2, v4, v4}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v1

    iput-object v1, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    :cond_4
    move/from16 v19, v9

    move v11, v10

    move/from16 v22, v14

    move v14, v8

    goto/16 :goto_2f

    :cond_5
    :goto_2
    add-int/lit8 v2, v10, 0x8

    add-int/2addr v2, v3

    .line 8683
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    const-wide v5, 0x7fffffffffffffffL

    .line 8690
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->ao:I

    const-string v16, "application/ttml+xml"

    if-ne v1, v2, :cond_6

    move-object/from16 v18, v4

    move-object/from16 v2, v16

    :goto_3
    move-wide/from16 v16, v5

    goto :goto_5

    .line 8692
    :cond_6
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->az:I

    if-ne v1, v2, :cond_7

    add-int/lit8 v1, v8, -0x8

    sub-int/2addr v1, v3

    .line 8695
    new-array v2, v1, [B

    .line 8696
    invoke-virtual {v0, v2, v11, v1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 8697
    invoke-static {v2}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    const-string v2, "application/x-quicktime-tx3g"

    move-object/from16 v18, v1

    goto :goto_3

    .line 8698
    :cond_7
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aA:I

    if-ne v1, v2, :cond_8

    const-string v1, "application/x-mp4-vtt"

    :goto_4
    move-object v2, v1

    move-object/from16 v18, v4

    goto :goto_3

    .line 8700
    :cond_8
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aB:I

    if-ne v1, v2, :cond_9

    const-wide/16 v1, 0x0

    move-object/from16 v18, v4

    move-wide/from16 v45, v1

    move-object/from16 v2, v16

    move-wide/from16 v16, v45

    goto :goto_5

    .line 8703
    :cond_9
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aC:I

    if-ne v1, v2, :cond_a

    .line 8706
    iput v7, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->e:I

    const-string v1, "application/x-mp4-cea-608"

    goto :goto_4

    .line 8712
    :goto_5
    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x0

    const/4 v4, -0x1

    const/4 v5, 0x0

    const/4 v7, -0x1

    const/16 v19, 0x0

    move-object/from16 v6, p3

    move/from16 v20, v8

    move-object/from16 v8, v19

    move/from16 v19, v9

    move/from16 v21, v10

    move-wide/from16 v9, v16

    move/from16 v22, v14

    move v14, v11

    move-object/from16 v11, v18

    invoke-static/range {v1 .. v11}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;ILcom/tkay/expressad/exoplayer/d/e;JLjava/util/List;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v1

    iput-object v1, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    move/from16 v14, v20

    move/from16 v11, v21

    goto/16 :goto_2f

    .line 8709
    :cond_a
    new-instance v0, Ljava/lang/IllegalStateException;

    invoke-direct {v0}, Ljava/lang/IllegalStateException;-><init>()V

    throw v0

    :cond_b
    :goto_6
    move/from16 v20, v8

    move/from16 v19, v9

    move/from16 v21, v10

    move/from16 v22, v14

    move v14, v11

    move/from16 v11, v21

    add-int/lit8 v10, v11, 0x8

    add-int/2addr v10, v3

    .line 6873
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    const/4 v2, 0x6

    if-eqz p5, :cond_c

    .line 6877
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v3

    .line 6878
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    goto :goto_7

    .line 6880
    :cond_c
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    move v3, v14

    :goto_7
    if-eqz v3, :cond_f

    if-ne v3, v7, :cond_d

    goto :goto_8

    :cond_d
    if-ne v3, v5, :cond_e

    const/16 v2, 0x10

    .line 6895
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 7432
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->j()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Double;->longBitsToDouble(J)D

    move-result-wide v2

    .line 6897
    invoke-static {v2, v3}, Ljava/lang/Math;->round(D)J

    move-result-wide v2

    long-to-int v2, v2

    .line 6898
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v3

    const/16 v8, 0x14

    .line 6902
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    goto :goto_9

    :cond_e
    move/from16 v14, v20

    goto/16 :goto_2f

    .line 6887
    :cond_f
    :goto_8
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v8

    .line 6888
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 6889
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->k()I

    move-result v2

    if-ne v3, v7, :cond_10

    const/16 v3, 0x10

    .line 6892
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    :cond_10
    move v3, v8

    .line 6908
    :goto_9
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v8

    .line 6909
    sget v9, Lcom/tkay/expressad/exoplayer/e/a/a;->af:I

    move/from16 v10, v20

    if-ne v1, v9, :cond_13

    .line 6910
    invoke-static {v0, v11, v10}, Lcom/tkay/expressad/exoplayer/e/a/b;->b(Lcom/tkay/expressad/exoplayer/k/s;II)Landroid/util/Pair;

    move-result-object v9

    if-eqz v9, :cond_12

    .line 6913
    iget-object v1, v9, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-nez v13, :cond_11

    goto :goto_a

    .line 6915
    :cond_11
    iget-object v4, v9, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v4, Lcom/tkay/expressad/exoplayer/e/a/k;

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/e/a/k;->b:Ljava/lang/String;

    invoke-virtual {v13, v4}, Lcom/tkay/expressad/exoplayer/d/e;->a(Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/d/e;

    move-result-object v4

    .line 6916
    :goto_a
    iget-object v5, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->b:[Lcom/tkay/expressad/exoplayer/e/a/k;

    iget-object v9, v9, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v9, Lcom/tkay/expressad/exoplayer/e/a/k;

    aput-object v9, v5, v19

    goto :goto_b

    :cond_12
    move-object v4, v13

    .line 6918
    :goto_b
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    move-object v9, v4

    goto :goto_c

    :cond_13
    move-object v9, v13

    .line 6927
    :goto_c
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->s:I

    const-string v5, "audio/raw"

    if-ne v1, v4, :cond_14

    const-string v1, "audio/ac3"

    goto :goto_f

    .line 6929
    :cond_14
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->u:I

    if-ne v1, v4, :cond_15

    const-string v1, "audio/eac3"

    goto :goto_f

    .line 6931
    :cond_15
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->w:I

    if-ne v1, v4, :cond_16

    const-string v1, "audio/vnd.dts"

    goto :goto_f

    .line 6933
    :cond_16
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->x:I

    if-eq v1, v4, :cond_1f

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->y:I

    if-ne v1, v4, :cond_17

    goto :goto_e

    .line 6935
    :cond_17
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->z:I

    if-ne v1, v4, :cond_18

    const-string v1, "audio/vnd.dts.hd;profile=lbr"

    goto :goto_f

    .line 6937
    :cond_18
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->aD:I

    if-ne v1, v4, :cond_19

    const-string v1, "audio/3gpp"

    goto :goto_f

    .line 6939
    :cond_19
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->aE:I

    if-ne v1, v4, :cond_1a

    const-string v1, "audio/amr-wb"

    goto :goto_f

    .line 6941
    :cond_1a
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->q:I

    if-eq v1, v4, :cond_1e

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->r:I

    if-ne v1, v4, :cond_1b

    goto :goto_d

    .line 6943
    :cond_1b
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->o:I

    if-ne v1, v4, :cond_1c

    const-string v1, "audio/mpeg"

    goto :goto_f

    .line 6945
    :cond_1c
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->aT:I

    if-ne v1, v4, :cond_1d

    const-string v1, "audio/alac"

    goto :goto_f

    :cond_1d
    const/4 v1, 0x0

    goto :goto_f

    :cond_1e
    :goto_d
    move-object v1, v5

    goto :goto_f

    :cond_1f
    :goto_e
    const-string v1, "audio/vnd.dts.hd"

    :goto_f
    move/from16 v21, v2

    move/from16 v20, v3

    move v4, v8

    const/16 v23, 0x0

    move-object v8, v1

    :goto_10
    sub-int v1, v4, v11

    if-ge v1, v10, :cond_2d

    .line 6951
    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 6952
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v3

    if-lez v3, :cond_20

    move v1, v7

    goto :goto_11

    :cond_20
    move v1, v14

    .line 6953
    :goto_11
    invoke-static {v1, v6}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    .line 6954
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    .line 6955
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->O:I

    if-eq v1, v2, :cond_26

    if-eqz p5, :cond_21

    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->p:I

    if-ne v1, v2, :cond_21

    goto/16 :goto_15

    .line 6972
    :cond_21
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->t:I

    if-ne v1, v2, :cond_22

    add-int/lit8 v1, v4, 0x8

    .line 6973
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 6974
    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, v12, v9}, Lcom/tkay/expressad/exoplayer/b/a;->a(Lcom/tkay/expressad/exoplayer/k/s;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v1

    iput-object v1, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    :goto_12
    move-object/from16 v28, v5

    move-object/from16 v29, v6

    move-object/from16 v30, v8

    move-object/from16 v17, v9

    move v9, v14

    const/16 v16, 0x0

    move v14, v3

    move v8, v4

    goto/16 :goto_14

    .line 6976
    :cond_22
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->v:I

    if-ne v1, v2, :cond_23

    add-int/lit8 v1, v4, 0x8

    .line 6977
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 6978
    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, v12, v9}, Lcom/tkay/expressad/exoplayer/b/a;->b(Lcom/tkay/expressad/exoplayer/k/s;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v1

    iput-object v1, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    goto :goto_12

    .line 6980
    :cond_23
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->A:I

    if-ne v1, v2, :cond_24

    .line 6981
    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    const/16 v24, 0x0

    const/16 v25, -0x1

    const/16 v26, 0x0

    move-object v2, v8

    move v14, v3

    move-object/from16 v3, v24

    move/from16 v27, v4

    const/16 v16, 0x0

    move/from16 v4, v25

    move-object/from16 v28, v5

    move/from16 v5, v20

    move-object/from16 v29, v6

    move/from16 v6, v21

    move-object/from16 v7, v26

    move-object/from16 v30, v8

    move-object v8, v9

    move-object/from16 v17, v9

    move-object/from16 v9, p3

    invoke-static/range {v1 .. v9}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v1

    iput-object v1, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    goto :goto_13

    :cond_24
    move v14, v3

    move/from16 v27, v4

    move-object/from16 v28, v5

    move-object/from16 v29, v6

    move-object/from16 v30, v8

    move-object/from16 v17, v9

    const/16 v16, 0x0

    .line 6984
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->aT:I

    if-ne v1, v2, :cond_25

    .line 6985
    new-array v1, v14, [B

    move/from16 v8, v27

    .line 6986
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    const/4 v9, 0x0

    .line 6987
    invoke-virtual {v0, v1, v9, v14}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    move-object/from16 v23, v1

    goto :goto_14

    :cond_25
    :goto_13
    move/from16 v8, v27

    const/4 v9, 0x0

    :goto_14
    move-object/from16 v5, v29

    const/4 v2, -0x1

    goto/16 :goto_1b

    :cond_26
    :goto_15
    move-object/from16 v28, v5

    move-object/from16 v29, v6

    move-object/from16 v30, v8

    move-object/from16 v17, v9

    move v9, v14

    const/16 v16, 0x0

    move v14, v3

    move v8, v4

    .line 6956
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->O:I

    if-ne v1, v2, :cond_27

    move v4, v8

    move-object/from16 v5, v29

    :goto_16
    const/4 v2, -0x1

    goto :goto_19

    .line 8008
    :cond_27
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v1

    move v4, v1

    :goto_17
    sub-int v1, v4, v8

    if-ge v1, v14, :cond_2a

    .line 8010
    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 8011
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    if-lez v1, :cond_28

    move-object/from16 v5, v29

    const/4 v2, 0x1

    goto :goto_18

    :cond_28
    move v2, v9

    move-object/from16 v5, v29

    .line 8012
    :goto_18
    invoke-static {v2, v5}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    .line 8013
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v2

    .line 8014
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->O:I

    if-ne v2, v3, :cond_29

    goto :goto_16

    :cond_29
    add-int/2addr v4, v1

    move-object/from16 v29, v5

    goto :goto_17

    :cond_2a
    move-object/from16 v5, v29

    const/4 v2, -0x1

    const/4 v4, -0x1

    :goto_19
    if-eq v4, v2, :cond_2b

    .line 6960
    invoke-static {v0, v4}, Lcom/tkay/expressad/exoplayer/e/a/b;->d(Lcom/tkay/expressad/exoplayer/k/s;I)Landroid/util/Pair;

    move-result-object v1

    .line 6961
    iget-object v3, v1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v3, Ljava/lang/String;

    .line 6962
    iget-object v1, v1, Landroid/util/Pair;->second:Ljava/lang/Object;

    move-object/from16 v23, v1

    check-cast v23, [B

    const-string v1, "audio/mp4a-latm"

    .line 6963
    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2c

    .line 6967
    invoke-static/range {v23 .. v23}, Lcom/tkay/expressad/exoplayer/k/d;->a([B)Landroid/util/Pair;

    move-result-object v1

    .line 6968
    iget-object v4, v1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    .line 6969
    iget-object v1, v1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    move/from16 v20, v1

    move/from16 v21, v4

    goto :goto_1a

    :cond_2b
    move-object/from16 v3, v30

    :cond_2c
    :goto_1a
    move-object/from16 v30, v3

    :goto_1b
    add-int v4, v8, v14

    move-object v6, v5

    move v14, v9

    move-object/from16 v9, v17

    move-object/from16 v5, v28

    move-object/from16 v8, v30

    const/4 v7, 0x1

    goto/16 :goto_10

    :cond_2d
    move-object/from16 v28, v5

    move-object/from16 v30, v8

    move-object/from16 v17, v9

    move v9, v14

    const/4 v2, -0x1

    const/16 v16, 0x0

    .line 6992
    iget-object v1, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    if-nez v1, :cond_30

    move-object/from16 v3, v30

    if-eqz v3, :cond_30

    move-object/from16 v1, v28

    .line 6995
    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2e

    const/4 v7, 0x2

    goto :goto_1c

    :cond_2e
    move v7, v2

    .line 6996
    :goto_1c
    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x0

    const/4 v5, -0x1

    if-nez v23, :cond_2f

    move-object/from16 v8, v16

    goto :goto_1d

    .line 6998
    :cond_2f
    invoke-static/range {v23 .. v23}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v2

    move-object v8, v2

    :goto_1d
    move-object v2, v3

    move-object v3, v4

    move v4, v5

    move/from16 v5, v20

    move/from16 v6, v21

    move v14, v9

    move-object/from16 v9, v17

    move v14, v10

    move-object/from16 v10, p3

    .line 6996
    invoke-static/range {v1 .. v10}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v1

    iput-object v1, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    goto/16 :goto_2f

    :cond_30
    move v14, v10

    goto/16 :goto_2f

    :cond_31
    :goto_1e
    move-object/from16 v16, v4

    move-object v5, v6

    move/from16 v19, v9

    move v11, v10

    move/from16 v22, v14

    const/4 v2, -0x1

    move v14, v8

    add-int/lit8 v10, v11, 0x8

    add-int/2addr v10, v3

    .line 5719
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    const/16 v3, 0x10

    .line 5721
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 5722
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v35

    .line 5723
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v36

    const/high16 v3, 0x3f800000    # 1.0f

    const/16 v4, 0x32

    .line 5726
    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 5728
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v4

    .line 5729
    sget v6, Lcom/tkay/expressad/exoplayer/e/a/a;->ae:I

    if-ne v1, v6, :cond_34

    .line 5730
    invoke-static {v0, v11, v14}, Lcom/tkay/expressad/exoplayer/e/a/b;->b(Lcom/tkay/expressad/exoplayer/k/s;II)Landroid/util/Pair;

    move-result-object v6

    if-eqz v6, :cond_33

    .line 5733
    iget-object v1, v6, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-nez v13, :cond_32

    move-object/from16 v7, v16

    goto :goto_1f

    .line 5735
    :cond_32
    iget-object v7, v6, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v7, Lcom/tkay/expressad/exoplayer/e/a/k;

    iget-object v7, v7, Lcom/tkay/expressad/exoplayer/e/a/k;->b:Ljava/lang/String;

    invoke-virtual {v13, v7}, Lcom/tkay/expressad/exoplayer/d/e;->a(Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/d/e;

    move-result-object v7

    .line 5736
    :goto_1f
    iget-object v8, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->b:[Lcom/tkay/expressad/exoplayer/e/a/k;

    iget-object v6, v6, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v6, Lcom/tkay/expressad/exoplayer/e/a/k;

    aput-object v6, v8, v19

    goto :goto_20

    :cond_33
    move-object v7, v13

    .line 5738
    :goto_20
    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    move-object/from16 v44, v7

    goto :goto_21

    :cond_34
    move-object/from16 v44, v13

    :goto_21
    move/from16 v42, v2

    move/from16 v40, v3

    move-object/from16 v31, v16

    move-object/from16 v38, v31

    move-object/from16 v41, v38

    const/4 v2, 0x0

    :goto_22
    sub-int v3, v4, v11

    if-ge v3, v14, :cond_4c

    .line 5751
    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 5752
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v3

    .line 5753
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v6

    if-nez v6, :cond_35

    .line 5754
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v7

    sub-int/2addr v7, v11

    if-eq v7, v14, :cond_4c

    :cond_35
    if-lez v6, :cond_36

    const/4 v7, 0x1

    goto :goto_23

    :cond_36
    const/4 v7, 0x0

    .line 5758
    :goto_23
    invoke-static {v7, v5}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    .line 5759
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v7

    .line 5760
    sget v8, Lcom/tkay/expressad/exoplayer/e/a/a;->M:I

    const/4 v9, 0x3

    if-ne v7, v8, :cond_39

    if-nez v31, :cond_37

    const/4 v7, 0x1

    goto :goto_24

    :cond_37
    const/4 v7, 0x0

    .line 5761
    :goto_24
    invoke-static {v7}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    add-int/lit8 v3, v3, 0x8

    .line 5763
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 5764
    invoke-static/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/l/a;->a(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/l/a;

    move-result-object v3

    .line 5765
    iget-object v7, v3, Lcom/tkay/expressad/exoplayer/l/a;->a:Ljava/util/List;

    .line 5766
    iget v8, v3, Lcom/tkay/expressad/exoplayer/l/a;->b:I

    iput v8, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->d:I

    if-nez v2, :cond_38

    .line 5768
    iget v3, v3, Lcom/tkay/expressad/exoplayer/l/a;->e:F

    move/from16 v40, v3

    :cond_38
    const-string v3, "video/avc"

    goto :goto_26

    .line 5770
    :cond_39
    sget v8, Lcom/tkay/expressad/exoplayer/e/a/a;->N:I

    if-ne v7, v8, :cond_3c

    if-nez v31, :cond_3a

    const/4 v7, 0x1

    goto :goto_25

    :cond_3a
    const/4 v7, 0x0

    .line 5771
    :goto_25
    invoke-static {v7}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    add-int/lit8 v3, v3, 0x8

    .line 5773
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 5774
    invoke-static/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/l/d;->a(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/l/d;

    move-result-object v3

    .line 5775
    iget-object v7, v3, Lcom/tkay/expressad/exoplayer/l/d;->a:Ljava/util/List;

    .line 5776
    iget v3, v3, Lcom/tkay/expressad/exoplayer/l/d;->b:I

    iput v3, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->d:I

    const-string v3, "video/hevc"

    :goto_26
    move-object/from16 v31, v3

    move-object/from16 v38, v7

    :cond_3b
    :goto_27
    const/4 v7, 0x1

    const/4 v8, 0x2

    goto/16 :goto_2e

    .line 5777
    :cond_3c
    sget v8, Lcom/tkay/expressad/exoplayer/e/a/a;->aR:I

    if-ne v7, v8, :cond_3f

    if-nez v31, :cond_3d

    const/4 v3, 0x1

    goto :goto_28

    :cond_3d
    const/4 v3, 0x0

    .line 5778
    :goto_28
    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 5779
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->aP:I

    if-ne v1, v3, :cond_3e

    const-string v3, "video/x-vnd.on2.vp8"

    goto :goto_2a

    :cond_3e
    const-string v3, "video/x-vnd.on2.vp9"

    goto :goto_2a

    .line 5780
    :cond_3f
    sget v8, Lcom/tkay/expressad/exoplayer/e/a/a;->l:I

    if-ne v7, v8, :cond_41

    if-nez v31, :cond_40

    const/4 v3, 0x1

    goto :goto_29

    :cond_40
    const/4 v3, 0x0

    .line 5781
    :goto_29
    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    const-string v3, "video/3gpp"

    :goto_2a
    move-object/from16 v31, v3

    goto :goto_27

    .line 5783
    :cond_41
    sget v8, Lcom/tkay/expressad/exoplayer/e/a/a;->O:I

    if-ne v7, v8, :cond_43

    if-nez v31, :cond_42

    const/4 v7, 0x1

    goto :goto_2b

    :cond_42
    const/4 v7, 0x0

    .line 5784
    :goto_2b
    invoke-static {v7}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 5786
    invoke-static {v0, v3}, Lcom/tkay/expressad/exoplayer/e/a/b;->d(Lcom/tkay/expressad/exoplayer/k/s;I)Landroid/util/Pair;

    move-result-object v3

    .line 5787
    iget-object v7, v3, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v7, Ljava/lang/String;

    .line 5788
    iget-object v3, v3, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v3, [B

    invoke-static {v3}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v3

    move-object/from16 v38, v3

    move-object/from16 v31, v7

    goto :goto_27

    .line 5789
    :cond_43
    sget v8, Lcom/tkay/expressad/exoplayer/e/a/a;->an:I

    if-ne v7, v8, :cond_44

    add-int/lit8 v3, v3, 0x8

    .line 5864
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 5865
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v2

    .line 5866
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v3

    int-to-float v2, v2

    int-to-float v3, v3

    div-float v40, v2, v3

    const/4 v2, 0x1

    goto :goto_27

    .line 5792
    :cond_44
    sget v8, Lcom/tkay/expressad/exoplayer/e/a/a;->aN:I

    if-ne v7, v8, :cond_47

    add-int/lit8 v7, v3, 0x8

    :goto_2c
    sub-int v8, v7, v3

    if-ge v8, v6, :cond_46

    .line 6173
    invoke-virtual {v0, v7}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 6174
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v8

    .line 6175
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v9

    .line 6176
    sget v10, Lcom/tkay/expressad/exoplayer/e/a/a;->aO:I

    if-ne v9, v10, :cond_45

    .line 6177
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    add-int/2addr v8, v7

    invoke-static {v3, v7, v8}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object v3

    goto :goto_2d

    :cond_45
    add-int/2addr v7, v8

    goto :goto_2c

    :cond_46
    move-object/from16 v3, v16

    :goto_2d
    move-object/from16 v41, v3

    goto/16 :goto_27

    .line 5794
    :cond_47
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->aM:I

    if-ne v7, v3, :cond_3b

    .line 5795
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v3

    .line 5796
    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    if-nez v3, :cond_3b

    .line 5798
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v3

    if-eqz v3, :cond_4b

    const/4 v7, 0x1

    if-eq v3, v7, :cond_4a

    const/4 v8, 0x2

    if-eq v3, v8, :cond_49

    if-eq v3, v9, :cond_48

    goto :goto_2e

    :cond_48
    move/from16 v42, v9

    goto :goto_2e

    :cond_49
    move/from16 v42, v8

    goto :goto_2e

    :cond_4a
    const/4 v8, 0x2

    move/from16 v42, v7

    goto :goto_2e

    :cond_4b
    const/4 v7, 0x1

    const/4 v8, 0x2

    const/16 v42, 0x0

    :goto_2e
    add-int/2addr v4, v6

    goto/16 :goto_22

    :cond_4c
    if-eqz v31, :cond_4d

    .line 5825
    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v30

    const/16 v32, 0x0

    const/16 v33, -0x1

    const/16 v34, -0x1

    const/high16 v37, -0x40800000    # -1.0f

    const/16 v43, 0x0

    move/from16 v39, p2

    invoke-static/range {v30 .. v44}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFLjava/util/List;IF[BILcom/tkay/expressad/exoplayer/l/b;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v1

    iput-object v1, v15, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    :cond_4d
    :goto_2f
    add-int v10, v11, v14

    .line 676
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    add-int/lit8 v9, v19, 0x1

    move/from16 v14, v22

    const/4 v11, 0x0

    goto/16 :goto_0

    :cond_4e
    return-object v15
.end method

.method public static a(Lcom/tkay/expressad/exoplayer/e/a/a$a;Lcom/tkay/expressad/exoplayer/e/a/a$b;JLcom/tkay/expressad/exoplayer/d/e;ZZ)Lcom/tkay/expressad/exoplayer/e/a/j;
    .locals 25

    move-object/from16 v0, p0

    .line 82
    sget v1, Lcom/tkay/expressad/exoplayer/e/a/a;->J:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->e(I)Lcom/tkay/expressad/exoplayer/e/a/a$a;

    move-result-object v1

    .line 83
    sget v2, Lcom/tkay/expressad/exoplayer/e/a/a;->X:I

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v2

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    const/16 v3, 0x10

    .line 1593
    invoke-virtual {v2, v3}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 1594
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v2

    .line 1595
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/b;->c:I

    const/4 v5, -0x1

    const/4 v7, 0x4

    if-ne v2, v4, :cond_0

    const/4 v10, 0x1

    goto :goto_2

    .line 1597
    :cond_0
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/b;->b:I

    if-ne v2, v4, :cond_1

    const/4 v2, 0x2

    :goto_0
    move v10, v2

    goto :goto_2

    .line 1599
    :cond_1
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/b;->d:I

    if-eq v2, v4, :cond_4

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/b;->e:I

    if-eq v2, v4, :cond_4

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/b;->f:I

    if-eq v2, v4, :cond_4

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/b;->g:I

    if-ne v2, v4, :cond_2

    goto :goto_1

    .line 1602
    :cond_2
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/b;->h:I

    if-ne v2, v4, :cond_3

    move v10, v7

    goto :goto_2

    :cond_3
    move v10, v5

    goto :goto_2

    :cond_4
    :goto_1
    const/4 v2, 0x3

    goto :goto_0

    :goto_2
    const/4 v2, 0x0

    if-ne v10, v5, :cond_5

    return-object v2

    .line 88
    :cond_5
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->T:I

    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v4

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    const/16 v8, 0x8

    .line 2533
    invoke-virtual {v4, v8}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 2534
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v9

    .line 2535
    invoke-static {v9}, Lcom/tkay/expressad/exoplayer/e/a/a;->a(I)I

    move-result v9

    if-nez v9, :cond_6

    move v11, v8

    goto :goto_3

    :cond_6
    move v11, v3

    .line 2537
    :goto_3
    invoke-virtual {v4, v11}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 2538
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v11

    .line 2540
    invoke-virtual {v4, v7}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 2542
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v12

    if-nez v9, :cond_7

    move v13, v7

    goto :goto_4

    :cond_7
    move v13, v8

    :goto_4
    const/4 v14, 0x0

    move v15, v14

    :goto_5
    if-ge v15, v13, :cond_9

    .line 2545
    iget-object v6, v4, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    add-int v17, v12, v15

    aget-byte v6, v6, v17

    if-eq v6, v5, :cond_8

    move v6, v14

    goto :goto_6

    :cond_8
    add-int/lit8 v15, v15, 0x1

    goto :goto_5

    :cond_9
    const/4 v6, 0x1

    :goto_6
    const-wide v15, -0x7fffffffffffffffL    # -4.9E-324

    if-eqz v6, :cond_a

    .line 2552
    invoke-virtual {v4, v13}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    :goto_7
    move-wide v5, v15

    goto :goto_9

    :cond_a
    if-nez v9, :cond_b

    .line 2555
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v5

    goto :goto_8

    :cond_b
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->n()J

    move-result-wide v5

    :goto_8
    const-wide/16 v12, 0x0

    cmp-long v9, v5, v12

    if-nez v9, :cond_c

    goto :goto_7

    .line 2563
    :cond_c
    :goto_9
    invoke-virtual {v4, v3}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 2564
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v9

    .line 2565
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v12

    .line 2566
    invoke-virtual {v4, v7}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 2567
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v13

    .line 2568
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v4

    const/high16 v3, 0x10000

    const/high16 v7, -0x10000

    if-nez v9, :cond_d

    if-ne v12, v3, :cond_d

    if-ne v13, v7, :cond_d

    if-nez v4, :cond_d

    const/16 v14, 0x5a

    goto :goto_a

    :cond_d
    if-nez v9, :cond_e

    if-ne v12, v7, :cond_e

    if-ne v13, v3, :cond_e

    if-nez v4, :cond_e

    const/16 v14, 0x10e

    goto :goto_a

    :cond_e
    if-ne v9, v7, :cond_f

    if-nez v12, :cond_f

    if-nez v13, :cond_f

    if-ne v4, v7, :cond_f

    const/16 v14, 0xb4

    .line 2583
    :cond_f
    :goto_a
    new-instance v3, Lcom/tkay/expressad/exoplayer/e/a/b$f;

    invoke-direct {v3, v11, v5, v6, v14}, Lcom/tkay/expressad/exoplayer/e/a/b$f;-><init>(IJI)V

    cmp-long v4, p2, v15

    if-nez v4, :cond_10

    .line 90
    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/e/a/b$f;->a(Lcom/tkay/expressad/exoplayer/e/a/b$f;)J

    move-result-wide v4

    move-wide/from16 v19, v4

    move-object/from16 v4, p1

    goto :goto_b

    :cond_10
    move-object/from16 v4, p1

    move-wide/from16 v19, p2

    .line 92
    :goto_b
    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    .line 3520
    invoke-virtual {v4, v8}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 3521
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v5

    .line 3522
    invoke-static {v5}, Lcom/tkay/expressad/exoplayer/e/a/a;->a(I)I

    move-result v5

    if-nez v5, :cond_11

    move v5, v8

    goto :goto_c

    :cond_11
    const/16 v5, 0x10

    .line 3523
    :goto_c
    invoke-virtual {v4, v5}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 3524
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v13

    cmp-long v4, v19, v15

    if-nez v4, :cond_12

    goto :goto_d

    :cond_12
    const-wide/32 v21, 0xf4240

    move-wide/from16 v23, v13

    .line 97
    invoke-static/range {v19 .. v24}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v4

    move-wide v15, v4

    .line 99
    :goto_d
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->K:I

    invoke-virtual {v1, v4}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->e(I)Lcom/tkay/expressad/exoplayer/e/a/a$a;

    move-result-object v4

    sget v5, Lcom/tkay/expressad/exoplayer/e/a/a;->L:I

    .line 100
    invoke-virtual {v4, v5}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->e(I)Lcom/tkay/expressad/exoplayer/e/a/a$a;

    move-result-object v4

    .line 102
    sget v5, Lcom/tkay/expressad/exoplayer/e/a/a;->W:I

    invoke-virtual {v1, v5}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v1

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    .line 3617
    invoke-virtual {v1, v8}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 3618
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v5

    .line 3619
    invoke-static {v5}, Lcom/tkay/expressad/exoplayer/e/a/a;->a(I)I

    move-result v5

    if-nez v5, :cond_13

    move v6, v8

    goto :goto_e

    :cond_13
    const/16 v6, 0x10

    .line 3620
    :goto_e
    invoke-virtual {v1, v6}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 3621
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v6

    if-nez v5, :cond_14

    const/4 v8, 0x4

    .line 3622
    :cond_14
    invoke-virtual {v1, v8}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 3623
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v1

    .line 3624
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    shr-int/lit8 v8, v1, 0xa

    and-int/lit8 v8, v8, 0x1f

    add-int/lit8 v8, v8, 0x60

    int-to-char v8, v8

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    shr-int/lit8 v8, v1, 0x5

    and-int/lit8 v8, v8, 0x1f

    add-int/lit8 v8, v8, 0x60

    int-to-char v8, v8

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    and-int/lit8 v1, v1, 0x1f

    add-int/lit8 v1, v1, 0x60

    int-to-char v1, v1

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 3627
    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    invoke-static {v5, v1}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object v1

    .line 103
    sget v5, Lcom/tkay/expressad/exoplayer/e/a/a;->Y:I

    invoke-virtual {v4, v5}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v4

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/e/a/b$f;->b(Lcom/tkay/expressad/exoplayer/e/a/b$f;)I

    move-result v18

    .line 104
    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/e/a/b$f;->c(Lcom/tkay/expressad/exoplayer/e/a/b$f;)I

    move-result v19

    iget-object v5, v1, Landroid/util/Pair;->second:Ljava/lang/Object;

    move-object/from16 v20, v5

    check-cast v20, Ljava/lang/String;

    move-object/from16 v17, v4

    move-object/from16 v21, p4

    move/from16 v22, p6

    .line 103
    invoke-static/range {v17 .. v22}, Lcom/tkay/expressad/exoplayer/e/a/b;->a(Lcom/tkay/expressad/exoplayer/k/s;IILjava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;Z)Lcom/tkay/expressad/exoplayer/e/a/b$c;

    move-result-object v4

    if-nez p5, :cond_15

    .line 108
    sget v5, Lcom/tkay/expressad/exoplayer/e/a/a;->U:I

    invoke-virtual {v0, v5}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->e(I)Lcom/tkay/expressad/exoplayer/e/a/a$a;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/e/a/b;->a(Lcom/tkay/expressad/exoplayer/e/a/a$a;)Landroid/util/Pair;

    move-result-object v0

    .line 109
    iget-object v5, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v5, [J

    .line 110
    iget-object v0, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v0, [J

    move-object/from16 v22, v0

    move-object/from16 v21, v5

    goto :goto_f

    :cond_15
    move-object/from16 v21, v2

    move-object/from16 v22, v21

    .line 112
    :goto_f
    iget-object v0, v4, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    if-nez v0, :cond_16

    return-object v2

    .line 113
    :cond_16
    new-instance v0, Lcom/tkay/expressad/exoplayer/e/a/j;

    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/e/a/b$f;->b(Lcom/tkay/expressad/exoplayer/e/a/b$f;)I

    move-result v9

    iget-object v1, v1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v11

    iget-object v1, v4, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    iget v2, v4, Lcom/tkay/expressad/exoplayer/e/a/b$c;->e:I

    iget-object v3, v4, Lcom/tkay/expressad/exoplayer/e/a/b$c;->b:[Lcom/tkay/expressad/exoplayer/e/a/k;

    iget v4, v4, Lcom/tkay/expressad/exoplayer/e/a/b$c;->d:I

    move-object v8, v0

    move-object/from16 v17, v1

    move/from16 v18, v2

    move-object/from16 v19, v3

    move/from16 v20, v4

    invoke-direct/range {v8 .. v22}, Lcom/tkay/expressad/exoplayer/e/a/j;-><init>(IIJJJLcom/tkay/expressad/exoplayer/m;I[Lcom/tkay/expressad/exoplayer/e/a/k;I[J[J)V

    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;IILjava/lang/String;)Lcom/tkay/expressad/exoplayer/e/a/k;
    .locals 11

    add-int/lit8 v0, p1, 0x8

    :goto_0
    sub-int v1, v0, p1

    const/4 v2, 0x0

    if-ge v1, p2, :cond_4

    .line 1133
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 1134
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    .line 1135
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v3

    .line 1136
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->ad:I

    if-ne v3, v4, :cond_3

    .line 1137
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result p1

    .line 1138
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/e/a/a;->a(I)I

    move-result p1

    const/4 p2, 0x1

    .line 1139
    invoke-virtual {p0, p2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 1143
    invoke-virtual {p0, p2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    move v8, v0

    move v9, v8

    goto :goto_1

    .line 1145
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result p1

    and-int/lit16 v1, p1, 0xf0

    shr-int/lit8 v1, v1, 0x4

    and-int/lit8 p1, p1, 0xf

    move v9, p1

    move v8, v1

    .line 1149
    :goto_1
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result p1

    if-ne p1, p2, :cond_1

    move v4, p2

    goto :goto_2

    :cond_1
    move v4, v0

    .line 1150
    :goto_2
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v6

    const/16 p1, 0x10

    new-array v7, p1, [B

    .line 1152
    invoke-virtual {p0, v7, v0, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    if-eqz v4, :cond_2

    if-nez v6, :cond_2

    .line 1155
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result p1

    .line 1156
    new-array v2, p1, [B

    .line 1157
    invoke-virtual {p0, v2, v0, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    :cond_2
    move-object v10, v2

    .line 1159
    new-instance p0, Lcom/tkay/expressad/exoplayer/e/a/k;

    move-object v3, p0

    move-object v5, p3

    invoke-direct/range {v3 .. v10}, Lcom/tkay/expressad/exoplayer/e/a/k;-><init>(ZLjava/lang/String;I[BII[B)V

    return-object p0

    :cond_3
    add-int/2addr v0, v1

    goto :goto_0

    :cond_4
    return-object v2
.end method

.method public static a(Lcom/tkay/expressad/exoplayer/e/a/j;Lcom/tkay/expressad/exoplayer/e/a/a$a;Lcom/tkay/expressad/exoplayer/e/i;)Lcom/tkay/expressad/exoplayer/e/a/m;
    .locals 43

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    move-object/from16 v2, p2

    .line 132
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->av:I

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 134
    new-instance v4, Lcom/tkay/expressad/exoplayer/e/a/b$d;

    invoke-direct {v4, v3}, Lcom/tkay/expressad/exoplayer/e/a/b$d;-><init>(Lcom/tkay/expressad/exoplayer/e/a/a$b;)V

    goto :goto_0

    .line 136
    :cond_0
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->aw:I

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v3

    if-eqz v3, :cond_31

    .line 140
    new-instance v4, Lcom/tkay/expressad/exoplayer/e/a/b$e;

    invoke-direct {v4, v3}, Lcom/tkay/expressad/exoplayer/e/a/b$e;-><init>(Lcom/tkay/expressad/exoplayer/e/a/a$b;)V

    .line 143
    :goto_0
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/e/a/b$b;->a()I

    move-result v3

    const/4 v5, 0x0

    if-nez v3, :cond_1

    .line 145
    new-instance v9, Lcom/tkay/expressad/exoplayer/e/a/m;

    new-array v2, v5, [J

    new-array v3, v5, [I

    const/4 v4, 0x0

    new-array v6, v5, [J

    new-array v7, v5, [I

    const-wide v10, -0x7fffffffffffffffL    # -4.9E-324

    move-object v0, v9

    move-object/from16 v1, p0

    move-object v5, v6

    move-object v6, v7

    move-wide v7, v10

    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/exoplayer/e/a/m;-><init>(Lcom/tkay/expressad/exoplayer/e/a/j;[J[II[J[IJ)V

    return-object v9

    .line 157
    :cond_1
    sget v6, Lcom/tkay/expressad/exoplayer/e/a/a;->ax:I

    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v6

    const/4 v7, 0x1

    if-nez v6, :cond_2

    .line 160
    sget v6, Lcom/tkay/expressad/exoplayer/e/a/a;->ay:I

    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v6

    move v8, v7

    goto :goto_1

    :cond_2
    move v8, v5

    .line 162
    :goto_1
    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    .line 164
    sget v9, Lcom/tkay/expressad/exoplayer/e/a/a;->au:I

    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v9

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    .line 166
    sget v10, Lcom/tkay/expressad/exoplayer/e/a/a;->ar:I

    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v10

    iget-object v10, v10, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    .line 168
    sget v11, Lcom/tkay/expressad/exoplayer/e/a/a;->as:I

    invoke-virtual {v0, v11}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v11

    const/4 v12, 0x0

    if-eqz v11, :cond_3

    .line 169
    iget-object v11, v11, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    goto :goto_2

    :cond_3
    move-object v11, v12

    .line 171
    :goto_2
    sget v13, Lcom/tkay/expressad/exoplayer/e/a/a;->at:I

    invoke-virtual {v0, v13}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 172
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    goto :goto_3

    :cond_4
    move-object v0, v12

    .line 175
    :goto_3
    new-instance v13, Lcom/tkay/expressad/exoplayer/e/a/b$a;

    invoke-direct {v13, v9, v6, v8}, Lcom/tkay/expressad/exoplayer/e/a/b$a;-><init>(Lcom/tkay/expressad/exoplayer/k/s;Lcom/tkay/expressad/exoplayer/k/s;Z)V

    const/16 v6, 0xc

    .line 178
    invoke-virtual {v10, v6}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 179
    invoke-virtual {v10}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v8

    sub-int/2addr v8, v7

    .line 180
    invoke-virtual {v10}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v9

    .line 181
    invoke-virtual {v10}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v14

    if-eqz v0, :cond_5

    .line 188
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 189
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v15

    goto :goto_4

    :cond_5
    move v15, v5

    :goto_4
    const/16 v16, -0x1

    if-eqz v11, :cond_6

    .line 195
    invoke-virtual {v11, v6}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 196
    invoke-virtual {v11}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v6

    if-lez v6, :cond_7

    .line 198
    invoke-virtual {v11}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v12

    add-int/lit8 v16, v12, -0x1

    goto :goto_5

    :cond_6
    move v6, v5

    :goto_5
    move-object v12, v11

    .line 207
    :cond_7
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/e/a/b$b;->c()Z

    move-result v11

    if-eqz v11, :cond_8

    iget-object v11, v1, Lcom/tkay/expressad/exoplayer/e/a/j;->h:Lcom/tkay/expressad/exoplayer/m;

    iget-object v11, v11, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    const-string v5, "audio/raw"

    .line 208
    invoke-virtual {v5, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_8

    if-nez v8, :cond_8

    if-nez v15, :cond_8

    if-nez v6, :cond_8

    move v5, v7

    goto :goto_6

    :cond_8
    const/4 v5, 0x0

    :goto_6
    const-string v11, "AtomParsers"

    const-wide/16 v18, 0x0

    if-nez v5, :cond_17

    .line 222
    new-array v5, v3, [J

    .line 223
    new-array v7, v3, [I

    move/from16 p1, v6

    .line 224
    new-array v6, v3, [J

    move/from16 v21, v8

    .line 225
    new-array v8, v3, [I

    move-object/from16 v24, v10

    move v2, v14

    move-wide/from16 v25, v18

    move-wide/from16 v27, v25

    move/from16 v14, v21

    const/4 v1, 0x0

    const/4 v10, 0x0

    const/16 v21, 0x0

    const/16 v22, 0x0

    const/16 v23, 0x0

    move/from16 v41, v9

    move/from16 v9, p1

    move-object/from16 p1, v11

    move/from16 v11, v16

    move/from16 v16, v15

    move/from16 v15, v41

    :goto_7
    if-ge v1, v3, :cond_10

    :goto_8
    if-nez v23, :cond_9

    .line 232
    invoke-virtual {v13}, Lcom/tkay/expressad/exoplayer/e/a/b$a;->a()Z

    move-result v23

    invoke-static/range {v23 .. v23}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    move/from16 v29, v14

    move/from16 v30, v15

    .line 233
    iget-wide v14, v13, Lcom/tkay/expressad/exoplayer/e/a/b$a;->d:J

    move-wide/from16 v27, v14

    .line 234
    iget v14, v13, Lcom/tkay/expressad/exoplayer/e/a/b$a;->c:I

    move/from16 v23, v14

    move/from16 v14, v29

    move/from16 v15, v30

    goto :goto_8

    :cond_9
    move/from16 v29, v14

    move/from16 v30, v15

    if-eqz v0, :cond_b

    :goto_9
    if-nez v21, :cond_a

    if-lez v16, :cond_a

    .line 240
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v21

    .line 246
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v22

    add-int/lit8 v16, v16, -0x1

    goto :goto_9

    :cond_a
    add-int/lit8 v21, v21, -0x1

    :cond_b
    move/from16 v14, v22

    .line 252
    aput-wide v27, v5, v1

    .line 253
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/e/a/b$b;->b()I

    move-result v15

    aput v15, v7, v1

    .line 254
    aget v15, v7, v1

    if-le v15, v10, :cond_c

    .line 255
    aget v10, v7, v1

    :cond_c
    move-object v15, v4

    move-object/from16 v22, v5

    int-to-long v4, v14

    add-long v4, v25, v4

    .line 257
    aput-wide v4, v6, v1

    if-nez v12, :cond_d

    const/4 v4, 0x1

    goto :goto_a

    :cond_d
    const/4 v4, 0x0

    .line 260
    :goto_a
    aput v4, v8, v1

    if-ne v1, v11, :cond_e

    const/4 v4, 0x1

    .line 262
    aput v4, v8, v1

    add-int/lit8 v9, v9, -0x1

    if-lez v9, :cond_e

    .line 265
    invoke-virtual {v12}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v5

    sub-int/2addr v5, v4

    move v11, v5

    :cond_e
    int-to-long v4, v2

    add-long v25, v25, v4

    add-int/lit8 v4, v30, -0x1

    if-nez v4, :cond_f

    if-lez v29, :cond_f

    .line 273
    invoke-virtual/range {v24 .. v24}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v2

    .line 280
    invoke-virtual/range {v24 .. v24}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v4

    add-int/lit8 v5, v29, -0x1

    move/from16 v29, v5

    move/from16 v41, v4

    move v4, v2

    move/from16 v2, v41

    .line 284
    :cond_f
    aget v5, v7, v1

    move/from16 v30, v4

    int-to-long v4, v5

    add-long v27, v27, v4

    add-int/lit8 v23, v23, -0x1

    add-int/lit8 v1, v1, 0x1

    move-object v4, v15

    move-object/from16 v5, v22

    move/from16 v15, v30

    move/from16 v22, v14

    move/from16 v14, v29

    goto/16 :goto_7

    :cond_10
    move/from16 v29, v14

    move/from16 v30, v15

    move/from16 v14, v22

    move-object/from16 v22, v5

    int-to-long v1, v14

    add-long v25, v25, v1

    if-nez v21, :cond_11

    const/4 v1, 0x1

    goto :goto_b

    :cond_11
    const/4 v1, 0x0

    .line 289
    :goto_b
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    :goto_c
    if-lez v16, :cond_13

    .line 292
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v1

    if-nez v1, :cond_12

    const/4 v1, 0x1

    goto :goto_d

    :cond_12
    const/4 v1, 0x0

    :goto_d
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 293
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    add-int/lit8 v16, v16, -0x1

    goto :goto_c

    :cond_13
    if-nez v9, :cond_15

    if-nez v30, :cond_15

    move/from16 v0, v23

    if-nez v0, :cond_16

    if-eqz v29, :cond_14

    goto :goto_e

    :cond_14
    move-object/from16 v2, p0

    move-object/from16 v1, p1

    goto :goto_f

    :cond_15
    move/from16 v0, v23

    .line 301
    :cond_16
    :goto_e
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Inconsistent stbl box for track "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v2, p0

    iget v4, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->c:I

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ": remainingSynchronizationSamples "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ", remainingSamplesAtTimestampDelta "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v9, v30

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ", remainingSamplesInChunk "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ", remainingTimestampDeltaChanges "

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v0, v29

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    move-object/from16 v1, p1

    invoke-static {v1, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :goto_f
    move-object v5, v7

    move-object/from16 v4, v22

    move-object v7, v6

    move v6, v10

    goto :goto_11

    :cond_17
    move-object v2, v1

    move-object v1, v11

    .line 308
    iget v0, v13, Lcom/tkay/expressad/exoplayer/e/a/b$a;->a:I

    new-array v0, v0, [J

    .line 309
    iget v4, v13, Lcom/tkay/expressad/exoplayer/e/a/b$a;->a:I

    new-array v4, v4, [I

    .line 310
    :goto_10
    invoke-virtual {v13}, Lcom/tkay/expressad/exoplayer/e/a/b$a;->a()Z

    move-result v5

    if-eqz v5, :cond_18

    .line 311
    iget v5, v13, Lcom/tkay/expressad/exoplayer/e/a/b$a;->b:I

    iget-wide v6, v13, Lcom/tkay/expressad/exoplayer/e/a/b$a;->d:J

    aput-wide v6, v0, v5

    .line 312
    iget v5, v13, Lcom/tkay/expressad/exoplayer/e/a/b$a;->b:I

    iget v6, v13, Lcom/tkay/expressad/exoplayer/e/a/b$a;->c:I

    aput v6, v4, v5

    goto :goto_10

    .line 314
    :cond_18
    iget-object v5, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->h:Lcom/tkay/expressad/exoplayer/m;

    iget v5, v5, Lcom/tkay/expressad/exoplayer/m;->w:I

    iget-object v6, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->h:Lcom/tkay/expressad/exoplayer/m;

    iget v6, v6, Lcom/tkay/expressad/exoplayer/m;->u:I

    .line 315
    invoke-static {v5, v6}, Lcom/tkay/expressad/exoplayer/k/af;->b(II)I

    move-result v5

    int-to-long v6, v14

    .line 316
    invoke-static {v5, v0, v4, v6, v7}, Lcom/tkay/expressad/exoplayer/e/a/d;->a(I[J[IJ)Lcom/tkay/expressad/exoplayer/e/a/d$a;

    move-result-object v0

    .line 318
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/e/a/d$a;->a:[J

    .line 319
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/e/a/d$a;->b:[I

    .line 320
    iget v6, v0, Lcom/tkay/expressad/exoplayer/e/a/d$a;->c:I

    .line 321
    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/e/a/d$a;->d:[J

    .line 322
    iget-object v8, v0, Lcom/tkay/expressad/exoplayer/e/a/d$a;->e:[I

    .line 323
    iget-wide v9, v0, Lcom/tkay/expressad/exoplayer/e/a/d$a;->f:J

    move-wide/from16 v25, v9

    :goto_11
    const-wide/32 v11, 0xf4240

    .line 325
    iget-wide v13, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    move-wide/from16 v9, v25

    invoke-static/range {v9 .. v14}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v9

    .line 327
    iget-object v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->j:[J

    if-eqz v0, :cond_30

    invoke-virtual/range {p2 .. p2}, Lcom/tkay/expressad/exoplayer/e/i;->a()Z

    move-result v0

    if-eqz v0, :cond_19

    goto/16 :goto_21

    .line 342
    :cond_19
    iget-object v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->j:[J

    array-length v0, v0

    const/4 v11, 0x1

    if-ne v0, v11, :cond_1c

    iget v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->d:I

    if-ne v0, v11, :cond_1c

    array-length v0, v7

    const/4 v11, 0x2

    if-lt v0, v11, :cond_1c

    .line 345
    iget-object v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->k:[J

    const/4 v11, 0x0

    aget-wide v12, v0, v11

    .line 346
    iget-object v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->j:[J

    aget-wide v27, v0, v11

    iget-wide v14, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    move-wide/from16 v21, v12

    iget-wide v11, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->f:J

    move-wide/from16 v29, v14

    move-wide/from16 v31, v11

    invoke-static/range {v27 .. v32}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v11

    add-long v12, v21, v11

    .line 4200
    array-length v0, v7

    const/4 v11, 0x1

    sub-int/2addr v0, v11

    const/4 v11, 0x3

    const/4 v14, 0x0

    .line 4201
    invoke-static {v11, v14, v0}, Lcom/tkay/expressad/exoplayer/k/af;->a(III)I

    move-result v15

    move-object/from16 p1, v1

    .line 4202
    array-length v1, v7

    sub-int/2addr v1, v11

    .line 4203
    invoke-static {v1, v14, v0}, Lcom/tkay/expressad/exoplayer/k/af;->a(III)I

    move-result v0

    .line 4204
    aget-wide v23, v7, v14

    cmp-long v1, v23, v21

    if-gtz v1, :cond_1a

    aget-wide v14, v7, v15

    cmp-long v1, v21, v14

    if-gez v1, :cond_1a

    aget-wide v0, v7, v0

    cmp-long v0, v0, v12

    if-gez v0, :cond_1a

    cmp-long v0, v12, v25

    if-gtz v0, :cond_1a

    const/4 v0, 0x1

    goto :goto_12

    :cond_1a
    const/4 v0, 0x0

    :goto_12
    if-eqz v0, :cond_1d

    sub-long v27, v25, v12

    const/4 v0, 0x0

    .line 350
    aget-wide v11, v7, v0

    sub-long v29, v21, v11

    iget-object v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->h:Lcom/tkay/expressad/exoplayer/m;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    int-to-long v0, v0

    iget-wide v11, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    move-wide/from16 v31, v0

    move-wide/from16 v33, v11

    invoke-static/range {v29 .. v34}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v0

    .line 352
    iget-object v11, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->h:Lcom/tkay/expressad/exoplayer/m;

    iget v11, v11, Lcom/tkay/expressad/exoplayer/m;->v:I

    int-to-long v11, v11

    iget-wide v13, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    move-wide/from16 v29, v11

    move-wide/from16 v31, v13

    invoke-static/range {v27 .. v32}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v11

    cmp-long v13, v0, v18

    if-nez v13, :cond_1b

    cmp-long v13, v11, v18

    if-eqz v13, :cond_1d

    :cond_1b
    const-wide/32 v13, 0x7fffffff

    cmp-long v15, v0, v13

    if-gtz v15, :cond_1d

    cmp-long v13, v11, v13

    if-gtz v13, :cond_1d

    long-to-int v0, v0

    move-object/from16 v1, p2

    .line 356
    iput v0, v1, Lcom/tkay/expressad/exoplayer/e/i;->b:I

    long-to-int v0, v11

    .line 357
    iput v0, v1, Lcom/tkay/expressad/exoplayer/e/i;->c:I

    .line 358
    iget-wide v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    invoke-static {v7, v0, v1}, Lcom/tkay/expressad/exoplayer/k/af;->a([JJ)V

    .line 359
    new-instance v11, Lcom/tkay/expressad/exoplayer/e/a/m;

    move-object v0, v11

    move-object/from16 v1, p0

    move-object v2, v4

    move-object v3, v5

    move v4, v6

    move-object v5, v7

    move-object v6, v8

    move-wide v7, v9

    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/exoplayer/e/a/m;-><init>(Lcom/tkay/expressad/exoplayer/e/a/j;[J[II[J[IJ)V

    return-object v11

    :cond_1c
    move-object/from16 p1, v1

    .line 365
    :cond_1d
    iget-object v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->j:[J

    array-length v0, v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1f

    iget-object v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->j:[J

    const/4 v1, 0x0

    aget-wide v9, v0, v1

    cmp-long v0, v9, v18

    if-nez v0, :cond_1f

    .line 369
    iget-object v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->k:[J

    aget-wide v9, v0, v1

    const/4 v0, 0x0

    .line 370
    :goto_13
    array-length v1, v7

    if-ge v0, v1, :cond_1e

    .line 371
    aget-wide v11, v7, v0

    sub-long v13, v11, v9

    const-wide/32 v15, 0xf4240

    iget-wide v11, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    move-wide/from16 v17, v11

    .line 372
    invoke-static/range {v13 .. v18}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v11

    aput-wide v11, v7, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_13

    :cond_1e
    sub-long v11, v25, v9

    const-wide/32 v13, 0xf4240

    .line 375
    iget-wide v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    move-wide v15, v0

    .line 376
    invoke-static/range {v11 .. v16}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v9

    .line 377
    new-instance v11, Lcom/tkay/expressad/exoplayer/e/a/m;

    move-object v0, v11

    move-object/from16 v1, p0

    move-object v2, v4

    move-object v3, v5

    move v4, v6

    move-object v5, v7

    move-object v6, v8

    move-wide v7, v9

    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/exoplayer/e/a/m;-><init>(Lcom/tkay/expressad/exoplayer/e/a/j;[J[II[J[IJ)V

    return-object v11

    .line 382
    :cond_1f
    iget v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->d:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_20

    const/4 v0, 0x1

    goto :goto_14

    :cond_20
    const/4 v0, 0x0

    :goto_14
    const/4 v1, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    const/4 v11, 0x0

    .line 388
    :goto_15
    iget-object v12, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->j:[J

    array-length v12, v12

    const-wide/16 v13, -0x1

    if-ge v11, v12, :cond_23

    .line 389
    iget-object v12, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->k:[J

    move-object v15, v5

    move/from16 v16, v6

    aget-wide v5, v12, v11

    cmp-long v12, v5, v13

    if-eqz v12, :cond_22

    .line 391
    iget-object v12, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->j:[J

    aget-wide v21, v12, v11

    iget-wide v12, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    move-object/from16 p2, v15

    iget-wide v14, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->f:J

    move-wide/from16 v23, v12

    move-wide/from16 v25, v14

    .line 392
    invoke-static/range {v21 .. v26}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v12

    const/4 v14, 0x1

    .line 394
    invoke-static {v7, v5, v6, v14, v14}, Lcom/tkay/expressad/exoplayer/k/af;->a([JJZZ)I

    move-result v15

    add-long/2addr v5, v12

    const/4 v12, 0x0

    .line 396
    invoke-static {v7, v5, v6, v0, v12}, Lcom/tkay/expressad/exoplayer/k/af;->a([JJZZ)I

    move-result v5

    sub-int v6, v5, v15

    add-int/2addr v9, v6

    if-eq v10, v15, :cond_21

    const/4 v6, 0x1

    goto :goto_16

    :cond_21
    const/4 v6, 0x0

    :goto_16
    or-int/2addr v1, v6

    move v10, v5

    goto :goto_17

    :cond_22
    move-object/from16 p2, v15

    :goto_17
    add-int/lit8 v11, v11, 0x1

    move-object/from16 v5, p2

    move/from16 v6, v16

    goto :goto_15

    :cond_23
    move-object/from16 p2, v5

    move/from16 v16, v6

    if-eq v9, v3, :cond_24

    const/4 v3, 0x1

    goto :goto_18

    :cond_24
    const/4 v3, 0x0

    :goto_18
    or-int/2addr v1, v3

    if-eqz v1, :cond_25

    .line 406
    new-array v3, v9, [J

    goto :goto_19

    :cond_25
    move-object v3, v4

    :goto_19
    if-eqz v1, :cond_26

    .line 407
    new-array v5, v9, [I

    goto :goto_1a

    :cond_26
    move-object/from16 v5, p2

    :goto_1a
    if-eqz v1, :cond_27

    const/4 v6, 0x0

    goto :goto_1b

    :cond_27
    move/from16 v6, v16

    :goto_1b
    if-eqz v1, :cond_28

    .line 409
    new-array v10, v9, [I

    goto :goto_1c

    :cond_28
    move-object v10, v8

    .line 410
    :goto_1c
    new-array v9, v9, [J

    const/4 v11, 0x0

    const/4 v12, 0x0

    .line 413
    :goto_1d
    iget-object v15, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->j:[J

    array-length v15, v15

    if-ge v11, v15, :cond_2f

    .line 414
    iget-object v15, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->k:[J

    aget-wide v13, v15, v11

    .line 415
    iget-object v15, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->j:[J

    aget-wide v29, v15, v11

    const-wide/16 v15, -0x1

    cmp-long v21, v13, v15

    if-eqz v21, :cond_2e

    move-object/from16 v27, v8

    move-object/from16 v28, v9

    .line 417
    iget-wide v8, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    move-object/from16 v31, v10

    move/from16 v32, v11

    iget-wide v10, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->f:J

    move-wide/from16 v21, v29

    move-wide/from16 v23, v8

    move-wide/from16 v25, v10

    .line 419
    invoke-static/range {v21 .. v26}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v8

    add-long/2addr v8, v13

    const/4 v10, 0x1

    .line 420
    invoke-static {v7, v13, v14, v10, v10}, Lcom/tkay/expressad/exoplayer/k/af;->a([JJZZ)I

    move-result v11

    const/4 v15, 0x0

    .line 421
    invoke-static {v7, v8, v9, v0, v15}, Lcom/tkay/expressad/exoplayer/k/af;->a([JJZZ)I

    move-result v8

    if-eqz v1, :cond_29

    sub-int v9, v8, v11

    .line 424
    invoke-static {v4, v11, v3, v12, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    move-object/from16 v15, p2

    .line 425
    invoke-static {v15, v11, v5, v12, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    move-object/from16 v10, v27

    move-object/from16 v27, v4

    move-object/from16 v4, v31

    .line 426
    invoke-static {v10, v11, v4, v12, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    goto :goto_1e

    :cond_29
    move-object/from16 v15, p2

    move-object/from16 v10, v27

    move-object/from16 v27, v4

    move-object/from16 v4, v31

    :goto_1e
    if-ge v11, v8, :cond_2b

    .line 428
    aget v9, v4, v12

    const/16 v16, 0x1

    and-int/lit8 v9, v9, 0x1

    if-eqz v9, :cond_2a

    move-object/from16 v9, p1

    goto :goto_1f

    :cond_2a
    const-string v0, "Ignoring edit list: edit does not start with a sync sample."

    move-object/from16 v9, p1

    .line 430
    invoke-static {v9, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 431
    new-instance v0, Lcom/tkay/expressad/exoplayer/e/a/b$g;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/e/a/b$g;-><init>()V

    throw v0

    :cond_2b
    move-object/from16 v9, p1

    const/16 v16, 0x1

    :goto_1f
    if-ge v11, v8, :cond_2d

    const-wide/32 v23, 0xf4240

    move/from16 p1, v8

    move-object/from16 v20, v9

    .line 434
    iget-wide v8, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->f:J

    move-wide/from16 v21, v18

    move-wide/from16 v25, v8

    invoke-static/range {v21 .. v26}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v8

    .line 435
    aget-wide v21, v7, v11

    sub-long v35, v21, v13

    const-wide/32 v37, 0xf4240

    move-wide/from16 v21, v13

    iget-wide v13, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    move-wide/from16 v39, v13

    .line 436
    invoke-static/range {v35 .. v40}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v13

    add-long/2addr v8, v13

    .line 438
    aput-wide v8, v28, v12

    if-eqz v1, :cond_2c

    .line 439
    aget v8, v5, v12

    if-le v8, v6, :cond_2c

    .line 440
    aget v6, v15, v11

    :cond_2c
    add-int/lit8 v12, v12, 0x1

    add-int/lit8 v11, v11, 0x1

    move/from16 v8, p1

    move-object/from16 v9, v20

    move-wide/from16 v13, v21

    goto :goto_1f

    :cond_2d
    move-object/from16 v20, v9

    goto :goto_20

    :cond_2e
    move-object/from16 v20, p1

    move-object/from16 v15, p2

    move-object/from16 v27, v4

    move-object/from16 v28, v9

    move-object v4, v10

    move/from16 v32, v11

    const/16 v16, 0x1

    move-object v10, v8

    :goto_20
    add-long v18, v18, v29

    add-int/lit8 v11, v32, 0x1

    move-object v8, v10

    move-object/from16 p2, v15

    move-object/from16 p1, v20

    move-object/from16 v9, v28

    const-wide/16 v13, -0x1

    move-object v10, v4

    move-object/from16 v4, v27

    goto/16 :goto_1d

    :cond_2f
    move-object/from16 v28, v9

    move-object v4, v10

    const-wide/32 v23, 0xf4240

    .line 447
    iget-wide v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    move-wide/from16 v21, v18

    move-wide/from16 v25, v0

    invoke-static/range {v21 .. v26}, Lcom/tkay/expressad/exoplayer/k/af;->a(JJJ)J

    move-result-wide v7

    .line 448
    new-instance v9, Lcom/tkay/expressad/exoplayer/e/a/m;

    move-object v0, v9

    move-object/from16 v1, p0

    move-object v2, v3

    move-object v3, v5

    move v4, v6

    move-object/from16 v5, v28

    move-object v6, v10

    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/exoplayer/e/a/m;-><init>(Lcom/tkay/expressad/exoplayer/e/a/j;[J[II[J[IJ)V

    return-object v9

    :cond_30
    :goto_21
    move-object/from16 v27, v4

    move-object v15, v5

    move/from16 v16, v6

    move-wide/from16 v41, v9

    move-object v10, v8

    move-wide/from16 v8, v41

    .line 330
    iget-wide v0, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    invoke-static {v7, v0, v1}, Lcom/tkay/expressad/exoplayer/k/af;->a([JJ)V

    .line 331
    new-instance v11, Lcom/tkay/expressad/exoplayer/e/a/m;

    move-object v0, v11

    move-object/from16 v1, p0

    move-object/from16 v2, v27

    move-object v3, v15

    move/from16 v4, v16

    move-object v5, v7

    move-object v6, v10

    move-wide v7, v8

    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/exoplayer/e/a/m;-><init>(Lcom/tkay/expressad/exoplayer/e/a/j;[J[II[J[IJ)V

    return-object v11

    .line 138
    :cond_31
    new-instance v0, Lcom/tkay/expressad/exoplayer/t;

    const-string v1, "Track has no sample table size information"

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/t;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public static a(Lcom/tkay/expressad/exoplayer/e/a/a$b;Z)Lcom/tkay/expressad/exoplayer/g/a;
    .locals 6

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    return-object v0

    .line 471
    :cond_0
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    const/16 p1, 0x8

    .line 472
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 473
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result v1

    if-lt v1, p1, :cond_6

    .line 474
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v1

    .line 475
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v2

    .line 476
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v3

    .line 477
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->aG:I

    if-ne v3, v4, :cond_5

    .line 478
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    add-int/2addr v1, v2

    const/16 v2, 0xc

    .line 4487
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 4488
    :goto_1
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v2

    if-ge v2, v1, :cond_4

    .line 4489
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v2

    .line 4490
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v3

    .line 4491
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v4

    .line 4492
    sget v5, Lcom/tkay/expressad/exoplayer/e/a/a;->aH:I

    if-ne v4, v5, :cond_3

    .line 4493
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    add-int/2addr v2, v3

    .line 4502
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 4503
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 4504
    :cond_1
    :goto_2
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v1

    if-ge v1, v2, :cond_2

    .line 4505
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/f;->a(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/g/a$a;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 4507
    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 4510
    :cond_2
    invoke-virtual {p1}, Ljava/util/ArrayList;->isEmpty()Z

    move-result p0

    if-nez p0, :cond_4

    new-instance p0, Lcom/tkay/expressad/exoplayer/g/a;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/g/a;-><init>(Ljava/util/List;)V

    return-object p0

    :cond_3
    add-int/lit8 v3, v3, -0x8

    .line 4496
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    goto :goto_1

    :cond_4
    return-object v0

    :cond_5
    add-int/lit8 v2, v2, -0x8

    .line 481
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    goto :goto_0

    :cond_6
    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;I)Lcom/tkay/expressad/exoplayer/g/a;
    .locals 5

    const/16 v0, 0xc

    .line 487
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 488
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v0

    const/4 v1, 0x0

    if-ge v0, p1, :cond_4

    .line 489
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v0

    .line 490
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v2

    .line 491
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v3

    .line 492
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->aH:I

    if-ne v3, v4, :cond_3

    .line 493
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    add-int/2addr v0, v2

    const/16 p1, 0x8

    .line 5502
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 5503
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 5504
    :cond_0
    :goto_1
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v2

    if-ge v2, v0, :cond_1

    .line 5505
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/f;->a(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/g/a$a;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 5507
    invoke-virtual {p1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 5510
    :cond_1
    invoke-virtual {p1}, Ljava/util/ArrayList;->isEmpty()Z

    move-result p0

    if-eqz p0, :cond_2

    return-object v1

    :cond_2
    new-instance p0, Lcom/tkay/expressad/exoplayer/g/a;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/g/a;-><init>(Ljava/util/List;)V

    return-object p0

    :cond_3
    add-int/lit8 v2, v2, -0x8

    .line 496
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    goto :goto_0

    :cond_4
    return-object v1
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;IIIIILcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/e/a/b$c;I)V
    .locals 21

    move-object/from16 v0, p0

    move/from16 v1, p2

    move/from16 v2, p3

    move-object/from16 v3, p6

    move-object/from16 v4, p7

    add-int/lit8 v5, v1, 0x8

    add-int/lit8 v5, v5, 0x8

    .line 719
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    const/16 v5, 0x10

    .line 721
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 722
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v11

    .line 723
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v12

    const/16 v5, 0x32

    .line 726
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 728
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v5

    .line 729
    sget v6, Lcom/tkay/expressad/exoplayer/e/a/a;->ae:I

    move/from16 v8, p1

    if-ne v8, v6, :cond_2

    .line 730
    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/e/a/b;->b(Lcom/tkay/expressad/exoplayer/k/s;II)Landroid/util/Pair;

    move-result-object v6

    if-eqz v6, :cond_1

    .line 733
    iget-object v8, v6, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v8, Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    if-nez v3, :cond_0

    const/4 v3, 0x0

    goto :goto_0

    .line 735
    :cond_0
    iget-object v9, v6, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v9, Lcom/tkay/expressad/exoplayer/e/a/k;

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/e/a/k;->b:Ljava/lang/String;

    invoke-virtual {v3, v9}, Lcom/tkay/expressad/exoplayer/d/e;->a(Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/d/e;

    move-result-object v3

    .line 736
    :goto_0
    iget-object v9, v4, Lcom/tkay/expressad/exoplayer/e/a/b$c;->b:[Lcom/tkay/expressad/exoplayer/e/a/k;

    iget-object v6, v6, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v6, Lcom/tkay/expressad/exoplayer/e/a/k;

    aput-object v6, v9, p8

    .line 738
    :cond_1
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    :cond_2
    move-object/from16 v20, v3

    const/4 v3, -0x1

    const/high16 v9, 0x3f800000    # 1.0f

    move/from16 v18, v3

    move/from16 v16, v9

    const/4 v3, 0x0

    const/4 v9, 0x0

    const/4 v14, 0x0

    const/16 v17, 0x0

    :goto_1
    sub-int v10, v5, v1

    if-ge v10, v2, :cond_1a

    .line 751
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 752
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v10

    .line 753
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v13

    if-nez v13, :cond_3

    .line 754
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v15

    sub-int/2addr v15, v1

    if-eq v15, v2, :cond_1a

    :cond_3
    if-lez v13, :cond_4

    const/4 v6, 0x1

    goto :goto_2

    :cond_4
    const/4 v6, 0x0

    :goto_2
    const-string v7, "childAtomSize should be positive"

    .line 758
    invoke-static {v6, v7}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    .line 759
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v6

    .line 760
    sget v7, Lcom/tkay/expressad/exoplayer/e/a/a;->M:I

    const/4 v15, 0x3

    if-ne v6, v7, :cond_7

    if-nez v3, :cond_5

    const/4 v15, 0x1

    goto :goto_3

    :cond_5
    const/4 v15, 0x0

    .line 761
    :goto_3
    invoke-static {v15}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    add-int/lit8 v10, v10, 0x8

    .line 763
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 764
    invoke-static/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/l/a;->a(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/l/a;

    move-result-object v3

    .line 765
    iget-object v14, v3, Lcom/tkay/expressad/exoplayer/l/a;->a:Ljava/util/List;

    .line 766
    iget v6, v3, Lcom/tkay/expressad/exoplayer/l/a;->b:I

    iput v6, v4, Lcom/tkay/expressad/exoplayer/e/a/b$c;->d:I

    if-nez v9, :cond_6

    .line 768
    iget v3, v3, Lcom/tkay/expressad/exoplayer/l/a;->e:F

    move/from16 v16, v3

    :cond_6
    const-string v3, "video/avc"

    goto/16 :goto_9

    .line 770
    :cond_7
    sget v7, Lcom/tkay/expressad/exoplayer/e/a/a;->N:I

    if-ne v6, v7, :cond_9

    if-nez v3, :cond_8

    const/4 v15, 0x1

    goto :goto_4

    :cond_8
    const/4 v15, 0x0

    .line 771
    :goto_4
    invoke-static {v15}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    add-int/lit8 v10, v10, 0x8

    .line 773
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 774
    invoke-static/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/l/d;->a(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/l/d;

    move-result-object v3

    .line 775
    iget-object v14, v3, Lcom/tkay/expressad/exoplayer/l/d;->a:Ljava/util/List;

    .line 776
    iget v3, v3, Lcom/tkay/expressad/exoplayer/l/d;->b:I

    iput v3, v4, Lcom/tkay/expressad/exoplayer/e/a/b$c;->d:I

    const-string v3, "video/hevc"

    goto/16 :goto_9

    .line 777
    :cond_9
    sget v7, Lcom/tkay/expressad/exoplayer/e/a/a;->aR:I

    if-ne v6, v7, :cond_c

    if-nez v3, :cond_a

    const/4 v15, 0x1

    goto :goto_5

    :cond_a
    const/4 v15, 0x0

    .line 778
    :goto_5
    invoke-static {v15}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 779
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->aP:I

    if-ne v8, v3, :cond_b

    const-string v3, "video/x-vnd.on2.vp8"

    goto/16 :goto_9

    :cond_b
    const-string v3, "video/x-vnd.on2.vp9"

    goto/16 :goto_9

    .line 780
    :cond_c
    sget v7, Lcom/tkay/expressad/exoplayer/e/a/a;->l:I

    if-ne v6, v7, :cond_e

    if-nez v3, :cond_d

    const/4 v15, 0x1

    goto :goto_6

    :cond_d
    const/4 v15, 0x0

    .line 781
    :goto_6
    invoke-static {v15}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    const-string v3, "video/3gpp"

    goto/16 :goto_9

    .line 783
    :cond_e
    sget v7, Lcom/tkay/expressad/exoplayer/e/a/a;->O:I

    if-ne v6, v7, :cond_10

    if-nez v3, :cond_f

    const/4 v15, 0x1

    goto :goto_7

    :cond_f
    const/4 v15, 0x0

    .line 784
    :goto_7
    invoke-static {v15}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 786
    invoke-static {v0, v10}, Lcom/tkay/expressad/exoplayer/e/a/b;->d(Lcom/tkay/expressad/exoplayer/k/s;I)Landroid/util/Pair;

    move-result-object v3

    .line 787
    iget-object v6, v3, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v6, Ljava/lang/String;

    .line 788
    iget-object v3, v3, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v3, [B

    invoke-static {v3}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v14

    move-object v3, v6

    goto/16 :goto_9

    .line 789
    :cond_10
    sget v7, Lcom/tkay/expressad/exoplayer/e/a/a;->an:I

    if-ne v6, v7, :cond_11

    add-int/lit8 v10, v10, 0x8

    .line 8864
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 8865
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v6

    .line 8866
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v7

    int-to-float v6, v6

    int-to-float v7, v7

    div-float v16, v6, v7

    const/4 v9, 0x1

    goto :goto_9

    .line 792
    :cond_11
    sget v7, Lcom/tkay/expressad/exoplayer/e/a/a;->aN:I

    if-ne v6, v7, :cond_14

    add-int/lit8 v6, v10, 0x8

    :goto_8
    sub-int v7, v6, v10

    if-ge v7, v13, :cond_13

    .line 9173
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 9174
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v7

    .line 9175
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v15

    .line 9176
    sget v1, Lcom/tkay/expressad/exoplayer/e/a/a;->aO:I

    if-ne v15, v1, :cond_12

    .line 9177
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    add-int/2addr v7, v6

    invoke-static {v1, v6, v7}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object v1

    move-object/from16 v17, v1

    goto :goto_9

    :cond_12
    add-int/2addr v6, v7

    move/from16 v1, p2

    goto :goto_8

    :cond_13
    const/16 v17, 0x0

    goto :goto_9

    .line 794
    :cond_14
    sget v1, Lcom/tkay/expressad/exoplayer/e/a/a;->aM:I

    if-ne v6, v1, :cond_19

    .line 795
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    .line 796
    invoke-virtual {v0, v15}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    if-nez v1, :cond_19

    .line 798
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    if-eqz v1, :cond_18

    const/4 v6, 0x1

    if-eq v1, v6, :cond_17

    const/4 v7, 0x2

    if-eq v1, v7, :cond_16

    if-eq v1, v15, :cond_15

    goto :goto_9

    :cond_15
    move/from16 v18, v15

    goto :goto_9

    :cond_16
    move/from16 v18, v7

    goto :goto_9

    :cond_17
    move/from16 v18, v6

    goto :goto_9

    :cond_18
    const/16 v18, 0x0

    :cond_19
    :goto_9
    add-int/2addr v5, v13

    move/from16 v1, p2

    goto/16 :goto_1

    :cond_1a
    if-nez v3, :cond_1b

    return-void

    .line 825
    :cond_1b
    invoke-static/range {p4 .. p4}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v6

    const/4 v8, 0x0

    const/4 v9, -0x1

    const/4 v10, -0x1

    const/high16 v13, -0x40800000    # -1.0f

    const/16 v19, 0x0

    move-object v7, v3

    move/from16 v15, p5

    invoke-static/range {v6 .. v20}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFLjava/util/List;IF[BILcom/tkay/expressad/exoplayer/l/b;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    iput-object v0, v4, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    return-void
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;IIIILjava/lang/String;Lcom/tkay/expressad/exoplayer/e/a/b$c;)V
    .locals 19

    move-object/from16 v0, p0

    move/from16 v1, p1

    move-object/from16 v2, p6

    add-int/lit8 v3, p2, 0x8

    add-int/lit8 v3, v3, 0x8

    .line 683
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 690
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->ao:I

    const-string v4, "application/ttml+xml"

    const/4 v5, 0x0

    const-wide v6, 0x7fffffffffffffffL

    if-ne v1, v3, :cond_0

    :goto_0
    move-object v9, v4

    move-object/from16 v18, v5

    move-wide/from16 v16, v6

    goto :goto_1

    .line 692
    :cond_0
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->az:I

    if-ne v1, v3, :cond_1

    add-int/lit8 v1, p3, -0x8

    add-int/lit8 v1, v1, -0x8

    .line 695
    new-array v3, v1, [B

    const/4 v4, 0x0

    .line 696
    invoke-virtual {v0, v3, v4, v1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 697
    invoke-static {v3}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v5

    const-string v4, "application/x-quicktime-tx3g"

    goto :goto_0

    .line 698
    :cond_1
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->aA:I

    if-ne v1, v0, :cond_2

    const-string v4, "application/x-mp4-vtt"

    goto :goto_0

    .line 700
    :cond_2
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->aB:I

    if-ne v1, v0, :cond_3

    const-wide/16 v6, 0x0

    goto :goto_0

    .line 703
    :cond_3
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->aC:I

    if-ne v1, v0, :cond_4

    const/4 v0, 0x1

    .line 706
    iput v0, v2, Lcom/tkay/expressad/exoplayer/e/a/b$c;->e:I

    const-string v4, "application/x-mp4-cea-608"

    goto :goto_0

    .line 712
    :goto_1
    invoke-static/range {p4 .. p4}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v8

    const/4 v10, 0x0

    const/4 v11, -0x1

    const/4 v12, 0x0

    const/4 v14, -0x1

    const/4 v15, 0x0

    move-object/from16 v13, p5

    invoke-static/range {v8 .. v18}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;ILcom/tkay/expressad/exoplayer/d/e;JLjava/util/List;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    iput-object v0, v2, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    return-void

    .line 709
    :cond_4
    new-instance v0, Ljava/lang/IllegalStateException;

    invoke-direct {v0}, Ljava/lang/IllegalStateException;-><init>()V

    throw v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;IIIILjava/lang/String;ZLcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/e/a/b$c;I)V
    .locals 24

    move-object/from16 v0, p0

    move/from16 v1, p2

    move/from16 v2, p3

    move-object/from16 v12, p5

    move-object/from16 v3, p7

    move-object/from16 v13, p8

    add-int/lit8 v4, v1, 0x8

    const/16 v5, 0x8

    add-int/2addr v4, v5

    .line 873
    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    const/4 v4, 0x6

    if-eqz p6, :cond_0

    .line 877
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v5

    .line 878
    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    goto :goto_0

    .line 880
    :cond_0
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    const/4 v5, 0x0

    :goto_0
    const/4 v15, 0x2

    const/16 v6, 0x10

    const/4 v11, 0x1

    if-eqz v5, :cond_3

    if-ne v5, v11, :cond_1

    goto :goto_1

    :cond_1
    if-ne v5, v15, :cond_2

    .line 895
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 9432
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->j()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Double;->longBitsToDouble(J)D

    move-result-wide v4

    .line 897
    invoke-static {v4, v5}, Ljava/lang/Math;->round(D)J

    move-result-wide v4

    long-to-int v4, v4

    .line 898
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v5

    const/16 v6, 0x14

    .line 902
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    goto :goto_2

    :cond_2
    return-void

    .line 887
    :cond_3
    :goto_1
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v7

    .line 888
    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 889
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->k()I

    move-result v4

    if-ne v5, v11, :cond_4

    .line 892
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    :cond_4
    move v5, v7

    .line 908
    :goto_2
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v6

    .line 909
    sget v7, Lcom/tkay/expressad/exoplayer/e/a/a;->af:I

    const/16 v16, 0x0

    move/from16 v8, p1

    if-ne v8, v7, :cond_7

    .line 910
    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/e/a/b;->b(Lcom/tkay/expressad/exoplayer/k/s;II)Landroid/util/Pair;

    move-result-object v7

    if-eqz v7, :cond_6

    .line 913
    iget-object v8, v7, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v8, Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    if-nez v3, :cond_5

    move-object/from16 v3, v16

    goto :goto_3

    .line 915
    :cond_5
    iget-object v9, v7, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v9, Lcom/tkay/expressad/exoplayer/e/a/k;

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/e/a/k;->b:Ljava/lang/String;

    invoke-virtual {v3, v9}, Lcom/tkay/expressad/exoplayer/d/e;->a(Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/d/e;

    move-result-object v3

    .line 916
    :goto_3
    iget-object v9, v13, Lcom/tkay/expressad/exoplayer/e/a/b$c;->b:[Lcom/tkay/expressad/exoplayer/e/a/k;

    iget-object v7, v7, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v7, Lcom/tkay/expressad/exoplayer/e/a/k;

    aput-object v7, v9, p9

    .line 918
    :cond_6
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    :cond_7
    move-object v10, v3

    .line 927
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->s:I

    const-string v9, "audio/raw"

    if-ne v8, v3, :cond_8

    const-string v3, "audio/ac3"

    goto :goto_6

    .line 929
    :cond_8
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->u:I

    if-ne v8, v3, :cond_9

    const-string v3, "audio/eac3"

    goto :goto_6

    .line 931
    :cond_9
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->w:I

    if-ne v8, v3, :cond_a

    const-string v3, "audio/vnd.dts"

    goto :goto_6

    .line 933
    :cond_a
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->x:I

    if-eq v8, v3, :cond_13

    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->y:I

    if-ne v8, v3, :cond_b

    goto :goto_5

    .line 935
    :cond_b
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->z:I

    if-ne v8, v3, :cond_c

    const-string v3, "audio/vnd.dts.hd;profile=lbr"

    goto :goto_6

    .line 937
    :cond_c
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->aD:I

    if-ne v8, v3, :cond_d

    const-string v3, "audio/3gpp"

    goto :goto_6

    .line 939
    :cond_d
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->aE:I

    if-ne v8, v3, :cond_e

    const-string v3, "audio/amr-wb"

    goto :goto_6

    .line 941
    :cond_e
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->q:I

    if-eq v8, v3, :cond_12

    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->r:I

    if-ne v8, v3, :cond_f

    goto :goto_4

    .line 943
    :cond_f
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->o:I

    if-ne v8, v3, :cond_10

    const-string v3, "audio/mpeg"

    goto :goto_6

    .line 945
    :cond_10
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->aT:I

    if-ne v8, v3, :cond_11

    const-string v3, "audio/alac"

    goto :goto_6

    :cond_11
    move-object/from16 v3, v16

    goto :goto_6

    :cond_12
    :goto_4
    move-object v3, v9

    goto :goto_6

    :cond_13
    :goto_5
    const-string v3, "audio/vnd.dts.hd"

    :goto_6
    move-object v8, v3

    move/from16 v18, v4

    move/from16 v17, v5

    move v7, v6

    move-object/from16 v19, v16

    :goto_7
    sub-int v3, v7, v1

    const/4 v4, -0x1

    if-ge v3, v2, :cond_21

    .line 951
    invoke-virtual {v0, v7}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 952
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v6

    if-lez v6, :cond_14

    move v3, v11

    goto :goto_8

    :cond_14
    const/4 v3, 0x0

    :goto_8
    const-string v5, "childAtomSize should be positive"

    .line 953
    invoke-static {v3, v5}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    .line 954
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v3

    .line 955
    sget v11, Lcom/tkay/expressad/exoplayer/e/a/a;->O:I

    if-eq v3, v11, :cond_1b

    if-eqz p6, :cond_15

    sget v11, Lcom/tkay/expressad/exoplayer/e/a/a;->p:I

    if-ne v3, v11, :cond_15

    goto/16 :goto_c

    .line 972
    :cond_15
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->t:I

    if-ne v3, v4, :cond_16

    add-int/lit8 v3, v7, 0x8

    .line 973
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 974
    invoke-static/range {p4 .. p4}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3, v12, v10}, Lcom/tkay/expressad/exoplayer/b/a;->a(Lcom/tkay/expressad/exoplayer/k/s;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v3

    iput-object v3, v13, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    :goto_9
    move v15, v6

    move v14, v7

    move-object/from16 v22, v8

    move-object/from16 v23, v9

    move-object/from16 v21, v10

    const/4 v6, 0x0

    const/16 v20, 0x1

    goto :goto_b

    .line 976
    :cond_16
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->v:I

    if-ne v3, v4, :cond_17

    add-int/lit8 v3, v7, 0x8

    .line 977
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 978
    invoke-static/range {p4 .. p4}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3, v12, v10}, Lcom/tkay/expressad/exoplayer/b/a;->b(Lcom/tkay/expressad/exoplayer/k/s;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v3

    iput-object v3, v13, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    goto :goto_9

    .line 980
    :cond_17
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->A:I

    if-ne v3, v4, :cond_18

    .line 981
    invoke-static/range {p4 .. p4}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x0

    const/4 v11, -0x1

    const/16 v21, 0x0

    move-object v4, v8

    move v15, v6

    move v6, v11

    move v11, v7

    move/from16 v7, v17

    move-object/from16 v22, v8

    move/from16 v8, v18

    move-object/from16 v23, v9

    move-object/from16 v9, v21

    move-object/from16 v21, v10

    move v14, v11

    const/16 v20, 0x1

    move-object/from16 v11, p5

    invoke-static/range {v3 .. v11}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v3

    iput-object v3, v13, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    goto :goto_a

    :cond_18
    move v15, v6

    move v14, v7

    move-object/from16 v22, v8

    move-object/from16 v23, v9

    move-object/from16 v21, v10

    const/16 v20, 0x1

    .line 984
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->aT:I

    if-ne v3, v4, :cond_19

    .line 985
    new-array v3, v15, [B

    .line 986
    invoke-virtual {v0, v14}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    const/4 v6, 0x0

    .line 987
    invoke-virtual {v0, v3, v6, v15}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    move-object/from16 v19, v3

    goto :goto_b

    :cond_19
    :goto_a
    const/4 v6, 0x0

    :cond_1a
    :goto_b
    move-object/from16 v8, v22

    goto/16 :goto_10

    :cond_1b
    :goto_c
    move v15, v6

    move v14, v7

    move-object/from16 v22, v8

    move-object/from16 v23, v9

    move-object/from16 v21, v10

    const/4 v6, 0x0

    const/16 v20, 0x1

    .line 956
    sget v7, Lcom/tkay/expressad/exoplayer/e/a/a;->O:I

    if-ne v3, v7, :cond_1c

    move v7, v14

    goto :goto_f

    .line 10008
    :cond_1c
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v3

    move v7, v3

    :goto_d
    sub-int v3, v7, v14

    if-ge v3, v15, :cond_1f

    .line 10010
    invoke-virtual {v0, v7}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 10011
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v3

    if-lez v3, :cond_1d

    move/from16 v11, v20

    goto :goto_e

    :cond_1d
    move v11, v6

    .line 10012
    :goto_e
    invoke-static {v11, v5}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    .line 10013
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v8

    .line 10014
    sget v9, Lcom/tkay/expressad/exoplayer/e/a/a;->O:I

    if-ne v8, v9, :cond_1e

    goto :goto_f

    :cond_1e
    add-int/2addr v7, v3

    goto :goto_d

    :cond_1f
    move v7, v4

    :goto_f
    if-eq v7, v4, :cond_1a

    .line 960
    invoke-static {v0, v7}, Lcom/tkay/expressad/exoplayer/e/a/b;->d(Lcom/tkay/expressad/exoplayer/k/s;I)Landroid/util/Pair;

    move-result-object v3

    .line 961
    iget-object v4, v3, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v4, Ljava/lang/String;

    .line 962
    iget-object v3, v3, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v3, [B

    const-string v5, "audio/mp4a-latm"

    .line 963
    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_20

    .line 967
    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/k/d;->a([B)Landroid/util/Pair;

    move-result-object v5

    .line 968
    iget-object v7, v5, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v7, Ljava/lang/Integer;

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    .line 969
    iget-object v5, v5, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v5, Ljava/lang/Integer;

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    move-object/from16 v19, v3

    move-object v8, v4

    move/from16 v17, v5

    move/from16 v18, v7

    goto :goto_10

    :cond_20
    move-object/from16 v19, v3

    move-object v8, v4

    :goto_10
    add-int v7, v14, v15

    move/from16 v11, v20

    move-object/from16 v10, v21

    move-object/from16 v9, v23

    const/4 v15, 0x2

    goto/16 :goto_7

    :cond_21
    move-object/from16 v22, v8

    move-object/from16 v23, v9

    move-object/from16 v21, v10

    .line 992
    iget-object v0, v13, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    if-nez v0, :cond_24

    move-object/from16 v8, v22

    if-eqz v8, :cond_24

    move-object/from16 v0, v23

    .line 995
    invoke-virtual {v0, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_22

    const/4 v6, 0x2

    goto :goto_11

    :cond_22
    move v6, v4

    .line 996
    :goto_11
    invoke-static/range {p4 .. p4}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    const/4 v3, -0x1

    if-nez v19, :cond_23

    move-object/from16 v7, v16

    goto :goto_12

    .line 998
    :cond_23
    invoke-static/range {v19 .. v19}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    move-object v7, v1

    :goto_12
    move-object v1, v8

    move/from16 v4, v17

    move/from16 v5, v18

    move-object/from16 v8, v21

    move-object/from16 v9, p5

    .line 996
    invoke-static/range {v0 .. v9}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    iput-object v0, v13, Lcom/tkay/expressad/exoplayer/e/a/b$c;->c:Lcom/tkay/expressad/exoplayer/m;

    :cond_24
    return-void
.end method

.method private static a([JJJJ)Z
    .locals 7

    .line 1200
    array-length v0, p0

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    const/4 v2, 0x3

    const/4 v3, 0x0

    .line 1201
    invoke-static {v2, v3, v0}, Lcom/tkay/expressad/exoplayer/k/af;->a(III)I

    move-result v4

    .line 1202
    array-length v5, p0

    sub-int/2addr v5, v2

    .line 1203
    invoke-static {v5, v3, v0}, Lcom/tkay/expressad/exoplayer/k/af;->a(III)I

    move-result v0

    .line 1204
    aget-wide v5, p0, v3

    cmp-long v2, v5, p3

    if-gtz v2, :cond_0

    aget-wide v4, p0, v4

    cmp-long p3, p3, v4

    if-gez p3, :cond_0

    aget-wide p3, p0, v0

    cmp-long p0, p3, p5

    if-gez p0, :cond_0

    cmp-long p0, p5, p1

    if-gtz p0, :cond_0

    return v1

    :cond_0
    return v3
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/k/s;II)Landroid/util/Pair;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/k/s;",
            "II)",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Lcom/tkay/expressad/exoplayer/e/a/k;",
            ">;"
        }
    .end annotation

    .line 1073
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v0

    :goto_0
    sub-int v1, v0, p1

    if-ge v1, p2, :cond_2

    .line 1075
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 1076
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    if-lez v1, :cond_0

    const/4 v2, 0x1

    goto :goto_1

    :cond_0
    const/4 v2, 0x0

    :goto_1
    const-string v3, "childAtomSize should be positive"

    .line 1077
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    .line 1078
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v2

    .line 1079
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->aa:I

    if-ne v2, v3, :cond_1

    .line 1080
    invoke-static {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/e/a/b;->c(Lcom/tkay/expressad/exoplayer/k/s;II)Landroid/util/Pair;

    move-result-object v2

    if-eqz v2, :cond_1

    return-object v2

    :cond_1
    add-int/2addr v0, v1

    goto :goto_0

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/e/a/b$f;
    .locals 11

    const/16 v0, 0x8

    .line 533
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 534
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    .line 535
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/e/a/a;->a(I)I

    move-result v1

    const/16 v2, 0x10

    if-nez v1, :cond_0

    move v3, v0

    goto :goto_0

    :cond_0
    move v3, v2

    .line 537
    :goto_0
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 538
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v3

    const/4 v4, 0x4

    .line 540
    invoke-virtual {p0, v4}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 542
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v5

    if-nez v1, :cond_1

    move v0, v4

    :cond_1
    const/4 v6, 0x0

    move v7, v6

    :goto_1
    if-ge v7, v0, :cond_3

    .line 545
    iget-object v8, p0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    add-int v9, v5, v7

    aget-byte v8, v8, v9

    const/4 v9, -0x1

    if-eq v8, v9, :cond_2

    move v5, v6

    goto :goto_2

    :cond_2
    add-int/lit8 v7, v7, 0x1

    goto :goto_1

    :cond_3
    const/4 v5, 0x1

    :goto_2
    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    if-eqz v5, :cond_4

    .line 552
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    goto :goto_4

    :cond_4
    if-nez v1, :cond_5

    .line 555
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v0

    goto :goto_3

    :cond_5
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->n()J

    move-result-wide v0

    :goto_3
    const-wide/16 v9, 0x0

    cmp-long v5, v0, v9

    if-nez v5, :cond_6

    goto :goto_4

    :cond_6
    move-wide v7, v0

    .line 563
    :goto_4
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 564
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v0

    .line 565
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    .line 566
    invoke-virtual {p0, v4}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 567
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v2

    .line 568
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result p0

    const/high16 v4, 0x10000

    const/high16 v5, -0x10000

    if-nez v0, :cond_7

    if-ne v1, v4, :cond_7

    if-ne v2, v5, :cond_7

    if-nez p0, :cond_7

    const/16 v6, 0x5a

    goto :goto_5

    :cond_7
    if-nez v0, :cond_8

    if-ne v1, v5, :cond_8

    if-ne v2, v4, :cond_8

    if-nez p0, :cond_8

    const/16 v6, 0x10e

    goto :goto_5

    :cond_8
    if-ne v0, v5, :cond_9

    if-nez v1, :cond_9

    if-nez v2, :cond_9

    if-ne p0, v5, :cond_9

    const/16 v6, 0xb4

    .line 583
    :cond_9
    :goto_5
    new-instance p0, Lcom/tkay/expressad/exoplayer/e/a/b$f;

    invoke-direct {p0, v3, v7, v8, v6}, Lcom/tkay/expressad/exoplayer/e/a/b$f;-><init>(IJI)V

    return-object p0
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/k/s;I)Lcom/tkay/expressad/exoplayer/g/a;
    .locals 2

    const/16 v0, 0x8

    .line 502
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 503
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 504
    :cond_0
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v1

    if-ge v1, p1, :cond_1

    .line 505
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/f;->a(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/g/a$a;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 507
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 510
    :cond_1
    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result p0

    if-eqz p0, :cond_2

    const/4 p0, 0x0

    return-object p0

    :cond_2
    new-instance p0, Lcom/tkay/expressad/exoplayer/g/a;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/g/a;-><init>(Ljava/util/List;)V

    return-object p0
.end method

.method private static c(Lcom/tkay/expressad/exoplayer/k/s;I)F
    .locals 0

    add-int/lit8 p1, p1, 0x8

    .line 864
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 865
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result p1

    .line 866
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result p0

    int-to-float p1, p1

    int-to-float p0, p0

    div-float/2addr p1, p0

    return p1
.end method

.method private static c(Lcom/tkay/expressad/exoplayer/k/s;)I
    .locals 1

    const/16 v0, 0x10

    .line 593
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 594
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result p0

    .line 595
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/b;->c:I

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    .line 597
    :cond_0
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/b;->b:I

    if-ne p0, v0, :cond_1

    const/4 p0, 0x2

    return p0

    .line 599
    :cond_1
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/b;->d:I

    if-eq p0, v0, :cond_4

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/b;->e:I

    if-eq p0, v0, :cond_4

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/b;->f:I

    if-eq p0, v0, :cond_4

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/b;->g:I

    if-ne p0, v0, :cond_2

    goto :goto_0

    .line 602
    :cond_2
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/b;->h:I

    if-ne p0, v0, :cond_3

    const/4 p0, 0x4

    return p0

    :cond_3
    const/4 p0, -0x1

    return p0

    :cond_4
    :goto_0
    const/4 p0, 0x3

    return p0
.end method

.method private static c(Lcom/tkay/expressad/exoplayer/k/s;II)Landroid/util/Pair;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/k/s;",
            "II)",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Lcom/tkay/expressad/exoplayer/e/a/k;",
            ">;"
        }
    .end annotation

    add-int/lit8 v0, p1, 0x8

    const/4 v1, -0x1

    const/4 v2, 0x0

    const/4 v3, 0x0

    move v5, v1

    move-object v4, v2

    move-object v6, v4

    move v7, v3

    :goto_0
    sub-int v8, v0, p1

    if-ge v8, p2, :cond_3

    .line 1099
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 1100
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v8

    .line 1101
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v9

    .line 1102
    sget v10, Lcom/tkay/expressad/exoplayer/e/a/a;->ag:I

    if-ne v9, v10, :cond_0

    .line 1103
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    goto :goto_1

    .line 1104
    :cond_0
    sget v10, Lcom/tkay/expressad/exoplayer/e/a/a;->ab:I

    if-ne v9, v10, :cond_1

    const/4 v4, 0x4

    .line 1105
    invoke-virtual {p0, v4}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 1107
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->o()Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1108
    :cond_1
    sget v10, Lcom/tkay/expressad/exoplayer/e/a/a;->ac:I

    if-ne v9, v10, :cond_2

    move v5, v0

    move v7, v8

    :cond_2
    :goto_1
    add-int/2addr v0, v8

    goto :goto_0

    :cond_3
    const-string p1, "cenc"

    .line 1115
    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_5

    const-string p1, "cbc1"

    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_5

    const-string p1, "cens"

    .line 1116
    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_5

    const-string p1, "cbcs"

    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_4

    goto :goto_2

    :cond_4
    return-object v2

    :cond_5
    :goto_2
    const/4 p1, 0x1

    if-eqz v6, :cond_6

    move p2, p1

    goto :goto_3

    :cond_6
    move p2, v3

    :goto_3
    const-string v0, "frma atom is mandatory"

    .line 1117
    invoke-static {p2, v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    if-eq v5, v1, :cond_7

    move p2, p1

    goto :goto_4

    :cond_7
    move p2, v3

    :goto_4
    const-string v0, "schi atom is mandatory"

    .line 1118
    invoke-static {p2, v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    .line 1120
    invoke-static {p0, v5, v7, v4}, Lcom/tkay/expressad/exoplayer/e/a/b;->a(Lcom/tkay/expressad/exoplayer/k/s;IILjava/lang/String;)Lcom/tkay/expressad/exoplayer/e/a/k;

    move-result-object p0

    if-eqz p0, :cond_8

    move v3, p1

    :cond_8
    const-string p1, "tenc atom is mandatory"

    .line 1122
    invoke-static {v3, p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    .line 1123
    invoke-static {v6, p0}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p0

    return-object p0
.end method

.method private static d(Lcom/tkay/expressad/exoplayer/k/s;)Landroid/util/Pair;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/k/s;",
            ")",
            "Landroid/util/Pair<",
            "Ljava/lang/Long;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const/16 v0, 0x8

    .line 617
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 618
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    .line 619
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/e/a/a;->a(I)I

    move-result v1

    if-nez v1, :cond_0

    move v2, v0

    goto :goto_0

    :cond_0
    const/16 v2, 0x10

    .line 620
    :goto_0
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 621
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v2

    if-nez v1, :cond_1

    const/4 v0, 0x4

    .line 622
    :cond_1
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 623
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result p0

    .line 624
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    shr-int/lit8 v1, p0, 0xa

    and-int/lit8 v1, v1, 0x1f

    add-int/lit8 v1, v1, 0x60

    int-to-char v1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    shr-int/lit8 v1, p0, 0x5

    and-int/lit8 v1, v1, 0x1f

    add-int/lit8 v1, v1, 0x60

    int-to-char v1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    and-int/lit8 p0, p0, 0x1f

    add-int/lit8 p0, p0, 0x60

    int-to-char p0, p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 627
    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-static {v0, p0}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p0

    return-object p0
.end method

.method private static d(Lcom/tkay/expressad/exoplayer/k/s;I)Landroid/util/Pair;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/k/s;",
            "I)",
            "Landroid/util/Pair<",
            "Ljava/lang/String;",
            "[B>;"
        }
    .end annotation

    add-int/lit8 p1, p1, 0x8

    add-int/lit8 p1, p1, 0x4

    .line 1026
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    const/4 p1, 0x1

    .line 1028
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 1029
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/b;->e(Lcom/tkay/expressad/exoplayer/k/s;)I

    const/4 v0, 0x2

    .line 1030
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 1032
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    and-int/lit16 v2, v1, 0x80

    if-eqz v2, :cond_0

    .line 1034
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    :cond_0
    and-int/lit8 v2, v1, 0x40

    if-eqz v2, :cond_1

    .line 1037
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v2

    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    :cond_1
    and-int/lit8 v1, v1, 0x20

    if-eqz v1, :cond_2

    .line 1040
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 1044
    :cond_2
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 1045
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/b;->e(Lcom/tkay/expressad/exoplayer/k/s;)I

    .line 1048
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    .line 1049
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/o;->a(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "audio/mpeg"

    .line 1050
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "audio/vnd.dts"

    .line 1051
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "audio/vnd.dts.hd"

    .line 1052
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    goto :goto_0

    :cond_3
    const/16 v1, 0xc

    .line 1056
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 1059
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 1060
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/e/a/b;->e(Lcom/tkay/expressad/exoplayer/k/s;)I

    move-result p1

    .line 1061
    new-array v1, p1, [B

    const/4 v2, 0x0

    .line 1062
    invoke-virtual {p0, v1, v2, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 1063
    invoke-static {v0, v1}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p0

    return-object p0

    :cond_4
    :goto_0
    const/4 p0, 0x0

    .line 1053
    invoke-static {v0, p0}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p0

    return-object p0
.end method

.method private static d(Lcom/tkay/expressad/exoplayer/k/s;II)[B
    .locals 4

    add-int/lit8 v0, p1, 0x8

    :goto_0
    sub-int v1, v0, p1

    if-ge v1, p2, :cond_1

    .line 1173
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 1174
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    .line 1175
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v2

    .line 1176
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->aO:I

    if-ne v2, v3, :cond_0

    .line 1177
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    add-int/2addr v1, v0

    invoke-static {p0, v0, v1}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object p0

    return-object p0

    :cond_0
    add-int/2addr v0, v1

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private static e(Lcom/tkay/expressad/exoplayer/k/s;)I
    .locals 3

    .line 1188
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    and-int/lit8 v1, v0, 0x7f

    :goto_0
    const/16 v2, 0x80

    and-int/2addr v0, v2

    if-ne v0, v2, :cond_0

    .line 1191
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    shl-int/lit8 v1, v1, 0x7

    and-int/lit8 v2, v0, 0x7f

    or-int/2addr v1, v2

    goto :goto_0

    :cond_0
    return v1
.end method
