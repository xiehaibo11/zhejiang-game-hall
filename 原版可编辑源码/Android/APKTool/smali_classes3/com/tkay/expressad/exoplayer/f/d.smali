.class public final Lcom/tkay/expressad/exoplayer/f/d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/f/d$a;,
        Lcom/tkay/expressad/exoplayer/f/d$d;,
        Lcom/tkay/expressad/exoplayer/f/d$e;,
        Lcom/tkay/expressad/exoplayer/f/d$c;,
        Lcom/tkay/expressad/exoplayer/f/d$b;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "MediaCodecUtil"

.field private static final b:Ljava/lang/String; = "OMX.google.raw.decoder"

.field private static final c:Ljava/lang/String; = "OMX.MTK.AUDIO.DECODER.RAW"

.field private static final d:Lcom/tkay/expressad/exoplayer/f/a;

.field private static final e:Ljava/util/regex/Pattern;

.field private static final f:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Lcom/tkay/expressad/exoplayer/f/d$a;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/f/a;",
            ">;>;"
        }
    .end annotation
.end field

.field private static final g:Landroid/util/SparseIntArray;

.field private static final h:Landroid/util/SparseIntArray;

.field private static final i:Ljava/lang/String; = "avc1"

.field private static final j:Ljava/lang/String; = "avc2"

.field private static final k:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private static final l:Ljava/lang/String; = "hev1"

.field private static final m:Ljava/lang/String; = "hvc1"

.field private static n:I


# direct methods
.method static constructor <clinit>()V
    .locals 16

    const-string v0, "OMX.google.raw.decoder"

    .line 66
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/f/a;->a(Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/exoplayer/f/d;->d:Lcom/tkay/expressad/exoplayer/f/a;

    const-string v0, "^\\D?(\\d+)$"

    .line 67
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/exoplayer/f/d;->e:Ljava/util/regex/Pattern;

    .line 69
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/f/d;->f:Ljava/util/HashMap;

    const/4 v0, -0x1

    .line 83
    sput v0, Lcom/tkay/expressad/exoplayer/f/d;->n:I

    .line 659
    new-instance v0, Landroid/util/SparseIntArray;

    invoke-direct {v0}, Landroid/util/SparseIntArray;-><init>()V

    .line 660
    sput-object v0, Lcom/tkay/expressad/exoplayer/f/d;->g:Landroid/util/SparseIntArray;

    const/4 v1, 0x1

    const/16 v2, 0x42

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseIntArray;->put(II)V

    .line 661
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->g:Landroid/util/SparseIntArray;

    const/4 v2, 0x2

    const/16 v3, 0x4d

    invoke-virtual {v0, v3, v2}, Landroid/util/SparseIntArray;->put(II)V

    .line 662
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->g:Landroid/util/SparseIntArray;

    const/4 v3, 0x4

    const/16 v4, 0x58

    invoke-virtual {v0, v4, v3}, Landroid/util/SparseIntArray;->put(II)V

    .line 663
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->g:Landroid/util/SparseIntArray;

    const/16 v4, 0x8

    const/16 v5, 0x64

    invoke-virtual {v0, v5, v4}, Landroid/util/SparseIntArray;->put(II)V

    .line 665
    new-instance v0, Landroid/util/SparseIntArray;

    invoke-direct {v0}, Landroid/util/SparseIntArray;-><init>()V

    .line 666
    sput-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v5, 0xa

    invoke-virtual {v0, v5, v1}, Landroid/util/SparseIntArray;->put(II)V

    .line 668
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v5, 0xb

    invoke-virtual {v0, v5, v3}, Landroid/util/SparseIntArray;->put(II)V

    .line 669
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v5, 0xc

    invoke-virtual {v0, v5, v4}, Landroid/util/SparseIntArray;->put(II)V

    .line 670
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v5, 0x10

    const/16 v6, 0xd

    invoke-virtual {v0, v6, v5}, Landroid/util/SparseIntArray;->put(II)V

    .line 671
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v6, 0x20

    const/16 v7, 0x14

    invoke-virtual {v0, v7, v6}, Landroid/util/SparseIntArray;->put(II)V

    .line 672
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v7, 0x40

    const/16 v8, 0x15

    invoke-virtual {v0, v8, v7}, Landroid/util/SparseIntArray;->put(II)V

    .line 673
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v8, 0x80

    const/16 v9, 0x16

    invoke-virtual {v0, v9, v8}, Landroid/util/SparseIntArray;->put(II)V

    .line 674
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v9, 0x100

    const/16 v10, 0x1e

    invoke-virtual {v0, v10, v9}, Landroid/util/SparseIntArray;->put(II)V

    .line 675
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v10, 0x200

    const/16 v11, 0x1f

    invoke-virtual {v0, v11, v10}, Landroid/util/SparseIntArray;->put(II)V

    .line 676
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v11, 0x400

    invoke-virtual {v0, v6, v11}, Landroid/util/SparseIntArray;->put(II)V

    .line 677
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v12, 0x800

    const/16 v13, 0x28

    invoke-virtual {v0, v13, v12}, Landroid/util/SparseIntArray;->put(II)V

    .line 678
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v13, 0x1000

    const/16 v14, 0x29

    invoke-virtual {v0, v14, v13}, Landroid/util/SparseIntArray;->put(II)V

    .line 679
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v14, 0x2000

    const/16 v15, 0x2a

    invoke-virtual {v0, v15, v14}, Landroid/util/SparseIntArray;->put(II)V

    .line 680
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/16 v15, 0x4000

    const/16 v14, 0x32

    invoke-virtual {v0, v14, v15}, Landroid/util/SparseIntArray;->put(II)V

    .line 681
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const v14, 0x8000

    const/16 v12, 0x33

    invoke-virtual {v0, v12, v14}, Landroid/util/SparseIntArray;->put(II)V

    .line 682
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    const/high16 v12, 0x10000

    const/16 v14, 0x34

    invoke-virtual {v0, v14, v12}, Landroid/util/SparseIntArray;->put(II)V

    .line 684
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 685
    sput-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v14, "L30"

    invoke-interface {v0, v14, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 686
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L60"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 687
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L63"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 688
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L90"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 689
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L93"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 690
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L120"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 691
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L123"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 692
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L150"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 693
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L153"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 694
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/high16 v1, 0x40000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L156"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 695
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/high16 v1, 0x100000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L180"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 696
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/high16 v1, 0x400000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L183"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 697
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/high16 v1, 0x1000000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "L186"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 699
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H30"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 700
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H60"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 701
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H63"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 702
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H90"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 703
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H93"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 704
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/16 v1, 0x800

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H120"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 705
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/16 v1, 0x2000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H123"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 706
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const v1, 0x8000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H150"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 707
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/high16 v1, 0x20000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H153"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 708
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/high16 v1, 0x80000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H156"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 709
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/high16 v1, 0x200000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H180"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 710
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/high16 v1, 0x800000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H183"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 711
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/high16 v1, 0x2000000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "H186"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 85
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(I)I
    .locals 4

    const/4 v0, 0x1

    const/16 v1, 0x6300

    if-eq p0, v0, :cond_0

    const/4 v0, 0x2

    if-eq p0, v0, :cond_0

    const/high16 v0, 0x900000

    const/high16 v1, 0x200000

    const v2, 0x65400

    const v3, 0x18c00

    sparse-switch p0, :sswitch_data_0

    const/4 p0, -0x1

    return p0

    :sswitch_0
    return v0

    :sswitch_1
    const p0, 0x564000

    return p0

    :sswitch_2
    const/high16 p0, 0x220000

    return p0

    :sswitch_3
    return v1

    :sswitch_4
    const/high16 p0, 0x140000

    return p0

    :sswitch_5
    const p0, 0xe1000

    return p0

    :sswitch_6
    return v2

    :sswitch_7
    const p0, 0x31800

    return p0

    :sswitch_8
    return v3

    :cond_0
    return v1

    :sswitch_data_0
    .sparse-switch
        0x8 -> :sswitch_8
        0x10 -> :sswitch_8
        0x20 -> :sswitch_8
        0x40 -> :sswitch_7
        0x80 -> :sswitch_6
        0x100 -> :sswitch_6
        0x200 -> :sswitch_5
        0x400 -> :sswitch_4
        0x800 -> :sswitch_3
        0x1000 -> :sswitch_3
        0x2000 -> :sswitch_2
        0x4000 -> :sswitch_1
        0x8000 -> :sswitch_0
        0x10000 -> :sswitch_0
    .end sparse-switch
.end method

.method public static a(Ljava/lang/String;)Landroid/util/Pair;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    const-string v1, "\\."

    .line 211
    invoke-virtual {p0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    .line 212
    aget-object v3, v1, v2

    const/4 v4, -0x1

    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v5

    const/4 v6, 0x3

    const/4 v7, 0x2

    const/4 v8, 0x1

    sparse-switch v5, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v2, "hvc1"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    move v2, v8

    goto :goto_1

    :sswitch_1
    const-string v5, "hev1"

    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    goto :goto_1

    :sswitch_2
    const-string v2, "avc2"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    move v2, v6

    goto :goto_1

    :sswitch_3
    const-string v2, "avc1"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    move v2, v7

    goto :goto_1

    :cond_1
    :goto_0
    move v2, v4

    :goto_1
    if-eqz v2, :cond_3

    if-eq v2, v8, :cond_3

    if-eq v2, v7, :cond_2

    if-eq v2, v6, :cond_2

    return-object v0

    .line 218
    :cond_2
    invoke-static {p0, v1}, Lcom/tkay/expressad/exoplayer/f/d;->b(Ljava/lang/String;[Ljava/lang/String;)Landroid/util/Pair;

    move-result-object p0

    return-object p0

    .line 2432
    :cond_3
    array-length v2, v1

    const/4 v3, 0x4

    const-string v4, "Ignoring malformed HEVC codec string: "

    const-string v5, "MediaCodecUtil"

    if-ge v2, v3, :cond_4

    .line 2434
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v5, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    .line 2438
    :cond_4
    sget-object v2, Lcom/tkay/expressad/exoplayer/f/d;->e:Ljava/util/regex/Pattern;

    aget-object v3, v1, v8

    invoke-virtual {v2, v3}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v2

    .line 2439
    invoke-virtual {v2}, Ljava/util/regex/Matcher;->matches()Z

    move-result v3

    if-nez v3, :cond_5

    .line 2440
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v5, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    .line 2443
    :cond_5
    invoke-virtual {v2, v8}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object p0

    const-string v3, "1"

    .line 2445
    invoke-virtual {v3, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_6

    move v7, v8

    goto :goto_2

    :cond_6
    const-string v3, "2"

    .line 2447
    invoke-virtual {v3, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_8

    .line 2453
    :goto_2
    sget-object p0, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    aget-object v1, v1, v6

    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    if-nez p0, :cond_7

    .line 2455
    new-instance p0, Ljava/lang/StringBuilder;

    const-string v1, "Unknown HEVC level string: "

    invoke-direct {p0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v8}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v5, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    .line 2458
    :cond_7
    new-instance v0, Landroid/util/Pair;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-direct {v0, v1, p0}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object v0

    .line 2450
    :cond_8
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    const-string v1, "Unknown HEVC profile string: "

    invoke-virtual {v1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v5, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    nop

    :sswitch_data_0
    .sparse-switch
        0x2ddf23 -> :sswitch_3
        0x2ddf24 -> :sswitch_2
        0x30d038 -> :sswitch_1
        0x310dbc -> :sswitch_0
    .end sparse-switch
.end method

.method private static a(Ljava/lang/String;[Ljava/lang/String;)Landroid/util/Pair;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/String;",
            ")",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 432
    array-length v0, p1

    const-string v1, "Ignoring malformed HEVC codec string: "

    const/4 v2, 0x0

    const-string v3, "MediaCodecUtil"

    const/4 v4, 0x4

    if-ge v0, v4, :cond_0

    .line 434
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v2

    .line 438
    :cond_0
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->e:Ljava/util/regex/Pattern;

    const/4 v4, 0x1

    aget-object v5, p1, v4

    invoke-virtual {v0, v5}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    .line 439
    invoke-virtual {v0}, Ljava/util/regex/Matcher;->matches()Z

    move-result v5

    if-nez v5, :cond_1

    .line 440
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v2

    .line 443
    :cond_1
    invoke-virtual {v0, v4}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object p0

    const-string v1, "1"

    .line 445
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    move p0, v4

    goto :goto_0

    :cond_2
    const-string v1, "2"

    .line 447
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    const/4 p0, 0x2

    .line 453
    :goto_0
    sget-object v1, Lcom/tkay/expressad/exoplayer/f/d;->k:Ljava/util/Map;

    const/4 v5, 0x3

    aget-object p1, p1, v5

    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    if-nez p1, :cond_3

    .line 455
    new-instance p0, Ljava/lang/StringBuilder;

    const-string p1, "Unknown HEVC level string: "

    invoke-direct {p0, p1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v4}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v2

    .line 458
    :cond_3
    new-instance v0, Landroid/util/Pair;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-direct {v0, p0, p1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object v0

    .line 450
    :cond_4
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    const-string p1, "Unknown HEVC profile string: "

    invoke-virtual {p1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v2
.end method

.method public static a()Lcom/tkay/expressad/exoplayer/f/a;
    .locals 1

    .line 114
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->d:Lcom/tkay/expressad/exoplayer/f/a;

    return-object v0
.end method

.method public static a(Ljava/lang/String;Z)Lcom/tkay/expressad/exoplayer/f/a;
    .locals 0

    .line 129
    invoke-static {p0, p1}, Lcom/tkay/expressad/exoplayer/f/d;->c(Ljava/lang/String;Z)Ljava/util/List;

    move-result-object p0

    .line 130
    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const/4 p1, 0x0

    invoke-interface {p0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/expressad/exoplayer/f/a;

    return-object p0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/f/d$a;Lcom/tkay/expressad/exoplayer/f/d$c;Ljava/lang/String;)Ljava/util/ArrayList;
    .locals 18
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/f/d$a;",
            "Lcom/tkay/expressad/exoplayer/f/d$c;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/f/a;",
            ">;"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    .line 240
    :try_start_0
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    .line 241
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/f/d$a;->a:Ljava/lang/String;

    .line 242
    invoke-interface/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/f/d$c;->a()I

    move-result v6

    .line 243
    invoke-interface/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/f/d$c;->b()Z

    move-result v7

    const/4 v8, 0x0

    :goto_0
    if-ge v8, v6, :cond_16

    .line 246
    invoke-interface {v2, v8}, Lcom/tkay/expressad/exoplayer/f/d$c;->a(I)Landroid/media/MediaCodecInfo;

    move-result-object v9

    .line 247
    invoke-virtual {v9}, Landroid/media/MediaCodecInfo;->getName()Ljava/lang/String;

    move-result-object v10

    .line 3300
    invoke-virtual {v9}, Landroid/media/MediaCodecInfo;->isEncoder()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4

    const-string v11, ".secure"

    if-nez v0, :cond_1

    if-nez v7, :cond_0

    :try_start_1
    invoke-virtual {v10, v11}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 3305
    :cond_0
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v13, 0x15

    if-ge v0, v13, :cond_2

    const-string v0, "CIPAACDecoder"

    .line 3306
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "CIPMP3Decoder"

    .line 3307
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "CIPVorbisDecoder"

    .line 3308
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "CIPAMRNBDecoder"

    .line 3309
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "AACDecoder"

    .line 3310
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "MP3Decoder"

    .line 3311
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    :cond_1
    :goto_1
    move-object/from16 v13, p2

    goto/16 :goto_2

    .line 3316
    :cond_2
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v13, 0x12

    if-ge v0, v13, :cond_3

    const-string v0, "OMX.SEC.MP3.Decoder"

    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    goto :goto_1

    .line 3322
    :cond_3
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ge v0, v13, :cond_4

    const-string v0, "OMX.MTK.AUDIO.DECODER.AAC"

    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    const-string v0, "a70"

    sget-object v13, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3323
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "Xiaomi"

    sget-object v13, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    .line 3324
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v13, "HM"

    invoke-virtual {v0, v13}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    goto :goto_1

    .line 3330
    :cond_4
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v13, 0x10

    if-ne v0, v13, :cond_5

    const-string v0, "OMX.qcom.audio.decoder.mp3"

    .line 3331
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    const-string v0, "dlxu"

    sget-object v14, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3332
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "protou"

    sget-object v14, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3333
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "ville"

    sget-object v14, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3334
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "villeplus"

    sget-object v14, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3335
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "villec2"

    sget-object v14, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3336
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v14, "gee"

    .line 3337
    invoke-virtual {v0, v14}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "C6602"

    sget-object v14, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3338
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "C6603"

    sget-object v14, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3339
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "C6606"

    sget-object v14, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3340
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "C6616"

    sget-object v14, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3341
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "L36h"

    sget-object v14, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3342
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "SO-02E"

    sget-object v14, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3343
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    goto/16 :goto_1

    .line 3348
    :cond_5
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ne v0, v13, :cond_6

    const-string v0, "OMX.qcom.audio.decoder.aac"

    .line 3349
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    const-string v0, "C1504"

    sget-object v13, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3350
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "C1505"

    sget-object v13, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3351
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "C1604"

    sget-object v13, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3352
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "C1605"

    sget-object v13, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3353
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    goto/16 :goto_1

    .line 3358
    :cond_6
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_4

    const/16 v13, 0x18

    const-string v14, "samsung"

    if-ge v0, v13, :cond_8

    :try_start_2
    const-string v0, "OMX.SEC.aac.dec"

    .line 3359
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    const-string v0, "OMX.Exynos.AAC.Decoder"

    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    :cond_7
    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    .line 3360
    invoke-virtual {v14, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v13, "zeroflte"

    .line 3361
    invoke-virtual {v0, v13}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v13, "zerolte"

    .line 3362
    invoke-virtual {v0, v13}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v13, "zenlte"

    .line 3363
    invoke-virtual {v0, v13}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "SC-05G"

    sget-object v13, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3364
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "marinelteatt"

    sget-object v13, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3365
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "404SC"

    sget-object v13, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3366
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "SC-04G"

    sget-object v13, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3367
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "SCV31"

    sget-object v13, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3368
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    goto/16 :goto_1

    .line 3374
    :cond_8
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_4

    const-string v13, "jflte"

    const/16 v15, 0x13

    if-gt v0, v15, :cond_9

    :try_start_3
    const-string v0, "OMX.SEC.vp8.dec"

    .line 3375
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    invoke-virtual {v14, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v14, "d2"

    .line 3376
    invoke-virtual {v0, v14}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v14, "serrano"

    invoke-virtual {v0, v14}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 3377
    invoke-virtual {v0, v13}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v14, "santos"

    invoke-virtual {v0, v14}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v14, "t0"

    .line 3378
    invoke-virtual {v0, v14}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_9

    goto/16 :goto_1

    .line 3383
    :cond_9
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-gt v0, v15, :cond_a

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    invoke-virtual {v0, v13}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_a

    const-string v0, "OMX.qcom.video.decoder.vp8"

    .line 3384
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    goto/16 :goto_1

    :cond_a
    const-string v0, "audio/eac3-joc"

    move-object/from16 v13, p2

    .line 3389
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_b

    const-string v0, "OMX.MTK.AUDIO.DECODER.DSPAC3"

    .line 3390
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_b

    goto :goto_2

    :cond_b
    const/4 v0, 0x1

    goto :goto_3

    :goto_2
    const/4 v0, 0x0

    :goto_3
    if-eqz v0, :cond_15

    .line 249
    invoke-virtual {v9}, Landroid/media/MediaCodecInfo;->getSupportedTypes()[Ljava/lang/String;

    move-result-object v14

    array-length v15, v14

    const/4 v12, 0x0

    :goto_4
    if-ge v12, v15, :cond_15

    aget-object v3, v14, v12

    .line 250
    invoke-virtual {v3, v5}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_4

    if-eqz v0, :cond_14

    .line 252
    :try_start_4
    invoke-virtual {v9, v3}, Landroid/media/MediaCodecInfo;->getCapabilitiesForType(Ljava/lang/String;)Landroid/media/MediaCodecInfo$CodecCapabilities;

    move-result-object v0
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    move/from16 v16, v6

    .line 253
    :try_start_5
    invoke-interface {v2, v5, v0}, Lcom/tkay/expressad/exoplayer/f/d$c;->a(Ljava/lang/String;Landroid/media/MediaCodecInfo$CodecCapabilities;)Z

    move-result v6

    .line 3426
    sget v2, Lcom/tkay/expressad/exoplayer/k/af;->a:I
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    move-object/from16 v17, v9

    const/16 v9, 0x16

    if-gt v2, v9, :cond_e

    :try_start_6
    const-string v2, "ODROID-XU3"

    sget-object v9, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    .line 3427
    invoke-virtual {v2, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_c

    const-string v2, "Nexus 10"

    sget-object v9, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    invoke-virtual {v2, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_e

    :cond_c
    const-string v2, "OMX.Exynos.AVC.Decoder"

    .line 3428
    invoke-virtual {v2, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_d

    const-string v2, "OMX.Exynos.AVC.Decoder.secure"

    invoke-virtual {v2, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_e

    :cond_d
    const/4 v2, 0x1

    goto :goto_5

    :catch_0
    move-exception v0

    goto :goto_a

    :cond_e
    const/4 v2, 0x0

    :goto_5
    if-eqz v7, :cond_10

    .line 255
    iget-boolean v9, v1, Lcom/tkay/expressad/exoplayer/f/d$a;->b:Z

    if-eq v9, v6, :cond_f

    goto :goto_7

    :cond_f
    :goto_6
    const/4 v6, 0x0

    goto :goto_8

    :cond_10
    :goto_7
    if-nez v7, :cond_11

    iget-boolean v9, v1, Lcom/tkay/expressad/exoplayer/f/d$a;->b:Z

    if-nez v9, :cond_11

    goto :goto_6

    .line 257
    :goto_8
    invoke-static {v10, v5, v0, v2, v6}, Lcom/tkay/expressad/exoplayer/f/a;->a(Ljava/lang/String;Ljava/lang/String;Landroid/media/MediaCodecInfo$CodecCapabilities;ZZ)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto/16 :goto_c

    :cond_11
    if-nez v7, :cond_12

    if-eqz v6, :cond_12

    .line 260
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_0

    const/4 v9, 0x1

    :try_start_7
    invoke-static {v6, v5, v0, v2, v9}, Lcom/tkay/expressad/exoplayer/f/a;->a(Ljava/lang/String;Ljava/lang/String;Landroid/media/MediaCodecInfo$CodecCapabilities;ZZ)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_1

    return-object v4

    :catch_1
    move-exception v0

    goto :goto_b

    :cond_12
    const/4 v9, 0x1

    goto :goto_c

    :catch_2
    move-exception v0

    goto :goto_9

    :catch_3
    move-exception v0

    move/from16 v16, v6

    :goto_9
    move-object/from16 v17, v9

    :goto_a
    const/4 v9, 0x1

    .line 266
    :goto_b
    :try_start_8
    sget v2, Lcom/tkay/expressad/exoplayer/k/af;->a:I
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_4

    const/16 v6, 0x17

    const-string v9, "MediaCodecUtil"

    if-gt v2, v6, :cond_13

    :try_start_9
    invoke-virtual {v4}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_13

    .line 268
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "Skipping codec "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " (failed to query capabilities)"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v9, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_c

    .line 272
    :cond_13
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Failed to query codec "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " ("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v9, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 273
    throw v0
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_4

    :cond_14
    move/from16 v16, v6

    move-object/from16 v17, v9

    :goto_c
    add-int/lit8 v12, v12, 0x1

    move-object/from16 v2, p1

    move/from16 v6, v16

    move-object/from16 v9, v17

    goto/16 :goto_4

    :cond_15
    move/from16 v16, v6

    add-int/lit8 v8, v8, 0x1

    move-object/from16 v2, p1

    move/from16 v6, v16

    goto/16 :goto_0

    :cond_16
    return-object v4

    :catch_4
    move-exception v0

    .line 284
    new-instance v1, Lcom/tkay/expressad/exoplayer/f/d$b;

    const/4 v2, 0x0

    invoke-direct {v1, v0, v2}, Lcom/tkay/expressad/exoplayer/f/d$b;-><init>(Ljava/lang/Throwable;B)V

    throw v1
.end method

.method private static a(Ljava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/f/a;",
            ">;)V"
        }
    .end annotation

    .line 404
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x1a

    if-ge v0, v1, :cond_1

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x1

    if-le v0, v1, :cond_1

    const/4 v0, 0x0

    .line 405
    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/f/a;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    const-string v3, "OMX.MTK.AUDIO.DECODER.RAW"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 407
    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 408
    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/f/a;

    .line 409
    iget-object v3, v2, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    const-string v4, "OMX.google.raw.decoder"

    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 410
    invoke-interface {p0, v1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    .line 411
    invoke-interface {p0, v0, v2}, Ljava/util/List;->add(ILjava/lang/Object;)V

    return-void

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private static a(Landroid/media/MediaCodecInfo;Ljava/lang/String;ZLjava/lang/String;)Z
    .locals 3

    .line 300
    invoke-virtual {p0}, Landroid/media/MediaCodecInfo;->isEncoder()Z

    move-result p0

    const/4 v0, 0x0

    if-nez p0, :cond_11

    if-nez p2, :cond_0

    const-string p0, ".secure"

    invoke-virtual {p1, p0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    goto/16 :goto_0

    .line 305
    :cond_0
    sget p0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 p2, 0x15

    if-ge p0, p2, :cond_2

    const-string p0, "CIPAACDecoder"

    .line 306
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_1

    const-string p0, "CIPMP3Decoder"

    .line 307
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_1

    const-string p0, "CIPVorbisDecoder"

    .line 308
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_1

    const-string p0, "CIPAMRNBDecoder"

    .line 309
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_1

    const-string p0, "AACDecoder"

    .line 310
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_1

    const-string p0, "MP3Decoder"

    .line 311
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    :cond_1
    return v0

    .line 316
    :cond_2
    sget p0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 p2, 0x12

    if-ge p0, p2, :cond_3

    const-string p0, "OMX.SEC.MP3.Decoder"

    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_3

    return v0

    .line 322
    :cond_3
    sget p0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ge p0, p2, :cond_5

    const-string p0, "OMX.MTK.AUDIO.DECODER.AAC"

    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_5

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "a70"

    .line 323
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_4

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    const-string p2, "Xiaomi"

    .line 324
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_5

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "HM"

    invoke-virtual {p0, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_5

    :cond_4
    return v0

    .line 330
    :cond_5
    sget p0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 p2, 0x10

    if-ne p0, p2, :cond_7

    const-string p0, "OMX.qcom.audio.decoder.mp3"

    .line 331
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_7

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "dlxu"

    .line 332
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_6

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "protou"

    .line 333
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_6

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "ville"

    .line 334
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_6

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "villeplus"

    .line 335
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_6

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "villec2"

    .line 336
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_6

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "gee"

    .line 337
    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_6

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "C6602"

    .line 338
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_6

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "C6603"

    .line 339
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_6

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "C6606"

    .line 340
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_6

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "C6616"

    .line 341
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_6

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "L36h"

    .line 342
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_6

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "SO-02E"

    .line 343
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_7

    :cond_6
    return v0

    .line 348
    :cond_7
    sget p0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ne p0, p2, :cond_9

    const-string p0, "OMX.qcom.audio.decoder.aac"

    .line 349
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_9

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "C1504"

    .line 350
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_8

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "C1505"

    .line 351
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_8

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "C1604"

    .line 352
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_8

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "C1605"

    .line 353
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_9

    :cond_8
    return v0

    .line 358
    :cond_9
    sget p0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 p2, 0x18

    const-string v1, "samsung"

    if-ge p0, p2, :cond_c

    const-string p0, "OMX.SEC.aac.dec"

    .line 359
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_a

    const-string p0, "OMX.Exynos.AAC.Decoder"

    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_c

    :cond_a
    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    .line 360
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_c

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "zeroflte"

    .line 361
    invoke-virtual {p0, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_b

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "zerolte"

    .line 362
    invoke-virtual {p0, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_b

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "zenlte"

    .line 363
    invoke-virtual {p0, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_b

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "SC-05G"

    .line 364
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_b

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "marinelteatt"

    .line 365
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_b

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "404SC"

    .line 366
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_b

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "SC-04G"

    .line 367
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_b

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p2, "SCV31"

    .line 368
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_c

    :cond_b
    return v0

    .line 374
    :cond_c
    sget p0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const-string p2, "jflte"

    const/16 v2, 0x13

    if-gt p0, v2, :cond_e

    const-string p0, "OMX.SEC.vp8.dec"

    .line 375
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_e

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_e

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "d2"

    .line 376
    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_d

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "serrano"

    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_d

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    .line 377
    invoke-virtual {p0, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_d

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "santos"

    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_d

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "t0"

    .line 378
    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_e

    :cond_d
    return v0

    .line 383
    :cond_e
    sget p0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-gt p0, v2, :cond_f

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    invoke-virtual {p0, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_f

    const-string p0, "OMX.qcom.video.decoder.vp8"

    .line 384
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_f

    return v0

    :cond_f
    const-string p0, "audio/eac3-joc"

    .line 389
    invoke-virtual {p0, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_10

    const-string p0, "OMX.MTK.AUDIO.DECODER.DSPAC3"

    .line 390
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_10

    return v0

    :cond_10
    const/4 p0, 0x1

    return p0

    :cond_11
    :goto_0
    return v0
.end method

.method public static b()I
    .locals 12

    .line 183
    sget v0, Lcom/tkay/expressad/exoplayer/f/d;->n:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_4

    const/4 v0, 0x0

    const-string v2, "video/avc"

    .line 185
    invoke-static {v2, v0}, Lcom/tkay/expressad/exoplayer/f/d;->a(Ljava/lang/String;Z)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 187
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/f/a;->a()[Landroid/media/MediaCodecInfo$CodecProfileLevel;

    move-result-object v2

    array-length v3, v2

    move v4, v0

    :goto_0
    if-ge v0, v3, :cond_1

    aget-object v5, v2, v0

    .line 188
    iget v5, v5, Landroid/media/MediaCodecInfo$CodecProfileLevel;->level:I

    const/high16 v6, 0x900000

    const/high16 v7, 0x200000

    const v8, 0x65400

    const/16 v9, 0x6300

    const/4 v10, 0x1

    const v11, 0x18c00

    if-eq v5, v10, :cond_0

    const/4 v10, 0x2

    if-eq v5, v10, :cond_0

    sparse-switch v5, :sswitch_data_0

    move v6, v1

    goto :goto_1

    :sswitch_0
    const v6, 0x564000

    goto :goto_1

    :sswitch_1
    const/high16 v6, 0x220000

    goto :goto_1

    :sswitch_2
    move v6, v7

    goto :goto_1

    :sswitch_3
    const/high16 v6, 0x140000

    goto :goto_1

    :sswitch_4
    const v6, 0xe1000

    goto :goto_1

    :sswitch_5
    move v6, v8

    goto :goto_1

    :sswitch_6
    const v6, 0x31800

    goto :goto_1

    :sswitch_7
    move v6, v11

    goto :goto_1

    :cond_0
    move v6, v9

    :goto_1
    :sswitch_8
    invoke-static {v6, v4}, Ljava/lang/Math;->max(II)I

    move-result v4

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 192
    :cond_1
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_2

    const v0, 0x54600

    goto :goto_2

    :cond_2
    const v0, 0x2a300

    :goto_2
    invoke-static {v4, v0}, Ljava/lang/Math;->max(II)I

    move-result v0

    .line 194
    :cond_3
    sput v0, Lcom/tkay/expressad/exoplayer/f/d;->n:I

    .line 196
    :cond_4
    sget v0, Lcom/tkay/expressad/exoplayer/f/d;->n:I

    return v0

    nop

    :sswitch_data_0
    .sparse-switch
        0x8 -> :sswitch_7
        0x10 -> :sswitch_7
        0x20 -> :sswitch_7
        0x40 -> :sswitch_6
        0x80 -> :sswitch_5
        0x100 -> :sswitch_5
        0x200 -> :sswitch_4
        0x400 -> :sswitch_3
        0x800 -> :sswitch_2
        0x1000 -> :sswitch_2
        0x2000 -> :sswitch_1
        0x4000 -> :sswitch_0
        0x8000 -> :sswitch_8
        0x10000 -> :sswitch_8
    .end sparse-switch
.end method

.method private static b(Ljava/lang/String;[Ljava/lang/String;)Landroid/util/Pair;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/String;",
            ")",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 462
    array-length v0, p1

    const-string v1, "Ignoring malformed AVC codec string: "

    const/4 v2, 0x2

    const/4 v3, 0x0

    const-string v4, "MediaCodecUtil"

    if-ge v0, v2, :cond_0

    .line 464
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v4, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v3

    :cond_0
    const/4 v0, 0x1

    .line 470
    :try_start_0
    aget-object v5, p1, v0

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v5

    const/4 v6, 0x6

    if-ne v5, v6, :cond_1

    .line 472
    aget-object v5, p1, v0

    const/4 v6, 0x0

    invoke-virtual {v5, v6, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v2

    const/16 v5, 0x10

    invoke-static {v2, v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    .line 473
    aget-object p1, p1, v0

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    goto :goto_0

    .line 474
    :cond_1
    array-length v5, p1

    const/4 v6, 0x3

    if-lt v5, v6, :cond_4

    .line 476
    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    .line 477
    aget-object p1, p1, v2

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v2, v0

    .line 488
    :goto_0
    sget-object p1, Lcom/tkay/expressad/exoplayer/f/d;->g:Landroid/util/SparseIntArray;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, -0x1

    invoke-virtual {p1, v0, v1}, Landroid/util/SparseIntArray;->get(II)I

    move-result p1

    if-ne p1, v1, :cond_2

    .line 490
    invoke-static {v2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    const-string p1, "Unknown AVC profile: "

    invoke-virtual {p1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v4, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v3

    .line 493
    :cond_2
    sget-object v0, Lcom/tkay/expressad/exoplayer/f/d;->h:Landroid/util/SparseIntArray;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result v2

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseIntArray;->get(II)I

    move-result v0

    if-ne v0, v1, :cond_3

    .line 495
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    const-string p1, "Unknown AVC level: "

    invoke-virtual {p1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v4, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v3

    .line 498
    :cond_3
    new-instance p0, Landroid/util/Pair;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p0

    .line 480
    :cond_4
    :try_start_1
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_0

    return-object v3

    .line 484
    :catch_0
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v4, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v3
.end method

.method private static b(Ljava/lang/String;Z)V
    .locals 1

    .line 99
    :try_start_0
    invoke-static {p0, p1}, Lcom/tkay/expressad/exoplayer/f/d;->c(Ljava/lang/String;Z)Ljava/util/List;
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/f/d$b; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    const-string p1, "MediaCodecUtil"

    const-string v0, "Codec warming failed"

    .line 102
    invoke-static {p1, v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return-void
.end method

.method private static b(Ljava/lang/String;)Z
    .locals 2

    .line 426
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x16

    if-gt v0, v1, :cond_2

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "ODROID-XU3"

    .line 427
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "Nexus 10"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    :cond_0
    const-string v0, "OMX.Exynos.AVC.Decoder"

    .line 428
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "OMX.Exynos.AVC.Decoder.secure"

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

.method private static declared-synchronized c(Ljava/lang/String;Z)Ljava/util/List;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Z)",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/f/a;",
            ">;"
        }
    .end annotation

    const-class v0, Lcom/tkay/expressad/exoplayer/f/d;

    monitor-enter v0

    .line 146
    :try_start_0
    new-instance v1, Lcom/tkay/expressad/exoplayer/f/d$a;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/exoplayer/f/d$a;-><init>(Ljava/lang/String;Z)V

    .line 147
    sget-object v2, Lcom/tkay/expressad/exoplayer/f/d;->f:Ljava/util/HashMap;

    invoke-virtual {v2, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/List;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    .line 149
    monitor-exit v0

    return-object v2

    .line 151
    :cond_0
    :try_start_1
    sget v2, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v3, 0x15

    const/4 v4, 0x0

    if-lt v2, v3, :cond_1

    .line 152
    new-instance v2, Lcom/tkay/expressad/exoplayer/f/d$e;

    invoke-direct {v2, p1}, Lcom/tkay/expressad/exoplayer/f/d$e;-><init>(Z)V

    goto :goto_0

    :cond_1
    new-instance v2, Lcom/tkay/expressad/exoplayer/f/d$d;

    invoke-direct {v2, v4}, Lcom/tkay/expressad/exoplayer/f/d$d;-><init>(B)V

    .line 153
    :goto_0
    invoke-static {v1, v2, p0}, Lcom/tkay/expressad/exoplayer/f/d;->a(Lcom/tkay/expressad/exoplayer/f/d$a;Lcom/tkay/expressad/exoplayer/f/d$c;Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v5

    if-eqz p1, :cond_2

    .line 154
    invoke-virtual {v5}, Ljava/util/ArrayList;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_2

    sget p1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-gt v3, p1, :cond_2

    sget p1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v3, 0x17

    if-gt p1, v3, :cond_2

    .line 157
    new-instance v2, Lcom/tkay/expressad/exoplayer/f/d$d;

    invoke-direct {v2, v4}, Lcom/tkay/expressad/exoplayer/f/d$d;-><init>(B)V

    .line 158
    invoke-static {v1, v2, p0}, Lcom/tkay/expressad/exoplayer/f/d;->a(Lcom/tkay/expressad/exoplayer/f/d$a;Lcom/tkay/expressad/exoplayer/f/d$c;Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v5

    .line 159
    invoke-virtual {v5}, Ljava/util/ArrayList;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_2

    const-string p1, "MediaCodecUtil"

    .line 160
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v6, "MediaCodecList API didn\'t list secure decoder for: "

    invoke-direct {v3, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ". Assuming: "

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 161
    invoke-virtual {v5, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/exoplayer/f/a;

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 160
    invoke-static {p1, v3}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const-string p1, "audio/eac3-joc"

    .line 164
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 166
    new-instance p1, Lcom/tkay/expressad/exoplayer/f/d$a;

    const-string v3, "audio/eac3"

    iget-boolean v4, v1, Lcom/tkay/expressad/exoplayer/f/d$a;->b:Z

    invoke-direct {p1, v3, v4}, Lcom/tkay/expressad/exoplayer/f/d$a;-><init>(Ljava/lang/String;Z)V

    .line 168
    invoke-static {p1, v2, p0}, Lcom/tkay/expressad/exoplayer/f/d;->a(Lcom/tkay/expressad/exoplayer/f/d$a;Lcom/tkay/expressad/exoplayer/f/d$c;Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object p0

    .line 169
    invoke-virtual {v5, p0}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    .line 171
    :cond_3
    invoke-static {v5}, Lcom/tkay/expressad/exoplayer/f/d;->a(Ljava/util/List;)V

    .line 172
    invoke-static {v5}, Ljava/util/Collections;->unmodifiableList(Ljava/util/List;)Ljava/util/List;

    move-result-object p0

    .line 173
    sget-object p1, Lcom/tkay/expressad/exoplayer/f/d;->f:Ljava/util/HashMap;

    invoke-virtual {p1, v1, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 174
    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method
