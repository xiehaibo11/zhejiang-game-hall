.class public final Lcom/tkay/expressad/exoplayer/b/o;
.super Lcom/tkay/expressad/exoplayer/f/b;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/k/n;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/b/o$a;
    }
.end annotation


# instance fields
.field private A:I

.field private B:I

.field private C:J

.field private D:Z

.field private E:Z

.field private final r:Landroid/content/Context;

.field private final s:Lcom/tkay/expressad/exoplayer/b/g$a;

.field private final t:Lcom/tkay/expressad/exoplayer/b/h;

.field private u:I

.field private v:Z

.field private w:Z

.field private x:Landroid/media/MediaFormat;

.field private y:I

.field private z:I


# direct methods
.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;)V
    .locals 1

    const/4 v0, 0x0

    .line 91
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/b/o;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;)V
    .locals 6

    const/4 v3, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v4, p3

    move-object v5, p4

    .line 135
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/b/o;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/f/c;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;)V"
        }
    .end annotation

    const/4 v4, 0x0

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    .line 114
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/b/o;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/f/c;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;",
            "Landroid/os/Handler;",
            "Lcom/tkay/expressad/exoplayer/b/g;",
            ")V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 165
    move-object v7, v0

    check-cast v7, Lcom/tkay/expressad/exoplayer/b/c;

    const/4 v0, 0x0

    new-array v8, v0, [Lcom/tkay/expressad/exoplayer/b/f;

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object v6, p5

    invoke-direct/range {v1 .. v8}, Lcom/tkay/expressad/exoplayer/b/o;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/b/c;[Lcom/tkay/expressad/exoplayer/b/f;)V

    return-void
.end method

.method public varargs constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/b/c;[Lcom/tkay/expressad/exoplayer/b/f;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/f/c;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;",
            "Landroid/os/Handler;",
            "Lcom/tkay/expressad/exoplayer/b/g;",
            "Lcom/tkay/expressad/exoplayer/b/c;",
            "[",
            "Lcom/tkay/expressad/exoplayer/b/f;",
            ")V"
        }
    .end annotation

    .line 202
    new-instance v6, Lcom/tkay/expressad/exoplayer/b/l;

    invoke-direct {v6, p6, p7}, Lcom/tkay/expressad/exoplayer/b/l;-><init>(Lcom/tkay/expressad/exoplayer/b/c;[Lcom/tkay/expressad/exoplayer/b/f;)V

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/b/o;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/b/h;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/b/h;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/f/c;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/k;",
            ">;",
            "Landroid/os/Handler;",
            "Lcom/tkay/expressad/exoplayer/b/g;",
            "Lcom/tkay/expressad/exoplayer/b/h;",
            ")V"
        }
    .end annotation

    const/4 v0, 0x0

    const/4 v1, 0x1

    .line 235
    invoke-direct {p0, v1, p2, p3, v0}, Lcom/tkay/expressad/exoplayer/f/b;-><init>(ILcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Z)V

    .line 236
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->r:Landroid/content/Context;

    .line 237
    iput-object p6, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    .line 238
    new-instance p1, Lcom/tkay/expressad/exoplayer/b/g$a;

    invoke-direct {p1, p4, p5}, Lcom/tkay/expressad/exoplayer/b/g$a;-><init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    .line 239
    new-instance p1, Lcom/tkay/expressad/exoplayer/b/o$a;

    invoke-direct {p1, p0, v0}, Lcom/tkay/expressad/exoplayer/b/o$a;-><init>(Lcom/tkay/expressad/exoplayer/b/o;B)V

    invoke-interface {p6, p1}, Lcom/tkay/expressad/exoplayer/b/h;->a(Lcom/tkay/expressad/exoplayer/b/h$c;)V

    return-void
.end method

.method private static C()V
    .locals 0

    return-void
.end method

.method private static D()V
    .locals 0

    return-void
.end method

.method private static E()V
    .locals 0

    return-void
.end method

.method private F()V
    .locals 4

    .line 650
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/o;->v()Z

    move-result v1

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/b/h;->a(Z)J

    move-result-wide v0

    const-wide/high16 v2, -0x8000000000000000L

    cmp-long v2, v0, v2

    if-eqz v2, :cond_1

    .line 653
    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/b/o;->E:Z

    if-eqz v2, :cond_0

    goto :goto_0

    .line 655
    :cond_0
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/o;->C:J

    invoke-static {v2, v3, v0, v1}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    :goto_0
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->C:J

    const/4 v0, 0x0

    .line 656
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->E:Z

    :cond_1
    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;)I
    .locals 2

    .line 3602
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x18

    if-ge v0, v1, :cond_1

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    const-string v0, "OMX.google.raw.decoder"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    .line 3608
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x17

    if-ne v0, v1, :cond_0

    .line 3609
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->r:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "android.software.leanback"

    .line 3611
    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->hasSystemFeature(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    :cond_0
    if-eqz p1, :cond_1

    const/4 p1, -0x1

    return p1

    .line 3620
    :cond_1
    iget p1, p2, Lcom/tkay/expressad/exoplayer/m;->i:I

    return p1
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/m;Ljava/lang/String;I)Landroid/media/MediaFormat;
    .locals 2

    .line 634
    new-instance v0, Landroid/media/MediaFormat;

    invoke-direct {v0}, Landroid/media/MediaFormat;-><init>()V

    const-string v1, "mime"

    .line 636
    invoke-virtual {v0, v1, p1}, Landroid/media/MediaFormat;->setString(Ljava/lang/String;Ljava/lang/String;)V

    .line 637
    iget p1, p0, Lcom/tkay/expressad/exoplayer/m;->u:I

    const-string v1, "channel-count"

    invoke-virtual {v0, v1, p1}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 638
    iget p1, p0, Lcom/tkay/expressad/exoplayer/m;->v:I

    const-string v1, "sample-rate"

    invoke-virtual {v0, v1, p1}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 639
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-static {v0, p0}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/util/List;)V

    const-string p0, "max-input-size"

    .line 641
    invoke-static {v0, p0, p2}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 643
    sget p0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 p1, 0x17

    if-lt p0, p1, :cond_0

    const/4 p0, 0x0

    const-string p1, "priority"

    .line 644
    invoke-virtual {v0, p1, p0}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    :cond_0
    return-object v0
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/b/o;)Lcom/tkay/expressad/exoplayer/b/g$a;
    .locals 0

    .line 67
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/b/o;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    return-object p0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/m;)Z
    .locals 2

    .line 669
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->u:I

    iget v1, p1, Lcom/tkay/expressad/exoplayer/m;->u:I

    if-ne v0, v1, :cond_0

    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->v:I

    iget v1, p1, Lcom/tkay/expressad/exoplayer/m;->v:I

    if-ne v0, v1, :cond_0

    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->x:I

    if-nez v0, :cond_0

    iget v0, p0, Lcom/tkay/expressad/exoplayer/m;->y:I

    if-nez v0, :cond_0

    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->x:I

    if-nez v0, :cond_0

    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->y:I

    if-nez v0, :cond_0

    .line 676
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/m;->b(Lcom/tkay/expressad/exoplayer/m;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private a(Ljava/lang/String;)Z
    .locals 1

    .line 308
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/o;->e(Ljava/lang/String;)I

    move-result p1

    if-eqz p1, :cond_0

    .line 309
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/b/h;->a(I)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method private b(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;)I
    .locals 2

    .line 602
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x18

    if-ge v0, v1, :cond_1

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    const-string v0, "OMX.google.raw.decoder"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    .line 608
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x17

    if-ne v0, v1, :cond_0

    .line 609
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->r:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "android.software.leanback"

    .line 611
    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->hasSystemFeature(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    :cond_0
    if-eqz p1, :cond_1

    const/4 p1, -0x1

    return p1

    .line 620
    :cond_1
    iget p1, p2, Lcom/tkay/expressad/exoplayer/m;->i:I

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/b/o;)Z
    .locals 1

    const/4 v0, 0x1

    .line 67
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->E:Z

    return v0
.end method

.method private static b(Ljava/lang/String;)Z
    .locals 2

    .line 687
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x18

    if-ge v0, v1, :cond_1

    const-string v0, "OMX.SEC.aac.dec"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_1

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    const-string v0, "samsung"

    .line 688
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_1

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v0, "zeroflte"

    .line 689
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_0

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v0, "herolte"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_0

    sget-object p0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v0, "heroqlte"

    .line 690
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    :cond_0
    const/4 p0, 0x1

    return p0

    :cond_1
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method protected final a(Lcom/tkay/expressad/exoplayer/f/a;Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/m;)I
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/d/g;Lcom/tkay/expressad/exoplayer/m;)I
    .locals 11
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

    .line 246
    iget-object v0, p3, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    .line 247
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/o;->a(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    .line 250
    :cond_0
    sget v1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v3, 0x15

    if-lt v1, v3, :cond_1

    const/16 v1, 0x20

    goto :goto_0

    :cond_1
    move v1, v2

    .line 251
    :goto_0
    iget-object v4, p3, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    invoke-static {p2, v4}, Lcom/tkay/expressad/exoplayer/b/o;->a(Lcom/tkay/expressad/exoplayer/d/g;Lcom/tkay/expressad/exoplayer/d/e;)Z

    move-result p2

    const/4 v4, 0x4

    if-eqz p2, :cond_2

    .line 252
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/b/o;->a(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 253
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/f/c;->a()Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object v5

    if-eqz v5, :cond_2

    or-int/lit8 p1, v1, 0x8

    or-int/2addr p1, v4

    return p1

    :cond_2
    const-string v5, "audio/raw"

    .line 256
    invoke-virtual {v5, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    const/4 v6, 0x1

    if-eqz v5, :cond_3

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    iget v7, p3, Lcom/tkay/expressad/exoplayer/m;->w:I

    invoke-interface {v5, v7}, Lcom/tkay/expressad/exoplayer/b/h;->a(I)Z

    move-result v5

    if-eqz v5, :cond_4

    :cond_3
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    const/4 v7, 0x2

    .line 257
    invoke-interface {v5, v7}, Lcom/tkay/expressad/exoplayer/b/h;->a(I)Z

    move-result v5

    if-nez v5, :cond_5

    :cond_4
    return v6

    .line 262
    :cond_5
    iget-object v5, p3, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    if-eqz v5, :cond_6

    move v8, v2

    move v9, v8

    .line 264
    :goto_1
    iget v10, v5, Lcom/tkay/expressad/exoplayer/d/e;->b:I

    if-ge v8, v10, :cond_7

    .line 265
    invoke-virtual {v5, v8}, Lcom/tkay/expressad/exoplayer/d/e;->a(I)Lcom/tkay/expressad/exoplayer/d/e$a;

    move-result-object v10

    iget-boolean v10, v10, Lcom/tkay/expressad/exoplayer/d/e$a;->d:Z

    or-int/2addr v9, v10

    add-int/lit8 v8, v8, 0x1

    goto :goto_1

    :cond_6
    move v9, v2

    .line 268
    :cond_7
    invoke-interface {p1, v0, v9}, Lcom/tkay/expressad/exoplayer/f/c;->a(Ljava/lang/String;Z)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object v5

    if-nez v5, :cond_9

    if-eqz v9, :cond_8

    .line 271
    invoke-interface {p1, v0, v2}, Lcom/tkay/expressad/exoplayer/f/c;->a(Ljava/lang/String;Z)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object p1

    if-eqz p1, :cond_8

    return v7

    :cond_8
    return v6

    :cond_9
    if-nez p2, :cond_a

    return v7

    .line 278
    :cond_a
    sget p1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-lt p1, v3, :cond_c

    iget p1, p3, Lcom/tkay/expressad/exoplayer/m;->v:I

    const/4 p2, -0x1

    if-eq p1, p2, :cond_b

    iget p1, p3, Lcom/tkay/expressad/exoplayer/m;->v:I

    .line 280
    invoke-virtual {v5, p1}, Lcom/tkay/expressad/exoplayer/f/a;->a(I)Z

    move-result p1

    if-eqz p1, :cond_d

    :cond_b
    iget p1, p3, Lcom/tkay/expressad/exoplayer/m;->u:I

    if-eq p1, p2, :cond_c

    iget p1, p3, Lcom/tkay/expressad/exoplayer/m;->u:I

    .line 282
    invoke-virtual {v5, p1}, Lcom/tkay/expressad/exoplayer/f/a;->b(I)Z

    move-result p1

    if-eqz p1, :cond_d

    :cond_c
    move v2, v6

    :cond_d
    if-eqz v2, :cond_e

    goto :goto_2

    :cond_e
    const/4 v4, 0x3

    :goto_2
    or-int/lit8 p1, v1, 0x8

    or-int/2addr p1, v4

    return p1
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/m;Z)Lcom/tkay/expressad/exoplayer/f/a;
    .locals 1

    .line 290
    iget-object v0, p2, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/b/o;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 291
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/f/c;->a()Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    .line 296
    :cond_0
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/f/b;->a(Lcom/tkay/expressad/exoplayer/f/c;Lcom/tkay/expressad/exoplayer/m;Z)Lcom/tkay/expressad/exoplayer/f/a;

    move-result-object p1

    return-object p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;
    .locals 1

    .line 493
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/b/h;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    move-result-object p1

    return-object p1
.end method

.method public final a(ILjava/lang/Object;)V
    .locals 1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_1

    const/4 v0, 0x3

    if-eq p1, v0, :cond_0

    .line 563
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/f/b;->a(ILjava/lang/Object;)V

    return-void

    .line 559
    :cond_0
    check-cast p2, Lcom/tkay/expressad/exoplayer/b/b;

    .line 560
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {p1, p2}, Lcom/tkay/expressad/exoplayer/b/h;->a(Lcom/tkay/expressad/exoplayer/b/b;)V

    return-void

    .line 556
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    check-cast p2, Ljava/lang/Float;

    invoke-virtual {p2}, Ljava/lang/Float;->floatValue()F

    move-result p2

    invoke-interface {p1, p2}, Lcom/tkay/expressad/exoplayer/b/h;->a(F)V

    return-void
.end method

.method protected final a(JZ)V
    .locals 0

    .line 439
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/f/b;->a(JZ)V

    .line 440
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {p3}, Lcom/tkay/expressad/exoplayer/b/h;->i()V

    .line 441
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->C:J

    const/4 p1, 0x1

    .line 442
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->D:Z

    .line 443
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->E:Z

    return-void
.end method

.method protected final a(Landroid/media/MediaCodec;Landroid/media/MediaFormat;)V
    .locals 7

    .line 371
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->x:Landroid/media/MediaFormat;

    if-eqz p1, :cond_0

    const-string p2, "mime"

    .line 372
    invoke-virtual {p1, p2}, Landroid/media/MediaFormat;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/o;->e(Ljava/lang/String;)I

    move-result p1

    .line 373
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/b/o;->x:Landroid/media/MediaFormat;

    goto :goto_0

    .line 375
    :cond_0
    iget p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->y:I

    :goto_0
    move v1, p1

    const-string p1, "channel-count"

    .line 378
    invoke-virtual {p2, p1}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result v2

    const-string p1, "sample-rate"

    .line 379
    invoke-virtual {p2, p1}, Landroid/media/MediaFormat;->getInteger(Ljava/lang/String;)I

    move-result v3

    .line 381
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->w:Z

    if-eqz p1, :cond_1

    const/4 p1, 0x6

    if-ne v2, p1, :cond_1

    iget p2, p0, Lcom/tkay/expressad/exoplayer/b/o;->z:I

    if-ge p2, p1, :cond_1

    .line 382
    new-array p1, p2, [I

    const/4 p2, 0x0

    .line 383
    :goto_1
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->z:I

    if-ge p2, v0, :cond_2

    .line 384
    aput p2, p1, p2

    add-int/lit8 p2, p2, 0x1

    goto :goto_1

    :cond_1
    const/4 p1, 0x0

    :cond_2
    move-object v4, p1

    .line 391
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    iget v5, p0, Lcom/tkay/expressad/exoplayer/b/o;->A:I

    iget v6, p0, Lcom/tkay/expressad/exoplayer/b/o;->B:I

    invoke-interface/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/b/h;->a(III[III)V
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/b/h$a; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 394
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/o;->s()I

    move-result p2

    invoke-static {p1, p2}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object p1

    throw p1
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/c/e;)V
    .locals 4

    .line 503
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->D:Z

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/c/e;->b()Z

    move-result v0

    if-nez v0, :cond_1

    .line 507
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/o;->C:J

    sub-long/2addr v0, v2

    invoke-static {v0, v1}, Ljava/lang/Math;->abs(J)J

    move-result-wide v0

    const-wide/32 v2, 0x7a120

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    .line 508
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->C:J

    :cond_0
    const/4 p1, 0x0

    .line 510
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->D:Z

    :cond_1
    return-void
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/f/a;Landroid/media/MediaCodec;Lcom/tkay/expressad/exoplayer/m;Landroid/media/MediaCrypto;)V
    .locals 6

    .line 315
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/o;->q()[Lcom/tkay/expressad/exoplayer/m;

    .line 1602
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x17

    const/4 v2, 0x1

    const/16 v3, 0x18

    const/4 v4, 0x0

    if-ge v0, v3, :cond_1

    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    const-string v5, "OMX.google.raw.decoder"

    invoke-virtual {v5, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1608
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ne v0, v1, :cond_0

    .line 1609
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->r:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v5, "android.software.leanback"

    .line 1611
    invoke-virtual {v0, v5}, Landroid/content/pm/PackageManager;->hasSystemFeature(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v4

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    if-eqz v0, :cond_1

    const/4 v0, -0x1

    goto :goto_1

    .line 1620
    :cond_1
    iget v0, p3, Lcom/tkay/expressad/exoplayer/m;->i:I

    .line 315
    :goto_1
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->u:I

    .line 316
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/f/a;->c:Ljava/lang/String;

    .line 1687
    sget v5, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ge v5, v3, :cond_2

    const-string v3, "OMX.SEC.aac.dec"

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    const-string v3, "samsung"

    .line 1688
    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v3, "zeroflte"

    .line 1689
    invoke-virtual {v0, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_3

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v3, "herolte"

    invoke-virtual {v0, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_3

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v3, "heroqlte"

    .line 1690
    invoke-virtual {v0, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_2

    :cond_2
    move v2, v4

    .line 316
    :cond_3
    :goto_2
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/b/o;->w:Z

    .line 317
    iget-boolean v0, p1, Lcom/tkay/expressad/exoplayer/f/a;->i:Z

    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->v:Z

    .line 318
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/f/a;->d:Ljava/lang/String;

    if-nez v0, :cond_4

    const-string p1, "audio/raw"

    goto :goto_3

    :cond_4
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/f/a;->d:Ljava/lang/String;

    .line 319
    :goto_3
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->u:I

    .line 2634
    new-instance v2, Landroid/media/MediaFormat;

    invoke-direct {v2}, Landroid/media/MediaFormat;-><init>()V

    const-string v3, "mime"

    .line 2636
    invoke-virtual {v2, v3, p1}, Landroid/media/MediaFormat;->setString(Ljava/lang/String;Ljava/lang/String;)V

    .line 2637
    iget p1, p3, Lcom/tkay/expressad/exoplayer/m;->u:I

    const-string v5, "channel-count"

    invoke-virtual {v2, v5, p1}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 2638
    iget p1, p3, Lcom/tkay/expressad/exoplayer/m;->v:I

    const-string v5, "sample-rate"

    invoke-virtual {v2, v5, p1}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    .line 2639
    iget-object p1, p3, Lcom/tkay/expressad/exoplayer/m;->j:Ljava/util/List;

    invoke-static {v2, p1}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/util/List;)V

    const-string p1, "max-input-size"

    .line 2641
    invoke-static {v2, p1, v0}, Lcom/tkay/expressad/exoplayer/f/e;->a(Landroid/media/MediaFormat;Ljava/lang/String;I)V

    .line 2643
    sget p1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-lt p1, v1, :cond_5

    const-string p1, "priority"

    .line 2644
    invoke-virtual {v2, p1, v4}, Landroid/media/MediaFormat;->setInteger(Ljava/lang/String;I)V

    :cond_5
    const/4 p1, 0x0

    .line 320
    invoke-virtual {p2, v2, p1, p4, v4}, Landroid/media/MediaCodec;->configure(Landroid/media/MediaFormat;Landroid/view/Surface;Landroid/media/MediaCrypto;I)V

    .line 321
    iget-boolean p2, p0, Lcom/tkay/expressad/exoplayer/b/o;->v:Z

    if-eqz p2, :cond_6

    .line 323
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/b/o;->x:Landroid/media/MediaFormat;

    .line 324
    iget-object p1, p3, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    invoke-virtual {v2, v3, p1}, Landroid/media/MediaFormat;->setString(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 326
    :cond_6
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->x:Landroid/media/MediaFormat;

    return-void
.end method

.method protected final a(Ljava/lang/String;JJ)V
    .locals 6

    .line 350
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    move-object v1, p1

    move-wide v2, p2

    move-wide v4, p4

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/b/g$a;->a(Ljava/lang/String;JJ)V

    return-void
.end method

.method protected final a(Z)V
    .locals 1

    .line 427
    invoke-super {p0, p1}, Lcom/tkay/expressad/exoplayer/f/b;->a(Z)V

    .line 428
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->q:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/b/g$a;->a(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 429
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/o;->r()Lcom/tkay/expressad/exoplayer/aa;

    move-result-object p1

    iget p1, p1, Lcom/tkay/expressad/exoplayer/aa;->b:I

    if-eqz p1, :cond_0

    .line 431
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/b/h;->c(I)V

    return-void

    .line 433
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/b/h;->g()V

    return-void
.end method

.method protected final a(JJLandroid/media/MediaCodec;Ljava/nio/ByteBuffer;IIJZ)Z
    .locals 0

    .line 518
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->v:Z

    const/4 p2, 0x0

    const/4 p3, 0x1

    if-eqz p1, :cond_0

    and-int/lit8 p1, p8, 0x2

    if-eqz p1, :cond_0

    .line 520
    invoke-virtual {p5, p7, p2}, Landroid/media/MediaCodec;->releaseOutputBuffer(IZ)V

    return p3

    :cond_0
    if-eqz p11, :cond_1

    .line 525
    invoke-virtual {p5, p7, p2}, Landroid/media/MediaCodec;->releaseOutputBuffer(IZ)V

    .line 526
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget p2, p1, Lcom/tkay/expressad/exoplayer/c/d;->f:I

    add-int/2addr p2, p3

    iput p2, p1, Lcom/tkay/expressad/exoplayer/c/d;->f:I

    .line 527
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/b/h;->b()V

    return p3

    .line 532
    :cond_1
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {p1, p6, p9, p10}, Lcom/tkay/expressad/exoplayer/b/h;->a(Ljava/nio/ByteBuffer;J)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 533
    invoke-virtual {p5, p7, p2}, Landroid/media/MediaCodec;->releaseOutputBuffer(IZ)V

    .line 534
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->q:Lcom/tkay/expressad/exoplayer/c/d;

    iget p2, p1, Lcom/tkay/expressad/exoplayer/c/d;->e:I

    add-int/2addr p2, p3

    iput p2, p1, Lcom/tkay/expressad/exoplayer/c/d;->e:I
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/b/h$b; {:try_start_0 .. :try_end_0} :catch_1
    .catch Lcom/tkay/expressad/exoplayer/b/h$d; {:try_start_0 .. :try_end_0} :catch_0

    return p3

    :cond_2
    return p2

    :catch_0
    move-exception p1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 538
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/o;->s()I

    move-result p2

    invoke-static {p1, p2}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object p1

    throw p1
.end method

.method protected final b(Lcom/tkay/expressad/exoplayer/m;)V
    .locals 2

    .line 355
    invoke-super {p0, p1}, Lcom/tkay/expressad/exoplayer/f/b;->b(Lcom/tkay/expressad/exoplayer/m;)V

    .line 356
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/b/g$a;->a(Lcom/tkay/expressad/exoplayer/m;)V

    .line 359
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    const-string v1, "audio/raw"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->w:I

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    .line 360
    :goto_0
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->y:I

    .line 361
    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->u:I

    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->z:I

    .line 362
    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->x:I

    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->A:I

    .line 363
    iget p1, p1, Lcom/tkay/expressad/exoplayer/m;->y:I

    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/o;->B:I

    return-void
.end method

.method public final c()Lcom/tkay/expressad/exoplayer/k/n;
    .locals 0

    return-object p0
.end method

.method public final d()J
    .locals 2

    .line 485
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/o;->a_()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 486
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/o;->F()V

    .line 488
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->C:J

    return-wide v0
.end method

.method public final e()Lcom/tkay/expressad/exoplayer/v;
    .locals 1

    .line 498
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->f()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v0

    return-object v0
.end method

.method protected final n()V
    .locals 1

    .line 448
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->n()V

    .line 449
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->a()V

    return-void
.end method

.method protected final o()V
    .locals 1

    .line 454
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/o;->F()V

    .line 455
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->h()V

    .line 456
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->o()V

    return-void
.end method

.method protected final p()V
    .locals 3

    .line 462
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->j()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 465
    :try_start_1
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->p()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 468
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/o;->q:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    return-void

    :catchall_0
    move-exception v0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/o;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/o;->q:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 469
    throw v0

    :catchall_1
    move-exception v0

    .line 465
    :try_start_2
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->p()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 468
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/o;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/o;->q:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 470
    throw v0

    :catchall_2
    move-exception v0

    .line 468
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/o;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/o;->q:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 469
    throw v0
.end method

.method public final u()Z
    .locals 1

    .line 480
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->e()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->u()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final v()Z
    .locals 1

    .line 475
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/f/b;->v()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->d()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method protected final w()V
    .locals 2

    .line 546
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->c()V
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/b/h$d; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 548
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/o;->s()I

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v0

    throw v0
.end method
