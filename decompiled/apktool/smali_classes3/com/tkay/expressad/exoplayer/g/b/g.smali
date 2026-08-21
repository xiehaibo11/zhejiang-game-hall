.class public final Lcom/tkay/expressad/exoplayer/g/b/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/g/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/g/b/g$b;,
        Lcom/tkay/expressad/exoplayer/g/b/g$a;
    }
.end annotation


# static fields
.field public static final a:Lcom/tkay/expressad/exoplayer/g/b/g$a;

.field public static final b:I

.field public static final c:I = 0xa

.field private static final d:Ljava/lang/String; = "Id3Decoder"

.field private static final e:I = 0x80

.field private static final f:I = 0x40

.field private static final g:I = 0x20

.field private static final h:I = 0x8

.field private static final i:I = 0x4

.field private static final j:I = 0x40

.field private static final k:I = 0x2

.field private static final l:I = 0x1

.field private static final m:I = 0x0

.field private static final n:I = 0x1

.field private static final o:I = 0x2

.field private static final p:I = 0x3


# instance fields
.field private final q:Lcom/tkay/expressad/exoplayer/g/b/g$a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 59
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/b/g$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/g/b/g$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/g/b/g;->a:Lcom/tkay/expressad/exoplayer/g/b/g$a;

    const-string v0, "ID3"

    .line 73
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->f(Ljava/lang/String;)I

    move-result v0

    sput v0, Lcom/tkay/expressad/exoplayer/g/b/g;->b:I

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    .line 96
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/g/b/g;-><init>(Lcom/tkay/expressad/exoplayer/g/b/g$a;)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/g/b/g$a;)V
    .locals 0

    .line 102
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 103
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/g/b/g;->q:Lcom/tkay/expressad/exoplayer/g/b/g$a;

    return-void
.end method

.method private static a([BII)I
    .locals 1

    .line 711
    invoke-static {p0, p1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result p1

    if-eqz p2, :cond_3

    const/4 v0, 0x3

    if-ne p2, v0, :cond_0

    goto :goto_1

    .line 719
    :cond_0
    :goto_0
    array-length p2, p0

    add-int/lit8 p2, p2, -0x1

    if-ge p1, p2, :cond_2

    .line 720
    rem-int/lit8 p2, p1, 0x2

    if-nez p2, :cond_1

    add-int/lit8 p2, p1, 0x1

    aget-byte p2, p0, p2

    if-nez p2, :cond_1

    return p1

    :cond_1
    add-int/lit8 p1, p1, 0x1

    .line 723
    invoke-static {p0, p1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result p1

    goto :goto_0

    .line 726
    :cond_2
    array-length p0, p0

    return p0

    :cond_3
    :goto_1
    return p1
.end method

.method private a([BI)Lcom/tkay/expressad/exoplayer/g/a;
    .locals 12

    .line 120
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 121
    new-instance v1, Lcom/tkay/expressad/exoplayer/k/s;

    invoke-direct {v1, p1, p2}, Lcom/tkay/expressad/exoplayer/k/s;-><init>([BI)V

    .line 2162
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result p1

    const/4 p2, 0x2

    const/16 v2, 0xa

    const-string v3, "Id3Decoder"

    const/4 v4, 0x4

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x1

    if-ge p1, v2, :cond_0

    const-string p1, "Data too short to be an ID3 tag"

    .line 2163
    invoke-static {v3, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    move-object v10, v5

    goto/16 :goto_7

    .line 2167
    :cond_0
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->g()I

    move-result p1

    .line 2168
    sget v8, Lcom/tkay/expressad/exoplayer/g/b/g;->b:I

    if-eq p1, v8, :cond_1

    .line 2169
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v8, "Unexpected first three bytes of ID3 tag header: "

    invoke-virtual {v8, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 2173
    :cond_1
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result p1

    .line 2174
    invoke-virtual {v1, v7}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 2175
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v8

    .line 2176
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->l()I

    move-result v9

    if-ne p1, p2, :cond_3

    and-int/lit8 v10, v8, 0x40

    if-eqz v10, :cond_2

    move v10, v7

    goto :goto_1

    :cond_2
    move v10, v6

    :goto_1
    if-eqz v10, :cond_9

    const-string p1, "Skipped ID3 tag with majorVersion=2 and undefined compression scheme"

    .line 2181
    invoke-static {v3, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :cond_3
    const/4 v10, 0x3

    if-ne p1, v10, :cond_5

    and-int/lit8 v10, v8, 0x40

    if-eqz v10, :cond_4

    move v10, v7

    goto :goto_2

    :cond_4
    move v10, v6

    :goto_2
    if-eqz v10, :cond_9

    .line 2187
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v10

    .line 2188
    invoke-virtual {v1, v10}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    add-int/2addr v10, v4

    sub-int/2addr v9, v10

    goto :goto_5

    :cond_5
    if-ne p1, v4, :cond_b

    and-int/lit8 v10, v8, 0x40

    if-eqz v10, :cond_6

    move v10, v7

    goto :goto_3

    :cond_6
    move v10, v6

    :goto_3
    if-eqz v10, :cond_7

    .line 2194
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->l()I

    move-result v10

    add-int/lit8 v11, v10, -0x4

    .line 2195
    invoke-virtual {v1, v11}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    sub-int/2addr v9, v10

    :cond_7
    and-int/lit8 v10, v8, 0x10

    if-eqz v10, :cond_8

    move v10, v7

    goto :goto_4

    :cond_8
    move v10, v6

    :goto_4
    if-eqz v10, :cond_9

    add-int/lit8 v9, v9, -0xa

    :cond_9
    :goto_5
    if-ge p1, v4, :cond_a

    and-int/lit16 v8, v8, 0x80

    if-eqz v8, :cond_a

    move v8, v7

    goto :goto_6

    :cond_a
    move v8, v6

    .line 2209
    :goto_6
    new-instance v10, Lcom/tkay/expressad/exoplayer/g/b/g$b;

    invoke-direct {v10, p1, v8, v9}, Lcom/tkay/expressad/exoplayer/g/b/g$b;-><init>(IZI)V

    goto :goto_7

    .line 2203
    :cond_b
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v8, "Skipped ID3 tag with unsupported majorVersion="

    invoke-virtual {v8, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_0

    :goto_7
    if-nez v10, :cond_c

    return-object v5

    .line 128
    :cond_c
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result p1

    .line 129
    invoke-static {v10}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result v8

    if-ne v8, p2, :cond_d

    const/4 v2, 0x6

    .line 130
    :cond_d
    invoke-static {v10}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->b(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result p2

    .line 131
    invoke-static {v10}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->c(Lcom/tkay/expressad/exoplayer/g/b/g$b;)Z

    move-result v8

    if-eqz v8, :cond_e

    .line 132
    invoke-static {v10}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->b(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result p2

    invoke-static {v1, p2}, Lcom/tkay/expressad/exoplayer/g/b/g;->f(Lcom/tkay/expressad/exoplayer/k/s;I)I

    move-result p2

    :cond_e
    add-int/2addr p1, p2

    .line 134
    invoke-virtual {v1, p1}, Lcom/tkay/expressad/exoplayer/k/s;->b(I)V

    .line 137
    invoke-static {v10}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result p1

    invoke-static {v1, p1, v2, v6}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(Lcom/tkay/expressad/exoplayer/k/s;IIZ)Z

    move-result p1

    if-nez p1, :cond_10

    .line 138
    invoke-static {v10}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result p1

    if-ne p1, v4, :cond_f

    invoke-static {v1, v4, v2, v7}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(Lcom/tkay/expressad/exoplayer/k/s;IIZ)Z

    move-result p1

    if-eqz p1, :cond_f

    move v6, v7

    goto :goto_8

    .line 141
    :cond_f
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "Failed to validate ID3 tag with majorVersion="

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {v10}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v5

    .line 146
    :cond_10
    :goto_8
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result p1

    if-lt p1, v2, :cond_11

    .line 147
    invoke-static {v10}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result p1

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/g/b/g;->q:Lcom/tkay/expressad/exoplayer/g/b/g$a;

    invoke-static {p1, v1, v6, v2, p2}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(ILcom/tkay/expressad/exoplayer/k/s;ZILcom/tkay/expressad/exoplayer/g/b/g$a;)Lcom/tkay/expressad/exoplayer/g/b/h;

    move-result-object p1

    if-eqz p1, :cond_10

    .line 150
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_8

    .line 154
    :cond_11
    new-instance p1, Lcom/tkay/expressad/exoplayer/g/a;

    invoke-direct {p1, v0}, Lcom/tkay/expressad/exoplayer/g/a;-><init>(Ljava/util/List;)V

    return-object p1
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;II)Lcom/tkay/expressad/exoplayer/g/b/a;
    .locals 7

    .line 522
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    .line 523
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v1

    add-int/lit8 p1, p1, -0x1

    .line 525
    new-array v2, p1, [B

    const/4 v3, 0x0

    .line 526
    invoke-virtual {p0, v2, v3, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    const-string p0, "image/"

    const-string v4, "ISO-8859-1"

    const/4 v5, 0x2

    if-ne p2, v5, :cond_1

    .line 532
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2, p0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    new-instance p0, Ljava/lang/String;

    const/4 v6, 0x3

    invoke-direct {p0, v2, v3, v6, v4}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/k/af;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p2, "image/jpg"

    .line 533
    invoke-virtual {p2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_0

    const-string p0, "image/jpeg"

    :cond_0
    move p2, v5

    goto :goto_0

    .line 537
    :cond_1
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result p2

    .line 538
    new-instance v6, Ljava/lang/String;

    invoke-direct {v6, v2, v3, p2, v4}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    invoke-static {v6}, Lcom/tkay/expressad/exoplayer/k/af;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const/16 v4, 0x2f

    .line 539
    invoke-virtual {v3, v4}, Ljava/lang/String;->indexOf(I)I

    move-result v4

    const/4 v6, -0x1

    if-ne v4, v6, :cond_2

    .line 540
    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_2
    move-object p0, v3

    :goto_0
    add-int/lit8 v3, p2, 0x1

    .line 544
    aget-byte v3, v2, v3

    and-int/lit16 v3, v3, 0xff

    add-int/2addr p2, v5

    .line 547
    invoke-static {v2, p2, v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v4

    .line 548
    new-instance v5, Ljava/lang/String;

    sub-int v6, v4, p2

    invoke-direct {v5, v2, p2, v6, v1}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 551
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result p2

    add-int/2addr v4, p2

    .line 552
    invoke-static {v2, v4, p1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BII)[B

    move-result-object p1

    .line 554
    new-instance p2, Lcom/tkay/expressad/exoplayer/g/b/a;

    invoke-direct {p2, p0, v5, v3, p1}, Lcom/tkay/expressad/exoplayer/g/b/a;-><init>(Ljava/lang/String;Ljava/lang/String;I[B)V

    return-object p2
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;IIZILcom/tkay/expressad/exoplayer/g/b/g$a;)Lcom/tkay/expressad/exoplayer/g/b/c;
    .locals 15

    move-object v0, p0

    .line 587
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v1

    .line 588
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-static {v2, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result v2

    .line 589
    new-instance v4, Ljava/lang/String;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    sub-int v5, v2, v1

    const-string v6, "ISO-8859-1"

    invoke-direct {v4, v3, v1, v5, v6}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    add-int/lit8 v2, v2, 0x1

    .line 591
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 593
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v5

    .line 594
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v6

    .line 595
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v2

    const-wide v7, 0xffffffffL

    cmp-long v9, v2, v7

    const-wide/16 v10, -0x1

    if-nez v9, :cond_0

    move-wide v12, v10

    goto :goto_0

    :cond_0
    move-wide v12, v2

    .line 599
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v2

    cmp-long v7, v2, v7

    if-nez v7, :cond_1

    move-wide v9, v10

    goto :goto_1

    :cond_1
    move-wide v9, v2

    .line 604
    :goto_1
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    add-int v1, v1, p1

    .line 606
    :cond_2
    :goto_2
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v3

    if-ge v3, v1, :cond_3

    move/from16 v3, p2

    move/from16 v7, p3

    move/from16 v8, p4

    move-object/from16 v11, p5

    .line 607
    invoke-static {v3, p0, v7, v8, v11}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(ILcom/tkay/expressad/exoplayer/k/s;ZILcom/tkay/expressad/exoplayer/g/b/g$a;)Lcom/tkay/expressad/exoplayer/g/b/h;

    move-result-object v14

    if-eqz v14, :cond_2

    .line 610
    invoke-virtual {v2, v14}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 614
    :cond_3
    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v0

    new-array v11, v0, [Lcom/tkay/expressad/exoplayer/g/b/h;

    .line 615
    invoke-virtual {v2, v11}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    .line 616
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/b/c;

    move-object v3, v0

    move-wide v7, v12

    invoke-direct/range {v3 .. v11}, Lcom/tkay/expressad/exoplayer/g/b/c;-><init>(Ljava/lang/String;IIJJ[Lcom/tkay/expressad/exoplayer/g/b/h;)V

    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/g/b/g$b;
    .locals 9

    .line 162
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result v0

    const/4 v1, 0x0

    const-string v2, "Id3Decoder"

    const/16 v3, 0xa

    if-ge v0, v3, :cond_0

    const-string p0, "Data too short to be an ID3 tag"

    .line 163
    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 167
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->g()I

    move-result v0

    .line 168
    sget v3, Lcom/tkay/expressad/exoplayer/g/b/g;->b:I

    if-eq v0, v3, :cond_1

    .line 169
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string v0, "Unexpected first three bytes of ID3 tag header: "

    invoke-virtual {v0, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 173
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    const/4 v3, 0x1

    .line 174
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 175
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v4

    .line 176
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->l()I

    move-result v5

    const/4 v6, 0x2

    const/4 v7, 0x4

    const/4 v8, 0x0

    if-ne v0, v6, :cond_3

    and-int/lit8 p0, v4, 0x40

    if-eqz p0, :cond_2

    move p0, v3

    goto :goto_0

    :cond_2
    move p0, v8

    :goto_0
    if-eqz p0, :cond_9

    const-string p0, "Skipped ID3 tag with majorVersion=2 and undefined compression scheme"

    .line 181
    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    :cond_3
    const/4 v6, 0x3

    if-ne v0, v6, :cond_5

    and-int/lit8 v1, v4, 0x40

    if-eqz v1, :cond_4

    move v1, v3

    goto :goto_1

    :cond_4
    move v1, v8

    :goto_1
    if-eqz v1, :cond_9

    .line 187
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v1

    .line 188
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    add-int/2addr v1, v7

    sub-int/2addr v5, v1

    goto :goto_4

    :cond_5
    if-ne v0, v7, :cond_b

    and-int/lit8 v1, v4, 0x40

    if-eqz v1, :cond_6

    move v1, v3

    goto :goto_2

    :cond_6
    move v1, v8

    :goto_2
    if-eqz v1, :cond_7

    .line 194
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->l()I

    move-result v1

    add-int/lit8 v2, v1, -0x4

    .line 195
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    sub-int/2addr v5, v1

    :cond_7
    and-int/lit8 p0, v4, 0x10

    if-eqz p0, :cond_8

    move p0, v3

    goto :goto_3

    :cond_8
    move p0, v8

    :goto_3
    if-eqz p0, :cond_9

    add-int/lit8 v5, v5, -0xa

    :cond_9
    :goto_4
    if-ge v0, v7, :cond_a

    and-int/lit16 p0, v4, 0x80

    if-eqz p0, :cond_a

    goto :goto_5

    :cond_a
    move v3, v8

    .line 209
    :goto_5
    new-instance p0, Lcom/tkay/expressad/exoplayer/g/b/g$b;

    invoke-direct {p0, v0, v3, v5}, Lcom/tkay/expressad/exoplayer/g/b/g$b;-><init>(IZI)V

    return-object p0

    .line 203
    :cond_b
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string v0, "Skipped ID3 tag with unsupported majorVersion="

    invoke-virtual {v0, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1
.end method

.method private static a(ILcom/tkay/expressad/exoplayer/k/s;ZILcom/tkay/expressad/exoplayer/g/b/g$a;)Lcom/tkay/expressad/exoplayer/g/b/h;
    .locals 19

    move/from16 v0, p0

    move-object/from16 v7, p1

    .line 277
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v8

    .line 278
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v9

    .line 279
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v10

    const/4 v11, 0x3

    if-lt v0, v11, :cond_0

    .line 280
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    move v13, v1

    goto :goto_0

    :cond_0
    const/4 v13, 0x0

    :goto_0
    const/4 v14, 0x4

    if-ne v0, v14, :cond_2

    .line 284
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v1

    if-nez p2, :cond_1

    and-int/lit16 v2, v1, 0xff

    shr-int/lit8 v3, v1, 0x8

    and-int/lit16 v3, v3, 0xff

    shl-int/lit8 v3, v3, 0x7

    or-int/2addr v2, v3

    shr-int/lit8 v3, v1, 0x10

    and-int/lit16 v3, v3, 0xff

    shl-int/lit8 v3, v3, 0xe

    or-int/2addr v2, v3

    shr-int/lit8 v1, v1, 0x18

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x15

    or-int/2addr v1, v2

    :cond_1
    :goto_1
    move v15, v1

    goto :goto_2

    :cond_2
    if-ne v0, v11, :cond_3

    .line 290
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v1

    goto :goto_1

    .line 292
    :cond_3
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->g()I

    move-result v1

    goto :goto_1

    :goto_2
    if-lt v0, v11, :cond_4

    .line 295
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v1

    move v6, v1

    goto :goto_3

    :cond_4
    const/4 v6, 0x0

    :goto_3
    const/4 v5, 0x0

    if-nez v8, :cond_5

    if-nez v9, :cond_5

    if-nez v10, :cond_5

    if-nez v13, :cond_5

    if-nez v15, :cond_5

    if-nez v6, :cond_5

    .line 299
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->b()I

    move-result v0

    invoke-virtual {v7, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    return-object v5

    .line 303
    :cond_5
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v1

    add-int v4, v1, v15

    .line 304
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->b()I

    move-result v1

    const-string v3, "Id3Decoder"

    if-le v4, v1, :cond_6

    const-string v0, "Frame size exceeds remaining tag data"

    .line 305
    invoke-static {v3, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 306
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->b()I

    move-result v0

    invoke-virtual {v7, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    return-object v5

    :cond_6
    if-eqz p4, :cond_7

    move-object/from16 v1, p4

    move/from16 v2, p0

    move-object/from16 v16, v3

    move v3, v8

    move v12, v4

    move v4, v9

    move-object v14, v5

    move v5, v10

    move/from16 v17, v6

    move v6, v13

    .line 311
    invoke-interface/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/g/b/g$a;->a(IIIII)Z

    move-result v1

    if-nez v1, :cond_8

    .line 313
    invoke-virtual {v7, v12}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    return-object v14

    :cond_7
    move-object/from16 v16, v3

    move v12, v4

    move-object v14, v5

    move/from16 v17, v6

    :cond_8
    const/4 v1, 0x1

    if-ne v0, v11, :cond_c

    move/from16 v2, v17

    and-int/lit16 v3, v2, 0x80

    if-eqz v3, :cond_9

    move v3, v1

    goto :goto_4

    :cond_9
    const/4 v3, 0x0

    :goto_4
    and-int/lit8 v4, v2, 0x40

    if-eqz v4, :cond_a

    move v4, v1

    goto :goto_5

    :cond_a
    const/4 v4, 0x0

    :goto_5
    and-int/lit8 v2, v2, 0x20

    if-eqz v2, :cond_b

    move v2, v1

    goto :goto_6

    :cond_b
    const/4 v2, 0x0

    :goto_6
    move v5, v4

    const/4 v6, 0x0

    move v4, v3

    goto :goto_b

    :cond_c
    move/from16 v2, v17

    const/4 v3, 0x4

    if-ne v0, v3, :cond_12

    and-int/lit8 v3, v2, 0x40

    if-eqz v3, :cond_d

    move v3, v1

    goto :goto_7

    :cond_d
    const/4 v3, 0x0

    :goto_7
    and-int/lit8 v4, v2, 0x8

    if-eqz v4, :cond_e

    move v4, v1

    goto :goto_8

    :cond_e
    const/4 v4, 0x0

    :goto_8
    and-int/lit8 v5, v2, 0x4

    if-eqz v5, :cond_f

    move v5, v1

    goto :goto_9

    :cond_f
    const/4 v5, 0x0

    :goto_9
    and-int/lit8 v6, v2, 0x2

    if-eqz v6, :cond_10

    move v6, v1

    goto :goto_a

    :cond_10
    const/4 v6, 0x0

    :goto_a
    and-int/2addr v2, v1

    if-eqz v2, :cond_11

    move v2, v3

    move v3, v1

    goto :goto_b

    :cond_11
    move v2, v3

    const/4 v3, 0x0

    goto :goto_b

    :cond_12
    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    :goto_b
    if-nez v4, :cond_2e

    if-eqz v5, :cond_13

    goto/16 :goto_19

    :cond_13
    if-eqz v2, :cond_14

    add-int/lit8 v15, v15, -0x1

    .line 345
    invoke-virtual {v7, v1}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    :cond_14
    if-eqz v3, :cond_15

    add-int/lit8 v15, v15, -0x4

    const/4 v2, 0x4

    .line 349
    invoke-virtual {v7, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    :cond_15
    if-eqz v6, :cond_16

    .line 352
    invoke-static {v7, v15}, Lcom/tkay/expressad/exoplayer/g/b/g;->f(Lcom/tkay/expressad/exoplayer/k/s;I)I

    move-result v15

    :cond_16
    const/16 v2, 0x54

    const/16 v3, 0x58

    const/4 v4, 0x2

    if-ne v8, v2, :cond_19

    if-ne v9, v3, :cond_19

    if-ne v10, v3, :cond_19

    if-eq v0, v4, :cond_17

    if-ne v13, v3, :cond_19

    :cond_17
    if-gtz v15, :cond_18

    :goto_c
    move-object v5, v14

    goto :goto_d

    .line 2411
    :cond_18
    :try_start_0
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    .line 2412
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v2

    add-int/lit8 v3, v15, -0x1

    .line 2414
    new-array v4, v3, [B

    const/4 v5, 0x0

    .line 2415
    invoke-virtual {v7, v4, v5, v3}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 2417
    invoke-static {v4, v5, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v3

    .line 2418
    new-instance v6, Ljava/lang/String;

    invoke-direct {v6, v4, v5, v3, v2}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 2420
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result v5

    add-int/2addr v3, v5

    .line 2421
    invoke-static {v4, v3, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v1

    .line 2422
    invoke-static {v4, v3, v1, v2}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BIILjava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 2424
    new-instance v5, Lcom/tkay/expressad/exoplayer/g/b/k;

    const-string v2, "TXXX"

    invoke-direct {v5, v2, v6, v1}, Lcom/tkay/expressad/exoplayer/g/b/k;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_d

    :cond_19
    if-ne v8, v2, :cond_1b

    .line 361
    invoke-static {v0, v8, v9, v10, v13}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(IIIII)Ljava/lang/String;

    move-result-object v1

    if-gtz v15, :cond_1a

    goto :goto_c

    .line 2434
    :cond_1a
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v2

    .line 2435
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v3

    add-int/lit8 v4, v15, -0x1

    .line 2437
    new-array v5, v4, [B

    const/4 v6, 0x0

    .line 2438
    invoke-virtual {v7, v5, v6, v4}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 2440
    invoke-static {v5, v6, v2}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v2

    .line 2441
    new-instance v4, Ljava/lang/String;

    invoke-direct {v4, v5, v6, v2, v3}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 2443
    new-instance v5, Lcom/tkay/expressad/exoplayer/g/b/k;

    invoke-direct {v5, v1, v14, v4}, Lcom/tkay/expressad/exoplayer/g/b/k;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_d
    move/from16 v18, v12

    goto/16 :goto_13

    :catchall_0
    move-exception v0

    :goto_e
    move v2, v12

    goto/16 :goto_18

    :catch_0
    :goto_f
    move v2, v12

    move-object/from16 v1, v16

    goto/16 :goto_17

    :cond_1b
    const/16 v5, 0x57

    const-string v6, "ISO-8859-1"

    if-ne v8, v5, :cond_1e

    if-ne v9, v3, :cond_1e

    if-ne v10, v3, :cond_1e

    if-eq v0, v4, :cond_1c

    if-ne v13, v3, :cond_1e

    :cond_1c
    if-gtz v15, :cond_1d

    goto :goto_c

    .line 2453
    :cond_1d
    :try_start_1
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    .line 2454
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v2

    add-int/lit8 v3, v15, -0x1

    .line 2456
    new-array v4, v3, [B

    const/4 v5, 0x0

    .line 2457
    invoke-virtual {v7, v4, v5, v3}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 2459
    invoke-static {v4, v5, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v3

    .line 2460
    new-instance v11, Ljava/lang/String;

    invoke-direct {v11, v4, v5, v3, v2}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 2462
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result v1

    add-int/2addr v3, v1

    .line 2463
    invoke-static {v4, v3}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result v1

    .line 2464
    invoke-static {v4, v3, v1, v6}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BIILjava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 2466
    new-instance v5, Lcom/tkay/expressad/exoplayer/g/b/l;

    const-string v2, "WXXX"

    invoke-direct {v5, v2, v11, v1}, Lcom/tkay/expressad/exoplayer/g/b/l;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_d

    :cond_1e
    if-ne v8, v5, :cond_1f

    .line 367
    invoke-static {v0, v8, v9, v10, v13}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(IIIII)Ljava/lang/String;

    move-result-object v1

    .line 2471
    new-array v2, v15, [B

    const/4 v3, 0x0

    .line 2472
    invoke-virtual {v7, v2, v3, v15}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 2474
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result v4

    .line 2475
    new-instance v5, Ljava/lang/String;

    invoke-direct {v5, v2, v3, v4, v6}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 2477
    new-instance v2, Lcom/tkay/expressad/exoplayer/g/b/l;

    invoke-direct {v2, v1, v14, v5}, Lcom/tkay/expressad/exoplayer/g/b/l;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :goto_10
    move-object v5, v2

    goto :goto_d

    :cond_1f
    const/16 v3, 0x49

    const/16 v5, 0x50

    if-ne v8, v5, :cond_20

    const/16 v14, 0x52

    if-ne v9, v14, :cond_20

    if-ne v10, v3, :cond_20

    const/16 v14, 0x56

    if-ne v13, v14, :cond_20

    .line 2482
    new-array v2, v15, [B

    const/4 v3, 0x0

    .line 2483
    invoke-virtual {v7, v2, v3, v15}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 2485
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result v4

    .line 2486
    new-instance v5, Ljava/lang/String;

    invoke-direct {v5, v2, v3, v4, v6}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    add-int/2addr v4, v1

    .line 2489
    invoke-static {v2, v4, v15}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BII)[B

    move-result-object v1

    .line 2491
    new-instance v2, Lcom/tkay/expressad/exoplayer/g/b/j;

    invoke-direct {v2, v5, v1}, Lcom/tkay/expressad/exoplayer/g/b/j;-><init>(Ljava/lang/String;[B)V

    goto :goto_10

    :cond_20
    const/16 v14, 0x47

    const/16 v2, 0x4f

    if-ne v8, v14, :cond_22

    const/16 v14, 0x45

    if-ne v9, v14, :cond_22

    if-ne v10, v2, :cond_22

    const/16 v14, 0x42

    if-eq v13, v14, :cond_21

    if-ne v0, v4, :cond_22

    .line 2496
    :cond_21
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v2

    .line 2497
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v3

    add-int/lit8 v4, v15, -0x1

    .line 2499
    new-array v5, v4, [B

    const/4 v11, 0x0

    .line 2500
    invoke-virtual {v7, v5, v11, v4}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 2502
    invoke-static {v5, v11}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result v14

    .line 2503
    new-instance v1, Ljava/lang/String;

    invoke-direct {v1, v5, v11, v14, v6}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    const/4 v6, 0x1

    add-int/2addr v14, v6

    .line 2506
    invoke-static {v5, v14, v2}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v6

    .line 2507
    invoke-static {v5, v14, v6, v3}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BIILjava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 2509
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result v14

    add-int/2addr v6, v14

    .line 2510
    invoke-static {v5, v6, v2}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v14

    .line 2512
    invoke-static {v5, v6, v14, v3}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BIILjava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 2514
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result v2

    add-int/2addr v14, v2

    .line 2515
    invoke-static {v5, v14, v4}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BII)[B

    move-result-object v2

    .line 2517
    new-instance v5, Lcom/tkay/expressad/exoplayer/g/b/f;

    invoke-direct {v5, v1, v11, v3, v2}, Lcom/tkay/expressad/exoplayer/g/b/f;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V
    :try_end_1
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto/16 :goto_d

    :cond_22
    const/16 v1, 0x41

    const/16 v14, 0x43

    if-ne v0, v4, :cond_23

    if-ne v8, v5, :cond_27

    if-ne v9, v3, :cond_27

    if-ne v10, v14, :cond_27

    goto :goto_11

    :cond_23
    if-ne v8, v1, :cond_27

    if-ne v9, v5, :cond_27

    if-ne v10, v3, :cond_27

    if-ne v13, v14, :cond_27

    .line 2522
    :goto_11
    :try_start_2
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    .line 2523
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v2

    add-int/lit8 v3, v15, -0x1

    .line 2525
    new-array v5, v3, [B

    const/4 v14, 0x0

    .line 2526
    invoke-virtual {v7, v5, v14, v3}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V
    :try_end_2
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const-string v14, "image/"

    if-ne v0, v4, :cond_25

    .line 2532
    :try_start_3
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4, v14}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    new-instance v14, Ljava/lang/String;
    :try_end_3
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    move/from16 v18, v12

    const/4 v12, 0x0

    :try_start_4
    invoke-direct {v14, v5, v12, v11, v6}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    invoke-static {v14}, Lcom/tkay/expressad/exoplayer/k/af;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v6, "image/jpg"

    .line 2533
    invoke-virtual {v6, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_24

    const-string v4, "image/jpeg"
    :try_end_4
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_4 .. :try_end_4} :catch_3
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :cond_24
    const/4 v11, 0x2

    goto :goto_12

    :cond_25
    move/from16 v18, v12

    const/4 v4, 0x0

    .line 2537
    :try_start_5
    invoke-static {v5, v4}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result v11

    .line 2538
    new-instance v12, Ljava/lang/String;

    invoke-direct {v12, v5, v4, v11, v6}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    invoke-static {v12}, Lcom/tkay/expressad/exoplayer/k/af;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const/16 v6, 0x2f

    .line 2539
    invoke-virtual {v4, v6}, Ljava/lang/String;->indexOf(I)I

    move-result v6
    :try_end_5
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_5 .. :try_end_5} :catch_2
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    const/4 v12, -0x1

    if-ne v6, v12, :cond_26

    .line 2540
    :try_start_6
    invoke-static {v4}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v14, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4
    :try_end_6
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_6 .. :try_end_6} :catch_3
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    :cond_26
    :goto_12
    add-int/lit8 v6, v11, 0x1

    .line 2544
    :try_start_7
    aget-byte v6, v5, v6

    and-int/lit16 v6, v6, 0xff

    const/4 v12, 0x2

    add-int/2addr v11, v12

    .line 2547
    invoke-static {v5, v11, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v12

    .line 2548
    new-instance v14, Ljava/lang/String;

    sub-int v7, v12, v11

    invoke-direct {v14, v5, v11, v7, v2}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 2551
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result v1

    add-int/2addr v12, v1

    .line 2552
    invoke-static {v5, v12, v3}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BII)[B

    move-result-object v1

    .line 2554
    new-instance v5, Lcom/tkay/expressad/exoplayer/g/b/a;

    invoke-direct {v5, v4, v14, v6, v1}, Lcom/tkay/expressad/exoplayer/g/b/a;-><init>(Ljava/lang/String;Ljava/lang/String;I[B)V

    move-object/from16 v7, p1

    goto/16 :goto_13

    :catchall_1
    move-exception v0

    move-object/from16 v7, p1

    goto/16 :goto_e

    :catch_1
    move-object/from16 v7, p1

    goto/16 :goto_f

    :cond_27
    move/from16 v18, v12

    if-ne v8, v14, :cond_2a

    if-ne v9, v2, :cond_2a

    const/16 v3, 0x4d

    if-ne v10, v3, :cond_2a

    if-eq v13, v3, :cond_28

    const/4 v3, 0x2

    if-ne v0, v3, :cond_2a

    :cond_28
    const/4 v1, 0x4

    if-ge v15, v1, :cond_29

    move-object/from16 v7, p1

    const/4 v5, 0x0

    goto/16 :goto_13

    .line 2564
    :cond_29
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    .line 2565
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v2

    new-array v3, v11, [B
    :try_end_7
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_7 .. :try_end_7} :catch_2
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    move-object/from16 v7, p1

    const/4 v4, 0x0

    .line 2568
    :try_start_8
    invoke-virtual {v7, v3, v4, v11}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 2569
    new-instance v5, Ljava/lang/String;

    invoke-direct {v5, v3, v4, v11}, Ljava/lang/String;-><init>([BII)V

    add-int/lit8 v3, v15, -0x4

    .line 2571
    new-array v6, v3, [B

    .line 2572
    invoke-virtual {v7, v6, v4, v3}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 2574
    invoke-static {v6, v4, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v3

    .line 2575
    new-instance v11, Ljava/lang/String;

    invoke-direct {v11, v6, v4, v3, v2}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 2577
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result v4

    add-int/2addr v3, v4

    .line 2578
    invoke-static {v6, v3, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v1

    .line 2579
    invoke-static {v6, v3, v1, v2}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BIILjava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 2581
    new-instance v2, Lcom/tkay/expressad/exoplayer/g/b/e;

    invoke-direct {v2, v5, v11, v1}, Lcom/tkay/expressad/exoplayer/g/b/e;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    move-object v5, v2

    goto :goto_13

    :catchall_2
    move-exception v0

    move-object/from16 v7, p1

    goto/16 :goto_14

    :catch_2
    move-object/from16 v7, p1

    goto/16 :goto_15

    :cond_2a
    move-object/from16 v7, p1

    if-ne v8, v14, :cond_2b

    const/16 v3, 0x48

    if-ne v9, v3, :cond_2b

    if-ne v10, v1, :cond_2b

    if-ne v13, v5, :cond_2b

    move-object/from16 v1, p1

    move v2, v15

    move/from16 v3, p0

    move/from16 v4, p2

    move/from16 v5, p3

    move-object/from16 v6, p4

    .line 381
    invoke-static/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(Lcom/tkay/expressad/exoplayer/k/s;IIZILcom/tkay/expressad/exoplayer/g/b/g$a;)Lcom/tkay/expressad/exoplayer/g/b/c;

    move-result-object v5

    goto :goto_13

    :cond_2b
    if-ne v8, v14, :cond_2c

    const/16 v1, 0x54

    if-ne v9, v1, :cond_2c

    if-ne v10, v2, :cond_2c

    if-ne v13, v14, :cond_2c

    move-object/from16 v1, p1

    move v2, v15

    move/from16 v3, p0

    move/from16 v4, p2

    move/from16 v5, p3

    move-object/from16 v6, p4

    .line 384
    invoke-static/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(Lcom/tkay/expressad/exoplayer/k/s;IIZILcom/tkay/expressad/exoplayer/g/b/g$a;)Lcom/tkay/expressad/exoplayer/g/b/d;

    move-result-object v5

    goto :goto_13

    .line 387
    :cond_2c
    invoke-static {v0, v8, v9, v10, v13}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(IIIII)Ljava/lang/String;

    move-result-object v1

    .line 2658
    new-array v2, v15, [B

    const/4 v3, 0x0

    .line 2659
    invoke-virtual {v7, v2, v3, v15}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 2661
    new-instance v5, Lcom/tkay/expressad/exoplayer/g/b/b;

    invoke-direct {v5, v1, v2}, Lcom/tkay/expressad/exoplayer/g/b/b;-><init>(Ljava/lang/String;[B)V

    :goto_13
    if-nez v5, :cond_2d

    .line 391
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Failed to decode frame: id="

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 392
    invoke-static {v0, v8, v9, v10, v13}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(IIIII)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", frameSize="

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_8
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_8 .. :try_end_8} :catch_3
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    move-object/from16 v1, v16

    .line 391
    :try_start_9
    invoke-static {v1, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_9
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_9 .. :try_end_9} :catch_4
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    goto :goto_16

    :catchall_3
    move-exception v0

    :goto_14
    move/from16 v2, v18

    goto :goto_18

    :catch_3
    :goto_15
    move-object/from16 v1, v16

    :catch_4
    move/from16 v2, v18

    goto :goto_17

    :cond_2d
    :goto_16
    move/from16 v2, v18

    .line 400
    invoke-virtual {v7, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    return-object v5

    :goto_17
    :try_start_a
    const-string v0, "Unsupported character encoding"

    .line 397
    invoke-static {v1, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_4

    .line 400
    invoke-virtual {v7, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    const/4 v0, 0x0

    return-object v0

    :catchall_4
    move-exception v0

    :goto_18
    invoke-virtual {v7, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 401
    throw v0

    :cond_2e
    :goto_19
    move v2, v12

    move-object v0, v14

    move-object/from16 v1, v16

    const-string v3, "Skipping unsupported compressed or encrypted frame"

    .line 338
    invoke-static {v1, v3}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 339
    invoke-virtual {v7, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;I)Lcom/tkay/expressad/exoplayer/g/b/k;
    .locals 4

    if-gtz p1, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 411
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    .line 412
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v1

    add-int/lit8 p1, p1, -0x1

    .line 414
    new-array v2, p1, [B

    const/4 v3, 0x0

    .line 415
    invoke-virtual {p0, v2, v3, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 417
    invoke-static {v2, v3, v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result p0

    .line 418
    new-instance p1, Ljava/lang/String;

    invoke-direct {p1, v2, v3, p0, v1}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 420
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result v3

    add-int/2addr p0, v3

    .line 421
    invoke-static {v2, p0, v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v0

    .line 422
    invoke-static {v2, p0, v0, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BIILjava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 424
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/b/k;

    const-string v1, "TXXX"

    invoke-direct {v0, v1, p1, p0}, Lcom/tkay/expressad/exoplayer/g/b/k;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;ILjava/lang/String;)Lcom/tkay/expressad/exoplayer/g/b/k;
    .locals 5

    const/4 v0, 0x0

    if-gtz p1, :cond_0

    return-object v0

    .line 434
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    .line 435
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v2

    add-int/lit8 p1, p1, -0x1

    .line 437
    new-array v3, p1, [B

    const/4 v4, 0x0

    .line 438
    invoke-virtual {p0, v3, v4, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 440
    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result p0

    .line 441
    new-instance p1, Ljava/lang/String;

    invoke-direct {p1, v3, v4, p0, v2}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 443
    new-instance p0, Lcom/tkay/expressad/exoplayer/g/b/k;

    invoke-direct {p0, p2, v0, p1}, Lcom/tkay/expressad/exoplayer/g/b/k;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object p0
.end method

.method private static a(I)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x1

    if-eq p0, v0, :cond_2

    const/4 v0, 0x2

    if-eq p0, v0, :cond_1

    const/4 v0, 0x3

    if-eq p0, v0, :cond_0

    const-string p0, "ISO-8859-1"

    return-object p0

    :cond_0
    const-string p0, "UTF-8"

    return-object p0

    :cond_1
    const-string p0, "UTF-16BE"

    return-object p0

    :cond_2
    const-string p0, "UTF-16"

    return-object p0
.end method

.method private static a(IIIII)Ljava/lang/String;
    .locals 5

    const/4 v0, 0x3

    const/4 v1, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x2

    if-ne p0, v3, :cond_0

    .line 706
    sget-object p0, Ljava/util/Locale;->US:Ljava/util/Locale;

    new-array p4, v0, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, p4, v2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, p4, v1

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, p4, v3

    const-string p1, "%c%c%c"

    invoke-static {p0, p1, p4}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 707
    :cond_0
    sget-object p0, Ljava/util/Locale;->US:Ljava/util/Locale;

    const/4 v4, 0x4

    new-array v4, v4, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v4, v2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v4, v1

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v4, v3

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v4, v0

    const-string p1, "%c%c%c%c"

    invoke-static {p0, p1, v4}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a([BIILjava/lang/String;)Ljava/lang/String;
    .locals 1

    if-le p2, p1, :cond_1

    .line 772
    array-length v0, p0

    if-le p2, v0, :cond_0

    goto :goto_0

    .line 775
    :cond_0
    new-instance v0, Ljava/lang/String;

    sub-int/2addr p2, p1

    invoke-direct {v0, p0, p1, p2, p3}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    return-object v0

    :cond_1
    :goto_0
    const-string p0, ""

    return-object p0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;IIZ)Z
    .locals 18

    move-object/from16 v1, p0

    move/from16 v0, p1

    .line 214
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v2

    .line 216
    :goto_0
    :try_start_0
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result v3

    const/4 v4, 0x1

    move/from16 v5, p2

    if-lt v3, v5, :cond_d

    const/4 v3, 0x3

    const/4 v6, 0x0

    if-lt v0, v3, :cond_0

    .line 222
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v7

    .line 223
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v8

    .line 224
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v10

    goto :goto_1

    .line 226
    :cond_0
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->g()I

    move-result v7

    .line 227
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->g()I

    move-result v8
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    int-to-long v8, v8

    move v10, v6

    :goto_1
    const-wide/16 v11, 0x0

    if-nez v7, :cond_1

    cmp-long v7, v8, v11

    if-nez v7, :cond_1

    if-nez v10, :cond_1

    .line 271
    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    return v4

    :cond_1
    const/4 v7, 0x4

    if-ne v0, v7, :cond_3

    if-nez p3, :cond_3

    const-wide/32 v13, 0x808080

    and-long/2addr v13, v8

    cmp-long v11, v13, v11

    if-eqz v11, :cond_2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    return v6

    :cond_2
    const-wide/16 v11, 0xff

    and-long v13, v8, v11

    const/16 v15, 0x8

    shr-long v15, v8, v15

    and-long/2addr v15, v11

    const/16 v17, 0x7

    shl-long v15, v15, v17

    or-long/2addr v13, v15

    const/16 v15, 0x10

    shr-long v15, v8, v15

    and-long/2addr v15, v11

    const/16 v17, 0xe

    shl-long v15, v15, v17

    or-long/2addr v13, v15

    const/16 v15, 0x18

    shr-long/2addr v8, v15

    and-long/2addr v8, v11

    const/16 v11, 0x15

    shl-long/2addr v8, v11

    or-long/2addr v8, v13

    :cond_3
    if-ne v0, v7, :cond_6

    and-int/lit8 v3, v10, 0x40

    if-eqz v3, :cond_4

    move v3, v4

    goto :goto_2

    :cond_4
    move v3, v6

    :goto_2
    and-int/lit8 v7, v10, 0x1

    if-eqz v7, :cond_5

    :goto_3
    move v7, v4

    goto :goto_5

    :cond_5
    move v7, v6

    goto :goto_5

    :cond_6
    if-ne v0, v3, :cond_8

    and-int/lit8 v3, v10, 0x20

    if-eqz v3, :cond_7

    move v3, v4

    goto :goto_4

    :cond_7
    move v3, v6

    :goto_4
    and-int/lit16 v7, v10, 0x80

    if-eqz v7, :cond_5

    goto :goto_3

    :cond_8
    move v3, v6

    move v7, v3

    :goto_5
    if-eqz v3, :cond_9

    goto :goto_6

    :cond_9
    move v4, v6

    :goto_6
    if-eqz v7, :cond_a

    add-int/lit8 v4, v4, 0x4

    :cond_a
    int-to-long v3, v4

    cmp-long v3, v8, v3

    if-gez v3, :cond_b

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    return v6

    .line 263
    :cond_b
    :try_start_1
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    int-to-long v3, v3

    cmp-long v3, v3, v8

    if-gez v3, :cond_c

    .line 271
    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    return v6

    :cond_c
    long-to-int v3, v8

    .line 266
    :try_start_2
    invoke-virtual {v1, v3}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto/16 :goto_0

    .line 271
    :cond_d
    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    return v4

    :catchall_0
    move-exception v0

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 272
    throw v0
.end method

.method private static b(I)I
    .locals 1

    if-eqz p0, :cond_1

    const/4 v0, 0x3

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x2

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private static b([BI)I
    .locals 1

    .line 730
    :goto_0
    array-length v0, p0

    if-ge p1, v0, :cond_1

    .line 731
    aget-byte v0, p0, p1

    if-nez v0, :cond_0

    return p1

    :cond_0
    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    .line 735
    :cond_1
    array-length p0, p0

    return p0
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/k/s;IIZILcom/tkay/expressad/exoplayer/g/b/g$a;)Lcom/tkay/expressad/exoplayer/g/b/d;
    .locals 15

    move-object v0, p0

    .line 622
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v1

    .line 623
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-static {v2, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result v2

    .line 624
    new-instance v3, Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    sub-int v5, v2, v1

    const-string v6, "ISO-8859-1"

    invoke-direct {v3, v4, v1, v5, v6}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    const/4 v4, 0x1

    add-int/2addr v2, v4

    .line 626
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 628
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v2

    and-int/lit8 v5, v2, 0x2

    const/4 v7, 0x0

    if-eqz v5, :cond_0

    move v5, v4

    goto :goto_0

    :cond_0
    move v5, v7

    :goto_0
    and-int/2addr v2, v4

    if-eqz v2, :cond_1

    move v2, v4

    goto :goto_1

    :cond_1
    move v2, v7

    .line 632
    :goto_1
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v8

    .line 633
    new-array v9, v8, [Ljava/lang/String;

    :goto_2
    if-ge v7, v8, :cond_2

    .line 635
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v10

    .line 636
    iget-object v11, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-static {v11, v10}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result v11

    .line 637
    new-instance v12, Ljava/lang/String;

    iget-object v13, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    sub-int v14, v11, v10

    invoke-direct {v12, v13, v10, v14, v6}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    aput-object v12, v9, v7

    add-int/2addr v11, v4

    .line 638
    invoke-virtual {p0, v11}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    add-int/lit8 v7, v7, 0x1

    goto :goto_2

    .line 641
    :cond_2
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    add-int v1, v1, p1

    .line 643
    :cond_3
    :goto_3
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v6

    if-ge v6, v1, :cond_4

    move/from16 v6, p2

    move/from16 v7, p3

    move/from16 v8, p4

    move-object/from16 v10, p5

    .line 644
    invoke-static {v6, p0, v7, v8, v10}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(ILcom/tkay/expressad/exoplayer/k/s;ZILcom/tkay/expressad/exoplayer/g/b/g$a;)Lcom/tkay/expressad/exoplayer/g/b/h;

    move-result-object v11

    if-eqz v11, :cond_3

    .line 647
    invoke-virtual {v4, v11}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 651
    :cond_4
    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v0

    new-array v0, v0, [Lcom/tkay/expressad/exoplayer/g/b/h;

    .line 652
    invoke-virtual {v4, v0}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    .line 653
    new-instance v1, Lcom/tkay/expressad/exoplayer/g/b/d;

    move-object p0, v1

    move-object/from16 p1, v3

    move/from16 p2, v5

    move/from16 p3, v2

    move-object/from16 p4, v9

    move-object/from16 p5, v0

    invoke-direct/range {p0 .. p5}, Lcom/tkay/expressad/exoplayer/g/b/d;-><init>(Ljava/lang/String;ZZ[Ljava/lang/String;[Lcom/tkay/expressad/exoplayer/g/b/h;)V

    return-object v1
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/k/s;I)Lcom/tkay/expressad/exoplayer/g/b/l;
    .locals 4

    if-gtz p1, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 453
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    .line 454
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v1

    add-int/lit8 p1, p1, -0x1

    .line 456
    new-array v2, p1, [B

    const/4 v3, 0x0

    .line 457
    invoke-virtual {p0, v2, v3, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 459
    invoke-static {v2, v3, v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result p0

    .line 460
    new-instance p1, Ljava/lang/String;

    invoke-direct {p1, v2, v3, p0, v1}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 462
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result v0

    add-int/2addr p0, v0

    .line 463
    invoke-static {v2, p0}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result v0

    const-string v1, "ISO-8859-1"

    .line 464
    invoke-static {v2, p0, v0, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BIILjava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 466
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/b/l;

    const-string v1, "WXXX"

    invoke-direct {v0, v1, p1, p0}, Lcom/tkay/expressad/exoplayer/g/b/l;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/k/s;ILjava/lang/String;)Lcom/tkay/expressad/exoplayer/g/b/l;
    .locals 3

    .line 471
    new-array v0, p1, [B

    const/4 v1, 0x0

    .line 472
    invoke-virtual {p0, v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 474
    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result p0

    .line 475
    new-instance p1, Ljava/lang/String;

    const-string v2, "ISO-8859-1"

    invoke-direct {p1, v0, v1, p0, v2}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 477
    new-instance p0, Lcom/tkay/expressad/exoplayer/g/b/l;

    const/4 v0, 0x0

    invoke-direct {p0, p2, v0, p1}, Lcom/tkay/expressad/exoplayer/g/b/l;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object p0
.end method

.method private static b([BII)[B
    .locals 0

    if-gt p2, p1, :cond_0

    const/4 p0, 0x0

    new-array p0, p0, [B

    return-object p0

    .line 756
    :cond_0
    invoke-static {p0, p1, p2}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object p0

    return-object p0
.end method

.method private static c(Lcom/tkay/expressad/exoplayer/k/s;ILjava/lang/String;)Lcom/tkay/expressad/exoplayer/g/b/b;
    .locals 2

    .line 658
    new-array v0, p1, [B

    const/4 v1, 0x0

    .line 659
    invoke-virtual {p0, v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 661
    new-instance p0, Lcom/tkay/expressad/exoplayer/g/b/b;

    invoke-direct {p0, p2, v0}, Lcom/tkay/expressad/exoplayer/g/b/b;-><init>(Ljava/lang/String;[B)V

    return-object p0
.end method

.method private static c(Lcom/tkay/expressad/exoplayer/k/s;I)Lcom/tkay/expressad/exoplayer/g/b/j;
    .locals 4

    .line 482
    new-array v0, p1, [B

    const/4 v1, 0x0

    .line 483
    invoke-virtual {p0, v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 485
    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result p0

    .line 486
    new-instance v2, Ljava/lang/String;

    const-string v3, "ISO-8859-1"

    invoke-direct {v2, v0, v1, p0, v3}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    add-int/lit8 p0, p0, 0x1

    .line 489
    invoke-static {v0, p0, p1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BII)[B

    move-result-object p0

    .line 491
    new-instance p1, Lcom/tkay/expressad/exoplayer/g/b/j;

    invoke-direct {p1, v2, p0}, Lcom/tkay/expressad/exoplayer/g/b/j;-><init>(Ljava/lang/String;[B)V

    return-object p1
.end method

.method private static d(Lcom/tkay/expressad/exoplayer/k/s;I)Lcom/tkay/expressad/exoplayer/g/b/f;
    .locals 6

    .line 496
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    .line 497
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v1

    add-int/lit8 p1, p1, -0x1

    .line 499
    new-array v2, p1, [B

    const/4 v3, 0x0

    .line 500
    invoke-virtual {p0, v2, v3, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 502
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BI)I

    move-result p0

    .line 503
    new-instance v4, Ljava/lang/String;

    const-string v5, "ISO-8859-1"

    invoke-direct {v4, v2, v3, p0, v5}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    add-int/lit8 p0, p0, 0x1

    .line 506
    invoke-static {v2, p0, v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v3

    .line 507
    invoke-static {v2, p0, v3, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BIILjava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 509
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result v5

    add-int/2addr v3, v5

    .line 510
    invoke-static {v2, v3, v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v5

    .line 512
    invoke-static {v2, v3, v5, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BIILjava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 514
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result v0

    add-int/2addr v5, v0

    .line 515
    invoke-static {v2, v5, p1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b([BII)[B

    move-result-object p1

    .line 517
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/b/f;

    invoke-direct {v0, v4, p0, v1, p1}, Lcom/tkay/expressad/exoplayer/g/b/f;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V

    return-object v0
.end method

.method private static e(Lcom/tkay/expressad/exoplayer/k/s;I)Lcom/tkay/expressad/exoplayer/g/b/e;
    .locals 7

    const/4 v0, 0x4

    if-ge p1, v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 564
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v1

    .line 565
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(I)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x3

    new-array v4, v3, [B

    const/4 v5, 0x0

    .line 568
    invoke-virtual {p0, v4, v5, v3}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 569
    new-instance v6, Ljava/lang/String;

    invoke-direct {v6, v4, v5, v3}, Ljava/lang/String;-><init>([BII)V

    sub-int/2addr p1, v0

    .line 571
    new-array v0, p1, [B

    .line 572
    invoke-virtual {p0, v0, v5, p1}, Lcom/tkay/expressad/exoplayer/k/s;->a([BII)V

    .line 574
    invoke-static {v0, v5, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result p0

    .line 575
    new-instance p1, Ljava/lang/String;

    invoke-direct {p1, v0, v5, p0, v2}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    .line 577
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->b(I)I

    move-result v3

    add-int/2addr p0, v3

    .line 578
    invoke-static {v0, p0, v1}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BII)I

    move-result v1

    .line 579
    invoke-static {v0, p0, v1, v2}, Lcom/tkay/expressad/exoplayer/g/b/g;->a([BIILjava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 581
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/b/e;

    invoke-direct {v0, v6, p1, p0}, Lcom/tkay/expressad/exoplayer/g/b/e;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method private static f(Lcom/tkay/expressad/exoplayer/k/s;I)I
    .locals 4

    .line 673
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    .line 674
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result p0

    :goto_0
    add-int/lit8 v1, p0, 0x1

    if-ge v1, p1, :cond_1

    .line 675
    aget-byte v2, v0, p0

    const/16 v3, 0xff

    and-int/2addr v2, v3

    if-ne v2, v3, :cond_0

    aget-byte v2, v0, v1

    if-nez v2, :cond_0

    add-int/lit8 v2, p0, 0x2

    sub-int p0, p1, p0

    add-int/lit8 p0, p0, -0x2

    .line 676
    invoke-static {v0, v2, v0, v1, p0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/lit8 p1, p1, -0x1

    :cond_0
    move p0, v1

    goto :goto_0

    :cond_1
    return p1
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/g/e;)Lcom/tkay/expressad/exoplayer/g/a;
    .locals 13

    .line 108
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/g/e;->e:Ljava/nio/ByteBuffer;

    .line 109
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result p1

    .line 1120
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 1121
    new-instance v2, Lcom/tkay/expressad/exoplayer/k/s;

    invoke-direct {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/k/s;-><init>([BI)V

    .line 1162
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result p1

    const/4 v0, 0x2

    const/16 v3, 0xa

    const-string v4, "Id3Decoder"

    const/4 v5, 0x4

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x1

    if-ge p1, v3, :cond_0

    const-string p1, "Data too short to be an ID3 tag"

    .line 1163
    invoke-static {v4, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    move-object v11, v6

    goto/16 :goto_7

    .line 1167
    :cond_0
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->g()I

    move-result p1

    .line 1168
    sget v9, Lcom/tkay/expressad/exoplayer/g/b/g;->b:I

    if-eq p1, v9, :cond_1

    .line 1169
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v9, "Unexpected first three bytes of ID3 tag header: "

    invoke-virtual {v9, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 1173
    :cond_1
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result p1

    .line 1174
    invoke-virtual {v2, v8}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 1175
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v9

    .line 1176
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->l()I

    move-result v10

    if-ne p1, v0, :cond_3

    and-int/lit8 v11, v9, 0x40

    if-eqz v11, :cond_2

    move v11, v8

    goto :goto_1

    :cond_2
    move v11, v7

    :goto_1
    if-eqz v11, :cond_9

    const-string p1, "Skipped ID3 tag with majorVersion=2 and undefined compression scheme"

    .line 1181
    invoke-static {v4, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :cond_3
    const/4 v11, 0x3

    if-ne p1, v11, :cond_5

    and-int/lit8 v11, v9, 0x40

    if-eqz v11, :cond_4

    move v11, v8

    goto :goto_2

    :cond_4
    move v11, v7

    :goto_2
    if-eqz v11, :cond_9

    .line 1187
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v11

    .line 1188
    invoke-virtual {v2, v11}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    add-int/2addr v11, v5

    sub-int/2addr v10, v11

    goto :goto_5

    :cond_5
    if-ne p1, v5, :cond_b

    and-int/lit8 v11, v9, 0x40

    if-eqz v11, :cond_6

    move v11, v8

    goto :goto_3

    :cond_6
    move v11, v7

    :goto_3
    if-eqz v11, :cond_7

    .line 1194
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->l()I

    move-result v11

    add-int/lit8 v12, v11, -0x4

    .line 1195
    invoke-virtual {v2, v12}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    sub-int/2addr v10, v11

    :cond_7
    and-int/lit8 v11, v9, 0x10

    if-eqz v11, :cond_8

    move v11, v8

    goto :goto_4

    :cond_8
    move v11, v7

    :goto_4
    if-eqz v11, :cond_9

    add-int/lit8 v10, v10, -0xa

    :cond_9
    :goto_5
    if-ge p1, v5, :cond_a

    and-int/lit16 v9, v9, 0x80

    if-eqz v9, :cond_a

    move v9, v8

    goto :goto_6

    :cond_a
    move v9, v7

    .line 1209
    :goto_6
    new-instance v11, Lcom/tkay/expressad/exoplayer/g/b/g$b;

    invoke-direct {v11, p1, v9, v10}, Lcom/tkay/expressad/exoplayer/g/b/g$b;-><init>(IZI)V

    goto :goto_7

    .line 1203
    :cond_b
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v9, "Skipped ID3 tag with unsupported majorVersion="

    invoke-virtual {v9, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_0

    :goto_7
    if-nez v11, :cond_c

    return-object v6

    .line 1128
    :cond_c
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result p1

    .line 1129
    invoke-static {v11}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result v9

    if-ne v9, v0, :cond_d

    const/4 v3, 0x6

    .line 1130
    :cond_d
    invoke-static {v11}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->b(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result v0

    .line 1131
    invoke-static {v11}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->c(Lcom/tkay/expressad/exoplayer/g/b/g$b;)Z

    move-result v9

    if-eqz v9, :cond_e

    .line 1132
    invoke-static {v11}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->b(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result v0

    invoke-static {v2, v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->f(Lcom/tkay/expressad/exoplayer/k/s;I)I

    move-result v0

    :cond_e
    add-int/2addr p1, v0

    .line 1134
    invoke-virtual {v2, p1}, Lcom/tkay/expressad/exoplayer/k/s;->b(I)V

    .line 1137
    invoke-static {v11}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result p1

    invoke-static {v2, p1, v3, v7}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(Lcom/tkay/expressad/exoplayer/k/s;IIZ)Z

    move-result p1

    if-nez p1, :cond_10

    .line 1138
    invoke-static {v11}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result p1

    if-ne p1, v5, :cond_f

    invoke-static {v2, v5, v3, v8}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(Lcom/tkay/expressad/exoplayer/k/s;IIZ)Z

    move-result p1

    if-eqz p1, :cond_f

    move v7, v8

    goto :goto_8

    .line 1141
    :cond_f
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "Failed to validate ID3 tag with majorVersion="

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {v11}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v6

    .line 1146
    :cond_10
    :goto_8
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result p1

    if-lt p1, v3, :cond_11

    .line 1147
    invoke-static {v11}, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I

    move-result p1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/g;->q:Lcom/tkay/expressad/exoplayer/g/b/g$a;

    invoke-static {p1, v2, v7, v3, v0}, Lcom/tkay/expressad/exoplayer/g/b/g;->a(ILcom/tkay/expressad/exoplayer/k/s;ZILcom/tkay/expressad/exoplayer/g/b/g$a;)Lcom/tkay/expressad/exoplayer/g/b/h;

    move-result-object p1

    if-eqz p1, :cond_10

    .line 1150
    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_8

    .line 1154
    :cond_11
    new-instance p1, Lcom/tkay/expressad/exoplayer/g/a;

    invoke-direct {p1, v1}, Lcom/tkay/expressad/exoplayer/g/a;-><init>(Ljava/util/List;)V

    return-object p1
.end method
