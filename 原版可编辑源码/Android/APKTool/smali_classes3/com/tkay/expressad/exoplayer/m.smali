.class public final Lcom/tkay/expressad/exoplayer/m;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Parcelable;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/tkay/expressad/exoplayer/m;",
            ">;"
        }
    .end annotation
.end field

.field public static final a:I = -0x1

.field public static final b:J = 0x7fffffffffffffffL


# instance fields
.field public final A:Ljava/lang/String;

.field public final B:I

.field private C:I

.field public final c:Ljava/lang/String;

.field public final d:I

.field public final e:Ljava/lang/String;

.field public final f:Lcom/tkay/expressad/exoplayer/g/a;

.field public final g:Ljava/lang/String;

.field public final h:Ljava/lang/String;

.field public final i:I

.field public final j:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "[B>;"
        }
    .end annotation
.end field

.field public final k:Lcom/tkay/expressad/exoplayer/d/e;

.field public final l:J

.field public final m:I

.field public final n:I

.field public final o:F

.field public final p:I

.field public final q:F

.field public final r:I

.field public final s:[B

.field public final t:Lcom/tkay/expressad/exoplayer/l/b;

.field public final u:I

.field public final v:I

.field public final w:I

.field public final x:I

.field public final y:I

.field public final z:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 833
    new-instance v0, Lcom/tkay/expressad/exoplayer/m$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/m$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/m;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 4

    .line 544
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 545
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    .line 546
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    .line 547
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    .line 548
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    .line 549
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->d:I

    .line 550
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->i:I

    .line 551
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->m:I

    .line 552
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->n:I

    .line 553
    invoke-virtual {p1}, Landroid/os/Parcel;->readFloat()F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->o:F

    .line 554
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->p:I

    .line 555
    invoke-virtual {p1}, Landroid/os/Parcel;->readFloat()F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->q:F

    .line 556
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/af;->a(Landroid/os/Parcel;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 557
    invoke-virtual {p1}, Landroid/os/Parcel;->createByteArray()[B

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    .line 558
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->r:I

    .line 559
    const-class v0, Lcom/tkay/expressad/exoplayer/l/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->readParcelable(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/l/b;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    .line 560
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->u:I

    .line 561
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->v:I

    .line 562
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->w:I

    .line 563
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->x:I

    .line 564
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->y:I

    .line 565
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->z:I

    .line 566
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    .line 567
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->B:I

    .line 568
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/m;->l:J

    .line 569
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    .line 570
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1, v0}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    const/4 v1, 0x0

    :goto_1
    if-ge v1, v0, :cond_1

    .line 572
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-virtual {p1}, Landroid/os/Parcel;->createByteArray()[B

    move-result-object v3

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 574
    :cond_1
    const-class v0, Lcom/tkay/expressad/exoplayer/d/e;

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->readParcelable(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/d/e;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    .line 575
    const-class v0, Lcom/tkay/expressad/exoplayer/g/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->readParcelable(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/g/a;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "IIIIFIF[BI",
            "Lcom/tkay/expressad/exoplayer/l/b;",
            "IIIIII",
            "Ljava/lang/String;",
            "IJ",
            "Ljava/util/List<",
            "[B>;",
            "Lcom/tkay/expressad/exoplayer/d/e;",
            "Lcom/tkay/expressad/exoplayer/g/a;",
            ")V"
        }
    .end annotation

    move-object v0, p0

    .line 512
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    move-object v1, p1

    .line 513
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    move-object v1, p2

    .line 514
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    move-object v1, p3

    .line 515
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    move-object v1, p4

    .line 516
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    move v1, p5

    .line 517
    iput v1, v0, Lcom/tkay/expressad/exoplayer/m;->d:I

    move v1, p6

    .line 518
    iput v1, v0, Lcom/tkay/expressad/exoplayer/m;->i:I

    move v1, p7

    .line 519
    iput v1, v0, Lcom/tkay/expressad/exoplayer/m;->m:I

    move v1, p8

    .line 520
    iput v1, v0, Lcom/tkay/expressad/exoplayer/m;->n:I

    move v1, p9

    .line 521
    iput v1, v0, Lcom/tkay/expressad/exoplayer/m;->o:F

    const/4 v1, 0x0

    const/4 v2, -0x1

    move v3, p10

    if-ne v3, v2, :cond_0

    move v3, v1

    .line 522
    :cond_0
    iput v3, v0, Lcom/tkay/expressad/exoplayer/m;->p:I

    const/high16 v3, -0x40800000    # -1.0f

    cmpl-float v3, p11, v3

    if-nez v3, :cond_1

    const/high16 v3, 0x3f800000    # 1.0f

    goto :goto_0

    :cond_1
    move v3, p11

    .line 524
    :goto_0
    iput v3, v0, Lcom/tkay/expressad/exoplayer/m;->q:F

    move-object/from16 v3, p12

    .line 525
    iput-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    move/from16 v3, p13

    .line 526
    iput v3, v0, Lcom/tkay/expressad/exoplayer/m;->r:I

    move-object/from16 v3, p14

    .line 527
    iput-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    move/from16 v3, p15

    .line 528
    iput v3, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    move/from16 v3, p16

    .line 529
    iput v3, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    move/from16 v3, p17

    .line 530
    iput v3, v0, Lcom/tkay/expressad/exoplayer/m;->w:I

    move/from16 v3, p18

    if-ne v3, v2, :cond_2

    move v3, v1

    .line 531
    :cond_2
    iput v3, v0, Lcom/tkay/expressad/exoplayer/m;->x:I

    move/from16 v3, p19

    if-ne v3, v2, :cond_3

    goto :goto_1

    :cond_3
    move v1, v3

    .line 532
    :goto_1
    iput v1, v0, Lcom/tkay/expressad/exoplayer/m;->y:I

    move/from16 v1, p20

    .line 533
    iput v1, v0, Lcom/tkay/expressad/exoplayer/m;->z:I

    move-object/from16 v1, p21

    .line 534
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    move/from16 v1, p22

    .line 535
    iput v1, v0, Lcom/tkay/expressad/exoplayer/m;->B:I

    move-wide/from16 v1, p23

    .line 536
    iput-wide v1, v0, Lcom/tkay/expressad/exoplayer/m;->l:J

    if-nez p25, :cond_4

    .line 537
    invoke-static {}, Ljava/util/Collections;->emptyList()Ljava/util/List;

    move-result-object v1

    goto :goto_2

    :cond_4
    move-object/from16 v1, p25

    .line 538
    :goto_2
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    move-object/from16 v1, p26

    .line 539
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    move-object/from16 v1, p27

    .line 540
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;
    .locals 29

    move-object/from16 v1, p0

    move-object/from16 v3, p1

    .line 470
    new-instance v28, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v0, v28

    const/4 v2, 0x0

    const/4 v4, 0x0

    const/4 v5, -0x1

    const/4 v6, -0x1

    const/4 v7, -0x1

    const/4 v8, -0x1

    const/high16 v9, -0x40800000    # -1.0f

    const/4 v10, -0x1

    const/high16 v11, -0x40800000    # -1.0f

    const/4 v12, 0x0

    const/4 v13, -0x1

    const/4 v14, 0x0

    const/4 v15, -0x1

    const/16 v16, -0x1

    const/16 v17, -0x1

    const/16 v18, -0x1

    const/16 v19, -0x1

    const/16 v20, 0x0

    const/16 v21, 0x0

    const/16 v22, -0x1

    const-wide v23, 0x7fffffffffffffffL

    const/16 v25, 0x0

    const/16 v26, 0x0

    const/16 v27, 0x0

    invoke-direct/range {v0 .. v27}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v28
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)Lcom/tkay/expressad/exoplayer/m;
    .locals 11

    .line 1366
    invoke-static {}, Ljava/util/Collections;->emptyList()Ljava/util/List;

    move-result-object v10

    const/4 v7, 0x0

    const/4 v2, 0x0

    const/4 v3, -0x1

    const/4 v6, -0x1

    const-wide v8, 0x7fffffffffffffffL

    move-object v0, p0

    move-object v1, p1

    move v4, p2

    move-object v5, p3

    .line 1365
    invoke-static/range {v0 .. v10}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;ILcom/tkay/expressad/exoplayer/d/e;JLjava/util/List;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object p0

    return-object p0
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;
    .locals 11

    .line 366
    invoke-static {}, Ljava/util/Collections;->emptyList()Ljava/util/List;

    move-result-object v10

    const/4 v2, 0x0

    const/4 v3, -0x1

    const/4 v6, -0x1

    const-wide v8, 0x7fffffffffffffffL

    move-object v0, p0

    move-object v1, p1

    move v4, p2

    move-object v5, p3

    move-object v7, p4

    .line 365
    invoke-static/range {v0 .. v10}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;ILcom/tkay/expressad/exoplayer/d/e;JLjava/util/List;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object p0

    return-object p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFLjava/util/List;IF[BILcom/tkay/expressad/exoplayer/l/b;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;
    .locals 29
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "IIIIF",
            "Ljava/util/List<",
            "[B>;IF[BI",
            "Lcom/tkay/expressad/exoplayer/l/b;",
            "Lcom/tkay/expressad/exoplayer/d/e;",
            ")",
            "Lcom/tkay/expressad/exoplayer/m;"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v3, p1

    move-object/from16 v4, p2

    move/from16 v5, p3

    move/from16 v6, p4

    move/from16 v7, p5

    move/from16 v8, p6

    move/from16 v9, p7

    move-object/from16 v25, p8

    move/from16 v10, p9

    move/from16 v11, p10

    move-object/from16 v12, p11

    move/from16 v13, p12

    move-object/from16 v14, p13

    move-object/from16 v26, p14

    .line 241
    new-instance v28, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v0, v28

    const/4 v2, 0x0

    const/4 v15, -0x1

    const/16 v16, -0x1

    const/16 v17, -0x1

    const/16 v18, -0x1

    const/16 v19, -0x1

    const/16 v20, 0x0

    const/16 v21, 0x0

    const/16 v22, -0x1

    const-wide v23, 0x7fffffffffffffffL

    const/16 v27, 0x0

    invoke-direct/range {v0 .. v27}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v28
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;
    .locals 15
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "IIIIF",
            "Ljava/util/List<",
            "[B>;",
            "Lcom/tkay/expressad/exoplayer/d/e;",
            ")",
            "Lcom/tkay/expressad/exoplayer/m;"
        }
    .end annotation

    const/4 v9, -0x1

    const/high16 v10, -0x40800000    # -1.0f

    const/4 v11, 0x0

    const/4 v12, -0x1

    const/4 v13, 0x0

    move-object v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move/from16 v3, p3

    move/from16 v4, p4

    move/from16 v5, p5

    move/from16 v6, p6

    move/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v14, p9

    .line 1220
    invoke-static/range {v0 .. v14}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFLjava/util/List;IF[BILcom/tkay/expressad/exoplayer/l/b;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    return-object v0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIILjava/lang/String;)Lcom/tkay/expressad/exoplayer/m;
    .locals 31

    move-object/from16 v0, p0

    move-object/from16 v2, p1

    move-object/from16 v4, p2

    move-object/from16 v5, p3

    move/from16 v6, p4

    move/from16 v8, p5

    move/from16 v9, p6

    move/from16 v21, p7

    move-object/from16 v22, p8

    .line 603
    new-instance v29, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v1, v29

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    iget v7, v0, Lcom/tkay/expressad/exoplayer/m;->i:I

    iget v10, v0, Lcom/tkay/expressad/exoplayer/m;->o:F

    iget v11, v0, Lcom/tkay/expressad/exoplayer/m;->p:I

    iget v12, v0, Lcom/tkay/expressad/exoplayer/m;->q:F

    iget-object v13, v0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    iget v14, v0, Lcom/tkay/expressad/exoplayer/m;->r:I

    iget-object v15, v0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    move-object/from16 p1, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    move/from16 v16, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    move/from16 v17, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->w:I

    move/from16 v18, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->x:I

    move/from16 v19, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->y:I

    move/from16 v20, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->B:I

    move/from16 v23, v1

    move-object/from16 v30, v2

    iget-wide v1, v0, Lcom/tkay/expressad/exoplayer/m;->l:J

    move-wide/from16 v24, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    move-object/from16 v27, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    move-object/from16 v28, v1

    move-object/from16 v1, p1

    move-object/from16 v2, v30

    invoke-direct/range {v1 .. v28}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v29
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "IIII",
            "Ljava/util/List<",
            "[B>;",
            "Lcom/tkay/expressad/exoplayer/d/e;",
            "Ljava/lang/String;",
            ")",
            "Lcom/tkay/expressad/exoplayer/m;"
        }
    .end annotation

    const/4 v10, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move v3, p3

    move v4, p4

    move/from16 v5, p5

    move/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v9, p9

    .line 295
    invoke-static/range {v0 .. v10}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/g/a;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    return-object v0
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/g/a;)Lcom/tkay/expressad/exoplayer/m;
    .locals 29
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "IIII",
            "Ljava/util/List<",
            "[B>;",
            "Lcom/tkay/expressad/exoplayer/d/e;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/exoplayer/g/a;",
            ")",
            "Lcom/tkay/expressad/exoplayer/m;"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v3, p1

    move-object/from16 v4, p2

    move/from16 v5, p3

    move/from16 v15, p4

    move/from16 v16, p5

    move/from16 v17, p6

    move-object/from16 v25, p7

    move-object/from16 v26, p8

    move-object/from16 v21, p9

    move-object/from16 v27, p10

    .line 316
    new-instance v28, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v0, v28

    const/4 v2, 0x0

    const/4 v6, -0x1

    const/4 v7, -0x1

    const/4 v8, -0x1

    const/high16 v9, -0x40800000    # -1.0f

    const/4 v10, -0x1

    const/high16 v11, -0x40800000    # -1.0f

    const/4 v12, 0x0

    const/4 v13, -0x1

    const/4 v14, 0x0

    const/16 v18, -0x1

    const/16 v19, -0x1

    const/16 v20, 0x0

    const/16 v22, -0x1

    const-wide v23, 0x7fffffffffffffffL

    invoke-direct/range {v0 .. v27}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v28
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "III",
            "Ljava/util/List<",
            "[B>;",
            "Lcom/tkay/expressad/exoplayer/d/e;",
            "Ljava/lang/String;",
            ")",
            "Lcom/tkay/expressad/exoplayer/m;"
        }
    .end annotation

    const/4 v6, -0x1

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move v3, p3

    move v4, p4

    move v5, p5

    move-object/from16 v7, p6

    move-object/from16 v8, p7

    move-object/from16 v9, p8

    .line 278
    invoke-static/range {v0 .. v9}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    return-object v0
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;ILcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;
    .locals 11

    .line 379
    invoke-static {}, Ljava/util/Collections;->emptyList()Ljava/util/List;

    move-result-object v10

    const-wide v8, 0x7fffffffffffffffL

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move v3, p3

    move v4, p4

    move-object/from16 v5, p5

    move/from16 v6, p6

    move-object/from16 v7, p7

    .line 378
    invoke-static/range {v0 .. v10}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;ILcom/tkay/expressad/exoplayer/d/e;JLjava/util/List;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    return-object v0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;ILcom/tkay/expressad/exoplayer/d/e;JLjava/util/List;)Lcom/tkay/expressad/exoplayer/m;
    .locals 29
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "II",
            "Ljava/lang/String;",
            "I",
            "Lcom/tkay/expressad/exoplayer/d/e;",
            "J",
            "Ljava/util/List<",
            "[B>;)",
            "Lcom/tkay/expressad/exoplayer/m;"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v3, p1

    move-object/from16 v4, p2

    move/from16 v5, p3

    move/from16 v20, p4

    move-object/from16 v21, p5

    move/from16 v22, p6

    move-object/from16 v26, p7

    move-wide/from16 v23, p8

    move-object/from16 v25, p10

    .line 406
    new-instance v28, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v0, v28

    const/4 v2, 0x0

    const/4 v6, -0x1

    const/4 v7, -0x1

    const/4 v8, -0x1

    const/high16 v9, -0x40800000    # -1.0f

    const/4 v10, -0x1

    const/high16 v11, -0x40800000    # -1.0f

    const/4 v12, 0x0

    const/4 v13, -0x1

    const/4 v14, 0x0

    const/4 v15, -0x1

    const/16 v16, -0x1

    const/16 v17, -0x1

    const/16 v18, -0x1

    const/16 v19, -0x1

    const/16 v27, 0x0

    invoke-direct/range {v0 .. v27}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v28
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;J)Lcom/tkay/expressad/exoplayer/m;
    .locals 11

    .line 392
    invoke-static {}, Ljava/util/Collections;->emptyList()Ljava/util/List;

    move-result-object v10

    const/4 v6, -0x1

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move v3, p3

    move v4, p4

    move-object/from16 v5, p5

    move-object/from16 v7, p6

    move-wide/from16 v8, p7

    .line 391
    invoke-static/range {v0 .. v10}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;ILcom/tkay/expressad/exoplayer/d/e;JLjava/util/List;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    return-object v0
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/util/List;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;
    .locals 29
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "II",
            "Ljava/util/List<",
            "[B>;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/exoplayer/d/e;",
            ")",
            "Lcom/tkay/expressad/exoplayer/m;"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v3, p1

    move-object/from16 v4, p2

    move/from16 v5, p3

    move/from16 v20, p4

    move-object/from16 v25, p5

    move-object/from16 v21, p6

    move-object/from16 v26, p7

    .line 423
    new-instance v28, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v0, v28

    const/4 v2, 0x0

    const/4 v6, -0x1

    const/4 v7, -0x1

    const/4 v8, -0x1

    const/high16 v9, -0x40800000    # -1.0f

    const/4 v10, -0x1

    const/high16 v11, -0x40800000    # -1.0f

    const/4 v12, 0x0

    const/4 v13, -0x1

    const/4 v14, 0x0

    const/4 v15, -0x1

    const/16 v16, -0x1

    const/16 v17, -0x1

    const/16 v18, -0x1

    const/16 v19, -0x1

    const/16 v22, -0x1

    const-wide v23, 0x7fffffffffffffffL

    const/16 v27, 0x0

    invoke-direct/range {v0 .. v27}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v28
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;
    .locals 29

    move-object/from16 v1, p0

    move-object/from16 v3, p1

    move-object/from16 v4, p2

    move-object/from16 v26, p3

    .line 481
    new-instance v28, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v0, v28

    const/4 v2, 0x0

    const/4 v5, -0x1

    const/4 v6, -0x1

    const/4 v7, -0x1

    const/4 v8, -0x1

    const/high16 v9, -0x40800000    # -1.0f

    const/4 v10, -0x1

    const/high16 v11, -0x40800000    # -1.0f

    const/4 v12, 0x0

    const/4 v13, -0x1

    const/4 v14, 0x0

    const/4 v15, -0x1

    const/16 v16, -0x1

    const/16 v17, -0x1

    const/16 v18, -0x1

    const/16 v19, -0x1

    const/16 v20, 0x0

    const/16 v21, 0x0

    const/16 v22, -0x1

    const-wide v23, 0x7fffffffffffffffL

    const/16 v25, 0x0

    const/16 v27, 0x0

    invoke-direct/range {v0 .. v27}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v28
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIFLjava/util/List;I)Lcom/tkay/expressad/exoplayer/m;
    .locals 29
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "IIIF",
            "Ljava/util/List<",
            "[B>;I)",
            "Lcom/tkay/expressad/exoplayer/m;"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v4, p3

    move/from16 v5, p4

    move/from16 v7, p5

    move/from16 v8, p6

    move/from16 v9, p7

    move-object/from16 v25, p8

    move/from16 v20, p9

    .line 186
    new-instance v28, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v0, v28

    const/4 v6, -0x1

    const/4 v10, -0x1

    const/high16 v11, -0x40800000    # -1.0f

    const/4 v12, 0x0

    const/4 v13, -0x1

    const/4 v14, 0x0

    const/4 v15, -0x1

    const/16 v16, -0x1

    const/16 v17, -0x1

    const/16 v18, -0x1

    const/16 v19, -0x1

    const/16 v21, 0x0

    const/16 v22, -0x1

    const-wide v23, 0x7fffffffffffffffL

    const/16 v26, 0x0

    const/16 v27, 0x0

    invoke-direct/range {v0 .. v27}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v28
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIILjava/util/List;ILjava/lang/String;)Lcom/tkay/expressad/exoplayer/m;
    .locals 29
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "III",
            "Ljava/util/List<",
            "[B>;I",
            "Ljava/lang/String;",
            ")",
            "Lcom/tkay/expressad/exoplayer/m;"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v4, p3

    move/from16 v5, p4

    move/from16 v15, p5

    move/from16 v16, p6

    move-object/from16 v25, p7

    move/from16 v20, p8

    move-object/from16 v21, p9

    .line 260
    new-instance v28, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v0, v28

    const/4 v6, -0x1

    const/4 v7, -0x1

    const/4 v8, -0x1

    const/high16 v9, -0x40800000    # -1.0f

    const/4 v10, -0x1

    const/high16 v11, -0x40800000    # -1.0f

    const/4 v12, 0x0

    const/4 v13, -0x1

    const/4 v14, 0x0

    const/16 v17, -0x1

    const/16 v18, -0x1

    const/16 v19, -0x1

    const/16 v22, -0x1

    const-wide v23, 0x7fffffffffffffffL

    const/16 v26, 0x0

    const/16 v27, 0x0

    invoke-direct/range {v0 .. v27}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v28
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)Lcom/tkay/expressad/exoplayer/m;
    .locals 29

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v4, p3

    move/from16 v5, p4

    move/from16 v20, p5

    move-object/from16 v21, p6

    .line 1345
    new-instance v28, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v0, v28

    const/4 v6, -0x1

    const/4 v7, -0x1

    const/4 v8, -0x1

    const/high16 v9, -0x40800000    # -1.0f

    const/4 v10, -0x1

    const/high16 v11, -0x40800000    # -1.0f

    const/4 v12, 0x0

    const/4 v13, -0x1

    const/4 v14, 0x0

    const/4 v15, -0x1

    const/16 v16, -0x1

    const/16 v17, -0x1

    const/16 v18, -0x1

    const/16 v19, -0x1

    const/16 v22, -0x1

    const-wide v23, 0x7fffffffffffffffL

    const/16 v25, 0x0

    const/16 v26, 0x0

    const/16 v27, 0x0

    invoke-direct/range {v0 .. v27}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v28
.end method

.method private b(I)Lcom/tkay/expressad/exoplayer/m;
    .locals 31

    move-object/from16 v0, p0

    move/from16 v11, p1

    .line 656
    new-instance v29, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v1, v29

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    iget v6, v0, Lcom/tkay/expressad/exoplayer/m;->d:I

    iget v7, v0, Lcom/tkay/expressad/exoplayer/m;->i:I

    iget v8, v0, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget v9, v0, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v10, v0, Lcom/tkay/expressad/exoplayer/m;->o:F

    iget v12, v0, Lcom/tkay/expressad/exoplayer/m;->q:F

    iget-object v13, v0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    iget v14, v0, Lcom/tkay/expressad/exoplayer/m;->r:I

    iget-object v15, v0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    move-object/from16 p1, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    move/from16 v16, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    move/from16 v17, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->w:I

    move/from16 v18, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->x:I

    move/from16 v19, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->y:I

    move/from16 v20, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->z:I

    move/from16 v21, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    move-object/from16 v22, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->B:I

    move/from16 v23, v1

    move-object/from16 v30, v2

    iget-wide v1, v0, Lcom/tkay/expressad/exoplayer/m;->l:J

    move-wide/from16 v24, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    move-object/from16 v27, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    move-object/from16 v28, v1

    move-object/from16 v1, p1

    move-object/from16 v2, v30

    invoke-direct/range {v1 .. v28}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v29
.end method

.method private static b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;
    .locals 15
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "IIIIF",
            "Ljava/util/List<",
            "[B>;",
            "Lcom/tkay/expressad/exoplayer/d/e;",
            ")",
            "Lcom/tkay/expressad/exoplayer/m;"
        }
    .end annotation

    const/4 v9, -0x1

    const/high16 v10, -0x40800000    # -1.0f

    const/4 v11, 0x0

    const/4 v12, -0x1

    const/4 v13, 0x0

    move-object v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move/from16 v3, p3

    move/from16 v4, p4

    move/from16 v5, p5

    move/from16 v6, p6

    move/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v14, p9

    .line 220
    invoke-static/range {v0 .. v14}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFLjava/util/List;IF[BILcom/tkay/expressad/exoplayer/l/b;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    return-object v0
.end method

.method private static b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)Lcom/tkay/expressad/exoplayer/m;
    .locals 29

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v4, p3

    move/from16 v5, p4

    move/from16 v20, p5

    move-object/from16 v21, p6

    .line 345
    new-instance v28, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v0, v28

    const/4 v6, -0x1

    const/4 v7, -0x1

    const/4 v8, -0x1

    const/high16 v9, -0x40800000    # -1.0f

    const/4 v10, -0x1

    const/high16 v11, -0x40800000    # -1.0f

    const/4 v12, 0x0

    const/4 v13, -0x1

    const/4 v14, 0x0

    const/4 v15, -0x1

    const/16 v16, -0x1

    const/16 v17, -0x1

    const/16 v18, -0x1

    const/16 v19, -0x1

    const/16 v22, -0x1

    const-wide v23, 0x7fffffffffffffffL

    const/16 v25, 0x0

    const/16 v26, 0x0

    const/16 v27, 0x0

    invoke-direct/range {v0 .. v27}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v28
.end method

.method private static c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)Lcom/tkay/expressad/exoplayer/m;
    .locals 29

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v4, p3

    move/from16 v5, p4

    move/from16 v20, p5

    move-object/from16 v21, p6

    .line 462
    new-instance v28, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v0, v28

    const/4 v6, -0x1

    const/4 v7, -0x1

    const/4 v8, -0x1

    const/high16 v9, -0x40800000    # -1.0f

    const/4 v10, -0x1

    const/high16 v11, -0x40800000    # -1.0f

    const/4 v12, 0x0

    const/4 v13, -0x1

    const/4 v14, 0x0

    const/4 v15, -0x1

    const/16 v16, -0x1

    const/16 v17, -0x1

    const/16 v18, -0x1

    const/16 v19, -0x1

    const/16 v22, -0x1

    const-wide v23, 0x7fffffffffffffffL

    const/16 v25, 0x0

    const/16 v26, 0x0

    const/16 v27, 0x0

    invoke-direct/range {v0 .. v27}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v28
.end method

.method public static c(Lcom/tkay/expressad/exoplayer/m;)Ljava/lang/String;
    .locals 4

    if-nez p0, :cond_0

    const-string p0, "null"

    return-object p0

    .line 766
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "id="

    .line 767
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", mimeType="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 768
    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->d:I

    const/4 v2, -0x1

    if-eq v1, v2, :cond_1

    const-string v1, ", bitrate="

    .line 769
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->d:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 771
    :cond_1
    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->m:I

    if-eq v1, v2, :cond_2

    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->n:I

    if-eq v1, v2, :cond_2

    const-string v1, ", res="

    .line 772
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->m:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "x"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->n:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 774
    :cond_2
    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->o:F

    const/high16 v3, -0x40800000    # -1.0f

    cmpl-float v1, v1, v3

    if-eqz v1, :cond_3

    const-string v1, ", fps="

    .line 775
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->o:F

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    .line 777
    :cond_3
    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->u:I

    if-eq v1, v2, :cond_4

    const-string v1, ", channels="

    .line 778
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->u:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 780
    :cond_4
    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->v:I

    if-eq v1, v2, :cond_5

    const-string v1, ", sample_rate="

    .line 781
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->v:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 783
    :cond_5
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    if-eqz v1, :cond_6

    const-string v1, ", language="

    .line 784
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 786
    :cond_6
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final a()I
    .locals 3

    .line 668
    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->m:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_1

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->n:I

    if-ne v2, v1, :cond_0

    goto :goto_0

    :cond_0
    mul-int/2addr v0, v2

    return v0

    :cond_1
    :goto_0
    return v1
.end method

.method public final a(I)Lcom/tkay/expressad/exoplayer/m;
    .locals 31

    move-object/from16 v0, p0

    move/from16 v7, p1

    .line 579
    new-instance v29, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v1, v29

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    iget v6, v0, Lcom/tkay/expressad/exoplayer/m;->d:I

    iget v8, v0, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget v9, v0, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v10, v0, Lcom/tkay/expressad/exoplayer/m;->o:F

    iget v11, v0, Lcom/tkay/expressad/exoplayer/m;->p:I

    iget v12, v0, Lcom/tkay/expressad/exoplayer/m;->q:F

    iget-object v13, v0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    iget v14, v0, Lcom/tkay/expressad/exoplayer/m;->r:I

    iget-object v15, v0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    move-object/from16 p1, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    move/from16 v16, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    move/from16 v17, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->w:I

    move/from16 v18, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->x:I

    move/from16 v19, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->y:I

    move/from16 v20, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->z:I

    move/from16 v21, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    move-object/from16 v22, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->B:I

    move/from16 v23, v1

    move-object/from16 v30, v2

    iget-wide v1, v0, Lcom/tkay/expressad/exoplayer/m;->l:J

    move-wide/from16 v24, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    move-object/from16 v27, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    move-object/from16 v28, v1

    move-object/from16 v1, p1

    move-object/from16 v2, v30

    invoke-direct/range {v1 .. v28}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v29
.end method

.method public final a(II)Lcom/tkay/expressad/exoplayer/m;
    .locals 30

    move-object/from16 v0, p0

    move/from16 v19, p1

    move/from16 v20, p2

    .line 632
    new-instance v29, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v1, v29

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    iget v6, v0, Lcom/tkay/expressad/exoplayer/m;->d:I

    iget v7, v0, Lcom/tkay/expressad/exoplayer/m;->i:I

    iget v8, v0, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget v9, v0, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v10, v0, Lcom/tkay/expressad/exoplayer/m;->o:F

    iget v11, v0, Lcom/tkay/expressad/exoplayer/m;->p:I

    iget v12, v0, Lcom/tkay/expressad/exoplayer/m;->q:F

    iget-object v13, v0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    iget v14, v0, Lcom/tkay/expressad/exoplayer/m;->r:I

    iget-object v15, v0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    move-object/from16 p1, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    move/from16 v16, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    move/from16 v17, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->w:I

    move/from16 v18, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->z:I

    move/from16 v21, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    move-object/from16 v22, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->B:I

    move/from16 v23, v1

    move-object/from16 p2, v2

    iget-wide v1, v0, Lcom/tkay/expressad/exoplayer/m;->l:J

    move-wide/from16 v24, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    move-object/from16 v27, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    move-object/from16 v28, v1

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    invoke-direct/range {v1 .. v28}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v29
.end method

.method public final a(J)Lcom/tkay/expressad/exoplayer/m;
    .locals 30

    move-object/from16 v0, p0

    move-wide/from16 v24, p1

    .line 587
    new-instance v29, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v1, v29

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    iget v6, v0, Lcom/tkay/expressad/exoplayer/m;->d:I

    iget v7, v0, Lcom/tkay/expressad/exoplayer/m;->i:I

    iget v8, v0, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget v9, v0, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v10, v0, Lcom/tkay/expressad/exoplayer/m;->o:F

    iget v11, v0, Lcom/tkay/expressad/exoplayer/m;->p:I

    iget v12, v0, Lcom/tkay/expressad/exoplayer/m;->q:F

    iget-object v13, v0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    iget v14, v0, Lcom/tkay/expressad/exoplayer/m;->r:I

    iget-object v15, v0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    move-object/from16 p1, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    move/from16 v16, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    move/from16 v17, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->w:I

    move/from16 v18, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->x:I

    move/from16 v19, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->y:I

    move/from16 v20, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->z:I

    move/from16 v21, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    move-object/from16 v22, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->B:I

    move/from16 v23, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    move-object/from16 v27, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    move-object/from16 v28, v1

    move-object/from16 v1, p1

    invoke-direct/range {v1 .. v28}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v29
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/m;
    .locals 31

    move-object/from16 v0, p0

    move-object/from16 v27, p1

    .line 640
    new-instance v29, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v1, v29

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    iget v6, v0, Lcom/tkay/expressad/exoplayer/m;->d:I

    iget v7, v0, Lcom/tkay/expressad/exoplayer/m;->i:I

    iget v8, v0, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget v9, v0, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v10, v0, Lcom/tkay/expressad/exoplayer/m;->o:F

    iget v11, v0, Lcom/tkay/expressad/exoplayer/m;->p:I

    iget v12, v0, Lcom/tkay/expressad/exoplayer/m;->q:F

    iget-object v13, v0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    iget v14, v0, Lcom/tkay/expressad/exoplayer/m;->r:I

    iget-object v15, v0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    move-object/from16 p1, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    move/from16 v16, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    move/from16 v17, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->w:I

    move/from16 v18, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->x:I

    move/from16 v19, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->y:I

    move/from16 v20, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->z:I

    move/from16 v21, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    move-object/from16 v22, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->B:I

    move/from16 v23, v1

    move-object/from16 v30, v2

    iget-wide v1, v0, Lcom/tkay/expressad/exoplayer/m;->l:J

    move-wide/from16 v24, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    move-object/from16 v28, v1

    move-object/from16 v1, p1

    move-object/from16 v2, v30

    invoke-direct/range {v1 .. v28}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v29
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/g/a;)Lcom/tkay/expressad/exoplayer/m;
    .locals 31

    move-object/from16 v0, p0

    move-object/from16 v28, p1

    .line 648
    new-instance v29, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v1, v29

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    iget v6, v0, Lcom/tkay/expressad/exoplayer/m;->d:I

    iget v7, v0, Lcom/tkay/expressad/exoplayer/m;->i:I

    iget v8, v0, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget v9, v0, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v10, v0, Lcom/tkay/expressad/exoplayer/m;->o:F

    iget v11, v0, Lcom/tkay/expressad/exoplayer/m;->p:I

    iget v12, v0, Lcom/tkay/expressad/exoplayer/m;->q:F

    iget-object v13, v0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    iget v14, v0, Lcom/tkay/expressad/exoplayer/m;->r:I

    iget-object v15, v0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    move-object/from16 p1, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    move/from16 v16, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    move/from16 v17, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->w:I

    move/from16 v18, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->x:I

    move/from16 v19, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->y:I

    move/from16 v20, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->z:I

    move/from16 v21, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    move-object/from16 v22, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->B:I

    move/from16 v23, v1

    move-object/from16 v30, v2

    iget-wide v1, v0, Lcom/tkay/expressad/exoplayer/m;->l:J

    move-wide/from16 v24, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    move-object/from16 v27, v1

    move-object/from16 v1, p1

    move-object/from16 v2, v30

    invoke-direct/range {v1 .. v28}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v29
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/m;)Lcom/tkay/expressad/exoplayer/m;
    .locals 32

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    if-ne v0, v1, :cond_0

    return-object v0

    .line 616
    :cond_0
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    .line 617
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    if-nez v3, :cond_1

    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    :cond_1
    move-object v5, v3

    .line 618
    iget v3, v0, Lcom/tkay/expressad/exoplayer/m;->d:I

    const/4 v4, -0x1

    if-ne v3, v4, :cond_2

    iget v3, v1, Lcom/tkay/expressad/exoplayer/m;->d:I

    :cond_2
    move v6, v3

    .line 619
    iget v3, v0, Lcom/tkay/expressad/exoplayer/m;->o:F

    const/high16 v4, -0x40800000    # -1.0f

    cmpl-float v4, v3, v4

    if-nez v4, :cond_3

    iget v3, v1, Lcom/tkay/expressad/exoplayer/m;->o:F

    :cond_3
    move v10, v3

    .line 620
    iget v3, v0, Lcom/tkay/expressad/exoplayer/m;->z:I

    iget v4, v1, Lcom/tkay/expressad/exoplayer/m;->z:I

    or-int v21, v3, v4

    .line 621
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    if-nez v3, :cond_4

    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    :cond_4
    move-object/from16 v22, v3

    .line 622
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    .line 623
    invoke-static {v1, v3}, Lcom/tkay/expressad/exoplayer/d/e;->a(Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/d/e;

    move-result-object v27

    .line 624
    new-instance v29, Lcom/tkay/expressad/exoplayer/m;

    move-object/from16 v1, v29

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    iget v7, v0, Lcom/tkay/expressad/exoplayer/m;->i:I

    iget v8, v0, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget v9, v0, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v11, v0, Lcom/tkay/expressad/exoplayer/m;->p:I

    iget v12, v0, Lcom/tkay/expressad/exoplayer/m;->q:F

    iget-object v13, v0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    iget v14, v0, Lcom/tkay/expressad/exoplayer/m;->r:I

    iget-object v15, v0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    move-object/from16 p1, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    move/from16 v16, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    move/from16 v17, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->w:I

    move/from16 v18, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->x:I

    move/from16 v19, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->y:I

    move/from16 v20, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/m;->B:I

    move/from16 v23, v1

    move-object/from16 v30, v3

    move-object/from16 v31, v4

    iget-wide v3, v0, Lcom/tkay/expressad/exoplayer/m;->l:J

    move-wide/from16 v24, v3

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    move-object/from16 v28, v1

    move-object/from16 v1, p1

    move-object/from16 v3, v30

    move-object/from16 v4, v31

    invoke-direct/range {v1 .. v28}, Lcom/tkay/expressad/exoplayer/m;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIIFIF[BILcom/tkay/expressad/exoplayer/l/b;IIIIIILjava/lang/String;IJLjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Lcom/tkay/expressad/exoplayer/g/a;)V

    return-object v29
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/m;)Z
    .locals 4

    .line 746
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    if-eq v0, v1, :cond_0

    return v2

    :cond_0
    move v0, v2

    .line 749
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 750
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [B

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [B

    invoke-static {v1, v3}, Ljava/util/Arrays;->equals([B[B)Z

    move-result v1

    if-nez v1, :cond_1

    return v2

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    const/4 p1, 0x1

    return p1
.end method

.method public final describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 6

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 705
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto/16 :goto_0

    .line 708
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/m;

    .line 709
    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->d:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->d:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->i:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->i:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->m:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->n:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->o:F

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->o:F

    cmpl-float v2, v2, v3

    if-nez v2, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->p:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->p:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->q:F

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->q:F

    cmpl-float v2, v2, v3

    if-nez v2, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->r:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->r:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->u:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->u:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->v:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->v:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->w:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->w:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->x:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->x:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->y:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->y:I

    if-ne v2, v3, :cond_2

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/m;->l:J

    iget-wide v4, p1, Lcom/tkay/expressad/exoplayer/m;->l:J

    cmp-long v2, v2, v4

    if-nez v2, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->z:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->z:I

    if-ne v2, v3, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    .line 724
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    .line 725
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->B:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->B:I

    if-ne v2, v3, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    .line 727
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    .line 728
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    .line 729
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    .line 730
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    .line 731
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    .line 732
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/m;->s:[B

    .line 733
    invoke-static {v2, v3}, Ljava/util/Arrays;->equals([B[B)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 734
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/m;->b(Lcom/tkay/expressad/exoplayer/m;)Z

    move-result p1

    if-eqz p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 3

    .line 680
    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->C:I

    if-nez v0, :cond_7

    .line 682
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    :goto_0
    add-int/lit16 v0, v0, 0x20f

    mul-int/lit8 v0, v0, 0x1f

    .line 683
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    if-nez v2, :cond_1

    move v2, v1

    goto :goto_1

    :cond_1
    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v2

    :goto_1
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 684
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    if-nez v2, :cond_2

    move v2, v1

    goto :goto_2

    :cond_2
    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v2

    :goto_2
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 685
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    if-nez v2, :cond_3

    move v2, v1

    goto :goto_3

    :cond_3
    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v2

    :goto_3
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 686
    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->d:I

    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 687
    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->m:I

    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 688
    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->n:I

    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 689
    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->u:I

    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 690
    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->v:I

    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 691
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    if-nez v2, :cond_4

    move v2, v1

    goto :goto_4

    :cond_4
    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v2

    :goto_4
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 692
    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->B:I

    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 693
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    if-nez v2, :cond_5

    move v2, v1

    goto :goto_5

    :cond_5
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/d/e;->hashCode()I

    move-result v2

    :goto_5
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x1f

    .line 694
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    if-nez v2, :cond_6

    goto :goto_6

    :cond_6
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/g/a;->hashCode()I

    move-result v1

    :goto_6
    add-int/2addr v0, v1

    .line 695
    iput v0, p0, Lcom/tkay/expressad/exoplayer/m;->C:I

    .line 697
    :cond_7
    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->C:I

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 3

    .line 673
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Format("

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->d:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", ["

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->m:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->n:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->o:F

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v2, "], ["

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/tkay/expressad/exoplayer/m;->u:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->v:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "])"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 4

    .line 798
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 799
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->g:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 800
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 801
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 802
    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->d:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 803
    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->i:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 804
    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->m:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 805
    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->n:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 806
    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->o:F

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeFloat(F)V

    .line 807
    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->p:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 808
    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->q:F

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeFloat(F)V

    .line 809
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/k/af;->a(Landroid/os/Parcel;Z)V

    .line 810
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->s:[B

    if-eqz v0, :cond_1

    .line 811
    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByteArray([B)V

    .line 813
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->r:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 814
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    invoke-virtual {p1, v0, p2}, Landroid/os/Parcel;->writeParcelable(Landroid/os/Parcelable;I)V

    .line 815
    iget p2, p0, Lcom/tkay/expressad/exoplayer/m;->u:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 816
    iget p2, p0, Lcom/tkay/expressad/exoplayer/m;->v:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 817
    iget p2, p0, Lcom/tkay/expressad/exoplayer/m;->w:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 818
    iget p2, p0, Lcom/tkay/expressad/exoplayer/m;->x:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 819
    iget p2, p0, Lcom/tkay/expressad/exoplayer/m;->y:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 820
    iget p2, p0, Lcom/tkay/expressad/exoplayer/m;->z:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 821
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/m;->A:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 822
    iget p2, p0, Lcom/tkay/expressad/exoplayer/m;->B:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 823
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/m;->l:J

    invoke-virtual {p1, v2, v3}, Landroid/os/Parcel;->writeLong(J)V

    .line 824
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    .line 825
    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    move v0, v1

    :goto_1
    if-ge v0, p2, :cond_2

    .line 827
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [B

    invoke-virtual {p1, v2}, Landroid/os/Parcel;->writeByteArray([B)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 829
    :cond_2
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    invoke-virtual {p1, p2, v1}, Landroid/os/Parcel;->writeParcelable(Landroid/os/Parcelable;I)V

    .line 830
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/m;->f:Lcom/tkay/expressad/exoplayer/g/a;

    invoke-virtual {p1, p2, v1}, Landroid/os/Parcel;->writeParcelable(Landroid/os/Parcelable;I)V

    return-void
.end method
