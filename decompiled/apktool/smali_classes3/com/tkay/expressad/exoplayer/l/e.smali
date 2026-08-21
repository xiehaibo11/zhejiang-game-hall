.class public Lcom/tkay/expressad/exoplayer/l/e;
.super Lcom/tkay/expressad/exoplayer/f/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/l/e$b;,
        Lcom/tkay/expressad/exoplayer/l/e$a;
    }
.end annotation


# static fields
.field private static A:Z = false

.field private static final s:Ljava/lang/String; = "MediaCodecVideoRenderer"

.field private static final t:Ljava/lang/String; = "crop-left"

.field private static final u:Ljava/lang/String; = "crop-right"

.field private static final v:Ljava/lang/String; = "crop-bottom"

.field private static final w:Ljava/lang/String; = "crop-top"

.field private static final x:[I

.field private static final y:I = 0xa

.field private static z:Z


# instance fields
.field private final B:Landroid/content/Context;

.field private final C:Lcom/tkay/expressad/exoplayer/l/f;

.field private final D:Lcom/tkay/expressad/exoplayer/l/h$a;

.field private final E:J

.field private final F:I

.field private final G:Z

.field private final H:[J

.field private final I:[J

.field private J:Lcom/tkay/expressad/exoplayer/l/e$a;

.field private K:Z

.field private L:Landroid/view/Surface;

.field private M:Landroid/view/Surface;

.field private N:I

.field private O:Z

.field private P:J

.field private Q:J

.field private R:J

.field private S:I

.field private T:I

.field private U:I

.field private V:J

.field private W:I

.field private X:F

.field private Y:I

.field private Z:I

.field private aa:I

.field private ab:F

.field private ac:I

.field private ad:I

.field private ae:I

.field private af:F

.field private ag:Z

.field private ah:I

.field private ai:J

.field private aj:J

.field private ak:I

.field r:Lcom/tkay/expressad/exoplayer/l/e$b;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/16 v0, 0x9

    new-array v0, v0, [I

    .line 84
    fill-array-data v0, :array_0

    sput-object v0, Lcom/tkay/expressad/exoplayer/l/e;->x:[I

    return-void

    :array_0
    .array-data 4
        0x780
        0x640
        0x5a0
        0x500
        0x3c0
        0x356
        0x280
        0x21c
        0x1e0
    .end array-data
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;)V
    .locals 1

    const/4 v0, 0x0

    .line 143
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/l/e;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;B)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;B)V
    .locals 0

    const/4 p3, 0x0

    .line 154
    invoke-direct {p0, p1, p2, p3, p3}, Lcom/tkay/expressad/exoplayer/l/e;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/l/h;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;JLcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/l/h;I)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/f/c;",
            "J",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;",
            "Landroid/os/Handler;",
            "Lcom/tkay/expressad/exoplayer/l/h;",
            "I)V"
        }
    .end annotation

    const/4 v0, 0x0

    const/4 v1, 0x2

    .line 211
    invoke-direct {p0, v1, p2, p5, v0}, Lcom/tkay/expressad/exoplayer/f/b;-><init>(ILcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Z)V

    .line 212
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/l/e;->E:J

    .line 213
    iput p8, p0, Lcom/tkay/expressad/exoplayer/l/e;->F:I

    .line 214
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->B:Landroid/content/Context;

    .line 215
    new-instance p2, Lcom/tkay/expressad/exoplayer/l/f;

    invoke-direct {p2, p1}, Lcom/tkay/expressad/exoplayer/l/f;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->C:Lcom/tkay/expressad/exoplayer/l/f;

    .line 216
    new-instance p1, Lcom/tkay/expressad/exoplayer/l/h$a;

    invoke-direct {p1, p6, p7}, Lcom/tkay/expressad/exoplayer/l/h$a;-><init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/l/h;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    .line 2178
    sget p1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/4 p2, 0x1

    const/16 p3, 0x16

    if-gt p1, p3, :cond_0

    sget-object p1, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string p3, "foster"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    sget-object p1, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    const-string p3, "NVIDIA"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    move v0, p2

    .line 217
    :cond_0
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->G:Z

    const/16 p1, 0xa

    new-array p3, p1, [J

    .line 218
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/l/e;->H:[J

    new-array p1, p1, [J

    .line 219
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->I:[J

    const-wide p3, -0x7fffffffffffffffL    # -4.9E-324

    .line 220
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/l/e;->aj:J

    .line 221
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/l/e;->ai:J

    .line 222
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/l/e;->Q:J

    const/4 p1, -0x1

    .line 223
    iput p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->Y:I

    .line 224
    iput p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->Z:I

    const/high16 p1, -0x40800000    # -1.0f

    .line 225
    iput p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->ab:F

    .line 226
    iput p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->X:F

    .line 227
    iput p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->N:I

    .line 228
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->G()V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/l/h;)V
    .locals 9

    const-wide/16 v3, 0x0

    const/4 v5, 0x0

    const/4 v8, -0x1

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v6, p3

    move-object v7, p4

    .line 177
    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/exoplayer/l/e;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;JLcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/l/h;I)V

    return-void
.end method

.method private D()V
    .locals 4

    .line 840
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->E:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    .line 841
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->E:J

    add-long/2addr v0, v2

    goto :goto_0

    :cond_0
    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    :goto_0
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Q:J

    return-void
.end method

.method private E()V
    .locals 3

    const/4 v0, 0x0

    .line 845
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->O:Z

    .line 850
    sget v1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v2, 0x17

    if-lt v1, v2, :cond_0

    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->ag:Z

    if-eqz v1, :cond_0

    .line 851
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->y()Landroid/media/MediaCodec;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 854
    new-instance v2, Lcom/tkay/expressad/exoplayer/l/e$b;

    invoke-direct {v2, p0, v1, v0}, Lcom/tkay/expressad/exoplayer/l/e$b;-><init>(Lcom/tkay/expressad/exoplayer/l/e;Landroid/media/MediaCodec;B)V

    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->r:Lcom/tkay/expressad/exoplayer/l/e$b;

    :cond_0
    return-void
.end method

.method private F()V
    .locals 2

    .line 867
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->O:Z

    if-eqz v0, :cond_0

    .line 868
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/l/h$a;->a(Landroid/view/Surface;)V

    :cond_0
    return-void
.end method

.method private G()V
    .locals 2

    const/4 v0, -0x1

    .line 873
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ac:I

    .line 874
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ad:I

    const/high16 v1, -0x40800000    # -1.0f

    .line 875
    iput v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->af:F

    .line 876
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ae:I

    return-void
.end method

.method private H()V
    .locals 5

    .line 880
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Y:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Z:I

    if-eq v0, v1, :cond_2

    :cond_0
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ac:I

    iget v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->Y:I

    if-ne v0, v1, :cond_1

    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ad:I

    iget v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->Z:I

    if-ne v0, v1, :cond_1

    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ae:I

    iget v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->aa:I

    if-ne v0, v1, :cond_1

    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->af:F

    iget v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->ab:F

    cmpl-float v0, v0, v1

    if-eqz v0, :cond_2

    .line 884
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->Y:I

    iget v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->Z:I

    iget v3, p0, Lcom/tkay/expressad/exoplayer/l/e;->aa:I

    iget v4, p0, Lcom/tkay/expressad/exoplayer/l/e;->ab:F

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/l/h$a;->a(IIIF)V

    .line 886
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Y:I

    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ac:I

    .line 887
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Z:I

    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ad:I

    .line 888
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->aa:I

    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ae:I

    .line 889
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ab:F

    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->af:F

    :cond_2
    return-void
.end method

.method private I()V
    .locals 5

    .line 894
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ac:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ad:I

    if-eq v0, v1, :cond_1

    .line 895
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->ac:I

    iget v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->ad:I

    iget v3, p0, Lcom/tkay/expressad/exoplayer/l/e;->ae:I

    iget v4, p0, Lcom/tkay/expressad/exoplayer/l/e;->af:F

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/l/h$a;->a(IIIF)V

    :cond_1
    return-void
.end method

.method private J()V
    .locals 6

    .line 901
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->S:I

    if-lez v0, :cond_0

    .line 902
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    .line 903
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->R:J

    sub-long v2, v0, v2

    .line 904
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    iget v5, p0, Lcom/tkay/expressad/exoplayer/l/e;->S:I

    invoke-virtual {v4, v5, v2, v3}, Lcom/tkay/expressad/exoplayer/l/h$a;->a(IJ)V

    const/4 v2, 0x0

    .line 905
    iput v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->S:I

    .line 906
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->R:J

    :cond_0
    return-void
.end method

.method private static K()Z
    .locals 2

    .line 1178
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x16

    if-gt v0, v1, :cond_0

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v1, "foster"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    const-string v1, "NVIDIA"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/f/a;Ljava/lang/String;II)I
    .locals 7

    const/4 v0, -0x1

    if-eq p2, v0, :cond_7

    if-ne p3, v0, :cond_0

    goto/16 :goto_5

    .line 1109
    :cond_0
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v1

    const/4 v2, 0x5

    const/4 v3, 0x1

    const/4 v4, 0x4

    const/4 v5, 0x3

    const/4 v6, 0x2

    sparse-switch v1, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v1, "video/x-vnd.on2.vp9"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, v2

    goto :goto_1

    :sswitch_1
    const-string v1, "video/x-vnd.on2.vp8"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, v5

    goto :goto_1

    :sswitch_2
    const-string v1, "video/avc"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, v6

    goto :goto_1

    :sswitch_3
    const-string v1, "video/mp4v-es"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, v3

    goto :goto_1

    :sswitch_4
    const-string v1, "video/hevc"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, v4

    goto :goto_1

    :sswitch_5
    const-string v1, "video/3gpp"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    move p1, v0

    :goto_1
    if-eqz p1, :cond_6

    if-eq p1, v3, :cond_6

    if-eq p1, v6, :cond_3

    if-eq p1, v5, :cond_6

    if-eq p1, v4, :cond_2

    if-eq p1, v2, :cond_2

    return v0

    :cond_2
    mul-int/2addr p2, p3

    goto :goto_4

    .line 1116
    :cond_3
    sget-object p1, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "BRAVIA 4K 2015"

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_5

    sget-object p1, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    const-string v1, "Amazon"

    .line 1117
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_4

    sget-object p1, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "KFSOWI"

    .line 1118
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_5

    sget-object p1, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v1, "AFTS"

    .line 1119
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_4

    iget-boolean p0, p0, Lcom/tkay/expressad/exoplayer/f/a;->h:Z

    if-eqz p0, :cond_4

    goto :goto_2

    :cond_4
    const/16 p0, 0x10

    .line 1125
    invoke-static {p2, p0}, Lcom/tkay/expressad/exoplayer/k/af;->a(II)I

    move-result p1

    invoke-static {p3, p0}, Lcom/tkay/expressad/exoplayer/k/af;->a(II)I

    move-result p2

    mul-int/2addr p1, p2

    mul-int/2addr p1, p0

    mul-int/lit8 p2, p1, 0x10

    goto :goto_3

    :cond_5
    :goto_2
    return v0

    :cond_6
    mul-int/2addr p2, p3

    :goto_3
    move v4, v6

    :goto_4
    mul-int/2addr p2, v5

    mul-int/2addr v4, v6

    .line 1143
    div-int/2addr p2, v4

    return p2

    :cond_7
    :goto_5
    return v0

    :sswitch_data_0
    .sparse-switch
        -0x63306f58 -> :sswitch_5
        -0x63185e82 -> :sswitch_4
        0x46cdc642 -> :sswitch_3
        0x4f62373a -> :sswitch_2
        0x5f50bed8 -> :sswitch_1
        0x5f50bed9 -> :sswitch_0
    .end sparse-switch
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;)Landroid/graphics/Point;
    .locals 13

    .line 1035
    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v1, p1, Lcom/tkay/expressad/exoplayer/m;->m:I

    const/4 v2, 0x0

    if-le v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    if-eqz v0, :cond_1

    .line 1036
    iget v1, p1, Lcom/tkay/expressad/exoplayer/m;->n:I

    goto :goto_1

    :cond_1
    iget v1, p1, Lcom/tkay/expressad/exoplayer/m;->m:I

    :goto_1
    if-eqz v0, :cond_2

    .line 1037
    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->m:I

    goto :goto_2

    :cond_2
    iget v3, p1, Lcom/tkay/expressad/exoplayer/m;->n:I

    :goto_2
    int-to-float v4, v3

    int-to-float v5, v1

    div-float/2addr v4, v5

    .line 1039
    sget-object v5, Lcom/tkay/expressad/exoplayer/l/e;->x:[I

    array-length v6, v5

    :goto_3
    const/4 v7, 0x0

    if-ge v2, v6, :cond_a

    aget v8, v5, v2

    int-to-float v9, v8

    mul-float/2addr v9, v4

    float-to-int v9, v9

    if-le v8, v1, :cond_a

    if-gt v9, v3, :cond_3

    goto :goto_8

    .line 1044
    :cond_3
    sget v7, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v10, 0x15

    if-lt v7, v10, :cond_6

    if-eqz v0, :cond_4

    move v7, v9

    goto :goto_4

    :cond_4
    move v7, v8

    :goto_4
    if-eqz v0, :cond_5

    goto :goto_5

    :cond_5
    move v8, v9

    .line 1045
    :goto_5
    invoke-virtual {p0, v7, v8}, Lcom/tkay/expressad/exoplayer/f/a;->a(II)Landroid/graphics/Point;

    move-result-object v7

    .line 1047
    iget v8, p1, Lcom/tkay/expressad/exoplayer/m;->o:F

    .line 1048
    iget v9, v7, Landroid/graphics/Point;->x:I

    iget v10, v7, Landroid/graphics/Point;->y:I

    float-to-double v11, v8

    invoke-virtual {p0, v9, v10, v11, v12}, Lcom/tkay/expressad/exoplayer/f/a;->a(IID)Z

    move-result v8

    if-eqz v8, :cond_9

    return-object v7

    :cond_6
    const/16 v7, 0x10

    .line 1053
    invoke-static {v8, v7}, Lcom/tkay/expressad/exoplayer/k/af;->a(II)I

    move-result v8

    mul-int/2addr v8, v7

    .line 1054
    invoke-static {v9, v7}, Lcom/tkay/expressad/exoplayer/k/af;->a(II)I

    move-result v9

    mul-int/2addr v9, v7

    mul-int v7, v8, v9

    .line 1055
    invoke-static {}, Lcom/tkay/expressad/exoplayer/f/d;->b()I

    move-result v10

    if-gt v7, v10, :cond_9

    .line 1056
    new-instance p0, Landroid/graphics/Point;

    if-eqz v0, :cond_7

    move p1, v9

    goto :goto_6

    :cond_7
    move p1, v8

    :goto_6
    if-eqz v0, :cond_8

    goto :goto_7

    :cond_8
    move v8, v9

    .line 1057
    :goto_7
    invoke-direct {p0, p1, v8}, Landroid/graphics/Point;-><init>(II)V

    return-object p0

    :cond_9
    add-int/lit8 v2, v2, 0x1

    goto :goto_3

    :cond_a
    :goto_8
    return-object v7
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/l/e$a;ZI)Landroid/media/MediaFormat;
    .locals 3

    .line 948
    new-instance v0, Landroid/media/MediaFormat;

    invoke-direct {v0}, Landroid/media/MediaFormat;-><init>()V

    .line 950
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    const-string v2, "mime"

    invoke-virtual {v0, v2, v1}, Landroid/media/MediaFormat;->setString(Ljava/lang/String;Ljava/lang/String;)V

    .line 951
    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->m:I

    const-string v2, "width"

    invoke-virtual {v0, v2, v1}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 952
    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->n:I

    const-string v2, "height"

    invoke-virtual {v0, v2, v1}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 953
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/util/List;)V

    .line 955
    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->o:F

    const/high16 v2, -0x40800000    # -1.0f

    cmpl-float v2, v1, v2

    if-eqz v2, :cond_0

    const-string v2, "frame-rate"

    .line 12082
    invoke-virtual {v0, v2, v1}, Landroid/media/MediaFormat;->setFloat(Ljava/lang/String;F)V

    .line 956
    :cond_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/m;->p:I

    const-string v2, "rotation-degrees"

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 957
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    if-eqz p0, :cond_1

    .line 12108
    iget v1, p0, Lcom/tkay/expressad/exoplayer/l/b;->c:I

    const-string v2, "color-transfer"

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 12109
    iget v1, p0, Lcom/tkay/expressad/exoplayer/l/b;->a:I

    const-string v2, "color-standard"

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 12110
    iget v1, p0, Lcom/tkay/expressad/exoplayer/l/b;->b:I

    const-string v2, "color-range"

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 12111
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/l/b;->d:[B

    if-eqz p0, :cond_1

    .line 13095
    invoke-static {p0}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object p0

    const-string v1, "hdr-static-info"

    invoke-virtual {v0, v1, p0}, Landroid/media/MediaFormat;->setByteBuffer(Ljava/lang/String;Ljava/nio/ByteBuffer;)V

    .line 959
    :cond_1
    iget p0, p1, Lcom/tkay/expressad/exoplayer/l/e$a;->a:I

    const-string v1, "max-width"

    invoke-virtual {v0, v1, p0}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 960
    iget p0, p1, Lcom/tkay/expressad/exoplayer/l/e$a;->b:I

    const-string v1, "max-height"

    invoke-virtual {v0, v1, p0}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 961
    iget p0, p1, Lcom/tkay/expressad/exoplayer/l/e$a;->c:I

    const-string p1, "max-input-size"

    invoke-static {v0, p1, p0}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 964
    sget p0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 p1, 0x17

    const/4 v1, 0x0

    if-lt p0, p1, :cond_2

    const-string p0, "priority"

    .line 965
    invoke-virtual {v0, p0, v1}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    :cond_2
    if-eqz p2, :cond_3

    const-string p0, "auto-frc"

    .line 968
    invoke-virtual {v0, p0, v1}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    :cond_3
    if-eqz p3, :cond_4

    const/4 p0, 0x1

    const-string p1, "tunneled-playback"

    .line 13927
    invoke-virtual {v0, p1, p0}, Landroid/media/MediaFormat;->setFeatureEnabled(Ljava/lang/String;Z)V

    const-string p0, "audio-session-id"

    .line 13928
    invoke-virtual {v0, p0, p3}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    :cond_4
    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;[Lcom/tkay/expressad/exoplayer/m;)Lcom/tkay/expressad/exoplayer/l/e$a;
    .locals 11

    .line 989
    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->m:I

    .line 990
    iget v1, p1, Lcom/tkay/expressad/exoplayer/m;->n:I

    .line 991
    invoke-static {p0, p1}, Lcom/tkay/expressad/exoplayer/l/e;->b(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;)I

    move-result v2

    .line 992
    array-length v3, p2

    const/4 v4, 0x1

    if-ne v3, v4, :cond_0

    .line 995
    new-instance p0, Lcom/tkay/expressad/exoplayer/l/e$a;

    invoke-direct {p0, v0, v1, v2}, Lcom/tkay/expressad/exoplayer/l/e$a;-><init>(III)V

    return-object p0

    .line 998
    :cond_0
    array-length v3, p2

    const/4 v5, 0x0

    move v6, v5

    move v7, v6

    :goto_0
    if-ge v6, v3, :cond_4

    aget-object v8, p2, v6

    .line 999
    iget-boolean v9, p0, Lcom/tkay/expressad/exoplayer/f/a;->f:Z

    invoke-static {v9, p1, v8}, Lcom/tkay/expressad/exoplayer/l/e;->a(ZLcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/m;)Z

    move-result v9

    if-eqz v9, :cond_3

    .line 1000
    iget v9, v8, Lcom/tkay/expressad/exoplayer/m;->m:I

    const/4 v10, -0x1

    if-eq v9, v10, :cond_2

    iget v9, v8, Lcom/tkay/expressad/exoplayer/m;->n:I

    if-ne v9, v10, :cond_1

    goto :goto_1

    :cond_1
    move v9, v5

    goto :goto_2

    :cond_2
    :goto_1
    move v9, v4

    :goto_2
    or-int/2addr v7, v9

    .line 1002
    iget v9, v8, Lcom/tkay/expressad/exoplayer/m;->m:I

    invoke-static {v0, v9}, Ljava/lang/Math;->max(II)I

    move-result v0

    .line 1003
    iget v9, v8, Lcom/tkay/expressad/exoplayer/m;->n:I

    invoke-static {v1, v9}, Ljava/lang/Math;->max(II)I

    move-result v1

    .line 1004
    invoke-static {p0, v8}, Lcom/tkay/expressad/exoplayer/l/e;->b(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;)I

    move-result v8

    invoke-static {v2, v8}, Ljava/lang/Math;->max(II)I

    move-result v2

    :cond_3
    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    :cond_4
    if-eqz v7, :cond_5

    .line 1008
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v3, "Resolutions unknown. Codec max resolution: "

    invoke-direct {p2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "x"

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v4, "MediaCodecVideoRenderer"

    invoke-static {v4, p2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 1009
    invoke-static {p0, p1}, Lcom/tkay/expressad/exoplayer/l/e;->a(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;)Landroid/graphics/Point;

    move-result-object p2

    if-eqz p2, :cond_5

    .line 1011
    iget v5, p2, Landroid/graphics/Point;->x:I

    invoke-static {v0, v5}, Ljava/lang/Math;->max(II)I

    move-result v0

    .line 1012
    iget p2, p2, Landroid/graphics/Point;->y:I

    invoke-static {v1, p2}, Ljava/lang/Math;->max(II)I

    move-result v1

    .line 1013
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    .line 1016
    invoke-static {p0, p1, v0, v1}, Lcom/tkay/expressad/exoplayer/l/e;->a(Lcom/tkay/expressad/exoplayer/f/a;Ljava/lang/String;II)I

    move-result p0

    .line 1014
    invoke-static {v2, p0}, Ljava/lang/Math;->max(II)I

    move-result v2

    .line 1017
    new-instance p0, Ljava/lang/StringBuilder;

    const-string p1, "Codec max resolution adjusted to: "

    invoke-direct {p0, p1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v4, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 1020
    :cond_5
    new-instance p0, Lcom/tkay/expressad/exoplayer/l/e$a;

    invoke-direct {p0, v0, v1, v2}, Lcom/tkay/expressad/exoplayer/l/e$a;-><init>(III)V

    return-object p0
.end method

.method private a(Landroid/media/MediaCodec;I)V
    .locals 1

    const-string v0, "skipVideoBuffer"

    .line 728
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 729
    invoke-virtual {p1, p2, v0}, Landroid/media/MediaCodec;->releaseOutputBuffer(IZ)V

    .line 730
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    .line 731
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget p2, p1, Lcom/tkay/expressad/exoplayer/c/d;->f:I

    add-int/lit8 p2, p2, 0x1

    iput p2, p1, Lcom/tkay/expressad/exoplayer/c/d;->f:I

    return-void
.end method

.method private a(Landroid/media/MediaCodec;IJ)V
    .locals 1

    .line 822
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->H()V

    const-string v0, "releaseOutputBuffer"

    .line 823
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    .line 824
    invoke-virtual {p1, p2, p3, p4}, Landroid/media/MediaCodec;->releaseOutputBuffer(IJ)V

    .line 825
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    .line 826
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide p1

    const-wide/16 p3, 0x3e8

    mul-long/2addr p1, p3

    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->V:J

    .line 827
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget p2, p1, Lcom/tkay/expressad/exoplayer/c/d;->e:I

    add-int/lit8 p2, p2, 0x1

    iput p2, p1, Lcom/tkay/expressad/exoplayer/c/d;->e:I

    const/4 p1, 0x0

    .line 828
    iput p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->T:I

    .line 829
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->C()V

    return-void
.end method

.method private static a(Landroid/media/MediaCodec;Landroid/view/Surface;)V
    .locals 0

    .line 922
    invoke-virtual {p0, p1}, Landroid/media/MediaCodec;->setOutputSurface(Landroid/view/Surface;)V

    return-void
.end method

.method private static a(Landroid/media/MediaFormat;I)V
    .locals 2

    const-string v0, "tunneled-playback"

    const/4 v1, 0x1

    .line 927
    invoke-virtual {p0, v0, v1}, Landroid/media/MediaFormat;->setFeatureEnabled(Ljava/lang/String;Z)V

    const-string v0, "audio-session-id"

    .line 928
    invoke-virtual {p0, v0, p1}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    return-void
.end method

.method private a(Landroid/view/Surface;)V
    .locals 5

    if-nez p1, :cond_1

    .line 394
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    if-eqz v0, :cond_0

    move-object p1, v0

    goto :goto_0

    .line 397
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->z()Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 398
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/l/e;->b(Lcom/tkay/expressad/exoplayer/f/a;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 399
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->B:Landroid/content/Context;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/f/a;->h:Z

    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/l/c;->a(Landroid/content/Context;Z)Lcom/tkay/expressad/exoplayer/l/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    .line 405
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    if-eq v0, p1, :cond_7

    .line 406
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    .line 407
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->a_()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x2

    if-eq v0, v1, :cond_2

    if-ne v0, v2, :cond_4

    .line 409
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->y()Landroid/media/MediaCodec;

    move-result-object v1

    .line 410
    sget v3, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v4, 0x17

    if-lt v3, v4, :cond_3

    if-eqz v1, :cond_3

    if-eqz p1, :cond_3

    iget-boolean v3, p0, Lcom/tkay/expressad/exoplayer/l/e;->K:Z

    if-nez v3, :cond_3

    .line 3922
    invoke-virtual {v1, p1}, Landroid/media/MediaCodec;->setOutputSurface(Landroid/view/Surface;)V

    goto :goto_1

    .line 414
    :cond_3
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->A()V

    .line 415
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->x()V

    :cond_4
    :goto_1
    if-eqz p1, :cond_5

    .line 418
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    if-eq p1, v1, :cond_5

    .line 420
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->I()V

    .line 422
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->E()V

    if-ne v0, v2, :cond_6

    .line 424
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->D()V

    return-void

    .line 428
    :cond_5
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->G()V

    .line 429
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->E()V

    :cond_6
    return-void

    :cond_7
    if-eqz p1, :cond_8

    .line 431
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    if-eq p1, v0, :cond_8

    .line 434
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->I()V

    .line 4867
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->O:Z

    if-eqz p1, :cond_8

    .line 4868
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/l/h$a;->a(Landroid/view/Surface;)V

    :cond_8
    return-void
.end method

.method private static a(Ljava/lang/String;)Z
    .locals 6

    .line 1204
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x1b

    const/4 v2, 0x0

    if-ge v0, v1, :cond_7

    const-string v0, "OMX.google"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    goto/16 :goto_6

    .line 1223
    :cond_0
    const-class p0, Lcom/tkay/expressad/exoplayer/l/e;

    monitor-enter p0

    .line 1224
    :try_start_0
    sget-boolean v0, Lcom/tkay/expressad/exoplayer/l/e;->z:Z

    if-nez v0, :cond_6

    .line 1225
    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v3

    const/4 v4, -0x1

    const/4 v5, 0x1

    sparse-switch v3, :sswitch_data_0

    goto/16 :goto_0

    :sswitch_0
    const-string v1, "HWVNS-H"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x32

    goto/16 :goto_1

    :sswitch_1
    const-string v1, "ELUGA_Prim"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x19

    goto/16 :goto_1

    :sswitch_2
    const-string v1, "ELUGA_Note"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x18

    goto/16 :goto_1

    :sswitch_3
    const-string v1, "HWCAM-H"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x31

    goto/16 :goto_1

    :sswitch_4
    const-string v1, "HWBLN-H"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x30

    goto/16 :goto_1

    :sswitch_5
    const-string v1, "Infinix-X572"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x34

    goto/16 :goto_1

    :sswitch_6
    const-string v1, "PB2-670M"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x4f

    goto/16 :goto_1

    :sswitch_7
    const-string v1, "santoni"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x5f

    goto/16 :goto_1

    :sswitch_8
    const-string v1, "iball8735_9806"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x33

    goto/16 :goto_1

    :sswitch_9
    const-string v1, "CPH1609"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x11

    goto/16 :goto_1

    :sswitch_a
    const-string v1, "woods_f"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x6f

    goto/16 :goto_1

    :sswitch_b
    const-string v1, "htc_e56ml_dtul"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x2e

    goto/16 :goto_1

    :sswitch_c
    const-string v3, "EverStar_S"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto/16 :goto_1

    :sswitch_d
    const-string v1, "hwALE-H"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x2f

    goto/16 :goto_1

    :sswitch_e
    const-string v1, "itel_S41"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x36

    goto/16 :goto_1

    :sswitch_f
    const-string v1, "LS-5017"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x3b

    goto/16 :goto_1

    :sswitch_10
    const-string v1, "panell_d"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x4b

    goto/16 :goto_1

    :sswitch_11
    const-string v1, "j2xlteins"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x37

    goto/16 :goto_1

    :sswitch_12
    const-string v1, "A7000plus"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v1, 0x7

    goto/16 :goto_1

    :sswitch_13
    const-string v1, "manning"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x3d

    goto/16 :goto_1

    :sswitch_14
    const-string v1, "GIONEE_WBL7519"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x2c

    goto/16 :goto_1

    :sswitch_15
    const-string v1, "GIONEE_WBL7365"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x2b

    goto/16 :goto_1

    :sswitch_16
    const-string v1, "GIONEE_WBL5708"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x2a

    goto/16 :goto_1

    :sswitch_17
    const-string v1, "QM16XE_U"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x5d

    goto/16 :goto_1

    :sswitch_18
    const-string v1, "Pixi5-10_4G"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x55

    goto/16 :goto_1

    :sswitch_19
    const-string v1, "TB3-850M"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x67

    goto/16 :goto_1

    :sswitch_1a
    const-string v1, "TB3-850F"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x66

    goto/16 :goto_1

    :sswitch_1b
    const-string v1, "TB3-730X"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x65

    goto/16 :goto_1

    :sswitch_1c
    const-string v1, "TB3-730F"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x64

    goto/16 :goto_1

    :sswitch_1d
    const-string v1, "A7020a48"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x9

    goto/16 :goto_1

    :sswitch_1e
    const-string v1, "A7010a48"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x8

    goto/16 :goto_1

    :sswitch_1f
    const-string v1, "griffin"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x2d

    goto/16 :goto_1

    :sswitch_20
    const-string v1, "marino_f"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x3e

    goto/16 :goto_1

    :sswitch_21
    const-string v1, "CPY83_I00"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x12

    goto/16 :goto_1

    :sswitch_22
    const-string v1, "A2016a40"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v1, 0x5

    goto/16 :goto_1

    :sswitch_23
    const-string v1, "le_x6"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x3a

    goto/16 :goto_1

    :sswitch_24
    const-string v1, "X3_HK"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x71

    goto/16 :goto_1

    :sswitch_25
    const-string v1, "V23GB"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x6a

    goto/16 :goto_1

    :sswitch_26
    const-string v1, "Q4310"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x5b

    goto/16 :goto_1

    :sswitch_27
    const-string v1, "Q4260"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x59

    goto/16 :goto_1

    :sswitch_28
    const-string v1, "PRO7S"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x57

    goto/16 :goto_1

    :sswitch_29
    const-string v1, "F3311"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x22

    goto/16 :goto_1

    :sswitch_2a
    const-string v1, "F3215"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x21

    goto/16 :goto_1

    :sswitch_2b
    const-string v1, "F3213"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x20

    goto/16 :goto_1

    :sswitch_2c
    const-string v1, "F3211"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x1f

    goto/16 :goto_1

    :sswitch_2d
    const-string v1, "F3116"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x1e

    goto/16 :goto_1

    :sswitch_2e
    const-string v1, "F3113"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x1d

    goto/16 :goto_1

    :sswitch_2f
    const-string v1, "F3111"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x1c

    goto/16 :goto_1

    :sswitch_30
    const-string v1, "E5643"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x16

    goto/16 :goto_1

    :sswitch_31
    const-string v1, "A1601"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v1, 0x4

    goto/16 :goto_1

    :sswitch_32
    const-string v1, "Aura_Note_2"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0xb

    goto/16 :goto_1

    :sswitch_33
    const-string v1, "MEIZU_M5"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x3f

    goto/16 :goto_1

    :sswitch_34
    const-string v1, "p212"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x48

    goto/16 :goto_1

    :sswitch_35
    const-string v1, "mido"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x41

    goto/16 :goto_1

    :sswitch_36
    const-string v1, "XE2X"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x72

    goto/16 :goto_1

    :sswitch_37
    const-string v1, "Q427"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x5a

    goto/16 :goto_1

    :sswitch_38
    const-string v1, "Q350"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x58

    goto/16 :goto_1

    :sswitch_39
    const-string v1, "P681"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x49

    goto/16 :goto_1

    :sswitch_3a
    const-string v1, "1714"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v1, 0x2

    goto/16 :goto_1

    :sswitch_3b
    const-string v1, "1713"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    move v1, v5

    goto/16 :goto_1

    :sswitch_3c
    const-string v1, "1601"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    move v1, v2

    goto/16 :goto_1

    :sswitch_3d
    const-string v1, "flo"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x23

    goto/16 :goto_1

    :sswitch_3e
    const-string v1, "deb"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x15

    goto/16 :goto_1

    :sswitch_3f
    const-string v1, "cv3"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x14

    goto/16 :goto_1

    :sswitch_40
    const-string v1, "cv1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x13

    goto/16 :goto_1

    :sswitch_41
    const-string v1, "Z80"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x75

    goto/16 :goto_1

    :sswitch_42
    const-string v1, "QX1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x5e

    goto/16 :goto_1

    :sswitch_43
    const-string v1, "PLE"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x56

    goto/16 :goto_1

    :sswitch_44
    const-string v1, "P85"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x4a

    goto/16 :goto_1

    :sswitch_45
    const-string v1, "MX6"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x42

    goto/16 :goto_1

    :sswitch_46
    const-string v1, "M5c"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x3c

    goto/16 :goto_1

    :sswitch_47
    const-string v1, "JGZ"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x38

    goto/16 :goto_1

    :sswitch_48
    const-string v1, "mh"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x40

    goto/16 :goto_1

    :sswitch_49
    const-string v1, "V5"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x6b

    goto/16 :goto_1

    :sswitch_4a
    const-string v1, "V1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x69

    goto/16 :goto_1

    :sswitch_4b
    const-string v1, "Q5"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x5c

    goto/16 :goto_1

    :sswitch_4c
    const-string v1, "C1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0xe

    goto/16 :goto_1

    :sswitch_4d
    const-string v1, "woods_fn"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x70

    goto/16 :goto_1

    :sswitch_4e
    const-string v1, "ELUGA_A3_Pro"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x17

    goto/16 :goto_1

    :sswitch_4f
    const-string v1, "Z12_PRO"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x74

    goto/16 :goto_1

    :sswitch_50
    const-string v1, "BLACK-1X"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0xc

    goto/16 :goto_1

    :sswitch_51
    const-string v1, "taido_row"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x63

    goto/16 :goto_1

    :sswitch_52
    const-string v1, "Pixi4-7_3G"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x54

    goto/16 :goto_1

    :sswitch_53
    const-string v1, "GIONEE_GBL7360"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x26

    goto/16 :goto_1

    :sswitch_54
    const-string v1, "GiONEE_CBL7513"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x24

    goto/16 :goto_1

    :sswitch_55
    const-string v1, "OnePlus5T"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x47

    goto/16 :goto_1

    :sswitch_56
    const-string v1, "whyred"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x6e

    goto/16 :goto_1

    :sswitch_57
    const-string v1, "watson"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x6d

    goto/16 :goto_1

    :sswitch_58
    const-string v1, "SVP-DTV15"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x61

    goto/16 :goto_1

    :sswitch_59
    const-string v1, "A7000-a"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v1, 0x6

    goto/16 :goto_1

    :sswitch_5a
    const-string v1, "nicklaus_f"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x44

    goto/16 :goto_1

    :sswitch_5b
    const-string v1, "tcl_eu"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x68

    goto/16 :goto_1

    :sswitch_5c
    const-string v1, "ELUGA_Ray_X"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x1a

    goto/16 :goto_1

    :sswitch_5d
    const-string v1, "s905x018"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x62

    goto/16 :goto_1

    :sswitch_5e
    const-string v1, "A10-70F"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v1, 0x3

    goto/16 :goto_1

    :sswitch_5f
    const-string v1, "namath"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x43

    goto/16 :goto_1

    :sswitch_60
    const-string v1, "Slate_Pro"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x60

    goto/16 :goto_1

    :sswitch_61
    const-string v1, "iris60"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x35

    goto/16 :goto_1

    :sswitch_62
    const-string v1, "BRAVIA_ATV2"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0xd

    goto/16 :goto_1

    :sswitch_63
    const-string v1, "GiONEE_GBL7319"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x25

    goto/16 :goto_1

    :sswitch_64
    const-string v1, "panell_dt"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x4e

    goto/16 :goto_1

    :sswitch_65
    const-string v1, "panell_ds"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x4d

    goto/16 :goto_1

    :sswitch_66
    const-string v1, "panell_dl"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x4c

    goto/16 :goto_1

    :sswitch_67
    const-string v1, "vernee_M5"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x6c

    goto/16 :goto_1

    :sswitch_68
    const-string v1, "Phantom6"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x53

    goto/16 :goto_1

    :sswitch_69
    const-string v1, "ComioS1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0xf

    goto/16 :goto_1

    :sswitch_6a
    const-string v1, "XT1663"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x73

    goto/16 :goto_1

    :sswitch_6b
    const-string v1, "AquaPowerM"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0xa

    goto/16 :goto_1

    :sswitch_6c
    const-string v1, "PGN611"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x52

    goto/16 :goto_1

    :sswitch_6d
    const-string v1, "PGN610"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x51

    goto :goto_1

    :sswitch_6e
    const-string v1, "PGN528"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x50

    goto :goto_1

    :sswitch_6f
    const-string v1, "NX573J"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x46

    goto :goto_1

    :sswitch_70
    const-string v1, "NX541J"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x45

    goto :goto_1

    :sswitch_71
    const-string v1, "CP8676_I02"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x10

    goto :goto_1

    :sswitch_72
    const-string v1, "K50a40"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x39

    goto :goto_1

    :sswitch_73
    const-string v1, "GIONEE_SWW1631"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x29

    goto :goto_1

    :sswitch_74
    const-string v1, "GIONEE_SWW1627"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x28

    goto :goto_1

    :sswitch_75
    const-string v1, "GIONEE_SWW1609"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v1, 0x27

    goto :goto_1

    :cond_1
    :goto_0
    move v1, v4

    :goto_1
    packed-switch v1, :pswitch_data_0

    goto :goto_2

    .line 1344
    :pswitch_0
    sput-boolean v5, Lcom/tkay/expressad/exoplayer/l/e;->A:Z

    .line 1350
    :goto_2
    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v1

    const v3, 0x1e9d52

    if-eq v1, v3, :cond_3

    const v2, 0x1e9d5f

    if-eq v1, v2, :cond_2

    goto :goto_3

    :cond_2
    const-string v1, "AFTN"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    move v2, v5

    goto :goto_4

    :cond_3
    const-string v1, "AFTA"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    goto :goto_4

    :cond_4
    :goto_3
    move v2, v4

    :goto_4
    if-eqz v2, :cond_5

    if-eq v2, v5, :cond_5

    goto :goto_5

    .line 1353
    :cond_5
    sput-boolean v5, Lcom/tkay/expressad/exoplayer/l/e;->A:Z

    .line 1359
    :goto_5
    sput-boolean v5, Lcom/tkay/expressad/exoplayer/l/e;->z:Z

    .line 1361
    :cond_6
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1362
    sget-boolean p0, Lcom/tkay/expressad/exoplayer/l/e;->A:Z

    return p0

    :catchall_0
    move-exception v0

    .line 1361
    monitor-exit p0

    throw v0

    :cond_7
    :goto_6
    return v2

    nop

    :sswitch_data_0
    .sparse-switch
        -0x7fd6c3bd -> :sswitch_75
        -0x7fd6c381 -> :sswitch_74
        -0x7fd6c368 -> :sswitch_73
        -0x7d026749 -> :sswitch_72
        -0x78929d6a -> :sswitch_71
        -0x75f50a1e -> :sswitch_70
        -0x75f4fe9d -> :sswitch_6f
        -0x736f875c -> :sswitch_6e
        -0x736f83c2 -> :sswitch_6d
        -0x736f83c1 -> :sswitch_6c
        -0x7327ce1c -> :sswitch_6b
        -0x651ebb62 -> :sswitch_6a
        -0x6423293b -> :sswitch_69
        -0x604f5117 -> :sswitch_68
        -0x5ca40cc4 -> :sswitch_67
        -0x58520ec1 -> :sswitch_66
        -0x58520eba -> :sswitch_65
        -0x58520eb9 -> :sswitch_64
        -0x4eaed329 -> :sswitch_63
        -0x4892fb4f -> :sswitch_62
        -0x465b3df3 -> :sswitch_61
        -0x43e6c939 -> :sswitch_60
        -0x3ec0fcc5 -> :sswitch_5f
        -0x3b33cca0 -> :sswitch_5e
        -0x398ae3f6 -> :sswitch_5d
        -0x391f0fb4 -> :sswitch_5c
        -0x346837ae -> :sswitch_5b
        -0x323788e3 -> :sswitch_5a
        -0x30f57652 -> :sswitch_59
        -0x2f88a116 -> :sswitch_58
        -0x2f61ed98 -> :sswitch_57
        -0x2efd0837 -> :sswitch_56
        -0x2e9e9441 -> :sswitch_55
        -0x2247b8b1 -> :sswitch_54
        -0x1f0fa2b7 -> :sswitch_53
        -0x19af3b41 -> :sswitch_52
        -0x114fad3e -> :sswitch_51
        -0x10dae90b -> :sswitch_50
        -0x1084b7b7 -> :sswitch_4f
        -0xa5988e9 -> :sswitch_4e
        -0x35f9fbf -> :sswitch_4d
        0x84e -> :sswitch_4c
        0xa04 -> :sswitch_4b
        0xa9b -> :sswitch_4a
        0xa9f -> :sswitch_49
        0xd9b -> :sswitch_48
        0x11ebd -> :sswitch_47
        0x127db -> :sswitch_46
        0x12beb -> :sswitch_45
        0x1334d -> :sswitch_44
        0x135c9 -> :sswitch_43
        0x13aea -> :sswitch_42
        0x158d2 -> :sswitch_41
        0x1821e -> :sswitch_40
        0x18220 -> :sswitch_3f
        0x18401 -> :sswitch_3e
        0x18c69 -> :sswitch_3d
        0x1716e6 -> :sswitch_3c
        0x171ac8 -> :sswitch_3b
        0x171ac9 -> :sswitch_3a
        0x252f5f -> :sswitch_39
        0x25981d -> :sswitch_38
        0x259b88 -> :sswitch_37
        0x290a13 -> :sswitch_36
        0x332327 -> :sswitch_35
        0x33ab63 -> :sswitch_34
        0x27691fb -> :sswitch_33
        0x349f581 -> :sswitch_32
        0x3ab0ea7 -> :sswitch_31
        0x3e53ea5 -> :sswitch_30
        0x3f25a44 -> :sswitch_2f
        0x3f25a46 -> :sswitch_2e
        0x3f25a49 -> :sswitch_2d
        0x3f25e05 -> :sswitch_2c
        0x3f25e07 -> :sswitch_2b
        0x3f25e09 -> :sswitch_2a
        0x3f261c6 -> :sswitch_29
        0x48dce49 -> :sswitch_28
        0x48dd589 -> :sswitch_27
        0x48dd8af -> :sswitch_26
        0x4d36832 -> :sswitch_25
        0x4f0b0e7 -> :sswitch_24
        0x6214744 -> :sswitch_23
        0x9d91379 -> :sswitch_22
        0xadc0551 -> :sswitch_21
        0xea056b3 -> :sswitch_20
        0x1121dbc3 -> :sswitch_1f
        0x1255818c -> :sswitch_1e
        0x1263990d -> :sswitch_1d
        0x12d90f3a -> :sswitch_1c
        0x12d90f4c -> :sswitch_1b
        0x12d98b1b -> :sswitch_1a
        0x12d98b22 -> :sswitch_19
        0x1844c711 -> :sswitch_18
        0x1e3e8044 -> :sswitch_17
        0x2f5336ed -> :sswitch_16
        0x2f54115e -> :sswitch_15
        0x2f541849 -> :sswitch_14
        0x31cf010e -> :sswitch_13
        0x36ad82f4 -> :sswitch_12
        0x391a0b61 -> :sswitch_11
        0x3f3728cd -> :sswitch_10
        0x448ec687 -> :sswitch_f
        0x46260f63 -> :sswitch_e
        0x4c505106 -> :sswitch_d
        0x4de67084 -> :sswitch_c
        0x506ac5a9 -> :sswitch_b
        0x5abad9cd -> :sswitch_a
        0x64d2e6e9 -> :sswitch_9
        0x65e4085b -> :sswitch_8
        0x6f373556 -> :sswitch_7
        0x719f1dcb -> :sswitch_6
        0x75d9a0f0 -> :sswitch_5
        0x78fc0e50 -> :sswitch_4
        0x790521fb -> :sswitch_3
        0x7a05a409 -> :sswitch_2
        0x7a0696bd -> :sswitch_1
        0x7a16dfe7 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method private static a(ZLcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/m;)Z
    .locals 2

    .line 1157
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    iget-object v1, p2, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->p:I

    iget v1, p2, Lcom/tkay/expressad/exoplayer/m;->p:I

    if-ne v0, v1, :cond_1

    if-nez p0, :cond_0

    iget p0, p1, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget v0, p2, Lcom/tkay/expressad/exoplayer/m;->m:I

    if-ne p0, v0, :cond_1

    iget p0, p1, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget v0, p2, Lcom/tkay/expressad/exoplayer/m;->n:I

    if-ne p0, v0, :cond_1

    :cond_0
    iget-object p0, p1, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    iget-object p1, p2, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    .line 1160
    invoke-static {p0, p1}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;)I
    .locals 3

    .line 1073
    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->i:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_1

    .line 1077
    iget-object p0, p1, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result p0

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    if-ge v0, p0, :cond_0

    .line 1079
    iget-object v2, p1, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [B

    array-length v2, v2

    add-int/2addr v1, v2

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1081
    :cond_0
    iget p0, p1, Lcom/tkay/expressad/exoplayer/m;->i:I

    add-int/2addr p0, v1

    return p0

    .line 1085
    :cond_1
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    iget v1, p1, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget p1, p1, Lcom/tkay/expressad/exoplayer/m;->n:I

    invoke-static {p0, v0, v1, p1}, Lcom/tkay/expressad/exoplayer/l/e;->a(Lcom/tkay/expressad/exoplayer/f/a;Ljava/lang/String;II)I

    move-result p0

    return p0
.end method

.method private b(I)V
    .locals 2

    .line 781
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->g:I

    add-int/2addr v1, p1

    iput v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->g:I

    .line 782
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->S:I

    add-int/2addr v0, p1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->S:I

    .line 783
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->T:I

    add-int/2addr v0, p1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->T:I

    .line 784
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->T:I

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/c/d;->h:I

    invoke-static {v0, v1}, Ljava/lang/Math;->max(II)I

    move-result v0

    iput v0, p1, Lcom/tkay/expressad/exoplayer/c/d;->h:I

    .line 786
    iget p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->S:I

    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->F:I

    if-lt p1, v0, :cond_0

    .line 787
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->J()V

    :cond_0
    return-void
.end method

.method private b(Landroid/media/MediaCodec;I)V
    .locals 1

    const-string v0, "dropVideoBuffer"

    .line 742
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 743
    invoke-virtual {p1, p2, v0}, Landroid/media/MediaCodec;->releaseOutputBuffer(IZ)V

    .line 744
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    const/4 p1, 0x1

    .line 745
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/l/e;->b(I)V

    return-void
.end method

.method private static b(JJ)Z
    .locals 0

    .line 717
    invoke-static {p0, p1}, Lcom/tkay/expressad/exoplayer/l/e;->g(J)Z

    move-result p0

    if-eqz p0, :cond_0

    const-wide/32 p0, 0x186a0

    cmp-long p0, p2, p0

    if-lez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private b(Lcom/tkay/expressad/exoplayer/f/a;)Z
    .locals 2

    .line 833
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ag:Z

    if-nez v0, :cond_1

    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    .line 835
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/l/e;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-boolean p1, p1, Lcom/tkay/expressad/exoplayer/f/a;->h:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->B:Landroid/content/Context;

    .line 836
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/l/c;->a(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_1

    :cond_0
    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method private c(Landroid/media/MediaCodec;I)V
    .locals 3

    .line 800
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->H()V

    const-string v0, "releaseOutputBuffer"

    .line 801
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 802
    invoke-virtual {p1, p2, v0}, Landroid/media/MediaCodec;->releaseOutputBuffer(IZ)V

    .line 803
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    .line 804
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide p1

    const-wide/16 v1, 0x3e8

    mul-long/2addr p1, v1

    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->V:J

    .line 805
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget p2, p1, Lcom/tkay/expressad/exoplayer/c/d;->e:I

    add-int/2addr p2, v0

    iput p2, p1, Lcom/tkay/expressad/exoplayer/c/d;->e:I

    const/4 p1, 0x0

    .line 806
    iput p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->T:I

    .line 807
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->C()V

    return-void
.end method

.method private static d(J)Z
    .locals 0

    .line 691
    invoke-static {p0, p1}, Lcom/tkay/expressad/exoplayer/l/e;->g(J)Z

    move-result p0

    return p0
.end method

.method private static e(J)Z
    .locals 2

    const-wide/32 v0, -0x7a120

    cmp-long p0, p0, v0

    if-gez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private f(J)Z
    .locals 2

    .line 762
    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/l/e;->b(J)I

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    .line 766
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget v0, p2, Lcom/tkay/expressad/exoplayer/c/d;->i:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p2, Lcom/tkay/expressad/exoplayer/c/d;->i:I

    .line 769
    iget p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->U:I

    add-int/2addr p2, p1

    invoke-direct {p0, p2}, Lcom/tkay/expressad/exoplayer/l/e;->b(I)V

    .line 770
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->B()V

    return v1
.end method

.method private static g(J)Z
    .locals 2

    const-wide/16 v0, -0x7530

    cmp-long p0, p0, v0

    if-gez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static h(J)Z
    .locals 2

    const-wide/32 v0, -0x7a120

    cmp-long p0, p0, v0

    if-gez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method protected final A()V
    .locals 4

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 481
    :try_start_0
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->A()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 483
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->U:I

    .line 484
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    if-eqz v0, :cond_1

    .line 485
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    if-ne v2, v0, :cond_0

    .line 486
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    .line 488
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    invoke-virtual {v0}, Landroid/view/Surface;->release()V

    .line 489
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    :cond_1
    return-void

    :catchall_0
    move-exception v2

    .line 483
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->U:I

    .line 484
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    if-eqz v0, :cond_3

    .line 485
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    if-ne v3, v0, :cond_2

    .line 486
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    .line 488
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    invoke-virtual {v0}, Landroid/view/Surface;->release()V

    .line 489
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    .line 491
    :cond_3
    throw v2
.end method

.method protected final B()V
    .locals 1

    .line 497
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->B()V

    const/4 v0, 0x0

    .line 498
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->U:I

    return-void
.end method

.method final C()V
    .locals 2

    .line 860
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->O:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 861
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->O:Z

    .line 862
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/l/h$a;->a(Landroid/view/Surface;)V

    :cond_0
    return-void
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/m;)I
    .locals 2

    .line 466
    iget-boolean v0, p1, Lcom/tkay/expressad/exoplayer/f/a;->f:Z

    invoke-static {v0, p2, p3}, Lcom/tkay/expressad/exoplayer/l/e;->a(ZLcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/m;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget v0, p3, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->J:Lcom/tkay/expressad/exoplayer/l/e$a;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/l/e$a;->a:I

    if-gt v0, v1, :cond_1

    iget v0, p3, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->J:Lcom/tkay/expressad/exoplayer/l/e$a;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/l/e$a;->b:I

    if-gt v0, v1, :cond_1

    .line 469
    invoke-static {p1, p3}, Lcom/tkay/expressad/exoplayer/l/e;->b(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;)I

    move-result p1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->J:Lcom/tkay/expressad/exoplayer/l/e$a;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/l/e$a;->c:I

    if-gt p1, v0, :cond_1

    .line 470
    invoke-virtual {p2, p3}, Lcom/tkay/expressad/exoplayer/m;->b(Lcom/tkay/expressad/exoplayer/m;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x3

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Lcom/tkay/expressad/exoplayer/m;)I
    .locals 7
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

    .line 235
    iget-object v0, p3, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    .line 236
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/o;->b(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    .line 240
    :cond_0
    iget-object v1, p3, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    if-eqz v1, :cond_1

    move v3, v2

    move v4, v3

    .line 242
    :goto_0
    iget v5, v1, Lcom/tkay/expressad/exoplayer/d/e;->b:I

    if-ge v3, v5, :cond_2

    .line 243
    invoke-virtual {v1, v3}, Lcom/tkay/expressad/exoplayer/d/e;->a(I)Lcom/tkay/expressad/exoplayer/d/e$a;

    move-result-object v5

    iget-boolean v5, v5, Lcom/tkay/expressad/exoplayer/d/e$a;->d:Z

    or-int/2addr v4, v5

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    move v4, v2

    .line 246
    :cond_2
    invoke-interface {p1, v0, v4}, Lcom/tkay/expressad/exoplayer/f/c;->a(Ljava/lang/String;Z)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object v3

    const/4 v5, 0x2

    const/4 v6, 0x1

    if-nez v3, :cond_4

    if-eqz v4, :cond_3

    .line 249
    invoke-interface {p1, v0, v2}, Lcom/tkay/expressad/exoplayer/f/c;->a(Ljava/lang/String;Z)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object p1

    if-eqz p1, :cond_3

    return v5

    :cond_3
    return v6

    .line 252
    :cond_4
    invoke-static {p2, v1}, Lcom/tkay/expressad/exoplayer/l/e;->a(Lcom/tkay/expressad/exoplayer/d/g;Lcom/tkay/expressad/exoplayer/d/e;)Z

    move-result p1

    if-nez p1, :cond_5

    return v5

    .line 255
    :cond_5
    iget-object p1, p3, Lcom/tkay/expressad/exoplayer/m;->e:Ljava/lang/String;

    invoke-virtual {v3, p1}, Lcom/tkay/expressad/exoplayer/f/a;->b(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_9

    .line 256
    iget p2, p3, Lcom/tkay/expressad/exoplayer/m;->m:I

    if-lez p2, :cond_9

    iget p2, p3, Lcom/tkay/expressad/exoplayer/m;->n:I

    if-lez p2, :cond_9

    .line 257
    sget p1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 p2, 0x15

    if-lt p1, p2, :cond_6

    .line 258
    iget p1, p3, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget p2, p3, Lcom/tkay/expressad/exoplayer/m;->n:I

    iget p3, p3, Lcom/tkay/expressad/exoplayer/m;->o:F

    float-to-double v0, p3

    invoke-virtual {v3, p1, p2, v0, v1}, Lcom/tkay/expressad/exoplayer/f/a;->a(IID)Z

    move-result p1

    goto :goto_2

    .line 261
    :cond_6
    iget p1, p3, Lcom/tkay/expressad/exoplayer/m;->m:I

    iget p2, p3, Lcom/tkay/expressad/exoplayer/m;->n:I

    mul-int/2addr p1, p2

    invoke-static {}, Lcom/tkay/expressad/exoplayer/f/d;->b()I

    move-result p2

    if-gt p1, p2, :cond_7

    goto :goto_1

    :cond_7
    move v6, v2

    :goto_1
    if-nez v6, :cond_8

    .line 263
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "FalseCheck [legacyFrameSize, "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget p2, p3, Lcom/tkay/expressad/exoplayer/m;->m:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "x"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p3, Lcom/tkay/expressad/exoplayer/m;->n:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "] ["

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p2, Lcom/tkay/expressad/exoplayer/k/af;->e:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "]"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MediaCodecVideoRenderer"

    invoke-static {p2, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_8
    move p1, v6

    .line 269
    :cond_9
    :goto_2
    iget-boolean p2, v3, Lcom/tkay/expressad/exoplayer/f/a;->f:Z

    if-eqz p2, :cond_a

    const/16 p2, 0x10

    goto :goto_3

    :cond_a
    const/16 p2, 0x8

    .line 270
    :goto_3
    iget-boolean p3, v3, Lcom/tkay/expressad/exoplayer/f/a;->g:Z

    if-eqz p3, :cond_b

    const/16 v2, 0x20

    :cond_b
    if-eqz p1, :cond_c

    const/4 p1, 0x4

    goto :goto_4

    :cond_c
    const/4 p1, 0x3

    :goto_4
    or-int/2addr p2, v2

    or-int/2addr p1, p2

    return p1
.end method

.method public final a(ILjava/lang/Object;)V
    .locals 4

    const/4 v0, 0x1

    if-ne p1, v0, :cond_9

    .line 379
    check-cast p2, Landroid/view/Surface;

    if-nez p2, :cond_1

    .line 2394
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    if-eqz p1, :cond_0

    move-object p2, p1

    goto :goto_0

    .line 2397
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->z()Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 2398
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/l/e;->b(Lcom/tkay/expressad/exoplayer/f/a;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2399
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->B:Landroid/content/Context;

    iget-boolean p1, p1, Lcom/tkay/expressad/exoplayer/f/a;->h:Z

    invoke-static {p2, p1}, Lcom/tkay/expressad/exoplayer/l/c;->a(Landroid/content/Context;Z)Lcom/tkay/expressad/exoplayer/l/c;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    .line 2405
    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    if-eq p1, p2, :cond_7

    .line 2406
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    .line 2407
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->a_()I

    move-result p1

    const/4 v1, 0x2

    if-eq p1, v0, :cond_2

    if-ne p1, v1, :cond_4

    .line 2409
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->y()Landroid/media/MediaCodec;

    move-result-object v0

    .line 2410
    sget v2, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v3, 0x17

    if-lt v2, v3, :cond_3

    if-eqz v0, :cond_3

    if-eqz p2, :cond_3

    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->K:Z

    if-nez v2, :cond_3

    .line 2922
    invoke-virtual {v0, p2}, Landroid/media/MediaCodec;->setOutputSurface(Landroid/view/Surface;)V

    goto :goto_1

    .line 2414
    :cond_3
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->A()V

    .line 2415
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->x()V

    :cond_4
    :goto_1
    if-eqz p2, :cond_5

    .line 2418
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    if-eq p2, v0, :cond_5

    .line 2420
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->I()V

    .line 2422
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->E()V

    if-ne p1, v1, :cond_6

    .line 2424
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->D()V

    return-void

    .line 2428
    :cond_5
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->G()V

    .line 2429
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->E()V

    :cond_6
    return-void

    :cond_7
    if-eqz p2, :cond_8

    .line 2431
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    if-eq p2, p1, :cond_8

    .line 2434
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->I()V

    .line 3867
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->O:Z

    if-eqz p1, :cond_8

    .line 3868
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/exoplayer/l/h$a;->a(Landroid/view/Surface;)V

    :cond_8
    return-void

    :cond_9
    const/4 v0, 0x4

    if-ne p1, v0, :cond_b

    .line 381
    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->N:I

    .line 382
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->y()Landroid/media/MediaCodec;

    move-result-object p1

    if-eqz p1, :cond_a

    .line 384
    iget p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->N:I

    invoke-virtual {p1, p2}, Landroid/media/MediaCodec;->setVideoScalingMode(I)V

    :cond_a
    return-void

    .line 387
    :cond_b
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/f/b;->a(ILjava/lang/Object;)V

    return-void
.end method

.method protected final a(JZ)V
    .locals 3

    .line 303
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/f/b;->a(JZ)V

    .line 304
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->E()V

    const-wide p1, -0x7fffffffffffffffL    # -4.9E-324

    .line 305
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->P:J

    const/4 v0, 0x0

    .line 306
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->T:I

    .line 307
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->ai:J

    .line 308
    iget v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->ak:I

    if-eqz v1, :cond_0

    .line 309
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->H:[J

    add-int/lit8 v1, v1, -0x1

    aget-wide v1, v2, v1

    iput-wide v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->aj:J

    .line 310
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ak:I

    :cond_0
    if-eqz p3, :cond_1

    .line 313
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->D()V

    return-void

    .line 315
    :cond_1
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->Q:J

    return-void
.end method

.method protected final a(Landroid/media/MediaCodec;Landroid/media/MediaFormat;)V
    .locals 6

    const-string v0, "crop-right"

    .line 533
    invoke-virtual {p2, v0}, Landroid/media/MediaFormat;->containsKey(Ljava/lang/String;)Z

    move-result v1

    const-string v2, "crop-top"

    const-string v3, "crop-bottom"

    const-string v4, "crop-left"

    const/4 v5, 0x1

    if-eqz v1, :cond_0

    .line 534
    invoke-virtual {p2, v4}, Landroid/media/MediaFormat;->containsKey(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p2, v3}, Landroid/media/MediaFormat;->containsKey(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 535
    invoke-virtual {p2, v2}, Landroid/media/MediaFormat;->containsKey(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    move v1, v5

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    if-eqz v1, :cond_1

    .line 537
    invoke-virtual {p2, v0}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v4}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result v4

    sub-int/2addr v0, v4

    add-int/2addr v0, v5

    goto :goto_1

    :cond_1
    const-string v0, "width"

    .line 538
    invoke-virtual {p2, v0}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result v0

    :goto_1
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Y:I

    if-eqz v1, :cond_2

    .line 540
    invoke-virtual {p2, v3}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v2}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result p2

    sub-int/2addr v0, p2

    add-int/2addr v0, v5

    goto :goto_2

    :cond_2
    const-string v0, "height"

    .line 541
    invoke-virtual {p2, v0}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result v0

    :goto_2
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Z:I

    .line 542
    iget p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->X:F

    iput p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->ab:F

    .line 543
    sget p2, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v0, 0x15

    if-lt p2, v0, :cond_4

    .line 547
    iget p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->W:I

    const/16 v0, 0x5a

    if-eq p2, v0, :cond_3

    const/16 v0, 0x10e

    if-ne p2, v0, :cond_5

    .line 548
    :cond_3
    iget p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->Y:I

    .line 549
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Z:I

    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Y:I

    .line 550
    iput p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->Z:I

    const/high16 p2, 0x3f800000    # 1.0f

    .line 551
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ab:F

    div-float/2addr p2, v0

    iput p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->ab:F

    goto :goto_3

    .line 555
    :cond_4
    iget p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->W:I

    iput p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->aa:I

    .line 558
    :cond_5
    :goto_3
    iget p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->N:I

    invoke-virtual {p1, p2}, Landroid/media/MediaCodec;->setVideoScalingMode(I)V

    return-void
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/c/e;)V
    .locals 4

    .line 524
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->U:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->U:I

    .line 525
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->ai:J

    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ai:J

    .line 526
    sget p1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v0, 0x17

    if-ge p1, v0, :cond_0

    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->ag:Z

    if-eqz p1, :cond_0

    .line 527
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->C()V

    :cond_0
    return-void
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/f/a;Landroid/media/MediaCodec;Lcom/tkay/expressad/exoplayer/m;Landroid/media/MediaCrypto;)V
    .locals 16

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    .line 447
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/l/e;->q()[Lcom/tkay/expressad/exoplayer/m;

    move-result-object v4

    .line 4989
    iget v5, v3, Lcom/tkay/expressad/exoplayer/m;->m:I

    .line 4990
    iget v6, v3, Lcom/tkay/expressad/exoplayer/m;->n:I

    .line 4991
    invoke-static {v1, v3}, Lcom/tkay/expressad/exoplayer/l/e;->b(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;)I

    move-result v7

    .line 4992
    array-length v8, v4

    const/4 v9, 0x1

    const/4 v10, 0x0

    if-ne v8, v9, :cond_0

    .line 4995
    new-instance v4, Lcom/tkay/expressad/exoplayer/l/e$a;

    invoke-direct {v4, v5, v6, v7}, Lcom/tkay/expressad/exoplayer/l/e$a;-><init>(III)V

    goto/16 :goto_3

    .line 4998
    :cond_0
    array-length v8, v4

    move v11, v10

    move v12, v11

    :goto_0
    if-ge v11, v8, :cond_4

    aget-object v13, v4, v11

    .line 4999
    iget-boolean v14, v1, Lcom/tkay/expressad/exoplayer/f/a;->f:Z

    invoke-static {v14, v3, v13}, Lcom/tkay/expressad/exoplayer/l/e;->a(ZLcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/m;)Z

    move-result v14

    if-eqz v14, :cond_3

    .line 5000
    iget v14, v13, Lcom/tkay/expressad/exoplayer/m;->m:I

    const/4 v15, -0x1

    if-eq v14, v15, :cond_2

    iget v14, v13, Lcom/tkay/expressad/exoplayer/m;->n:I

    if-ne v14, v15, :cond_1

    goto :goto_1

    :cond_1
    move v14, v10

    goto :goto_2

    :cond_2
    :goto_1
    move v14, v9

    :goto_2
    or-int/2addr v12, v14

    .line 5002
    iget v14, v13, Lcom/tkay/expressad/exoplayer/m;->m:I

    invoke-static {v5, v14}, Ljava/lang/Math;->max(II)I

    move-result v5

    .line 5003
    iget v14, v13, Lcom/tkay/expressad/exoplayer/m;->n:I

    invoke-static {v6, v14}, Ljava/lang/Math;->max(II)I

    move-result v6

    .line 5004
    invoke-static {v1, v13}, Lcom/tkay/expressad/exoplayer/l/e;->b(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;)I

    move-result v13

    invoke-static {v7, v13}, Ljava/lang/Math;->max(II)I

    move-result v7

    :cond_3
    add-int/lit8 v11, v11, 0x1

    goto :goto_0

    :cond_4
    if-eqz v12, :cond_5

    .line 5008
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v8, "Resolutions unknown. Codec max resolution: "

    invoke-direct {v4, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "x"

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v11, "MediaCodecVideoRenderer"

    invoke-static {v11, v4}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 5009
    invoke-static {v1, v3}, Lcom/tkay/expressad/exoplayer/l/e;->a(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;)Landroid/graphics/Point;

    move-result-object v4

    if-eqz v4, :cond_5

    .line 5011
    iget v12, v4, Landroid/graphics/Point;->x:I

    invoke-static {v5, v12}, Ljava/lang/Math;->max(II)I

    move-result v5

    .line 5012
    iget v4, v4, Landroid/graphics/Point;->y:I

    invoke-static {v6, v4}, Ljava/lang/Math;->max(II)I

    move-result v6

    .line 5013
    iget-object v4, v3, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    .line 5016
    invoke-static {v1, v4, v5, v6}, Lcom/tkay/expressad/exoplayer/l/e;->a(Lcom/tkay/expressad/exoplayer/f/a;Ljava/lang/String;II)I

    move-result v4

    .line 5014
    invoke-static {v7, v4}, Ljava/lang/Math;->max(II)I

    move-result v7

    .line 5017
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v12, "Codec max resolution adjusted to: "

    invoke-direct {v4, v12}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v11, v4}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 5020
    :cond_5
    new-instance v4, Lcom/tkay/expressad/exoplayer/l/e$a;

    invoke-direct {v4, v5, v6, v7}, Lcom/tkay/expressad/exoplayer/l/e$a;-><init>(III)V

    .line 447
    :goto_3
    iput-object v4, v0, Lcom/tkay/expressad/exoplayer/l/e;->J:Lcom/tkay/expressad/exoplayer/l/e$a;

    .line 448
    iget-boolean v5, v0, Lcom/tkay/expressad/exoplayer/l/e;->G:Z

    iget v6, v0, Lcom/tkay/expressad/exoplayer/l/e;->ah:I

    .line 5948
    new-instance v7, Landroid/media/MediaFormat;

    invoke-direct {v7}, Landroid/media/MediaFormat;-><init>()V

    .line 5950
    iget-object v8, v3, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    const-string v11, "mime"

    invoke-virtual {v7, v11, v8}, Landroid/media/MediaFormat;->setString(Ljava/lang/String;Ljava/lang/String;)V

    .line 5951
    iget v8, v3, Lcom/tkay/expressad/exoplayer/m;->m:I

    const-string v11, "width"

    invoke-virtual {v7, v11, v8}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 5952
    iget v8, v3, Lcom/tkay/expressad/exoplayer/m;->n:I

    const-string v11, "height"

    invoke-virtual {v7, v11, v8}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 5953
    iget-object v8, v3, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-static {v7, v8}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/util/List;)V

    .line 5955
    iget v8, v3, Lcom/tkay/expressad/exoplayer/m;->o:F

    const/high16 v11, -0x40800000    # -1.0f

    cmpl-float v11, v8, v11

    if-eqz v11, :cond_6

    const-string v11, "frame-rate"

    .line 6082
    invoke-virtual {v7, v11, v8}, Landroid/media/MediaFormat;->setFloat(Ljava/lang/String;F)V

    .line 5956
    :cond_6
    iget v8, v3, Lcom/tkay/expressad/exoplayer/m;->p:I

    const-string v11, "rotation-degrees"

    invoke-static {v7, v11, v8}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 5957
    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/m;->t:Lcom/tkay/expressad/exoplayer/l/b;

    if-eqz v3, :cond_7

    .line 6108
    iget v8, v3, Lcom/tkay/expressad/exoplayer/l/b;->c:I

    const-string v11, "color-transfer"

    invoke-static {v7, v11, v8}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 6109
    iget v8, v3, Lcom/tkay/expressad/exoplayer/l/b;->a:I

    const-string v11, "color-standard"

    invoke-static {v7, v11, v8}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 6110
    iget v8, v3, Lcom/tkay/expressad/exoplayer/l/b;->b:I

    const-string v11, "color-range"

    invoke-static {v7, v11, v8}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 6111
    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/l/b;->d:[B

    if-eqz v3, :cond_7

    .line 7095
    invoke-static {v3}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v3

    const-string v8, "hdr-static-info"

    invoke-virtual {v7, v8, v3}, Landroid/media/MediaFormat;->setByteBuffer(Ljava/lang/String;Ljava/nio/ByteBuffer;)V

    .line 5959
    :cond_7
    iget v3, v4, Lcom/tkay/expressad/exoplayer/l/e$a;->a:I

    const-string v8, "max-width"

    invoke-virtual {v7, v8, v3}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 5960
    iget v3, v4, Lcom/tkay/expressad/exoplayer/l/e$a;->b:I

    const-string v8, "max-height"

    invoke-virtual {v7, v8, v3}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 5961
    iget v3, v4, Lcom/tkay/expressad/exoplayer/l/e$a;->c:I

    const-string v4, "max-input-size"

    invoke-static {v7, v4, v3}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 5964
    sget v3, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v4, 0x17

    if-lt v3, v4, :cond_8

    const-string v3, "priority"

    .line 5965
    invoke-virtual {v7, v3, v10}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    :cond_8
    if-eqz v5, :cond_9

    const-string v3, "auto-frc"

    .line 5968
    invoke-virtual {v7, v3, v10}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    :cond_9
    if-eqz v6, :cond_a

    const-string v3, "tunneled-playback"

    .line 7927
    invoke-virtual {v7, v3, v9}, Landroid/media/MediaFormat;->setFeatureEnabled(Ljava/lang/String;Z)V

    const-string v3, "audio-session-id"

    .line 7928
    invoke-virtual {v7, v3, v6}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 450
    :cond_a
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    if-nez v3, :cond_c

    .line 451
    invoke-direct/range {p0 .. p1}, Lcom/tkay/expressad/exoplayer/l/e;->b(Lcom/tkay/expressad/exoplayer/f/a;)Z

    move-result v3

    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 452
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    if-nez v3, :cond_b

    .line 453
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/l/e;->B:Landroid/content/Context;

    iget-boolean v1, v1, Lcom/tkay/expressad/exoplayer/f/a;->h:Z

    invoke-static {v3, v1}, Lcom/tkay/expressad/exoplayer/l/c;->a(Landroid/content/Context;Z)Lcom/tkay/expressad/exoplayer/l/c;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    .line 455
    :cond_b
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    .line 457
    :cond_c
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    move-object/from16 v3, p4

    invoke-virtual {v2, v7, v1, v3, v10}, Landroid/media/MediaCodec;->configure(Landroid/media/MediaFormat;Landroid/view/Surface;Landroid/media/MediaCrypto;I)V

    .line 458
    sget v1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-lt v1, v4, :cond_d

    iget-boolean v1, v0, Lcom/tkay/expressad/exoplayer/l/e;->ag:Z

    if-eqz v1, :cond_d

    .line 459
    new-instance v1, Lcom/tkay/expressad/exoplayer/l/e$b;

    invoke-direct {v1, v0, v2, v10}, Lcom/tkay/expressad/exoplayer/l/e$b;-><init>(Lcom/tkay/expressad/exoplayer/l/e;Landroid/media/MediaCodec;B)V

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/l/e;->r:Lcom/tkay/expressad/exoplayer/l/e$b;

    :cond_d
    return-void
.end method

.method protected final a(Ljava/lang/String;JJ)V
    .locals 6

    .line 504
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    move-object v1, p1

    move-wide v2, p2

    move-wide v4, p4

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/l/h$a;->a(Ljava/lang/String;JJ)V

    .line 505
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/l/e;->a(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->K:Z

    return-void
.end method

.method protected final a(Z)V
    .locals 1

    .line 277
    invoke-super {p0, p1}, Lcom/tkay/expressad/exoplayer/f/b;->a(Z)V

    .line 278
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->r()Lcom/tkay/expressad/exoplayer/aa;

    move-result-object p1

    iget p1, p1, Lcom/tkay/expressad/exoplayer/aa;->b:I

    iput p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->ah:I

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 279
    :goto_0
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->ag:Z

    .line 280
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->q:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/l/h$a;->a(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 281
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->C:Lcom/tkay/expressad/exoplayer/l/f;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/l/f;->a()V

    return-void
.end method

.method protected final a([Lcom/tkay/expressad/exoplayer/m;J)V
    .locals 4

    .line 286
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->aj:J

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    .line 287
    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/l/e;->aj:J

    goto :goto_1

    .line 289
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ak:I

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->H:[J

    array-length v1, v1

    if-ne v0, v1, :cond_1

    .line 290
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Too many stream changes, so dropping offset: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->H:[J

    iget v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->ak:I

    add-int/lit8 v2, v2, -0x1

    aget-wide v2, v1, v2

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaCodecVideoRenderer"

    invoke-static {v1, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :cond_1
    add-int/lit8 v0, v0, 0x1

    .line 293
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ak:I

    .line 295
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->H:[J

    iget v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->ak:I

    add-int/lit8 v2, v1, -0x1

    aput-wide p2, v0, v2

    .line 296
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->I:[J

    add-int/lit8 v1, v1, -0x1

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->ai:J

    aput-wide v2, v0, v1

    .line 298
    :goto_1
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/f/b;->a([Lcom/tkay/expressad/exoplayer/m;J)V

    return-void
.end method

.method protected final a(JJLandroid/media/MediaCodec;Ljava/nio/ByteBuffer;IIJZ)Z
    .locals 18

    move-object/from16 v0, p0

    move-wide/from16 v1, p1

    move-object/from16 v3, p5

    move/from16 v4, p7

    move-wide/from16 v5, p9

    .line 565
    iget-wide v7, v0, Lcom/tkay/expressad/exoplayer/l/e;->P:J

    const-wide v9, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v7, v7, v9

    if-nez v7, :cond_0

    .line 566
    iput-wide v1, v0, Lcom/tkay/expressad/exoplayer/l/e;->P:J

    :cond_0
    const/4 v7, 0x1

    if-eqz p11, :cond_1

    .line 572
    invoke-direct {v0, v3, v4}, Lcom/tkay/expressad/exoplayer/l/e;->a(Landroid/media/MediaCodec;I)V

    return v7

    :cond_1
    sub-long v8, v5, v1

    .line 577
    iget-object v10, v0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    iget-object v11, v0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    const/4 v12, 0x0

    if-ne v10, v11, :cond_3

    .line 579
    invoke-static {v8, v9}, Lcom/tkay/expressad/exoplayer/l/e;->g(J)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 580
    invoke-direct {v0, v3, v4}, Lcom/tkay/expressad/exoplayer/l/e;->a(Landroid/media/MediaCodec;I)V

    return v7

    :cond_2
    return v12

    .line 586
    :cond_3
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v10

    const-wide/16 v13, 0x3e8

    mul-long/2addr v10, v13

    .line 587
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/l/e;->a_()I

    move-result v15

    const/4 v12, 0x2

    if-ne v15, v12, :cond_4

    move v12, v7

    goto :goto_0

    :cond_4
    const/4 v12, 0x0

    .line 588
    :goto_0
    iget-boolean v15, v0, Lcom/tkay/expressad/exoplayer/l/e;->O:Z

    const/16 v7, 0x15

    if-eqz v15, :cond_10

    if-eqz v12, :cond_6

    iget-wide v13, v0, Lcom/tkay/expressad/exoplayer/l/e;->V:J

    sub-long v13, v10, v13

    .line 8717
    invoke-static {v8, v9}, Lcom/tkay/expressad/exoplayer/l/e;->g(J)Z

    move-result v16

    if-eqz v16, :cond_5

    const-wide/32 v16, 0x186a0

    cmp-long v13, v13, v16

    if-lez v13, :cond_5

    const/4 v13, 0x1

    goto :goto_1

    :cond_5
    const/4 v13, 0x0

    :goto_1
    if-eqz v13, :cond_6

    goto/16 :goto_6

    :cond_6
    if-eqz v12, :cond_f

    .line 599
    iget-wide v12, v0, Lcom/tkay/expressad/exoplayer/l/e;->P:J

    cmp-long v12, v1, v12

    if-nez v12, :cond_7

    goto/16 :goto_5

    :cond_7
    sub-long v10, v10, p3

    sub-long/2addr v8, v10

    .line 609
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v10

    const-wide/16 v12, 0x3e8

    mul-long/2addr v8, v12

    add-long/2addr v8, v10

    .line 613
    iget-object v14, v0, Lcom/tkay/expressad/exoplayer/l/e;->C:Lcom/tkay/expressad/exoplayer/l/f;

    invoke-virtual {v14, v5, v6, v8, v9}, Lcom/tkay/expressad/exoplayer/l/f;->a(JJ)J

    move-result-wide v5

    sub-long v8, v5, v10

    .line 615
    div-long/2addr v8, v12

    const-wide/32 v10, -0x7a120

    cmp-long v10, v8, v10

    if-gez v10, :cond_8

    const/4 v10, 0x1

    goto :goto_2

    :cond_8
    const/4 v10, 0x0

    :goto_2
    if-eqz v10, :cond_a

    .line 10762
    invoke-virtual/range {p0 .. p2}, Lcom/tkay/expressad/exoplayer/l/e;->b(J)I

    move-result v1

    if-nez v1, :cond_9

    const/4 v1, 0x0

    goto :goto_3

    .line 10766
    :cond_9
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/l/e;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget v10, v2, Lcom/tkay/expressad/exoplayer/c/d;->i:I

    const/4 v11, 0x1

    add-int/2addr v10, v11

    iput v10, v2, Lcom/tkay/expressad/exoplayer/c/d;->i:I

    .line 10769
    iget v2, v0, Lcom/tkay/expressad/exoplayer/l/e;->U:I

    add-int/2addr v2, v1

    invoke-direct {v0, v2}, Lcom/tkay/expressad/exoplayer/l/e;->b(I)V

    .line 10770
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/l/e;->B()V

    const/4 v1, 0x1

    :goto_3
    if-eqz v1, :cond_a

    const/4 v1, 0x0

    return v1

    :cond_a
    const/4 v1, 0x0

    .line 11691
    invoke-static {v8, v9}, Lcom/tkay/expressad/exoplayer/l/e;->g(J)Z

    move-result v2

    if-eqz v2, :cond_b

    const-string v2, "dropVideoBuffer"

    .line 11742
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    .line 11743
    invoke-virtual {v3, v4, v1}, Landroid/media/MediaCodec;->releaseOutputBuffer(IZ)V

    .line 11744
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    const/4 v1, 0x1

    .line 11745
    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/l/e;->b(I)V

    return v1

    :cond_b
    const/4 v1, 0x1

    .line 625
    sget v2, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-lt v2, v7, :cond_c

    const-wide/32 v10, 0xc350

    cmp-long v2, v8, v10

    if-gez v2, :cond_e

    .line 628
    invoke-direct {v0, v3, v4, v5, v6}, Lcom/tkay/expressad/exoplayer/l/e;->a(Landroid/media/MediaCodec;IJ)V

    return v1

    :cond_c
    const-wide/16 v1, 0x7530

    cmp-long v1, v8, v1

    if-gez v1, :cond_e

    const-wide/16 v1, 0x2af8

    cmp-long v1, v8, v1

    if-lez v1, :cond_d

    const-wide/16 v1, 0x2710

    sub-long/2addr v8, v1

    const-wide/16 v1, 0x3e8

    .line 639
    :try_start_0
    div-long/2addr v8, v1

    invoke-static {v8, v9}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    .line 641
    :catch_0
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->interrupt()V

    const/4 v1, 0x0

    return v1

    .line 645
    :cond_d
    :goto_4
    invoke-direct {v0, v3, v4}, Lcom/tkay/expressad/exoplayer/l/e;->c(Landroid/media/MediaCodec;I)V

    const/4 v1, 0x1

    return v1

    :cond_e
    const/4 v1, 0x0

    return v1

    :cond_f
    :goto_5
    const/4 v1, 0x0

    return v1

    .line 591
    :cond_10
    :goto_6
    sget v1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-lt v1, v7, :cond_11

    .line 592
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v1

    invoke-direct {v0, v3, v4, v1, v2}, Lcom/tkay/expressad/exoplayer/l/e;->a(Landroid/media/MediaCodec;IJ)V

    goto :goto_7

    .line 594
    :cond_11
    invoke-direct {v0, v3, v4}, Lcom/tkay/expressad/exoplayer/l/e;->c(Landroid/media/MediaCodec;I)V

    :goto_7
    const/4 v1, 0x1

    return v1
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/f/a;)Z
    .locals 1

    .line 441
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    if-nez v0, :cond_1

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/l/e;->b(Lcom/tkay/expressad/exoplayer/f/a;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    return p1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method protected final b(Lcom/tkay/expressad/exoplayer/m;)V
    .locals 1

    .line 510
    invoke-super {p0, p1}, Lcom/tkay/expressad/exoplayer/f/b;->b(Lcom/tkay/expressad/exoplayer/m;)V

    .line 511
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/l/h$a;->a(Lcom/tkay/expressad/exoplayer/m;)V

    .line 512
    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->q:F

    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->X:F

    .line 513
    iget p1, p1, Lcom/tkay/expressad/exoplayer/m;->p:I

    iput p1, p0, Lcom/tkay/expressad/exoplayer/l/e;->W:I

    return-void
.end method

.method protected final c(J)V
    .locals 6

    .line 662
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->U:I

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->U:I

    .line 663
    :goto_0
    iget v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ak:I

    if-eqz v0, :cond_0

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->I:[J

    const/4 v3, 0x0

    aget-wide v4, v2, v3

    cmp-long v2, p1, v4

    if-ltz v2, :cond_0

    .line 665
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->H:[J

    aget-wide v4, v2, v3

    iput-wide v4, p0, Lcom/tkay/expressad/exoplayer/l/e;->aj:J

    add-int/lit8 v0, v0, -0x1

    .line 666
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ak:I

    .line 667
    invoke-static {v2, v1, v2, v3, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 673
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->I:[J

    iget v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->ak:I

    invoke-static {v0, v1, v0, v3, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method protected final n()V
    .locals 4

    .line 341
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->n()V

    const/4 v0, 0x0

    .line 342
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->S:I

    .line 343
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->R:J

    .line 344
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->V:J

    return-void
.end method

.method protected final o()V
    .locals 2

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    .line 349
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Q:J

    .line 350
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->J()V

    .line 351
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->o()V

    return-void
.end method

.method protected final p()V
    .locals 3

    const/4 v0, -0x1

    .line 356
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Y:I

    .line 357
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->Z:I

    const/high16 v0, -0x40800000    # -1.0f

    .line 358
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ab:F

    .line 359
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->X:F

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    .line 360
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->aj:J

    .line 361
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ai:J

    const/4 v0, 0x0

    .line 362
    iput v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ak:I

    .line 363
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->G()V

    .line 364
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/e;->E()V

    .line 365
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->C:Lcom/tkay/expressad/exoplayer/l/f;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/l/f;->b()V

    const/4 v1, 0x0

    .line 366
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->r:Lcom/tkay/expressad/exoplayer/l/e$b;

    .line 367
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ag:Z

    .line 369
    :try_start_0
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->p()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 372
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->q:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/l/h$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    return-void

    :catchall_0
    move-exception v0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/e;->D:Lcom/tkay/expressad/exoplayer/l/h$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->q:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/l/h$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 373
    throw v0
.end method

.method public final u()Z
    .locals 9

    .line 321
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->u()Z

    move-result v0

    const/4 v1, 0x1

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->O:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->M:Landroid/view/Surface;

    if-eqz v0, :cond_0

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/l/e;->L:Landroid/view/Surface;

    if-eq v4, v0, :cond_1

    .line 322
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/l/e;->y()Landroid/media/MediaCodec;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/l/e;->ag:Z

    if-eqz v0, :cond_2

    .line 324
    :cond_1
    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->Q:J

    return v1

    .line 326
    :cond_2
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/l/e;->Q:J

    cmp-long v0, v4, v2

    const/4 v4, 0x0

    if-nez v0, :cond_3

    return v4

    .line 329
    :cond_3
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    iget-wide v7, p0, Lcom/tkay/expressad/exoplayer/l/e;->Q:J

    cmp-long v0, v5, v7

    if-gez v0, :cond_4

    return v1

    .line 334
    :cond_4
    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/e;->Q:J

    return v4
.end method
