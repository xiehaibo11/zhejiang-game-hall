.class public abstract Lcom/tkay/expressad/exoplayer/f/b;
.super Lcom/tkay/expressad/exoplayer/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/f/b$a;,
        Lcom/tkay/expressad/exoplayer/f/b$e;,
        Lcom/tkay/expressad/exoplayer/f/b$d;,
        Lcom/tkay/expressad/exoplayer/f/b$c;,
        Lcom/tkay/expressad/exoplayer/f/b$b;
    }
.end annotation


# static fields
.field private static final A:I = 0x1

.field private static final B:I = 0x2

.field private static final C:[B

.field private static final D:I = 0x20

.field protected static final n:I = 0x0

.field protected static final o:I = 0x1

.field protected static final p:I = 0x3

.field private static final r:Ljava/lang/String; = "MediaCodecRenderer"

.field private static final s:J = 0x3e8L

.field private static final t:I = 0x0

.field private static final u:I = 0x1

.field private static final v:I = 0x2

.field private static final w:I = 0x0

.field private static final x:I = 0x1

.field private static final y:I = 0x2

.field private static final z:I


# instance fields
.field private final E:Lcom/tkay/expressad/exoplayer/f/c;

.field private final F:Lcom/tkay/expressad/exoplayer/d/g;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;"
        }
    .end annotation
.end field

.field private final G:Z

.field private final H:Lcom/tkay/expressad/exoplayer/c/e;

.field private final I:Lcom/tkay/expressad/exoplayer/c/e;

.field private final J:Lcom/tkay/expressad/exoplayer/n;

.field private final K:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field private final L:Landroid/media/MediaCodec$BufferInfo;

.field private M:Lcom/tkay/expressad/exoplayer/m;

.field private N:Lcom/tkay/expressad/exoplayer/d/f;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/d/f<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;"
        }
    .end annotation
.end field

.field private O:Lcom/tkay/expressad/exoplayer/d/f;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/d/f<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;"
        }
    .end annotation
.end field

.field private P:Landroid/media/MediaCodec;

.field private Q:Lcom/tkay/expressad/exoplayer/f/a;

.field private R:I

.field private S:Z

.field private T:Z

.field private U:Z

.field private V:Z

.field private W:Z

.field private X:Z

.field private Y:Z

.field private Z:Z

.field private aa:[Ljava/nio/ByteBuffer;

.field private ab:[Ljava/nio/ByteBuffer;

.field private ac:J

.field private ad:I

.field private ae:I

.field private af:Ljava/nio/ByteBuffer;

.field private ag:Z

.field private ah:Z

.field private ai:I

.field private aj:I

.field private ak:Z

.field private al:Z

.field private am:Z

.field private an:Z

.field private ao:Z

.field private ap:Z

.field protected q:Lcom/tkay/expressad/exoplayer/c/d;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "0000016742C00BDA259000000168CE0F13200000016588840DCE7118A0002FBF1C31C3275D78"

    .line 218
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->g(Ljava/lang/String;)[B

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/exoplayer/f/b;->C:[B

    return-void
.end method

.method public constructor <init>(ILcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Z)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Lcom/tkay/expressad/exoplayer/f/c;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;Z)V"
        }
    .end annotation

    .line 281
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/a;-><init>(I)V

    .line 282
    sget p1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/4 p4, 0x0

    const/16 v0, 0x10

    if-lt p1, v0, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    move p1, p4

    :goto_0
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 283
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/f/c;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->E:Lcom/tkay/expressad/exoplayer/f/c;

    .line 284
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    .line 285
    iput-boolean p4, p0, Lcom/tkay/expressad/exoplayer/f/b;->G:Z

    .line 286
    new-instance p1, Lcom/tkay/expressad/exoplayer/c/e;

    invoke-direct {p1, p4}, Lcom/tkay/expressad/exoplayer/c/e;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    .line 287
    invoke-static {}, Lcom/tkay/expressad/exoplayer/c/e;->e()Lcom/tkay/expressad/exoplayer/c/e;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->I:Lcom/tkay/expressad/exoplayer/c/e;

    .line 288
    new-instance p1, Lcom/tkay/expressad/exoplayer/n;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/n;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->J:Lcom/tkay/expressad/exoplayer/n;

    .line 289
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->K:Ljava/util/List;

    .line 290
    new-instance p1, Landroid/media/MediaCodec$BufferInfo;

    invoke-direct {p1}, Landroid/media/MediaCodec$BufferInfo;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    .line 291
    iput p4, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    .line 292
    iput p4, p0, Lcom/tkay/expressad/exoplayer/f/b;->aj:I

    return-void
.end method

.method private C()Z
    .locals 13

    .line 642
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    const/4 v1, 0x0

    if-eqz v0, :cond_1d

    iget v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->aj:I

    const/4 v3, 0x2

    if-eq v2, v3, :cond_1d

    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->am:Z

    if-eqz v2, :cond_0

    goto/16 :goto_7

    .line 648
    :cond_0
    iget v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->ad:I

    if-gez v2, :cond_3

    const-wide/16 v4, 0x0

    .line 649
    invoke-virtual {v0, v4, v5}, Landroid/media/MediaCodec;->dequeueInputBuffer(J)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ad:I

    if-gez v0, :cond_1

    return v1

    .line 653
    :cond_1
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    .line 3809
    sget v4, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v5, 0x15

    if-lt v4, v5, :cond_2

    .line 3810
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v4, v0}, Landroid/media/MediaCodec;->getInputBuffer(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    goto :goto_0

    .line 3812
    :cond_2
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->aa:[Ljava/nio/ByteBuffer;

    aget-object v0, v4, v0

    .line 653
    :goto_0
    iput-object v0, v2, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    .line 654
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->a()V

    .line 657
    :cond_3
    iget v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->aj:I

    const/4 v2, 0x1

    if-ne v0, v2, :cond_5

    .line 660
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->U:Z

    if-nez v0, :cond_4

    .line 663
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->al:Z

    .line 664
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    iget v5, p0, Lcom/tkay/expressad/exoplayer/f/b;->ad:I

    const/4 v6, 0x0

    const/4 v7, 0x0

    const-wide/16 v8, 0x0

    const/4 v10, 0x4

    invoke-virtual/range {v4 .. v10}, Landroid/media/MediaCodec;->queueInputBuffer(IIIJI)V

    .line 665
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->G()V

    .line 667
    :cond_4
    iput v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->aj:I

    return v1

    .line 671
    :cond_5
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->Y:Z

    if-eqz v0, :cond_6

    .line 672
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->Y:Z

    .line 673
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    sget-object v1, Lcom/tkay/expressad/exoplayer/f/b;->C:[B

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->put([B)Ljava/nio/ByteBuffer;

    .line 674
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    iget v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->ad:I

    const/4 v5, 0x0

    sget-object v0, Lcom/tkay/expressad/exoplayer/f/b;->C:[B

    array-length v6, v0

    const-wide/16 v7, 0x0

    const/4 v9, 0x0

    invoke-virtual/range {v3 .. v9}, Landroid/media/MediaCodec;->queueInputBuffer(IIIJI)V

    .line 675
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->G()V

    .line 676
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->ak:Z

    return v2

    .line 682
    :cond_6
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ao:Z

    if-eqz v0, :cond_7

    const/4 v0, -0x4

    move v4, v1

    goto :goto_2

    .line 688
    :cond_7
    iget v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    if-ne v0, v2, :cond_9

    move v0, v1

    .line 689
    :goto_1
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-ge v0, v4, :cond_8

    .line 690
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [B

    .line 691
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    invoke-virtual {v5, v4}, Ljava/nio/ByteBuffer;->put([B)Ljava/nio/ByteBuffer;

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 693
    :cond_8
    iput v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    .line 695
    :cond_9
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->position()I

    move-result v0

    .line 696
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->J:Lcom/tkay/expressad/exoplayer/n;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {p0, v4, v5, v1}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I

    move-result v4

    move v12, v4

    move v4, v0

    move v0, v12

    :goto_2
    const/4 v5, -0x3

    if-ne v0, v5, :cond_a

    return v1

    :cond_a
    const/4 v5, -0x5

    if-ne v0, v5, :cond_c

    .line 703
    iget v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    if-ne v0, v3, :cond_b

    .line 706
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->a()V

    .line 707
    iput v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    .line 709
    :cond_b
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->J:Lcom/tkay/expressad/exoplayer/n;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/f/b;->b(Lcom/tkay/expressad/exoplayer/m;)V

    return v2

    .line 714
    :cond_c
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->c()Z

    move-result v0

    if-eqz v0, :cond_10

    .line 715
    iget v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    if-ne v0, v3, :cond_d

    .line 719
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->a()V

    .line 720
    iput v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    .line 722
    :cond_d
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->am:Z

    .line 723
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ak:Z

    if-nez v0, :cond_e

    .line 724
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->L()V

    return v1

    .line 728
    :cond_e
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->U:Z

    if-nez v0, :cond_f

    .line 731
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->al:Z

    .line 732
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    iget v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->ad:I

    const/4 v5, 0x0

    const/4 v6, 0x0

    const-wide/16 v7, 0x0

    const/4 v9, 0x4

    invoke-virtual/range {v3 .. v9}, Landroid/media/MediaCodec;->queueInputBuffer(IIIJI)V

    .line 733
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->G()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_f
    return v1

    :catch_0
    move-exception v0

    .line 739
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->s()I

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v0

    throw v0

    .line 743
    :cond_10
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ap:Z

    if-eqz v0, :cond_12

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->d()Z

    move-result v0

    if-nez v0, :cond_12

    .line 744
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->a()V

    .line 745
    iget v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    if-ne v0, v3, :cond_11

    .line 748
    iput v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    :cond_11
    return v2

    .line 752
    :cond_12
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->ap:Z

    .line 753
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->g()Z

    move-result v0

    .line 3855
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v3, :cond_15

    if-nez v0, :cond_13

    iget-boolean v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->G:Z

    if-eqz v3, :cond_13

    goto :goto_3

    .line 3858
    :cond_13
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v3}, Lcom/tkay/expressad/exoplayer/d/f;->e()I

    move-result v3

    if-eq v3, v2, :cond_14

    const/4 v5, 0x4

    if-eq v3, v5, :cond_15

    move v3, v2

    goto :goto_4

    .line 3860
    :cond_14
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/d/f;->f()Lcom/tkay/expressad/exoplayer/d/f$a;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->s()I

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v0

    throw v0

    :cond_15
    :goto_3
    move v3, v1

    .line 754
    :goto_4
    iput-boolean v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->ao:Z

    if-eqz v3, :cond_16

    return v1

    .line 758
    :cond_16
    iget-boolean v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->S:Z

    if-eqz v3, :cond_18

    if-nez v0, :cond_18

    .line 759
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/k/p;->a(Ljava/nio/ByteBuffer;)V

    .line 760
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->position()I

    move-result v3

    if-nez v3, :cond_17

    return v2

    .line 763
    :cond_17
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->S:Z

    .line 766
    :cond_18
    :try_start_1
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    iget-wide v9, v3, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    .line 767
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/c/e;->b()Z

    move-result v3

    if-eqz v3, :cond_19

    .line 768
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->K:Ljava/util/List;

    invoke-static {v9, v10}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    invoke-interface {v3, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 771
    :cond_19
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/c/e;->h()V

    .line 772
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {p0, v3}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/c/e;)V

    if-eqz v0, :cond_1c

    .line 775
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    .line 4840
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/b;->a()Landroid/media/MediaCodec$CryptoInfo;

    move-result-object v8

    if-nez v4, :cond_1a

    goto :goto_5

    .line 4847
    :cond_1a
    iget-object v0, v8, Landroid/media/MediaCodec$CryptoInfo;->numBytesOfClearData:[I

    if-nez v0, :cond_1b

    new-array v0, v2, [I

    .line 4848
    iput-object v0, v8, Landroid/media/MediaCodec$CryptoInfo;->numBytesOfClearData:[I

    .line 4850
    :cond_1b
    iget-object v0, v8, Landroid/media/MediaCodec$CryptoInfo;->numBytesOfClearData:[I

    aget v3, v0, v1

    add-int/2addr v3, v4

    aput v3, v0, v1

    .line 777
    :goto_5
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    iget v6, p0, Lcom/tkay/expressad/exoplayer/f/b;->ad:I

    const/4 v7, 0x0

    const/4 v11, 0x0

    invoke-virtual/range {v5 .. v11}, Landroid/media/MediaCodec;->queueSecureInputBuffer(IILandroid/media/MediaCodec$CryptoInfo;JI)V

    goto :goto_6

    .line 779
    :cond_1c
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    iget v6, p0, Lcom/tkay/expressad/exoplayer/f/b;->ad:I

    const/4 v7, 0x0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->limit()I

    move-result v8

    const/4 v11, 0x0

    invoke-virtual/range {v5 .. v11}, Landroid/media/MediaCodec;->queueInputBuffer(IIIJI)V

    .line 781
    :goto_6
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->G()V

    .line 782
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->ak:Z

    .line 783
    iput v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    .line 784
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->c:I

    add-int/2addr v1, v2

    iput v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->c:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return v2

    :catch_1
    move-exception v0

    .line 789
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->s()I

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v0

    throw v0

    :cond_1d
    :goto_7
    return v1
.end method

.method private D()V
    .locals 2

    .line 795
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_0

    .line 796
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v0}, Landroid/media/MediaCodec;->getInputBuffers()[Ljava/nio/ByteBuffer;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->aa:[Ljava/nio/ByteBuffer;

    .line 797
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v0}, Landroid/media/MediaCodec;->getOutputBuffers()[Ljava/nio/ByteBuffer;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ab:[Ljava/nio/ByteBuffer;

    :cond_0
    return-void
.end method

.method private E()V
    .locals 2

    .line 802
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_0

    const/4 v0, 0x0

    .line 803
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->aa:[Ljava/nio/ByteBuffer;

    .line 804
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ab:[Ljava/nio/ByteBuffer;

    :cond_0
    return-void
.end method

.method private F()Z
    .locals 1

    .line 825
    iget v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ae:I

    if-ltz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private G()V
    .locals 2

    const/4 v0, -0x1

    .line 829
    iput v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ad:I

    .line 830
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->H:Lcom/tkay/expressad/exoplayer/c/e;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    return-void
.end method

.method private H()V
    .locals 1

    const/4 v0, -0x1

    .line 834
    iput v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ae:I

    const/4 v0, 0x0

    .line 835
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->af:Ljava/nio/ByteBuffer;

    return-void
.end method

.method private static I()J
    .locals 2

    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method private J()V
    .locals 4

    .line 1134
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v0}, Landroid/media/MediaCodec;->getOutputFormat()Landroid/media/MediaFormat;

    move-result-object v0

    .line 1135
    iget v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->R:I

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    const-string v1, "width"

    .line 1136
    invoke-virtual {v0, v1}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result v1

    const/16 v3, 0x20

    if-ne v1, v3, :cond_0

    const-string v1, "height"

    .line 1137
    invoke-virtual {v0, v1}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result v1

    if-ne v1, v3, :cond_0

    .line 1139
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->Z:Z

    return-void

    .line 1142
    :cond_0
    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->X:Z

    if-eqz v1, :cond_1

    const-string v1, "channel-count"

    .line 1143
    invoke-virtual {v0, v1, v2}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 1145
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/expressad/exoplayer/f/b;->a(Landroid/media/MediaCodec;Landroid/media/MediaFormat;)V

    return-void
.end method

.method private K()V
    .locals 2

    .line 1152
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_0

    .line 1153
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v0}, Landroid/media/MediaCodec;->getOutputBuffers()[Ljava/nio/ByteBuffer;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ab:[Ljava/nio/ByteBuffer;

    :cond_0
    return-void
.end method

.method private L()V
    .locals 2

    .line 1207
    iget v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->aj:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 1209
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->A()V

    .line 1210
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->x()V

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 1212
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->an:Z

    .line 1213
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->w()V

    return-void
.end method

.method private static M()Z
    .locals 2

    .line 1235
    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    const-string v1, "Amazon"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "AFTM"

    .line 1236
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "AFTB"

    .line 1237
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/c/e;I)Landroid/media/MediaCodec$CryptoInfo;
    .locals 3

    .line 840
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/c/b;->a()Landroid/media/MediaCodec$CryptoInfo;

    move-result-object p0

    if-nez p1, :cond_0

    return-object p0

    .line 847
    :cond_0
    iget-object v0, p0, Landroid/media/MediaCodec$CryptoInfo;->numBytesOfClearData:[I

    if-nez v0, :cond_1

    const/4 v0, 0x1

    new-array v0, v0, [I

    .line 848
    iput-object v0, p0, Landroid/media/MediaCodec$CryptoInfo;->numBytesOfClearData:[I

    .line 850
    :cond_1
    iget-object v0, p0, Landroid/media/MediaCodec$CryptoInfo;->numBytesOfClearData:[I

    const/4 v1, 0x0

    aget v2, v0, v1

    add-int/2addr v2, p1

    aput v2, v0, v1

    return-object p0
.end method

.method private a(Lcom/tkay/expressad/exoplayer/f/b$b;)V
    .locals 1

    .line 453
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->s()I

    move-result v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object p1

    throw p1
.end method

.method private static a(Ljava/lang/String;)Z
    .locals 2

    .line 1252
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x12

    if-lt v0, v1, :cond_2

    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ne v0, v1, :cond_0

    const-string v0, "OMX.SEC.avc.dec"

    .line 1254
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "OMX.SEC.avc.dec.secure"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    :cond_0
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x13

    if-ne v0, v1, :cond_1

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "SM-G800"

    .line 1255
    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "OMX.Exynos.avc.dec"

    .line 1256
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "OMX.Exynos.avc.dec.secure"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_1

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    return p0

    :cond_2
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private static a(Ljava/lang/String;Lcom/tkay/expressad/exoplayer/m;)Z
    .locals 2

    .line 1298
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_0

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "OMX.MTK.VIDEO.DECODER.AVC"

    .line 1299
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static b(Ljava/lang/String;)I
    .locals 2

    .line 1273
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x19

    if-gt v0, v1, :cond_1

    const-string v0, "OMX.Exynos.avc.dec.secure"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "SM-T585"

    .line 1274
    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "SM-A510"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "SM-A520"

    .line 1275
    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "SM-J700"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    const/4 p0, 0x2

    return p0

    .line 1277
    :cond_1
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x18

    if-ge v0, v1, :cond_4

    const-string v0, "OMX.Nvidia.h264.decode"

    .line 1278
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "OMX.Nvidia.h264.decode.secure"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_4

    :cond_2
    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v0, "flounder"

    .line 1279
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_3

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v0, "flounder_lte"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_3

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v0, "grouper"

    .line 1280
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_3

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v0, "tilapia"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_4

    :cond_3
    const/4 p0, 0x1

    return p0

    :cond_4
    const/4 p0, 0x0

    return p0
.end method

.method private b(I)Ljava/nio/ByteBuffer;
    .locals 2

    .line 809
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    .line 810
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v0, p1}, Landroid/media/MediaCodec;->getInputBuffer(I)Ljava/nio/ByteBuffer;

    move-result-object p1

    return-object p1

    .line 812
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->aa:[Ljava/nio/ByteBuffer;

    aget-object p1, v0, p1

    return-object p1
.end method

.method private b(JJ)Z
    .locals 15

    move-object v12, p0

    .line 1026
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->F()Z

    move-result v0

    const/4 v13, 0x1

    const/4 v14, 0x0

    if-nez v0, :cond_10

    .line 1028
    iget-boolean v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->W:Z

    const-wide/16 v1, 0x0

    if-eqz v0, :cond_1

    iget-boolean v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->al:Z

    if-eqz v0, :cond_1

    .line 1030
    :try_start_0
    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    iget-object v3, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    .line 1031
    invoke-virtual {v0, v3, v1, v2}, Landroid/media/MediaCodec;->dequeueOutputBuffer(Landroid/media/MediaCodec$BufferInfo;J)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/IllegalStateException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 1033
    :catch_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->L()V

    .line 1034
    iget-boolean v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->an:Z

    if-eqz v0, :cond_0

    .line 1036
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->A()V

    :cond_0
    return v14

    .line 1041
    :cond_1
    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    iget-object v3, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    .line 1042
    invoke-virtual {v0, v3, v1, v2}, Landroid/media/MediaCodec;->dequeueOutputBuffer(Landroid/media/MediaCodec$BufferInfo;J)I

    move-result v0

    :goto_0
    const/16 v1, 0x15

    if-ltz v0, :cond_8

    .line 1047
    iget-boolean v2, v12, Lcom/tkay/expressad/exoplayer/f/b;->Z:Z

    if-eqz v2, :cond_2

    .line 1048
    iput-boolean v14, v12, Lcom/tkay/expressad/exoplayer/f/b;->Z:Z

    .line 1049
    iget-object v1, v12, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v1, v0, v14}, Landroid/media/MediaCodec;->releaseOutputBuffer(IZ)V

    return v13

    .line 1051
    :cond_2
    iget-object v2, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget v2, v2, Landroid/media/MediaCodec$BufferInfo;->size:I

    if-nez v2, :cond_3

    iget-object v2, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget v2, v2, Landroid/media/MediaCodec$BufferInfo;->flags:I

    and-int/lit8 v2, v2, 0x4

    if-eqz v2, :cond_3

    .line 1054
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->L()V

    return v14

    .line 1057
    :cond_3
    iput v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->ae:I

    .line 5817
    sget v2, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-lt v2, v1, :cond_4

    .line 5818
    iget-object v1, v12, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v1, v0}, Landroid/media/MediaCodec;->getOutputBuffer(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    goto :goto_1

    .line 5820
    :cond_4
    iget-object v1, v12, Lcom/tkay/expressad/exoplayer/f/b;->ab:[Ljava/nio/ByteBuffer;

    aget-object v0, v1, v0

    .line 1058
    :goto_1
    iput-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->af:Ljava/nio/ByteBuffer;

    if-eqz v0, :cond_5

    .line 1062
    iget-object v1, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget v1, v1, Landroid/media/MediaCodec$BufferInfo;->offset:I

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 1063
    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->af:Ljava/nio/ByteBuffer;

    iget-object v1, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget v1, v1, Landroid/media/MediaCodec$BufferInfo;->offset:I

    iget-object v2, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget v2, v2, Landroid/media/MediaCodec$BufferInfo;->size:I

    add-int/2addr v1, v2

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 1065
    :cond_5
    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget-wide v0, v0, Landroid/media/MediaCodec$BufferInfo;->presentationTimeUs:J

    .line 6220
    iget-object v2, v12, Lcom/tkay/expressad/exoplayer/f/b;->K:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    move v3, v14

    :goto_2
    if-ge v3, v2, :cond_7

    .line 6222
    iget-object v4, v12, Lcom/tkay/expressad/exoplayer/f/b;->K:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Long;

    invoke-virtual {v4}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    cmp-long v4, v4, v0

    if-nez v4, :cond_6

    .line 6223
    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->K:Ljava/util/List;

    invoke-interface {v0, v3}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move v0, v13

    goto :goto_3

    :cond_6
    add-int/lit8 v3, v3, 0x1

    goto :goto_2

    :cond_7
    move v0, v14

    .line 1065
    :goto_3
    iput-boolean v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->ag:Z

    goto :goto_5

    :cond_8
    const/4 v2, -0x2

    if-ne v0, v2, :cond_b

    .line 7134
    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v0}, Landroid/media/MediaCodec;->getOutputFormat()Landroid/media/MediaFormat;

    move-result-object v0

    .line 7135
    iget v1, v12, Lcom/tkay/expressad/exoplayer/f/b;->R:I

    if-eqz v1, :cond_9

    const-string v1, "width"

    .line 7136
    invoke-virtual {v0, v1}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result v1

    const/16 v2, 0x20

    if-ne v1, v2, :cond_9

    const-string v1, "height"

    .line 7137
    invoke-virtual {v0, v1}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result v1

    if-ne v1, v2, :cond_9

    .line 7139
    iput-boolean v13, v12, Lcom/tkay/expressad/exoplayer/f/b;->Z:Z

    goto :goto_4

    .line 7142
    :cond_9
    iget-boolean v1, v12, Lcom/tkay/expressad/exoplayer/f/b;->X:Z

    if-eqz v1, :cond_a

    const-string v1, "channel-count"

    .line 7143
    invoke-virtual {v0, v1, v13}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 7145
    :cond_a
    iget-object v1, v12, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/expressad/exoplayer/f/b;->a(Landroid/media/MediaCodec;Landroid/media/MediaFormat;)V

    :goto_4
    return v13

    :cond_b
    const/4 v2, -0x3

    if-ne v0, v2, :cond_d

    .line 7152
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ge v0, v1, :cond_c

    .line 7153
    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v0}, Landroid/media/MediaCodec;->getOutputBuffers()[Ljava/nio/ByteBuffer;

    move-result-object v0

    iput-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->ab:[Ljava/nio/ByteBuffer;

    :cond_c
    return v13

    .line 1074
    :cond_d
    iget-boolean v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->U:Z

    if-eqz v0, :cond_f

    iget-boolean v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->am:Z

    if-nez v0, :cond_e

    iget v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->aj:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_f

    .line 1077
    :cond_e
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->L()V

    :cond_f
    return v14

    .line 1084
    :cond_10
    :goto_5
    iget-boolean v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->W:Z

    if-eqz v0, :cond_12

    iget-boolean v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->al:Z

    if-eqz v0, :cond_12

    .line 1086
    :try_start_1
    iget-object v5, v12, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    iget-object v6, v12, Lcom/tkay/expressad/exoplayer/f/b;->af:Ljava/nio/ByteBuffer;

    iget v7, v12, Lcom/tkay/expressad/exoplayer/f/b;->ae:I

    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget v8, v0, Landroid/media/MediaCodec$BufferInfo;->flags:I

    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget-wide v9, v0, Landroid/media/MediaCodec$BufferInfo;->presentationTimeUs:J

    iget-boolean v11, v12, Lcom/tkay/expressad/exoplayer/f/b;->ag:Z

    move-object v0, p0

    move-wide/from16 v1, p1

    move-wide/from16 v3, p3

    .line 1087
    invoke-virtual/range {v0 .. v11}, Lcom/tkay/expressad/exoplayer/f/b;->a(JJLandroid/media/MediaCodec;Ljava/nio/ByteBuffer;IIJZ)Z

    move-result v0
    :try_end_1
    .catch Ljava/lang/IllegalStateException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_6

    .line 1097
    :catch_1
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->L()V

    .line 1098
    iget-boolean v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->an:Z

    if-eqz v0, :cond_11

    .line 1100
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->A()V

    :cond_11
    return v14

    .line 1105
    :cond_12
    iget-object v5, v12, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    iget-object v6, v12, Lcom/tkay/expressad/exoplayer/f/b;->af:Ljava/nio/ByteBuffer;

    iget v7, v12, Lcom/tkay/expressad/exoplayer/f/b;->ae:I

    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget v8, v0, Landroid/media/MediaCodec$BufferInfo;->flags:I

    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget-wide v9, v0, Landroid/media/MediaCodec$BufferInfo;->presentationTimeUs:J

    iget-boolean v11, v12, Lcom/tkay/expressad/exoplayer/f/b;->ag:Z

    move-object v0, p0

    move-wide/from16 v1, p1

    move-wide/from16 v3, p3

    .line 1106
    invoke-virtual/range {v0 .. v11}, Lcom/tkay/expressad/exoplayer/f/b;->a(JJLandroid/media/MediaCodec;Ljava/nio/ByteBuffer;IIJZ)Z

    move-result v0

    :goto_6
    if-eqz v0, :cond_15

    .line 1118
    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget-wide v0, v0, Landroid/media/MediaCodec$BufferInfo;->presentationTimeUs:J

    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/f/b;->c(J)V

    .line 1119
    iget-object v0, v12, Lcom/tkay/expressad/exoplayer/f/b;->L:Landroid/media/MediaCodec$BufferInfo;

    iget v0, v0, Landroid/media/MediaCodec$BufferInfo;->flags:I

    and-int/lit8 v0, v0, 0x4

    if-eqz v0, :cond_13

    move v0, v13

    goto :goto_7

    :cond_13
    move v0, v14

    .line 1120
    :goto_7
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->H()V

    if-nez v0, :cond_14

    return v13

    .line 1124
    :cond_14
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->L()V

    :cond_15
    return v14
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/f/a;)Z
    .locals 3

    .line 1315
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    .line 1316
    sget v1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v2, 0x11

    if-gt v1, v2, :cond_0

    const-string v1, "OMX.rk.video_decoder.avc"

    .line 1317
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "OMX.allwinner.video.decoder.avc"

    .line 1318
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    :cond_0
    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    const-string v1, "Amazon"

    .line 1319
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "AFTS"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-boolean p0, p0, Lcom/tkay/expressad/exoplayer/f/a;->h:Z

    if-eqz p0, :cond_2

    :cond_1
    const/4 p0, 0x1

    return p0

    :cond_2
    const/4 p0, 0x0

    return p0
.end method

.method private static b(Ljava/lang/String;Lcom/tkay/expressad/exoplayer/m;)Z
    .locals 2

    .line 1371
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x12

    if-gt v0, v1, :cond_0

    iget p1, p1, Lcom/tkay/expressad/exoplayer/m;->u:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    const-string p1, "OMX.MTK.AUDIO.DECODER.MP3"

    .line 1372
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private b(Z)Z
    .locals 3

    .line 855
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    if-nez p1, :cond_0

    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->G:Z

    if-eqz p1, :cond_0

    goto :goto_0

    .line 858
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/d/f;->e()I

    move-result p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_2

    const/4 v2, 0x4

    if-eq p1, v2, :cond_1

    return v0

    :cond_1
    return v1

    .line 860
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/d/f;->f()Lcom/tkay/expressad/exoplayer/d/f$a;

    move-result-object p1

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->s()I

    move-result v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object p1

    throw p1

    :cond_3
    :goto_0
    return v1
.end method

.method private c(I)Ljava/nio/ByteBuffer;
    .locals 2

    .line 817
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    .line 818
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v0, p1}, Landroid/media/MediaCodec;->getOutputBuffer(I)Ljava/nio/ByteBuffer;

    move-result-object p1

    return-object p1

    .line 820
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ab:[Ljava/nio/ByteBuffer;

    aget-object p1, v0, p1

    return-object p1
.end method

.method private static c(Ljava/lang/String;)Z
    .locals 2

    .line 1336
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x17

    if-gt v0, v1, :cond_0

    const-string v0, "OMX.google.vorbis.decoder"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    :cond_0
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x13

    if-gt v0, v1, :cond_2

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "hb2000"

    .line 1337
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "OMX.amlogic.avc.decoder.awesome"

    .line 1338
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "OMX.amlogic.avc.decoder.awesome.secure"

    .line 1339
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    :cond_1
    const/4 p0, 0x1

    return p0

    :cond_2
    const/4 p0, 0x0

    return p0
.end method

.method private d(J)Z
    .locals 5

    .line 1220
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->K:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_1

    .line 1222
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->K:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    cmp-long v3, v3, p1

    if-nez v3, :cond_0

    .line 1223
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->K:Ljava/util/List;

    invoke-interface {p1, v2}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    const/4 p1, 0x1

    return p1

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return v1
.end method

.method private static d(Ljava/lang/String;)Z
    .locals 2

    .line 1354
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x15

    if-ne v0, v1, :cond_0

    const-string v0, "OMX.google.aac.decoder"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method protected A()V
    .locals 4

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    .line 506
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ac:J

    .line 507
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->G()V

    .line 508
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->H()V

    const/4 v0, 0x0

    .line 509
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ao:Z

    .line 510
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ag:Z

    .line 511
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->K:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 3802
    sget v1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/4 v2, 0x0

    const/16 v3, 0x15

    if-ge v1, v3, :cond_0

    .line 3803
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->aa:[Ljava/nio/ByteBuffer;

    .line 3804
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->ab:[Ljava/nio/ByteBuffer;

    .line 513
    :cond_0
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    .line 514
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ah:Z

    .line 515
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ak:Z

    .line 516
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->S:Z

    .line 517
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->T:Z

    .line 518
    iput v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->R:I

    .line 519
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->U:Z

    .line 520
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->V:Z

    .line 521
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->X:Z

    .line 522
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->Y:Z

    .line 523
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->Z:Z

    .line 524
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->al:Z

    .line 525
    iput v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    .line 526
    iput v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->aj:I

    .line 527
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    if-eqz v0, :cond_5

    .line 528
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->b:I

    add-int/lit8 v1, v1, 0x1

    iput v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->b:I

    .line 530
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v0}, Landroid/media/MediaCodec;->stop()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    .line 533
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v0}, Landroid/media/MediaCodec;->release()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 535
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    .line 536
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v1, v0, :cond_1

    .line 538
    :try_start_2
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 540
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    return-void

    :catchall_0
    move-exception v0

    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 541
    throw v0

    :cond_1
    return-void

    :catchall_1
    move-exception v0

    .line 535
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    .line 536
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v1, :cond_2

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v3, v1, :cond_2

    .line 538
    :try_start_3
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    invoke-interface {v3, v1}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 540
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    goto :goto_0

    :catchall_2
    move-exception v0

    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 541
    throw v0

    .line 543
    :cond_2
    :goto_0
    throw v0

    :catchall_3
    move-exception v0

    .line 533
    :try_start_4
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v1}, Landroid/media/MediaCodec;->release()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_5

    .line 535
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    .line 536
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v1, :cond_3

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v3, v1, :cond_3

    .line 538
    :try_start_5
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    invoke-interface {v3, v1}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    .line 540
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    goto :goto_1

    :catchall_4
    move-exception v0

    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 541
    throw v0

    .line 544
    :cond_3
    :goto_1
    throw v0

    :catchall_5
    move-exception v0

    .line 535
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    .line 536
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v1, :cond_4

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v3, v1, :cond_4

    .line 538
    :try_start_6
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    invoke-interface {v3, v1}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_6

    .line 540
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    goto :goto_2

    :catchall_6
    move-exception v0

    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 541
    throw v0

    .line 543
    :cond_4
    :goto_2
    throw v0

    :cond_5
    return-void
.end method

.method protected B()V
    .locals 3

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    .line 608
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ac:J

    .line 609
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->G()V

    .line 610
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->H()V

    const/4 v0, 0x1

    .line 611
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ap:Z

    const/4 v1, 0x0

    .line 612
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->ao:Z

    .line 613
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->ag:Z

    .line 614
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->K:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->clear()V

    .line 615
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->Y:Z

    .line 616
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->Z:Z

    .line 617
    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->T:Z

    if-nez v2, :cond_2

    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->V:Z

    if-eqz v2, :cond_0

    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->al:Z

    if-eqz v2, :cond_0

    goto :goto_0

    .line 620
    :cond_0
    iget v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->aj:I

    if-eqz v2, :cond_1

    .line 623
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->A()V

    .line 624
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->x()V

    goto :goto_1

    .line 627
    :cond_1
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v2}, Landroid/media/MediaCodec;->flush()V

    .line 628
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->ak:Z

    goto :goto_1

    .line 618
    :cond_2
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->A()V

    .line 619
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->x()V

    .line 630
    :goto_1
    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->ah:Z

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    if-eqz v1, :cond_3

    .line 633
    iput v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    :cond_3
    return-void
.end method

.method protected a(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/m;)I
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method protected abstract a(Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Lcom/tkay/expressad/exoplayer/m;)I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/f/c;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;",
            "Lcom/tkay/expressad/exoplayer/m;",
            ")I"
        }
    .end annotation
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/m;)I
    .locals 2

    .line 303
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->E:Lcom/tkay/expressad/exoplayer/f/c;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    invoke-virtual {p0, v0, v1, p1}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Lcom/tkay/expressad/exoplayer/m;)I

    move-result p1
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/f/d$b; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 305
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->s()I

    move-result v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object p1

    throw p1
.end method

.method protected a(Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/m;Z)Lcom/tkay/expressad/exoplayer/f/a;
    .locals 0

    .line 335
    iget-object p2, p2, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    invoke-interface {p1, p2, p3}, Lcom/tkay/expressad/exoplayer/f/c;->a(Ljava/lang/String;Z)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object p1

    return-object p1
.end method

.method public final a(JJ)V
    .locals 5

    .line 560
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->an:Z

    if-eqz v0, :cond_0

    .line 561
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->w()V

    return-void

    .line 564
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    const/4 v1, -0x4

    const/4 v2, -0x5

    const/4 v3, 0x1

    if-nez v0, :cond_3

    .line 566
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->I:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->a()V

    .line 567
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->J:Lcom/tkay/expressad/exoplayer/n;

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->I:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {p0, v0, v4, v3}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I

    move-result v0

    if-ne v0, v2, :cond_1

    .line 569
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->J:Lcom/tkay/expressad/exoplayer/n;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/f/b;->b(Lcom/tkay/expressad/exoplayer/m;)V

    goto :goto_0

    :cond_1
    if-ne v0, v1, :cond_2

    .line 572
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->I:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/c/e;->c()Z

    move-result p1

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 573
    iput-boolean v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->am:Z

    .line 574
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->L()V

    :cond_2
    return-void

    .line 582
    :cond_3
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->x()V

    .line 583
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    if-eqz v0, :cond_6

    const-string v0, "drainAndFeed"

    .line 584
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    .line 585
    :cond_4
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/exoplayer/f/b;->b(JJ)Z

    move-result v0

    if-nez v0, :cond_4

    .line 586
    :cond_5
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->C()Z

    move-result p1

    if-nez p1, :cond_5

    .line 587
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    return-void

    .line 589
    :cond_6
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/f/b;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget p4, p3, Lcom/tkay/expressad/exoplayer/c/d;->d:I

    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/f/b;->b(J)I

    move-result p1

    add-int/2addr p4, p1

    iput p4, p3, Lcom/tkay/expressad/exoplayer/c/d;->d:I

    .line 594
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->I:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/c/e;->a()V

    .line 595
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->J:Lcom/tkay/expressad/exoplayer/n;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/f/b;->I:Lcom/tkay/expressad/exoplayer/c/e;

    const/4 p3, 0x0

    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I

    move-result p1

    if-ne p1, v2, :cond_7

    .line 597
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->J:Lcom/tkay/expressad/exoplayer/n;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/f/b;->b(Lcom/tkay/expressad/exoplayer/m;)V

    return-void

    :cond_7
    if-ne p1, v1, :cond_8

    .line 599
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->I:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/c/e;->c()Z

    move-result p1

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 600
    iput-boolean v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->am:Z

    .line 601
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->L()V

    :cond_8
    return-void
.end method

.method protected a(JZ)V
    .locals 0

    const/4 p1, 0x0

    .line 475
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->am:Z

    .line 476
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->an:Z

    .line 477
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    if-eqz p1, :cond_0

    .line 478
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->B()V

    :cond_0
    return-void
.end method

.method protected a(Landroid/media/MediaCodec;Landroid/media/MediaFormat;)V
    .locals 0

    return-void
.end method

.method protected a(Lcom/tkay/expressad/exoplayer/c/e;)V
    .locals 0

    return-void
.end method

.method protected abstract a(Lcom/tkay/expressad/exoplayer/f/a;Landroid/media/MediaCodec;Lcom/tkay/expressad/exoplayer/m;Landroid/media/MediaCrypto;)V
.end method

.method protected a(Ljava/lang/String;JJ)V
    .locals 0

    return-void
.end method

.method protected a(Z)V
    .locals 0

    .line 470
    new-instance p1, Lcom/tkay/expressad/exoplayer/c/d;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/c/d;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->q:Lcom/tkay/expressad/exoplayer/c/d;

    return-void
.end method

.method protected abstract a(JJLandroid/media/MediaCodec;Ljava/nio/ByteBuffer;IIJZ)Z
.end method

.method protected a(Lcom/tkay/expressad/exoplayer/f/a;)Z
    .locals 0

    const/4 p1, 0x1

    return p1
.end method

.method protected b(Lcom/tkay/expressad/exoplayer/m;)V
    .locals 4

    .line 887
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    .line 888
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    .line 890
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    move-object v2, v1

    goto :goto_0

    .line 891
    :cond_0
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    :goto_0
    invoke-static {p1, v2}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result p1

    const/4 v2, 0x1

    xor-int/2addr p1, v2

    if-eqz p1, :cond_3

    .line 893
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    if-eqz p1, :cond_2

    .line 894
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    if-eqz p1, :cond_1

    .line 898
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    invoke-interface {p1, v1, v3}, Lcom/tkay/expressad/exoplayer/d/g;->a(Landroid/os/Looper;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/d/f;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    .line 899
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-ne p1, v1, :cond_3

    .line 900
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V

    goto :goto_1

    .line 895
    :cond_1
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "Media requires a DrmSessionManager"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    .line 896
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->s()I

    move-result v0

    .line 895
    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object p1

    throw p1

    .line 903
    :cond_2
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    .line 908
    :cond_3
    :goto_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    const/4 v3, 0x0

    if-ne p1, v1, :cond_8

    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    if-eqz p1, :cond_8

    .line 909
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {p0, p1, v0, v1}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/m;)I

    move-result p1

    if-eqz p1, :cond_8

    if-eq p1, v2, :cond_7

    const/4 v1, 0x3

    if-ne p1, v1, :cond_6

    .line 918
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->ah:Z

    .line 919
    iput v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->ai:I

    .line 920
    iget p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->R:I

    const/4 v1, 0x2

    if-eq p1, v1, :cond_4

    if-ne p1, v2, :cond_5

    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    iget p1, p1, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->m:I

    if-ne p1, v1, :cond_5

    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    iget p1, p1, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v0, v0, Lcom/tkay/expressad/exoplayer/m;->n:I

    if-ne p1, v0, :cond_5

    :cond_4
    move v3, v2

    :cond_5
    iput-boolean v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->Y:Z

    goto :goto_2

    .line 927
    :cond_6
    new-instance p1, Ljava/lang/IllegalStateException;

    invoke-direct {p1}, Ljava/lang/IllegalStateException;-><init>()V

    throw p1

    :cond_7
    :goto_2
    move v3, v2

    :cond_8
    if-nez v3, :cond_a

    .line 932
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/f/b;->ak:Z

    if-eqz p1, :cond_9

    .line 934
    iput v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->aj:I

    return-void

    .line 937
    :cond_9
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->A()V

    .line 938
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->x()V

    :cond_a
    return-void
.end method

.method protected c(J)V
    .locals 0

    return-void
.end method

.method public final m()I
    .locals 1

    const/16 v0, 0x8

    return v0
.end method

.method protected n()V
    .locals 0

    return-void
.end method

.method protected o()V
    .locals 0

    return-void
.end method

.method protected p()V
    .locals 4

    const/4 v0, 0x0

    .line 484
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    .line 486
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->A()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    .line 489
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v1, :cond_0

    .line 490
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v1, v2}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 494
    :cond_0
    :try_start_2
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v1, v2, :cond_1

    .line 495
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v1, v2}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 498
    :cond_1
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 499
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    return-void

    :catchall_0
    move-exception v1

    .line 498
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 499
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    .line 500
    throw v1

    :catchall_1
    move-exception v1

    .line 494
    :try_start_3
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v2, v3, :cond_2

    .line 495
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v2, v3}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 498
    :cond_2
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 499
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    .line 501
    throw v1

    :catchall_2
    move-exception v1

    .line 498
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 499
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    .line 500
    throw v1

    :catchall_3
    move-exception v1

    .line 489
    :try_start_4
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v2, :cond_3

    .line 490
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v2, v3}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_5

    .line 494
    :cond_3
    :try_start_5
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v2, :cond_4

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v2, v3, :cond_4

    .line 495
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v2, v3}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    .line 498
    :cond_4
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 499
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    .line 502
    throw v1

    :catchall_4
    move-exception v1

    .line 498
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 499
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    .line 500
    throw v1

    :catchall_5
    move-exception v1

    .line 494
    :try_start_6
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v2, :cond_5

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v2, v3, :cond_5

    .line 495
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->F:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v2, v3}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_6

    .line 498
    :cond_5
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 499
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    .line 501
    throw v1

    :catchall_6
    move-exception v1

    .line 498
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 499
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    .line 500
    throw v1
.end method

.method public u()Z
    .locals 4

    .line 1003
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ao:Z

    if-nez v0, :cond_1

    .line 1005
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->t()Z

    move-result v0

    if-nez v0, :cond_0

    .line 1006
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->F()Z

    move-result v0

    if-nez v0, :cond_0

    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ac:J

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    .line 1008
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->ac:J

    cmp-long v0, v0, v2

    if-gez v0, :cond_1

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public v()Z
    .locals 1

    .line 998
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->an:Z

    return v0
.end method

.method protected w()V
    .locals 0

    return-void
.end method

.method protected final x()V
    .locals 15

    .line 351
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    if-nez v0, :cond_1e

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    if-nez v0, :cond_0

    goto/16 :goto_c

    .line 356
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->O:Lcom/tkay/expressad/exoplayer/d/f;

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    .line 357
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    .line 360
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    const-string v2, "Amazon"

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-eqz v1, :cond_6

    .line 361
    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/d/f;->g()Lcom/tkay/expressad/exoplayer/d/i;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/d/k;

    if-nez v1, :cond_2

    .line 363
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/d/f;->f()Lcom/tkay/expressad/exoplayer/d/f$a;

    move-result-object v1

    if-nez v1, :cond_1

    return-void

    :cond_1
    move-object v6, v3

    move v1, v4

    goto :goto_0

    .line 372
    :cond_2
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/d/k;->a()Landroid/media/MediaCrypto;

    move-result-object v6

    .line 373
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/d/k;->a(Ljava/lang/String;)Z

    move-result v1

    .line 2235
    :goto_0
    sget-object v7, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    invoke-virtual {v2, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_4

    sget-object v7, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v8, "AFTM"

    .line 2236
    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_3

    sget-object v7, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v8, "AFTB"

    .line 2237
    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_4

    :cond_3
    move v7, v5

    goto :goto_1

    :cond_4
    move v7, v4

    :goto_1
    if-eqz v7, :cond_7

    .line 376
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v7}, Lcom/tkay/expressad/exoplayer/d/f;->e()I

    move-result v7

    if-eq v7, v5, :cond_5

    const/4 v8, 0x4

    if-eq v7, v8, :cond_7

    return-void

    .line 378
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->N:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/d/f;->f()Lcom/tkay/expressad/exoplayer/d/f$a;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->s()I

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v0

    throw v0

    :cond_6
    move-object v6, v3

    move v1, v4

    .line 386
    :cond_7
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    if-nez v7, :cond_9

    .line 388
    :try_start_0
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/f/b;->E:Lcom/tkay/expressad/exoplayer/f/c;

    iget-object v8, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {p0, v7, v8, v1}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/m;Z)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object v7

    iput-object v7, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    if-nez v7, :cond_8

    if-eqz v1, :cond_8

    .line 394
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/f/b;->E:Lcom/tkay/expressad/exoplayer/f/c;

    iget-object v8, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {p0, v7, v8, v4}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/m;Z)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object v7

    iput-object v7, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    if-eqz v7, :cond_8

    const-string v7, "MediaCodecRenderer"

    .line 396
    new-instance v8, Ljava/lang/StringBuilder;

    const-string v9, "Drm session requires secure decoder for "

    invoke-direct {v8, v9}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", but no secure decoder available. Trying to proceed with "

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "."

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/f/d$b; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 401
    new-instance v7, Lcom/tkay/expressad/exoplayer/f/b$b;

    iget-object v8, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    const v9, -0xc34e

    invoke-direct {v7, v8, v0, v1, v9}, Lcom/tkay/expressad/exoplayer/f/b$b;-><init>(Lcom/tkay/expressad/exoplayer/m;Ljava/lang/Throwable;ZI)V

    invoke-direct {p0, v7}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/f/b$b;)V

    .line 405
    :cond_8
    :goto_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    if-nez v0, :cond_9

    .line 406
    new-instance v0, Lcom/tkay/expressad/exoplayer/f/b$b;

    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    const v8, -0xc34f

    invoke-direct {v0, v7, v3, v1, v8}, Lcom/tkay/expressad/exoplayer/f/b$b;-><init>(Lcom/tkay/expressad/exoplayer/m;Ljava/lang/Throwable;ZI)V

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/f/b$b;)V

    .line 412
    :cond_9
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/f/a;)Z

    move-result v0

    if-nez v0, :cond_a

    return-void

    .line 416
    :cond_a
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    .line 2273
    sget v3, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v7, 0x19

    const/4 v13, 0x2

    const-string v8, "OMX.Exynos.avc.dec.secure"

    if-gt v3, v7, :cond_c

    invoke-virtual {v8, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    sget-object v3, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v7, "SM-T585"

    .line 2274
    invoke-virtual {v3, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_b

    sget-object v3, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v7, "SM-A510"

    invoke-virtual {v3, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_b

    sget-object v3, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v7, "SM-A520"

    .line 2275
    invoke-virtual {v3, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_b

    sget-object v3, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v7, "SM-J700"

    invoke-virtual {v3, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_c

    :cond_b
    move v3, v13

    goto :goto_3

    .line 2277
    :cond_c
    sget v3, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v7, 0x18

    if-ge v3, v7, :cond_f

    const-string v3, "OMX.Nvidia.h264.decode"

    .line 2278
    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_d

    const-string v3, "OMX.Nvidia.h264.decode.secure"

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_f

    :cond_d
    sget-object v3, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v7, "flounder"

    .line 2279
    invoke-virtual {v7, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_e

    sget-object v3, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v7, "flounder_lte"

    invoke-virtual {v7, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_e

    sget-object v3, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v7, "grouper"

    .line 2280
    invoke-virtual {v7, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_e

    sget-object v3, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v7, "tilapia"

    invoke-virtual {v7, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_f

    :cond_e
    move v3, v5

    goto :goto_3

    :cond_f
    move v3, v4

    .line 417
    :goto_3
    iput v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->R:I

    .line 418
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    .line 2298
    sget v7, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v14, 0x15

    if-ge v7, v14, :cond_10

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->isEmpty()Z

    move-result v3

    if-eqz v3, :cond_10

    const-string v3, "OMX.MTK.VIDEO.DECODER.AVC"

    .line 2299
    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_10

    move v3, v5

    goto :goto_4

    :cond_10
    move v3, v4

    .line 418
    :goto_4
    iput-boolean v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->S:Z

    .line 3252
    sget v3, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v7, 0x13

    const/16 v9, 0x12

    if-lt v3, v9, :cond_13

    sget v3, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ne v3, v9, :cond_11

    const-string v3, "OMX.SEC.avc.dec"

    .line 3254
    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_13

    const-string v3, "OMX.SEC.avc.dec.secure"

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_13

    :cond_11
    sget v3, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ne v3, v7, :cond_12

    sget-object v3, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v10, "SM-G800"

    .line 3255
    invoke-virtual {v3, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_12

    const-string v3, "OMX.Exynos.avc.dec"

    .line 3256
    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_13

    invoke-virtual {v8, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_12

    goto :goto_5

    :cond_12
    move v3, v4

    goto :goto_6

    :cond_13
    :goto_5
    move v3, v5

    .line 419
    :goto_6
    iput-boolean v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->T:Z

    .line 420
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    .line 3315
    iget-object v8, v3, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    .line 3316
    sget v10, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v11, 0x11

    if-gt v10, v11, :cond_14

    const-string v10, "OMX.rk.video_decoder.avc"

    .line 3317
    invoke-virtual {v10, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-nez v10, :cond_15

    const-string v10, "OMX.allwinner.video.decoder.avc"

    .line 3318
    invoke-virtual {v10, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_15

    :cond_14
    sget-object v8, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    .line 3319
    invoke-virtual {v2, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_16

    sget-object v2, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v8, "AFTS"

    invoke-virtual {v8, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_16

    iget-boolean v2, v3, Lcom/tkay/expressad/exoplayer/f/a;->h:Z

    if-eqz v2, :cond_16

    :cond_15
    move v2, v5

    goto :goto_7

    :cond_16
    move v2, v4

    .line 420
    :goto_7
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->U:Z

    .line 3336
    sget v2, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v3, 0x17

    if-gt v2, v3, :cond_17

    const-string v2, "OMX.google.vorbis.decoder"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_18

    :cond_17
    sget v2, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-gt v2, v7, :cond_19

    sget-object v2, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v3, "hb2000"

    .line 3337
    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_19

    const-string v2, "OMX.amlogic.avc.decoder.awesome"

    .line 3338
    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_18

    const-string v2, "OMX.amlogic.avc.decoder.awesome.secure"

    .line 3339
    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_19

    :cond_18
    move v2, v5

    goto :goto_8

    :cond_19
    move v2, v4

    .line 421
    :goto_8
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->V:Z

    .line 3354
    sget v2, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ne v2, v14, :cond_1a

    const-string v2, "OMX.google.aac.decoder"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1a

    move v2, v5

    goto :goto_9

    :cond_1a
    move v2, v4

    .line 422
    :goto_9
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->W:Z

    .line 423
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    .line 3371
    sget v3, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-gt v3, v9, :cond_1b

    iget v2, v2, Lcom/tkay/expressad/exoplayer/m;->u:I

    if-ne v2, v5, :cond_1b

    const-string v2, "OMX.MTK.AUDIO.DECODER.MP3"

    .line 3372
    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1b

    move v4, v5

    .line 423
    :cond_1b
    iput-boolean v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->X:Z

    .line 425
    :try_start_1
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    const-string v4, "createCodec:"

    .line 426
    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    .line 427
    invoke-static {v0}, Landroid/media/MediaCodec;->createByCodecName(Ljava/lang/String;)Landroid/media/MediaCodec;

    move-result-object v4

    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    .line 428
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    const-string v4, "configureCodec"

    .line 429
    invoke-static {v4}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    .line 430
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    iget-object v8, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {p0, v4, v7, v8, v6}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/f/a;Landroid/media/MediaCodec;Lcom/tkay/expressad/exoplayer/m;Landroid/media/MediaCrypto;)V

    .line 431
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    const-string v4, "startCodec"

    .line 432
    invoke-static {v4}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    .line 433
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v4}, Landroid/media/MediaCodec;->start()V

    .line 434
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    .line 435
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v9

    sub-long v11, v9, v2

    move-object v7, p0

    move-object v8, v0

    .line 436
    invoke-virtual/range {v7 .. v12}, Lcom/tkay/expressad/exoplayer/f/b;->a(Ljava/lang/String;JJ)V

    .line 3795
    sget v2, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ge v2, v14, :cond_1c

    .line 3796
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v2}, Landroid/media/MediaCodec;->getInputBuffers()[Ljava/nio/ByteBuffer;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->aa:[Ljava/nio/ByteBuffer;

    .line 3797
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    invoke-virtual {v2}, Landroid/media/MediaCodec;->getOutputBuffers()[Ljava/nio/ByteBuffer;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/f/b;->ab:[Ljava/nio/ByteBuffer;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_a

    :catch_1
    move-exception v2

    .line 440
    new-instance v3, Lcom/tkay/expressad/exoplayer/f/b$b;

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/f/b;->M:Lcom/tkay/expressad/exoplayer/m;

    invoke-direct {v3, v4, v2, v1, v0}, Lcom/tkay/expressad/exoplayer/f/b$b;-><init>(Lcom/tkay/expressad/exoplayer/m;Ljava/lang/Throwable;ZLjava/lang/String;)V

    invoke-direct {p0, v3}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/f/b$b;)V

    .line 443
    :cond_1c
    :goto_a
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/f/b;->a_()I

    move-result v0

    if-ne v0, v13, :cond_1d

    .line 444
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    add-long/2addr v0, v2

    goto :goto_b

    :cond_1d
    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    :goto_b
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->ac:J

    .line 445
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->G()V

    .line 446
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/b;->H()V

    .line 447
    iput-boolean v5, p0, Lcom/tkay/expressad/exoplayer/f/b;->ap:Z

    .line 448
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->a:I

    add-int/2addr v1, v5

    iput v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->a:I

    :cond_1e
    :goto_c
    return-void
.end method

.method protected final y()Landroid/media/MediaCodec;
    .locals 1

    .line 461
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->P:Landroid/media/MediaCodec;

    return-object v0
.end method

.method protected final z()Lcom/tkay/expressad/exoplayer/f/a;
    .locals 1

    .line 465
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/b;->Q:Lcom/tkay/expressad/exoplayer/f/a;

    return-object v0
.end method
