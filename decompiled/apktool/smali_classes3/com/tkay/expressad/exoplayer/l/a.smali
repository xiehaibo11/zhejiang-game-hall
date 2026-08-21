.class public final Lcom/tkay/expressad/exoplayer/l/a;
.super Ljava/lang/Object;


# instance fields
.field public final a:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "[B>;"
        }
    .end annotation
.end field

.field public final b:I

.field public final c:I

.field public final d:I

.field public final e:F


# direct methods
.method private constructor <init>(Ljava/util/List;IIIF)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "[B>;IIIF)V"
        }
    .end annotation

    .line 83
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 84
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/l/a;->a:Ljava/util/List;

    .line 85
    iput p2, p0, Lcom/tkay/expressad/exoplayer/l/a;->b:I

    .line 86
    iput p3, p0, Lcom/tkay/expressad/exoplayer/l/a;->c:I

    .line 87
    iput p4, p0, Lcom/tkay/expressad/exoplayer/l/a;->d:I

    .line 88
    iput p5, p0, Lcom/tkay/expressad/exoplayer/l/a;->e:F

    return-void
.end method

.method public static a(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/l/a;
    .locals 8

    const/4 v0, 0x4

    .line 49
    :try_start_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 50
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    const/4 v1, 0x3

    and-int/2addr v0, v1

    add-int/lit8 v4, v0, 0x1

    if-eq v4, v1, :cond_3

    .line 54
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 55
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    and-int/lit8 v0, v0, 0x1f

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_0

    .line 57
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/l/a;->b(Lcom/tkay/expressad/exoplayer/k/s;)[B

    move-result-object v5

    invoke-interface {v3, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 59
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v2

    move v5, v1

    :goto_1
    if-ge v5, v2, :cond_1

    .line 61
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/l/a;->b(Lcom/tkay/expressad/exoplayer/k/s;)[B

    move-result-object v6

    invoke-interface {v3, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    :cond_1
    const/high16 p0, 0x3f800000    # 1.0f

    const/4 v2, -0x1

    if-lez v0, :cond_2

    .line 68
    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [B

    .line 69
    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [B

    array-length p0, p0

    invoke-static {v0, v4, p0}, Lcom/tkay/expressad/exoplayer/k/p;->a([BII)Lcom/tkay/expressad/exoplayer/k/p$b;

    move-result-object p0

    .line 71
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k/p$b;->b:I

    .line 72
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k/p$b;->c:I

    .line 73
    iget p0, p0, Lcom/tkay/expressad/exoplayer/k/p$b;->d:F

    move v7, p0

    move v5, v0

    move v6, v1

    goto :goto_2

    :cond_2
    move v7, p0

    move v5, v2

    move v6, v5

    .line 75
    :goto_2
    new-instance p0, Lcom/tkay/expressad/exoplayer/l/a;

    move-object v2, p0

    invoke-direct/range {v2 .. v7}, Lcom/tkay/expressad/exoplayer/l/a;-><init>(Ljava/util/List;IIIF)V

    return-object p0

    .line 52
    :cond_3
    new-instance p0, Ljava/lang/IllegalStateException;

    invoke-direct {p0}, Ljava/lang/IllegalStateException;-><init>()V

    throw p0
    :try_end_0
    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    move-exception p0

    .line 78
    new-instance v0, Lcom/tkay/expressad/exoplayer/t;

    const-string v1, "Error parsing AVC config"

    invoke-direct {v0, v1, p0}, Lcom/tkay/expressad/exoplayer/t;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v0
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/k/s;)[B
    .locals 2

    .line 92
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v0

    .line 93
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->c()I

    move-result v1

    .line 94
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 95
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-static {p0, v1, v0}, Lcom/tkay/expressad/exoplayer/k/d;->a([BII)[B

    move-result-object p0

    return-object p0
.end method
